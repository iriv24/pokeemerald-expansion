#include "global.h"
#include "battle_z_move.h"
#include "malloc.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_ai_util.h"
#include "battle_ai_main.h"
#include "battle_ai_switch_items.h"
#include "battle_factory.h"
#include "battle_setup.h"
#include "event_data.h"
#include "data.h"
#include "item.h"
#include "pokemon.h"
#include "random.h"
#include "recorded_battle.h"
#include "util.h"
#include "constants/abilities.h"
#include "constants/battle_ai.h"
#include "constants/battle_move_effects.h"
#include "constants/hold_effects.h"
#include "constants/moves.h"
#include "constants/items.h"

#define CHECK_MOVE_FLAG(flag)                                                                                   \
    s32 i;                                                                                                      \
    u16 *moves = GetMovesArray(battler);                                                                        \
    for (i = 0; i < MAX_MON_MOVES; i++)                                                                         \
    {                                                                                                           \
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && gMovesInfo[moves[i]].flag)                 \
            return TRUE;                                                                                        \
    }                                                                                                           \
    return FALSE

// Functions

u32 AI_GetDamage(u32 battlerAtk, u32 battlerDef, u32 moveIndex, enum DamageCalcContext calcContext, struct AiLogicData *aiData)
{
    switch (calcContext)
    {
        case AI_ATTACKING_ON_FIELD:
        case AI_DEFENDING_SETUP:
            return aiData->simulatedDmg[battlerAtk][battlerDef][moveIndex].maximum;
        
        case AI_ATTACKING_PARTNER:
            return aiData->simulatedDmg[battlerAtk][battlerDef][moveIndex].minimum;
        
        case AI_ATTACKING_IN_SWITCHIN_CALC:
        case AI_DEFENDING_NORMAL:
        default:
            return aiData->simulatedDmg[battlerAtk][battlerDef][moveIndex].median;
    }
}

bool32 AI_IsFaster(u32 battlerAi, u32 battlerDef, u32 aiMove, u32 playerMove, enum ConsiderPriority considerPriority)
{
    return (AI_WhoStrikesFirst(battlerAi, battlerDef, aiMove, playerMove, considerPriority) == AI_IS_FASTER);
}

bool32 AI_IsSlower(u32 battlerAi, u32 battlerDef, u32 aiMove, u32 playerMove, enum ConsiderPriority considerPriority)
{
    return (AI_WhoStrikesFirst(battlerAi, battlerDef, aiMove, playerMove, considerPriority) == AI_IS_SLOWER);
}

u32 GetAIChosenMove(u32 battlerId)
{
    return (gBattleMons[battlerId].moves[gBattleStruct->aiMoveOrAction[battlerId]]);
}

// This function is meant to be used in tandem with
// AI_RandLessThan
// Lower HP means higher % chance to explode
// hp 10% -> 229/255 -> ~90% chance to return TRUE from AI_RandLessThan
// hp 50% -> ~45% chance
// hp 89% -> ~2.8% chance
// hp 90%+ 0/255-> 0% chance to return TRUE from AI_RandLessThan
u32 GetAIExplosionChanceFromHP(u32 hpPercent)
{
    if (hpPercent >= 90)
        return 0;
    if (hpPercent <= 10)
        return 229; // ~90% of 255
    return (90 - hpPercent) * 229 / 80;
}

bool32 AI_RandLessThan(u32 val)
{
    if ((Random() % 0xFF) < val)
        return TRUE;
    return FALSE;
}

bool32 IsAiVsAiBattle(void)
{
    return (B_FLAG_AI_VS_AI_BATTLE && FlagGet(B_FLAG_AI_VS_AI_BATTLE));
}

bool32 BattlerHasAi(u32 battlerId)
{
    switch (GetBattlerPosition(battlerId))
    {
    case B_POSITION_PLAYER_LEFT:
        if (IsAiVsAiBattle())
            return TRUE;
    default:
        return FALSE;
    case B_POSITION_OPPONENT_LEFT:
        return TRUE;
    case B_POSITION_PLAYER_RIGHT:
        if ((gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER) || IsAiVsAiBattle())
            return TRUE;
        else
            return FALSE;
    case B_POSITION_OPPONENT_RIGHT:
        return TRUE;
    }
}

bool32 IsAiBattlerAware(u32 battlerId)
{
    if (AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_LEFT] & AI_FLAG_OMNISCIENT
     || AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_RIGHT] & AI_FLAG_OMNISCIENT)
        return TRUE;

    return BattlerHasAi(battlerId);
}

void ClearBattlerMoveHistory(u32 battlerId)
{
    memset(BATTLE_HISTORY->usedMoves[battlerId], 0, sizeof(BATTLE_HISTORY->usedMoves[battlerId]));
    memset(BATTLE_HISTORY->moveHistory[battlerId], 0, sizeof(BATTLE_HISTORY->moveHistory[battlerId]));
    BATTLE_HISTORY->moveHistoryIndex[battlerId] = 0;
}

void RecordLastUsedMoveBy(u32 battlerId, u32 move)
{
    u8 *index = &BATTLE_HISTORY->moveHistoryIndex[battlerId];

    if (++(*index) >= AI_MOVE_HISTORY_COUNT)
        *index = 0;
    BATTLE_HISTORY->moveHistory[battlerId][*index] = move;
}

void RecordKnownMove(u32 battlerId, u32 move)
{
    s32 i;
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (BATTLE_HISTORY->usedMoves[battlerId][i] == move)
            break;
        if (BATTLE_HISTORY->usedMoves[battlerId][i] == MOVE_NONE)
        {
            BATTLE_HISTORY->usedMoves[battlerId][i] = move;
            AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].moves[i] = move;
            break;
        }
    }
}

void RecordAllMoves(u32 battler)
{
    memcpy(AI_PARTY->mons[GetBattlerSide(battler)][gBattlerPartyIndexes[battler]].moves, gBattleMons[battler].moves, MAX_MON_MOVES * sizeof(u16));
}

void RecordAbilityBattle(u32 battlerId, u32 abilityId)
{
    BATTLE_HISTORY->abilities[battlerId] = abilityId;
    AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].ability = abilityId;
}

void ClearBattlerAbilityHistory(u32 battlerId)
{
    BATTLE_HISTORY->abilities[battlerId] = ABILITY_NONE;
}

void RecordItemEffectBattle(u32 battlerId, u32 itemEffect)
{
    BATTLE_HISTORY->itemEffects[battlerId] = itemEffect;
    AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].heldEffect = itemEffect;
}

void ClearBattlerItemEffectHistory(u32 battlerId)
{
    BATTLE_HISTORY->itemEffects[battlerId] = 0;
}

void SaveBattlerData(u32 battlerId)
{
    if (!BattlerHasAi(battlerId) && !AI_THINKING_STRUCT->saved[battlerId].saved)
    {
        u32 i;

        AI_THINKING_STRUCT->saved[battlerId].saved = TRUE;
        AI_THINKING_STRUCT->saved[battlerId].ability = gBattleMons[battlerId].ability;
        AI_THINKING_STRUCT->saved[battlerId].heldItem = gBattleMons[battlerId].item;
        AI_THINKING_STRUCT->saved[battlerId].species = gBattleMons[battlerId].species;
        for (i = 0; i < 4; i++)
            AI_THINKING_STRUCT->saved[battlerId].moves[i] = gBattleMons[battlerId].moves[i];
    }
    // Save and restore types even for AI controlled battlers in case it gets changed during move evaluation process.
    AI_THINKING_STRUCT->saved[battlerId].types[0] = gBattleMons[battlerId].types[0];
    AI_THINKING_STRUCT->saved[battlerId].types[1] = gBattleMons[battlerId].types[1];
}

static bool32 ShouldFailForIllusion(u32 illusionSpecies, u32 battlerId)
{
    return FALSE;
    // u32 i, j;
    // const struct LevelUpMove *learnset;

    // if (BATTLE_HISTORY->abilities[battlerId] == ABILITY_ILLUSION)
    //     return FALSE;

    // // Don't fall for Illusion if the mon used a move it cannot know.
    // for (i = 0; i < MAX_MON_MOVES; i++)
    // {
    //     u32 move = BATTLE_HISTORY->usedMoves[battlerId][i];
    //     if (move == MOVE_NONE)
    //         continue;

    //     learnset = GetSpeciesLevelUpLearnset(illusionSpecies);
    //     for (j = 0; learnset[j].move != MOVE_UNAVAILABLE; j++)
    //     {
    //         if (learnset[j].move == move)
    //             break;
    //     }
    //     // The used move is in the learnsets of the fake species.
    //     if (learnset[j].move != MOVE_UNAVAILABLE)
    //         continue;

    //     // The used move can be learned from Tm/Hm or Move Tutors.
    //     if (CanLearnTeachableMove(illusionSpecies, move))
    //         continue;

    //     // 'Illegal move', AI won't fail for the illusion.
    //     return FALSE;
    // }

    // return TRUE;
}

void SetBattlerData(u32 battlerId)
{
    if (!BattlerHasAi(battlerId) && AI_THINKING_STRUCT->saved[battlerId].saved)
    {
        u32 i, species, illusionSpecies, side;
        side = GetBattlerSide(battlerId);

        // Simulate Illusion
        species = gBattleMons[battlerId].species;
        illusionSpecies = GetIllusionMonSpecies(battlerId);
        if (illusionSpecies != SPECIES_NONE && ShouldFailForIllusion(illusionSpecies, battlerId))
        {
            // If the battler's type has not been changed, AI assumes the types of the illusion mon.
            if (gBattleMons[battlerId].types[0] == gSpeciesInfo[species].types[0]
                && gBattleMons[battlerId].types[1] == gSpeciesInfo[species].types[1])
            {
                gBattleMons[battlerId].types[0] = gSpeciesInfo[illusionSpecies].types[0];
                gBattleMons[battlerId].types[1] = gSpeciesInfo[illusionSpecies].types[1];
            }
            species = illusionSpecies;
        }

        // Use the known battler's ability.
        if (AI_PARTY->mons[side][gBattlerPartyIndexes[battlerId]].ability != ABILITY_NONE)
            gBattleMons[battlerId].ability = AI_PARTY->mons[side][gBattlerPartyIndexes[battlerId]].ability;
        // Check if mon can only have one ability.
        else if (gSpeciesInfo[species].abilities[1] == ABILITY_NONE
                || gSpeciesInfo[species].abilities[1] == gSpeciesInfo[species].abilities[0])
            gBattleMons[battlerId].ability = gSpeciesInfo[species].abilities[0];
        // The ability is unknown.
        else
            gBattleMons[battlerId].ability = ABILITY_NONE;

        if (AI_PARTY->mons[side][gBattlerPartyIndexes[battlerId]].heldEffect == 0)
            gBattleMons[battlerId].item = 0;

        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (AI_PARTY->mons[side][gBattlerPartyIndexes[battlerId]].moves[i] == 0)
                gBattleMons[battlerId].moves[i] = 0;
        }
    }
}

void RestoreBattlerData(u32 battlerId)
{
    if (!BattlerHasAi(battlerId) && AI_THINKING_STRUCT->saved[battlerId].saved)
    {
        u32 i;

        AI_THINKING_STRUCT->saved[battlerId].saved = FALSE;
        gBattleMons[battlerId].ability = AI_THINKING_STRUCT->saved[battlerId].ability;
        gBattleMons[battlerId].item = AI_THINKING_STRUCT->saved[battlerId].heldItem;
        gBattleMons[battlerId].species = AI_THINKING_STRUCT->saved[battlerId].species;
        for (i = 0; i < 4; i++)
            gBattleMons[battlerId].moves[i] = AI_THINKING_STRUCT->saved[battlerId].moves[i];
    }
    gBattleMons[battlerId].types[0] = AI_THINKING_STRUCT->saved[battlerId].types[0];
    gBattleMons[battlerId].types[1] = AI_THINKING_STRUCT->saved[battlerId].types[1];
}

u32 GetHealthPercentage(u32 battlerId)
{
    return (u32)((100 * gBattleMons[battlerId].hp) / gBattleMons[battlerId].maxHP);
}

bool32 AtMaxHp(u32 battlerId)
{
    if (AI_DATA->hpPercents[battlerId] == 100)
        return TRUE;
    return FALSE;
}

bool32 AI_CanBattlerEscape(u32 battler)
{
    u32 holdEffect = AI_DATA->holdEffects[battler];

    if (B_GHOSTS_ESCAPE >= GEN_6 && IS_BATTLER_OF_TYPE(battler, TYPE_GHOST))
        return TRUE;
    if (holdEffect == HOLD_EFFECT_SHED_SHELL)
        return TRUE;

    return FALSE;
}

bool32 IsBattlerTrapped(u32 battlerAtk, u32 battlerDef)
{   
    if (IS_BATTLER_OF_TYPE(battlerDef, TYPE_GHOST))
        return FALSE;
    if (gBattleMons[battlerDef].status2 & (STATUS2_ESCAPE_PREVENTION | STATUS2_WRAPPED))
        return TRUE;
    if (gStatuses3[battlerDef] & (STATUS3_ROOTED | STATUS3_SKY_DROPPED))
        return TRUE;
    if (gFieldStatuses & STATUS_FIELD_FAIRY_LOCK)
        return TRUE;
    if (AI_IsAbilityOnSide(battlerAtk, ABILITY_SHADOW_TAG)
        && (B_SHADOW_TAG_ESCAPE >= GEN_4 && AI_DATA->abilities[battlerDef] != ABILITY_SHADOW_TAG))
        return TRUE;
    if (AI_IsAbilityOnSide(battlerAtk, ABILITY_ARENA_TRAP)
        && IsBattlerGrounded(battlerDef))
        return TRUE;
    if (AI_IsAbilityOnSide(battlerAtk, ABILITY_MAGNET_PULL)
        && IS_BATTLER_OF_TYPE(battlerDef, TYPE_STEEL))
        return TRUE;

    return FALSE;
}

u32 GetTotalBaseStat(u32 species)
{
    return gSpeciesInfo[species].baseHP
        + gSpeciesInfo[species].baseAttack
        + gSpeciesInfo[species].baseDefense
        + gSpeciesInfo[species].baseSpeed
        + gSpeciesInfo[species].baseSpAttack
        + gSpeciesInfo[species].baseSpDefense;
}

bool32 IsTruantMonVulnerable(u32 battlerAI, u32 opposingBattler)
{
    int i;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        u32 move = gBattleResources->battleHistory->usedMoves[opposingBattler][i];
        if (gMovesInfo[move].effect == EFFECT_PROTECT && move != MOVE_ENDURE)
            return TRUE;
        if (gMovesInfo[move].effect == EFFECT_SEMI_INVULNERABLE && AI_IsSlower(battlerAI, opposingBattler, GetAIChosenMove(battlerAI), MOVE_NONE, CONSIDER_PRIORITY))
            return TRUE;
    }
    return FALSE;
}

// move checks
bool32 IsAffectedByPowder(u32 battler, u32 ability, u32 holdEffect)
{
    if (ability == ABILITY_OVERCOAT
        || (B_POWDER_GRASS >= GEN_6 && IS_BATTLER_OF_TYPE(battler, TYPE_GRASS))
        || holdEffect == HOLD_EFFECT_SAFETY_GOGGLES)
        return FALSE;
    return TRUE;
}

// This function checks if all physical/special moves are either unusable or unreasonable to use.
// Consider a pokemon boosting their attack against a ghost pokemon having only normal-type physical attacks.
bool32 MovesWithCategoryUnusable(u32 attacker, u32 target, u32 category)
{
    s32 i, moveType;
    u32 usable = 0;
    u16 *moves = GetMovesArray(attacker);
    u32 moveLimitations = AI_DATA->moveLimitations[attacker];

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (IsMoveUnusable(i, moves[i], moveLimitations))
            continue;

        if (GetBattleMoveCategory(moves[i]) == category)
        {
            SetTypeBeforeUsingMove(moves[i], attacker);
            moveType = GetMoveType(moves[i]);
            if (CalcTypeEffectivenessMultiplier(moves[i], moveType, attacker, target, AI_DATA->abilities[target], FALSE) != 0)
                usable |= 1u << i;
        }
    }

    return (usable == 0);
}

// To save computation time this function has 2 variants. One saves, sets and restores battlers, while the other doesn't.
struct SimulatedDamage AI_CalcDamageSaveBattlers(u32 move, u32 battlerAtk, u32 battlerDef, uq4_12_t *typeEffectiveness, bool32 considerZPower)
{
    struct SimulatedDamage dmg;

    SaveBattlerData(battlerAtk);
    SaveBattlerData(battlerDef);
    SetBattlerData(battlerAtk);
    SetBattlerData(battlerDef);
    dmg = AI_CalcDamage(move, battlerAtk, battlerDef, typeEffectiveness, considerZPower, AI_GetWeather(AI_DATA));
    RestoreBattlerData(battlerAtk);
    RestoreBattlerData(battlerDef);
    return dmg;
}

static inline s32 LowestRollDmg(s32 dmg)
{
    dmg *= MIN_ROLL_PERCENTAGE;
    dmg /= 100;
    return dmg;
}

static inline s32 HighestRollDmg(s32 dmg)
{
    dmg *= MAX_ROLL_PERCENTAGE;
    dmg /= 100;
    return dmg;
}

static inline s32 DmgRoll(s32 dmg)
{
    dmg *= DMG_ROLL_PERCENTAGE;
    dmg /= 100;
    return dmg;
}

bool32 IsDamageMoveUnusable(u32 battlerAtk, u32 battlerDef, u32 move, u32 moveType, uq4_12_t effectiveness, u32 weather)
{
    u32 battlerDefAbility;
    u32 partnerDefAbility;
    struct AiLogicData *aiData = AI_DATA;

    if (effectiveness == UQ_4_12(0.0))
        return TRUE;
    if (gBattleStruct->commandingDondozo & (1u << battlerDef))
        return TRUE;

    // aiData->abilities does not check for Mold Breaker since it happens during combat so it needs to be done manually
    if (IsMoldBreakerTypeAbility(battlerAtk, aiData->abilities[battlerAtk]) || gMovesInfo[move].ignoresTargetAbility)
    {
        battlerDefAbility = ABILITY_NONE;
        partnerDefAbility = ABILITY_NONE;
    }
    else
    {
        battlerDefAbility = aiData->abilities[battlerDef];
        partnerDefAbility = aiData->abilities[BATTLE_PARTNER(battlerDef)];
    }

    if (CanAbilityBlockMove(battlerAtk, battlerDef, move, battlerDefAbility))
        return TRUE;

    if (CanPartnerAbilityBlockMove(battlerAtk, battlerDef, move, partnerDefAbility))
        return TRUE;

    if (CanAbilityAbsorbMove(battlerAtk, battlerDef, battlerDefAbility, move, moveType))
        return TRUE;

    // Limited to Lighning Rod and Storm Drain because otherwise the AI would consider Water Absorb, etc...
    if (partnerDefAbility == ABILITY_LIGHTNING_ROD || partnerDefAbility == ABILITY_STORM_DRAIN)
    {
        if (CanAbilityAbsorbMove(battlerAtk, battlerDef, partnerDefAbility, move, moveType))
            return TRUE;
    }

    if (HasWeatherEffect())
    {
        if (weather & B_WEATHER_SUN_PRIMAL && moveType == TYPE_WATER)
            return TRUE;
        if (weather & B_WEATHER_RAIN_PRIMAL && moveType == TYPE_FIRE)
            return TRUE;
    }

    switch (gMovesInfo[move].effect)
    {
    case EFFECT_DREAM_EATER:
        if (!AI_IsBattlerAsleepOrComatose(battlerDef))
            return TRUE;
        break;
    case EFFECT_BELCH:
        if (IsBelchPreventingMove(battlerAtk, move))
            return TRUE;
        break;
    case EFFECT_LAST_RESORT:
        if (!CanUseLastResort(battlerAtk))
            return TRUE;
        break;
    case EFFECT_LOW_KICK:
    case EFFECT_HEAT_CRASH:
        if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
            return TRUE;
        break;
    case EFFECT_FAIL_IF_NOT_ARG_TYPE:
        if (!IS_BATTLER_OF_TYPE(battlerAtk, gMovesInfo[move].argument))
            return TRUE;
        break;
    case EFFECT_HIT_SET_REMOVE_TERRAIN:
        if (!(gFieldStatuses & STATUS_FIELD_TERRAIN_ANY) && gMovesInfo[move].argument == ARG_TRY_REMOVE_TERRAIN_FAIL)
            return TRUE;
        break;
    case EFFECT_POLTERGEIST:
        if (AI_DATA->items[battlerDef] == ITEM_NONE || !IsBattlerItemEnabled(battlerDef))
            return TRUE;
        break;
    case EFFECT_FIRST_TURN_ONLY:
        if (!gDisableStructs[battlerAtk].isFirstTurn)
            return TRUE;
        break;
    case EFFECT_FOCUS_PUNCH:
        if (HasDamagingMove(battlerDef) && !((gBattleMons[battlerAtk].status2 & STATUS2_SUBSTITUTE)
         || IsBattlerIncapacitated(battlerDef, aiData->abilities[battlerDef])
         || gBattleMons[battlerDef].status2 & (STATUS2_INFATUATION | STATUS2_CONFUSION)
         || RandomPercentage(RNG_AI_CONSIDER_FOCUS_PUNCH, CONSIDER_FOCUS_PUNCH_CHANCE)))
         // TODO: || IsPredictedToSwitch(battlerDef, battlerAtk)
            return TRUE;
        // If AI could Sub and doesn't have a Sub, don't Punch yet
        if (HasMoveEffect(battlerAtk, EFFECT_SUBSTITUTE) && !(gBattleMons[battlerAtk].status2 & STATUS2_SUBSTITUTE))
            return TRUE;
        break;
    case EFFECT_EXPLOSION:
    case EFFECT_MIND_BLOWN:
        if (battlerDefAbility == ABILITY_DAMP || partnerDefAbility == ABILITY_DAMP)
            return TRUE;
        break;
    default:
        break;
    }

    return FALSE;
}

bool32 IsAdditionalEffectBlocked(u32 battlerAtk, u32 abilityAtk, u32 battlerDef, u32 abilityDef)
{
    if (AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_COVERT_CLOAK)
        return TRUE;

    if (abilityDef == ABILITY_SHIELD_DUST && !IsMoldBreakerTypeAbility(battlerAtk, abilityAtk))
        return TRUE;

    return FALSE;
}

static inline s32 GetDamageByRollType(s32 dmg, enum DamageRollType rollType)
{
    if (rollType == DMG_ROLL_LOWEST)
        return LowestRollDmg(dmg);
    else if (rollType == DMG_ROLL_HIGHEST)
        return HighestRollDmg(dmg);
    else
        return DmgRoll(dmg);
}

static inline void SetMoveDamageCategory(u32 battlerAtk, u32 battlerDef, u32 move)
{
    switch (gMovesInfo[move].effect)
    {
    case EFFECT_PHOTON_GEYSER:
        gBattleStruct->swapDamageCategory = (GetCategoryBasedOnStats(battlerAtk) == DAMAGE_CATEGORY_PHYSICAL);
        break;
    case EFFECT_SHELL_SIDE_ARM:
        if (gBattleStruct->shellSideArmCategory[battlerAtk][battlerDef] == DAMAGE_CATEGORY_PHYSICAL)
            gBattleStruct->swapDamageCategory = TRUE;
        break;
    case EFFECT_TERA_BLAST:
        if (GetActiveGimmick(battlerAtk) == GIMMICK_TERA)
            gBattleStruct->swapDamageCategory = GetCategoryBasedOnStats(battlerAtk) == DAMAGE_CATEGORY_PHYSICAL;
        break;
    case EFFECT_TERA_STARSTORM:
        if (GetActiveGimmick(battlerAtk) == GIMMICK_TERA && GET_BASE_SPECIES_ID(GetMonData(GetPartyBattlerData(battlerAtk), MON_DATA_SPECIES)) == SPECIES_TERAPAGOS)
            gBattleStruct->swapDamageCategory = GetCategoryBasedOnStats(battlerAtk) == DAMAGE_CATEGORY_PHYSICAL;
        break;
    }
}

static inline s32 SetFixedMoveBasePower(u32 battlerAtk, u32 move)
{
    s32 fixedBasePower = 0, n = 0;
    switch (gMovesInfo[move].effect)
    {
    case EFFECT_ROLLOUT:
        n = gDisableStructs[battlerAtk].rolloutTimer - 1;
        fixedBasePower = CalcRolloutBasePower(battlerAtk, gMovesInfo[move].power, n < 0 ? 5 : n);
        break;
    case EFFECT_FURY_CUTTER:
        fixedBasePower = CalcFuryCutterBasePower(gMovesInfo[move].power, min(gDisableStructs[battlerAtk].furyCutterCounter + 1, 5));
        break;
    default:
        fixedBasePower = 0;
        break;
    }
    return fixedBasePower;
}

static inline void AI_StoreBattlerTypes(u32 battlerAtk, u32 *types)
{
    types[0] = gBattleMons[battlerAtk].types[0];
    types[1] = gBattleMons[battlerAtk].types[1];
    types[2] = gBattleMons[battlerAtk].types[2];
}

static inline void AI_RestoreBattlerTypes(u32 battlerAtk, u32 *types)
{
    gBattleMons[battlerAtk].types[0] = types[0];
    gBattleMons[battlerAtk].types[1] = types[1];
    gBattleMons[battlerAtk].types[2] = types[2];
}

static inline void CalcDynamicMoveDamage(struct DamageCalculationData *damageCalcData, u16 *medianDamage, u16 *minimumDamage, u16 *maximumDamage, enum ItemHoldEffect holdEffectAtk, u32 abilityAtk)
{
    u32 move = damageCalcData->move;
    u16 median = *medianDamage;
    u16 minimum = *minimumDamage;
    u16 maximum = *maximumDamage;

    switch (gMovesInfo[move].effect)
    {
        case EFFECT_LEVEL_DAMAGE:
        median = minimum = maximum = gBattleMons[damageCalcData->battlerAtk].level * (abilityAtk == ABILITY_PARENTAL_BOND ? 2 : 1);
        break;
    case EFFECT_PSYWAVE:
        median = minimum = maximum = gBattleMons[damageCalcData->battlerAtk].level * (abilityAtk == ABILITY_PARENTAL_BOND ? 2 : 1);
        break;
    case EFFECT_FIXED_DAMAGE_ARG:
        median = minimum = maximum = gMovesInfo[move].argument * (abilityAtk == ABILITY_PARENTAL_BOND ? 2 : 1);
        break;
    case EFFECT_MULTI_HIT:
        if (move == MOVE_WATER_SHURIKEN && gBattleMons[damageCalcData->battlerAtk].species == SPECIES_GRENINJA_ASH)
        {
            median *= 3;
            minimum *= 3;
            maximum *= 3;
        }
        else if (abilityAtk == ABILITY_SKILL_LINK)
        {
            median *= 5;
            minimum *= 5;
            maximum *= 5;
        }
        else if (holdEffectAtk == HOLD_EFFECT_LOADED_DICE)
        {
            median *= 9;
            median /= 2;
            minimum *= 4;
            maximum *= 5;
        }
        else
        {
            median *= 3;
            minimum *= 2;
            maximum *= 3;
        }
        break;
    case EFFECT_ENDEAVOR:
        // If target has less HP than user, Endeavor does no damage
        median = maximum = minimum = max(0, gBattleMons[damageCalcData->battlerDef].hp - gBattleMons[damageCalcData->battlerAtk].hp);
        break;
    case EFFECT_SUPER_FANG:
        median = maximum = minimum = (abilityAtk == ABILITY_PARENTAL_BOND
            ? max(2, gBattleMons[damageCalcData->battlerDef].hp * 3 / 4)
            : max(1, gBattleMons[damageCalcData->battlerDef].hp / 2));
        break;
    case EFFECT_FINAL_GAMBIT:
        median = maximum = minimum = gBattleMons[damageCalcData->battlerAtk].hp;
        break;
    case EFFECT_BEAT_UP:
        if (B_BEAT_UP >= GEN_5)
        {
            u32 partyCount = CalculatePartyCount(GetBattlerParty(damageCalcData->battlerAtk));
            u32 i;
            gBattleStruct->beatUpSlot = 0;
            damageCalcData->isCrit = FALSE;
            median = 0;
            for (i = 0; i < partyCount; i++)
                median += CalculateMoveDamage(damageCalcData, 0);
            maximum = minimum = median;
            gBattleStruct->beatUpSlot = 0;
        }
        break;
    default:
        break;
    }

    // Handle other multi-strike moves
    if (gMovesInfo[move].strikeCount > 1 && gMovesInfo[move].effect != EFFECT_TRIPLE_KICK)
    {
        maximum *= gMovesInfo[move].strikeCount;
        minimum *= gMovesInfo[move].strikeCount;
        median *= gMovesInfo[move].strikeCount;
    }

    if (median == 0)
        median = 1;
    if (minimum == 0)
        minimum = 1;
    if (maximum == 0)
        maximum = 1;

    *medianDamage = median;
    *minimumDamage = minimum;
    *maximumDamage = maximum;
}

static inline bool32 ShouldCalcCritDamage(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    s32 critChanceIndex = CalcCritChanceStage(battlerAtk, battlerDef, move, FALSE, aiData->abilities[battlerAtk], aiData->abilities[battlerDef], aiData->holdEffects[battlerAtk]);

    if (critChanceIndex == CRITICAL_HIT_ALWAYS || critChanceIndex >= 2)
        return TRUE;
    
    return FALSE;
}

struct SimulatedDamage AI_CalcDamage(u32 move, u32 battlerAtk, u32 battlerDef, uq4_12_t *typeEffectiveness, bool32 considerZPower, u32 weather)
{
    struct SimulatedDamage simDamage;
    s32 moveType;
    u32 moveEffect = gMovesInfo[move].effect;
    uq4_12_t effectivenessMultiplier;
    bool32 isDamageMoveUnusable = FALSE;
    bool32 toggledGimmick = FALSE;
    struct AiLogicData *aiData = AI_DATA;
    AI_DATA->aiCalcInProgress = TRUE;

    if (moveEffect == EFFECT_NATURE_POWER)
        move = GetNaturePowerMove(battlerAtk);

    // Temporarily enable gimmicks for damage calcs if planned
    if (gBattleStruct->gimmick.usableGimmick[battlerAtk] && GetActiveGimmick(battlerAtk) == GIMMICK_NONE
        && !(gBattleStruct->gimmick.usableGimmick[battlerAtk] == GIMMICK_Z_MOVE && !considerZPower))
    {
        // Set Z-Move variables if needed
        if (gBattleStruct->gimmick.usableGimmick[battlerAtk] == GIMMICK_Z_MOVE && IsViableZMove(battlerAtk, move))
            gBattleStruct->zmove.baseMoves[battlerAtk] = move;

        toggledGimmick = TRUE;
        SetActiveGimmick(battlerAtk, gBattleStruct->gimmick.usableGimmick[battlerAtk]);
    }

    SetMoveDamageCategory(battlerAtk, battlerDef, move);
    SetTypeBeforeUsingMove(move, battlerAtk);

    // We can set those globals because they are going to get rerolled on attack execution 
    gBattleStruct->magnitudeBasePower = 70;
    gBattleStruct->presentBasePower = 80;
    moveType = GetMoveType(move);
    effectivenessMultiplier = CalcTypeEffectivenessMultiplier(move, moveType, battlerAtk, battlerDef, aiData->abilities[battlerDef], FALSE);

    if (gMovesInfo[move].power)
        isDamageMoveUnusable = IsDamageMoveUnusable(battlerAtk, battlerDef, move, moveType, effectivenessMultiplier, weather);

    if (gMovesInfo[move].power && !isDamageMoveUnusable)
    {
        u32 types[3];
        AI_StoreBattlerTypes(battlerAtk, types);

        ProteanTryChangeType(battlerAtk, aiData->abilities[battlerAtk], move, moveType);
        s32 fixedBasePower = SetFixedMoveBasePower(battlerAtk, move);

        struct DamageCalculationData damageCalcData;
        damageCalcData.battlerAtk = battlerAtk;
        damageCalcData.battlerDef = battlerDef;
        damageCalcData.move = move;
        damageCalcData.moveType = moveType;
        damageCalcData.isCrit = ShouldCalcCritDamage(battlerAtk, battlerDef, move, aiData);
        damageCalcData.randomFactor = FALSE;
        damageCalcData.updateFlags = FALSE;

        if (moveEffect == EFFECT_TRIPLE_KICK)
        {
            for (gMultiHitCounter = gMovesInfo[move].strikeCount; gMultiHitCounter > 0; gMultiHitCounter--) // The global is used to simulate actual damage done
            {
                s32 damageByRollType = 0;

                s32 oneTripleKickHit = CalculateMoveDamageVars(&damageCalcData, fixedBasePower,
                                                                effectivenessMultiplier, weather,
                                                                aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef],
                                                                aiData->abilities[battlerAtk], aiData->abilities[battlerDef]);

                damageByRollType = GetDamageByRollType(oneTripleKickHit, DMG_ROLL_LOWEST);
                simDamage.minimum += ApplyModifiersAfterDmgRoll(damageByRollType, &damageCalcData, effectivenessMultiplier,
                                                                aiData->abilities[battlerAtk], aiData->abilities[battlerDef],
                                                                aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef], TRUE);

                damageByRollType = GetDamageByRollType(oneTripleKickHit, DMG_ROLL_DEFAULT);
                simDamage.median += ApplyModifiersAfterDmgRoll(damageByRollType, &damageCalcData, effectivenessMultiplier,
                                                                aiData->abilities[battlerAtk], aiData->abilities[battlerDef],
                                                                aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef], TRUE);

                damageByRollType = GetDamageByRollType(oneTripleKickHit, DMG_ROLL_HIGHEST);
                simDamage.maximum += ApplyModifiersAfterDmgRoll(damageByRollType, &damageCalcData, effectivenessMultiplier,
                                                            aiData->abilities[battlerAtk], aiData->abilities[battlerDef],
                                                            aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef], TRUE);
            }
        }
        else
        {
            u32 damage = CalculateMoveDamageVars(&damageCalcData, fixedBasePower,
                                                            effectivenessMultiplier, weather,
                                                            aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef],
                                                            aiData->abilities[battlerAtk], aiData->abilities[battlerDef]);

            simDamage.minimum = GetDamageByRollType(damage, DMG_ROLL_LOWEST);
            simDamage.minimum = ApplyModifiersAfterDmgRoll(simDamage.minimum, &damageCalcData, effectivenessMultiplier,
                                                            aiData->abilities[battlerAtk], aiData->abilities[battlerDef],
                                                            aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef], TRUE);

            simDamage.median = GetDamageByRollType(damage, DMG_ROLL_DEFAULT);
            simDamage.median = ApplyModifiersAfterDmgRoll(simDamage.median, &damageCalcData, effectivenessMultiplier,
                                                            aiData->abilities[battlerAtk], aiData->abilities[battlerDef],
                                                            aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef], TRUE);
                                                            
            simDamage.maximum = GetDamageByRollType(damage, DMG_ROLL_HIGHEST);
            simDamage.maximum = ApplyModifiersAfterDmgRoll(simDamage.maximum, &damageCalcData, effectivenessMultiplier,
                                                            aiData->abilities[battlerAtk], aiData->abilities[battlerDef],
                                                            aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef], TRUE);
        }

        if (GetActiveGimmick(battlerAtk) != GIMMICK_Z_MOVE)
        {
            CalcDynamicMoveDamage(&damageCalcData,
                                  &simDamage.median,
                                  &simDamage.minimum,
                                  &simDamage.maximum,
                                  aiData->holdEffects[battlerAtk],
                                  aiData->abilities[battlerAtk]);
        }

        AI_RestoreBattlerTypes(battlerAtk, types);
    }
    else
    {
        simDamage.minimum = 0;
        simDamage.median = 0;
        simDamage.maximum = 0;
    }

    // convert multiper to AI_EFFECTIVENESS_xX
    *typeEffectiveness = effectivenessMultiplier;

    // Undo temporary settings
    gBattleStruct->dynamicMoveType = 0;
    gBattleStruct->swapDamageCategory = FALSE;
    gBattleStruct->zmove.baseMoves[battlerAtk] = MOVE_NONE;
    if (toggledGimmick)
        SetActiveGimmick(battlerAtk, GIMMICK_NONE);

    AI_DATA->aiCalcInProgress = FALSE;
    return simDamage;
}

bool32 AI_IsDamagedByRecoil(u32 battler, bool8 considerRockHead)
{
    u32 ability = AI_DATA->abilities[battler];
    if (ability == ABILITY_MAGIC_GUARD || ability == ABILITY_BAD_COMPANY)
        return FALSE;
    if (considerRockHead && ability == ABILITY_ROCK_HEAD)
        return FALSE;
    return TRUE;
}

// Decide whether move having an additional effect for .
static bool32 AI_IsMoveEffectInPlus(u32 battlerAtk, u32 battlerDef, u32 move, s32 noOfHitsToKo)
{
    u32 i;
    u32 abilityDef = AI_DATA->abilities[battlerDef];
    u32 abilityAtk = AI_DATA->abilities[battlerAtk];

    if (TestIfSheerForceAffected(battlerAtk, move))
        return FALSE;


    switch (move)
    {
        case MOVE_SURF:
        case MOVE_DIVE:
            if (gBattleMons[battlerAtk].species == SPECIES_CRAMORANT)
                return TRUE;
            break;
    }        
    switch (gMovesInfo[move].effect)
    {
    case EFFECT_FELL_STINGER:
        if (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_ATK))
            return TRUE;
        break;
    case EFFECT_BOLT_BEAK:
        if(AI_IsFaster(battlerAtk, battlerDef, move, AI_DATA->lastUsedMove[battlerDef], DONT_CONSIDER_PRIORITY))
            return TRUE;
        break;
    }

    // check ADDITIONAL_EFFECTS
    for (i = 0; i < gMovesInfo[move].numAdditionalEffects; i++)
    {
        // Only consider effects with a guaranteed chance to happen
        if (!MoveEffectIsGuaranteed(battlerAtk, AI_DATA->abilities[battlerAtk], &gMovesInfo[move].additionalEffects[i]))
            continue;

        // Consider move effects that target self
        if (gMovesInfo[move].additionalEffects[i].self)
        {
            switch (gMovesInfo[move].additionalEffects[i].moveEffect)
            {
                case MOVE_EFFECT_ATK_MINUS_1:
                case MOVE_EFFECT_ATK_MINUS_2:
                    if (abilityAtk == ABILITY_CONTRARY && HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL) && BattlerStatCanRise(battlerAtk, abilityAtk, STAT_ATK))
                        return TRUE;
                    break;
                case MOVE_EFFECT_SP_ATK_MINUS_1:
                case MOVE_EFFECT_SP_ATK_MINUS_2:
                    if (abilityAtk == ABILITY_CONTRARY && HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL) && BattlerStatCanRise(battlerAtk, abilityAtk, STAT_SPATK))
                        return TRUE;
                    break;
                case MOVE_EFFECT_DEF_MINUS_1:
                case MOVE_EFFECT_SPD_MINUS_1:
                case MOVE_EFFECT_SP_DEF_MINUS_1:
                case MOVE_EFFECT_ACC_MINUS_1:
                case MOVE_EFFECT_EVS_MINUS_1:
                case MOVE_EFFECT_DEF_MINUS_2:
                case MOVE_EFFECT_SPD_MINUS_2:
                case MOVE_EFFECT_SP_DEF_MINUS_2:
                case MOVE_EFFECT_ACC_MINUS_2:
                case MOVE_EFFECT_EVS_MINUS_2:
                    if (abilityAtk == ABILITY_CONTRARY && BattlerStatCanRise(battlerAtk, abilityAtk, GetStatBeingLoweredFromMoveEffect(gMovesInfo[move].additionalEffects[i].moveEffect)))
                        return TRUE;
                    break;
                case MOVE_EFFECT_ATK_DEF_DOWN:
                    if (abilityAtk == ABILITY_CONTRARY && (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_ATK) || BattlerStatCanRise(battlerAtk, abilityAtk, STAT_DEF)))
                        return TRUE;
                    break;
                case MOVE_EFFECT_DEF_SPDEF_DOWN:
                    if (abilityAtk == ABILITY_CONTRARY && (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_DEF) || BattlerStatCanRise(battlerAtk, abilityAtk, STAT_SPDEF)))
                        return TRUE;
                    break;
                case MOVE_EFFECT_ATK_PLUS_1:
                case MOVE_EFFECT_ATK_PLUS_2:
                    if (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_ATK))
                        return TRUE;
                    break;
                case MOVE_EFFECT_DEF_PLUS_1:
                case MOVE_EFFECT_DEF_PLUS_2:
                    if (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_DEF))
                        return TRUE;
                    break;
                case MOVE_EFFECT_SPD_PLUS_1:
                case MOVE_EFFECT_SPD_PLUS_2:
                    if (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_SPEED))
                        return TRUE;
                    break;
                case MOVE_EFFECT_SP_ATK_PLUS_1:
                case MOVE_EFFECT_SP_ATK_PLUS_2:
                    if (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_SPATK))
                        return TRUE;
                    break;
                case MOVE_EFFECT_EVS_PLUS_1:
                case MOVE_EFFECT_EVS_PLUS_2:
                    if (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_EVASION))
                        return TRUE;
                    break;
                case MOVE_EFFECT_ACC_PLUS_1:
                case MOVE_EFFECT_ACC_PLUS_2:
                    if (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_ACC))
                        return TRUE;
                    break;
                case MOVE_EFFECT_ALL_STATS_UP:
                    for (i = STAT_ATK; i <= NUM_STATS; i++)
                    {
                        if (BattlerStatCanRise(battlerAtk, abilityAtk, i))
                            return TRUE;
                    }
                    break;
            }
        }
        else // consider move effects that hinder the target
        {
            if (IsAdditionalEffectBlocked(battlerAtk, abilityAtk, battlerDef, abilityDef))
                continue;

            switch (gMovesInfo[move].additionalEffects[i].moveEffect)
            {
                case MOVE_EFFECT_POISON:
                case MOVE_EFFECT_TOXIC:
                    if (AI_CanPoison(battlerAtk, battlerDef, abilityDef, move, MOVE_NONE) && noOfHitsToKo > 1)
                        return TRUE;
                    break;
                case MOVE_EFFECT_BURN:
                    if (AI_CanBurn(battlerAtk, battlerDef, abilityDef, BATTLE_PARTNER(battlerAtk), move, MOVE_NONE) && noOfHitsToKo > 1)
                        return TRUE;
                    break;
                case MOVE_EFFECT_FREEZE_OR_FROSTBITE:
                    if (AI_CanGetFrostbite(battlerDef, abilityDef) && noOfHitsToKo > 1)
                        return TRUE;
                    break;
                case MOVE_EFFECT_PARALYSIS:
                    if (AI_CanParalyze(battlerAtk, battlerDef, abilityDef, move, MOVE_NONE) && noOfHitsToKo > 1)
                        return TRUE;
                    break;
                case MOVE_EFFECT_CONFUSION:
                    if (AI_CanConfuse(battlerAtk, battlerDef, abilityDef, BATTLE_PARTNER(battlerAtk), move, MOVE_NONE) && noOfHitsToKo > 1)
                        return TRUE;
                    break;
                case MOVE_EFFECT_FLINCH:
                    if (ShouldTryToFlinch(battlerAtk, battlerDef, abilityAtk, abilityDef, move) && noOfHitsToKo > 1)
                        return TRUE;
                    break;
                case MOVE_EFFECT_ATK_MINUS_1:
                case MOVE_EFFECT_ATK_MINUS_2:
                    if (ShouldLowerStat(battlerDef, abilityDef, STAT_ATK) && noOfHitsToKo > 1 && HasPhysicalBestMove(battlerDef, battlerAtk, AI_DEFENDING_NORMAL))
                        return TRUE;
                    break;
                case MOVE_EFFECT_SP_ATK_MINUS_1:
                case MOVE_EFFECT_SP_ATK_MINUS_2:
                    if (ShouldLowerStat(battlerDef, abilityDef, STAT_SPATK) && noOfHitsToKo > 1 && HasSpecialBestMove(battlerDef, battlerAtk, AI_DEFENDING_NORMAL))
                        return TRUE;
                    break;
                case MOVE_EFFECT_DEF_MINUS_1:
                case MOVE_EFFECT_SPD_MINUS_1:
                case MOVE_EFFECT_SP_DEF_MINUS_1:
                case MOVE_EFFECT_ACC_MINUS_1:
                case MOVE_EFFECT_EVS_MINUS_1:
                case MOVE_EFFECT_DEF_MINUS_2:
                case MOVE_EFFECT_SPD_MINUS_2:
                case MOVE_EFFECT_SP_DEF_MINUS_2:
                case MOVE_EFFECT_ACC_MINUS_2:
                case MOVE_EFFECT_EVS_MINUS_2:
                    if (ShouldLowerStat(battlerDef, abilityDef, GetStatBeingLoweredFromMoveEffect(gMovesInfo[move].additionalEffects[i].moveEffect)) && noOfHitsToKo > 1)
                        return TRUE;
                    break;
                case MOVE_EFFECT_KNOCK_OFF:
                    if (CanKnockOffItem(battlerDef, AI_DATA->items[battlerDef]))
                        return TRUE;
                    break;
            }
        }
    }

    return FALSE;
}

static bool32 AI_IsMoveEffectInMinus(u32 battlerAtk, u32 battlerDef, u32 move, s32 noOfHitsToKo)
{
    u32 abilityAtk = AI_DATA->abilities[battlerAtk];
    u32 abilityDef = AI_DATA->abilities[battlerDef];
    u8 i;

    // recoil
    if (gMovesInfo[move].recoil > 0 && AI_IsDamagedByRecoil(battlerAtk, TRUE))
        return TRUE;

    switch (gMovesInfo[move].effect)
    {
        case EFFECT_MAX_HP_50_RECOIL:
        case EFFECT_MIND_BLOWN:
            if (AI_IsDamagedByRecoil(battlerAtk, FALSE))
                return TRUE;
            break;
        case EFFECT_EXPLOSION:
        case EFFECT_FINAL_GAMBIT:
                return TRUE;
        case EFFECT_RECOIL_IF_MISS:
            if (abilityAtk != ABILITY_MAGIC_GUARD)
                return TRUE;
            break;
        default:
        {
            for (i = 0; i < gMovesInfo[move].numAdditionalEffects; i++)
            {
                switch (gMovesInfo[move].additionalEffects[i].moveEffect)
                {
                    case MOVE_EFFECT_ATK_MINUS_1:
                    case MOVE_EFFECT_DEF_MINUS_1:
                    case MOVE_EFFECT_SPD_MINUS_1:
                    case MOVE_EFFECT_SP_ATK_MINUS_1:
                    case MOVE_EFFECT_SP_DEF_MINUS_1:
                    case MOVE_EFFECT_EVS_MINUS_1:
                    case MOVE_EFFECT_ACC_MINUS_1:
                    case MOVE_EFFECT_ATK_MINUS_2:
                    case MOVE_EFFECT_DEF_MINUS_2:
                    case MOVE_EFFECT_SPD_MINUS_2:
                    case MOVE_EFFECT_SP_ATK_MINUS_2:
                    case MOVE_EFFECT_SP_DEF_MINUS_2:
                    case MOVE_EFFECT_EVS_MINUS_2:
                    case MOVE_EFFECT_ACC_MINUS_2:
                    case MOVE_EFFECT_V_CREATE:
                    case MOVE_EFFECT_ATK_DEF_DOWN:
                    case MOVE_EFFECT_DEF_SPDEF_DOWN:
                        if ((gMovesInfo[move].additionalEffects[i].self && abilityAtk != ABILITY_CONTRARY && abilityAtk != ABILITY_BAD_COMPANY && AI_DATA->holdEffects[battlerAtk] != HOLD_EFFECT_RESTORE_STATS)
                            || (noOfHitsToKo > 1 && !gMovesInfo[move].additionalEffects[i].self && abilityDef == ABILITY_CONTRARY && !DoesBattlerIgnoreAbilityChecks(abilityAtk, move)))
                                return TRUE;
                        break;
                    case MOVE_EFFECT_RECHARGE:
                        return gMovesInfo[move].additionalEffects[i].self;
                    case MOVE_EFFECT_ATK_PLUS_1:
                    case MOVE_EFFECT_DEF_PLUS_1:
                    case MOVE_EFFECT_SPD_PLUS_1:
                    case MOVE_EFFECT_SP_ATK_PLUS_1:
                    case MOVE_EFFECT_SP_DEF_PLUS_1:
                    case MOVE_EFFECT_EVS_PLUS_1:
                    case MOVE_EFFECT_ACC_PLUS_1:
                    case MOVE_EFFECT_ATK_PLUS_2:
                    case MOVE_EFFECT_DEF_PLUS_2:
                    case MOVE_EFFECT_SPD_PLUS_2:
                    case MOVE_EFFECT_SP_ATK_PLUS_2:
                    case MOVE_EFFECT_SP_DEF_PLUS_2:
                    case MOVE_EFFECT_EVS_PLUS_2:
                    case MOVE_EFFECT_ACC_PLUS_2:
                    case MOVE_EFFECT_ALL_STATS_UP:
                        if ((gMovesInfo[move].additionalEffects[i].self && abilityAtk == ABILITY_CONTRARY && AI_DATA->holdEffects[battlerAtk] == HOLD_EFFECT_RESTORE_STATS)
                            || (noOfHitsToKo > 1 && !gMovesInfo[move].additionalEffects[i].self && !(abilityDef == ABILITY_CONTRARY && !DoesBattlerIgnoreAbilityChecks(abilityAtk, move))))
                                return TRUE;
                        break;
                }
            }
            break;
        }
    }
    return FALSE;
}

// Checks if one of the moves has side effects or perks, assuming equal dmg or equal no of hits to KO
enum MoveComparisonResult AI_WhichMoveBetter(u32 move1, u32 move2, u32 battlerAtk, u32 battlerDef, s32 noOfHitsToKo)
{
    bool32 effect1minus, effect1plus, effect2minus, effect2plus;
    u32 defAbility = AI_DATA->abilities[battlerDef];
    u32 atkAbility = AI_DATA->abilities[battlerAtk];

    // Check if physical moves hurt.
    if (AI_DATA->holdEffects[battlerAtk] != HOLD_EFFECT_PROTECTIVE_PADS && atkAbility != ABILITY_LONG_REACH
        && (AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_ROCKY_HELMET
        || defAbility == ABILITY_IRON_BARBS || defAbility == ABILITY_ROUGH_SKIN))
    {
        if (gMovesInfo[move1].makesContact && !gMovesInfo[move2].makesContact)
            return MOVE_LOST_COMPARISON;
        if (gMovesInfo[move2].makesContact && !gMovesInfo[move1].makesContact)
            return MOVE_WON_COMPARISON;
    }

    // Check additional effects.
    AI_THINKING_STRUCT->movesetIndex = GetMoveIndex(battlerAtk, move1);
    effect1minus = AI_IsMoveEffectInMinus(battlerAtk, battlerDef, move1, noOfHitsToKo);
    effect1plus = AI_IsMoveEffectInPlus(battlerAtk, battlerDef, move1, noOfHitsToKo);

    AI_THINKING_STRUCT->movesetIndex = GetMoveIndex(battlerAtk, move2);
    effect2plus = AI_IsMoveEffectInPlus(battlerAtk, battlerDef, move2, noOfHitsToKo);
    effect2minus = AI_IsMoveEffectInMinus(battlerAtk, battlerDef, move2, noOfHitsToKo);

    AI_THINKING_STRUCT->movesetIndex = 0;

    if (effect2minus && !effect1minus)
        return MOVE_WON_COMPARISON;;
    if (effect1minus && !effect2minus)
        return MOVE_LOST_COMPARISON;

    if (effect2plus && !effect1plus)
        return MOVE_LOST_COMPARISON;
    if (effect1plus && !effect2plus)
        return MOVE_WON_COMPARISON;;

    return MOVE_NEUTRAL_COMPARISON;
}

u32 GetNoOfHitsToKO(u32 dmg, s32 hp)
{
    if (dmg == 0)
        return 0;
    return (hp + dmg - 1) / dmg;
}

u32 GetNoOfHitsToKOBattlerDmg(u32 dmg, u32 battlerDef)
{
    return GetNoOfHitsToKO(dmg, gBattleMons[battlerDef].hp);
}

u32 GetNoOfHitsToKOBattler(u32 battlerAtk, u32 battlerDef, u32 moveIndex, enum DamageCalcContext calcContext, enum AiConsiderEndure considerEndure)
{
    u32 hitsToKO = GetNoOfHitsToKOBattlerDmg(AI_GetDamage(battlerAtk, battlerDef, moveIndex, calcContext, AI_DATA), battlerDef);
    u16 *moves = GetMovesArray(battlerAtk);

    if (CanEndureHit(battlerAtk, battlerDef, moves[moveIndex]) && hitsToKO == 1 && considerEndure == CONSIDER_ENDURE)
        hitsToKO += 1;

    return hitsToKO;
}

u32 GetCurrDamageHpPercent(u32 battlerAtk, u32 battlerDef, enum DamageCalcContext calcContext)
{
    int bestDmg = AI_GetDamage(battlerAtk, battlerDef, AI_THINKING_STRUCT->movesetIndex, calcContext, AI_DATA);

    return (bestDmg * 100) / gBattleMons[battlerDef].maxHP;
}

uq4_12_t AI_GetMoveEffectiveness(u32 move, u32 battlerAtk, u32 battlerDef)
{
    uq4_12_t typeEffectiveness;
    u32 moveType;

    SaveBattlerData(battlerAtk);
    SaveBattlerData(battlerDef);

    SetBattlerData(battlerAtk);
    SetBattlerData(battlerDef);

    gBattleStruct->dynamicMoveType = 0;
    SetTypeBeforeUsingMove(move, battlerAtk);
    moveType = GetMoveType(move);
    typeEffectiveness = CalcTypeEffectivenessMultiplier(move, moveType, battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], FALSE);

    RestoreBattlerData(battlerAtk);
    RestoreBattlerData(battlerDef);

    return typeEffectiveness;
}

/* Checks to see if AI will move ahead of another battler
 * The function uses a stripped down version of the checks from GetWhichBattlerFasterArgs
 * Output:
    * AI_IS_FASTER: is user(ai) faster
    * AI_IS_SLOWER: is target faster
*/
s32 AI_WhoStrikesFirst(u32 battlerAI, u32 battler, u32 aiMoveConsidered, u32 playerMoveConsidered, enum ConsiderPriority considerPriority)
{
    u32 speedBattlerAI, speedBattler;
    u32 holdEffectAI = AI_DATA->holdEffects[battlerAI];
    u32 holdEffectPlayer = AI_DATA->holdEffects[battler];
    u32 abilityAI = AI_DATA->abilities[battlerAI];
    u32 abilityPlayer = AI_DATA->abilities[battler];

    if (considerPriority == CONSIDER_PRIORITY)
    {
        s8 aiPriority = GetMovePriority(battlerAI, aiMoveConsidered);
        s8 playerPriority = GetMovePriority(battler, playerMoveConsidered);

        if (aiPriority > playerPriority)
            return AI_IS_FASTER;
        else if (aiPriority < playerPriority)
            return AI_IS_SLOWER;
    }

    speedBattlerAI = GetBattlerTotalSpeedStatArgs(battlerAI, abilityAI, holdEffectAI, 0);
    speedBattler   = GetBattlerTotalSpeedStatArgs(battler, abilityPlayer, holdEffectPlayer, 0);

    if (holdEffectAI == HOLD_EFFECT_LAGGING_TAIL && holdEffectPlayer != HOLD_EFFECT_LAGGING_TAIL)
        return AI_IS_SLOWER;
    else if (holdEffectAI != HOLD_EFFECT_LAGGING_TAIL && holdEffectPlayer == HOLD_EFFECT_LAGGING_TAIL)
        return AI_IS_FASTER;

    if (abilityAI == ABILITY_STALL && abilityPlayer != ABILITY_STALL)
        return AI_IS_SLOWER;
    else if (abilityAI != ABILITY_STALL && abilityPlayer == ABILITY_STALL)
        return AI_IS_FASTER;

    if (speedBattlerAI > speedBattler)
    {
        if (gFieldStatuses & STATUS_FIELD_TRICK_ROOM)
            return AI_IS_SLOWER;
        else
            return AI_IS_FASTER;
    }
    else if (speedBattlerAI == speedBattler)
    {
        return AI_IS_FASTER;
    }
    else
    {
        if (gFieldStatuses & STATUS_FIELD_TRICK_ROOM)
            return AI_IS_FASTER;
        else
            return AI_IS_SLOWER;
    }

    return AI_IS_SLOWER;
}

bool32 CanEndureHit(u32 battler, u32 battlerTarget, u32 move)
{
    if (!BATTLER_MAX_HP(battlerTarget) || gMovesInfo[move].effect == EFFECT_MULTI_HIT || AI_GetBattlerAbility(battler) == ABILITY_PARENTAL_BOND)
        return FALSE;
    if (gMovesInfo[move].punchingMove && AI_GetBattlerAbility(battler) == ABILITY_ORAORAORAORA)
        return FALSE;
    if (gMovesInfo[move].strikeCount > 1 && !(gMovesInfo[move].effect == EFFECT_DRAGON_DARTS && IsValidDoubleBattle(battlerTarget)))
        return FALSE;
    if (AI_DATA->holdEffects[battlerTarget] == HOLD_EFFECT_FOCUS_SASH)
        return TRUE;

    if (!DoesBattlerIgnoreAbilityChecks(AI_DATA->abilities[battler], move))
    {
        if (B_STURDY >= GEN_5 && AI_DATA->abilities[battlerTarget] == ABILITY_STURDY)
            return TRUE;
        if (gBattleMons[battlerTarget].species == SPECIES_MIMIKYU_DISGUISED)
            return TRUE;
        if (AI_DATA->abilities[battlerTarget] == ABILITY_ICE_FACE
            && gBattleMons[battlerTarget].species == SPECIES_EISCUE_ICE && gMovesInfo[move].category == DAMAGE_CATEGORY_PHYSICAL)
            return TRUE;
    }

    return FALSE;
}

static bool32 CanForce2HKOForSetupMove(u32 battler, u32 battlerTarget)
{
    if (gBattleMons[battlerTarget].species == SPECIES_MIMIKYU_DISGUISED)
            return TRUE;
        
    if (!BATTLER_MAX_HP(battlerTarget))
        return FALSE;
    
    if (AI_DATA->holdEffects[battlerTarget] == HOLD_EFFECT_FOCUS_SASH)
        return TRUE;

    if (B_STURDY >= GEN_5 && AI_DATA->abilities[battlerTarget] == ABILITY_STURDY)
        return TRUE;

    return FALSE;
}

// Check if AI mon can do enough damage to OHKO the player, ignoring focus sash / sturdy
// this is used to stop the AI from spamming setup moves when they should probably be attacking!
static bool32 CanAIOHKOTargetForSetup(u32 battlerAtk, u32 battlerDef)
{
    struct AiLogicData *aiData = AI_DATA;
    s32 moveIndex, dmg;
    u16 *moves = gBattleMons[battlerAtk].moves;
    u32 moveLimitations = aiData->moveLimitations[battlerAtk];

    for (moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
    {
        if (IsMoveUnusable(moveIndex, moves[moveIndex], moveLimitations))
            continue;
        
        dmg = AI_GetDamage(battlerAtk, battlerDef, moveIndex, AI_ATTACKING_ON_FIELD, aiData);

        if (gBattleMons[battlerDef].hp <= dmg)
            return TRUE;
    }

    return FALSE;
}

// Check if target has means to faint ai mon.
bool32 CanTargetFaintAi(u32 battlerDef, u32 battlerAtk)
{
    struct AiLogicData *aiData = AI_DATA;
    s32 moveIndex;
    u16 *moves = GetMovesArray(battlerDef);
    u32 moveLimitations = aiData->moveLimitations[battlerDef];

    for (moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
    {
        if (IsMoveUnusable(moveIndex, moves[moveIndex], moveLimitations) || MatchesSelfKillOrSuperfang(gMovesInfo[moves[moveIndex]].effect, FALSE))
            continue;
        
        if (AI_GetDamage(battlerDef, battlerAtk, moveIndex, AI_DEFENDING_NORMAL, aiData) >= gBattleMons[battlerAtk].hp
            && !CanEndureHit(battlerDef, battlerAtk, moves[moveIndex]))
            return TRUE;
    }

    return FALSE;
}

u32 NoOfHitsForTargetToFaintBattler(u32 battlerDef, u32 battlerAtk, enum AiConsiderEndure considerEndure)
{
    u32 i;
    u32 currNumberOfHits;
    u32 leastNumberOfHits = UNKNOWN_NO_OF_HITS;
    u16 *moves = GetMovesArray(battlerDef);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        // used to see how many hits player needs to KO AI when deciding if AI should use a setup move
        // this is the only place where AI calcs high roll dmg from the player
        // explicitly ignore explosion for this calculation
        if (!MatchesSelfKillOrSuperfang(gMovesInfo[moves[i]].effect, FALSE))
        {
            currNumberOfHits = GetNoOfHitsToKOBattler(battlerDef, battlerAtk, i, AI_DEFENDING_SETUP, CONSIDER_ENDURE);
            if (currNumberOfHits != 0)
            {
                if (currNumberOfHits < leastNumberOfHits)
                    leastNumberOfHits = currNumberOfHits;
            }
        }
    }
    return leastNumberOfHits;
}

u32 NoOfHitsForTargetToFaintBattlerWithMod(u32 battlerDef, u32 battlerAtk, s32 hpMod)
{
    u32 i;
    u32 currNumberOfHits;
    u32 leastNumberOfHits = UNKNOWN_NO_OF_HITS;
    u32 hpCheck = gBattleMons[battlerAtk].hp + hpMod;
    u32 damageDealt = 0;
    u16 *moves = GetMovesArray(battlerDef);

    if (hpCheck > gBattleMons[battlerAtk].maxHP)
        hpCheck = gBattleMons[battlerAtk].maxHP;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        damageDealt = AI_GetDamage(battlerDef, battlerAtk, i, AI_DEFENDING_NORMAL, AI_DATA);
        if (damageDealt == 0 || MatchesSelfKillOrSuperfang(gMovesInfo[moves[i]].effect, FALSE))
            continue;
        currNumberOfHits = hpCheck / (damageDealt + 1) + 1;
        if (currNumberOfHits != 0)
        {
            if (currNumberOfHits < leastNumberOfHits)
                leastNumberOfHits = currNumberOfHits;
        }
    }
    return leastNumberOfHits;
}

void GetBestDmgMovesFromBattler(u32 battlerAtk, u32 battlerDef, enum DamageCalcContext calcContext, u32 *bestMoves)
{
    struct AiLogicData *aiData = AI_DATA;
    u32 moveIndex;
    u32 bestDmg = 0;
    u16 *moves = GetMovesArray(battlerAtk);
    u32 moveLimitations = aiData->moveLimitations[battlerAtk];
    u32 countBestMoves = 0;

    if (CanAIFaintTarget(battlerAtk, battlerDef, 1))
    {
        for (moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
        {
            if (CanIndexMoveFaintTarget(battlerAtk, battlerDef, moveIndex, AI_ATTACKING_ON_FIELD))
                bestMoves[countBestMoves++] = moves[moveIndex];
        }
    }
    else
    {
        for (moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
        {
            if (IsMoveUnusable(moveIndex, moves[moveIndex], moveLimitations)
            // || (GetMovePower(moves[moveIndex]) == 0)
            || (gMovesInfo[moves[moveIndex]].power == 0)
            || (AI_GetDamage(battlerAtk, battlerDef, moveIndex, calcContext, aiData) == 0))
                continue;

            if (bestDmg < AI_GetDamage(battlerAtk, battlerDef, moveIndex, calcContext, aiData))
            {
                countBestMoves = 0;
                bestDmg = AI_GetDamage(battlerAtk, battlerDef, moveIndex, calcContext, aiData);
                *bestMoves = 0;
                bestMoves[countBestMoves++] = moves[moveIndex];
            }
            else if (bestDmg == AI_GetDamage(battlerAtk, battlerDef, moveIndex, calcContext, aiData))
            {
                bestMoves[countBestMoves++] = moves[moveIndex];
            }
        }
    }
}

u32 GetMoveIndex(u32 battler, u32 move)
{
    u16 *moves = GetMovesArray(battler);

    for (u32 moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
    {
        if (moves[moveIndex] == move)
            return moveIndex;
    }

    return MAX_MON_MOVES;
}

u32 GetBestDmgMoveFromBattler(u32 battlerAtk, u32 battlerDef, enum DamageCalcContext calcContext)
{
    struct AiLogicData *aiData = AI_DATA;
    u32 moveIndex;
    u32 move = 0;
    u32 bestDmg = 0;
    u16 *moves = GetMovesArray(battlerAtk);
    u32 moveLimitations = aiData->moveLimitations[battlerAtk];

    for (moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
    {
        if (IsMoveUnusable(moveIndex, moves[moveIndex], moveLimitations))
            continue;

        if (bestDmg < AI_GetDamage(battlerAtk, battlerDef, moveIndex, calcContext, aiData))
        {
            bestDmg = AI_GetDamage(battlerAtk, battlerDef, moveIndex, calcContext, aiData);
            move = moves[moveIndex];
        }
    }
    return move;
}

u32 GetBestDmgFromBattler(u32 battler, u32 battlerTarget, enum DamageCalcContext calcContext)
{
    struct AiLogicData *aiData = AI_DATA;
    u32 moveIndex;
    u32 bestDmg = 0;
    u16 *moves = GetMovesArray(battler);
    u32 moveLimitations = aiData->moveLimitations[battler];

    for (moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
    {
        if (IsMoveUnusable(moveIndex, moves[moveIndex], moveLimitations) || MatchesSelfKillOrSuperfang(gMovesInfo[moves[moveIndex]].effect, FALSE))
            continue;

        u32 damage = AI_GetDamage(battler, battlerTarget, moveIndex, calcContext, aiData);
        if (bestDmg < damage)
            bestDmg = damage;
    }

    return bestDmg;
}

// Check if AI mon has the means to faint the target with any of its moves.
// If numHits > 1, check if the target will be KO'ed by that number of hits (ignoring healing effects)
bool32 CanAIFaintTarget(u32 battlerAtk, u32 battlerDef, u32 numHits)
{
    struct AiLogicData *aiData = AI_DATA;
    s32 moveIndex, dmg;
    u16 *moves = gBattleMons[battlerAtk].moves;
    u32 moveLimitations = aiData->moveLimitations[battlerAtk];

    for (moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
    {
        if (IsMoveUnusable(moveIndex, moves[moveIndex], moveLimitations))
            continue;
        
        dmg = AI_GetDamage(battlerAtk, battlerDef, moveIndex, AI_ATTACKING_ON_FIELD, aiData);

        if (numHits)
            dmg *= numHits;

        if (gBattleMons[battlerDef].hp <= dmg)
        {
            if (numHits > 1)
                return TRUE;

            if (!CanEndureHit(battlerAtk, battlerDef, moves[moveIndex]))
                return TRUE;
        }
    }

    return FALSE;
}

bool32 CanAIMoveFaintTarget(u32 move, u32 battlerAtk, u32 battlerDef, u32 nHits)
{
    u32 indexSlot = GetMoveSlot(GetMovesArray(battlerAtk), move);
    if (indexSlot < MAX_MON_MOVES)
    {
        if (GetNoOfHitsToKO(AI_GetDamage(battlerAtk, battlerDef, indexSlot, AI_ATTACKING_ON_FIELD, AI_DATA), gBattleMons[battlerDef].hp) <= nHits)
            return TRUE;
    }
    return FALSE;
}

bool32 CanTargetMoveFaintAi(u32 move, u32 battlerDef, u32 battlerAtk, u32 nHits)
{
    u32 indexSlot = GetMoveSlot(GetMovesArray(battlerDef), move);
    if (indexSlot < MAX_MON_MOVES)
    {
        if (GetNoOfHitsToKO(AI_GetDamage(battlerDef, battlerAtk, indexSlot, AI_DEFENDING_NORMAL, AI_DATA), gBattleMons[battlerAtk].hp) <= nHits)
            return TRUE;
    }
    return FALSE;
}

// Check if target has means to faint ai mon after modding hp/dmg
bool32 CanTargetFaintAiWithMod(u32 battlerDef, u32 battlerAtk, s32 hpMod, s32 dmgMod)
{
    struct AiLogicData *aiData = AI_DATA;
    u32 moveIndex;
    s32 dmg;
    u16 *moves = GetMovesArray(battlerDef);
    u32 hpCheck = gBattleMons[battlerAtk].hp + hpMod;
    u32 moveLimitations = aiData->moveLimitations[battlerAtk];

    if (hpCheck > gBattleMons[battlerAtk].maxHP)
        hpCheck = gBattleMons[battlerAtk].maxHP;

    for (moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
    {
        if (IsMoveUnusable(moveIndex, moves[moveIndex], moveLimitations) || MatchesSelfKillOrSuperfang(gMovesInfo[moves[moveIndex]].effect, FALSE))
            continue;
        
        dmg = AI_GetDamage(battlerDef, battlerAtk, moveIndex, AI_DEFENDING_NORMAL, aiData);

        if (dmgMod)
            dmg *= dmgMod;

        if (dmg >= hpCheck)
            return TRUE;
    }

    return FALSE;
}

bool32 AI_IsAbilityOnSide(u32 battlerId, u32 ability)
{
    if (IsBattlerAlive(battlerId) && AI_DATA->abilities[battlerId] == ability)
        return TRUE;
    else if (IsBattlerAlive(BATTLE_PARTNER(battlerId)) && AI_DATA->abilities[BATTLE_PARTNER(battlerId)] == ability)
        return TRUE;
    else
        return FALSE;
}

u32 AI_GetBattlerAbility(u32 battler)
{
    u16 abilityToUse = GetAbilityBySpecies(gBattleMons[battler].species, gBattleMons[battler].abilityNum, gBattleMons[battler].cantRandomizeAbility);

    if (gAbilitiesInfo[abilityToUse].cantBeSuppressed)
        return abilityToUse;

    if (gStatuses3[battler] & STATUS3_GASTRO_ACID)
        return ABILITY_NONE;

    if (IsNeutralizingGasOnField()
     && abilityToUse != ABILITY_NEUTRALIZING_GAS
     && GetBattlerHoldEffectIgnoreAbility(battler, TRUE) != HOLD_EFFECT_ABILITY_SHIELD)
        return ABILITY_NONE;

    return abilityToUse;
}

// does NOT include ability suppression checks
s32 AI_DecideKnownAbilityForTurn(u32 battlerId)
{
    u32 validAbilities[NUM_ABILITY_SLOTS];
    u8 i, numValidAbilities = 0;
    u32 knownAbility = AI_GetBattlerAbility(battlerId);

    // We've had ability overwritten by e.g. Worry Seed. It is not part of AI_PARTY in case of switching
    if (gBattleStruct->overwrittenAbilities[battlerId])
        return gBattleStruct->overwrittenAbilities[battlerId];

    // The AI knows its own ability.
    if (IsAiBattlerAware(battlerId))
        return knownAbility;

    // Check neutralizing gas, gastro acid
    if (knownAbility == ABILITY_NONE)
        return knownAbility;

    if (AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].ability != ABILITY_NONE)
        return AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].ability;

    // Abilities that prevent fleeing - treat as always known
    if (knownAbility == ABILITY_SHADOW_TAG || knownAbility == ABILITY_MAGNET_PULL || knownAbility == ABILITY_ARENA_TRAP)
        return knownAbility;

    for (i = 0; i < NUM_ABILITY_SLOTS; i++)
    {
        if (gSpeciesInfo[gBattleMons[battlerId].species].abilities[i] != ABILITY_NONE)
            validAbilities[numValidAbilities++] = GetAbilityBySpecies(gBattleMons[battlerId].species, i, gBattleMons[battlerId].cantRandomizeAbility);
    }

    if (numValidAbilities > 0)
        return validAbilities[RandomUniform(RNG_AI_ABILITY, 0, numValidAbilities - 1)];

    return ABILITY_NONE; // Unknown.
}

u32 AI_DecideHoldEffectForTurn(u32 battlerId)
{
    u32 holdEffect;

    if (!IsAiBattlerAware(battlerId))
        holdEffect = AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].heldEffect;
    else
        holdEffect = GetBattlerHoldEffect(battlerId, FALSE);

    if (AI_THINKING_STRUCT->aiFlags[battlerId] & AI_FLAG_NEGATE_UNAWARE)
        return holdEffect;

    if (gStatuses3[battlerId] & STATUS3_EMBARGO)
        return HOLD_EFFECT_NONE;
    if (gFieldStatuses & STATUS_FIELD_MAGIC_ROOM)
        return HOLD_EFFECT_NONE;
    if (AI_DATA->abilities[battlerId] == ABILITY_KLUTZ && !(gStatuses3[battlerId] & STATUS3_GASTRO_ACID))
        return HOLD_EFFECT_NONE;

    return holdEffect;
}

bool32 DoesBattlerIgnoreAbilityChecks(u32 atkAbility, u32 move)
{
    if (AI_THINKING_STRUCT->aiFlags[sBattler_AI] & AI_FLAG_NEGATE_UNAWARE)
        return FALSE;   // AI handicap flag: doesn't understand ability suppression concept

    if (IsMoldBreakerTypeAbility(sBattler_AI, atkAbility) || gMovesInfo[move].ignoresTargetAbility)
        return TRUE;

    return FALSE;
}

static inline bool32 AI_WeatherHasEffect(struct AiLogicData *aiData)
{
    if (AI_THINKING_STRUCT->aiFlags[sBattler_AI] & AI_FLAG_NEGATE_UNAWARE)
        return TRUE;   // AI doesn't understand weather supression (handicap)

    return aiData->weatherHasEffect;  // weather damping abilities are announced
}

u32 AI_GetWeather(struct AiLogicData *aiData)
{
    if (gBattleWeather == B_WEATHER_NONE)
        return B_WEATHER_NONE;
    if (!AI_WeatherHasEffect(aiData))
        return B_WEATHER_NONE;
    return gBattleWeather;
}

bool32 IsAromaVeilProtectedMove(u32 move)
{
    switch (move)
    {
    case MOVE_DISABLE:
    case MOVE_ATTRACT:
    case MOVE_ENCORE:
    case MOVE_TORMENT:
    case MOVE_TAUNT:
    case MOVE_HEAL_BLOCK:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsNonVolatileStatusMoveEffect(u32 moveEffect)
{
    switch (moveEffect)
    {
    case EFFECT_SLEEP:
    case EFFECT_TOXIC:
    case EFFECT_POISON:
    case EFFECT_PARALYZE:
    case EFFECT_WILL_O_WISP:
    case EFFECT_YAWN:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsConfusionMoveEffect(u32 moveEffect)
{
    switch (moveEffect)
    {
    case EFFECT_CONFUSE:
    case EFFECT_SWAGGER:
    case EFFECT_FLATTER:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsHazardMove(u32 move)
{
    // Hazard setting moves like Stealth Rock, Spikes, etc.
    u32 moveEffect = gMovesInfo[move].effect;
    switch (moveEffect)
    {
    case EFFECT_SPIKES:
    case EFFECT_TOXIC_SPIKES:
    case EFFECT_STICKY_WEB:
    case EFFECT_STEALTH_ROCK:
        return TRUE;
    }

    if (gMovesInfo[move].argument == MAX_EFFECT_STEELSURGE)
        return TRUE;

    // u32 additionalEffectCount = gMovesInfo[move].numAdditionalEffects;
    // for (i = 0; i < additionalEffectCount; i++)
    // {
    //     switch (gMovesInfo[move].additionalEffects[i].moveEffect)
    //     {
    //     case MOVE_EFFECT_STEELSURGE:
    //         return TRUE;
    //     }
    // }
    return FALSE;
}

bool32 IsHazardClearingMove(u32 move)
{
    // Hazard clearing effects like Rapid Spin, Tidy Up, etc.
    u32 i, moveEffect = gMovesInfo[move].effect;
    switch (moveEffect)
    {
    case EFFECT_TIDY_UP:
        return TRUE;
    case EFFECT_DEFOG:
        if (B_DEFOG_EFFECT_CLEARING >= GEN_6)
            return TRUE;
        break;
    }

    u32 additionalEffectCount = gMovesInfo[move].numAdditionalEffects;
    for (i = 0; i < additionalEffectCount; i++)
    {
        switch (gMovesInfo[move].additionalEffects[i].moveEffect)
        {
        case MOVE_EFFECT_RAPID_SPIN:
            return TRUE;
        }
    }

    if (gMovesInfo[move].argument == MAX_EFFECT_DEFOG)
        return TRUE;

    return FALSE;
}

bool32 IsMoveRedirectionPrevented(u32 move, u32 atkAbility)
{
    if (AI_THINKING_STRUCT->aiFlags[sBattler_AI] & AI_FLAG_NEGATE_UNAWARE)
        return FALSE;

    if (move == MOVE_SKY_DROP
      || move == MOVE_SNIPE_SHOT
      || atkAbility == ABILITY_PROPELLER_TAIL
      || atkAbility == ABILITY_STALWART)
        return TRUE;
    return FALSE;
}

bool32 IsSemiInvulnerable(u32 battlerDef, u32 move)
{
    if (gStatuses3[battlerDef] & STATUS3_PHANTOM_FORCE)
        return TRUE;
    else if (gBattleStruct->commandingDondozo & (1u << battlerDef))
        return TRUE;
    else if (!gMovesInfo[move].damagesAirborne && gStatuses3[battlerDef] & STATUS3_ON_AIR)
        return TRUE;
    else if (!gMovesInfo[move].damagesUnderwater && gStatuses3[battlerDef] & STATUS3_UNDERWATER)
        return TRUE;
    else if (!gMovesInfo[move].damagesUnderground && gStatuses3[battlerDef] & STATUS3_UNDERGROUND)
        return TRUE;
    else
        return FALSE;
}

bool32 IsMoveEncouragedToHit(u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 weather;
    if (IsSemiInvulnerable(battlerDef, move))
        return FALSE;

    //TODO - anticipate protect move?

    // always hits
    if (gStatuses3[battlerDef] & STATUS3_ALWAYS_HITS || gDisableStructs[battlerDef].battlerWithSureHit == battlerAtk)
        return TRUE;

    if (AI_DATA->abilities[battlerDef] == ABILITY_NO_GUARD || AI_DATA->abilities[battlerAtk] == ABILITY_NO_GUARD)
        return TRUE;

    if (B_TOXIC_NEVER_MISS >= GEN_6 && gMovesInfo[move].effect == EFFECT_TOXIC && IS_BATTLER_OF_TYPE(battlerAtk, TYPE_POISON))
        return TRUE;

    if (B_TOXIC_NEVER_MISS >= GEN_6 && gMovesInfo[move].effect == EFFECT_WILL_O_WISP && IS_BATTLER_OF_TYPE(battlerAtk, TYPE_FIRE))
        return TRUE;

    // discouraged from hitting
    weather = AI_GetWeather(AI_DATA);
    if ((weather & B_WEATHER_SUN) && gMovesInfo[move].effect == EFFECT_THUNDER)
        return FALSE;

    // increased accuracy but don't always hit
    if ((weather & B_WEATHER_RAIN) && gMovesInfo[move].effect == EFFECT_THUNDER)
        return TRUE;
    if ((weather & (B_WEATHER_HAIL | B_WEATHER_SNOW)) && gMovesInfo[move].effect == EFFECT_BLIZZARD)
        return TRUE;
    if (B_MINIMIZE_DMG_ACC >= GEN_6 && (gStatuses3[battlerDef] & STATUS3_MINIMIZED) && gMovesInfo[move].minimizeDoubleDamage)
        return TRUE;
    if (gMovesInfo[move].accuracy == 0)
        return TRUE;

    return FALSE;
}

bool32 ShouldTryOHKO(u32 battlerAtk, u32 battlerDef, u32 atkAbility, u32 defAbility, u32 move)
{
    u32 holdEffect = AI_DATA->holdEffects[battlerDef];
    u32 accuracy = AI_DATA->moveAccuracy[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex];

    gPotentialItemEffectBattler = battlerDef;
    if (holdEffect == HOLD_EFFECT_FOCUS_BAND && (Random() % 100) < AI_DATA->holdEffectParams[battlerDef])
        return FALSE;   //probabilistically speaking, focus band should activate so dont OHKO
    else if (holdEffect == HOLD_EFFECT_FOCUS_SASH && AtMaxHp(battlerDef))
        return FALSE;

    if (!DoesBattlerIgnoreAbilityChecks(atkAbility, move) && defAbility == ABILITY_STURDY)
        return FALSE;

    if ((((gStatuses3[battlerDef] & STATUS3_ALWAYS_HITS)
        && gDisableStructs[battlerDef].battlerWithSureHit == battlerAtk)
        || atkAbility == ABILITY_NO_GUARD || defAbility == ABILITY_NO_GUARD)
        && gBattleMons[battlerAtk].level >= gBattleMons[battlerDef].level)
    {
        return TRUE;
    }
    else    // test the odds
    {
        u32 odds = accuracy + (gBattleMons[battlerAtk].level - gBattleMons[battlerDef].level);
        if (B_SHEER_COLD_ACC >= GEN_7 && move == MOVE_SHEER_COLD && !IS_BATTLER_OF_TYPE(gBattlerAttacker, TYPE_ICE))
            odds -= 10;
        if (Random() % 100 + 1 < odds && gBattleMons[battlerAtk].level >= gBattleMons[battlerDef].level)
            return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetSandstorm(u32 battler, u32 ability, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & B_WEATHER_SANDSTORM)
        return FALSE;

    if (ability == ABILITY_SAND_VEIL
      || ability == ABILITY_SAND_RUSH
      || ability == ABILITY_SAND_FORCE
      || ability == ABILITY_OVERCOAT
      || ability == ABILITY_MAGIC_GUARD
      || holdEffect == HOLD_EFFECT_SAFETY_GOGGLES
      || IS_BATTLER_ANY_TYPE(battler, TYPE_ROCK, TYPE_GROUND, TYPE_STEEL)
      || HasMoveEffect(battler, EFFECT_SHORE_UP)
      || HasMoveEffect(battler, EFFECT_WEATHER_BALL))
    {
        return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetHail(u32 battler, u32 ability, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & (B_WEATHER_HAIL | B_WEATHER_SNOW))
        return FALSE;

    if (ability == ABILITY_SNOW_CLOAK
      || ability == ABILITY_ICE_BODY
      || ability == ABILITY_FORECAST
      || ability == ABILITY_SLUSH_RUSH
      || ability == ABILITY_MAGIC_GUARD
      || ability == ABILITY_OVERCOAT
      || holdEffect == HOLD_EFFECT_SAFETY_GOGGLES
      || IS_BATTLER_OF_TYPE(battler, TYPE_ICE)
      || HasMoveEffect(battler, EFFECT_BLIZZARD)
      || HasMoveEffect(battler, EFFECT_AURORA_VEIL)
      || HasMoveEffect(battler, EFFECT_WEATHER_BALL))
    {
        return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetRain(u32 battlerAtk, u32 atkAbility, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & B_WEATHER_RAIN)
        return FALSE;

    if (holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA
     && (atkAbility == ABILITY_SWIFT_SWIM
      || atkAbility == ABILITY_FORECAST
      || atkAbility == ABILITY_HYDRATION
      || atkAbility == ABILITY_RAIN_DISH
      || atkAbility == ABILITY_DRY_SKIN
      || HasMoveEffect(battlerAtk, EFFECT_THUNDER)
      || HasMoveEffect(battlerAtk, EFFECT_WEATHER_BALL)
      || HasMoveWithType(battlerAtk, TYPE_WATER)))
    {
        return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetSun(u32 battlerAtk, u32 atkAbility, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & B_WEATHER_SUN)
        return FALSE;

    if (holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA
     && (atkAbility == ABILITY_CHLOROPHYLL
      || atkAbility == ABILITY_FLOWER_GIFT
      || atkAbility == ABILITY_FORECAST
      || atkAbility == ABILITY_LEAF_GUARD
      || atkAbility == ABILITY_SOLAR_POWER
      || atkAbility == ABILITY_HARVEST
      || HasMoveEffect(battlerAtk, EFFECT_SOLAR_BEAM)
      || HasMoveEffect(battlerAtk, EFFECT_MORNING_SUN)
      || HasMoveEffect(battlerAtk, EFFECT_SYNTHESIS)
      || HasMoveEffect(battlerAtk, EFFECT_MOONLIGHT)
      || HasMoveEffect(battlerAtk, EFFECT_WEATHER_BALL)
      || HasMoveEffect(battlerAtk, EFFECT_GROWTH)
      || HasMoveWithType(battlerAtk, TYPE_FIRE)))
    {
        return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetSnow(u32 battler, u32 ability, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & (B_WEATHER_SNOW | B_WEATHER_HAIL))
        return FALSE;

    if (ability == ABILITY_SNOW_CLOAK
      || ability == ABILITY_ICE_BODY
      || ability == ABILITY_FORECAST
      || ability == ABILITY_SLUSH_RUSH
      || IS_BATTLER_OF_TYPE(battler, TYPE_ICE)
      || HasMoveEffect(battler, EFFECT_BLIZZARD)
      || HasMoveEffect(battler, EFFECT_AURORA_VEIL)
      || HasMoveEffect(battler, EFFECT_WEATHER_BALL))
    {
        return TRUE;
    }
    return FALSE;
}

void ProtectChecks(u32 battlerAtk, u32 battlerDef, u32 move, u32 predictedMove, s32 *score)
{
    // TODO more sophisticated logic
    u32 uses = gDisableStructs[battlerAtk].protectUses;
    u32 lastMoveAtk = AI_DATA->lastUsedMove[battlerAtk];
    u32 itemAtk = AI_DATA->items[battlerAtk];

    if (CanTargetFaintAi(battlerDef, battlerAtk)) // the player can KO the AI
        ADJUST_SCORE_PTR(DECENT_EFFECT);
        
    if (uses == 0)
    {
        if ((lastMoveAtk == MOVE_OCTOLOCK || gStatuses3[battlerDef] & (STATUS3_PERISH_SONG)) && IsBattlerTrapped(battlerAtk, battlerDef))
            ADJUST_SCORE_PTR(BEST_EFFECT);
        else if (itemAtk == ITEM_FLAME_ORB && ShouldBurn(battlerAtk, battlerAtk))
            ADJUST_SCORE_PTR(GOOD_EFFECT);
        else if (itemAtk == ITEM_TOXIC_ORB && ShouldPoison(battlerAtk, battlerAtk))
            ADJUST_SCORE_PTR(GOOD_EFFECT);
        else if (Random() % 256 < 100)
            ADJUST_SCORE_PTR(WEAK_EFFECT);
    }
    else
    {
        if (IsDoubleBattle())
            ADJUST_SCORE_PTR(-(2 * min(uses, 3)));
        else
            ADJUST_SCORE_PTR(-(min(uses, 3)));
    }

    if (gBattleMons[battlerAtk].status1 & (STATUS1_PSN_ANY | STATUS1_BURN | STATUS1_FROSTBITE)
     || gBattleMons[battlerAtk].status2 & (STATUS2_CURSED | STATUS2_INFATUATION)
     || gStatuses3[battlerAtk] & (STATUS3_PERISH_SONG | STATUS3_LEECHSEED | STATUS3_YAWN))
    {
        ADJUST_SCORE_PTR(-1);
    }
}

// stat stages
bool32 ShouldLowerStat(u32 battler, u32 battlerAbility, u32 stat)
{
    // no need to keep lowering stats if theyre at -4
    if (gBattleMons[battler].statStages[stat] > (MIN_STAT_STAGE + 2) && battlerAbility != ABILITY_CONTRARY)
    {
        if (AI_DATA->holdEffects[battler] == HOLD_EFFECT_CLEAR_AMULET
         || battlerAbility == ABILITY_CLEAR_BODY
         || battlerAbility == ABILITY_WHITE_SMOKE
         || battlerAbility == ABILITY_FULL_METAL_BODY
         || battlerAbility == ABILITY_COMPETITIVE
         || battlerAbility == ABILITY_DEFIANT)
            return FALSE;

        switch (stat)
        {
            case STAT_ATK:
                return !(battlerAbility == ABILITY_HYPER_CUTTER);
            case STAT_DEF:
                return !(battlerAbility == ABILITY_BIG_PECKS);
            case STAT_SPEED:
                // If AI is faster and doesn't have any mons left, lowering speed doesn't give any
                return !(AI_IsFaster(sBattler_AI, battler, AI_THINKING_STRUCT->moveConsidered, MOVE_NONE, DONT_CONSIDER_PRIORITY)
                    && CountUsablePartyMons(sBattler_AI) == 0
                    && !HasMoveEffect(sBattler_AI, EFFECT_ELECTRO_BALL));
            case STAT_ACC:
                return !(battlerAbility == ABILITY_KEEN_EYE);
        }
        return TRUE;
    }

    return FALSE;
}

bool32 BattlerStatCanRise(u32 battler, u32 battlerAbility, u32 stat)
{
    if ((gBattleMons[battler].statStages[stat] < MAX_STAT_STAGE && battlerAbility != ABILITY_CONTRARY)
      || (battlerAbility == ABILITY_CONTRARY && gBattleMons[battler].statStages[stat] > MIN_STAT_STAGE))
        return TRUE;
    return FALSE;
}

bool32 AreBattlersStatsMaxed(u32 battlerId)
{
    u32 i;
    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerId].statStages[i] < MAX_STAT_STAGE)
            return FALSE;
    }
    return TRUE;
}

bool32 AnyStatIsRaised(u32 battlerId)
{
    u32 i;

    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerId].statStages[i] > DEFAULT_STAT_STAGE)
            return TRUE;
    }
    return FALSE;
}

u32 CountPositiveStatStages(u32 battlerId)
{
    u32 count = 0;
    u32 i;
    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerId].statStages[i] > DEFAULT_STAT_STAGE)
            count++;
    }
    return count;
}

u32 CountNegativeStatStages(u32 battlerId)
{
    u32 count = 0;
    u32 i;
    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerId].statStages[i] < DEFAULT_STAT_STAGE)
            count++;
    }
    return count;
}

bool32 ShouldLowerAttack(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (AI_IsFaster(battlerAtk, battlerDef, AI_THINKING_STRUCT->moveConsidered, MOVE_NONE, DONT_CONSIDER_PRIORITY)
            && (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT)
            && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return FALSE; // Don't bother lowering stats if can kill enemy.

    if (gBattleMons[battlerDef].statStages[STAT_ATK] > 4
      && HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL)
      && defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_HYPER_CUTTER
      && defAbility != ABILITY_DEFIANT
      && defAbility != ABILITY_COMPETITIVE
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 ShouldLowerDefense(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (AI_IsFaster(battlerAtk, battlerDef, AI_THINKING_STRUCT->moveConsidered, MOVE_NONE, DONT_CONSIDER_PRIORITY)
            && (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT)
            && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return FALSE; // Don't bother lowering stats if can kill enemy.

    if (gBattleMons[battlerDef].statStages[STAT_DEF] > 4
      && HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL)
      && defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_BIG_PECKS
      && defAbility != ABILITY_DEFIANT
      && defAbility != ABILITY_COMPETITIVE
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 ShouldLowerSpAtk(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (AI_IsFaster(battlerAtk, battlerDef, AI_THINKING_STRUCT->moveConsidered, MOVE_NONE, DONT_CONSIDER_PRIORITY)
            && (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT)
            && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return FALSE; // Don't bother lowering stats if can kill enemy.

    if (gBattleMons[battlerDef].statStages[STAT_SPATK] > 4
      && HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL)
      && defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && defAbility != ABILITY_DEFIANT
      && defAbility != ABILITY_COMPETITIVE
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 ShouldLowerSpDef(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (AI_IsFaster(battlerAtk, battlerDef, AI_THINKING_STRUCT->moveConsidered, MOVE_NONE, DONT_CONSIDER_PRIORITY)
            && (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT)
            && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return FALSE; // Don't bother lowering stats if can kill enemy.

    if (gBattleMons[battlerDef].statStages[STAT_SPDEF] > 4
      && HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL)
      && defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && defAbility != ABILITY_DEFIANT
      && defAbility != ABILITY_COMPETITIVE
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 ShouldLowerAccuracy(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (AI_IsFaster(battlerAtk, battlerDef, AI_THINKING_STRUCT->moveConsidered, MOVE_NONE, DONT_CONSIDER_PRIORITY)
            && (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT)
            && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return FALSE; // Don't bother lowering stats if can kill enemy.

    if (defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_KEEN_EYE
      && defAbility != ABILITY_MINDS_EYE
      && defAbility != ABILITY_DEFIANT
      && defAbility != ABILITY_COMPETITIVE
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 ShouldLowerEvasion(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (AI_IsFaster(battlerAtk, battlerDef, AI_THINKING_STRUCT->moveConsidered, MOVE_NONE, DONT_CONSIDER_PRIORITY)
            && (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT)
            && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return FALSE; // Don't bother lowering stats if can kill enemy.

    if (gBattleMons[battlerDef].statStages[STAT_EVASION] > DEFAULT_STAT_STAGE
      && defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && defAbility != ABILITY_DEFIANT
      && defAbility != ABILITY_COMPETITIVE
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 CanIndexMoveFaintTarget(u32 battlerAtk, u32 battlerDef, u32 moveIndex, enum DamageCalcContext calcContext)
{
    s32 dmg;
    u16 *moves = gBattleMons[battlerAtk].moves;

    if (IsDoubleBattle() && battlerDef == BATTLE_PARTNER(battlerAtk))
        dmg = AI_DATA->simulatedDmg[battlerAtk][battlerDef][moveIndex].maximum; // Attacking partner, be careful
    else
        dmg = AI_GetDamage(battlerAtk, battlerDef, moveIndex, calcContext, AI_DATA);

    if (gBattleMons[battlerDef].hp <= dmg && !CanEndureHit(battlerAtk, battlerDef, moves[moveIndex]))
        return TRUE;
    return FALSE;
}

u16 *GetMovesArray(u32 battler)
{
    if (IsAiBattlerAware(battler) || IsAiBattlerAware(BATTLE_PARTNER(battler)))
        return gBattleMons[battler].moves;
    else
        return gBattleResources->battleHistory->usedMoves[battler];
}

bool32 HasPhysicalBestMove(u32 battlerAtk, u32 battlerDef, enum DamageCalcContext calcContext)
{
    u32 atkBestMoves[MAX_MON_MOVES] = {0};
    u32 i;
    GetBestDmgMovesFromBattler(battlerAtk, battlerDef, calcContext, atkBestMoves);
    bool32 bestMoveIsPhysical = TRUE;
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (atkBestMoves[i] == MOVE_NONE)
        {
            break;
        }
        else
        {
        if (GetBattleMoveCategory(atkBestMoves[i]) == DAMAGE_CATEGORY_SPECIAL)
            {
                bestMoveIsPhysical = FALSE;
                break;
            }
        }
    }
    return bestMoveIsPhysical;
}

bool32 HasSpecialBestMove(u32 battlerAtk, u32 battlerDef, enum DamageCalcContext calcContext)
{
    u32 atkBestMoves[MAX_MON_MOVES] = {0};
    u32 i;
    GetBestDmgMovesFromBattler(battlerAtk, battlerDef, calcContext, atkBestMoves);
    bool32 bestMoveIsSpecial = TRUE;
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (atkBestMoves[i] == MOVE_NONE)
        {
            break;
        }
        else if (GetBattleMoveCategory(atkBestMoves[i]) == DAMAGE_CATEGORY_PHYSICAL)
        {
            bestMoveIsSpecial = FALSE;
            break;
        }
    }
    return bestMoveIsSpecial;
}

bool32 HasOnlyMovesWithCategory(u32 battlerId, u32 category, bool32 onlyOffensive)
{
    u32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (onlyOffensive && IS_MOVE_STATUS(moves[i]))
            continue;
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && GetBattleMoveCategory(moves[i]) != category)
            return FALSE;
    }

    return TRUE;
}

bool32 HasMoveWithCategory(u32 battler, u32 category)
{
    u32 i;
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && GetBattleMoveCategory(moves[i]) == category)
            return TRUE;
    }
    return FALSE;
}

bool32 HasMoveWithType(u32 battler, u32 type)
{
    s32 i;
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && gMovesInfo[moves[i]].type == type)
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveEffect(u32 battlerId, u32 effect)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && gMovesInfo[moves[i]].effect == effect)
            return TRUE;
    }

    return FALSE;
}

bool32 HasBattlerSideMoveWithEffect(u32 battler, u32 effect)
{
    if (HasMoveEffect(battler, effect))
        return TRUE;
    if (IsDoubleBattle() && HasMoveEffect(BATTLE_OPPOSITE(battler), effect))
        return TRUE;
    return FALSE;
}

// HasBattlerSideMoveWithEffect checks if the AI knows a side has a move effect,
// while HasBattlerSideUsedMoveWithEffect checks if the side has ever used a move effect.
// The former acts the same way as the latter if AI_FLAG_OMNISCIENT isn't used.
bool32 HasBattlerSideUsedMoveWithEffect(u32 battler, u32 effect)
{
    u32 i;
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (gMovesInfo[BATTLE_HISTORY->usedMoves[battler][i]].effect == effect)
            return TRUE;
        if (IsDoubleBattle() && gMovesInfo[BATTLE_HISTORY->usedMoves[BATTLE_OPPOSITE(battler)][i]].effect == effect)
            return TRUE;
    }
    return FALSE;
}

bool32 HasBattlerSideMoveWithAdditionalEffect(u32 battler, u32 moveEffect)
{
    if (HasMoveWithAdditionalEffect(battler, moveEffect))
        return TRUE;
    if (IsDoubleBattle() && HasMoveWithAdditionalEffect(BATTLE_OPPOSITE(battler), moveEffect))
        return TRUE;
    return FALSE;
}

// HasBattlerSideMoveWithAdditionalEffect checks if the AI knows a side has a move effect, 
// while HasBattlerSideUsedMoveWithAdditionalEffect checks if the side has ever used a move effect.
// The former acts the same way as the latter if AI_FLAG_OMNISCIENT isn't used.
bool32 HasBattlerSideUsedMoveWithAdditionalEffect(u32 battler, u32 moveEffect)
{
    u32 i;
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (MoveHasAdditionalEffect(BATTLE_HISTORY->usedMoves[battler][i], moveEffect))
            return TRUE;
        if (IsDoubleBattle() && MoveHasAdditionalEffect(BATTLE_HISTORY->usedMoves[BATTLE_OPPOSITE(battler)][i], moveEffect))
            return TRUE;
    }
    return FALSE;
}

bool32 HasMoveToStopSetup(u32 battlerId, u32 noOfHitsToFaint, u32 aiIsFaster)
{
    s32 i, j;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE)
        {
            if (noOfHitsToFaint <=2)
            {
                if (GetMovePriority(battlerId, moves[i]) > 0 && gMovesInfo[moves[i]].power != 0 && gMovesInfo[moves[i]].effect != EFFECT_FIRST_TURN_ONLY)
                    return TRUE;

                for (j = 0; j < gMovesInfo[moves[i]].numAdditionalEffects; j++)
                {
                    switch (gMovesInfo[moves[i]].additionalEffects[j].moveEffect)
                    {
                        case MOVE_EFFECT_SPD_MINUS_1:
                        case MOVE_EFFECT_SPD_MINUS_2:
                            if (aiIsFaster && !gMovesInfo[moves[i]].additionalEffects[j].self)
                                return TRUE;
                    }
                }
            }
        }
    }

    return FALSE;
}

bool32 HasMoveEffectANDArg(u32 battlerId, u32 effect, u32 argument)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && gMovesInfo[moves[i]].effect == effect
            && (gMovesInfo[moves[i]].argument & argument))
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveWithAdditionalEffect(u32 battlerId, u32 moveEffect)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && MoveHasAdditionalEffect(moves[i], moveEffect))
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveWithCriticalHitChance(u32 battlerId)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && gMovesInfo[moves[i]].criticalHitStage > 0)
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveWithMoveEffectExcept(u32 battlerId, u32 moveEffect, u32 exception)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && gMovesInfo[moves[i]].effect != exception
            && MoveHasAdditionalEffect(moves[i], moveEffect))
            return TRUE;
    }

    return FALSE;
}

bool32 HasMove(u32 battlerId, u32 move)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && moves[i] == move)
            return TRUE;
    }

    return FALSE;
}

bool32 HasAnyKnownMove(u32 battlerId)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE)
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveThatLowersOwnStats(u32 battlerId)
{
    s32 i, j;
    u32 aiMove;
    u16 *moves = GetMovesArray(battlerId);
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        aiMove = moves[i];
        if (aiMove != MOVE_NONE && aiMove != MOVE_UNAVAILABLE)
        {
            for (j = 0; j < gMovesInfo[aiMove].numAdditionalEffects; j++)
            {
                if (IsSelfStatLoweringEffect(gMovesInfo[aiMove].additionalEffects[j].moveEffect) && gMovesInfo[aiMove].additionalEffects[j].self)
                    return TRUE;
            }
        }
    }
    return FALSE;
}

bool32 HasMoveWithLowAccuracy(u32 battlerAtk, u32 battlerDef, u32 accCheck, bool32 ignoreStatus, u32 atkAbility, u32 defAbility, u32 atkHoldEffect, u32 defHoldEffect)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerAtk);
    u32 moveLimitations = AI_DATA->moveLimitations[battlerAtk];

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] == MOVE_NONE || moves[i] == MOVE_UNAVAILABLE)
            continue;

        if (!((1u << i) & moveLimitations))
        {
            if (ignoreStatus && IS_MOVE_STATUS(moves[i]))
                continue;
            else if ((!IS_MOVE_STATUS(moves[i]) && gMovesInfo[moves[i]].accuracy == 0)
                  || GetBattlerMoveTargetType(battlerAtk, moves[i]) & (MOVE_TARGET_USER | MOVE_TARGET_OPPONENTS_FIELD))
                continue;

            if (AI_DATA->moveAccuracy[battlerAtk][battlerDef][i] <= accCheck)
                return TRUE;
        }
    }

    return FALSE;
}

bool32 HasSleepMoveWithLowAccuracy(u32 battlerAtk, u32 battlerDef)
{
    u32 moveLimitations = AI_DATA->moveLimitations[battlerAtk];
    u32 i;
    u16 *moves = GetMovesArray(battlerAtk);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] == MOVE_NONE)
            break;
        if (!((1u << i) & moveLimitations))
        {
            if (gMovesInfo[moves[i]].effect == EFFECT_SLEEP
              && AI_DATA->moveAccuracy[battlerAtk][battlerDef][i] < 85)
                return TRUE;
        }
    }
    return FALSE;
}

bool32 IsHealingMove(u32 move)
{
    return gMovesInfo[move].healingMove;
}

bool32 HasHealingEffect(u32 battlerId)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && IsHealingMove(moves[i]))
            return TRUE;
    }

    return FALSE;
}

bool32 IsTrappingMove(u32 move)
{
    switch (gMovesInfo[move].effect)
    {
    case EFFECT_MEAN_LOOK:
    case EFFECT_FAIRY_LOCK:
    //case EFFECT_NO_RETREAT:   // TODO
        return TRUE;
    default:
        return MoveHasAdditionalEffect(move, MOVE_EFFECT_PREVENT_ESCAPE)
            || MoveHasAdditionalEffect(move, MOVE_EFFECT_WRAP);
    }
}

bool32 HasTrappingMoveEffect(u32 battler)
{
    s32 i;
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && IsTrappingMove(moves[i]))
            return TRUE;
    }

    return FALSE;
}

bool32 HasThawingMove(u32 battler)
{
    CHECK_MOVE_FLAG(thawsUser);
}

bool32 IsUngroundingEffect(u32 effect)
{
    switch (effect)
    {
    case EFFECT_MAGNET_RISE:
        return TRUE;
    default:
        return FALSE;
    }
}

// for anger point
bool32 IsAttackBoostMoveEffect(u32 effect)
{
    switch (effect)
    {
    case EFFECT_ATTACK_UP:
    case EFFECT_ATTACK_UP_2:
    case EFFECT_ATTACK_ACCURACY_UP:
    case EFFECT_ATTACK_SPATK_UP:
    case EFFECT_DRAGON_DANCE:
    case EFFECT_COIL:
    case EFFECT_BELLY_DRUM:
    case EFFECT_BULK_UP:
    case EFFECT_GROWTH:
    case EFFECT_FILLET_AWAY:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsStatRaisingEffect(u32 effect)
{
    switch (effect)
    {
    case EFFECT_ATTACK_UP:
    case EFFECT_ATTACK_UP_2:
    case EFFECT_DEFENSE_UP:
    case EFFECT_DEFENSE_UP_2:
    case EFFECT_DEFENSE_UP_3:
    case EFFECT_SPEED_UP:
    case EFFECT_SPEED_UP_2:
    case EFFECT_SPECIAL_ATTACK_UP:
    case EFFECT_SPECIAL_ATTACK_UP_2:
    case EFFECT_SPECIAL_ATTACK_UP_3:
    case EFFECT_SPECIAL_DEFENSE_UP:
    case EFFECT_SPECIAL_DEFENSE_UP_2:
    case EFFECT_ACCURACY_UP:
    case EFFECT_ACCURACY_UP_2:
    case EFFECT_EVASION_UP:
    case EFFECT_EVASION_UP_2:
    case EFFECT_MINIMIZE:
    case EFFECT_DEFENSE_CURL:
    case EFFECT_CALM_MIND:
    case EFFECT_COSMIC_POWER:
    case EFFECT_DRAGON_DANCE:
    case EFFECT_ACUPRESSURE:
    case EFFECT_SHELL_SMASH:
    case EFFECT_SHIFT_GEAR:
    case EFFECT_ATTACK_ACCURACY_UP:
    case EFFECT_ATTACK_SPATK_UP:
    case EFFECT_GROWTH:
    case EFFECT_COIL:
    case EFFECT_QUIVER_DANCE:
    case EFFECT_BULK_UP:
    case EFFECT_GEOMANCY:
    case EFFECT_STOCKPILE:
    case EFFECT_VICTORY_DANCE:
        return TRUE;
    case EFFECT_CHARGE:
        return B_CHARGE_SPDEF_RAISE >= GEN_5;
    default:
        return FALSE;
    }
}

bool32 IsStatLoweringEffect(u32 effect)
{
    // ignore other potentially-beneficial effects like defog, gravity
    switch (effect)
    {
    case EFFECT_ATTACK_DOWN:
    case EFFECT_DEFENSE_DOWN:
    case EFFECT_SPEED_DOWN:
    case EFFECT_SPECIAL_ATTACK_DOWN:
    case EFFECT_SPECIAL_DEFENSE_DOWN:
    case EFFECT_ACCURACY_DOWN:
    case EFFECT_EVASION_DOWN:
    case EFFECT_ATTACK_DOWN_2:
    case EFFECT_DEFENSE_DOWN_2:
    case EFFECT_SPEED_DOWN_2:
    case EFFECT_SPECIAL_ATTACK_DOWN_2:
    case EFFECT_SPECIAL_DEFENSE_DOWN_2:
    case EFFECT_ACCURACY_DOWN_2:
    case EFFECT_EVASION_DOWN_2:
    case EFFECT_TICKLE:
    case EFFECT_CAPTIVATE:
    case EFFECT_NOBLE_ROAR:
    case EFFECT_MEMENTO:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsSelfStatLoweringEffect(u32 effect)
{
    // Self stat lowering moves like Overheart, Superpower etc.
    switch (effect)
    {
    case MOVE_EFFECT_ATK_MINUS_1:
    case MOVE_EFFECT_DEF_MINUS_1:
    case MOVE_EFFECT_SPD_MINUS_1:
    case MOVE_EFFECT_SP_ATK_MINUS_1:
    case MOVE_EFFECT_SP_DEF_MINUS_1:
    case MOVE_EFFECT_EVS_MINUS_1:
    case MOVE_EFFECT_ACC_MINUS_1:
    case MOVE_EFFECT_ATK_MINUS_2:
    case MOVE_EFFECT_DEF_MINUS_2:
    case MOVE_EFFECT_SPD_MINUS_2:
    case MOVE_EFFECT_SP_ATK_MINUS_2:
    case MOVE_EFFECT_SP_DEF_MINUS_2:
    case MOVE_EFFECT_EVS_MINUS_2:
    case MOVE_EFFECT_ACC_MINUS_2:
    case MOVE_EFFECT_V_CREATE:
    case MOVE_EFFECT_ATK_DEF_DOWN:
    case MOVE_EFFECT_DEF_SPDEF_DOWN:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsSwitchOutEffect(u32 effect)
{
    // Switch out effects like U-Turn, Volt Switch, etc.
    switch (effect)
    {
    case EFFECT_TELEPORT:
    case EFFECT_HIT_ESCAPE:
    case EFFECT_PARTING_SHOT:
    case EFFECT_BATON_PASS:
    case EFFECT_CHILLY_RECEPTION:
    case EFFECT_SHED_TAIL:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsSubstituteEffect(u32 effect)
{
    // Substitute effects like Substitute, Shed Tail, etc.
    switch (effect)
    {
    case EFFECT_SUBSTITUTE:
    case EFFECT_SHED_TAIL:
        return TRUE;
    default:
        return FALSE;
    }
}

static inline bool32 IsMoveSleepClauseTrigger(u32 move)
{
    u32 i, effect = gMovesInfo[move].effect;
    // Sleeping effects like Sleep Powder, Yawn, Dark Void, etc.
    switch (effect)
    {
    case EFFECT_SLEEP:
    case EFFECT_YAWN:
    case EFFECT_DARK_VOID:
        return TRUE;
    }
    // Sleeping effects like G-Max Befuddle, G-Max Snooze, etc.
    for (i = 0; i < gMovesInfo[move].numAdditionalEffects; i++)
    {
        switch (gMovesInfo[move].additionalEffects[i].moveEffect)
        {
        case MAX_EFFECT_EFFECT_SPORE_FOES:
        case MAX_EFFECT_YAWN_FOE:
            return TRUE;
        }
    }
    return FALSE;
}

bool32 HasDamagingMove(u32 battlerId)
{
    u32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && gMovesInfo[moves[i]].power != 0)
            return TRUE;
    }

    return FALSE;
}

bool32 HasDamagingMoveOfType(u32 battlerId, u32 type)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
          && gMovesInfo[moves[i]].type == type && gMovesInfo[moves[i]].power != 0)
            return TRUE;
    }

    return FALSE;
}

bool32 HasSubstituteIgnoringMove(u32 battler)
{
    s32 i;                                                                                                      
    u16 *moves = GetMovesArray(battler);                                                                        
    for (i = 0; i < MAX_MON_MOVES; i++)                                                                        
    {                                                                                                          
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && gMovesInfo[moves[i]].ignoresSubstitute && gMovesInfo[moves[i]].power != 0)                 
            return TRUE;                                                                                        
    }                                                                                                           
    return FALSE;
}

bool32 HasHighCritRatioMove(u32 battler)
{
    s32 i;
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && gMovesInfo[moves[i]].criticalHitStage > 0)
            return TRUE;
    }

    return FALSE;
}

bool32 HasMagicCoatAffectedMove(u32 battler)
{
    CHECK_MOVE_FLAG(magicCoatAffected);
}

bool32 HasSnatchAffectedMove(u32 battler)
{
    CHECK_MOVE_FLAG(snatchAffected);
}

bool32 IsTwoTurnNotSemiInvulnerableMove(u32 battlerAtk, u32 move)
{
    switch (gMovesInfo[move].effect)
    {
    case EFFECT_SOLAR_BEAM:
    case EFFECT_TWO_TURNS_ATTACK:
    case EFFECT_GEOMANCY:
        return !(AI_DATA->holdEffects[battlerAtk] == HOLD_EFFECT_POWER_HERB
          || (AI_GetWeather(AI_DATA) & gMovesInfo[move].argument));
    default:
        return FALSE;
    }
}

static u32 GetLeechSeedDamage(u32 battlerId)
{
    u32 damage = 0;
    if ((gStatuses3[battlerId] & STATUS3_LEECHSEED)
     && gBattleMons[gStatuses3[battlerId] & STATUS3_LEECHSEED_BATTLER].hp != 0)
     {
        damage = GetNonDynamaxMaxHP(battlerId) / 8;
        if (damage == 0)
            damage = 1;
     }
     return damage;
}

static u32 GetNightmareDamage(u32 battlerId)
{
    u32 damage = 0;
    if ((gBattleMons[battlerId].status2 & STATUS2_NIGHTMARE) && gBattleMons[battlerId].status1 & STATUS1_SLEEP)
    {
        damage = GetNonDynamaxMaxHP(battlerId) / 4;
        if (damage == 0)
            damage = 1;
    }
    return damage;
}

static u32 GetCurseDamage(u32 battlerId)
{
    u32 damage = 0;
    if (gBattleMons[battlerId].status2 & STATUS2_CURSED)
    {
        damage = GetNonDynamaxMaxHP(battlerId) / 4;
        if (damage == 0)
            damage = 1;
    }
    return damage;
}

static u32 GetTrapDamage(u32 battlerId)
{
    // ai has no knowledge about turns remaining
    u32 damage = 0;
    u32 holdEffect = AI_DATA->holdEffects[gBattleStruct->wrappedBy[battlerId]];
    if (gBattleMons[battlerId].status2 & STATUS2_WRAPPED)
    {
        if (holdEffect == HOLD_EFFECT_BINDING_BAND)
            damage = GetNonDynamaxMaxHP(battlerId) / (B_BINDING_DAMAGE >= GEN_6 ? 6 : 8);
        else
            damage = GetNonDynamaxMaxHP(battlerId) / (B_BINDING_DAMAGE >= GEN_6 ? 8 : 16);

        if (damage == 0)
            damage = 1;
    }
    return damage;
}

static u32 GetPoisonDamage(u32 battlerId)
{
    u32 damage = 0;

    if (AI_DATA->abilities[battlerId] == ABILITY_POISON_HEAL)
        return damage;

    if (gBattleMons[battlerId].status1 & STATUS1_POISON)
    {
        damage = gBattleMons[battlerId].maxHP / 8;
        if (damage == 0)
            damage = 1;
    }
    else if (gBattleMons[battlerId].status1 & STATUS1_TOXIC_POISON)
    {
        u32 status1Temp = gBattleMons[battlerId].status1;
        damage = gBattleMons[battlerId].maxHP / 16;
        if (damage == 0)
            damage = 1;
        if ((gBattleMons[battlerId].status1 & STATUS1_TOXIC_COUNTER) != STATUS1_TOXIC_TURN(15)) // not 16 turns
            status1Temp += STATUS1_TOXIC_TURN(1);
        damage *= (status1Temp & STATUS1_TOXIC_COUNTER) >> 8;
    }
    return damage;
}

static bool32 BattlerAffectedBySandstorm(u32 battlerId, u32 ability)
{
    if (!IS_BATTLER_ANY_TYPE(battlerId, TYPE_ROCK, TYPE_GROUND, TYPE_STEEL)
      && ability != ABILITY_SAND_VEIL
      && ability != ABILITY_SAND_FORCE
      && ability != ABILITY_SAND_RUSH
      && ability != ABILITY_OVERCOAT)
        return TRUE;
    return FALSE;
}

static bool32 BattlerAffectedByHail(u32 battlerId, u32 ability)
{
    if (!IS_BATTLER_OF_TYPE(battlerId, TYPE_ICE)
      && ability != ABILITY_SNOW_CLOAK
      && ability != ABILITY_OVERCOAT
      && ability != ABILITY_ICE_BODY)
        return TRUE;
    return FALSE;
}

static u32 GetWeatherDamage(u32 battlerId)
{
    u32 ability = AI_DATA->abilities[battlerId];
    u32 holdEffect = AI_DATA->holdEffects[battlerId];
    u32 damage = 0;
    u32 weather = AI_GetWeather(AI_DATA);
    if (!weather)
        return 0;

    if (weather & B_WEATHER_SANDSTORM)
    {
        if (BattlerAffectedBySandstorm(battlerId, ability)
          && !(gStatuses3[battlerId] & (STATUS3_UNDERGROUND | STATUS3_UNDERWATER))
          && holdEffect != HOLD_EFFECT_SAFETY_GOGGLES)
        {
            damage = GetNonDynamaxMaxHP(battlerId) / 16;
            if (damage == 0)
                damage = 1;
        }
    }
    if ((weather & B_WEATHER_HAIL) && ability != ABILITY_ICE_BODY)
    {
        if (BattlerAffectedByHail(battlerId, ability)
          && !(gStatuses3[battlerId] & (STATUS3_UNDERGROUND | STATUS3_UNDERWATER))
          && holdEffect != HOLD_EFFECT_SAFETY_GOGGLES)
        {
            damage = GetNonDynamaxMaxHP(battlerId) / 16;
            if (damage == 0)
                damage = 1;
        }
    }
    return damage;
}

u32 GetBattlerSecondaryDamage(u32 battlerId)
{
    u32 secondaryDamage;

    if (AI_DATA->abilities[battlerId] == ABILITY_MAGIC_GUARD)
        return FALSE;

    secondaryDamage = GetLeechSeedDamage(battlerId)
     + GetNightmareDamage(battlerId)
     + GetCurseDamage(battlerId)
     + GetTrapDamage(battlerId)
     + GetPoisonDamage(battlerId)
     + GetWeatherDamage(battlerId);

    return secondaryDamage;
}

bool32 BattlerWillFaintFromWeather(u32 battler, u32 ability)
{
    if ((BattlerAffectedBySandstorm(battler, ability) || BattlerAffectedByHail(battler, ability))
      && gBattleMons[battler].hp <= max(1, gBattleMons[battler].maxHP / 16))
        return TRUE;

    return FALSE;
}

bool32 BattlerWillFaintFromSecondaryDamage(u32 battler, u32 ability)
{
    if (GetBattlerSecondaryDamage(battler) != 0
      && gBattleMons[battler].hp <= max(1, gBattleMons[battler].maxHP / 16))
        return TRUE;
    return FALSE;
}

struct Pokemon *GetPartyBattlerPartyData(u32 battlerId, u32 switchBattler)
{
    struct Pokemon *mon;
    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
        mon = &gPlayerParty[switchBattler];
    else
        mon = &gEnemyParty[switchBattler];
    return mon;
}

bool32 AI_BattlerAtMaxHp(u32 battlerId)
{
    if (AI_DATA->hpPercents[battlerId] == 100)
        return TRUE;
    return FALSE;
}

bool32 BattlerHasMaxHPProtection(u32 battler)
{
    u32 ability = AI_DATA->abilities[battler];
    if (!AI_BattlerAtMaxHp(battler))
        return FALSE;
    if (AI_DATA->holdEffects[battler] == HOLD_EFFECT_FOCUS_SASH)
        return TRUE;
    if (B_STURDY >= GEN_5 && ability == ABILITY_STURDY)
        return TRUE;
    if (ability == ABILITY_MULTISCALE || ability == ABILITY_SHADOW_SHIELD)
        return TRUE;
    return FALSE;
}

bool32 IsAIDeadToPriorityMove(u32 battlerAtk, u32 battlerDef)
{
    u32 moveIndex;
    u16 *moves = gBattleMons[battlerAtk].moves;

    for (moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
    {
            if (CanIndexMoveFaintTarget(battlerDef, battlerAtk, moveIndex, AI_DEFENDING_NORMAL))
                if (gMovesInfo[moves[moveIndex]].priority > 0)
                    return TRUE;
    }
    return FALSE;
}

enum AIPivot ShouldPivot(u32 battlerAtk, u32 battlerDef, u32 move)
{   
    u32 isAIDeadToPrio = IsAIDeadToPriorityMove(battlerAtk, battlerDef);
    bool32 aiIsFaster = AI_IsFaster(battlerAtk, battlerDef, move, MOVE_NONE, CONSIDER_PRIORITY);
    bool32 hasGoodSwitchin = AI_DATA->mostSuitableMonId[battlerAtk] >= PARTY_SIZE ? FALSE : TRUE;
    // If AI should switch, it should pivot
    if (aiIsFaster)
    {
        if (AI_DATA->shouldSwitch & (1u << battlerAtk) && !isAIDeadToPrio)
            return SHOULD_PIVOT;
    }
    else
    {
        if (AI_DATA->shouldSwitch & (1u << battlerAtk) && !CanTargetFaintAi(battlerDef, battlerAtk))
            return SHOULD_PIVOT;
    }
    // Break Focus Sash / Multiscale effects if a good switchin exists
    if (!IS_MOVE_STATUS(move) && BattlerHasMaxHPProtection(battlerDef) && hasGoodSwitchin && RandomPercentage(RNG_AI_SHOULD_PIVOT_BREAK_SASH, SHOULD_PIVOT_BREAK_SASH_CHANCE))
        return SHOULD_PIVOT;
    // Would benefit from Regenerator and have a good switchin
    if (AI_DATA->abilities[battlerAtk] == ABILITY_REGENERATOR && ShouldRecover(battlerAtk, battlerDef, move, 33) && hasGoodSwitchin)
        return SHOULD_PIVOT;
    // Palafin always wants to activate Zero to Hero via pivoting when able
    if (AI_DATA->abilities[battlerAtk] == ABILITY_ZERO_TO_HERO && gBattleMons[battlerAtk].species == SPECIES_PALAFIN_ZERO && CountUsablePartyMons(battlerAtk) != 0)
        return SHOULD_PIVOT;
    // If no good switchin candidate and can't KO to change the situation, not good to pivot
    if (GetNoOfHitsToKOBattler(battlerAtk, battlerDef, AI_THINKING_STRUCT->movesetIndex, AI_ATTACKING_ON_FIELD, CONSIDER_ENDURE) && !hasGoodSwitchin)
        return DONT_PIVOT;
    // Otherwise, neutral effect
    return CAN_TRY_PIVOT;
}

bool32 CanKnockOffItem(u32 battler, u32 item)
{
    if (item == ITEM_NONE)
        return FALSE;

    if (!(gBattleTypeFlags & (BATTLE_TYPE_EREADER_TRAINER
      | BATTLE_TYPE_FRONTIER
      | BATTLE_TYPE_LINK
      | BATTLE_TYPE_RECORDED_LINK
      | BATTLE_TYPE_SECRET_BASE
      | (B_TRAINERS_KNOCK_OFF_ITEMS == TRUE ? BATTLE_TYPE_TRAINER : 0)
      )) && GetBattlerSide(battler) == B_SIDE_PLAYER)
        return FALSE;

    if (AI_DATA->abilities[battler] == ABILITY_STICKY_HOLD)
        return FALSE;

    if (!CanBattlerGetOrLoseItem(battler, item))
        return FALSE;

    return TRUE;
}

// status checks
bool32 IsBattlerIncapacitated(u32 battler, u32 ability)
{
    if ((gBattleMons[battler].status1 & STATUS1_FREEZE) && !HasThawingMove(battler))
        return TRUE;    // if battler has thawing move we assume they will definitely use it, and thus being frozen should be neglected

    if (gBattleMons[battler].status1 & STATUS1_SLEEP && !HasMoveEffect(battler, EFFECT_SLEEP_TALK))
        return TRUE;

    if (gBattleMons[battler].status2 & STATUS2_RECHARGE || (ability == ABILITY_TRUANT && gDisableStructs[battler].truantCounter != 0))
        return TRUE;

    return FALSE;
}

bool32 AnyPartyMemberAsleep(u32 battlerId)
{
    struct Pokemon *party;
    u32 i;

    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&party[i], MON_DATA_STATUS) == STATUS1_SLEEP)
            return TRUE;
    }
    return FALSE;
}

bool32 AI_CanPutToSleep(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 move, u32 partnerMove)
{
    if (!CanBeSlept(battlerDef, defAbility, TRUE)
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || PartnerMoveEffectIsStatusSameTarget(BATTLE_PARTNER(battlerAtk), battlerDef, partnerMove))   // shouldn't try to sleep mon that partner is trying to make sleep
        return FALSE;
    return TRUE;
}

static inline bool32 DoesBattlerBenefitFromAllVolatileStatus(u32 battler, u32 ability)
{
    if (ability == ABILITY_MARVEL_SCALE
     || ability == ABILITY_QUICK_FEET
     || ability == ABILITY_MAGIC_GUARD
     || (ability == ABILITY_GUTS && HasMoveWithCategory(battler, DAMAGE_CATEGORY_PHYSICAL))
     || HasMoveEffect(battler, EFFECT_FACADE)
     || HasMoveEffect(battler, EFFECT_PSYCHO_SHIFT))
        return TRUE;
    return FALSE;
}

bool32 ShouldPoison(u32 battlerAtk, u32 battlerDef)
{
    u32 defAbility = GetBattlerAbility(battlerDef);
    // Battler can be poisoned and has move/ability that synergizes with being poisoned
    if (CanBePoisoned(battlerAtk, battlerDef, GetBattlerAbility(battlerDef)) && (
        DoesBattlerBenefitFromAllVolatileStatus(battlerDef, defAbility)
        || defAbility == ABILITY_POISON_HEAL
        || (defAbility == ABILITY_TOXIC_BOOST && HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL))))
    {
        if (battlerAtk == battlerDef) // Targeting self
            return TRUE;
        else
            return FALSE;
    }
    if (battlerAtk == battlerDef)
        return FALSE;
    else
        return TRUE;
}

bool32 ShouldBurn(u32 battlerAtk, u32 battlerDef)
{
    u32 defAbility = GetBattlerAbility(battlerDef);
    // Battler can be burned and has move/ability that synergizes with being burned
    if (CanBeBurned(battlerDef, defAbility) && (
        DoesBattlerBenefitFromAllVolatileStatus(battlerDef, defAbility)
        || defAbility == ABILITY_HEATPROOF
        || (defAbility == ABILITY_FLARE_BOOST && HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL))))
    {
        if (battlerAtk == battlerDef) // Targeting self
            return TRUE;
        else
            return FALSE;
    }

    if (battlerAtk == battlerDef)
        return FALSE;
    else
        return TRUE;
}

bool32 ShouldFreezeOrFrostbite(u32 battlerAtk, u32 battlerDef)
{
    if (!B_USE_FROSTBITE)
    {
        if (CanBeFrozen(battlerDef))
        {
            if (battlerAtk == battlerDef) // Targeting self
                return FALSE;
            else
                return TRUE;
        }
        return FALSE;
    }
    else
    {
        u32 defAbility = GetBattlerAbility(battlerDef);
        // Battler can be frostbitten and has move/ability that synergizes with being frostbitten
        if (CanBeFrozen(battlerDef) && 
            DoesBattlerBenefitFromAllVolatileStatus(battlerDef, defAbility))
        {
            if (battlerAtk == battlerDef) // Targeting self
                return TRUE;
            else
                return FALSE;
        }
    
        if (battlerAtk == battlerDef)
            return FALSE;
        else
            return TRUE;
    }
}

bool32 ShouldParalyze(u32 battlerAtk, u32 battlerDef)
{
    u32 defAbility = GetBattlerAbility(battlerDef);
    // Battler can be paralyzed and has move/ability that synergizes with being paralyzed
    if (CanBeParalyzed(battlerDef, defAbility) && (
        DoesBattlerBenefitFromAllVolatileStatus(battlerDef, defAbility)))
    {
        if (battlerAtk == battlerDef) // Targeting self
            return TRUE;
        else
            return FALSE;
    }
    if (battlerAtk == battlerDef)
        return FALSE;
    else
        return TRUE;
}

bool32 AI_CanPoison(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 move, u32 partnerMove)
{
    if (!CanBePoisoned(battlerAtk, battlerDef, GetBattlerAbility(battlerDef))
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == UQ_4_12(0.0)
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || PartnerMoveEffectIsStatusSameTarget(BATTLE_PARTNER(battlerAtk), battlerDef, partnerMove))
        return FALSE;
    else if (defAbility != ABILITY_CORROSION && IS_BATTLER_ANY_TYPE(battlerDef, TYPE_POISON, TYPE_STEEL))
        return FALSE;
    else if (IsValidDoubleBattle(battlerAtk) && AI_DATA->abilities[BATTLE_PARTNER(battlerDef)] == ABILITY_PASTEL_VEIL)
        return FALSE;

    return TRUE;
}

bool32 AI_CanParalyze(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 move, u32 partnerMove)
{
    if (!CanBeParalyzed(battlerDef, defAbility)
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == UQ_4_12(0.0)
      || gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_SAFEGUARD
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || PartnerMoveEffectIsStatusSameTarget(BATTLE_PARTNER(battlerAtk), battlerDef, partnerMove))
        return FALSE;
    return TRUE;
}

bool32 AI_CanBeConfused(u32 battlerAtk, u32 battlerDef, u32 move, u32 ability)
{
    if ((gBattleMons[battlerDef].status2 & STATUS2_CONFUSION)
     || (ability == ABILITY_OWN_TEMPO && !DoesBattlerIgnoreAbilityChecks(AI_DATA->abilities[battlerAtk], move))
     || (IsBattlerGrounded(battlerDef) && (gFieldStatuses & STATUS_FIELD_MISTY_TERRAIN))
     || gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_SAFEGUARD
     || DoesSubstituteBlockMove(battlerAtk, battlerDef, move))
        return FALSE;
    return TRUE;
}

bool32 AI_CanConfuse(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (gMovesInfo[move].target == MOVE_TARGET_FOES_AND_ALLY
     && AI_CanBeConfused(battlerAtk, battlerDef, move, defAbility)
     && !AI_CanBeConfused(battlerAtk, BATTLE_PARTNER(battlerDef), move, AI_DATA->abilities[BATTLE_PARTNER(battlerDef)]))
        return FALSE;

    if (!AI_CanBeConfused(battlerAtk, battlerDef, move, defAbility)
     || DoesPartnerHaveSameMoveEffect(battlerAtkPartner, battlerDef, move, partnerMove))
        return FALSE;

    return TRUE;
}

bool32 AI_CanGetFrostbite(u32 battler, u32 ability)
{
    if (ability == ABILITY_MAGMA_ARMOR
      || ability == ABILITY_COMATOSE
      || IS_BATTLER_OF_TYPE(battler, TYPE_ICE)
      || gBattleMons[battler].status1 & STATUS1_ANY
      || IsAbilityStatusProtected(battler)
      || gSideStatuses[GetBattlerSide(battler)] & SIDE_STATUS_SAFEGUARD)
        return FALSE;
    return TRUE;
}

bool32 AI_CanBurn(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (!CanBeBurned(battlerDef, defAbility)
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == UQ_4_12(0.0)
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || PartnerMoveEffectIsStatusSameTarget(battlerAtkPartner, battlerDef, partnerMove))
    {
        return FALSE;
    }
    return TRUE;
}

bool32 AI_CanGiveFrostbite(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (!AI_CanGetFrostbite(battlerDef, defAbility)
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == UQ_4_12(0.0)
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || PartnerMoveEffectIsStatusSameTarget(battlerAtkPartner, battlerDef, partnerMove))
    {
        return FALSE;
    }
    return TRUE;
}

bool32 AI_CanBeInfatuated(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if ((gBattleMons[battlerDef].status2 & STATUS2_INFATUATION)
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == UQ_4_12(0.0)
      || defAbility == ABILITY_OBLIVIOUS
      || !AreBattlersOfOppositeGender(battlerAtk, battlerDef)
      || AI_IsAbilityOnSide(battlerDef, ABILITY_AROMA_VEIL))
        return FALSE;
    return TRUE;
}

u32 ShouldTryToFlinch(u32 battlerAtk, u32 battlerDef, u32 atkAbility, u32 defAbility, u32 move)
{
    if (((!IsMoldBreakerTypeAbility(battlerAtk, AI_DATA->abilities[battlerAtk]) && (defAbility == ABILITY_SHIELD_DUST || defAbility == ABILITY_INNER_FOCUS))
      || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_COVERT_CLOAK
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || AI_IsSlower(battlerAtk, battlerDef, move, MOVE_NONE, CONSIDER_PRIORITY))) // Opponent goes first
    {
        return 0;
    }
    else if ((AI_IsFaster(battlerAtk, battlerDef, move, MOVE_NONE, CONSIDER_PRIORITY)) && CanTargetFaintAi(battlerDef, battlerAtk))
    {
        return 2;   // good idea to flinch
    }

    return 0;   // don't try to flinch
}

bool32 ShouldTrap(u32 battlerAtk, u32 battlerDef)
{
    if (AI_CanBattlerEscape(battlerDef))
        return FALSE;

    if (IsBattlerTrapped(battlerAtk, battlerDef))
        return FALSE;

    if (BattlerWillFaintFromSecondaryDamage(battlerDef, AI_DATA->abilities[battlerDef]))
        return TRUE;    // battler is taking secondary damage with low HP

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_STALL)
    {
        if (!CanTargetFaintAi(battlerDef, battlerAtk))
            return TRUE;    // attacker goes first and opponent can't kill us
    }

    return FALSE;
}

bool32 ShouldFakeOut(u32 battlerAtk, u32 battlerDef, u32 move)
{
    if ((!gDisableStructs[battlerAtk].isFirstTurn && MoveHasAdditionalEffectWithChance(move, MOVE_EFFECT_FLINCH, 100))
    || AI_DATA->abilities[battlerAtk] == ABILITY_GORILLA_TACTICS
    || AI_DATA->abilities[battlerAtk] == ABILITY_SAGE_POWER
    || AI_DATA->holdEffects[battlerAtk] == HOLD_EFFECT_CHOICE_BAND
    || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_COVERT_CLOAK
    || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
    || (!IsMoldBreakerTypeAbility(battlerAtk, AI_DATA->abilities[battlerAtk])
    && (AI_DATA->abilities[battlerDef] == ABILITY_SHIELD_DUST || AI_DATA->abilities[battlerDef] == ABILITY_INNER_FOCUS)))
        return FALSE;

    return TRUE;
}

static u32 FindMoveUsedXTurnsAgo(u32 battlerId, u32 x)
{
    s32 i, index = BATTLE_HISTORY->moveHistoryIndex[battlerId];
    for (i = 0; i < x; i++)
    {
        if (--index < 0)
            index = AI_MOVE_HISTORY_COUNT - 1;
    }
    return BATTLE_HISTORY->moveHistory[battlerId][index];
}

bool32 IsWakeupTurn(u32 battler)
{
    // Check if rest was used 2 turns ago
    if ((gBattleMons[battler].status1 & STATUS1_SLEEP) == 1 && FindMoveUsedXTurnsAgo(battler, 2) == MOVE_REST)
        return TRUE;
    else // no way to know
        return FALSE;
}

bool32 AnyPartyMemberStatused(u32 battlerId, bool32 checkSoundproof)
{
    struct Pokemon *party;
    u32 i, battlerOnField1, battlerOnField2;

    party = GetBattlerParty(battlerId);

    if (IsDoubleBattle())
    {
        battlerOnField1 = gBattlerPartyIndexes[battlerId];
        battlerOnField2 = gBattlerPartyIndexes[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battlerId)))];
        // Check partner's status
        if ((B_HEAL_BELL_SOUNDPROOF == GEN_5 || AI_DATA->abilities[BATTLE_PARTNER(battlerId)] != ABILITY_SOUNDPROOF || !checkSoundproof)
         && GetMonData(&party[battlerOnField2], MON_DATA_STATUS) != STATUS1_NONE)
            return TRUE;
    }
    else // In singles there's only one battlerId by side.
    {
        battlerOnField1 = gBattlerPartyIndexes[battlerId];
        battlerOnField2 = gBattlerPartyIndexes[battlerId];
    }

    // Check attacker's status
    if ((B_HEAL_BELL_SOUNDPROOF == GEN_5 || B_HEAL_BELL_SOUNDPROOF >= GEN_8
      || AI_DATA->abilities[battlerId] != ABILITY_SOUNDPROOF || !checkSoundproof)
     && GetMonData(&party[battlerOnField1], MON_DATA_STATUS) != STATUS1_NONE)
        return TRUE;

    // Check inactive party mons' status
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (i == battlerOnField1 || i == battlerOnField2)
            continue;
        if (B_HEAL_BELL_SOUNDPROOF < GEN_5 && checkSoundproof && GetMonAbility(&party[i]) == ABILITY_SOUNDPROOF)
            continue;
        if (GetMonData(&party[i], MON_DATA_STATUS) != STATUS1_NONE)
            return TRUE;
    }

    return FALSE;
}

u32 GetBattlerSideSpeedAverage(u32 battler)
{
    u32 speed1 = 0;
    u32 speed2 = 0;
    u32 numBattlersAlive = 0;

    if (IsBattlerAlive(battler))
    {
        speed1 = AI_DATA->speedStats[battler];
        numBattlersAlive++;
    }

    if (IsDoubleBattle() && IsBattlerAlive(BATTLE_PARTNER(battler)))
    {
        speed2 = AI_DATA->speedStats[BATTLE_PARTNER(battler)];
        numBattlersAlive++;
    }

    return (speed1 + speed2) / numBattlersAlive;
}

bool32 ShouldUseRecoilMove(u32 battlerAtk, u32 battlerDef, u32 recoilDmg, u32 moveIndex)
{
    if (recoilDmg >= gBattleMons[battlerAtk].hp //Recoil kills attacker
      && CountUsablePartyMons(battlerDef) != 0) //Foe has more than 1 target left
    {
        if (recoilDmg >= gBattleMons[battlerDef].hp && !CanAIFaintTarget(battlerAtk, battlerDef, 0))
            return TRUE; //If it's the only KO move then just use it
        else
            return FALSE; //Not as good to use move if you'll faint and not win
    }

    return TRUE;
}

bool32 ShouldAbsorb(u32 battlerAtk, u32 battlerDef, u32 move, s32 damage)
{
    if (move == 0xFFFF || AI_IsFaster(battlerAtk, battlerDef, move, MOVE_NONE, CONSIDER_PRIORITY))
    {
        // using item or user goes first
        u32 healPercent = (gMovesInfo[move].argument == 0) ? 50 : gMovesInfo[move].argument;
        s32 healDmg = (healPercent * damage) / 100;

        if (gStatuses3[battlerAtk] & STATUS3_HEAL_BLOCK)
            healDmg = 0;

        if (CanTargetFaintAi(battlerDef, battlerAtk)
          && !CanTargetFaintAiWithMod(battlerDef, battlerAtk, healDmg, 0))
            return TRUE;    // target can faint attacker unless they heal
        else if (!CanTargetFaintAi(battlerDef, battlerAtk) && AI_DATA->hpPercents[battlerAtk] < 60 && (Random() % 3))
            return TRUE;    // target can't faint attacker at all, attacker health is about half, 2/3rds rate of encouraging healing
    }
    else
    {
        // opponent goes first
        if (!CanTargetFaintAi(battlerDef, battlerAtk))
            return TRUE;
    }

    return FALSE;
}

bool32 ShouldRecover(u32 battlerAtk, u32 battlerDef, u32 move, u32 healPercent)
{
    u32 maxHP = gBattleMons[battlerAtk].maxHP;
    u32 healAmount = (healPercent * maxHP) / 100;
    
    if (AtMaxHp(battlerAtk))
        return FALSE;
    if (healAmount > maxHP)
        healAmount = maxHP;
    if (gStatuses3[battlerAtk] & STATUS3_HEAL_BLOCK)
        healAmount = 0;
    if (AI_IsFaster(battlerAtk, battlerDef, move, MOVE_NONE, CONSIDER_PRIORITY))
    {
        if (CanTargetFaintAi(battlerDef, battlerAtk)
          && !CanTargetFaintAiWithMod(battlerDef, battlerAtk, healAmount, 0))
            return TRUE;    // target can faint attacker unless they heal
        else if (!CanTargetFaintAi(battlerDef, battlerAtk) && AI_DATA->hpPercents[battlerAtk] < ENABLE_RECOVERY_THRESHOLD && RandomPercentage(RNG_AI_SHOULD_RECOVER, SHOULD_RECOVER_CHANCE))
            return TRUE;    // target can't faint attacker at all, generally safe
    }
    else
    {
        if (!CanTargetFaintAi(battlerDef, battlerAtk)
          && GetBestDmgFromBattler(battlerDef, battlerAtk, AI_DEFENDING_NORMAL) < healAmount
          && NoOfHitsForTargetToFaintBattler(battlerDef, battlerAtk, CONSIDER_ENDURE) < NoOfHitsForTargetToFaintBattlerWithMod(battlerDef, battlerAtk, healAmount))
            return TRUE;    // target can't faint attacker and is dealing less damage than we're healing
        else if (!CanTargetFaintAi(battlerDef, battlerAtk) && AI_DATA->hpPercents[battlerAtk] < ENABLE_RECOVERY_THRESHOLD && RandomPercentage(RNG_AI_SHOULD_RECOVER, SHOULD_RECOVER_CHANCE))
            return TRUE;    // target can't faint attacker at all, generally safe
    }
    return FALSE;
}

bool32 ShouldSetScreen(u32 battlerAtk, u32 battlerDef, u32 moveEffect)
{
    u32 atkSide = GetBattlerSide(battlerAtk);

    // Don't waste a turn if screens will be broken
    if (HasMoveEffect(battlerDef, EFFECT_BRICK_BREAK)
     || HasMoveEffect(battlerDef, EFFECT_RAGING_BULL))
        return FALSE;

    switch (moveEffect)
    {
    case EFFECT_AURORA_VEIL:
        // Use only in Hail and only if AI doesn't already have Reflect, Light Screen or Aurora Veil itself active.
        if ((AI_GetWeather(AI_DATA) & (B_WEATHER_HAIL | B_WEATHER_SNOW))
            && !(gSideStatuses[atkSide] & (SIDE_STATUS_REFLECT | SIDE_STATUS_LIGHTSCREEN | SIDE_STATUS_AURORA_VEIL)))
            return TRUE;
        break;
    case EFFECT_REFLECT:
        // Use only if the player has a physical move and AI doesn't already have Reflect itself active.
        if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL)
            && !(gSideStatuses[atkSide] & SIDE_STATUS_REFLECT))
            return TRUE;
        break;
    case EFFECT_LIGHT_SCREEN:
        // Use only if the player has a special move and AI doesn't already have Light Screen itself active.
        if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL)
            && !(gSideStatuses[atkSide] & SIDE_STATUS_LIGHTSCREEN))
            return TRUE;
        break;
    }

    return FALSE;
}

// Partner Logic
bool32 IsValidDoubleBattle(u32 battlerAtk)
{
    if (IsDoubleBattle()
      && ((IsBattlerAlive(BATTLE_OPPOSITE(battlerAtk)) && IsBattlerAlive(BATTLE_PARTNER(BATTLE_OPPOSITE(battlerAtk)))) || IsBattlerAlive(BATTLE_PARTNER(battlerAtk))))
        return TRUE;
    return FALSE;
}

u32 GetAllyChosenMove(u32 battlerId)
{
    u32 partnerBattler = BATTLE_PARTNER(battlerId);

    if (!IsBattlerAlive(partnerBattler) || !IsAiBattlerAware(partnerBattler))
        return MOVE_NONE;
    else if (partnerBattler > battlerId) // Battler with the lower id chooses the move first.
        return gLastMoves[partnerBattler];
    else
        return gBattleMons[partnerBattler].moves[gBattleStruct->chosenMovePositions[partnerBattler]];
}

//PARTNER_MOVE_EFFECT_IS_SAME
bool32 DoesPartnerHaveSameMoveEffect(u32 battlerAtkPartner, u32 battlerDef, u32 move, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (gMovesInfo[move].effect == gMovesInfo[partnerMove].effect
      && partnerMove != MOVE_NONE
      && gBattleStruct->moveTarget[battlerAtkPartner] == battlerDef)
    {
        return TRUE;
    }
    return FALSE;
}

//PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET
bool32 PartnerHasSameMoveEffectWithoutTarget(u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (gMovesInfo[move].effect == gMovesInfo[partnerMove].effect
      && partnerMove != MOVE_NONE)
        return TRUE;
    return FALSE;
}

//PARTNER_MOVE_EFFECT_IS_STATUS_SAME_TARGET
bool32 PartnerMoveEffectIsStatusSameTarget(u32 battlerAtkPartner, u32 battlerDef, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (partnerMove != MOVE_NONE
     && gBattleStruct->moveTarget[battlerAtkPartner] == battlerDef
     && (gMovesInfo[partnerMove].effect == EFFECT_SLEEP
       || gMovesInfo[partnerMove].effect == EFFECT_POISON
       || gMovesInfo[partnerMove].effect == EFFECT_TOXIC
       || gMovesInfo[partnerMove].effect == EFFECT_PARALYZE
       || gMovesInfo[partnerMove].effect == EFFECT_WILL_O_WISP
       || gMovesInfo[partnerMove].effect == EFFECT_YAWN))
        return TRUE;
    return FALSE;
}

bool32 IsMoveEffectWeather(u32 move)
{
    if (move != MOVE_NONE
     && (gMovesInfo[move].effect == EFFECT_SUNNY_DAY
      || gMovesInfo[move].effect == EFFECT_RAIN_DANCE
      || gMovesInfo[move].effect == EFFECT_SANDSTORM
      || gMovesInfo[move].effect == EFFECT_HAIL
      || gMovesInfo[move].effect == EFFECT_SNOWSCAPE
      || gMovesInfo[move].effect == EFFECT_CHILLY_RECEPTION))
        return TRUE;
    return FALSE;
}

//PARTNER_MOVE_EFFECT_IS_TERRAIN
bool32 PartnerMoveEffectIsTerrain(u32 battlerAtkPartner, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (partnerMove != MOVE_NONE
     && (gMovesInfo[partnerMove].effect == EFFECT_GRASSY_TERRAIN
      || gMovesInfo[partnerMove].effect == EFFECT_MISTY_TERRAIN
      || gMovesInfo[partnerMove].effect == EFFECT_ELECTRIC_TERRAIN
      || gMovesInfo[partnerMove].effect == EFFECT_PSYCHIC_TERRAIN))
        return TRUE;

    return FALSE;
}

//PARTNER_MOVE_IS_TAILWIND_TRICKROOM
bool32 PartnerMoveIs(u32 battlerAtkPartner, u32 partnerMove, u32 moveCheck)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (partnerMove != MOVE_NONE && partnerMove == moveCheck)
        return TRUE;
    return FALSE;
}

//PARTNER_MOVE_IS_SAME
bool32 PartnerMoveIsSameAsAttacker(u32 battlerAtkPartner, u32 battlerDef, u32 move, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (partnerMove != MOVE_NONE && move == partnerMove && gBattleStruct->moveTarget[battlerAtkPartner] == battlerDef)
        return TRUE;
    return FALSE;
}

//PARTNER_MOVE_IS_SAME_NO_TARGET
bool32 PartnerMoveIsSameNoTarget(u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;
    if (partnerMove != MOVE_NONE && move == partnerMove)
        return TRUE;
    return FALSE;
}

bool32 PartnerMoveActivatesSleepClause(u32 partnerMove)
{
    if (!IsDoubleBattle() || !IsSleepClauseEnabled())
        return FALSE;
    return IsMoveSleepClauseTrigger(partnerMove);
}

bool32 ShouldUseWishAromatherapy(u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 i;
    s32 firstId, lastId;
    struct Pokemon* party;
    bool32 hasStatus = AnyPartyMemberStatused(battlerAtk, gMovesInfo[move].soundMove);
    bool32 needHealing = FALSE;

    GetAIPartyIndexes(battlerAtk, &firstId, &lastId);
    party = GetBattlerParty(battlerAtk);

    if (CountUsablePartyMons(battlerAtk) == 0
      && (CanTargetFaintAi(battlerDef, battlerAtk) || BattlerWillFaintFromSecondaryDamage(battlerAtk, AI_DATA->abilities[battlerAtk])))
        return FALSE; // Don't heal if last mon and will faint

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u32 currHp = GetMonData(&party[i], MON_DATA_HP);
        u32 maxHp = GetMonData(&party[i], MON_DATA_MAX_HP);

        if (!GetMonData(&party[i], MON_DATA_IS_EGG, NULL) && currHp > 0)
        {
            if ((currHp * 100) / maxHp < 65 // Less than 65% health remaining
              && i >= firstId && i < lastId) // Can only switch to mon on your team
            {
                needHealing = TRUE;
            }
        }
    }

    if (!IsDoubleBattle())
    {
        switch (gMovesInfo[move].effect)
        {
        case EFFECT_WISH:
            if (needHealing)
                return TRUE;
            break;
        case EFFECT_HEAL_BELL:
            if (hasStatus)
                return TRUE;
        }
    }
    else
    {
        switch (gMovesInfo[move].effect)
        {
        case EFFECT_WISH:
            return ShouldRecover(battlerAtk, battlerDef, move, 50); // Switch recovery isn't good idea in doubles
        case EFFECT_HEAL_BELL:
            if (hasStatus)
                return TRUE;
        }
    }

    return FALSE;
}

#define SIZE_G_BATTLE_MONS (sizeof(struct BattlePokemon) * MAX_BATTLERS_COUNT)

struct BattlePokemon *AllocSaveBattleMons(void)
{
    struct BattlePokemon *savedBattleMons = Alloc(SIZE_G_BATTLE_MONS);
    memcpy(savedBattleMons, gBattleMons, SIZE_G_BATTLE_MONS);
    return savedBattleMons;
}

void FreeRestoreBattleMons(struct BattlePokemon *savedBattleMons)
{
    memcpy(gBattleMons, savedBattleMons, SIZE_G_BATTLE_MONS);
    Free(savedBattleMons);
}

#define SIZE_G_AI_LOGIC_DATA (sizeof(struct AiLogicData))

struct AiLogicData *AllocSaveAiLogicData(void)
{
    struct AiLogicData *savedAiLogicData = Alloc(SIZE_G_AI_LOGIC_DATA);
    memcpy(savedAiLogicData, AI_DATA, SIZE_G_AI_LOGIC_DATA);
    return savedAiLogicData;
}

void FreeRestoreAiLogicData(struct AiLogicData *savedAiLogicData)
{
    memcpy(AI_DATA, savedAiLogicData, SIZE_G_AI_LOGIC_DATA);
    Free(savedAiLogicData);
}

u32 AI_GetSwitchinWeather(u32 battler)
{
    u32 ability = gBattleMons[battler].ability;
    // Forced weather behaviour
    if (!AI_WeatherHasEffect(AI_DATA))
        return B_WEATHER_NONE;
    if (ability == ABILITY_CLOUD_NINE || ability == ABILITY_AIR_LOCK)
        return B_WEATHER_NONE;
    if (gBattleWeather & B_WEATHER_PRIMAL_ANY)
        return gBattleWeather;

    // Switchin will introduce new weather
    switch(ability)
    {
    case ABILITY_DRIZZLE:
        return B_WEATHER_RAIN;
    case ABILITY_DROUGHT:
        return B_WEATHER_SUN;
    case ABILITY_SAND_STREAM:
        return B_WEATHER_SANDSTORM;
    case ABILITY_SNOW_WARNING:
        return B_SNOW_WARNING >= GEN_9 ? B_WEATHER_SNOW : B_WEATHER_HAIL;
    default:
        return gBattleWeather;
    }    
}

// TODO - pull getswitchinfieldstatus/setbattlerfieldstatusforswtichin from upstream?

s32 CountUsablePartyMons(u32 battlerId)
{
    s32 battlerOnField1, battlerOnField2, i, ret;
    struct Pokemon *party;
    party = GetBattlerParty(battlerId);

    if (IsDoubleBattle())
    {
        battlerOnField1 = gBattlerPartyIndexes[battlerId];
        battlerOnField2 = gBattlerPartyIndexes[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battlerId)))];
    }
    else // In singles there's only one battlerId by side.
    {
        battlerOnField1 = gBattlerPartyIndexes[battlerId];
        battlerOnField2 = gBattlerPartyIndexes[battlerId];
    }

    ret = 0;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (i != battlerOnField1 && i != battlerOnField2
         && GetMonData(&party[i], MON_DATA_HP) != 0
         && GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG) != SPECIES_NONE
         && GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG) != SPECIES_EGG)
        {
            ret++;
        }
    }

    return ret;
}

bool32 IsPartyFullyHealedExceptBattler(u32 battlerId)
{
    struct Pokemon *party;
    u32 i;
    party = GetBattlerParty(battlerId);

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (i != gBattlerPartyIndexes[battlerId]
         && GetMonData(&party[i], MON_DATA_HP) != 0
         && GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG) != SPECIES_NONE
         && GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG) != SPECIES_EGG
         && GetMonData(&party[i], MON_DATA_HP) < GetMonData(&party[i], MON_DATA_MAX_HP))
            return FALSE;
    }
    return TRUE;
}

bool32 PartyHasMoveCategory(u32 battlerId, u32 category)
{
    struct Pokemon *party = GetBattlerParty(battlerId);
    u32 i, j;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&party[i], MON_DATA_HP, NULL) == 0)
            continue;

        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            u32 move = GetMonData(&party[i], MON_DATA_MOVE1 + j, NULL);
            u32 pp = GetMonData(&party[i], MON_DATA_PP1 + j, NULL);

            if (pp > 0 && move != MOVE_NONE)
            {
                //TODO - handle photon geyser, light that burns the sky
                if (gMovesInfo[move].category == category)
                    return TRUE;
            }
        }
    }

    return FALSE;
}

bool32 SideHasMoveCategory(u32 battlerId, u32 category)
{
    if (IsDoubleBattle())
    {
        if (HasMoveWithCategory(battlerId, category) || HasMoveWithCategory(BATTLE_PARTNER(battlerId), category))
            return TRUE;
    }
    else
    {
        if (HasMoveWithCategory(battlerId, category))
            return TRUE;
    }
    return FALSE;
}

bool32 IsAbilityOfRating(u32 ability, s8 rating)
{
    if (gAbilitiesInfo[ability].aiRating >= rating)
        return TRUE;
    return FALSE;
}

static const u16 sRecycleEncouragedItems[] =
{
    ITEM_CHESTO_BERRY,
    ITEM_LUM_BERRY,
    ITEM_STARF_BERRY,
    ITEM_SITRUS_BERRY,
    ITEM_MICLE_BERRY,
    ITEM_CUSTAP_BERRY,
    ITEM_MENTAL_HERB,
    ITEM_FOCUS_SASH,
    ITEM_SALAC_BERRY,
    ITEM_LIECHI_BERRY,
    ITEM_AGUAV_BERRY,
    ITEM_FIGY_BERRY,
    ITEM_IAPAPA_BERRY,
    ITEM_MAGO_BERRY,
    ITEM_WIKI_BERRY,
    ITEM_MENTAL_HERB,
    ITEM_POWER_HERB,
    ITEM_BERRY_JUICE,
    ITEM_WEAKNESS_POLICY,
    ITEM_BLUNDER_POLICY,
    ITEM_KEE_BERRY,
    ITEM_MARANGA_BERRY,
    // TODO expand this
};

// Its assumed that the berry is strategically given, so no need to check benefits of the berry
bool32 IsStatBoostingBerry(u32 item)
{
    switch (item)
    {
    case ITEM_LIECHI_BERRY:
    case ITEM_GANLON_BERRY:
    case ITEM_SALAC_BERRY:
    case ITEM_PETAYA_BERRY:
    case ITEM_APICOT_BERRY:
    //case ITEM_LANSAT_BERRY:
    case ITEM_STARF_BERRY:
    case ITEM_MICLE_BERRY:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 ShouldRestoreHpBerry(u32 battlerAtk, u32 item)
{
    switch (item)
    {
    case ITEM_ORAN_BERRY:
        if (gBattleMons[battlerAtk].maxHP <= 50)
            return TRUE;    // Only worth it in the early game
        return FALSE;
    case ITEM_SITRUS_BERRY:
    case ITEM_FIGY_BERRY:
    case ITEM_WIKI_BERRY:
    case ITEM_MAGO_BERRY:
    case ITEM_AGUAV_BERRY:
    case ITEM_IAPAPA_BERRY:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsRecycleEncouragedItem(u32 item)
{
    u32 i;
    for (i = 0; i < ARRAY_COUNT(sRecycleEncouragedItems); i++)
    {
        if (item == sRecycleEncouragedItems[i])
            return TRUE;
    }
    return FALSE;
}

static u32 GetStatBeingChanged(enum StatChange statChange)
{
    switch(statChange)
    {
        case STAT_CHANGE_ATK:
        case STAT_CHANGE_ATK_2:
        case STAT_CHANGE_ATK_3:
        case STAT_CHANGE_ATK_MAX:
            return STAT_ATK;
        case STAT_CHANGE_DEF:
        case STAT_CHANGE_DEF_2:
        case STAT_CHANGE_DEF_3:
            return STAT_DEF;
        case STAT_CHANGE_SPEED:
        case STAT_CHANGE_SPEED_2:
        case STAT_CHANGE_SPEED_3:
            return STAT_SPEED;
        case STAT_CHANGE_SPATK:
        case STAT_CHANGE_SPATK_2:
        case STAT_CHANGE_SPATK_3:
            return STAT_SPATK;
        case STAT_CHANGE_SPDEF:
        case STAT_CHANGE_SPDEF_2:
        case STAT_CHANGE_SPDEF_3:
            return STAT_SPDEF;
        case STAT_CHANGE_ACC:
            return STAT_ACC;
        case STAT_CHANGE_EVASION:
            return STAT_EVASION;
        default:
            return STAT_HP;
    }
    return 0; // STAT_HP, should never be getting changed
}

static u32 GetStagesOfStatChange(enum StatChange statChange)
{
    switch(statChange)
    {
        case STAT_CHANGE_ATK:
        case STAT_CHANGE_DEF:
        case STAT_CHANGE_SPEED:
        case STAT_CHANGE_SPATK:
        case STAT_CHANGE_SPDEF:
        case STAT_CHANGE_ACC:
        case STAT_CHANGE_EVASION:
            return 1;
        case STAT_CHANGE_ATK_2:
        case STAT_CHANGE_DEF_2:
        case STAT_CHANGE_SPEED_2:
        case STAT_CHANGE_SPATK_2:
        case STAT_CHANGE_SPDEF_2:
            return 2;
        case STAT_CHANGE_ATK_3:
        case STAT_CHANGE_DEF_3:
        case STAT_CHANGE_SPEED_3:
        case STAT_CHANGE_SPATK_3:
        case STAT_CHANGE_SPDEF_3:
            return 3;
        case STAT_CHANGE_ATK_MAX:
            return 6;
        default:
            return 0;
    }
    return 0; // STAT_HP, should never be getting changed
}

static u32 IncreaseStatUpScoreInternal(u32 battlerAtk, u32 battlerDef, u32 statChange, bool32 considerContrary)
{
    u32 tempScore = NO_INCREASE;
    u32 noOfHitsToFaint = NoOfHitsForTargetToFaintBattler(battlerDef, battlerAtk, DONT_CONSIDER_ENDURE);
    u32 aiIsFaster = AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE, MOVE_NONE, DONT_CONSIDER_PRIORITY); // Don't care about the priority of our setup move, care about outspeeding otherwise
    u32 shouldSetUp = ((noOfHitsToFaint >= 2 && aiIsFaster) || (noOfHitsToFaint >= 3 && !aiIsFaster) || noOfHitsToFaint == UNKNOWN_NO_OF_HITS);
    u32 statId = GetStatBeingChanged(statChange);
    u32 stages = GetStagesOfStatChange(statChange);
    bool32 bestMoveIsPhysical = HasPhysicalBestMove(battlerDef, battlerAtk, AI_DEFENDING_SETUP);
    bool32 bestMoveIsSpecial = HasSpecialBestMove(battlerDef, battlerAtk, AI_DEFENDING_SETUP);

    if (considerContrary && AI_DATA->abilities[battlerAtk] == ABILITY_CONTRARY)
        return NO_INCREASE;

    // Don't increase stats if opposing battler has Unaware
    if (HasBattlerSideAbility(battlerDef, ABILITY_UNAWARE, AI_DATA))
        return NO_INCREASE;

    // Don't increase stat if AI is at +1
    if (gBattleMons[battlerAtk].statStages[statId] >= MAX_STAT_STAGE - 5)
        return NO_INCREASE;

    // Don't increase stat if AI has less then 70% HP and number of hits isn't known
    // or a flat if AI has less than 40% HP
    if ((AI_DATA->hpPercents[battlerAtk] < 70 && noOfHitsToFaint == UNKNOWN_NO_OF_HITS) || AI_DATA->hpPercents[battlerAtk] < 40)
        return NO_INCREASE;

    // Don't set up if AI is dead to residual damage from weather
    if (GetBattlerSecondaryDamage(battlerAtk) >= gBattleMons[battlerAtk].hp)
        return NO_INCREASE;

    // Don't increase stats if opposing battler has Opportunist
    if (AI_DATA->abilities[battlerDef] == ABILITY_OPPORTUNIST)
        return NO_INCREASE;

    // Don't increase if AI can already do enough damage to kill, ignoring sturdy, focus sash, and disguise explicitly
    // to prevent the AI from always seeing that it 2HKOs in those scenarios
    if (CanAIOHKOTargetForSetup(battlerAtk, battlerDef) && CanForce2HKOForSetupMove(battlerAtk, battlerDef))
        return NO_INCREASE;

    if(HasMoveToStopSetup(battlerDef, noOfHitsToFaint, aiIsFaster))
        return NO_INCREASE;

    if (HasBattlerSideMoveWithEffect(battlerDef, EFFECT_ENCORE))
        return NO_INCREASE;

    // Don't increase stats if opposing battler has used Haze effect
    if (!RandomPercentage(RNG_AI_BOOST_INTO_HAZE, BOOST_INTO_HAZE_CHANCE) &&
        (HasBattlerSideUsedMoveWithEffect(battlerDef, EFFECT_HAZE)
        || HasBattlerSideUsedMoveWithAdditionalEffect(battlerDef, MOVE_EFFECT_CLEAR_SMOG)
        || HasBattlerSideUsedMoveWithAdditionalEffect(battlerDef, MOVE_EFFECT_HAZE)))
        return NO_INCREASE;

    // Don't increase if AI is at +1 and opponent has Haze effect
    if (gBattleMons[battlerAtk].statStages[statId] >= MAX_STAT_STAGE - 5 && (HasBattlerSideMoveWithEffect(battlerDef, EFFECT_HAZE)
        || HasBattlerSideMoveWithAdditionalEffect(battlerDef, MOVE_EFFECT_CLEAR_SMOG)
        || HasBattlerSideMoveWithAdditionalEffect(battlerDef, MOVE_EFFECT_HAZE)))
        return NO_INCREASE;

    // Don't increase stats if Yawn'd
    if (gStatuses3[battlerAtk] & STATUS3_YAWN && CanBeSlept(battlerAtk, AI_DATA->abilities[battlerAtk], TRUE))
        return FALSE;

    // Stat stages are effectively doubled under Simple.
    if (AI_DATA->abilities[battlerAtk] == ABILITY_SIMPLE)
        stages *= 2;

    switch (statId)
    {
    case STAT_CHANGE_ATK:
        if (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL) && shouldSetUp)
        {
            if (stages == 1)
                tempScore += DECENT_EFFECT;
            else if (stages == 6)
                tempScore += BEST_EFFECT;
            else
                tempScore += GOOD_EFFECT;
        }
        break;
    case STAT_CHANGE_DEF:
        if (bestMoveIsPhysical && shouldSetUp)
        {
            if (stages == 1)
                tempScore += WEAK_EFFECT;
            else
                tempScore += DECENT_EFFECT;
        }
        break;
    case STAT_CHANGE_SPEED:
        if ((noOfHitsToFaint >= 3 && !aiIsFaster) || noOfHitsToFaint == UNKNOWN_NO_OF_HITS)
        {
            if (stages == 1)
                tempScore += DECENT_EFFECT;
            else
                tempScore += GOOD_EFFECT;
        }
        break;
    case STAT_CHANGE_SPATK:
        if (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL) && shouldSetUp)
        {
            if (stages == 1)
                tempScore += DECENT_EFFECT;
            else
                tempScore += GOOD_EFFECT;
        }
        break;
    case STAT_CHANGE_SPDEF:
        if (bestMoveIsSpecial && shouldSetUp)
        {
            if (stages == 1)
                tempScore += WEAK_EFFECT;
            else
                tempScore += DECENT_EFFECT;
        }
        break;
    case STAT_CHANGE_ACC:
        if (gBattleMons[battlerAtk].statStages[statId] <= 3) // Increase only if necessary
            tempScore += DECENT_EFFECT;
        break;
    case STAT_CHANGE_EVASION:
        if (noOfHitsToFaint > 3 || noOfHitsToFaint == UNKNOWN_NO_OF_HITS)
            tempScore += GOOD_EFFECT;
        else
            tempScore += DECENT_EFFECT;
        break;
    }

    return tempScore;
}

bool32 HasHPForDamagingSetup(u32 battlerAtk, u32 battlerDef, u32 hpThreshold)
{
    bool32 bestMoveIsPhysical = HasPhysicalBestMove(battlerDef, battlerAtk, AI_DEFENDING_SETUP);

    if (GetBestDmgFromBattler(battlerDef, battlerAtk, AI_DEFENDING_SETUP) < ((hpThreshold * gBattleMons[battlerAtk].maxHP) / 100))
        return TRUE;

    if (bestMoveIsPhysical
     && AI_DATA->abilities[battlerAtk] == ABILITY_ICE_FACE 
     && gBattleMons[battlerAtk].species == SPECIES_EISCUE_ICE
     && !IsMoldBreakerTypeAbility(battlerDef, AI_DATA->abilities[battlerDef])) // ice face will absorb the hit, safe to use setup
        return TRUE;
    
    if (AI_DATA->abilities[battlerAtk] == ABILITY_DISGUISE
     && IsMimikyuDisguised(battlerAtk)
     && !IsMoldBreakerTypeAbility(battlerDef, AI_DATA->abilities[battlerDef])) // disguise will absorb the hit, safe to use setup
        return TRUE;
    
    return FALSE;
}

u32 IncreaseStatUpScore(u32 battlerAtk, u32 battlerDef, enum StatChange statChange)
{
    return IncreaseStatUpScoreInternal(battlerAtk, battlerDef, statChange, TRUE);
}

u32 IncreaseStatUpScoreContrary(u32 battlerAtk, u32 battlerDef, enum StatChange statChange)
{
    return IncreaseStatUpScoreInternal(battlerAtk, battlerDef, statChange, FALSE);
}

bool32 MatchesSelfKillOrSuperfang(u32 moveEffect, bool32 isSwitch)
{
    return (moveEffect == EFFECT_EXPLOSION || moveEffect == EFFECT_FINAL_GAMBIT || (isSwitch && moveEffect == EFFECT_SUPER_FANG)) ? TRUE : FALSE;
}

void IncreasePoisonScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if (((AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT) && CanAIFaintTarget(battlerAtk, battlerDef, 0))
            || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_PSN || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_STATUS)
        return;

    if (AI_CanPoison(battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], move, AI_DATA->partnerMove) && AI_DATA->hpPercents[battlerDef] > 20)
    {
        if (HasMoveEffectANDArg(battlerAtk, EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_PSN_ANY)
          || HasMoveEffect(battlerAtk, EFFECT_VENOM_DRENCH)
          || AI_DATA->abilities[battlerAtk] == ABILITY_MERCILESS)
            ADJUST_SCORE_PTR(DECENT_EFFECT);
        else
            ADJUST_SCORE_PTR(WEAK_EFFECT);
    }
}

void IncreaseBurnScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if (((AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT) && CanAIFaintTarget(battlerAtk, battlerDef, 0))
            || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_BRN || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_STATUS)
        return;

    if (AI_CanBurn(battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, AI_DATA->partnerMove))
    {
        u32 bestMoveIsPhysical = HasPhysicalBestMove(battlerDef, battlerAtk, AI_DEFENDING_SETUP);
        if (bestMoveIsPhysical)
        {
            ADJUST_SCORE_PTR(WEAK_EFFECT);
        }

        if (HasMoveEffectANDArg(battlerAtk, EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_BURN)
          || HasMoveEffectANDArg(BATTLE_PARTNER(battlerAtk), EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_BURN))
            ADJUST_SCORE_PTR(DECENT_EFFECT);
    }
}

void IncreaseParalyzeScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if (((AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT) && CanAIFaintTarget(battlerAtk, battlerDef, 0))
            || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_PAR || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_STATUS)
        return;

    if (AI_CanParalyze(battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], move, AI_DATA->partnerMove))
    {
        u32 atkSpeed = AI_DATA->speedStats[battlerAtk];
        u32 defSpeed = AI_DATA->speedStats[battlerDef];

        if ((defSpeed >= atkSpeed && defSpeed / 2 < atkSpeed) // You'll go first after paralyzing foe
          || HasMoveEffectANDArg(battlerAtk, EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_PARALYSIS)
          || (HasMoveWithMoveEffectExcept(battlerAtk, MOVE_EFFECT_FLINCH, EFFECT_FIRST_TURN_ONLY) && defSpeed / 2 < atkSpeed) // filter out Fake Out
          || gBattleMons[battlerDef].status2 & STATUS2_INFATUATION
          || gBattleMons[battlerDef].status2 & STATUS2_CONFUSION)
            ADJUST_SCORE_PTR(DECENT_EFFECT);
        else
            ADJUST_SCORE_PTR(WEAK_EFFECT);
    }
}

void IncreaseSleepScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if (((AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT) && CanAIFaintTarget(battlerAtk, battlerDef, 0))
            || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_SLP || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_STATUS)
        return;

    if (AI_CanPutToSleep(battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], move, AI_DATA->partnerMove))
        ADJUST_SCORE_PTR(WEAK_EFFECT);
    else
        return;

    if ((HasMoveEffect(battlerAtk, EFFECT_DREAM_EATER) || HasMoveEffect(battlerAtk, EFFECT_NIGHTMARE))
      && !(HasMoveEffect(battlerDef, EFFECT_SNORE) || HasMoveEffect(battlerDef, EFFECT_SLEEP_TALK)))
        ADJUST_SCORE_PTR(WEAK_EFFECT);

    if (HasMoveEffectANDArg(battlerAtk, EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_SLEEP)
      || HasMoveEffectANDArg(BATTLE_PARTNER(battlerAtk), EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_SLEEP))
        ADJUST_SCORE_PTR(WEAK_EFFECT);
}

void IncreaseConfusionScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if (((AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT) && CanAIFaintTarget(battlerAtk, battlerDef, 0))
            || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_CONFUSION || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_STATUS)
        return;

    if (AI_CanConfuse(battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, AI_DATA->partnerMove)
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CURE_CONFUSION
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CURE_STATUS)
    {
        if (gBattleMons[battlerDef].status1 & STATUS1_PARALYSIS
          || gBattleMons[battlerDef].status2 & STATUS2_INFATUATION
          || (AI_DATA->abilities[battlerAtk] == ABILITY_SERENE_GRACE && HasMoveWithMoveEffectExcept(battlerAtk, MOVE_EFFECT_FLINCH, EFFECT_FIRST_TURN_ONLY)))
            ADJUST_SCORE_PTR(DECENT_EFFECT);
        else
            ADJUST_SCORE_PTR(WEAK_EFFECT);
    }
}

void IncreaseFrostbiteScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if ((AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT) && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return;

    if (AI_CanGiveFrostbite(battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, AI_DATA->partnerMove))
    {
        u32 bestMoveIsSpecial = HasSpecialBestMove(battlerDef, battlerAtk, AI_DEFENDING_NORMAL);
        if (bestMoveIsSpecial)
        {
            ADJUST_SCORE_PTR(WEAK_EFFECT);
        }

        if (HasMoveEffectANDArg(battlerAtk, EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_FROSTBITE)
          || HasMoveEffectANDArg(BATTLE_PARTNER(battlerAtk), EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_FROSTBITE))
            ADJUST_SCORE_PTR(WEAK_EFFECT);
    }
}

bool32 AI_MoveMakesContact(u32 ability, u32 holdEffect, u32 move)
{
    if (gMovesInfo[move].makesContact
      && ability != ABILITY_LONG_REACH
      && holdEffect != HOLD_EFFECT_PROTECTIVE_PADS
      && !(holdEffect == HOLD_EFFECT_PUNCHING_GLOVE && gMovesInfo[move].punchingMove)
      && !(holdEffect == HOLD_EFFECT_KICKING_SHOES && gMovesInfo[move].kickingMove))
        return TRUE;
    return FALSE;
}

//TODO - this could use some more sophisticated logic
bool32 ShouldUseZMove(u32 battlerAtk, u32 battlerDef, u32 chosenMove)
{
    // simple logic. just upgrades chosen move to z move if possible, unless regular move would kill opponent
    if ((IsDoubleBattle()) && battlerDef == BATTLE_PARTNER(battlerAtk))
        return FALSE;   // don't use z move on partner
    if (HasTrainerUsedGimmick(battlerAtk, GIMMICK_Z_MOVE))
        return FALSE;   // can't use z move twice

    if (IsViableZMove(battlerAtk, chosenMove))
    {
        uq4_12_t effectiveness;
        u32 zMove = GetUsableZMove(battlerAtk, chosenMove);
        struct SimulatedDamage dmg;

        if (gBattleMons[battlerDef].ability == ABILITY_DISGUISE
            && !gMovesInfo[zMove].ignoresTargetAbility
            && (gBattleMons[battlerDef].species == SPECIES_MIMIKYU_DISGUISED || gBattleMons[battlerDef].species == SPECIES_MIMIKYU_TOTEM_DISGUISED))
            return FALSE; // Don't waste a Z-Move busting disguise
        if (gBattleMons[battlerDef].ability == ABILITY_ICE_FACE
            && !gMovesInfo[zMove].ignoresTargetAbility
            && gBattleMons[battlerDef].species == SPECIES_EISCUE_ICE && IS_MOVE_PHYSICAL(chosenMove))
            return FALSE; // Don't waste a Z-Move busting Ice Face

        if (IS_MOVE_STATUS(chosenMove) && !IS_MOVE_STATUS(zMove))
            return FALSE;
        else if (!IS_MOVE_STATUS(chosenMove) && IS_MOVE_STATUS(zMove))
            return FALSE;

        dmg = AI_CalcDamageSaveBattlers(chosenMove, battlerAtk, battlerDef, &effectiveness, FALSE);

        if (!IS_MOVE_STATUS(chosenMove) && dmg.median >= gBattleMons[battlerDef].hp)
            return FALSE;   // don't waste damaging z move if can otherwise faint target

        return TRUE;
    }

    return FALSE;
}

bool32 AI_IsBattlerAsleepOrComatose(u32 battlerId)
{
    return (gBattleMons[battlerId].status1 & STATUS1_SLEEP) || AI_DATA->abilities[battlerId] == ABILITY_COMATOSE;
}

s32 AI_TryToClearStats(u32 battlerAtk, u32 battlerDef, bool32 isDoubleBattle)
{
    if (isDoubleBattle)
        return min(CountPositiveStatStages(battlerDef) + CountPositiveStatStages(BATTLE_PARTNER(battlerDef)), 7);
    else
        return min(CountPositiveStatStages(battlerDef), 4);
}

bool32 AI_ShouldCopyStatChanges(u32 battlerAtk, u32 battlerDef)
{
    u8 i;
    // Want to copy positive stat changes
    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerDef].statStages[i] > gBattleMons[battlerAtk].statStages[i])
        {
            switch (i)
            {
            case STAT_ATK:
                return (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL));
            case STAT_SPATK:
                return (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL));
            case STAT_ACC:
                return (HasLowAccuracyMove(battlerAtk, battlerDef));
            case STAT_EVASION:
            case STAT_SPEED:
                return TRUE;
            case STAT_DEF:
            case STAT_SPDEF:
                return (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_STALL);
            }
        }
    }

    return FALSE;
}

//TODO - track entire opponent party data to determine hazard effectiveness
bool32 AI_ShouldSetUpHazards(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    if (aiData->abilities[battlerDef] == ABILITY_MAGIC_BOUNCE
        || CountUsablePartyMons(battlerDef) < 3
        || CountUsablePartyMons(battlerAtk) < 3)
        return FALSE;

    if (RandomPercentage(RNG_AI_NO_SETUP_HAZARDS, CONSIDER_NO_SETUP_HAZARDS_CHANCE) 
        && (HasMoveEffect(battlerDef, EFFECT_TIDY_UP)
        || HasMoveWithAdditionalEffect(battlerDef, MOVE_EFFECT_RAPID_SPIN)
        || HasMoveEffect(battlerDef, EFFECT_DEFOG)
        || HasMoveEffect(battlerDef, EFFECT_MAGIC_COAT)))
        return FALSE;
    return TRUE;
}

void IncreaseTidyUpScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if (gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_HAZARDS_ANY && CountUsablePartyMons(battlerAtk) != 0)
        ADJUST_SCORE_PTR(GOOD_EFFECT);
    if (gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_HAZARDS_ANY && CountUsablePartyMons(battlerDef) != 0)
        ADJUST_SCORE_PTR(-2);

    if (gBattleMons[battlerAtk].status2 & STATUS2_SUBSTITUTE && AI_IsFaster(battlerAtk, battlerDef, move, MOVE_NONE, DONT_CONSIDER_PRIORITY))
        ADJUST_SCORE_PTR(-10);
    if (gBattleMons[battlerDef].status2 & STATUS2_SUBSTITUTE)
        ADJUST_SCORE_PTR(GOOD_EFFECT);

    if (gStatuses3[battlerAtk] & STATUS3_LEECHSEED)
        ADJUST_SCORE_PTR(DECENT_EFFECT);
    if (gStatuses3[battlerDef] & STATUS3_LEECHSEED)
        ADJUST_SCORE_PTR(-2);
}

bool32 AI_ShouldSpicyExtract(u32 battlerAtk, u32 battlerAtkPartner, u32 move, struct AiLogicData *aiData)
{
    u32 preventsStatLoss;
    u32 partnerAbility;
    u32 partnerHoldEffect = aiData->holdEffects[battlerAtkPartner];

    if (DoesBattlerIgnoreAbilityChecks(aiData->abilities[battlerAtk], move))
        partnerAbility = ABILITY_NONE;
    else
        partnerAbility = aiData->abilities[battlerAtkPartner];

    if (gBattleMons[battlerAtkPartner].statStages[STAT_ATK] == MAX_STAT_STAGE
     || partnerAbility == ABILITY_CONTRARY
     || partnerAbility == ABILITY_GOOD_AS_GOLD
     || HasMoveEffect(BATTLE_OPPOSITE(battlerAtk), EFFECT_FOUL_PLAY)
     || HasMoveEffect(BATTLE_OPPOSITE(battlerAtkPartner), EFFECT_FOUL_PLAY))
        return FALSE;

    preventsStatLoss = (partnerAbility == ABILITY_CLEAR_BODY
                     || partnerAbility == ABILITY_FULL_METAL_BODY
                     || partnerAbility == ABILITY_WHITE_SMOKE
                     || partnerHoldEffect == HOLD_EFFECT_CLEAR_AMULET);

    switch (gMovesInfo[aiData->partnerMove].effect)
    {
    case EFFECT_DEFENSE_UP:
    case EFFECT_DEFENSE_UP_2:
    case EFFECT_DEFENSE_UP_3:
    case EFFECT_BULK_UP:
    case EFFECT_STOCKPILE:
        if (!preventsStatLoss)
            return FALSE;
    }

    return (preventsStatLoss
         && AI_IsFaster(battlerAtk, battlerAtkPartner, MOVE_NONE, MOVE_NONE, DONT_CONSIDER_PRIORITY)
         && HasMoveWithCategory(battlerAtkPartner, DAMAGE_CATEGORY_PHYSICAL));
}

u32 IncreaseSubstituteMoveScore(u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 scoreIncrease = 0;

    if (gBattleMons[battlerDef].status1 & STATUS1_SLEEP)
        scoreIncrease += DECENT_EFFECT;

    if (gMovesInfo[move].effect == EFFECT_SHED_TAIL) // Shed Tail specific
    {
        if ((ShouldPivot(battlerAtk, battlerDef, move))
        && (HasAnyKnownMove(battlerDef) && (GetBestDmgFromBattler(battlerDef, battlerAtk, AI_DEFENDING_NORMAL) < gBattleMons[battlerAtk].maxHP / 2)))
            scoreIncrease += BEST_EFFECT;     
    }
    else if (gMovesInfo[move].effect == EFFECT_SUBSTITUTE) // Substitute specific
    {
        if (HasAnyKnownMove(battlerDef) && GetBestDmgFromBattler(battlerDef, battlerAtk, AI_DEFENDING_NORMAL) < gBattleMons[battlerAtk].maxHP / 4)
            scoreIncrease += DECENT_EFFECT;
    
        if (AI_DATA->hpPercents[battlerAtk] >= 50)
            scoreIncrease += WEAK_EFFECT;
    }
    if (scoreIncrease > BEST_EFFECT)
        scoreIncrease = BEST_EFFECT;
    return scoreIncrease;
}

bool32 IsBattlerItemEnabled(u32 battler)
{
    if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_NEGATE_UNAWARE)
        return TRUE;
    if (gFieldStatuses & STATUS_FIELD_MAGIC_ROOM)
        return FALSE;
    if (gStatuses3[battler] & STATUS3_EMBARGO)
        return FALSE;
    if (gBattleMons[battler].ability == ABILITY_KLUTZ && !(gStatuses3[battler] & STATUS3_GASTRO_ACID))
        return FALSE;
    return TRUE;
}

bool32 HasBattlerSideAbility(u32 battler, u32 ability, struct AiLogicData *aiData)
{
    if (aiData->abilities[battler] == ability)
        return TRUE;
    if (IsDoubleBattle() && AI_DATA->abilities[BATTLE_PARTNER(battler)] == ability)
        return TRUE;
    return FALSE;
}

bool32 HasLowAccuracyMove(u32 battlerAtk, u32 battlerDef)
{
    int i;
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (AI_DATA->moveAccuracy[battlerAtk][battlerDef][i] <= LOW_ACCURACY_THRESHOLD)
            return TRUE;
    }
    return FALSE;
}

bool32 IsStatLoweringSecondaryEffect(u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 i;
    u32 abilityDef = AI_DATA->abilities[battlerDef];
    u32 abilityAtk = AI_DATA->abilities[battlerAtk];
    for (i = 0; i < gMovesInfo[move].numAdditionalEffects; i++)
    {
    if (IsAdditionalEffectBlocked(battlerAtk, abilityAtk, battlerDef, abilityDef))
        continue;

    switch (gMovesInfo[move].additionalEffects[i].moveEffect)
    {
    case MOVE_EFFECT_ATK_MINUS_1:
    case MOVE_EFFECT_ATK_MINUS_2:
    case MOVE_EFFECT_SP_ATK_MINUS_1:
    case MOVE_EFFECT_SP_ATK_MINUS_2:
    case MOVE_EFFECT_DEF_MINUS_1:
    case MOVE_EFFECT_SPD_MINUS_1:
    case MOVE_EFFECT_SP_DEF_MINUS_1:
    case MOVE_EFFECT_ACC_MINUS_1:
    case MOVE_EFFECT_EVS_MINUS_1:
    case MOVE_EFFECT_DEF_MINUS_2:
    case MOVE_EFFECT_SPD_MINUS_2:
    case MOVE_EFFECT_SP_DEF_MINUS_2:
    case MOVE_EFFECT_ACC_MINUS_2:
    case MOVE_EFFECT_EVS_MINUS_2:
        return TRUE;
    }
    }
    return FALSE;
}

bool32 CanBattlerFaintTargetWithIndexMoveAndBestDamageMove(u32 battler, u32 battlerTarget)
{
    u32 dmg;
    u32 unusable = AI_DATA->moveLimitations[battler];
    u16 *moves = GetMovesArray(battler);

    u32 indexMoveDmg = AI_DATA->simulatedDmg[battler][battlerTarget][AI_THINKING_STRUCT->movesetIndex].maximum;
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        dmg = AI_DATA->simulatedDmg[battler][battlerTarget][i].maximum;
        dmg = dmg + indexMoveDmg;

        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && !(unusable & (1u << i))
         && dmg >= gBattleMons[battlerTarget].hp)
            return TRUE;
    }

    return FALSE;
}

bool32 ShouldLowerSpeed(u32 battlerAtk, u32 battlerDef, u32 move, s32 statDecreaseBy)
{
    if (!ShouldLowerStat(battlerDef, AI_DATA->abilities[battlerDef], STAT_SPEED))
        return FALSE;

    if (AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE, MOVE_NONE, DONT_CONSIDER_PRIORITY))
        return FALSE;

    u32 speedBattlerAtk = GetBattlerTotalSpeedStatArgs(battlerAtk,
                                                          AI_DATA->abilities[battlerAtk],
                                                          AI_DATA->holdEffects[battlerAtk],
                                                          0);
    u32 speedBattlerDef = GetBattlerTotalSpeedStatArgs(battlerDef,
                                                          AI_DATA->abilities[battlerDef],
                                                          AI_DATA->holdEffects[battlerDef],
                                                          statDecreaseBy);

    // Target still faster after speed Drop
    if (speedBattlerDef > speedBattlerAtk)
        return FALSE;

    if (CanAIWin1V1(battlerAtk, battlerDef))
        return FALSE;

    if (CanBattlerFaintTargetWithIndexMoveAndBestDamageMove(battlerAtk, battlerDef))
        return TRUE;

    return TRUE;
}

bool32 ShouldLowerSpeedWithStatus(u32 battlerAtk, u32 battlerDef, u32 move, s32 statDecreaseBy)
{
    if (!ShouldLowerStat(battlerDef, AI_DATA->abilities[battlerDef], STAT_SPEED))
        return FALSE;

    if (AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE, MOVE_NONE, DONT_CONSIDER_PRIORITY))
        return FALSE;

    u32 speedBattlerAtk = GetBattlerTotalSpeedStatArgs(battlerAtk,
                                                          AI_DATA->abilities[battlerAtk],
                                                          AI_DATA->holdEffects[battlerAtk],
                                                          0);
    u32 speedBattlerDef = GetBattlerTotalSpeedStatArgs(battlerDef,
                                                          AI_DATA->abilities[battlerDef],
                                                          AI_DATA->holdEffects[battlerDef],
                                                          statDecreaseBy);

    // Target still faster after speed Drop
    if (speedBattlerDef > speedBattlerAtk)
        return FALSE;

    return TRUE;
}

bool32 ShouldIncreaseSpeed(u32 battlerAtk, u32 battlerDef, u32 move, u32 statIncreaseBy)
{
    if (AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE, MOVE_NONE, DONT_CONSIDER_PRIORITY))
        return FALSE;

    u32 speedBattlerAtk = GetBattlerTotalSpeedStatArgs(battlerAtk,
                                                          AI_DATA->abilities[battlerAtk],
                                                          AI_DATA->holdEffects[battlerAtk],
                                                          statIncreaseBy);
    u32 speedBattlerDef = GetBattlerTotalSpeedStatArgs(battlerDef,
                                                          AI_DATA->abilities[battlerDef],
                                                          AI_DATA->holdEffects[battlerDef],
                                                          0);

    // Target still faster after speed Drop
    if (speedBattlerDef > speedBattlerAtk)
        return FALSE;

    if (CanAIWin1V1(battlerAtk, battlerDef))
        return FALSE;

    if (CanBattlerFaintTargetWithIndexMoveAndBestDamageMove(battlerAtk, battlerDef))
        return TRUE;

    return TRUE;
}

bool32 ShouldIncreaseSpeedWithStatusMove(u32 battlerAtk, u32 battlerDef, u32 move, u32 statIncreaseBy)
{
    if (AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE, MOVE_NONE, DONT_CONSIDER_PRIORITY))
        return FALSE;

    u32 speedBattlerAtk = GetBattlerTotalSpeedStatArgs(battlerAtk, AI_DATA->abilities[battlerAtk], AI_DATA->holdEffects[battlerAtk], statIncreaseBy);
    u32 speedBattlerDef = GetBattlerTotalSpeedStatArgs(battlerDef, AI_DATA->abilities[battlerDef], AI_DATA->holdEffects[battlerDef], 0);

    // Target still faster after speed Drop
    if (speedBattlerDef > speedBattlerAtk)
        return FALSE;

    return TRUE;
}
