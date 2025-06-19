#include "global.h"
#include "battle.h"
#include "battle_gfx_sfx_util.h"
#include "berry.h"
#include "data.h"
#include "daycare.h"
#include "decompress.h"
#include "event_data.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "link_rfu.h"
#include "main.h"
#include "menu.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "pokedex.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"
#include "random.h"
#include "randomizer.h"
#include "script.h"
#include "sprite.h"
#include "string_util.h"
#include "tv.h"
#include "wild_encounter.h"
#include "constants/abilities.h"
#include "constants/items.h"
#include "constants/battle_frontier.h"

static void CB2_ReturnFromChooseHalfParty(void);
static void CB2_ReturnFromChooseBattleFrontierParty(void);
static u16 PickWaterStarterEgg(void);
static u16 PickGrassStarterEgg(void);
static u16 PickFireStarterEgg(void);
static u16 PickOldaleEgg(void);
static u16 PickPseudoEgg(void);
static u16 PickSingleStageEgg(void);

static void HealPlayerBoxes(void);

void HealPlayerParty(void)
{
    u32 i;
    for (i = 0; i < gPlayerPartyCount; i++)
        HealPokemon(&gPlayerParty[i]);
    if (OW_PC_HEAL >= GEN_8)
        HealPlayerBoxes();

    // Recharge Tera Orb, if possible.
    if (B_FLAG_TERA_ORB_CHARGED != 0 && CheckBagHasItem(ITEM_TERA_ORB, 1))
        FlagSet(B_FLAG_TERA_ORB_CHARGED);
}

static void HealPlayerBoxes(void)
{
    int boxId, boxPosition;
    struct BoxPokemon *boxMon;

    for (boxId = 0; boxId < TOTAL_BOXES_COUNT; boxId++)
    {
        for (boxPosition = 0; boxPosition < IN_BOX_COUNT; boxPosition++)
        {
            boxMon = &gPokemonStoragePtr->boxes[boxId][boxPosition];
            if (GetBoxMonData(boxMon, MON_DATA_SANITY_HAS_SPECIES))
                HealBoxPokemon(boxMon);
        }
    }
}

void HealPlayerPartyNonDead(void)
{
    u32 i;
    for (i = 0; i < gPlayerPartyCount; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_HP) != 0)
            HealPokemon(&gPlayerParty[i]);
    }
        
    if (OW_PC_HEAL >= GEN_8)
        HealPlayerBoxes();

    // Recharge Tera Orb, if possible.
    if (B_FLAG_TERA_ORB_CHARGED != 0 && CheckBagHasItem(ITEM_TERA_ORB, 1))
        FlagSet(B_FLAG_TERA_ORB_CHARGED);
}

u8 ScriptGiveEgg(u16 species)
{
    struct Pokemon mon;
    u8 isEgg;
    bool8 fromHotSprings = (species == SPECIES_EEVEE);

    if(species == SPECIES_SQUIRTLE)
    {
        species = PickWaterStarterEgg();
    }
    else if(species == SPECIES_BULBASAUR)
    {
        species = PickGrassStarterEgg();
    }
    else if(species == SPECIES_CHARMANDER)
    {
        species = PickFireStarterEgg();
    }
    else if(species == SPECIES_SENTRET)
    {
        species = PickOldaleEgg();
    }
    else if(species == SPECIES_DRATINI)
    {
        species = PickPseudoEgg();
    }
    else if(species == SPECIES_KLAWF)
    {
        species = PickSingleStageEgg();
    }

    #if RANDOMIZER_AVAILABLE == TRUE
        u16 i = 0;
        for(i = 0; i < MY_EGG_MON_COUNT; i++)
        {
            if(gEggMonTable[i] == species)
                break;
        }
        species = RandomizeEggMon(i, gEggMonTable);
    #endif

    CreateEgg(&mon, species, fromHotSprings);
    isEgg = TRUE;
    SetMonData(&mon, MON_DATA_IS_EGG, &isEgg);

    return GiveMonToPlayer(&mon);
}

static u16 PickWaterStarterEgg(void)
{
    u16 pokes[9];
    u16 rand = Random() % 9;
    pokes[0] = SPECIES_SQUIRTLE;
    pokes[1] = SPECIES_TOTODILE;
    pokes[2] = SPECIES_MUDKIP;
    pokes[3] = SPECIES_PIPLUP;
    pokes[4] = SPECIES_OSHAWOTT;
    pokes[5] = SPECIES_FROAKIE;
    pokes[6] = SPECIES_POPPLIO;
    pokes[7] = SPECIES_SOBBLE;
    pokes[8] = SPECIES_QUAXLY;
    return pokes[rand];
}

static u16 PickGrassStarterEgg(void)
{
    u16 pokes[9];
    u16 rand = Random() % 9;
    pokes[0] = SPECIES_BULBASAUR;
    pokes[1] = SPECIES_CHIKORITA;
    pokes[2] = SPECIES_TREECKO;
    pokes[3] = SPECIES_TURTWIG;
    pokes[4] = SPECIES_SNIVY;
    pokes[5] = SPECIES_CHESPIN;
    pokes[6] = SPECIES_ROWLET;
    pokes[7] = SPECIES_GROOKEY;
    pokes[8] = SPECIES_SPRIGATITO;
    return pokes[rand];
}

static u16 PickFireStarterEgg(void)
{
    u16 pokes[9];
    u16 rand = Random() % 9;
    pokes[0] = SPECIES_CHARMANDER;
    pokes[1] = SPECIES_CYNDAQUIL;
    pokes[2] = SPECIES_TORCHIC;
    pokes[3] = SPECIES_CHIMCHAR;
    pokes[4] = SPECIES_TEPIG;
    pokes[5] = SPECIES_FENNEKIN;
    pokes[6] = SPECIES_LITTEN;
    pokes[7] = SPECIES_SCORBUNNY;
    pokes[8] = SPECIES_FUECOCO;
    return pokes[rand];
}

static u16 PickOldaleEgg(void)
{
    u16 pokes[10];
    u16 rand = Random() % 10;
    pokes[0] = SPECIES_SENTRET;
    pokes[1] = SPECIES_JIGGLYPUFF;
    pokes[2] = SPECIES_KRICKETOT;
    pokes[3] = SPECIES_CUBONE;
    pokes[4] = SPECIES_PANCHAM;
    pokes[5] = SPECIES_YAMPER;
    pokes[6] = SPECIES_ROCKRUFF;
    pokes[7] = SPECIES_SNORUNT;
    pokes[8] = SPECIES_SPOINK;
    pokes[9] = SPECIES_VAROOM;
    return pokes[rand];
}

static u16 PickPseudoEgg(void)
{
    u16 pokes[10];
    u16 rand = Random() % 10;
    pokes[0] = SPECIES_DRATINI;
    pokes[1] = SPECIES_LARVITAR;
    pokes[2] = SPECIES_BAGON;
    pokes[3] = SPECIES_BELDUM;
    pokes[4] = SPECIES_GIBLE;
    pokes[5] = SPECIES_DEINO;
    pokes[6] = SPECIES_GOOMY;
    pokes[7] = SPECIES_JANGMO_O;
    pokes[8] = SPECIES_DREEPY;
    pokes[9] = SPECIES_FRIGIBAX;
    return pokes[rand];
}

static u16 PickSingleStageEgg(void)
{
    u16 pokes[9];
    u16 rand = Random() % 9;
    pokes[0] = SPECIES_TAUROS;
    pokes[1] = SPECIES_DELIBIRD;
    pokes[2] = SPECIES_TROPIUS;
    pokes[3] = SPECIES_SPIRITOMB;
    pokes[4] = SPECIES_HEATMOR;
    pokes[5] = SPECIES_DEDENNE;
    pokes[6] = SPECIES_BRUXISH;
    pokes[7] = SPECIES_FALINKS;
    pokes[8] = SPECIES_KLAWF;
    return pokes[rand];
}

void HasEnoughMonsForDoubleBattle(void)
{
    switch (GetMonsStateToDoubles())
    {
    case PLAYER_HAS_TWO_USABLE_MONS:
        gSpecialVar_Result = PLAYER_HAS_TWO_USABLE_MONS;
        break;
    case PLAYER_HAS_ONE_MON:
        gSpecialVar_Result = PLAYER_HAS_ONE_MON;
        break;
    case PLAYER_HAS_ONE_USABLE_MON:
        gSpecialVar_Result = PLAYER_HAS_ONE_USABLE_MON;
        break;
    }
}

static bool8 CheckPartyMonHasHeldItem(u16 item)
{
    int i;

    for(i = 0; i < PARTY_SIZE; i++)
    {
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG);
        if (species != SPECIES_NONE && species != SPECIES_EGG && GetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM) == item)
            return TRUE;
    }
    return FALSE;
}

bool8 DoesPartyHaveEnigmaBerry(void)
{
    bool8 hasItem = CheckPartyMonHasHeldItem(ITEM_ENIGMA_BERRY_E_READER);
    if (hasItem == TRUE)
        GetBerryNameByBerryType(ItemIdToBerryType(ITEM_ENIGMA_BERRY_E_READER), gStringVar1);

    return hasItem;
}

void CreateScriptedWildMon(u16 species, u8 level, u16 item)
{
    u8 heldItem[2];
    u8 ivToMakeMon = USE_RANDOM_IVS;
    if(FlagGet(FLAG_MIN_GRINDING_MODE))
        ivToMakeMon = MAX_PER_STAT_IVS;

    ZeroEnemyPartyMons();
    if (OW_SYNCHRONIZE_NATURE > GEN_3)
        CreateMonWithNature(&gEnemyParty[0], species, level, ivToMakeMon, PickWildMonNature());
    else
        CreateMon(&gEnemyParty[0], species, level, ivToMakeMon, 0, 0, OT_ID_PLAYER_ID, 0);
    if (item)
    {
        heldItem[0] = item;
        heldItem[1] = item >> 8;
        SetMonData(&gEnemyParty[0], MON_DATA_HELD_ITEM, heldItem);
    }
}
void CreateScriptedDoubleWildMon(u16 species1, u8 level1, u16 item1, u16 species2, u8 level2, u16 item2)
{
    u8 heldItem1[2];
    u8 heldItem2[2];
    u8 ivToMakeMon = USE_RANDOM_IVS;
    if(FlagGet(FLAG_MIN_GRINDING_MODE))
        ivToMakeMon = MAX_PER_STAT_IVS;

    ZeroEnemyPartyMons();

    if (OW_SYNCHRONIZE_NATURE > GEN_3)
        CreateMonWithNature(&gEnemyParty[0], species1, level1, ivToMakeMon, PickWildMonNature());
    else
        CreateMon(&gEnemyParty[0], species1, level1, ivToMakeMon, 0, 0, OT_ID_PLAYER_ID, 0);
    if (item1)
    {
        heldItem1[0] = item1;
        heldItem1[1] = item1 >> 8;
        SetMonData(&gEnemyParty[0], MON_DATA_HELD_ITEM, heldItem1);
    }

    if (OW_SYNCHRONIZE_NATURE > GEN_3)
        CreateMonWithNature(&gEnemyParty[1], species2, level2, ivToMakeMon, PickWildMonNature());
    else
        CreateMon(&gEnemyParty[1], species2, level2, ivToMakeMon, 0, 0, OT_ID_PLAYER_ID, 0);
    if (item2)
    {
        heldItem2[0] = item2;
        heldItem2[1] = item2 >> 8;
        SetMonData(&gEnemyParty[1], MON_DATA_HELD_ITEM, heldItem2);
    }
}

void ScriptSetMonMoveSlot(u8 monIndex, u16 move, u8 slot)
{
// Allows monIndex to go out of bounds of gPlayerParty. Doesn't occur in vanilla
#ifdef BUGFIX
    if (monIndex >= PARTY_SIZE)
#else
    if (monIndex > PARTY_SIZE)
#endif
        monIndex = gPlayerPartyCount - 1;

    SetMonMoveSlot(&gPlayerParty[monIndex], move, slot);
}

// Note: When control returns to the event script, gSpecialVar_Result will be
// TRUE if the party selection was successful.
void ChooseHalfPartyForBattle(void)
{
    gMain.savedCallback = CB2_ReturnFromChooseHalfParty;
    VarSet(VAR_FRONTIER_FACILITY, FACILITY_MULTI_OR_EREADER);
    InitChooseHalfPartyForBattle(0);
}

static void CB2_ReturnFromChooseHalfParty(void)
{
    switch (gSelectedOrderFromParty[0])
    {
    case 0:
        gSpecialVar_Result = FALSE;
        break;
    default:
        gSpecialVar_Result = TRUE;
        break;
    }

    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void ChoosePartyForBattleFrontier(void)
{
    gMain.savedCallback = CB2_ReturnFromChooseBattleFrontierParty;
    InitChooseHalfPartyForBattle(gSpecialVar_0x8004 + 1);
}

static void CB2_ReturnFromChooseBattleFrontierParty(void)
{
    switch (gSelectedOrderFromParty[0])
    {
    case 0:
        gSpecialVar_Result = FALSE;
        break;
    default:
        gSpecialVar_Result = TRUE;
        break;
    }

    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void ReducePlayerPartyToSelectedMons(void)
{
    struct Pokemon party[MAX_FRONTIER_PARTY_SIZE];
    int i;

    CpuFill32(0, party, sizeof party);

    // copy the selected Pokémon according to the order.
    for (i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
        if (gSelectedOrderFromParty[i]) // as long as the order keeps going (did the player select 1 mon? 2? 3?), do not stop
            party[i] = gPlayerParty[gSelectedOrderFromParty[i] - 1]; // index is 0 based, not literal

    CpuFill32(0, gPlayerParty, sizeof gPlayerParty);

    // overwrite the first 4 with the order copied to.
    for (i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
        gPlayerParty[i] = party[i];

    CalculatePlayerPartyCount();
}

void CanHyperTrain(struct ScriptContext *ctx)
{
    u32 stat = ScriptReadByte(ctx);
    u32 partyIndex = VarGet(ScriptReadHalfword(ctx));
    if (stat < NUM_STATS
     && partyIndex < PARTY_SIZE
     && !GetMonData(&gPlayerParty[partyIndex], MON_DATA_HYPER_TRAINED_HP + stat)
     && GetMonData(&gPlayerParty[partyIndex], MON_DATA_HP_IV + stat) < MAX_PER_STAT_IVS)
    {
        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
    }
}

void HyperTrain(struct ScriptContext *ctx)
{
    u32 stat = ScriptReadByte(ctx);
    u32 partyIndex = VarGet(ScriptReadHalfword(ctx));
    if (stat < NUM_STATS && partyIndex < PARTY_SIZE)
    {
        bool32 data = TRUE;
        SetMonData(&gPlayerParty[partyIndex], MON_DATA_HYPER_TRAINED_HP + stat, &data);
        CalculateMonStats(&gPlayerParty[partyIndex]);
    }
}

void HasGigantamaxFactor(struct ScriptContext *ctx)
{
    u32 partyIndex = VarGet(ScriptReadHalfword(ctx));
    if (partyIndex < PARTY_SIZE)
        gSpecialVar_Result = GetMonData(&gPlayerParty[partyIndex], MON_DATA_GIGANTAMAX_FACTOR);
    else
        gSpecialVar_Result = FALSE;
}

void ToggleGigantamaxFactor(struct ScriptContext *ctx)
{
    u32 partyIndex = VarGet(ScriptReadHalfword(ctx));

    gSpecialVar_Result = FALSE;

    if (partyIndex < PARTY_SIZE)
    {
        bool32 gigantamaxFactor;

        if (gSpeciesInfo[SanitizeSpeciesId(GetMonData(&gPlayerParty[partyIndex], MON_DATA_SPECIES))].isMythical)
            return;

        gigantamaxFactor = GetMonData(&gPlayerParty[partyIndex], MON_DATA_GIGANTAMAX_FACTOR);
        gigantamaxFactor = !gigantamaxFactor;
        SetMonData(&gPlayerParty[partyIndex], MON_DATA_GIGANTAMAX_FACTOR, &gigantamaxFactor);
        gSpecialVar_Result = TRUE;
    }
}

void CheckTeraType(struct ScriptContext *ctx)
{
    u32 partyIndex = VarGet(ScriptReadHalfword(ctx));

    gSpecialVar_Result = TYPE_NONE;

    if (partyIndex < PARTY_SIZE)
        gSpecialVar_Result = GetMonData(&gPlayerParty[partyIndex], MON_DATA_TERA_TYPE);
}

void SetTeraType(struct ScriptContext *ctx)
{
    u32 type = ScriptReadByte(ctx);
    u32 partyIndex = VarGet(ScriptReadHalfword(ctx));

    if (type < NUMBER_OF_MON_TYPES && partyIndex < PARTY_SIZE)
        SetMonData(&gPlayerParty[partyIndex], MON_DATA_TERA_TYPE, &type);
}

/* Creates a Pokemon via script
 * if side/slot are assigned, it will create the mon at the assigned party location
 * if slot == PARTY_SIZE, it will give the mon to first available party or storage slot
 */
static u32 ScriptGiveMonParameterized(u8 side, u8 slot, u16 species, u8 level, u16 item, enum PokeBall ball, u8 nature, u8 abilityNum, u8 gender, u8 *evs, u8 *ivs, u16 *moves, bool8 isShiny, bool8 ggMaxFactor, u8 teraType)
{
    u16 nationalDexNum;
    int sentToPc;
    struct Pokemon mon;
    u32 i;
    u8 genderRatio = gSpeciesInfo[species].genderRatio;
    u16 targetSpecies;
    u16 evToUseInCalc = MAX_PER_STAT_EVS;
    u8 ivToMakeMon = USE_RANDOM_IVS;
        
    if(FlagGet(FLAG_MIN_GRINDING_MODE))
    {
        evToUseInCalc = 0;
        ivToMakeMon = MAX_PER_STAT_IVS;
    }
    // check whether to use a specific nature or a random one
    if (nature >= NUM_NATURES)
    {
        if (OW_SYNCHRONIZE_NATURE >= GEN_6
         && (gSpeciesInfo[species].eggGroups[0] == EGG_GROUP_NO_EGGS_DISCOVERED || OW_SYNCHRONIZE_NATURE == GEN_7))
            nature = PickWildMonNature();
        else
            nature = Random() % NUM_NATURES;
    }

    // create a Pokémon with basic data
    if ((gender == MON_MALE && genderRatio != MON_FEMALE && genderRatio != MON_GENDERLESS)
     || (gender == MON_FEMALE && genderRatio != MON_MALE && genderRatio != MON_GENDERLESS)
     || (gender == MON_GENDERLESS && genderRatio == MON_GENDERLESS))
        CreateMonWithGenderNatureLetter(&mon, species, level, ivToMakeMon, gender, nature, 0);
    else
        CreateMonWithNature(&mon, species, level, ivToMakeMon, nature);

    // shininess
    // if (P_FLAG_FORCE_SHINY != 0 && FlagGet(P_FLAG_FORCE_SHINY))
    //     isShiny = TRUE;
    // else if (P_FLAG_FORCE_NO_SHINY != 0 && FlagGet(P_FLAG_FORCE_NO_SHINY))
    //     isShiny = FALSE;

    u16 randomNum = Random();
    if (!isShiny && (randomNum < 109))
    {
        isShiny = TRUE;
    }
    SetMonData(&mon, MON_DATA_IS_SHINY, &isShiny);

    // gigantamax factor
    SetMonData(&mon, MON_DATA_GIGANTAMAX_FACTOR, &ggMaxFactor);

    // tera type
    if (teraType >= NUMBER_OF_MON_TYPES)
        teraType = TYPE_NONE;
    SetMonData(&mon, MON_DATA_TERA_TYPE, &teraType);

    // EV and IV
    for (i = 0; i < NUM_STATS; i++)
    {
        // EV
        if (evs[i] <= evToUseInCalc)
            SetMonData(&mon, MON_DATA_HP_EV + i, &evs[i]);

        // IV
        if (ivs[i] <= MAX_PER_STAT_IVS)
            SetMonData(&mon, MON_DATA_HP_IV + i, &ivs[i]);
    }
    CalculateMonStats(&mon);

    // moves
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[0] == MOVE_NONE)
            break;
        if (moves[i] >= MOVES_COUNT)
            continue;
        SetMonMoveSlot(&mon, moves[i], i);
    }

    // ability
    if (abilityNum == NUM_ABILITY_PERSONALITY)
    {
        abilityNum = GetMonData(&mon, MON_DATA_PERSONALITY) & 1;
    }
    else if (abilityNum > NUM_NORMAL_ABILITY_SLOTS || GetAbilityBySpecies(species, abilityNum, FALSE) == ABILITY_NONE)
    {
        do {
            abilityNum = Random() % NUM_ABILITY_SLOTS; // includes hidden abilities
        } while (GetAbilityBySpecies(species, abilityNum, FALSE) == ABILITY_NONE);
    }
    SetMonData(&mon, MON_DATA_ABILITY_NUM, &abilityNum);

    // ball
    if (ball > POKEBALL_COUNT)
        ball = BALL_POKE;
    SetMonData(&mon, MON_DATA_POKEBALL, &ball);

    // held item
    SetMonData(&mon, MON_DATA_HELD_ITEM, &item);

    // In case a mon with a form changing item is given. Eg: SPECIES_ARCEUS_NORMAL with ITEM_SPLASH_PLATE will transform into SPECIES_ARCEUS_WATER upon gifted.
    targetSpecies = GetFormChangeTargetSpecies(&mon, FORM_CHANGE_ITEM_HOLD, 0);
    if (targetSpecies != SPECIES_NONE)
        SetMonData(&mon, MON_DATA_SPECIES, &targetSpecies);

    // assign OT name and gender
    SetMonData(&mon, MON_DATA_OT_NAME, gSaveBlock2Ptr->playerName);
    SetMonData(&mon, MON_DATA_OT_GENDER, &gSaveBlock2Ptr->playerGender);

    if (slot < PARTY_SIZE)
    {
        if (side == 0)
            CopyMon(&gPlayerParty[slot], &mon, sizeof(struct Pokemon));
        else
            CopyMon(&gEnemyParty[slot], &mon, sizeof(struct Pokemon));
        sentToPc = MON_GIVEN_TO_PARTY;
    }
    else
    {
        // find empty party slot to decide whether the Pokémon goes to the Player's party or the storage system.
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, NULL) == SPECIES_NONE)
                break;
        }
        if (i >= PARTY_SIZE)
        {
            sentToPc = CopyMonToPC(&mon);
        }
        else
        {
            sentToPc = MON_GIVEN_TO_PARTY;
            CopyMon(&gPlayerParty[i], &mon, sizeof(mon));
            gPlayerPartyCount = i + 1;
        }
    }

    if (side == 0)
    {
        // set pokédex flags
        nationalDexNum = SpeciesToNationalPokedexNum(species);
        if (sentToPc != MON_CANT_GIVE)
        {
            GetSetPokedexFlag(nationalDexNum, FLAG_SET_SEEN);
            GetSetPokedexFlag(nationalDexNum, FLAG_SET_CAUGHT);
        }
    }

    return sentToPc;
}

u32 ScriptGiveMon(u16 species, u8 level, u16 item)
{
    u8 ivToMakeMon = USE_RANDOM_IVS;
    if(FlagGet(FLAG_MIN_GRINDING_MODE))
        ivToMakeMon = MAX_PER_STAT_IVS;

    u8 evs[NUM_STATS]        = {0, 0, 0, 0, 0, 0};
    u8 ivs[NUM_STATS]        = {ivToMakeMon, ivToMakeMon, ivToMakeMon,   // We pass USE_RANDOM_IVS, which is "MAX_PER_STAT_IVS + 1" here to ensure that
                                ivToMakeMon, ivToMakeMon, ivToMakeMon};  // ScriptGiveMonParameterized won't touch the stats' IV.
    u16 moves[MAX_MON_MOVES] = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE};

    return ScriptGiveMonParameterized(0, PARTY_SIZE, species, level, item, ITEM_POKE_BALL, NUM_NATURES, NUM_ABILITY_PERSONALITY, MON_GENDERLESS, evs, ivs, moves, FALSE, FALSE, NUMBER_OF_MON_TYPES);
}

#define PARSE_FLAG(n, default_) (flags & (1 << (n))) ? VarGet(ScriptReadHalfword(ctx)) : (default_)

/* Give or create a mon to either player or opponent
 */
void ScrCmd_createmon(struct ScriptContext *ctx)
{
    u8 side           = ScriptReadByte(ctx);
    u8 slot           = ScriptReadByte(ctx);
    u16 species       = VarGet(ScriptReadHalfword(ctx));
    u8 level          = VarGet(ScriptReadHalfword(ctx));

    u32 flags         = ScriptReadWord(ctx);
    u16 item          = PARSE_FLAG(0, ITEM_NONE);
    u8 ball           = PARSE_FLAG(1, ITEM_POKE_BALL);
    u8 nature         = PARSE_FLAG(2, NUM_NATURES);
    u8 abilityNum     = PARSE_FLAG(3, NUM_ABILITY_PERSONALITY);
    u8 gender         = PARSE_FLAG(4, MON_GENDERLESS); // TODO: Find a better way to assign a random gender.
    u8 hpEv           = PARSE_FLAG(5, 0);
    u8 atkEv          = PARSE_FLAG(6, 0);
    u8 defEv          = PARSE_FLAG(7, 0);
    u8 speedEv        = PARSE_FLAG(8, 0);
    u8 spAtkEv        = PARSE_FLAG(9, 0);
    u8 spDefEv        = PARSE_FLAG(10, 0);
    u8 hpIv           = PARSE_FLAG(11, FlagGet(FLAG_MIN_GRINDING_MODE) ? MAX_PER_STAT_IVS : USE_RANDOM_IVS);
    u8 atkIv          = PARSE_FLAG(12, FlagGet(FLAG_MIN_GRINDING_MODE) ? MAX_PER_STAT_IVS : USE_RANDOM_IVS);
    u8 defIv          = PARSE_FLAG(13, FlagGet(FLAG_MIN_GRINDING_MODE) ? MAX_PER_STAT_IVS : USE_RANDOM_IVS);
    u8 speedIv        = PARSE_FLAG(14, FlagGet(FLAG_MIN_GRINDING_MODE) ? MAX_PER_STAT_IVS : USE_RANDOM_IVS);
    u8 spAtkIv        = PARSE_FLAG(15, FlagGet(FLAG_MIN_GRINDING_MODE) ? MAX_PER_STAT_IVS : USE_RANDOM_IVS);
    u8 spDefIv        = PARSE_FLAG(16, FlagGet(FLAG_MIN_GRINDING_MODE) ? MAX_PER_STAT_IVS : USE_RANDOM_IVS);
    u16 move1         = PARSE_FLAG(17, MOVE_NONE);
    u16 move2         = PARSE_FLAG(18, MOVE_NONE);
    u16 move3         = PARSE_FLAG(19, MOVE_NONE);
    u16 move4         = PARSE_FLAG(20, MOVE_NONE);
    bool8 isShiny     = PARSE_FLAG(21, FALSE);
    bool8 ggMaxFactor = PARSE_FLAG(22, FALSE);
    u8 teraType       = PARSE_FLAG(23, NUMBER_OF_MON_TYPES);

    u8 evs[NUM_STATS]        = {hpEv, atkEv, defEv, speedEv, spAtkEv, spDefEv};
    u8 ivs[NUM_STATS]        = {hpIv, atkIv, defIv, speedIv, spAtkIv, spDefIv};
    u16 moves[MAX_MON_MOVES] = {move1, move2, move3, move4};

    gSpecialVar_Result = ScriptGiveMonParameterized(side, slot, species, level, item, ball, nature, abilityNum, gender, evs, ivs, moves, isShiny, ggMaxFactor, teraType);
}


/* Give or create a mon to either player or opponent
 */
void ScrCmd_createrandommon(struct ScriptContext *ctx)
{
    
    u8 side           = ScriptReadByte(ctx);
    u8 slot           = ScriptReadByte(ctx);
    u16 species       = VarGet(ScriptReadHalfword(ctx));
    u8 level          = VarGet(ScriptReadHalfword(ctx));

    
    #if RANDOMIZER_AVAILABLE == TRUE
        u16 i = 0;
        for(i = 0; i < MY_STARTER_AND_GIFT_MON_COUNT; i++)
        {
            if(gStarterAndGiftMonTable[i] == species)
                break;
        }
        species = RandomizeStarterAndGiftMon(i, gStarterAndGiftMonTable);
    #endif

    u32 flags         = ScriptReadWord(ctx);
    u16 item          = PARSE_FLAG(0, ITEM_NONE);
    u8 ball           = PARSE_FLAG(1, ITEM_POKE_BALL);
    u8 nature         = PARSE_FLAG(2, NUM_NATURES);
    u8 abilityNum     = PARSE_FLAG(3, NUM_ABILITY_PERSONALITY);
    u8 gender         = PARSE_FLAG(4, MON_GENDERLESS); // TODO: Find a better way to assign a random gender.
    u8 hpEv           = PARSE_FLAG(5, 0);
    u8 atkEv          = PARSE_FLAG(6, 0);
    u8 defEv          = PARSE_FLAG(7, 0);
    u8 speedEv        = PARSE_FLAG(8, 0);
    u8 spAtkEv        = PARSE_FLAG(9, 0);
    u8 spDefEv        = PARSE_FLAG(10, 0);
    u8 hpIv           = PARSE_FLAG(11, FlagGet(FLAG_MIN_GRINDING_MODE) ? MAX_PER_STAT_IVS : USE_RANDOM_IVS);
    u8 atkIv          = PARSE_FLAG(12, FlagGet(FLAG_MIN_GRINDING_MODE) ? MAX_PER_STAT_IVS : USE_RANDOM_IVS);
    u8 defIv          = PARSE_FLAG(13, FlagGet(FLAG_MIN_GRINDING_MODE) ? MAX_PER_STAT_IVS : USE_RANDOM_IVS);
    u8 speedIv        = PARSE_FLAG(14, FlagGet(FLAG_MIN_GRINDING_MODE) ? MAX_PER_STAT_IVS : USE_RANDOM_IVS);
    u8 spAtkIv        = PARSE_FLAG(15, FlagGet(FLAG_MIN_GRINDING_MODE) ? MAX_PER_STAT_IVS : USE_RANDOM_IVS);
    u8 spDefIv        = PARSE_FLAG(16, FlagGet(FLAG_MIN_GRINDING_MODE) ? MAX_PER_STAT_IVS : USE_RANDOM_IVS);
    u16 move1         = PARSE_FLAG(17, MOVE_NONE);
    u16 move2         = PARSE_FLAG(18, MOVE_NONE);
    u16 move3         = PARSE_FLAG(19, MOVE_NONE);
    u16 move4         = PARSE_FLAG(20, MOVE_NONE);
    bool8 isShiny     = PARSE_FLAG(21, FALSE);
    bool8 ggMaxFactor = PARSE_FLAG(22, FALSE);
    u8 teraType       = PARSE_FLAG(23, NUMBER_OF_MON_TYPES);

    u8 evs[NUM_STATS]        = {hpEv, atkEv, defEv, speedEv, spAtkEv, spDefEv};
    u8 ivs[NUM_STATS]        = {hpIv, atkIv, defIv, speedIv, spAtkIv, spDefIv};
    u16 moves[MAX_MON_MOVES] = {move1, move2, move3, move4};

    gSpecialVar_Result = ScriptGiveMonParameterized(side, slot, species, level, item, ball, nature, abilityNum, gender, evs, ivs, moves, isShiny, ggMaxFactor, teraType);
}

#undef PARSE_FLAG

void Script_GetChosenMonOffensiveEVs(void)
{
    ConvertIntToDecimalStringN(gStringVar1, GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_ATK_EV), STR_CONV_MODE_LEFT_ALIGN, 3);
    ConvertIntToDecimalStringN(gStringVar2, GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPATK_EV), STR_CONV_MODE_LEFT_ALIGN, 3);
    ConvertIntToDecimalStringN(gStringVar3, GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPEED_EV), STR_CONV_MODE_LEFT_ALIGN, 3);
}

void Script_GetChosenMonDefensiveEVs(void)
{
    ConvertIntToDecimalStringN(gStringVar1, GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_HP_EV), STR_CONV_MODE_LEFT_ALIGN, 3);
    ConvertIntToDecimalStringN(gStringVar2, GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_DEF_EV), STR_CONV_MODE_LEFT_ALIGN, 3);
    ConvertIntToDecimalStringN(gStringVar3, GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPDEF_EV), STR_CONV_MODE_LEFT_ALIGN, 3);
}

void Script_GetChosenMonOffensiveIVs(void)
{
    ConvertIntToDecimalStringN(gStringVar1, GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_ATK_IV), STR_CONV_MODE_LEFT_ALIGN, 3);
    ConvertIntToDecimalStringN(gStringVar2, GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPATK_IV), STR_CONV_MODE_LEFT_ALIGN, 3);
    ConvertIntToDecimalStringN(gStringVar3, GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPEED_IV), STR_CONV_MODE_LEFT_ALIGN, 3);
}

void Script_GetChosenMonDefensiveIVs(void)
{
    ConvertIntToDecimalStringN(gStringVar1, GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_HP_IV), STR_CONV_MODE_LEFT_ALIGN, 3);
    ConvertIntToDecimalStringN(gStringVar2, GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_DEF_IV), STR_CONV_MODE_LEFT_ALIGN, 3);
    ConvertIntToDecimalStringN(gStringVar3, GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPDEF_IV), STR_CONV_MODE_LEFT_ALIGN, 3);
}

void Script_SetStatus1(struct ScriptContext *ctx)
{
    u32 status1 = VarGet(ScriptReadHalfword(ctx));
    u32 slot = VarGet(ScriptReadHalfword(ctx));

    if (slot >= PARTY_SIZE)
    {
        u16 species;

        for (slot = 0; slot < PARTY_SIZE; slot++)
        {
            species = GetMonData(&gPlayerParty[slot], MON_DATA_SPECIES);
            if (species != SPECIES_NONE
             && species != SPECIES_EGG
             && GetMonData(&gPlayerParty[slot], MON_DATA_HP) != 0)
                SetMonData(&gPlayerParty[slot], MON_DATA_STATUS, &status1);
        }
    }
    else
    {
        SetMonData(&gPlayerParty[slot], MON_DATA_STATUS, &status1);
    }
}
