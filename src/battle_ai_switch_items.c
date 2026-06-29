#include "global.h"
#include "battle.h"
#include "constants/battle_ai.h"
#include "battle_ai_main.h"
#include "battle_ai_util.h"
#include "battle_util.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_main.h"
#include "constants/hold_effects.h"
#include "battle_setup.h"
#include "data.h"
#include "item.h"
#include "party_menu.h"
#include "pokemon.h"
#include "random.h"
#include "util.h"
#include "constants/abilities.h"
#include "constants/item_effects.h"
#include "constants/battle_move_effects.h"
#include "constants/items.h"
#include "constants/moves.h"

// this file's functions
static bool32 CanUseSuperEffectiveMoveAgainstOpponents(u32 battler);
static bool32 ShouldUseItem(u32 battler);
static bool32 AiExpectsToFaintPlayer(u32 battler);
static bool32 AI_ShouldHeal(u32 battler, u32 healAmount);
static bool32 AI_OpponentCanFaintAiWithMod(u32 battler, u32 healAmount);
static u32 GetSwitchinHazardsDamage(u32 battler);
static bool32 AI_CanSwitchinAbilityTrapOpponent(u16 ability, u32 opposingBattler);
static bool32 AreStatsRaised(u32 battler);
static u32 GetBattlerTypeMatchup(u32 opposingBattler, u32 battler);

static void InitializeSwitchinCandidate(u32 switchInBattler, struct Pokemon *mon)
{
    PokemonToBattleMon(mon, &gBattleMons[switchInBattler]);
    // Setup switchin battler data
    AI_THINKING_STRUCT->saved[switchInBattler].saved = TRUE;
    SetBattlerAiData(switchInBattler, AI_DATA);
    // SetBattlerFieldStatusForSwitchin(battler);
    for (u32 battler = 0; battler < gBattlersCount; battler++)
    {
        if (switchInBattler == battler || !IsBattlerAlive(battler))
            continue;

        CalcBattlerAiMovesData(AI_DATA, switchInBattler, battler, AI_GetSwitchinWeather(switchInBattler));
        CalcBattlerAiMovesData(AI_DATA, battler, switchInBattler, AI_GetSwitchinWeather(switchInBattler));
    }

    AI_THINKING_STRUCT->saved[switchInBattler].saved = FALSE;
}

u32 GetSwitchChance(u32 shouldSwitchScenario)
{
    // Modify these cases if you want unique behaviour based on other data (trainer class, difficulty, etc.)
    switch(shouldSwitchScenario)
    {
        case SHOULD_SWITCH_WONDER_GUARD:
            return SHOULD_SWITCH_WONDER_GUARD_PERCENTAGE;
        case SHOULD_SWITCH_ABSORBS_MOVE:
            return SHOULD_SWITCH_ABSORBS_MOVE_PERCENTAGE;
        case SHOULD_SWITCH_TRAPPER:
            return SHOULD_SWITCH_TRAPPER_PERCENTAGE;
        case SHOULD_SWITCH_FREE_TURN:
            return SHOULD_SWITCH_FREE_TURN_PERCENTAGE;
        case SHOULD_SWITCH_TRUANT:
            return SHOULD_SWITCH_TRUANT_PERCENTAGE;
        case SHOULD_SWITCH_ALL_MOVES_BAD:
            return SHOULD_SWITCH_ALL_MOVES_BAD_PERCENTAGE;
        case SHOULD_SWITCH_PERISH_SONG:
            return SHOULD_SWITCH_PERISH_SONG_PERCENTAGE;
        case SHOULD_SWITCH_YAWN:
            return SHOULD_SWITCH_YAWN_PERCENTAGE;
        case SHOULD_SWITCH_BADLY_POISONED:
            return SHOULD_SWITCH_BADLY_POISONED_PERCENTAGE;
        case SHOULD_SWITCH_BADLY_POISONED_STATS_RAISED:
            return SHOULD_SWITCH_BADLY_POISONED_STATS_RAISED_PERCENTAGE;
        case SHOULD_SWITCH_CURSED:
            return SHOULD_SWITCH_CURSED_PERCENTAGE;
        case SHOULD_SWITCH_CURSED_STATS_RAISED:
            return SHOULD_SWITCH_CURSED_STATS_RAISED_PERCENTAGE;
        case SHOULD_SWITCH_NIGHTMARE:
            return SHOULD_SWITCH_NIGHTMARE_PERCENTAGE;
        case SHOULD_SWITCH_NIGHTMARE_STATS_RAISED:
            return SHOULD_SWITCH_NIGHTMARE_STATS_RAISED_PERCENTAGE;
        case SHOULD_SWITCH_SEEDED:
            return SHOULD_SWITCH_SEEDED_PERCENTAGE;
        case SHOULD_SWITCH_SEEDED_STATS_RAISED:
            return SHOULD_SWITCH_SEEDED_STATS_RAISED_PERCENTAGE;
        case SHOULD_SWITCH_INFATUATION:
            return SHOULD_SWITCH_INFATUATION_PERCENTAGE;
        case SHOULD_SWITCH_HASBADODDS:
            return SHOULD_SWITCH_HASBADODDS_PERCENTAGE;
        case SHOULD_SWITCH_NATURAL_CURE_STRONG:
            return SHOULD_SWITCH_NATURAL_CURE_STRONG_PERCENTAGE;
        case SHOULD_SWITCH_NATURAL_CURE_STRONG_STATS_RAISED:
            return SHOULD_SWITCH_NATURAL_CURE_STRONG_STATS_RAISED_PERCENTAGE;
        case SHOULD_SWITCH_NATURAL_CURE_WEAK:
            return SHOULD_SWITCH_NATURAL_CURE_WEAK_PERCENTAGE;
        case SHOULD_SWITCH_NATURAL_CURE_WEAK_STATS_RAISED:
            return SHOULD_SWITCH_NATURAL_CURE_WEAK_STATS_RAISED_PERCENTAGE;
        case SHOULD_SWITCH_REGENERATOR:
            return SHOULD_SWITCH_REGENERATOR_PERCENTAGE;
        case SHOULD_SWITCH_REGENERATOR_STATS_RAISED:
            return SHOULD_SWITCH_REGENERATOR_STATS_RAISED_PERCENTAGE;
        case SHOULD_SWITCH_ENCORE_STATUS:
            return SHOULD_SWITCH_ENCORE_STATUS_PERCENTAGE;
        case SHOULD_SWITCH_ENCORE_DAMAGE:
            return SHOULD_SWITCH_ENCORE_DAMAGE_PERCENTAGE;
        case SHOULD_SWITCH_CHOICE_LOCKED:
            return SHOULD_SWITCH_CHOICE_LOCKED_PERCENTAGE;
        case SHOULD_SWITCH_ATTACKING_STAT_MINUS_TWO:
            return SHOULD_SWITCH_ATTACKING_STAT_MINUS_TWO_PERCENTAGE;
        case SHOULD_SWITCH_ATTACKING_STAT_MINUS_THREE_PLUS:
            return SHOULD_SWITCH_ATTACKING_STAT_MINUS_THREE_PLUS_PERCENTAGE;
        case SHOULD_SWITCH_ALL_SCORES_BAD:
            return SHOULD_SWITCH_ALL_SCORES_BAD_PERCENTAGE;
        default:
            return 100;
    }
}

static bool32 IsAceMon(u32 battler, u32 monPartyId)
{
    if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_ACE_POKEMON
            && !(gBattleStruct->forcedSwitch & (1u << battler))
            && monPartyId == CalculateEnemyPartyCountInSide(battler)-1)
        return TRUE;
    if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_DOUBLE_ACE_POKEMON
            && !(gBattleStruct->forcedSwitch & (1u << battler))
            && (monPartyId == CalculateEnemyPartyCount()-1 || monPartyId == CalculateEnemyPartyCount()-2))
        return TRUE;
    return FALSE;
}

void GetAIPartyIndexes(u32 battler, s32 *firstId, s32 *lastId)
{
    if (BATTLE_TWO_VS_ONE_OPPONENT && (battler & BIT_SIDE) == B_SIDE_OPPONENT)
    {
        *firstId = 0, *lastId = PARTY_SIZE;
    }
    else if (gBattleTypeFlags & (BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_INGAME_PARTNER | BATTLE_TYPE_TOWER_LINK_MULTI))
    {
        if ((battler & BIT_FLANK) == B_FLANK_LEFT)
            *firstId = 0, *lastId = PARTY_SIZE / 2;
        else
            *firstId = PARTY_SIZE / 2, *lastId = PARTY_SIZE;
    }
    else
    {
        *firstId = 0, *lastId = PARTY_SIZE;
    }
}

static inline bool32 SetSwitchinAndSwitch(u32 battler, u32 switchinId)
{
    gBattleStruct->AI_monToSwitchIntoId[battler] = switchinId;
    return TRUE;
}

static bool32 AI_DoesChoiceEffectBlockMove(u32 battler, u32 move)
{
    // Choice locked into something else
    if (AI_DATA->lastUsedMove[battler] != MOVE_NONE && AI_DATA->lastUsedMove[battler] != move
    && ((HOLD_EFFECT_CHOICE(GetBattlerHoldEffect(battler, FALSE)) && IsBattlerItemEnabled(battler))
        || AI_DATA->abilities[battler] == ABILITY_GORILLA_TACTICS
        || AI_DATA->abilities[battler] == ABILITY_SAGE_POWER))
        return TRUE;
    return FALSE;
}

bool32 CanBattlerWin1v1(u32 hitsToKOAI, u32 hitsToKOPlayer, bool32 isBattlerFirst)
{
    // Player's best move deals 0 damage
    if (hitsToKOAI == 0 && hitsToKOPlayer > 0)
        return TRUE;

    // AI's best move deals 0 damage
    if (hitsToKOPlayer == 0 && hitsToKOAI > 0)
        return FALSE;

    // Neither mon can damage the other
    if (hitsToKOPlayer == 0 && hitsToKOAI == 0)
        return FALSE;

    // Different KO thresholds depending on who goes first
    if (isBattlerFirst)
    {
        if (hitsToKOAI >= hitsToKOPlayer)
            return TRUE;
    }
    else
    {
        if (hitsToKOAI > hitsToKOPlayer)
            return TRUE;
    }
    return FALSE;
}

bool32 CanAIWin1V1(u32 battlerAtk, u32 battlerDef)
{
    //Variable initialization
    u16 aiMoveEffect;
    s32 i, damageDealt = 0, maxDamageDealt = 0, damageTaken = 0, maxDamageTaken = 0, maxDamageTakenPriority = 0;
    u32 aiMove, playerMove, bestPlayerMove = MOVE_NONE, bestPlayerPriorityMove = MOVE_NONE;
    u32 hitsToKoAI = 0, hitsToKoAIPriority = 0, hitsToKoPlayer = 0;
    bool32 canBattlerWin1v1 = FALSE, isBattlerFirst, isBattlerFirstPriority;

    // Get max damage mon could take
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        playerMove = gBattleMons[battlerDef].moves[i];
        if (playerMove != MOVE_NONE 
            && gMovesInfo[playerMove].category != DAMAGE_CATEGORY_STATUS 
            && gMovesInfo[playerMove].effect != EFFECT_FOCUS_PUNCH
            && gBattleMons[battlerDef].pp[i] > 0
            && !MatchesSelfKillOrSuperfang(gMovesInfo[playerMove].effect, FALSE))
        {
            damageTaken = AI_GetDamage(battlerDef, battlerAtk, i, AI_DEFENDING_NORMAL, AI_DATA);
            if (damageTaken > maxDamageTaken && !AI_DoesChoiceEffectBlockMove(battlerDef, playerMove))
            {
                maxDamageTaken = damageTaken;
                bestPlayerMove = playerMove;
            }
            if (GetMovePriority(battlerDef, playerMove) > 0 && damageTaken > maxDamageTakenPriority && !AI_DoesChoiceEffectBlockMove(battlerDef, playerMove))
            {
                maxDamageTakenPriority = damageTaken;
                bestPlayerPriorityMove = playerMove;
            }
        }
    }

    hitsToKoAI = GetNoOfHitsToKOBattlerDmg(maxDamageTaken, battlerAtk);
    hitsToKoAIPriority = GetNoOfHitsToKOBattlerDmg(maxDamageTakenPriority, battlerAtk);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        aiMove = gBattleMons[battlerAtk].moves[i];
        aiMoveEffect = gMovesInfo[aiMove].effect;
        if (aiMove != MOVE_NONE && gBattleMons[battlerAtk].pp[i] > 0)
        {
            // Only check damage if it's a damaging move (if the damaging move is explosion, only if it can be used)
            if (gMovesInfo[aiMove].category != DAMAGE_CATEGORY_STATUS
                && !AI_DoesChoiceEffectBlockMove(battlerAtk, aiMove)
                && (aiMoveEffect != EFFECT_EXPLOSION || (aiMoveEffect == EFFECT_EXPLOSION && AI_DATA->shouldConsiderExplosion == TRUE)))
            {
                // Get maximum damage mon can deal
                damageDealt = AI_GetDamage(battlerAtk, battlerDef, i, AI_ATTACKING_ON_FIELD, AI_DATA);
                if (damageDealt > maxDamageDealt)
                    maxDamageDealt = damageDealt;
                
                if (!canBattlerWin1v1) // Once we can win a 1v1 we don't need to track this, but want to run the rest of the function to keep the runtime the same regardless of when we find the winning move
                {
                    hitsToKoPlayer = GetNoOfHitsToKOBattlerDmg(damageDealt, battlerDef);
                    isBattlerFirst = AI_IsFaster(battlerAtk, battlerDef, aiMove, bestPlayerMove, CONSIDER_PRIORITY);
                    isBattlerFirstPriority = AI_IsFaster(battlerAtk, battlerDef, aiMove, bestPlayerPriorityMove, CONSIDER_PRIORITY);
                    canBattlerWin1v1 = CanBattlerWin1v1(hitsToKoAI, hitsToKoPlayer, isBattlerFirst) && CanBattlerWin1v1(hitsToKoAIPriority, hitsToKoPlayer, isBattlerFirstPriority);
                }
            }
        }
    }
    return canBattlerWin1v1;
}

// Note that as many return statements as possible are INTENTIONALLY put after all of the loops;
// the function can take a max of about 0.06s to run, and this prevents the player from identifying
// whether the mon will switch or not by seeing how long the delay is before they select a move
static bool32 ShouldSwitchIfHasBadOdds(u32 battler)
{
    //Variable initialization
    u8 opposingPosition;
    u16 aiMoveEffect;
    s32 i, damageDealt = 0, maxDamageDealt = 0, damageTaken = 0, maxDamageTaken = 0, maxDamageTakenPriority = 0;
    u32 aiMove, playerMove, bestPlayerMove = MOVE_NONE, bestPlayerPriorityMove = MOVE_NONE, aiAbility = AI_DATA->abilities[battler], opposingBattler;
    bool32 getsOneShot = FALSE, hasStatusMove = FALSE, hasSuperEffectiveMove = FALSE, getsOneShotByPrio = FALSE, oneShotDefenseCheck = FALSE;
    u32 typeMatchup;
    u32 hitsToKoAI = 0, hitsToKoAIPriority = 0, hitsToKoPlayer = 0;
    bool32 canBattlerWin1v1 = FALSE, isBattlerFirst, isBattlerFirstPriority;

    // Only use this if AI_FLAG_SMART_SWITCHING is set for the trainer
    if (!(AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
        return FALSE;

    // Double Battles aren't included in AI_FLAG_SMART_MON_CHOICE. Defaults to regular switch in logic
    if (IsDoubleBattle())
        return FALSE;

    opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(battler));
    opposingBattler = GetBattlerAtPosition(opposingPosition);

    // Get max damage mon could take
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        playerMove = gBattleMons[opposingBattler].moves[i];
        if (playerMove != MOVE_NONE 
            && gMovesInfo[playerMove].category != DAMAGE_CATEGORY_STATUS 
            && gMovesInfo[playerMove].effect != EFFECT_FOCUS_PUNCH
            && gBattleMons[opposingBattler].pp[i] > 0
            && !MatchesSelfKillOrSuperfang(gMovesInfo[playerMove].effect, FALSE))
        {
            damageTaken = AI_GetDamage(opposingBattler, battler, i, AI_DEFENDING_NORMAL, AI_DATA);
            if (damageTaken > maxDamageTaken && !AI_DoesChoiceEffectBlockMove(opposingBattler, playerMove))
            {
                maxDamageTaken = damageTaken;
                bestPlayerMove = playerMove;
            }
            if (GetMovePriority(opposingBattler, playerMove) > 0 && damageTaken > maxDamageTakenPriority && !AI_DoesChoiceEffectBlockMove(opposingBattler, playerMove))
            {
                maxDamageTakenPriority = damageTaken;
                bestPlayerPriorityMove = playerMove;
            }
        }
    }

    hitsToKoAI = GetNoOfHitsToKOBattlerDmg(maxDamageTaken, battler);
    hitsToKoAIPriority = GetNoOfHitsToKOBattlerDmg(maxDamageTakenPriority, battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        aiMove = gBattleMons[battler].moves[i];
        aiMoveEffect = gMovesInfo[aiMove].effect;
        if (aiMove != MOVE_NONE && gBattleMons[battler].pp[i] > 0)
        {
            // Check if mon has an "important" status move
            if (aiMoveEffect == EFFECT_REFLECT || aiMoveEffect == EFFECT_LIGHT_SCREEN || EFFECT_AURORA_VEIL
            || aiMoveEffect == EFFECT_SPIKES || aiMoveEffect == EFFECT_TOXIC_SPIKES || aiMoveEffect == EFFECT_STEALTH_ROCK || aiMoveEffect == EFFECT_STICKY_WEB
            || aiMoveEffect == EFFECT_TAILWIND || aiMoveEffect == EFFECT_TRICK_ROOM 
            )
            {
                hasStatusMove = TRUE;
            }

            // Only check damage if it's a damaging move (if the damaging move is explosion, only if it can be used)
            if (gMovesInfo[aiMove].category != DAMAGE_CATEGORY_STATUS
                && !AI_DoesChoiceEffectBlockMove(battler, aiMove)
                && (aiMoveEffect != EFFECT_EXPLOSION || (aiMoveEffect == EFFECT_EXPLOSION && AI_DATA->shouldConsiderExplosion == TRUE)))
            {
                // Check if mon has a super effective move
                if (AI_GetMoveEffectiveness(aiMove, battler, opposingBattler) >= UQ_4_12(2.0))
                    hasSuperEffectiveMove = TRUE;

                // Get maximum damage mon can deal
                damageDealt = AI_GetDamage(battler, opposingBattler, i, AI_ATTACKING_ON_FIELD, AI_DATA);
                if (damageDealt > maxDamageDealt)
                    maxDamageDealt = damageDealt;
                
                if (!canBattlerWin1v1) // Once we can win a 1v1 we don't need to track this, but want to run the rest of the function to keep the runtime the same regardless of when we find the winning move
                {
                    hitsToKoPlayer = GetNoOfHitsToKOBattlerDmg(damageDealt, opposingBattler);
                    isBattlerFirst = AI_IsFaster(battler, opposingBattler, aiMove, bestPlayerMove, CONSIDER_PRIORITY);
                    isBattlerFirstPriority = AI_IsFaster(battler, opposingBattler, aiMove, bestPlayerPriorityMove, CONSIDER_PRIORITY);
                    canBattlerWin1v1 = CanBattlerWin1v1(hitsToKoAI, hitsToKoPlayer, isBattlerFirst) && CanBattlerWin1v1(hitsToKoAIPriority, hitsToKoPlayer, isBattlerFirstPriority);
                }
            }
        }
    }

    // Calculate type advantage
    typeMatchup = GetBattlerTypeMatchup(opposingBattler, battler);

    oneShotDefenseCheck = ((gItemsInfo[gBattleMons[battler].item].holdEffect == HOLD_EFFECT_FOCUS_SASH)
                        || ((aiAbility == ABILITY_STURDY) && !IsMoldBreakerTypeAbility(opposingBattler, gBattleMons[opposingBattler].ability)));

    // Check if mon gets one shot
    if (maxDamageTaken > gBattleMons[battler].hp && !oneShotDefenseCheck)
    {
        getsOneShot = TRUE;
    }

    // Check if mon gets one shot by a prio move
    if (maxDamageTakenPriority > gBattleMons[battler].hp && !oneShotDefenseCheck)
    {
        getsOneShotByPrio = TRUE;
    }

    // Check if current mon can 1v1 in spite of bad matchup, and don't switch out if it can
    if (canBattlerWin1v1)
        return FALSE;

    // If we don't have any other viable options, don't switch out
    if (AI_DATA->mostSuitableMonId[battler] == PARTY_SIZE)
        return FALSE;
    // Start assessing whether or not mon has bad odds
    // Jump straight to switching out in cases where mon gets OHKO'd
    if (((getsOneShot && gBattleMons[opposingBattler].speed > gBattleMons[battler].speed) // If the player OHKOs and outspeeds 
            || getsOneShotByPrio // OR OHKOs with a priority move
            || (getsOneShot && gBattleMons[opposingBattler].speed <= gBattleMons[battler].speed && maxDamageDealt < gBattleMons[opposingBattler].hp / 2)) // OR OHKOs, doesn't outspeed but isn't 2HKO'd
        && (gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 2 // And the current mon has at least 1/2 their HP, or 1/4 HP and Regenerator
            || (aiAbility == ABILITY_REGENERATOR
            && gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 4)))
    {
        // 50% chance to stay in regardless
        if (RandomPercentage(RNG_AI_SWITCH_HASBADODDS, (100 - GetSwitchChance(SHOULD_SWITCH_HASBADODDS))))
            return FALSE;
        // Switch mon out
        return SetSwitchinAndSwitch(battler, PARTY_SIZE);
    }
    // General bad type matchups have more wiggle room
    if (typeMatchup > UQ_4_12(2.0)) // If the player has favourable offensive matchup (2.0 is neutral, this must be worse)
    {
        if (!hasSuperEffectiveMove // If the AI doesn't have a super effective move
        && (gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 2 // And the current mon has at least 1/2 their HP, or 1/4 HP and Regenerator
            || (aiAbility == ABILITY_REGENERATOR
            && gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 4)))
        {
            // Then check if they have an important status move, which is worth using even in a bad matchup
            if (hasStatusMove)
                return FALSE;
            // 50% chance to stay in regardless
            if (RandomPercentage(RNG_AI_SWITCH_HASBADODDS, 50))
                return FALSE;
            // Switch mon out
            return SetSwitchinAndSwitch(battler, PARTY_SIZE);
        }
    }
    return FALSE;
}

static bool32 ShouldSwitchIfTruant(u32 battler)
{
    // Switch if mon with truant is bodied by Protect or invulnerability spam
    if (AI_DATA->abilities[battler] == ABILITY_TRUANT
        && IsTruantMonVulnerable(battler, gBattlerTarget)
        && gDisableStructs[battler].truantCounter
        && gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 2
        && AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE)
    {
        return SetSwitchinAndSwitch(battler, PARTY_SIZE);
    }
    return FALSE;
}

static u32 FindMonWithMoveOfEffectiveness(u32 battler, u32 opposingBattler, uq4_12_t effectiveness)
{
    u32 move, i, j;
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party = NULL;

    // Get party information.
    GetAIPartyIndexes(battler, &firstId, &lastId);
    party = GetBattlerParty(battler);

    // Find a Pokémon in the party that has a super effective move.
    for (i = firstId; i < lastId; i++)
    {
        if (!IsValidForBattle(&party[i]))
            continue;
        if (i == gBattlerPartyIndexes[battler])
            continue;
        if (IsAceMon(battler, i))
            continue;

        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            move = GetMonData(&party[i], MON_DATA_MOVE1 + j);
            if (move != MOVE_NONE && AI_GetMoveEffectiveness(move, battler, opposingBattler) >= effectiveness && gMovesInfo[move].power != 0)
                return SetSwitchinAndSwitch(battler, i);
        }
    }

    return FALSE; // There is not a single Pokémon in the party that has a move with this effectiveness threshold
}

static bool32 ShouldSwitchIfAllMovesBad(u32 battler)
{
    u32 moveIndex;
    u32 opposingBattler = GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));
    u32 aiMove;

    // Switch if no moves affect opponents
    if (IsDoubleBattle())
    {
        u32 opposingPartner = GetBattlerAtPosition(BATTLE_PARTNER(opposingBattler));
        for (moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
        {
            aiMove = gBattleMons[battler].moves[moveIndex];
            if ((AI_GetMoveEffectiveness(aiMove, battler, opposingBattler) > UQ_4_12(0.0)
                    || AI_GetMoveEffectiveness(aiMove, battler, opposingPartner) > UQ_4_12(0.0))
                    && aiMove != MOVE_NONE)
                return FALSE;
        }
    }
    else
    {
        for (moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
        {
            aiMove = gBattleMons[battler].moves[moveIndex];
            if (AI_GetMoveEffectiveness(aiMove, battler, opposingBattler) > UQ_4_12(0.0) && aiMove != MOVE_NONE
                && !CanAbilityAbsorbMove(battler, opposingBattler, AI_DATA->abilities[battler], aiMove, GetMoveType(aiMove))
                && !CanAbilityBlockMove(battler, opposingBattler, aiMove, AI_DATA->abilities[battler])
                && gMovesInfo[aiMove].power != 0)
                return FALSE;
        }
    }
    if (AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE) // Good candidate mon, send that in if you win 50/50
    {
        if (RandomPercentage(RNG_AI_SWITCH_ALL_MOVES_BAD, 50))
            return SetSwitchinAndSwitch(battler, PARTY_SIZE);
        else
            AI_DATA->FailedAllMovesBadSwitch = TRUE;
    }
    return FALSE;
}

static bool32 ShouldSwitchIfWonderGuard(u32 battler)
{
    u32 opposingBattler = GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));
    u32 i, move;

    if (IsDoubleBattle())
        return FALSE;

    if (AI_DATA->abilities[opposingBattler] != ABILITY_WONDER_GUARD)
        return FALSE;

    // Check if Pokémon has a super effective move.
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        move = gBattleMons[battler].moves[i];
        if (move != MOVE_NONE)
        {
            if (AI_GetMoveEffectiveness(move, battler, opposingBattler) >= UQ_4_12(2.0))
                return FALSE;
        }
    }

    if (RandomPercentage(RNG_AI_SWITCH_WONDER_GUARD, GetSwitchChance(SHOULD_SWITCH_WONDER_GUARD)))
    {
        if (AI_DATA->mostSuitableMonId[battler] == PARTY_SIZE) // No good candidate mons, find any one that can deal damage
            return FindMonWithMoveOfEffectiveness(battler, opposingBattler, UQ_4_12(2.0));
        else // Good candidate mon, send that in
            return SetSwitchinAndSwitch(battler, PARTY_SIZE);
    }

    return FALSE;
}

static bool32 FindMonThatAbsorbsOpponentsMove(u32 battler)
{
    u8 battlerIn1, battlerIn2;
    u8 numAbsorbingAbilities = 0;
    u16 absorbingTypeAbilities[3]; // Array size is maximum number of absorbing abilities for a single type
    s32 firstId;
    s32 lastId;
    struct Pokemon *party;
    u16 monAbility, aiMove;
    u32 opposingBattler = GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));
    u32 incomingMove = AI_DATA->lastUsedMove[opposingBattler];
    u32 predictedMove = incomingMove; // Update for move prediction
    bool32 isOpposingBattlerChargingOrInvulnerable = (IsSemiInvulnerable(opposingBattler, incomingMove) || IsTwoTurnNotSemiInvulnerableMove(opposingBattler, incomingMove));
    s32 i, j;
    bool32 playerIsChoiceLocked = (predictedMove == gBattleStruct->choicedMove[opposingBattler]);

    if (!(AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
        return FALSE;
    if (gBattleStruct->prevTurnSpecies[battler] != gBattleMons[battler].species) // AI mon has changed, player's behaviour no longer reliable; note to override this if using AI_FLAG_PREDICT_MOVE
        return FALSE;
    if (CanUseSuperEffectiveMoveAgainstOpponents(battler) && RandomPercentage(RNG_AI_SWITCH_ABSORBING_STAY_IN, STAY_IN_ABSORBING_PERCENTAGE))
        return FALSE;

    if (AreStatsRaised(battler))
        return FALSE;

    if (IsMoldBreakerTypeAbility(opposingBattler, AI_DATA->abilities[opposingBattler]))
        return FALSE;

    // Don't switch if mon could OHKO
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        aiMove = gBattleMons[battler].moves[i];
        if (aiMove != MOVE_NONE)
        {
            // Only check damage if it's a damaging move
            if (!IS_MOVE_STATUS(aiMove))
            {
                if (!AI_DoesChoiceEffectBlockMove(battler, aiMove) && AI_GetDamage(battler, opposingBattler, i, AI_ATTACKING_ON_FIELD, AI_DATA) > gBattleMons[opposingBattler].hp)
                    return FALSE;
            }
        }
    }

    if (IsDoubleBattle())
    {
        battlerIn1 = battler;
        if (gAbsentBattlerFlags & (1u << GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battler)))))
            battlerIn2 = battler;
        else
            battlerIn2 = GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battler)));
    }
    else
    {
        battlerIn1 = battler;
        battlerIn2 = battler;
    }

    // Create an array of possible absorb abilities so the AI considers all of them
    if (gMovesInfo[predictedMove].type == TYPE_FIRE)
    {
        absorbingTypeAbilities[numAbsorbingAbilities++] = ABILITY_FLASH_FIRE;
    }
    else if (gMovesInfo[predictedMove].type == TYPE_WATER || (isOpposingBattlerChargingOrInvulnerable && gMovesInfo[incomingMove].type == TYPE_WATER))
    {
        absorbingTypeAbilities[numAbsorbingAbilities++] = ABILITY_WATER_ABSORB;
        absorbingTypeAbilities[numAbsorbingAbilities++] = ABILITY_DRY_SKIN;
        if (B_REDIRECT_ABILITY_IMMUNITY >= GEN_5)
            absorbingTypeAbilities[numAbsorbingAbilities++] = ABILITY_STORM_DRAIN;
    }
    else if (gMovesInfo[predictedMove].type == TYPE_ELECTRIC || (isOpposingBattlerChargingOrInvulnerable && gMovesInfo[incomingMove].type == TYPE_ELECTRIC))
    {
        absorbingTypeAbilities[numAbsorbingAbilities++] = ABILITY_VOLT_ABSORB;
        absorbingTypeAbilities[numAbsorbingAbilities++] = ABILITY_MOTOR_DRIVE;
        if (B_REDIRECT_ABILITY_IMMUNITY >= GEN_5)
            absorbingTypeAbilities[numAbsorbingAbilities++] = ABILITY_LIGHTNING_ROD;
    }
    else if (gMovesInfo[predictedMove].type == TYPE_GRASS || (isOpposingBattlerChargingOrInvulnerable && gMovesInfo[incomingMove].type == TYPE_GRASS))
    {
        absorbingTypeAbilities[numAbsorbingAbilities++] = ABILITY_SAP_SIPPER;
    }
    else if ((gMovesInfo[predictedMove].type == TYPE_GROUND || (isOpposingBattlerChargingOrInvulnerable && gMovesInfo[incomingMove].type == TYPE_GROUND)) 
              && ((gBattleMons[battler].ability != ABILITY_BONE_ZONE) || (gBattleMons[battler].ability == ABILITY_BONE_ZONE && !gMovesInfo[predictedMove].boneMove)))
    {
        absorbingTypeAbilities[numAbsorbingAbilities++] = ABILITY_EARTH_EATER;
        absorbingTypeAbilities[numAbsorbingAbilities++] = ABILITY_LEVITATE;
    }
    else if (gMovesInfo[predictedMove].soundMove || (isOpposingBattlerChargingOrInvulnerable && gMovesInfo[incomingMove].soundMove))
    {
        absorbingTypeAbilities[numAbsorbingAbilities++] = ABILITY_SOUNDPROOF;
    }
    else if (gMovesInfo[predictedMove].type == TYPE_ICE || (isOpposingBattlerChargingOrInvulnerable && gMovesInfo[incomingMove].type == TYPE_ICE))
    {
        absorbingTypeAbilities[numAbsorbingAbilities++] = ABILITY_ICE_EATER;
    }
    else if (gMovesInfo[predictedMove].type == TYPE_ROCK || (isOpposingBattlerChargingOrInvulnerable && gMovesInfo[incomingMove].type == TYPE_ROCK))
    {
        absorbingTypeAbilities[numAbsorbingAbilities++] = ABILITY_MOUNTAINEER;
    }
    else
    {
        return FALSE;
    }

    // Check current mon for all absorbing abilities
    for (i = 0; i < numAbsorbingAbilities; i++)
    {
        if (AI_DATA->abilities[battler] == absorbingTypeAbilities[i])
            return FALSE;
    }

    // Check party for mon with ability that absorbs move
    GetAIPartyIndexes(battler, &firstId, &lastId);
    party = GetBattlerParty(battler);

    for (i = firstId; i < lastId; i++)
    {
        if (!IsValidForBattle(&party[i]))
            continue;
        if (i == gBattlerPartyIndexes[battlerIn1])
            continue;
        if (i == gBattlerPartyIndexes[battlerIn2])
            continue;
        if (i == gBattleStruct->monToSwitchIntoId[battlerIn1])
            continue;
        if (i == gBattleStruct->monToSwitchIntoId[battlerIn2])
            continue;
        if (IsAceMon(battler, i))
            continue;

        monAbility = GetMonAbility(&party[i]);

        for (j = 0; j < numAbsorbingAbilities; j++)
        {
            // Found a mon
            if (absorbingTypeAbilities[j] == monAbility)
            {
                if (playerIsChoiceLocked || RandomPercentage(RNG_AI_SWITCH_ABSORBING, GetSwitchChance(SHOULD_SWITCH_ABSORBS_MOVE)))
                    return SetSwitchinAndSwitch(battler, i);
            }     
        }
    }
    return FALSE;
}

static bool32 ShouldSwitchIfBadlyStatused(u32 battler)
{
    bool32 switchMon = FALSE;
    u16 monAbility = AI_DATA->abilities[battler];
    u16 holdEffect = AI_DATA->holdEffects[battler];
    u8 opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(battler));
    u8 opposingBattler = GetBattlerAtPosition(opposingPosition);
    bool32 hasStatRaised = AnyStatIsRaised(battler);

    //Perish Song
    if (gStatuses3[battler] & STATUS3_PERISH_SONG
        && gDisableStructs[battler].perishSongTimer == 0
        && monAbility != ABILITY_SOUNDPROOF)
        switchMon = TRUE;

    if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_SWITCHING)
    {
        //Yawn
        if (gStatuses3[battler] & STATUS3_YAWN
            && CanBeSlept(battler, monAbility, TRUE)
            && gBattleMons[battler].hp > gBattleMons[battler].maxHP / 3
            && RandomPercentage(RNG_AI_SWITCH_YAWN, 50))
        {
            switchMon = TRUE;

            // If we don't have a good switchin, not worth switching
            if (AI_DATA->mostSuitableMonId[battler] == PARTY_SIZE)
                switchMon = FALSE;

            // Check if Active Pokemon can KO opponent instead of switching
            // Will still fall asleep, but take out opposing Pokemon first
            if (AiExpectsToFaintPlayer(battler))
                switchMon = FALSE;

            // Checks to see if active Pokemon can do something against sleep
            if ((monAbility == ABILITY_NATURAL_CURE
                || monAbility == ABILITY_SHED_SKIN
                || monAbility == ABILITY_EARLY_BIRD)
                || holdEffect == (HOLD_EFFECT_CURE_SLP | HOLD_EFFECT_CURE_STATUS)
                || HasMove(battler, MOVE_SLEEP_TALK)
                || (HasMoveEffect(battler, MOVE_SNORE) && AI_GetMoveEffectiveness(MOVE_SNORE, battler, opposingBattler) >= UQ_4_12(1.0))
                || (IsBattlerGrounded(battler)
                    && (HasMove(battler, MOVE_MISTY_TERRAIN) || HasMove(battler, MOVE_ELECTRIC_TERRAIN)))
                )
                switchMon = FALSE;

            // Check if Active Pokemon evasion boosted and might be able to dodge until awake
            if (gBattleMons[battler].statStages[STAT_EVASION] > (DEFAULT_STAT_STAGE + 3)
                && AI_DATA->abilities[opposingBattler] != ABILITY_UNAWARE
                && AI_DATA->abilities[opposingBattler] != ABILITY_KEEN_EYE
                && AI_DATA->abilities[opposingBattler] != ABILITY_MINDS_EYE
                && !(gBattleMons[battler].status2 & STATUS2_FORESIGHT)
                && !(gStatuses3[battler] & STATUS3_MIRACLE_EYED))
                switchMon = FALSE;
        }

        // Secondary Damage
        if (monAbility != ABILITY_MAGIC_GUARD
            && !AiExpectsToFaintPlayer(battler)
            && AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE)
        {
            //Toxic
            if (((gBattleMons[battler].status1 & STATUS1_TOXIC_COUNTER) >= STATUS1_TOXIC_TURN(2))
                && gBattleMons[battler].hp >= (gBattleMons[battler].maxHP / 3)
                && AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE
                && (hasStatRaised ? RandomPercentage(RNG_AI_SWITCH_BADLY_POISONED, 20) : RandomPercentage(RNG_AI_SWITCH_BADLY_POISONED, 50)))
                switchMon = TRUE;

            //Cursed
            if (gBattleMons[battler].status2 & STATUS2_CURSED
                && (hasStatRaised ? RandomPercentage(RNG_AI_SWITCH_CURSED, 20) : RandomPercentage(RNG_AI_SWITCH_CURSED, 50)))
                switchMon = TRUE;

            //Nightmare
            if (gBattleMons[battler].status2 & STATUS2_NIGHTMARE
                && (hasStatRaised ? RandomPercentage(RNG_AI_SWITCH_NIGHTMARE, 15) : RandomPercentage(RNG_AI_SWITCH_NIGHTMARE, 33)))
                switchMon = TRUE;

            //Leech Seed
            if (gStatuses3[battler] & STATUS3_LEECHSEED
                && (hasStatRaised ? RandomPercentage(RNG_AI_SWITCH_SEEDED, 10) : RandomPercentage(RNG_AI_SWITCH_SEEDED, 25)))
                switchMon = TRUE;
        }
    }

    if (switchMon)
        return SetSwitchinAndSwitch(battler, PARTY_SIZE);
    else
        return FALSE;
}

static bool32 ShouldSwitchIfAbilityBenefit(u32 battler)
{
    bool32 hasStatRaised = AnyStatIsRaised(battler);

    //Check if ability is blocked
    if (gStatuses3[battler] & STATUS3_GASTRO_ACID
        || IsNeutralizingGasOnField())
        return FALSE;

    switch(AI_DATA->abilities[battler])
    {
        case ABILITY_NATURAL_CURE:
            //Attempt to cure bad ailment
            if (gBattleMons[battler].status1 & (STATUS1_SLEEP | STATUS1_FREEZE | STATUS1_TOXIC_POISON)
                && AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE
                && (hasStatRaised ? RandomPercentage(RNG_AI_SWITCH_NATURAL_CURE, 10) : RandomPercentage(RNG_AI_SWITCH_NATURAL_CURE, 66)))
                break;
            //Attempt to cure lesser ailment
            if ((gBattleMons[battler].status1 & STATUS1_ANY)
                && (gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 2)
                && AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE
                && (hasStatRaised ? RandomPercentage(RNG_AI_SWITCH_NATURAL_CURE, 10) : RandomPercentage(RNG_AI_SWITCH_NATURAL_CURE, 25)))
                break;

            return FALSE;

        case ABILITY_REGENERATOR:
            //Don't switch if ailment
            if (gBattleMons[battler].status1 & STATUS1_ANY)
                return FALSE;
            if ((gBattleMons[battler].hp <= ((gBattleMons[battler].maxHP * 2) / 3))
                 && AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE
                 && (hasStatRaised ? RandomPercentage(RNG_AI_SWITCH_REGENERATOR, 20) : RandomPercentage(RNG_AI_SWITCH_REGENERATOR, 50)))
                break;

            return FALSE;
        
        case ABILITY_ZERO_TO_HERO:
            // Want to activate Palafin-Zero at all costs
            if (gBattleMons[battler].species == SPECIES_PALAFIN_ZERO)
                break;

        default:
            return FALSE;
    }

    return SetSwitchinAndSwitch(battler, PARTY_SIZE);
}

static bool32 CanUseSuperEffectiveMoveAgainstOpponents(u32 battler)
{
    s32 i;
    u16 move;

    u32 opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(battler));
    u32 opposingBattler = GetBattlerAtPosition(opposingPosition);

    if (!(gAbsentBattlerFlags & (1u << opposingBattler)))
    {
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            move = gBattleMons[battler].moves[i];
            if (move == MOVE_NONE || AI_DoesChoiceEffectBlockMove(battler, move))
                continue;

            if (AI_GetMoveEffectiveness(move, battler, opposingBattler) >= UQ_4_12(2.0))
            {
                return TRUE;
            }
        }
    }
    if (!IsDoubleBattle())
        return FALSE;

    opposingBattler = GetBattlerAtPosition(BATTLE_PARTNER(opposingPosition));

    if (!(gAbsentBattlerFlags & (1u << opposingBattler)))
    {
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            move = gBattleMons[battler].moves[i];
            if (move == MOVE_NONE || AI_DoesChoiceEffectBlockMove(battler, move))
                continue;

            if (AI_GetMoveEffectiveness(move, battler, opposingBattler) >= UQ_4_12(2.0))
            {
                return TRUE;
            }
        }
    }

    return FALSE;
}

static bool32 AreStatsRaised(u32 battler)
{
    u8 buffedStatsValue = 0;
    s32 i;

    for (i = 0; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battler].statStages[i] > DEFAULT_STAT_STAGE)
            buffedStatsValue += gBattleMons[battler].statStages[i] - DEFAULT_STAT_STAGE;
    }

    return (buffedStatsValue > STAY_IN_STATS_RAISED);
}

static bool32 CanMonSurviveHazardSwitchin(u32 battler)
{
    u32 battlerIn1, battlerIn2;
    u32 hazardDamage = 0, battlerHp = gBattleMons[battler].hp;
    u32 ability = AI_DATA->abilities[battler], aiMove;
    s32 firstId, lastId, i, j;
    struct Pokemon *party;

    if (ability == ABILITY_REGENERATOR)
        battlerHp = (battlerHp * 133) / 100; // Account for Regenerator healing

    hazardDamage = GetSwitchinHazardsDamage(battler);

    // Battler will faint to hazards, check to see if another mon can clear them
    if (hazardDamage > battlerHp)
    {
        if (IsDoubleBattle())
        {
            battlerIn1 = battler;
            if (gAbsentBattlerFlags & (1u << GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battler)))))
                battlerIn2 = battler;
            else
                battlerIn2 = GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battler)));
        }
        else
        {
            battlerIn1 = battler;
            battlerIn2 = battler;
        }

        GetAIPartyIndexes(battler, &firstId, &lastId);
        party = GetBattlerParty(battler);

        for (i = firstId; i < lastId; i++)
        {
            if (!IsValidForBattle(&party[i]))
                continue;
            if (i == gBattlerPartyIndexes[battlerIn1])
                continue;
            if (i == gBattlerPartyIndexes[battlerIn2])
                continue;
            if (i == gBattleStruct->monToSwitchIntoId[battlerIn1])
                continue;
            if (i == gBattleStruct->monToSwitchIntoId[battlerIn2])
                continue;
            if (IsAceMon(battler, i))
                continue;

            for (j = 0; j < MAX_MON_MOVES; j++)
            {
                aiMove = GetMonData(&party[i], MON_DATA_MOVE1 + j, NULL);
                if (IsHazardClearingMove(aiMove)) // Have a mon that can clear the hazards, so switching out is okay
                    return TRUE;
            }
        }
        // Faints to hazards and party can't clear them, don't switch out
        return FALSE;
    }
    return TRUE;
}

static bool32 ShouldSwitchIfEncored(u32 battler)
{
    u32 encoredMove = gDisableStructs[battler].encoredMove;

    // Only use this if AI_FLAG_SMART_SWITCHING is set for the trainer
    if (!(AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
        return FALSE;

    // If not Encore'd don't switch
    if (encoredMove == MOVE_NONE)
        return FALSE;

    // Switch out 50% of the time otherwise
    else if (AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE)
    {
        if (RandomPercentage(RNG_AI_SWITCH_ENCORE, 50))
            return SetSwitchinAndSwitch(battler, PARTY_SIZE);
        else
            AI_DATA->FailedEncoreSwitch = TRUE;
    }
    return FALSE;
}

static bool32 ShouldSwitchIfBadChoiceLock(u32 battler)
{
    u32 holdEffect = GetBattlerHoldEffect(battler, FALSE);
    u32 lastUsedMove = AI_DATA->lastUsedMove[battler];
    u32 opposingBattler = GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));
    bool32 moveAffectsTarget = TRUE;
    
    if (lastUsedMove == MOVE_NONE || lastUsedMove == MOVE_UNAVAILABLE)
        return FALSE;

    if (AI_GetMoveEffectiveness(lastUsedMove, battler, opposingBattler) == UQ_4_12(0.0)
        || CanAbilityAbsorbMove(battler, opposingBattler, AI_DATA->abilities[opposingBattler], lastUsedMove, GetMoveType(lastUsedMove))
        || CanAbilityBlockMove(battler, opposingBattler, lastUsedMove, AI_DATA->abilities[opposingBattler]))
        moveAffectsTarget = FALSE;

    if (HOLD_EFFECT_CHOICE(holdEffect) && IsBattlerItemEnabled(battler))
    {
        if ((gMovesInfo[AI_DATA->lastUsedMove[battler]].category == DAMAGE_CATEGORY_STATUS || !moveAffectsTarget)
        && AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE    
        && RandomPercentage(RNG_AI_SWITCH_CHOICE_LOCK, 50))
            return SetSwitchinAndSwitch(battler, PARTY_SIZE);
    }

    return FALSE;
}

// AI should switch if it's become setup fodder and has something better to switch to
static bool32 ShouldSwitchIfAttackingStatsLowered(u32 battler)
{
    s8 attackingStage = gBattleMons[battler].statStages[STAT_ATK];
    s8 spAttackingStage = gBattleMons[battler].statStages[STAT_SPATK];

    // Only use this if AI_FLAG_SMART_SWITCHING is set for the trainer
    if (!(AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
        return FALSE;

    // Physical attacker
    if (gBattleMons[battler].attack > gBattleMons[battler].spAttack)
    {
        // Don't switch if attack isn't below -1
        if (attackingStage > DEFAULT_STAT_STAGE - 2)
            return FALSE;
        // 50% chance if attack at -2 and have a good candidate mon
        else if (attackingStage == DEFAULT_STAT_STAGE - 2)
        {
            if (AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE && RandomPercentage(RNG_AI_SWITCH_STATS_LOWERED, 50))
                return SetSwitchinAndSwitch(battler, PARTY_SIZE);
        }
        // If at -3 or worse, switch out regardless
        else if (attackingStage < DEFAULT_STAT_STAGE - 2)
            return SetSwitchinAndSwitch(battler, PARTY_SIZE);
    }

    // Special attacker
    else
    {
        // Don't switch if attack isn't below -1
        if (spAttackingStage > DEFAULT_STAT_STAGE - 2)
            return FALSE;
        // 50% chance if attack at -2 and have a good candidate mon
        else if (spAttackingStage == DEFAULT_STAT_STAGE - 2)
        {
            if (AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE && RandomPercentage(RNG_AI_SWITCH_STATS_LOWERED, 50))
                return SetSwitchinAndSwitch(battler, PARTY_SIZE);
        }
        // If at -3 or worse, switch out regardless
        else if (spAttackingStage < DEFAULT_STAT_STAGE - 2)
            return SetSwitchinAndSwitch(battler, PARTY_SIZE);
    }
    return FALSE;
}

bool32 ShouldSwitch(u32 battler)
{
    u32 battlerIn1, battlerIn2;
    u32 opposingBattler = GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party;
    s32 i;
    s32 availableToSwitch;
    u32 canAIWin1V1 = CanAIWin1V1(battler, opposingBattler);
    AI_DATA->FailedEncoreSwitch = FALSE;
    AI_DATA->FailedAllMovesBadSwitch = FALSE;

    if (gBattleMons[battler].status2 & (STATUS2_WRAPPED | STATUS2_ESCAPE_PREVENTION))
        return FALSE;
    if (gStatuses3[battler] & STATUS3_ROOTED)
        return FALSE;
    if (IsAbilityPreventingEscape(battler))
        return FALSE;
    if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
        return FALSE;

    // Sequence Switching AI never switches mid-battle
    if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SEQUENCE_SWITCHING)
        return FALSE;

    availableToSwitch = 0;

    if (IsDoubleBattle())
    {
        u32 partner = GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerAtPosition(battler)));
        battlerIn1 = battler;
        if (gAbsentBattlerFlags & (1u << partner))
            battlerIn2 = battler;
        else
            battlerIn2 = partner;
    }
    else
    {
        battlerIn1 = battler;
        battlerIn2 = battler;
    }

    GetAIPartyIndexes(battler, &firstId, &lastId);
    party = GetBattlerParty(battler);

    for (i = firstId; i < lastId; i++)
    {
        if (!IsValidForBattle(&party[i]))
            continue;
        if (i == gBattlerPartyIndexes[battlerIn1])
            continue;
        if (i == gBattlerPartyIndexes[battlerIn2])
            continue;
        if (i == gBattleStruct->monToSwitchIntoId[battlerIn1])
            continue;
        if (i == gBattleStruct->monToSwitchIntoId[battlerIn2])
            continue;
        if (IsAceMon(battler, i))
            continue;

        availableToSwitch++;
    }

    if (availableToSwitch == 0)
            return FALSE;

    // NOTE: The sequence of the below functions matter! Do not change unless you have carefully considered the outcome.
    // Since the order is sequential, and some of these functions prompt switch to specific party members.

    // FindMon functions can prompt a switch to specific party members that override GetMostSuitableMonToSwitchInto
    // The rest can prompt a switch to party member returned by GetMostSuitableMonToSwitchInto

    if (ShouldSwitchIfWonderGuard(battler))
        return TRUE;
    if ((AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_SWITCHING) && (CanMonSurviveHazardSwitchin(battler) == FALSE))
        return FALSE;
    if (FindMonThatAbsorbsOpponentsMove(battler))
    {
        if (!canAIWin1V1)
            return TRUE;
    }
    if (ShouldSwitchIfTruant(battler))
        return TRUE;
    if (ShouldSwitchIfAllMovesBad(battler))
        return TRUE;
    if (ShouldSwitchIfBadlyStatused(battler))
        return TRUE;
    if (ShouldSwitchIfAbilityBenefit(battler))
        return TRUE;
    if (ShouldSwitchIfHasBadOdds(battler))
        return TRUE;
    if (ShouldSwitchIfEncored(battler))
    {
        if (!canAIWin1V1)
            return TRUE;
    }
    if (ShouldSwitchIfBadChoiceLock(battler))
        return TRUE;
    if (ShouldSwitchIfAttackingStatsLowered(battler))
    {
        if (!canAIWin1V1)
            return TRUE;
    }

    // Removing switch capabilities under specific conditions
    if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_SWITCHING)
        return FALSE;
    if (CanUseSuperEffectiveMoveAgainstOpponents(battler))
        return FALSE;
    if (AreStatsRaised(battler))
        return FALSE;

    return FALSE;
}

bool32 ShouldSwitchIfAllScoresBad(u32 battler)
{
    u32 i, score;
    u32 opposingBattler = GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));

    if (AI_DATA->FailedAllMovesBadSwitch || AI_DATA->FailedEncoreSwitch)
        return FALSE;
    if (!(AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
        return FALSE;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        score = gBattleStruct->aiFinalScore[battler][opposingBattler][i];
        if (score > AI_BAD_SCORE_THRESHOLD)
            return FALSE;
    }
    if (AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE && RandomPercentage(RNG_AI_SWITCH_ALL_SCORES_BAD, GetSwitchChance(SHOULD_SWITCH_ALL_SCORES_BAD)))
        return TRUE;
    return FALSE;
}

bool32 ShouldStayInToUseMove(u32 battler)
{
    u32 i, aiMove, aiMoveEffect;
    u32 opposingBattler = GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));
    
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        aiMove = gBattleMons[battler].moves[i];
        aiMoveEffect = gMovesInfo[aiMove].effect;
        if (aiMoveEffect == EFFECT_REVIVAL_BLESSING || IsSwitchOutEffect(aiMoveEffect))
        {
            if (gBattleStruct->aiFinalScore[battler][opposingBattler][i] > AI_GOOD_SCORE_THRESHOLD)
                return TRUE;
        }
    }
    return FALSE;
}

void ModifySwitchAfterMoveScoring(u32 battler)
{
    u32 battlerIn1, battlerIn2;
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party;
    s32 i;
    s32 availableToSwitch;

    if (gBattleMons[battler].status2 & (STATUS2_WRAPPED | STATUS2_ESCAPE_PREVENTION))
        return;
    if (gStatuses3[battler] & STATUS3_ROOTED)
        return;
    if (IsAbilityPreventingEscape(battler))
        return;
    if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
        return;

    // Sequence Switching AI never switches mid-battle
    if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SEQUENCE_SWITCHING)
        return;

    availableToSwitch = 0;

    if (IsDoubleBattle())
    {
        u32 partner = GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerAtPosition(battler)));
        battlerIn1 = battler;
        if (gAbsentBattlerFlags & (1u << partner))
            battlerIn2 = battler;
        else
            battlerIn2 = partner;
    }
    else
    {
        battlerIn1 = battler;
        battlerIn2 = battler;
    }

    GetAIPartyIndexes(battler, &firstId, &lastId);
    party = GetBattlerParty(battler);

    for (i = firstId; i < lastId; i++)
    {
        if (!IsValidForBattle(&party[i]))
            continue;
        if (i == gBattlerPartyIndexes[battlerIn1])
            continue;
        if (i == gBattlerPartyIndexes[battlerIn2])
            continue;
        if (i == gBattleStruct->monToSwitchIntoId[battlerIn1])
            continue;
        if (i == gBattleStruct->monToSwitchIntoId[battlerIn2])
            continue;
        if (IsAceMon(battler, i))
            continue;

        availableToSwitch++;
    }

    if (availableToSwitch == 0)
        return;

    if (ShouldSwitchIfAllScoresBad(battler))
        AI_DATA->shouldSwitch |= (1u << battler);
    else if (ShouldStayInToUseMove(battler))
        AI_DATA->shouldSwitch &= ~(1u << battler);
}

bool32 IsSwitchinValid(u32 battler)
{
    // Edge case: See if partner already chose to switch into the same mon
    if (IsDoubleBattle())
    {
        u32 partner = GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerAtPosition(battler)));
        if (gBattleStruct->AI_monToSwitchIntoId[battler] == PARTY_SIZE) // Generic switch
        {
            if ((AI_DATA->shouldSwitch & (1u << partner)) && AI_DATA->monToSwitchInId[partner] == AI_DATA->mostSuitableMonId[battler])
            {
                return FALSE;
            }
        }
        else // Override switch
        {
            if ((AI_DATA->shouldSwitch & (1u << partner)) && AI_DATA->monToSwitchInId[partner] == gBattleStruct->AI_monToSwitchIntoId[battler])
            {
                return FALSE;
            }
        }
    }
    return TRUE;
}

void AI_TrySwitchOrUseItem(u32 battler)
{
    struct Pokemon *party;
    u8 battlerIn1, battlerIn2;
    s32 firstId;
    s32 lastId; // + 1
    u8 battlerPosition = GetBattlerPosition(battler);
    party = GetBattlerParty(battler);

    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
    {
        if (AI_DATA->shouldSwitch & (1u << battler) && IsSwitchinValid(battler))
        {
            BtlController_EmitTwoReturnValues(battler, 1, B_ACTION_SWITCH, 0);
            if (gBattleStruct->AI_monToSwitchIntoId[battler] == PARTY_SIZE)
            {
                s32 monToSwitchId = AI_DATA->mostSuitableMonId[battler];
                if (monToSwitchId == PARTY_SIZE)
                {
                    if (!IsDoubleBattle())
                    {
                        battlerIn1 = GetBattlerAtPosition(battlerPosition);
                        battlerIn2 = battlerIn1;
                    }
                    else
                    {
                        battlerIn1 = GetBattlerAtPosition(battlerPosition);
                        battlerIn2 = GetBattlerAtPosition(BATTLE_PARTNER(battlerPosition));
                    }

                    GetAIPartyIndexes(battler, &firstId, &lastId);

                    for (monToSwitchId = (lastId-1); monToSwitchId >= firstId; monToSwitchId--)
                    {
                        if (!IsValidForBattle(&party[monToSwitchId]))
                            continue;
                        if (monToSwitchId == gBattlerPartyIndexes[battlerIn1])
                            continue;
                        if (monToSwitchId == gBattlerPartyIndexes[battlerIn2])
                            continue;
                        if (monToSwitchId == gBattleStruct->monToSwitchIntoId[battlerIn1])
                            continue;
                        if (monToSwitchId == gBattleStruct->monToSwitchIntoId[battlerIn2])
                            continue;
                        if (IsAceMon(battler, monToSwitchId))
                            continue;

                        break;
                    }
                }

                gBattleStruct->AI_monToSwitchIntoId[battler] = monToSwitchId;
            }

            *(gBattleStruct->monToSwitchIntoId + battler) = gBattleStruct->AI_monToSwitchIntoId[battler];
            AI_DATA->monToSwitchInId[battler] = gBattleStruct->AI_monToSwitchIntoId[battler];
            return;
        }
        else if (ShouldUseItem(battler))
        {
            return;
        }
    }

    BtlController_EmitTwoReturnValues(battler, BUFFER_B, B_ACTION_USE_MOVE, BATTLE_OPPOSITE(battler) << 8);
}

bool32 IsMonGrounded(u16 heldItemEffect, u32 ability, u32 battler)
{
    u8 type1 = gBattleMons[battler].types[0];
    u8 type2 = gBattleMons[battler].types[1];
    // List that makes mon not grounded
    if (type1 == TYPE_FLYING || type2 == TYPE_FLYING || ability == ABILITY_LEVITATE
         || (heldItemEffect == HOLD_EFFECT_AIR_BALLOON && !(ability == ABILITY_KLUTZ || (gFieldStatuses & STATUS_FIELD_MAGIC_ROOM))))
    {
        // List that overrides being off the ground
        if ((heldItemEffect == HOLD_EFFECT_IRON_BALL && !(ability == ABILITY_KLUTZ || (gFieldStatuses & STATUS_FIELD_MAGIC_ROOM))) || (gFieldStatuses & STATUS_FIELD_GRAVITY) || (gFieldStatuses & STATUS_FIELD_MAGIC_ROOM))
            return TRUE;
        else
            return FALSE;
    }
    else
        return TRUE;
}

// Gets hazard damage
static u32 GetSwitchinHazardsDamage(u32 battler)
{
    // u8 defType1 = battleMon->types[0], defType2 = battleMon->types[1];
    u8 tSpikesLayers;
    u16 heldItemEffect = AI_DATA->holdEffects[battler];
    u32 maxHP = gBattleMons[battler].maxHP, ability = AI_DATA->abilities[battler], status = gBattleMons[battler].status1;
    u32 spikesDamage = 0, tSpikesDamage = 0, hazardDamage = 0;
    u32 hazardFlags = gSideStatuses[GetBattlerSide(battler)] & (SIDE_STATUS_SPIKES | SIDE_STATUS_STEALTH_ROCK | SIDE_STATUS_STICKY_WEB | SIDE_STATUS_TOXIC_SPIKES | SIDE_STATUS_SAFEGUARD);

    // Check ways mon might avoid all hazards
    if ((ability != ABILITY_MAGIC_GUARD || ability != ABILITY_SHIELD_DUST) || (heldItemEffect == HOLD_EFFECT_HEAVY_DUTY_BOOTS &&
        !((gFieldStatuses & STATUS_FIELD_MAGIC_ROOM) || ability == ABILITY_KLUTZ)))
    {
        // Stealth Rock
        if ((hazardFlags & SIDE_STATUS_STEALTH_ROCK) && heldItemEffect != HOLD_EFFECT_HEAVY_DUTY_BOOTS && ability != ABILITY_MOUNTAINEER)
            hazardDamage += GetStealthHazardDamage(gMovesInfo[MOVE_STEALTH_ROCK].type, battler);
        // G-Max Steelsurge
        if ((hazardFlags & SIDE_STATUS_STEELSURGE) && heldItemEffect != HOLD_EFFECT_HEAVY_DUTY_BOOTS)
            hazardDamage += GetStealthHazardDamage(gMovesInfo[MOVE_G_MAX_STEELSURGE].type, battler);
        // Spikes
        if ((hazardFlags & SIDE_STATUS_SPIKES) && IsMonGrounded(heldItemEffect, ability, battler))
        {
            spikesDamage = maxHP / ((5 - gSideTimers[GetBattlerSide(battler)].spikesAmount) * 2);
            if (spikesDamage == 0)
                spikesDamage = 1;
            hazardDamage += spikesDamage;
        }

        if ((hazardFlags & SIDE_STATUS_TOXIC_SPIKES) && (!IS_BATTLER_ANY_TYPE(battler, TYPE_POISON, TYPE_STEEL)
            && ability != ABILITY_IMMUNITY && ability != ABILITY_POISON_HEAL && ability != ABILITY_COMATOSE
            && status == 0
            && !(hazardFlags & SIDE_STATUS_SAFEGUARD)
            && !(IsAbilityOnSide(battler, ABILITY_PASTEL_VEIL))
            && !(IsBattlerTerrainAffected(battler, STATUS_FIELD_MISTY_TERRAIN))
            && !(IsAbilityStatusProtected(battler))
            && heldItemEffect != HOLD_EFFECT_CURE_PSN && heldItemEffect != HOLD_EFFECT_CURE_STATUS
            && IsMonGrounded(heldItemEffect, ability, battler)))
        {
            tSpikesLayers = gSideTimers[GetBattlerSide(battler)].toxicSpikesAmount;
            if (tSpikesLayers == 1)
            {
                tSpikesDamage = maxHP / 8;
                if (tSpikesDamage == 0)
                    tSpikesDamage = 1;
            }
            else if (tSpikesLayers >= 2)
            {
                tSpikesDamage = maxHP / 16;
                if (tSpikesDamage == 0)
                    tSpikesDamage = 1;
            }
            hazardDamage += tSpikesDamage;
        }
    }
    return hazardDamage;
}

static s32 GetSwitchInTerrainImpact(u32 battler)
{
    s32 terrainImpact = 0, maxHP = gBattleMons[battler].maxHP, ability = AI_DATA->abilities[battler];
    u32 holdEffect = AI_DATA->holdEffects[battler];
    if (gFieldStatuses & STATUS_FIELD_GRASSY_TERRAIN)
    {
        // make sure switch-in candidate isn't grounded
            // air balloon = false, flying type = false, levitate = false
            // iron ball or gravity would force those to be true
        bool32 isAirborne = holdEffect == HOLD_EFFECT_AIR_BALLOON || ability == ABILITY_LEVITATE || IS_BATTLER_OF_TYPE(battler, TYPE_FLYING);
        if (holdEffect == HOLD_EFFECT_IRON_BALL || (gFieldStatuses & STATUS_FIELD_GRAVITY) || !isAirborne)
        {
            terrainImpact = maxHP / 16;
            if (terrainImpact == 0)
                terrainImpact = 1;
        }
    }

    return terrainImpact;
}

// Gets damage / healing from weather
static s32 GetSwitchinWeatherImpact(u32 battler)
{
    s32 weatherImpact = 0, maxHP = gBattleMons[battler].maxHP;
    u32 ability = AI_DATA->abilities[battler];
    u32 holdEffect = AI_DATA->holdEffects[battler];

    if (WEATHER_HAS_EFFECT)
    {
        // Damage
        if (holdEffect != HOLD_EFFECT_SAFETY_GOGGLES && ability != ABILITY_MAGIC_GUARD && ability != ABILITY_OVERCOAT)
        {
            if ((gBattleWeather & B_WEATHER_HAIL)
             && IS_BATTLER_OF_TYPE(battler, TYPE_ICE)
             && ability != ABILITY_SNOW_CLOAK && ability != ABILITY_ICE_BODY)
            {
                weatherImpact = maxHP / 16;
                if (weatherImpact == 0)
                    weatherImpact = 1;
            }
            else if ((gBattleWeather & B_WEATHER_SANDSTORM)
                && IS_BATTLER_ANY_TYPE(battler, TYPE_ROCK, TYPE_GROUND, TYPE_STEEL)
                && ability != ABILITY_SAND_VEIL && ability != ABILITY_SAND_RUSH && ability != ABILITY_SAND_FORCE)
            {
                weatherImpact = maxHP / 16;
                if (weatherImpact == 0)
                    weatherImpact = 1;
            }
        }
        if ((gBattleWeather & B_WEATHER_SUN) && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA
         && (ability == ABILITY_SOLAR_POWER || ability == ABILITY_DRY_SKIN))
        {
            weatherImpact = maxHP / 8;
            if (weatherImpact == 0)
                weatherImpact = 1;
        }

        // Healing
        if (gBattleWeather & B_WEATHER_RAIN && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA)
        {
            if (ability == ABILITY_DRY_SKIN)
            {
                weatherImpact = -(maxHP / 8);
                if (weatherImpact == 0)
                    weatherImpact = -1;
            }
            else if (ability == ABILITY_RAIN_DISH)
            {
                weatherImpact = -(maxHP / 16);
                if (weatherImpact == 0)
                    weatherImpact = -1;
            }
        }
        if (((gBattleWeather & B_WEATHER_HAIL) || (gBattleWeather & B_WEATHER_SNOW)) && ability == ABILITY_ICE_BODY)
        {
            weatherImpact = -(maxHP / 16);
            if (weatherImpact == 0)
                weatherImpact = -1;
        }
    }
    return weatherImpact;
}

// Gets one turn of recurring healing
static u32 GetSwitchinRecurringHealing(u32 battler)
{
    u32 recurringHealing = 0, maxHP = gBattleMons[battler].maxHP, ability = AI_DATA->abilities[battler];
    u32 holdEffect = AI_DATA->holdEffects[battler];

    // Items
    if (ability != ABILITY_KLUTZ)
    {
        if (holdEffect == HOLD_EFFECT_BLACK_SLUDGE && IS_BATTLER_OF_TYPE(battler, TYPE_POISON))
        {
            recurringHealing = maxHP / 16;
            if (recurringHealing == 0)
                recurringHealing = 1;
        }
        else if (holdEffect == HOLD_EFFECT_LEFTOVERS)
        {
            recurringHealing = maxHP / 16;
            if (recurringHealing == 0)
                recurringHealing = 1;
        }
    } // Intentionally omitting Shell Bell for its inconsistency

    // Abilities
    if (ability == ABILITY_POISON_HEAL && (gBattleMons[battler].status1 & STATUS1_POISON))
    {
        u32 healing = maxHP / 8;
        if (healing == 0)
            healing = 1;
        recurringHealing += healing;
    }
    return recurringHealing;
}

// Gets one turn of recurring damage
static u32 GetSwitchinRecurringDamage(u32 battler)
{
    u32 passiveDamage = 0, maxHP = gBattleMons[battler].maxHP, ability = AI_DATA->abilities[battler];
    u32 holdEffect = AI_DATA->holdEffects[battler];

    // Items
    if (ability != ABILITY_MAGIC_GUARD && ability != ABILITY_KLUTZ)
    {
        if (holdEffect == HOLD_EFFECT_BLACK_SLUDGE && IS_BATTLER_OF_TYPE(battler, TYPE_POISON))
        {
            passiveDamage = maxHP / 8;
            if (passiveDamage == 0)
                passiveDamage = 1;
        }
        else if (holdEffect == HOLD_EFFECT_LIFE_ORB && ability != ABILITY_SHEER_FORCE)
        {
            passiveDamage = maxHP / 10;
            if (passiveDamage == 0)
                passiveDamage = 1;
        }
        else if (holdEffect == HOLD_EFFECT_STICKY_BARB)
        {
            passiveDamage = maxHP / 8;
            if(passiveDamage == 0)
                passiveDamage = 1;
        }
    }
    return passiveDamage;
}

// Gets one turn of status damage
static u32 GetSwitchinStatusDamage(u32 battler)
{
    u8 tSpikesLayers = gSideTimers[GetBattlerSide(battler)].toxicSpikesAmount;
    u16 heldItemEffect = AI_DATA->holdEffects[battler];
    u32 status = gBattleMons[battler].status1, ability = AI_DATA->abilities[battler], maxHP = gBattleMons[battler].maxHP;
    u32 statusDamage = 0;

    // Status condition damage
    if ((status != 0) && ability != ABILITY_MAGIC_GUARD)
    {
        if (status & STATUS1_BURN)
        {
            if (B_BURN_DAMAGE >= GEN_7)
                statusDamage = maxHP / 16;
            else
                statusDamage = maxHP / 8;
            if(ability == ABILITY_HEATPROOF)
                statusDamage = statusDamage / 2;
            if (statusDamage == 0)
                statusDamage = 1;
        }
        else if (status & STATUS1_FROSTBITE)
        {
            if (B_BURN_DAMAGE >= GEN_7)
                statusDamage = maxHP / 16;
            else
                statusDamage = maxHP / 8;
            if (statusDamage == 0)
                statusDamage = 1;
        }
        else if ((status & STATUS1_POISON) && ability != ABILITY_POISON_HEAL)
        {
            statusDamage = maxHP / 8;
            if (statusDamage == 0)
                statusDamage = 1;
        }
        else if ((status & STATUS1_TOXIC_POISON) && ability != ABILITY_POISON_HEAL)
        {
            if ((status & STATUS1_TOXIC_COUNTER) != STATUS1_TOXIC_TURN(15)) // not 16 turns
                gBattleMons[battler].status1 += STATUS1_TOXIC_TURN(1);
            statusDamage = maxHP / 16;
            if (statusDamage == 0)
                statusDamage = 1;
            statusDamage *= gBattleMons[battler].status1 & STATUS1_TOXIC_COUNTER >> 8;
        }
    }

    // Apply hypothetical poisoning from Toxic Spikes, which means the first turn of damage already added in GetSwitchinHazardsDamage
    // Do this last to skip one iteration of Poison / Toxic damage, and start counting Toxic damage one turn later.
    if (tSpikesLayers != 0 && (IS_BATTLER_OF_TYPE(battler, TYPE_POISON)
        && ability != ABILITY_IMMUNITY && ability != ABILITY_POISON_HEAL
        && status == 0
        && !(heldItemEffect == HOLD_EFFECT_HEAVY_DUTY_BOOTS
            && (((gFieldStatuses & STATUS_FIELD_MAGIC_ROOM) || ability == ABILITY_KLUTZ)))
        && heldItemEffect != HOLD_EFFECT_CURE_PSN && heldItemEffect != HOLD_EFFECT_CURE_STATUS
        && IsMonGrounded(heldItemEffect, ability, battler)))
    {
        if (tSpikesLayers == 1)
        {
            gBattleMons[battler].status1 = STATUS1_POISON; // Assign "hypothetical" status to the switchin candidate so we can get the damage it would take from TSpikes
        }
        if (tSpikesLayers == 2)
        {
            gBattleMons[battler].status1 = STATUS1_TOXIC_POISON; // Assign "hypothetical" status to the switchin candidate so we can get the damage it would take from TSpikes
            gBattleMons[battler].status1 += STATUS1_TOXIC_TURN(1);
        }
    }
    return statusDamage;
}

// Gets number of hits to KO factoring in hazards, healing held items, status, and weather
static u32 GetSwitchinHitsToKO(s32 damageTaken, u32 battler, bool32 isFreeSwitch)
{
    u32 startingHP = gBattleMons[battler].hp - GetSwitchinHazardsDamage(battler);
    u16 heldItemEffect = AI_DATA->holdEffects[battler];
    s32 weatherImpact = GetSwitchinWeatherImpact(battler); // Signed to handle both damage and healing in the same value
    s32 terrainImpact = GetSwitchInTerrainImpact(battler);
    u32 recurringHeldItemDamage = GetSwitchinRecurringDamage(battler);
    u32 recurringHealing = GetSwitchinRecurringHealing(battler);
    u32 statusDamage = GetSwitchinStatusDamage(battler);
    u32 hitsToKO = 0;
    u16 maxHP = gBattleMons[battler].maxHP, item = gBattleMons[battler].item;
    u8 weatherDuration = gWishFutureKnock.weatherDuration, terrainDuration = gFieldTimers.terrainTimer, holdEffectParam = ItemId_GetHoldEffectParam(item);
    u32 opposingBattler = GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));
    u32 opposingAbility = gBattleMons[opposingBattler].ability, ability = AI_DATA->abilities[battler];
    bool32 usedSingleUseHealingItem = FALSE, opponentCanBreakMold = IsMoldBreakerTypeAbility(opposingBattler, opposingAbility);
    s32 currentHP = startingHP, singleUseItemHeal = 0;

    // No damage being dealt
    if ((damageTaken + statusDamage + recurringHeldItemDamage <= recurringHealing) || damageTaken + statusDamage + recurringHeldItemDamage == 0)
        return hitsToKO;

    // Mon fainted to hazards
    if (startingHP == 0)
        return 1;

    // Find hits to KO
    while (currentHP > 0)
    {
        // Remove weather damage when it would run out
        if (weatherImpact != 0 && weatherDuration == 0)
            weatherImpact = 0;
    
        // likewise for terrain
        if (terrainImpact != 0 && terrainDuration == 0)
            terrainImpact = 0;

        // Take attack damage for the turn
        currentHP = currentHP - damageTaken;

        // One shot prevention effects
        if (damageTaken >= maxHP && startingHP == maxHP && (heldItemEffect == HOLD_EFFECT_FOCUS_SASH || (!opponentCanBreakMold && B_STURDY >= GEN_5 && ability == ABILITY_STURDY)) && hitsToKO < 1)
            currentHP = 1;

        // If mon is still alive, apply terrain and weather impact first, as it might KO the mon before it can heal with its item (order is terrain -> weather -> item -> status)
        if (currentHP > 0)
            currentHP = currentHP + terrainImpact;

        if (currentHP > 0)
            currentHP = currentHP - weatherImpact;

        // Check if we're at a single use healing item threshold
        if (currentHP > 0 && AI_DATA->abilities[battler] != ABILITY_KLUTZ && usedSingleUseHealingItem == FALSE
            && !(opposingAbility == ABILITY_UNNERVE && GetPocketByItemId(item) == POCKET_BERRIES))
        {
            switch (heldItemEffect)
            {
            case HOLD_EFFECT_RESTORE_HP:
                if (currentHP < maxHP / 2)
                    singleUseItemHeal = holdEffectParam;
                break;
            case HOLD_EFFECT_RESTORE_PCT_HP:
                if (currentHP < maxHP / 2)
                {
                    singleUseItemHeal = maxHP / holdEffectParam;
                    if (singleUseItemHeal == 0)
                        singleUseItemHeal = 1;
                }
                break;
            case HOLD_EFFECT_CONFUSE_SPICY:
            case HOLD_EFFECT_CONFUSE_DRY:
            case HOLD_EFFECT_CONFUSE_SWEET:
            case HOLD_EFFECT_CONFUSE_BITTER:
            case HOLD_EFFECT_CONFUSE_SOUR:
                if (currentHP < maxHP / CONFUSE_BERRY_HP_FRACTION)
                {
                    singleUseItemHeal = maxHP / holdEffectParam;
                    if (singleUseItemHeal == 0)
                        singleUseItemHeal = 1;
                }
                break;
            }

            // If we used one, apply it without overcapping our maxHP
            if (singleUseItemHeal > 0)
            {
                if ((currentHP + singleUseItemHeal) > maxHP)
                    currentHP = maxHP;
                else
                    currentHP = currentHP + singleUseItemHeal;
                usedSingleUseHealingItem = TRUE;
            }
        }

        // Healing/damage from items occurs before status so we can do the rest in one block
        if (currentHP > 0) {
            // handle life orb chip first, since this happens at time of move execution - exclude life orb damage if it's the switch turn of a mid-battle switch
            if (heldItemEffect == HOLD_EFFECT_LIFE_ORB && (hitsToKO > 0 || (hitsToKO == 0 && isFreeSwitch)))
                currentHP = currentHP - recurringHeldItemDamage;
        
            // then, if still alive, handle other damaging held item cases (black sludge/sticky barb), recurring healing, and status damage
            if (currentHP > 0) {
                if (heldItemEffect != HOLD_EFFECT_LIFE_ORB)
                    currentHP = currentHP - recurringHeldItemDamage;
            
                // then do all healing/status damage for the turn cleanup
                currentHP = currentHP + recurringHealing - statusDamage;
            }
        }

        // Recalculate toxic damage if needed
        if (gBattleMons[battler].status1 & STATUS1_TOXIC_POISON)
            statusDamage = GetSwitchinStatusDamage(battler);

        // Reduce weather duration
        if (weatherDuration != 0)
            weatherDuration--;

        // and terrain duration
        if (terrainDuration != 0)
            terrainDuration--;

        hitsToKO++;
    }

    // Disguise will always add an extra hit to KO
    if (!opponentCanBreakMold && gBattleMons[battler].species == SPECIES_MIMIKYU_DISGUISED)
        hitsToKO++;

    return hitsToKO;
}

static u32 GetBattlerTypeMatchup(u32 opposingBattler, u32 battler)
{
    // Check type matchup
    u32 typeEffectiveness1 = UQ_4_12(1.0), typeEffectiveness2 = UQ_4_12(1.0);
    u8 atkType1 = gBattleMons[battler].types[0], atkType2 = gBattleMons[battler].types[1],
    defType1 = gBattleMons[battler].types[0], defType2 = gBattleMons[battler].types[1];

    // Add each independent defensive type matchup together
    typeEffectiveness1 = uq4_12_multiply(typeEffectiveness1, (GetTypeModifier(atkType1, defType1)));
    if (defType2 != defType1)
        typeEffectiveness1 = uq4_12_multiply(typeEffectiveness1, (GetTypeModifier(atkType1, defType2)));
    if (typeEffectiveness1 == 0) // Immunity
        typeEffectiveness1 = UQ_4_12(0.1);
        
    if (atkType2 != atkType1)
    {
        typeEffectiveness2 = uq4_12_multiply(typeEffectiveness2, (GetTypeModifier(atkType2, defType1)));
        if (defType2 != defType1)
            typeEffectiveness2 = uq4_12_multiply(typeEffectiveness2, (GetTypeModifier(atkType2, defType2)));
        if (typeEffectiveness2 == 0) // Immunity
            typeEffectiveness2 = UQ_4_12(0.1);
    }
    else
    {
        typeEffectiveness2 = typeEffectiveness1;
    }

    return typeEffectiveness1 + typeEffectiveness2;
}

static int GetRandomSwitchinWithBatonPass(int aliveCount, int bits, int firstId, int lastId, int currentMonId)
{
    // Breakout early if there aren't any Baton Pass mons to save computation time
    if (bits == 0)
        return PARTY_SIZE;

    // GetBestMonBatonPass randomly chooses between all mons that met Baton Pass check
    if ((aliveCount == 2 || (aliveCount > 2 && Random() % 3 == 0)) && bits)
    {
        do
        {
            return (Random() % (lastId - firstId)) + firstId;
        } while (!(bits & (1 << (currentMonId))));
    }

    // Catch any other cases (such as only one mon alive and it has Baton Pass)
    else
        return PARTY_SIZE;
}

static s32 GetMaxDamagePlayerCouldDealToSwitchin(u32 battler, u32 opposingBattler, u32 *bestPlayerMove)
{
    int i = 0;
    u32 playerMove;
    s32 damageTaken = 0, maxDamageTaken = 0;
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        playerMove = gBattleMons[opposingBattler].moves[i];
        if (playerMove != MOVE_NONE 
            && gMovesInfo[playerMove].category != DAMAGE_CATEGORY_STATUS 
            && gMovesInfo[playerMove].effect 
            && gBattleMons[opposingBattler].pp[i] > 0)
        {
            damageTaken = AI_GetDamage(opposingBattler, battler, i, AI_DEFENDING_NORMAL, AI_DATA);
            if (playerMove == gBattleStruct->choicedMove[opposingBattler]) // If player is choiced, only care about the choice locked move
            {
                *bestPlayerMove = playerMove;
                return damageTaken;
            }
            if (damageTaken > maxDamageTaken)
            {
                if (!MatchesSelfKillOrSuperfang(gMovesInfo[playerMove].effect, TRUE))
                {
                    maxDamageTaken = damageTaken;
                    *bestPlayerMove = playerMove;
                }
            }
        }
    }
    return maxDamageTaken;
}

static s32 GetMaxPriorityDamagePlayerCouldDealToSwitchin(u32 battler, u32 opposingBattler, u32 *bestPlayerPriorityMove)
{
    int i = 0;
    u32 playerMove;
    s32 damageTaken = 0, maxDamageTaken = 0;
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        // If player is choiced into a non-priority move, AI understands that it can't deal priority damage
        if (gBattleStruct->choicedMove[opposingBattler] != MOVE_NONE && GetMovePriority(opposingBattler, gBattleStruct->choicedMove[opposingBattler]) < 1)
            break;
        playerMove = gBattleMons[opposingBattler].moves[i];
        if (playerMove != MOVE_NONE
            && GetMovePriority(opposingBattler, playerMove) > 0
            && gMovesInfo[playerMove].category != DAMAGE_CATEGORY_STATUS 
            && gMovesInfo[playerMove].effect != EFFECT_FOCUS_PUNCH
            && gBattleMons[opposingBattler].pp[i] > 0)
        {
            damageTaken = AI_GetDamage(opposingBattler, battler, i, AI_DEFENDING_NORMAL, AI_DATA);
            if (playerMove == gBattleStruct->choicedMove[opposingBattler]) // If player is choiced, only care about the choice locked move
            {
                *bestPlayerPriorityMove = playerMove;
                return damageTaken;
            }
            if (damageTaken > maxDamageTaken)
            {
                if (!MatchesSelfKillOrSuperfang(gMovesInfo[playerMove].effect, TRUE))
                {
                    maxDamageTaken = damageTaken;
                    *bestPlayerPriorityMove = playerMove;
                }
            }
        }
    }
    return maxDamageTaken;
}

static bool32 AI_CanSwitchinAbilityTrapOpponent(u16 ability, u32 opposingBattler)
{
    if (AI_CanBattlerEscape(opposingBattler))
        return FALSE;
    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER && CountUsablePartyMons(opposingBattler) == 0)
        return FALSE;
    else if (ability == ABILITY_SHADOW_TAG)
    {
        if (B_SHADOW_TAG_ESCAPE >= GEN_4 && AI_DATA->abilities[opposingBattler] == ABILITY_SHADOW_TAG)
            return FALSE;
        else
            return TRUE;
    }
    else if (ability == ABILITY_ARENA_TRAP && IsBattlerGrounded(opposingBattler))
        return TRUE;
    else if (ability == ABILITY_MAGNET_PULL && IS_BATTLER_OF_TYPE(opposingBattler, TYPE_STEEL))
        return TRUE;
    else
        return FALSE;
}

static inline bool32 IsFreeSwitch(enum SwitchType switchType, u32 battlerSwitchingOut, u32 opposingBattler)
{
    bool32 movedSecond = GetBattlerTurnOrderNum(battlerSwitchingOut) > GetBattlerTurnOrderNum(opposingBattler) ? TRUE : FALSE;

    // Switch out effects
    if (!IsDoubleBattle()) // Not handling doubles' additional complexity
    {
        if (IsSwitchOutEffect(gMovesInfo[gCurrentMove].effect) && movedSecond)
            return TRUE;
        if (AI_DATA->ejectButtonSwitch)
            return TRUE;
        if (AI_DATA->ejectPackSwitch)
        {
            // If faster, not a free switch; likely lowered own stats
            if (!movedSecond)
                return FALSE;
            // Otherwise, free switch
            return TRUE;
        }
    }

    // Post KO check has to be last because the GetMostSuitableMonToSwitchInto call in OpponentHandleChoosePokemon assumes a KO rather than a forced switch choice
    if (switchType == SWITCH_AFTER_KO)
            return TRUE;
    else
        return FALSE;
}

static inline bool32 CanSwitchinWin1v1(u32 hitsToKOAI, u32 hitsToKOPlayer, bool32 isSwitchinFirst, bool32 isFreeSwitch)
{
    // Player's best move deals 0 damage
    if (hitsToKOAI == 0 && hitsToKOPlayer > 0)
        return TRUE;

    // AI's best move deals 0 damage
    if (hitsToKOPlayer == 0 && hitsToKOAI > 0)
        return FALSE;

    // Neither mon can damage the other
    if (hitsToKOPlayer == 0 && hitsToKOAI == 0)
        return FALSE;

    // Free switch, need to outspeed or take 1 extra hit
    if (isFreeSwitch)
    {
        if (hitsToKOAI > hitsToKOPlayer || (hitsToKOAI == hitsToKOPlayer && isSwitchinFirst))
            return TRUE;
    }
    // Mid battle switch, need to take 1 or 2 extra hits depending on speed
    if (hitsToKOAI > hitsToKOPlayer + 1 || (hitsToKOAI == hitsToKOPlayer + 1 && isSwitchinFirst))
        return TRUE;
    return FALSE;
}

// This function splits switching behaviour depending on whether the switch is free.
// Everything runs in the same loop to minimize computation time. This makes it harder to read, but hopefully the comments can guide you!
static u32 GetBestMonIntegrated(struct Pokemon *party, int firstId, int lastId, u32 battler, u32 opposingBattler, u32 battlerIn1, u32 battlerIn2, enum SwitchType switchType)
{
    int revengeKillerId = PARTY_SIZE, slowRevengeKillerId = PARTY_SIZE, fastThreatenId = PARTY_SIZE, slowThreatenId = PARTY_SIZE, damageMonId = PARTY_SIZE, generic1v1MonId = PARTY_SIZE;
    int batonPassId = PARTY_SIZE, defensiveMonId = PARTY_SIZE, aceMonId = PARTY_SIZE, trapperId = PARTY_SIZE;
    int i, j, aliveCount = 0, bits = 0, aceMonCount = 0;
    s32 defensiveMonHitKOThreshold = 3; // 3HKO threshold that candidate defensive mons must exceed
    s32 playerMonHP = gBattleMons[opposingBattler].hp, maxDamageDealt = 0, damageDealt = 0;
    u32 aiMove, hitsToKOAI, hitsToKOPlayer, hitsToKOAIPriority, bestPlayerMove = MOVE_NONE, bestPlayerPriorityMove = MOVE_NONE, maxHitsToKO = 0;
    bool32 isFreeSwitch = IsFreeSwitch(switchType, battlerIn1, opposingBattler), isSwitchinFirst, isSwitchinFirstPriority, canSwitchinWin1v1;
    u32 storeCurrBattlerPartyIndex = gBattlerPartyIndexes[battler]; //Rage Fist fix

    struct AiLogicData *savedAiLogicData = AllocSaveAiLogicData();
    struct BattlePokemon *savedBattleMons = AllocSaveBattleMons();

    // Iterate through mons
    for (i = firstId; i < lastId; i++)
    {
        // Check mon validity
        if (!IsValidForBattle(&party[i])
            || gBattlerPartyIndexes[battlerIn1] == i
            || gBattlerPartyIndexes[battlerIn2] == i
            || i == gBattleStruct->monToSwitchIntoId[battlerIn1]
            || i == gBattleStruct->monToSwitchIntoId[battlerIn2])
        {
            continue;
        }
        // Save Ace Pokemon for last
        else if (IsAceMon(battler, i))
        {
            aceMonId = i;
            aceMonCount++;
            continue;
        }
        else
            aliveCount++;

        gBattlerPartyIndexes[battler] = i; // Rage Fist fix
        InitializeSwitchinCandidate(battler, &party[i]);

        // TODO - pull GetIncomingHealInfo from upstream?

        // While not really invalid per se, not really wise to switch into this mon
        if (AI_DATA->abilities[battler] == ABILITY_TRUANT && IsTruantMonVulnerable(battler, opposingBattler))
            continue;

        AI_DATA->switchInCalc = TRUE;

        // Get max number of hits for player to KO AI mon and type matchup for defensive switching
        hitsToKOAI = GetSwitchinHitsToKO(GetMaxDamagePlayerCouldDealToSwitchin(battler, opposingBattler, &bestPlayerMove), battler, isFreeSwitch);
        hitsToKOAIPriority = GetSwitchinHitsToKO(GetMaxPriorityDamagePlayerCouldDealToSwitchin(battler, opposingBattler, &bestPlayerPriorityMove), battler, isFreeSwitch);

        // Check through current mon's moves
        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            // Check that move has PP remaining before running calcs
            if (gBattleMons[battler].pp[j] < 1)
                continue;
            
            aiMove = gBattleMons[battler].moves[j];
            damageDealt = AI_GetDamage(battler, opposingBattler, j, AI_ATTACKING_IN_SWITCHIN_CALC, AI_DATA);
            hitsToKOPlayer = GetNoOfHitsToKOBattler(battler, opposingBattler, j, AI_ATTACKING_IN_SWITCHIN_CALC, CONSIDER_ENDURE);
            gBattlerPartyIndexes[battler] = storeCurrBattlerPartyIndex; // Rage Fist fix
            
            // Offensive switchin decisions are based on which whether switchin moves first and whether it can win a 1v1
            isSwitchinFirst = AI_IsFaster(battler, opposingBattler, aiMove, bestPlayerMove, CONSIDER_PRIORITY);
            isSwitchinFirstPriority = AI_IsFaster(battler, opposingBattler, aiMove, bestPlayerPriorityMove, CONSIDER_PRIORITY);
            canSwitchinWin1v1 = CanSwitchinWin1v1(hitsToKOAI, hitsToKOPlayer, isSwitchinFirst, isFreeSwitch) && CanSwitchinWin1v1(hitsToKOAIPriority, hitsToKOPlayer, isSwitchinFirstPriority, isFreeSwitch); // AI must successfully 1v1 with and without priority to be considered a good option

            // Check for Baton Pass; hitsToKO requirements mean mon can boost and BP without dying whether it's slower or not
            if (aiMove == MOVE_BATON_PASS)
            {
                if ((isSwitchinFirst && hitsToKOAI > 1) || hitsToKOAI > 2) // Need to take an extra hit if slower
                    bits |= 1u << i;
            }

            // Track max hits to KO and set defensive mon
            if (hitsToKOAI > maxHitsToKO && (canSwitchinWin1v1 || AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_STALL))
            {
                maxHitsToKO = hitsToKOAI;
                if(maxHitsToKO > defensiveMonHitKOThreshold)
                    defensiveMonId = i;
            }

            if (canSwitchinWin1v1)
                generic1v1MonId = i;

            // Check for mon with resistance and super effective move for best type matchup mon with effective move
            if (aiMove != MOVE_NONE && gMovesInfo[aiMove].power != 0)
            {

                // Ignore self-destruction moves to prevent silly bad odds chains
                if (gMovesInfo[aiMove].effect == EFFECT_EXPLOSION)
                    continue;

                // Check that mon isn't one shot and set best damage mon
                if (damageDealt > maxDamageDealt)
                {
                    if(isSwitchinFirst || hitsToKOAI > 1) // This is a "default", we have uniquely low standards
                    {
                        maxDamageDealt = damageDealt;
                        damageMonId = i;
                    }
                }

                // Check if current mon can revenge kill in some capacity
                // If AI mon can one shot
                if (damageDealt > playerMonHP)
                {
                    if (canSwitchinWin1v1)
                    {
                        if (isSwitchinFirst)
                            revengeKillerId = i;
                        else
                            slowRevengeKillerId = i;
                    }
                }

                // If AI mon can two shot
                if (damageDealt > playerMonHP / 2)
                {
                    if (canSwitchinWin1v1)
                    {
                        if (isSwitchinFirst)
                            fastThreatenId = i;
                        else
                            slowThreatenId = i;
                    }
                }

                // If mon can trap
                if ((AI_CanSwitchinAbilityTrapOpponent(AI_DATA->abilities[battler], opposingBattler)
                    || (AI_CanSwitchinAbilityTrapOpponent(AI_DATA->abilities[opposingBattler], opposingBattler) && AI_DATA->abilities[battler] == ABILITY_TRACE))
                    && canSwitchinWin1v1)
                    trapperId = i;
            }
        }
    }

    batonPassId = GetRandomSwitchinWithBatonPass(aliveCount, bits, firstId, lastId, i);
    AI_DATA->switchInCalc = FALSE;

    FreeRestoreAiLogicData(savedAiLogicData);
    FreeRestoreBattleMons(savedBattleMons);
    SetBattlerAiData(battler, AI_DATA);

    // Different switching priorities depending on switching mid battle vs switching after a KO or slow switch
    if (isFreeSwitch)
    {
        // Return Trapper > Revenge Killer > Type Matchup > Baton Pass > Generic mon that can 1v1 > Best Damage
        if (trapperId != PARTY_SIZE)                    return trapperId;
        else if (revengeKillerId != PARTY_SIZE)         return revengeKillerId;
        else if (slowRevengeKillerId != PARTY_SIZE)     return slowRevengeKillerId;
        else if (fastThreatenId != PARTY_SIZE)          return fastThreatenId;
        else if (slowThreatenId != PARTY_SIZE)          return slowThreatenId;
        else if (batonPassId != PARTY_SIZE)             return batonPassId;
        else if (generic1v1MonId != PARTY_SIZE)         return generic1v1MonId;
        else if (damageMonId != PARTY_SIZE)             return damageMonId;
    }
    else
    {
        // Return Trapper > Type Matchup > Best Defensive > Baton Pass > Generic mon that can 1v1
        if (trapperId != PARTY_SIZE)                    return trapperId;
        else if (defensiveMonId != PARTY_SIZE)          return defensiveMonId;
        else if (batonPassId != PARTY_SIZE)             return batonPassId;
        else if (generic1v1MonId != PARTY_SIZE)         return generic1v1MonId;
    }
    // If ace mon is the last available Pokemon and U-Turn/Volt Switch or Eject Pack/Button was used - switch to the mon.
    if (aceMonId != PARTY_SIZE && CountUsablePartyMons(battler) <= aceMonCount
     && (IsSwitchOutEffect(gMovesInfo[gCurrentMove].effect) || AI_DATA->ejectButtonSwitch || AI_DATA->ejectPackSwitch))
        return aceMonId;

    return PARTY_SIZE;
}

static u32 GetNextMonInParty(struct Pokemon *party, int firstId, int lastId, u32 battlerIn1, u32 battlerIn2)
{
    u32 i;
    // Iterate through mons
    for (i = firstId; i < lastId; i++)
    {
        // Check mon validity
        if (!IsValidForBattle(&party[i])
            || gBattlerPartyIndexes[battlerIn1] == i
            || gBattlerPartyIndexes[battlerIn2] == i
            || i == gBattleStruct->monToSwitchIntoId[battlerIn1]
            || i == gBattleStruct->monToSwitchIntoId[battlerIn2])
        {
            continue;
        }
        return i;
    }
    return PARTY_SIZE;
}

static u32 GetSwitchinCandidate(u32 switchinCategory, u32 battler, int firstId, int lastId, enum SwitchType switchType)
{
    if (switchinCategory == 0)
        return PARTY_SIZE;

    // Pick last eligible mon in party order
    for (s32 monIndex = (lastId-1); monIndex >= firstId; monIndex--)
    {
        if (switchinCategory & (1 << monIndex))
            return monIndex;
    }

    return PARTY_SIZE;
}

static u32 GetValidSwitchinCandidate(u32 validMonIds, u32 battler, u32 firstId, u32 lastId, enum SwitchType switchType)
{
    if (validMonIds == 0)
        return PARTY_SIZE;

    // Pick last valid mon in party order
    for (s32 monIndex = (lastId-1); monIndex > firstId; monIndex--)
    {
        if (validMonIds & (1 << monIndex))
            return monIndex;
    }

    return PARTY_SIZE;
}

static u32 GetBestMonVanilla(struct Pokemon *party, int firstId, int lastId, u32 battler, u32 opposingBattler, u32 battlerIn1, u32 battlerIn2, enum SwitchType switchType)
{
    s32 i, j, aceMonCount = 0;
    u32 validMonIds = 0, batonPassIds = 0, typeMatchupIds = 0, bestDamageId = PARTY_SIZE, aceMonId = PARTY_SIZE;
    u32 bestResist = UQ_4_12(2.0), typeMatchup, bestDamage = 0;

    // Save existing battler data
    struct AiLogicData *savedAiLogicData = AllocSaveAiLogicData();
    struct BattlePokemon *savedBattleMons = AllocSaveBattleMons();

    // Get invalid slots ids.
    for (i = firstId; i < lastId; i++)
    {
        if (!IsValidForBattle(&party[i])
            || gBattlerPartyIndexes[battlerIn1] == i
            || gBattlerPartyIndexes[battlerIn2] == i
            || i == gBattleStruct->monToSwitchIntoId[battlerIn1]
            || i == gBattleStruct->monToSwitchIntoId[battlerIn2])
        {
            continue;
        }
        else if (IsAceMon(battler, i)) // Save Ace Pokemon for last.
        {
            aceMonId = i;
            aceMonCount++;
        }
        else
        {
            validMonIds |= (1u << i);
        }
    }

    // Iterate through mons
    for (i = firstId; i < lastId; i++)
    {
        // Check mon validity
        if (!IsValidForBattle(&party[i])
            || gBattlerPartyIndexes[battlerIn1] == i
            || gBattlerPartyIndexes[battlerIn2] == i
            || i == gBattleStruct->monToSwitchIntoId[battlerIn1]
            || i == gBattleStruct->monToSwitchIntoId[battlerIn2])
        {
            continue;
        }
        // Save Ace Pokemon for last
        else if (IsAceMon(battler, i))
        {
            aceMonId = i;
            aceMonCount++;
            continue;
        }
        else
        {
            validMonIds |= (1u << i);
        }
        InitializeSwitchinCandidate(battler, &party[i]);

        // While not really invalid per se, not really wise to switch into this mon
        if (AI_DATA->abilities[battler] == ABILITY_TRUANT && IsTruantMonVulnerable(battler, opposingBattler))
            continue;

        typeMatchup = GetBattlerTypeMatchup(opposingBattler, battler);

        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            // Check that move has PP remaining before running calcs
            if (gBattleMons[battler].pp[j] < 1)
                continue;

            u32 aiMove = gBattleMons[battler].moves[j];

            // Baton Pass
            if (gMovesInfo[aiMove].effect == EFFECT_BATON_PASS)
            {
                batonPassIds |= (1u << i);
            }

            // Type Matchup
            if (typeMatchup < bestResist && AI_DATA->effectiveness[battler][opposingBattler][j] >= UQ_4_12(2.0))
            {
                bestResist = typeMatchup;
                typeMatchupIds |= (1u << i);
            }

            // Best damage
            if (aiMove != MOVE_NONE && gMovesInfo[aiMove].category != DAMAGE_CATEGORY_STATUS)
            {
                u32 aiDmg = AI_GetDamage(battler, opposingBattler, j, AI_ATTACKING_IN_SWITCHIN_CALC, AI_DATA);
                if (aiDmg > bestDamage)
                {
                    bestDamage = aiDmg;
                    bestDamageId = i;
                }
            }
        }
    }

    // Restore battler data
    FreeRestoreAiLogicData(savedAiLogicData);
    FreeRestoreBattleMons(savedBattleMons);
    SetBattlerAiData(battler, AI_DATA);

    // Baton Pass > Type Matchup > Best Damage
    if (batonPassIds != 0)                  return GetSwitchinCandidate(batonPassIds, battler, firstId, lastId, switchType);
    else if (typeMatchupIds != 0)           return GetSwitchinCandidate(typeMatchupIds, battler, firstId, lastId, switchType);
    else if (bestDamageId != PARTY_SIZE)    return bestDamageId;

    // Not required to switch here and no good candidates, bail
    if (switchType == SWITCH_MID_BATTLE)
        return PARTY_SIZE;

    // Fallback
    if (validMonIds != 0)
        return GetValidSwitchinCandidate(validMonIds, battler, firstId, lastId, switchType);

    if (aceMonId != PARTY_SIZE && CountUsablePartyMons(battler) <= aceMonCount)
        return aceMonId;

    return PARTY_SIZE;
}

u32 GetMostSuitableMonToSwitchInto(u32 battler, enum SwitchType switchType)
{
    u32 opposingBattler = 0;
    u32 bestMonId = PARTY_SIZE;
    u32 battlerIn1 = 0, battlerIn2 = 0;
    s32 firstId = 0;
    s32 lastId = 0; // + 1
    struct Pokemon *party;

    if (*(gBattleStruct->monToSwitchIntoId + battler) != PARTY_SIZE)
        return *(gBattleStruct->monToSwitchIntoId + battler);
    if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
        return gBattlerPartyIndexes[battler] + 1;

    if (IsDoubleBattle())
    {
        battlerIn1 = battler;
        if (gAbsentBattlerFlags & (1u << GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battler)))))
            battlerIn2 = battler;
        else
            battlerIn2 = GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battler)));

        opposingBattler = BATTLE_OPPOSITE(battlerIn1);
        if (gAbsentBattlerFlags & (1u << opposingBattler))
            opposingBattler ^= BIT_FLANK;
    }
    else
    {
        opposingBattler = GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));
        battlerIn1 = battler;
        battlerIn2 = battler;
    }

    GetAIPartyIndexes(battler, &firstId, &lastId);
    party = GetBattlerParty(battler);

    if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SEQUENCE_SWITCHING)
    {
        bestMonId = GetNextMonInParty(party, firstId, lastId, battlerIn1, battlerIn2);
        return bestMonId;
    }

    // Only use better mon selection if AI_FLAG_SMART_MON_CHOICES is set for the trainer.
    if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_MON_CHOICES && !IsDoubleBattle()) // Double Battles aren't included in AI_FLAG_SMART_MON_CHOICE. Defaults to regular switch in logic
    {
        bestMonId = GetBestMonIntegrated(party, firstId, lastId, battler, opposingBattler, battlerIn1, battlerIn2, switchType);
        return bestMonId;
    }

    // This all handled by the GetBestMonIntegrated function if the AI_FLAG_SMART_MON_CHOICES flag is set
    else
    {
        bestMonId = GetBestMonVanilla(party, firstId, lastId, battler, opposingBattler, battlerIn1, battlerIn2, switchType);
        return bestMonId;
    }
}

static bool32 AiExpectsToFaintPlayer(u32 battler)
{
    u8 target = gBattleStruct->aiChosenTarget[battler];

    if (gBattleStruct->aiMoveOrAction[battler] > 3)
        return FALSE; // AI not planning to use move

    if (GetBattlerSide(target) != GetBattlerSide(battler)
      && CanIndexMoveFaintTarget(battler, target, gBattleStruct->aiMoveOrAction[battler], AI_ATTACKING_ON_FIELD)
      && AI_IsFaster(battler, target, GetAIChosenMove(battler), AI_DATA->lastUsedMove[target], CONSIDER_PRIORITY))
    {
        // We expect to faint the target and move first -> dont use an item
        return TRUE;
    }

    return FALSE;
}

static bool32 ShouldUseItem(u32 battler)
{
    struct Pokemon *party;
    s32 i;
    u8 validMons = 0;
    bool32 shouldUse = FALSE;

    if (IsAiVsAiBattle())
        return FALSE;

    // If teaming up with player and Pokemon is on the right, or Pokemon is currently held by Sky Drop
    if ((gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER && GetBattlerPosition(battler) == B_POSITION_PLAYER_RIGHT)
       || gStatuses3[battler] & STATUS3_SKY_DROPPED)
        return FALSE;

    if (gStatuses3[battler] & STATUS3_EMBARGO)
        return FALSE;

    if (AiExpectsToFaintPlayer(battler))
        return FALSE;

    party = GetBattlerParty(battler);

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (IsValidForBattle(&party[i]))
        {
            validMons++;
        }
    }

    for (i = 0; i < MAX_TRAINER_ITEMS; i++)
    {
        u16 item;
        const u8 *itemEffects;
        u8 battlerSide;

        item = gBattleResources->battleHistory->trainerItems[i];
        if (item == ITEM_NONE)
            continue;
        itemEffects = ItemId_GetEffect(item);
        if (itemEffects == NULL)
            continue;

        switch (ItemId_GetBattleUsage(item))
        {
        case EFFECT_ITEM_HEAL_AND_CURE_STATUS:
            shouldUse = AI_ShouldHeal(battler, 0);
            break;
        case EFFECT_ITEM_RESTORE_HP:
            shouldUse = AI_ShouldHeal(battler, itemEffects[GetItemEffectParamOffset(battler, item, 4, ITEM4_HEAL_HP)]);
            break;
        case EFFECT_ITEM_CURE_STATUS:
            if (itemEffects[3] & ITEM3_SLEEP && gBattleMons[battler].status1 & STATUS1_SLEEP)
                shouldUse = TRUE;
            if (itemEffects[3] & ITEM3_POISON && (gBattleMons[battler].status1 & STATUS1_POISON
                                               || gBattleMons[battler].status1 & STATUS1_TOXIC_POISON))
                shouldUse = TRUE;
            if (itemEffects[3] & ITEM3_BURN && gBattleMons[battler].status1 & STATUS1_BURN)
                shouldUse = TRUE;
            if (itemEffects[3] & ITEM3_FREEZE && (gBattleMons[battler].status1 & STATUS1_FREEZE || gBattleMons[battler].status1 & STATUS1_FROSTBITE))
                shouldUse = TRUE;
            if (itemEffects[3] & ITEM3_PARALYSIS && gBattleMons[battler].status1 & STATUS1_PARALYSIS)
                shouldUse = TRUE;
            if (itemEffects[3] & ITEM3_CONFUSION && gBattleMons[battler].status2 & STATUS2_CONFUSION)
                shouldUse = TRUE;
            break;
        case EFFECT_ITEM_INCREASE_STAT:
        case EFFECT_ITEM_INCREASE_ALL_STATS:
            if (!gDisableStructs[battler].isFirstTurn
                || AI_OpponentCanFaintAiWithMod(battler, 0))
                break;
            shouldUse = TRUE;
            break;
        case EFFECT_ITEM_SET_FOCUS_ENERGY:
            if (!gDisableStructs[battler].isFirstTurn
                || gBattleMons[battler].status2 & STATUS2_FOCUS_ENERGY_ANY
                || AI_OpponentCanFaintAiWithMod(battler, 0))
                break;
            shouldUse = TRUE;
            break;
        case EFFECT_ITEM_SET_MIST:
            battlerSide = GetBattlerSide(battler);
            if (gDisableStructs[battler].isFirstTurn && gSideTimers[battlerSide].mistTimer == 0)
                shouldUse = TRUE;
            break;
        case EFFECT_ITEM_REVIVE:
            gBattleStruct->itemPartyIndex[battler] = GetFirstFaintedPartyIndex(battler);
            if (gBattleStruct->itemPartyIndex[battler] != PARTY_SIZE) // Revive if possible.
                shouldUse = TRUE;
            break;
        case EFFECT_ITEM_USE_POKE_FLUTE:
            if (gBattleMons[battler].status1 & STATUS1_SLEEP)
                shouldUse = TRUE;
            break;
        default:
            return FALSE;
        }
        if (shouldUse)
        {
            // Set selected party ID to current battler if none chosen.
            if (gBattleStruct->itemPartyIndex[battler] == PARTY_SIZE)
                gBattleStruct->itemPartyIndex[battler] = gBattlerPartyIndexes[battler];
            BtlController_EmitTwoReturnValues(battler, BUFFER_B, B_ACTION_USE_ITEM, 0);
            gBattleStruct->chosenItem[battler] = item;
            gBattleResources->battleHistory->trainerItems[i] = 0;
            return shouldUse;
        }
    }

    return FALSE;
}

static bool32 AI_ShouldHeal(u32 battler, u32 healAmount)
{
    bool32 shouldHeal = FALSE;

    if (gBattleMons[battler].hp < gBattleMons[battler].maxHP / 4
     || gBattleMons[battler].hp == 0
     || (healAmount != 0 && gBattleMons[battler].maxHP - gBattleMons[battler].hp > healAmount))
    {
        // We have low enough HP to consider healing
        shouldHeal = !AI_OpponentCanFaintAiWithMod(battler, healAmount); // if target can kill us even after we heal, why bother
    }

    return shouldHeal;
}

static bool32 AI_OpponentCanFaintAiWithMod(u32 battler, u32 healAmount)
{
    u32 i;
    // Check special cases to NOT heal
    for (i = 0; i < gBattlersCount; i++)
    {
        if (GetBattlerSide(i) == B_SIDE_PLAYER && CanTargetFaintAiWithMod(i, battler, healAmount, 0))
        {
            // Target is expected to faint us
            return TRUE;
        }
    }
    return FALSE;
}
