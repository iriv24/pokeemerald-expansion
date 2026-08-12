#include "global.h"
#include "frontier_util.h"
#include "event_data.h"
#include "battle_setup.h"
#include "overworld.h"
#include "random.h"
#include "battle_tower.h"
#include "field_specials.h"
#include "battle.h"
#include "script_pokemon_util.h"
#include "main.h"
#include "window.h"
#include "menu.h"
#include "text.h"
#include "battle_records.h"
#include "international_string_util.h"
#include "string_util.h"
#include "new_game.h"
#include "link.h"
#include "tv.h"
#include "apprentice.h"
#include "pokedex.h"
#include "recorded_battle.h"
#include "data.h"
#include "record_mixing.h"
#include "strings.h"
#include "malloc.h"
#include "save.h"
#include "load_save.h"
#include "battle_dome.h"
#include "constants/battle_frontier.h"
#include "constants/abilities.h"
#include "constants/battle_move_effects.h"
#include "constants/battle_pike.h"
#include "constants/frontier_util.h"
#include "constants/trainers.h"
#include "constants/game_stat.h"
#include "constants/moves.h"
#include "constants/items.h"
#include "constants/event_objects.h"
#include "party_menu.h"

struct FrontierBrainMon
{
    u16 species;
    u16 heldItem;
    u8 fixedIV;
    u8 nature;
    u8 evs[NUM_STATS];
    u16 moves[MAX_MON_MOVES];
    bool16 isShiny;
    u16 ability;
};

// This file's functions.
static void GetChallengeStatus(void);
static void GetFrontierData(void);
static void SetFrontierData(void);
static void SetSelectedPartyOrder(void);
static void SetSelectedPartyOrderBattleTower(void);
static void DoSoftReset_(void);
static void SetFrontierTrainers(void);
static void SaveSelectedParty(void);
static void ShowFacilityResultsWindow(void);
static void CheckPutFrontierTVShowOnAir(void);
static void Script_GetFrontierBrainStatus(void);
static void IsTrainerFrontierBrain(void);
static void GiveBattlePoints(void);
static void GetFacilitySymbolCount(void);
static void GiveFacilitySymbol(void);
static void CheckBattleTypeFlag(void);
static void CheckPartyIneligibility(void);
static void ValidateVisitingTrainer(void);
static void IncrementWinStreak(void);
static void RestoreHeldItems(void);
static void SaveRecordBattle(void);
static void BufferFrontierTrainerName(void);
static void ResetSketchedMoves(void);
static void SetFacilityBrainObjectEvent(void);
static void ShowTowerResultsWindow(u8);
static void ShowDomeResultsWindow(u8);
static void ShowPalaceResultsWindow(u8);
static void ShowPikeResultsWindow(void);
static void ShowFactoryResultsWindow(u8);
static void ShowArenaResultsWindow(void);
static void ShowPyramidResultsWindow(void);
static void ShowLinkContestResultsWindow(void);
static void CopyFrontierBrainText(bool8 playerWonText);

static const u8 sFrontierBrainStreakAppearances[NUM_FRONTIER_FACILITIES][4] =
{
    [FRONTIER_FACILITY_TOWER]   = {35,  70, 35, 1},
    [FRONTIER_FACILITY_DOME]    = { 4,   9,  5, 0},
    [FRONTIER_FACILITY_PALACE]  = {21,  42, 21, 1},
    [FRONTIER_FACILITY_ARENA]   = {28,  56, 28, 1},
    [FRONTIER_FACILITY_FACTORY] = {21,  42, 21, 1},
    [FRONTIER_FACILITY_PIKE]    = {28, 140, 56, 1},
    [FRONTIER_FACILITY_PYRAMID] = {21,  70, 35, 0},
};

static const struct FrontierBrainMon sFrontierBrainsMons[][2][FRONTIER_PARTY_SIZE_FULL] =
{
    [FRONTIER_FACILITY_TOWER] =
    {
        // Silver Symbol.
        {
            {
                .species = SPECIES_METAGROSS,
                .heldItem = ITEM_AIR_BALLOON,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_ADAMANT,
                .evs = {0, 252, 4, 0, 0, 252},
                .moves = {MOVE_STEALTH_ROCK, MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT},
                .isShiny = FALSE,
                .ability = ABILITY_CLEAR_BODY,
            },
            {
                .species = SPECIES_ALAKAZAM,
                .heldItem = ITEM_ALAKAZITE,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_TIMID,
                .evs = {0, 0, 0, 252, 6, 252},
                .moves = {MOVE_PSYSHOCK, MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL},
                .isShiny = FALSE,
                .ability = ABILITY_MAGIC_GUARD,
            },
            {
                .species = SPECIES_ENTEI,
                .heldItem = ITEM_LUM_BERRY,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_JOLLY,
                .evs = {0, 252, 4, 0, 0, 252},
                .moves = {MOVE_EXTREME_SPEED, MOVE_FLARE_BLITZ, MOVE_STOMPING_TANTRUM, MOVE_WILL_O_WISP},
                .isShiny = FALSE,
                .ability = ABILITY_PRESSURE,
            },
            {
                .species = SPECIES_SNORLAX,
                .heldItem = ITEM_SITRUS_BERRY,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_IMPISH,
                .evs = {252, 0, 252, 0, 4, 0},
                .moves = {MOVE_BELLY_DRUM, MOVE_RETURN, MOVE_CRUNCH, MOVE_HIGH_HORSEPOWER},
                .isShiny = TRUE,
                .ability = ABILITY_THICK_FAT,
            },
            {
                .species = SPECIES_PRIMARINA,
                .heldItem = ITEM_LIFE_ORB,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_MODEST,
                .evs = {4, 0, 0, 252, 252, 0},
                .moves = {MOVE_MOONBLAST, MOVE_SPARKLING_ARIA, MOVE_ENERGY_BALL, MOVE_HAZE},
                .isShiny = FALSE,
                .ability = ABILITY_LIQUID_VOICE,
            },
            {
                .species = SPECIES_WEAVILE,
                .heldItem = ITEM_NEVER_MELT_ICE,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_JOLLY,
                .evs = {0, 0, 252, 0, 4, 252},
                .moves = {MOVE_KNOCK_OFF, MOVE_ICE_SHARD, MOVE_TRIPLE_AXEL, MOVE_LOW_KICK},
                .isShiny = FALSE,
                .ability = ABILITY_INFILTRATOR,
            },
        },
        // Gold Symbol.
        {
            {
                .species = SPECIES_LANDORUS_THERIAN,
                .heldItem = ITEM_ROCKY_HELMET,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_IMPISH,
                .evs = TRAINER_PARTY_EVS_IMPISH(),
                .moves = {MOVE_EARTHQUAKE, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK},
                .isShiny = FALSE,
                .ability = ABILITY_INTIMIDATE,
            },
            {
                .species = SPECIES_RAGING_BOLT,
                .heldItem = ITEM_LEFTOVERS,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_MODEST,
                .evs = {0, 0, 0, 252, 4, 252},
                .moves = {MOVE_THUNDERBOLT, MOVE_THUNDERCLAP, MOVE_DRAGON_PULSE, MOVE_CALM_MIND},
                .isShiny = FALSE,
                .ability = ABILITY_PRESSURE,
            },
            {
                .species = SPECIES_LATIOS,
                .heldItem = ITEM_CHOICE_SPECS,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_TIMID,
                .evs = {0, 0, 0, 252, 4, 252},
                .moves = {MOVE_DRACO_METEOR, MOVE_LUSTER_PURGE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
                .isShiny = TRUE,
                .ability = ABILITY_LEVITATE,
            },
            {
                .species = SPECIES_LOPUNNY,
                .heldItem = ITEM_LOPUNNITE,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_JOLLY,
                .evs = {0, 252, 0, 0, 4, 252},
                .moves = {MOVE_HIGH_JUMP_KICK, MOVE_RETURN, MOVE_FAKE_OUT, MOVE_TRIPLE_AXEL},
                .isShiny = TRUE,
                .ability = ABILITY_LIMBER,
            },
            {
                .species = SPECIES_SNEASLER,
                .heldItem = ITEM_BLACK_GLASSES,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_JOLLY,
                .evs = {0, 252, 0, 0, 4, 252},
                .moves = {MOVE_DIRE_CLAW, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_SUBSTITUTE},
                .isShiny = FALSE,
                .ability = ABILITY_POISON_TOUCH,
            },
            {
                .species = SPECIES_FLUTTER_MANE,
                .heldItem = ITEM_BOOSTER_ENERGY,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_TIMID,
                .evs = {0, 0, 0, 252, 4, 252},
                .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_THUNDER_WAVE, MOVE_HEX},
                .isShiny = FALSE,
                .ability = ABILITY_PROTOSYNTHESIS,
            },
        },
    },
    [FRONTIER_FACILITY_DOME] =
    {
        // Silver Symbol.
        {
            {
                .species = SPECIES_VICTINI,
                .heldItem = ITEM_CHOICE_BAND,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_ADAMANT,
                .evs = {0, 252, 0, 0, 4, 252},
                .moves = {MOVE_V_CREATE, MOVE_ZEN_HEADBUTT, MOVE_WILD_CHARGE, MOVE_U_TURN},
                .isShiny = FALSE,
                .ability = ABILITY_VICTORY_STAR,
            },
            {
                .species = SPECIES_SALAMENCE,
                .heldItem = ITEM_LUM_BERRY,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_ADAMANT,
                .evs = {0, 252, 0, 0, 4, 252},
                .moves = {MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_DRAGON_CLAW, MOVE_DRAGON_DANCE},
                .isShiny = FALSE,
                .ability = ABILITY_INTIMIDATE,
            },
            {
                .species = SPECIES_CHARIZARD,
                .heldItem = ITEM_CHARIZARDITE_X,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_ADAMANT,
                .evs = {0, 252, 0, 0, 4, 252},
                .moves = {MOVE_FLARE_BLITZ, MOVE_DRAGON_CLAW, MOVE_ROOST, MOVE_DRAGON_DANCE},
                .isShiny = FALSE,
                .ability = ABILITY_BLAZE,
            },
        },
        // Gold Symbol.
        {
            {
                .species = SPECIES_DIANCIE,
                .heldItem = ITEM_DIANCITE,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_TIMID,
                .evs = {0, 0, 0, 252, 6, 252},
                .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_CALM_MIND},
                .isShiny = FALSE,
                .ability = ABILITY_CLEAR_BODY,
            },
            {
                .species = SPECIES_QUAQUAVAL,
                .heldItem = ITEM_LIFE_ORB,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_JOLLY,
                .evs = {0, 252, 6, 0, 0, 252},
                .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_FLIP_TURN, MOVE_TRIPLE_AXEL},
                .isShiny = TRUE,
                .ability = ABILITY_TORRENT,
            },
            {
                .species = SPECIES_LATIAS,
                .heldItem = ITEM_LEFTOVERS,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_TIMID,
                .evs = {0, 0, 0, 252, 4, 252},
                .moves = {MOVE_MIST_BALL, MOVE_ROOST, MOVE_CALM_MIND, MOVE_DRAGON_PULSE},
                .isShiny = FALSE,
                .ability = ABILITY_LEVITATE,
            },
        },
    },
    [FRONTIER_FACILITY_PALACE] =
    {
        // Silver Symbol.
        {
            {
                .species = SPECIES_SYLVEON,
                .heldItem = ITEM_FAIRY_FEATHER,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_MODEST,
                .evs = {252, 0, 0, 252, 4, 0},
                .moves = {MOVE_HYPER_VOICE, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_SHADOW_BALL},
                .isShiny = FALSE,
                .ability = ABILITY_PIXILATE,
            },
            {
                .species = SPECIES_FROSMOTH,
                .heldItem = ITEM_LEFTOVERS,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_TIMID,
                .evs = {0, 0, 0, 252, 4, 252},
                .moves = {MOVE_ICE_BEAM, MOVE_BUG_BUZZ, MOVE_ROOST, MOVE_QUIVER_DANCE},
                .isShiny = FALSE,
                .ability = ABILITY_ICE_SCALES,
            },
            {
                .species = SPECIES_LAPRAS,
                .heldItem = ITEM_LEFTOVERS,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_MODEST,
                .evs = {252, 0, 0, 252, 4, 0},
                .moves = {MOVE_ICE_BEAM, MOVE_SCALD, MOVE_CONFUSE_RAY, MOVE_PROTECT},
                .isShiny = FALSE,
                .ability = ABILITY_WATER_ABSORB,
            },
        },
        // Gold Symbol.
        {
            {
                .species = SPECIES_VIKAVOLT,
                .heldItem = ITEM_LIFE_ORB,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_MODEST,
                .evs = {252, 0, 4, 252, 0, 0},
                .moves = {MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_THUNDERCLAP, MOVE_VOLT_SWITCH},
                .isShiny = FALSE,
                .ability = ABILITY_LEVITATE,
            },
            {
                .species = SPECIES_SUICUNE,
                .heldItem = ITEM_CHESTO_BERRY,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_BOLD,
                .evs = {252, 0, 252, 6, 0, 0},
                .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_REST, MOVE_CALM_MIND},
                .isShiny = FALSE,
                .ability = ABILITY_PRESSURE,
            },
            {
                .species = SPECIES_TAPU_LELE,
                .heldItem = ITEM_TWISTED_SPOON,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_MODEST,
                .evs = {252, 0, 0, 252, 4, 0},
                .moves = {MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_TAUNT},
                .isShiny = TRUE,
                .ability = ABILITY_PSYCHIC_SURGE,
            },
        },
    },
    [FRONTIER_FACILITY_ARENA] =
    {
        // Silver Symbol.
        {
            {
                .species = SPECIES_BLAZIKEN,
                .heldItem = ITEM_BLAZIKENITE,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_JOLLY,
                .evs = {0, 252, 4, 0, 0, 252},
                .moves = {MOVE_BLAZE_KICK, MOVE_HIGH_JUMP_KICK, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
                .isShiny = TRUE,
                .ability = ABILITY_STRIKER,
            },
            {
                .species = SPECIES_HERACROSS,
                .heldItem = ITEM_FLAME_ORB,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_JOLLY,
                .evs = {0, 252, 4, 0, 0, 252},
                .moves = {MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_FIRST_IMPRESSION},
                .isShiny = FALSE,
                .ability = ABILITY_GUTS,
            },
            {
                .species = SPECIES_LUCARIO,
                .heldItem = ITEM_LUCARIONITE,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_TIMID,
                .evs = {0, 0, 6, 252, 0, 252},
                .moves = {MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_CALM_MIND, MOVE_SHADOW_BALL},
                .isShiny = FALSE,
                .ability = ABILITY_STEADFAST,
            },
        },
        // Gold Symbol.
        {
            {
                .species = SPECIES_PALAFIN,
                .heldItem = ITEM_CHOICE_BAND,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_ADAMANT,
                .evs = {0, 252, 0, 0, 4, 252},
                .moves = {MOVE_JET_PUNCH, MOVE_FLIP_TURN, MOVE_WAVE_CRASH, MOVE_CLOSE_COMBAT},
                .isShiny = FALSE,
                .ability = ABILITY_ZERO_TO_HERO,
            },
            {
                .species = SPECIES_IRON_VALIANT,
                .heldItem = ITEM_BOOSTER_ENERGY,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_NAIVE,
                .evs = {0, 4, 0, 252, 0, 252},
                .moves = {MOVE_MOONBLAST, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_DESTINY_BOND},
                .isShiny = TRUE,
                .ability = ABILITY_QUARK_DRIVE,
            },
            {
                .species = SPECIES_CERULEDGE,
                .heldItem = ITEM_LIFE_ORB,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_JOLLY,
                .evs = {0, 252, 0, 0, 0, 252},
                .moves = {MOVE_BITTER_BLADE, MOVE_NIGHT_SLASH, MOVE_SUNNY_DAY, MOVE_SOLAR_BLADE},
                .isShiny = FALSE,
                .ability = ABILITY_SHARPNESS,
            },
        },
    },
    [FRONTIER_FACILITY_FACTORY] =
    {
        // Because Factory's Pokémon are random, this facility's Brain also uses random Pokémon.
        // What is interesting, this team is actually the one Steven uses in the multi tag battle alongside the player.
        {
            {
                .species = SPECIES_METANG,
                .heldItem = ITEM_SITRUS_BERRY,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_BRAVE,
                .evs = {0, 252, 252, 0, 6, 0},
                .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_METAL_CLAW},
                .isShiny = FALSE,
                .ability = ABILITY_CLEAR_BODY,
            },
            {
                .species = SPECIES_SKARMORY,
                .heldItem = ITEM_SITRUS_BERRY,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_IMPISH,
                .evs = {252, 0, 0, 0, 6, 252},
                .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_PROTECT, MOVE_STEEL_WING},
                .isShiny = FALSE,
                .ability = ABILITY_STURDY,
            },
            {
                .species = SPECIES_AGGRON,
                .heldItem = ITEM_SITRUS_BERRY,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_ADAMANT,
                .evs = {0, 252, 0, 0, 252, 6},
                .moves = {MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW},
                .isShiny = FALSE,
                .ability = ABILITY_STURDY,
            },
        },
        {
            {
                .species = SPECIES_METANG,
                .heldItem = ITEM_SITRUS_BERRY,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_BRAVE,
                .evs = {0, 252, 252, 0, 6, 0},
                .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_METAL_CLAW},
                .isShiny = FALSE,
                .ability = ABILITY_CLEAR_BODY,
            },
            {
                .species = SPECIES_SKARMORY,
                .heldItem = ITEM_SITRUS_BERRY,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_IMPISH,
                .evs = {252, 0, 0, 0, 6, 252},
                .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_PROTECT, MOVE_STEEL_WING},
                .isShiny = FALSE,
                .ability = ABILITY_STURDY,
            },
            {
                .species = SPECIES_AGGRON,
                .heldItem = ITEM_SITRUS_BERRY,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_ADAMANT,
                .evs = {0, 252, 0, 0, 252, 6},
                .moves = {MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW},
                .isShiny = FALSE,
                .ability = ABILITY_STURDY,
            },
        },
    },
    [FRONTIER_FACILITY_PIKE] =
    {
        // Silver Symbol.
        {
            {
                .species = SPECIES_SEVIPER,
                .heldItem = ITEM_LIFE_ORB,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_NAUGHTY,
                .evs = {8, 56, 0, 224, 0, 220},
                .moves = {MOVE_SLUDGE_WAVE, MOVE_GIGA_DRAIN, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH},
                .isShiny = FALSE,
                .ability = ABILITY_MERCILESS,
            },
            {
                .species = SPECIES_ABSOL,
                .heldItem = ITEM_ABSOLITE,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_JOLLY,
                .evs = {0, 252, 0, 0, 4, 252},
                .moves = {MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT},
                .isShiny = FALSE,
                .ability = ABILITY_PRESSURE,
            },
            {
                .species = SPECIES_MIMIKYU,
                .heldItem = ITEM_LEFTOVERS,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_ADAMANT,
                .evs = {0, 252, 4, 0, 0, 252},
                .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SUBSTITUTE, MOVE_SWORDS_DANCE},
                .isShiny = TRUE,
                .ability = ABILITY_DISGUISE,
            },

        },
        // Gold Symbol.
        {
            {
                .species = SPECIES_HYDREIGON,
                .heldItem = ITEM_LIFE_ORB,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_TIMID,
                .evs = {0, 0, 0, 252, 4, 252},
                .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_FLAMETHROWER, MOVE_ROOST},
                .isShiny = FALSE,
                .ability = ABILITY_LEVITATE,
            },
            {
                .species = SPECIES_AEGISLASH,
                .heldItem = ITEM_SPELL_TAG,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_QUIET,
                .evs = {252, 0, 0, 252, 6, 0},
                .moves = {MOVE_SHADOW_BALL, MOVE_SHADOW_SNEAK, MOVE_SACRED_SWORD, MOVE_KINGS_SHIELD},
                .isShiny = FALSE,
                .ability = ABILITY_STANCE_CHANGE,
            },
            {
                .species = SPECIES_NIHILEGO,
                .heldItem = ITEM_POWER_HERB,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_TIMID,
                .evs = {0, 0, 4, 252, 0, 252},
                .moves = {MOVE_METEOR_BEAM, MOVE_SLUDGE_WAVE, MOVE_THUNDERBOLT, MOVE_GRASS_KNOT},
                .isShiny = FALSE,
                .ability = ABILITY_BEAST_BOOST,
            },
        },
    },
    [FRONTIER_FACILITY_PYRAMID] =
    {
        // Silver Symbol.
        {
            {
                .species = SPECIES_HIPPOWDON,
                .heldItem = ITEM_ROCKY_HELMET,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_IMPISH,
                .evs = {252, 4, 252, 0, 0, 0},
                .moves = {MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_SLACK_OFF, MOVE_ROAR},
                .isShiny = FALSE,
                .ability = ABILITY_SAND_STREAM,
            },
            {
                .species = SPECIES_ZAPDOS,
                .heldItem = ITEM_HEAVY_DUTY_BOOTS,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_BOLD,
                .evs = {0, 0, 248, 252, 8, 0},
                .moves = {MOVE_DEFOG, MOVE_ROOST, MOVE_THUNDERBOLT, MOVE_HEAT_WAVE},
                .isShiny = FALSE,
                .ability = ABILITY_STATIC,
            },
            {
                .species = SPECIES_GYARADOS,
                .heldItem = ITEM_LEFTOVERS,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_ADAMANT,
                .evs = {0, 252, 0, 0, 4, 252},
                .moves = {MOVE_WATERFALL, MOVE_IRON_HEAD, MOVE_SUBSTITUTE, MOVE_DRAGON_DANCE},
                .isShiny = FALSE,
                .ability = ABILITY_INTIMIDATE,
            },
            {
                .species = SPECIES_AERODACTYL,
                .heldItem = ITEM_AERODACTYLITE,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_JOLLY,
                .evs = {0, 252, 0, 0, 4, 252},
                .moves = {MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_ROOST, MOVE_ICE_FANG},
                .isShiny = TRUE,
                .ability = ABILITY_UNNERVE,
            },
            {
                .species = SPECIES_MAMOSWINE,
                .heldItem = ITEM_CHOICE_BAND,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_JOLLY,
                .evs = {0, 252, 0, 0, 4, 252},
                .moves = {MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_ICICLE_CRASH, MOVE_SUPERPOWER},
                .isShiny = FALSE,
                .ability = ABILITY_THICK_FAT,
            },
            {
                .species = SPECIES_KOMMO_O,
                .heldItem = ITEM_LEFTOVERS,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_TIMID,
                .evs = {0, 0, 0, 252, 4, 252},
                .moves = {MOVE_CLANGOROUS_SOUL, MOVE_CLANGING_SCALES, MOVE_BOOMBURST, MOVE_FLAMETHROWER},
                .isShiny = TRUE,
                .ability = ABILITY_BULLETPROOF,
            },
        },
        // Gold Symbol.
        {
            {
                .species = SPECIES_CHARIZARD,
                .heldItem = ITEM_CHARIZARDITE_Y,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_TIMID,
                .evs = {0, 0, 0, 252, 4, 252},
                .moves = {MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_FOCUS_BLAST, MOVE_ROOST},
                .isShiny = TRUE,
                .ability = ABILITY_BLAZE,
            },
            {
                .species = SPECIES_HOUNDOOM,
                .heldItem = ITEM_CHARCOAL,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_TIMID,
                .evs = {0, 0, 0, 252, 4, 252},
                .moves = {MOVE_FIRE_BLAST, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY},
                .isShiny = FALSE,
                .ability = ABILITY_FLASH_FIRE,
            },
            {
                .species = SPECIES_TANGROWTH,
                .heldItem = ITEM_LEFTOVERS,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_ADAMANT,
                .evs = {0, 252, 4, 0, 0, 252},
                .moves = {MOVE_KNOCK_OFF, MOVE_VINE_WHIP, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
                .isShiny = FALSE,
                .ability = ABILITY_CHLOROPHYLL,
            },
            {
                .species = SPECIES_HEATRAN,
                .heldItem = ITEM_AIR_BALLOON,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_CALM,
                .evs = {252, 0, 0, 4, 252, 0},
                .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_SUNNY_DAY, MOVE_TOXIC},
                .isShiny = FALSE,
                .ability = ABILITY_FLASH_FIRE,
            },
            {
                .species = SPECIES_VOLCANION,
                .heldItem = ITEM_SHUCA_BERRY,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_MODEST,
                .evs = {40, 0, 0, 252, 0, 216},
                .moves = {MOVE_DEFOG, MOVE_STEAM_ERUPTION, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB},
                .isShiny = FALSE,
                .ability = ABILITY_WATER_ABSORB,
            },
            {
                .species = SPECIES_SKELEDIRGE,
                .heldItem = ITEM_HEAVY_DUTY_BOOTS,
                .fixedIV = MAX_PER_STAT_IVS,
                .nature = NATURE_BOLD,
                .evs = {248, 0, 0, 8, 252, 0},
                .moves = {MOVE_TORCH_SONG, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_SLACK_OFF},
                .isShiny = FALSE,
                .ability = ABILITY_UNAWARE,
            },
        },
    },
};

static const u8 sBattlePointAwards[NUM_FRONTIER_FACILITIES][FRONTIER_MODE_COUNT][30] =
{
    /* facility, mode, tier */
    [FRONTIER_FACILITY_TOWER] = /* Tier: 1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30 */
    {
        [FRONTIER_MODE_SINGLES]     = {  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15 },
        [FRONTIER_MODE_DOUBLES]     = {  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15 },
        [FRONTIER_MODE_MULTIS]      = {  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15 },
        [FRONTIER_MODE_LINK_MULTIS] = {  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15 },
    },
    [FRONTIER_FACILITY_DOME] =
    {
        [FRONTIER_MODE_SINGLES]     = {  1,  1,  2,  2,  3,  3,  4,  4,  5,  5,  6,  6,  7,  7,  8,  8,  9,  9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15 },
        [FRONTIER_MODE_DOUBLES]     = {  1,  1,  2,  2,  3,  3,  4,  4,  5,  5,  6,  6,  7,  7,  8,  8,  9,  9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15 },
    },
    [FRONTIER_FACILITY_PALACE] =
    {
        [FRONTIER_MODE_SINGLES]     = {  4,  4,  5,  5,  6,  6,  7,  7,  8,  8,  9,  9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15 },
        [FRONTIER_MODE_DOUBLES]     = {  5,  5,  6,  6,  7,  7,  8,  8,  9,  9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15 },
    },
    [FRONTIER_FACILITY_ARENA] =
    {
        [FRONTIER_MODE_SINGLES]     = {  1,  1,  1,  2,  2,  2,  3,  3,  4,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15 },
    },
    [FRONTIER_FACILITY_FACTORY] =
    {
        [FRONTIER_MODE_SINGLES]     = {  3,  3,  4,  4,  5,  5,  6,  6,  7,  7,  8,  8,  9,  9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 15, 15, 15, 15 },
        [FRONTIER_MODE_DOUBLES]     = {  4,  4,  5,  5,  6,  6,  7,  7,  8,  8,  9,  9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15 },
    },
    [FRONTIER_FACILITY_PIKE] =
    {
        [FRONTIER_MODE_SINGLES]     = {  1,  1,  2,  2,  2,  4,  4,  4,  8,  8,  8,  8, 10, 10, 10, 10, 12, 12, 12, 12, 12, 14, 14, 14, 14, 15, 15, 15, 15, 15 },
    },
    [FRONTIER_FACILITY_PYRAMID] =
    {
        [FRONTIER_MODE_SINGLES]     = {  5,  5,  6,  6,  7,  7,  8,  8,  9,  9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15 },
    },
};

// Flags to change the conversation when the Frontier Brain is encountered for a battle
// First bit is has battled them before and not won yet, second bit is has battled them and won (obtained a Symbol)
static const u16 sBattledBrainBitFlags[NUM_FRONTIER_FACILITIES][2] =
{
    [FRONTIER_FACILITY_TOWER]   = {1 << 0, 1 << 1},
    [FRONTIER_FACILITY_DOME]    = {1 << 2, 1 << 3},
    [FRONTIER_FACILITY_PALACE]  = {1 << 4, 1 << 5},
    [FRONTIER_FACILITY_ARENA]   = {1 << 6, 1 << 7},
    [FRONTIER_FACILITY_FACTORY] = {1 << 8, 1 << 9},
    [FRONTIER_FACILITY_PIKE]    = {1 << 10, 1 << 11},
    [FRONTIER_FACILITY_PYRAMID] = {1 << 12, 1 << 13},
};

static void (* const sFrontierUtilFuncs[])(void) =
{
    [FRONTIER_UTIL_FUNC_GET_STATUS]            = GetChallengeStatus,
    [FRONTIER_UTIL_FUNC_GET_DATA]              = GetFrontierData,
    [FRONTIER_UTIL_FUNC_SET_DATA]              = SetFrontierData,
    [FRONTIER_UTIL_FUNC_SET_PARTY_ORDER]       = SetSelectedPartyOrder,
    [FRONTIER_UTIL_FUNC_SET_PARTY_ORDER_BATTLE_TOWER] = SetSelectedPartyOrderBattleTower,
    [FRONTIER_UTIL_FUNC_SOFT_RESET]            = DoSoftReset_,
    [FRONTIER_UTIL_FUNC_SET_TRAINERS]          = SetFrontierTrainers,
    [FRONTIER_UTIL_FUNC_SAVE_PARTY]            = SaveSelectedParty,
    [FRONTIER_UTIL_FUNC_RESULTS_WINDOW]        = ShowFacilityResultsWindow,
    [FRONTIER_UTIL_FUNC_CHECK_AIR_TV_SHOW]     = CheckPutFrontierTVShowOnAir,
    [FRONTIER_UTIL_FUNC_GET_BRAIN_STATUS]      = Script_GetFrontierBrainStatus,
    [FRONTIER_UTIL_FUNC_IS_BRAIN]              = IsTrainerFrontierBrain,
    [FRONTIER_UTIL_FUNC_GIVE_BATTLE_POINTS]    = GiveBattlePoints,
    [FRONTIER_UTIL_FUNC_GET_FACILITY_SYMBOLS]  = GetFacilitySymbolCount,
    [FRONTIER_UTIL_FUNC_GIVE_FACILITY_SYMBOL]  = GiveFacilitySymbol,
    [FRONTIER_UTIL_FUNC_CHECK_BATTLE_TYPE]     = CheckBattleTypeFlag,
    [FRONTIER_UTIL_FUNC_CHECK_INELIGIBLE]      = CheckPartyIneligibility,
    [FRONTIER_UTIL_FUNC_CHECK_VISIT_TRAINER]   = ValidateVisitingTrainer,
    [FRONTIER_UTIL_FUNC_INCREMENT_STREAK]      = IncrementWinStreak,
    [FRONTIER_UTIL_FUNC_RESTORE_HELD_ITEMS]    = RestoreHeldItems,
    [FRONTIER_UTIL_FUNC_SAVE_BATTLE]           = SaveRecordBattle,
    [FRONTIER_UTIL_FUNC_BUFFER_TRAINER_NAME]   = BufferFrontierTrainerName,
    [FRONTIER_UTIL_FUNC_RESET_SKETCH_MOVES]    = ResetSketchedMoves,
    [FRONTIER_UTIL_FUNC_SET_BRAIN_OBJECT]      = SetFacilityBrainObjectEvent,
};

static const struct WindowTemplate sFrontierResultsWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = 28,
    .height = 18,
    .paletteNum = 15,
    .baseBlock = 1
};

static const struct WindowTemplate sLinkContestResultsWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 2,
    .tilemapTop = 2,
    .width = 26,
    .height = 15,
    .paletteNum = 15,
    .baseBlock = 1
};

static const struct WindowTemplate sRankingHallRecordsWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 2,
    .tilemapTop = 1,
    .width = 26,
    .height = 17,
    .paletteNum = 15,
    .baseBlock = 1
};

// Second field - whether the character is female.
static const u8 sFrontierBrainObjEventGfx[NUM_FRONTIER_FACILITIES][2] =
{
    [FRONTIER_FACILITY_TOWER]   = {OBJ_EVENT_GFX_ANABEL,  TRUE},
    [FRONTIER_FACILITY_DOME]    = {OBJ_EVENT_GFX_TUCKER,  FALSE},
    [FRONTIER_FACILITY_PALACE]  = {OBJ_EVENT_GFX_SPENSER, FALSE},
    [FRONTIER_FACILITY_ARENA]   = {OBJ_EVENT_GFX_GRETA,   TRUE},
    [FRONTIER_FACILITY_FACTORY] = {OBJ_EVENT_GFX_NOLAND,  FALSE},
    [FRONTIER_FACILITY_PIKE]    = {OBJ_EVENT_GFX_LUCY,    TRUE},
    [FRONTIER_FACILITY_PYRAMID] = {OBJ_EVENT_GFX_BRANDON, FALSE},
};

static const u8 *const sRecordsWindowChallengeTexts[][2] =
{
    [RANKING_HALL_TOWER_SINGLES] = {gText_BattleTower2,  gText_FacilitySingle},
    [RANKING_HALL_TOWER_DOUBLES] = {gText_BattleTower2,  gText_FacilityDouble},
    [RANKING_HALL_TOWER_MULTIS]  = {gText_BattleTower2,  gText_FacilityMulti},
    [RANKING_HALL_DOME]          = {gText_BattleDome,    gText_FacilitySingle},
    [RANKING_HALL_PALACE]        = {gText_BattlePalace,  gText_FacilitySingle},
    [RANKING_HALL_ARENA]         = {gText_BattleArena,   gText_Facility},
    [RANKING_HALL_FACTORY]       = {gText_BattleFactory, gText_FacilitySingle},
    [RANKING_HALL_PIKE]          = {gText_BattlePike,    gText_Facility},
    [RANKING_HALL_PYRAMID]       = {gText_BattlePyramid, gText_Facility},
    [RANKING_HALL_TOWER_LINK]    = {gText_BattleTower2,  gText_FacilityLink},
};

static const u8 *const sLevelModeText[] =
{
    [FRONTIER_LVL_50]   = gText_RecordsLv50,
    [FRONTIER_LVL_OPEN] = gText_RecordsOpenLevel,
};

static const u8 *const sHallFacilityToRecordsText[] =
{
    [RANKING_HALL_TOWER_SINGLES] = gText_FrontierFacilityWinStreak,
    [RANKING_HALL_TOWER_DOUBLES] = gText_FrontierFacilityWinStreak,
    [RANKING_HALL_TOWER_MULTIS]  = gText_FrontierFacilityWinStreak,
    [RANKING_HALL_DOME]          = gText_FrontierFacilityClearStreak,
    [RANKING_HALL_PALACE]        = gText_FrontierFacilityWinStreak,
    [RANKING_HALL_ARENA]         = gText_FrontierFacilityKOsStreak,
    [RANKING_HALL_FACTORY]       = gText_FrontierFacilityWinStreak,
    [RANKING_HALL_PIKE]          = gText_FrontierFacilityRoomsCleared,
    [RANKING_HALL_PYRAMID]       = gText_FrontierFacilityFloorsCleared,
    [RANKING_HALL_TOWER_LINK]    = gText_FrontierFacilityWinStreak,
};

static const u16 sFrontierBrainTrainerIds[NUM_FRONTIER_FACILITIES] =
{
    [FRONTIER_FACILITY_TOWER]   = TRAINER_ANABEL,
    [FRONTIER_FACILITY_DOME]    = TRAINER_TUCKER,
    [FRONTIER_FACILITY_PALACE]  = TRAINER_SPENSER,
    [FRONTIER_FACILITY_ARENA]   = TRAINER_GRETA,
    [FRONTIER_FACILITY_FACTORY] = TRAINER_NOLAND,
    [FRONTIER_FACILITY_PIKE]    = TRAINER_LUCY,
    [FRONTIER_FACILITY_PYRAMID] = TRAINER_BRANDON,
};

static const u8 *const sFrontierBrainPlayerLostSilverTexts[NUM_FRONTIER_FACILITIES] =
{
    [FRONTIER_FACILITY_TOWER]   = gText_AnabelWonSilver,
    [FRONTIER_FACILITY_DOME]    = gText_TuckerWonSilver,
    [FRONTIER_FACILITY_PALACE]  = gText_SpenserWonSilver,
    [FRONTIER_FACILITY_ARENA]   = gText_GretaWonSilver,
    [FRONTIER_FACILITY_FACTORY] = gText_NolandWonSilver,
    [FRONTIER_FACILITY_PIKE]    = gText_LucyWonSilver,
    [FRONTIER_FACILITY_PYRAMID] = gText_BrandonWonSilver,
};

static const u8 *const sFrontierBrainPlayerWonSilverTexts[NUM_FRONTIER_FACILITIES] =
{
    [FRONTIER_FACILITY_TOWER]   = gText_AnabelDefeatSilver,
    [FRONTIER_FACILITY_DOME]    = gText_TuckerDefeatSilver,
    [FRONTIER_FACILITY_PALACE]  = gText_SpenserDefeatSilver,
    [FRONTIER_FACILITY_ARENA]   = gText_GretaDefeatSilver,
    [FRONTIER_FACILITY_FACTORY] = gText_NolandDefeatSilver,
    [FRONTIER_FACILITY_PIKE]    = gText_LucyDefeatSilver,
    [FRONTIER_FACILITY_PYRAMID] = gText_BrandonDefeatSilver,
};

static const u8 *const sFrontierBrainPlayerLostGoldTexts[NUM_FRONTIER_FACILITIES] =
{
    [FRONTIER_FACILITY_TOWER]   = gText_AnabelWonGold,
    [FRONTIER_FACILITY_DOME]    = gText_TuckerWonGold,
    [FRONTIER_FACILITY_PALACE]  = gText_SpenserWonGold,
    [FRONTIER_FACILITY_ARENA]   = gText_GretaWonGold,
    [FRONTIER_FACILITY_FACTORY] = gText_NolandWonGold,
    [FRONTIER_FACILITY_PIKE]    = gText_LucyWonGold,
    [FRONTIER_FACILITY_PYRAMID] = gText_BrandonWonGold,
};

static const u8 *const sFrontierBrainPlayerWonGoldTexts[NUM_FRONTIER_FACILITIES] =
{
    [FRONTIER_FACILITY_TOWER]   = gText_AnabelDefeatGold,
    [FRONTIER_FACILITY_DOME]    = gText_TuckerDefeatGold,
    [FRONTIER_FACILITY_PALACE]  = gText_SpenserDefeatGold,
    [FRONTIER_FACILITY_ARENA]   = gText_GretaDefeatGold,
    [FRONTIER_FACILITY_FACTORY] = gText_NolandDefeatGold,
    [FRONTIER_FACILITY_PIKE]    = gText_LucyDefeatGold,
    [FRONTIER_FACILITY_PYRAMID] = gText_BrandonDefeatGold,
};

static const u8 *const *const sFrontierBrainPlayerLostTexts[] =
{
    sFrontierBrainPlayerLostSilverTexts,
    sFrontierBrainPlayerLostGoldTexts,
};

static const u8 *const *const sFrontierBrainPlayerWonTexts[] =
{
    sFrontierBrainPlayerWonSilverTexts,
    sFrontierBrainPlayerWonGoldTexts,
};


// code
void CallFrontierUtilFunc(void)
{
    sFrontierUtilFuncs[gSpecialVar_0x8004]();
}

// VAR_TEMP_CHALLENGE_STATUS is used to react to the status in OnFrame map scripts
static void GetChallengeStatus(void)
{
    VarSet(VAR_TEMP_CHALLENGE_STATUS, 0xFF);
    switch (gSaveBlock2Ptr->frontier.challengeStatus)
    {
    case 0:
        break;
    case CHALLENGE_STATUS_SAVING:
        FrontierGamblerSetWonOrLost(FALSE);
        VarSet(VAR_TEMP_CHALLENGE_STATUS, gSaveBlock2Ptr->frontier.challengeStatus);
        break;
    case CHALLENGE_STATUS_LOST:
        FrontierGamblerSetWonOrLost(FALSE);
        VarSet(VAR_TEMP_CHALLENGE_STATUS, gSaveBlock2Ptr->frontier.challengeStatus);
        break;
    case CHALLENGE_STATUS_WON:
        FrontierGamblerSetWonOrLost(TRUE);
        VarSet(VAR_TEMP_CHALLENGE_STATUS, gSaveBlock2Ptr->frontier.challengeStatus);
        break;
    case CHALLENGE_STATUS_PAUSED:
        VarSet(VAR_TEMP_CHALLENGE_STATUS, gSaveBlock2Ptr->frontier.challengeStatus);
        break;
    }
}

static void GetFrontierData(void)
{
    u8 facility = VarGet(VAR_FRONTIER_FACILITY);
    u8 hasSymbol = GetPlayerSymbolCountForFacility(facility);
    if (hasSymbol == 2)
        hasSymbol = 1;

    switch (gSpecialVar_0x8005)
    {
    case FRONTIER_DATA_CHALLENGE_STATUS:
        gSpecialVar_Result = gSaveBlock2Ptr->frontier.challengeStatus;
        break;
    case FRONTIER_DATA_LVL_MODE:
        gSpecialVar_Result = gSaveBlock2Ptr->frontier.lvlMode;
        break;
    case FRONTIER_DATA_BATTLE_NUM:
        gSpecialVar_Result = gSaveBlock2Ptr->frontier.curChallengeBattleNum;
        break;
    case FRONTIER_DATA_PAUSED:
        gSpecialVar_Result = gSaveBlock2Ptr->frontier.challengePaused;
        break;
    case FRONTIER_DATA_BATTLE_OUTCOME:
        gSpecialVar_Result = gBattleOutcome;
        gBattleOutcome = 0;
        break;
    case FRONTIER_DATA_RECORD_DISABLED:
        gSpecialVar_Result = gSaveBlock2Ptr->frontier.disableRecordBattle;
        break;
    case FRONTIER_DATA_HEARD_BRAIN_SPEECH:
        gSpecialVar_Result = gSaveBlock2Ptr->frontier.battledBrainFlags & sBattledBrainBitFlags[facility][hasSymbol];
        break;
    }
}

static void SetFrontierData(void)
{
    s32 i;
    u8 facility = VarGet(VAR_FRONTIER_FACILITY);
    u8 hasSymbol = GetPlayerSymbolCountForFacility(facility);
    if (hasSymbol == 2)
        hasSymbol = 1;

    switch (gSpecialVar_0x8005)
    {
    case FRONTIER_DATA_CHALLENGE_STATUS:
        gSaveBlock2Ptr->frontier.challengeStatus = gSpecialVar_0x8006;
        break;
    case FRONTIER_DATA_LVL_MODE:
        gSaveBlock2Ptr->frontier.lvlMode = gSpecialVar_0x8006;
        break;
    case FRONTIER_DATA_BATTLE_NUM:
        gSaveBlock2Ptr->frontier.curChallengeBattleNum = gSpecialVar_0x8006;
        break;
    case FRONTIER_DATA_PAUSED:
        gSaveBlock2Ptr->frontier.challengePaused = gSpecialVar_0x8006;
        break;
    case FRONTIER_DATA_SELECTED_MON_ORDER:
        for (i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
            gSaveBlock2Ptr->frontier.selectedPartyMons[i] = gSelectedOrderFromParty[i];
        break;
    case FRONTIER_DATA_RECORD_DISABLED:
        gSaveBlock2Ptr->frontier.disableRecordBattle = gSpecialVar_0x8006;
        break;
    case FRONTIER_DATA_HEARD_BRAIN_SPEECH:
        gSaveBlock2Ptr->frontier.battledBrainFlags |= sBattledBrainBitFlags[facility][hasSymbol];
        break;
    }
}

static void SetSelectedPartyOrder(void)
{
    s32 i;

    ClearSelectedPartyOrder();
    for (i = 0; i < gSpecialVar_0x8005; i++)
        gSelectedOrderFromParty[i] = gSaveBlock2Ptr->frontier.selectedPartyMons[i];
    ReducePlayerPartyToSelectedMons();
}

static void SetSelectedPartyOrderBattleTower(void)
{
    s32 i;

    ClearSelectedPartyOrder();
    for (i = 0; i < gSpecialVar_0x8005; i++)
        gSelectedOrderFromParty[i] = gSaveBlock2Ptr->frontier.selectedPartyMons[i];
    ReducePlayerPartyToSelectedMons6V6();
}

static void DoSoftReset_(void)
{
    DoSoftReset();
}

static void SetFrontierTrainers(void)
{
    gFacilityTrainers = gBattleFrontierTrainers;
}

static void SaveSelectedParty(void)
{
    u8 i;

    for (i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
    {
        u16 monId = gSaveBlock2Ptr->frontier.selectedPartyMons[i] - 1;
        if (monId < PARTY_SIZE)
            gSaveBlock1Ptr->playerParty[gSaveBlock2Ptr->frontier.selectedPartyMons[i] - 1] = gPlayerParty[i];
    }
}

static void ShowFacilityResultsWindow(void)
{
    if (gSpecialVar_0x8006 >= FRONTIER_MODE_COUNT)
        gSpecialVar_0x8006 = 0;
    switch (gSpecialVar_0x8005)
    {
    case FRONTIER_FACILITY_TOWER:
        ShowTowerResultsWindow(gSpecialVar_0x8006);
        break;
    case FRONTIER_FACILITY_DOME:
        ShowDomeResultsWindow(gSpecialVar_0x8006);
        break;
    case FRONTIER_FACILITY_PALACE:
        ShowPalaceResultsWindow(gSpecialVar_0x8006);
        break;
    case FRONTIER_FACILITY_PIKE:
        ShowPikeResultsWindow();
        break;
    case FRONTIER_FACILITY_FACTORY:
        ShowFactoryResultsWindow(gSpecialVar_0x8006);
        break;
    case FRONTIER_FACILITY_ARENA:
        ShowArenaResultsWindow();
        break;
    case FRONTIER_FACILITY_PYRAMID:
        ShowPyramidResultsWindow();
        break;
    case FACILITY_LINK_CONTEST:
        ShowLinkContestResultsWindow();
        break;
    }
}

static bool8 IsWinStreakActive(u32 challenge)
{
    if (gSaveBlock2Ptr->frontier.winStreakActiveFlags & challenge)
        return TRUE;
    else
        return FALSE;
}

static void PrintAligned(const u8 *str, s32 y)
{
    s32 x = GetStringCenterAlignXOffset(FONT_NORMAL, str, DISPLAY_WIDTH - 16);
    y = (y * 8) + 1;
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, str, x, y, TEXT_SKIP_DRAW, NULL);
}

// Battle Tower records.
static void TowerPrintStreakAligned(const u8 *str, u16 num, u8 x1, u8 x2, u8 y)
{
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, str, x1, y, TEXT_SKIP_DRAW, NULL);
    if (num > MAX_STREAK)
        num = MAX_STREAK;
    ConvertIntToDecimalStringN(gStringVar1, num, STR_CONV_MODE_RIGHT_ALIGN, 4);
    StringExpandPlaceholders(gStringVar4, gText_WinStreak);
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gStringVar4, x2, y, TEXT_SKIP_DRAW, NULL);
}

static u16 TowerGetWinStreak(u8 battleMode, u8 lvlMode)
{
    u16 winStreak = gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode];
    if (winStreak > MAX_STREAK)
        return MAX_STREAK;
    else
        return winStreak;
}

static void ShowTowerResultsWindow(u8 battleMode)
{
    bool8 isCurrent;
    u16 winStreak = TowerGetWinStreak(battleMode, FRONTIER_LVL_OPEN);
    u16 recordStreak = gSaveBlock2Ptr->frontier.towerRecordWinStreaks[battleMode][FRONTIER_LVL_OPEN];
    
    gRecordsWindowId = AddWindow(&sFrontierResultsWindowTemplate);
    DrawStdWindowFrame(gRecordsWindowId, FALSE);
    FillWindowPixelBuffer(gRecordsWindowId, PIXEL_FILL(1));
    if (battleMode == FRONTIER_MODE_SINGLES)
        StringExpandPlaceholders(gStringVar4, gText_SingleBattleRoomResults);
    else if (battleMode == FRONTIER_MODE_DOUBLES)
        StringExpandPlaceholders(gStringVar4, gText_DoubleBattleRoomResults);
    else if (battleMode == FRONTIER_MODE_MULTIS)
        StringExpandPlaceholders(gStringVar4, gText_MultiBattleRoomResults);
    else
        StringExpandPlaceholders(gStringVar4, gText_LinkMultiBattleRoomResults);

    PrintAligned(gStringVar4, 2);
    
    switch (battleMode)
    {
    default:
    case FRONTIER_MODE_SINGLES:
        isCurrent = IsWinStreakActive(STREAK_TOWER_SINGLES_OPEN);
        break;
    case FRONTIER_MODE_DOUBLES:
        isCurrent = IsWinStreakActive(STREAK_TOWER_DOUBLES_OPEN);
        break;
    case FRONTIER_MODE_MULTIS:
        isCurrent = IsWinStreakActive(STREAK_TOWER_MULTIS_OPEN);
        break;
    case FRONTIER_MODE_LINK_MULTIS:
        isCurrent = IsWinStreakActive(STREAK_TOWER_LINK_MULTIS_OPEN);
        break;
    }
    
    if (isCurrent == TRUE)
        TowerPrintStreakAligned(gText_Current, winStreak, 38, 102, 65);
    else
        TowerPrintStreakAligned(gText_Prev, winStreak, 38, 102, 65);
    TowerPrintStreakAligned(gText_Record, recordStreak, 38, 102, 89);
    PutWindowTilemap(gRecordsWindowId);
    CopyWindowToVram(gRecordsWindowId, COPYWIN_FULL);
}

// Battle Dome records.
static u16 DomeGetWinStreak(u8 battleMode, u8 lvlMode)
{
    u16 winStreak = gSaveBlock2Ptr->frontier.domeWinStreaks[battleMode][lvlMode];
    if (winStreak > MAX_STREAK)
        return MAX_STREAK;
    else
        return winStreak;
}

static void DomePrintStreakAligned(const u8 *str, u16 num, u8 x1, u8 x2, u8 y)
{
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, str, x1, y, TEXT_SKIP_DRAW, NULL);
    if (num > MAX_STREAK)
        num = MAX_STREAK;
    ConvertIntToDecimalStringN(gStringVar1, num, STR_CONV_MODE_RIGHT_ALIGN, 4);
    StringExpandPlaceholders(gStringVar4, gText_ClearStreak);
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gStringVar4, x2, y, TEXT_SKIP_DRAW, NULL);
}

static void ShowDomeResultsWindow(u8 battleMode)
{
    bool8 isCurrent;
    u16 winStreak = DomeGetWinStreak(battleMode, FRONTIER_LVL_OPEN);
    u16 recordStreak = gSaveBlock2Ptr->frontier.domeRecordWinStreaks[battleMode][FRONTIER_LVL_OPEN];
    
    gRecordsWindowId = AddWindow(&sFrontierResultsWindowTemplate);
    DrawStdWindowFrame(gRecordsWindowId, FALSE);
    FillWindowPixelBuffer(gRecordsWindowId, PIXEL_FILL(1));
    if (battleMode == FRONTIER_MODE_SINGLES)
        StringExpandPlaceholders(gStringVar4, gText_SingleBattleTourneyResults);
    else
        StringExpandPlaceholders(gStringVar4, gText_DoubleBattleTourneyResults);

    PrintAligned(gStringVar4, 2);
    
    switch (battleMode)
    {
    default:
    case FRONTIER_MODE_SINGLES:
        isCurrent = IsWinStreakActive(STREAK_DOME_SINGLES_OPEN);
        break;
    case FRONTIER_MODE_DOUBLES:
        isCurrent = IsWinStreakActive(STREAK_DOME_DOUBLES_OPEN);
        break;
    }
    
    if (isCurrent == TRUE)
        DomePrintStreakAligned(gText_Current, winStreak, 33, 97, 65);
    else
        DomePrintStreakAligned(gText_Prev, winStreak, 33, 97, 65);
    DomePrintStreakAligned(gText_Record, recordStreak, 33, 97, 89);
    PutWindowTilemap(gRecordsWindowId);
    CopyWindowToVram(gRecordsWindowId, COPYWIN_FULL);
}

// Battle Palace records.
static u16 PalaceGetWinStreak(u8 battleMode, u8 lvlMode)
{
    u16 winStreak = gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode];
    if (winStreak > MAX_STREAK)
        return MAX_STREAK;
    else
        return winStreak;
}

static void PalacePrintStreakAligned(const u8 *str, u16 num, u8 x1, u8 x2, u8 y)
{
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, str, x1, y, TEXT_SKIP_DRAW, NULL);
    if (num > MAX_STREAK)
        num = MAX_STREAK;
    ConvertIntToDecimalStringN(gStringVar1, num, STR_CONV_MODE_RIGHT_ALIGN, 4);
    StringExpandPlaceholders(gStringVar4, gText_WinStreak);
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gStringVar4, x2, y, TEXT_SKIP_DRAW, NULL);
}

static void ShowPalaceResultsWindow(u8 battleMode)
{
    bool8 isCurrent;
    u16 winStreak = PalaceGetWinStreak(battleMode, FRONTIER_LVL_OPEN);
    u16 recordStreak = gSaveBlock2Ptr->frontier.palaceRecordWinStreaks[battleMode][FRONTIER_LVL_OPEN];
    
    gRecordsWindowId = AddWindow(&sFrontierResultsWindowTemplate);
    DrawStdWindowFrame(gRecordsWindowId, FALSE);
    FillWindowPixelBuffer(gRecordsWindowId, PIXEL_FILL(1));
    if (battleMode == FRONTIER_MODE_SINGLES)
        StringExpandPlaceholders(gStringVar4, gText_SingleBattleHallResults);
    else
        StringExpandPlaceholders(gStringVar4, gText_DoubleBattleHallResults);

    PrintAligned(gStringVar4, 2);
    
    switch (battleMode)
    {
    default:
    case FRONTIER_MODE_SINGLES:
        isCurrent = IsWinStreakActive(STREAK_PALACE_SINGLES_OPEN);
        break;
    case FRONTIER_MODE_DOUBLES:
        isCurrent = IsWinStreakActive(STREAK_PALACE_DOUBLES_OPEN);
        break;
    }
    
    if (isCurrent == TRUE)
        PalacePrintStreakAligned(gText_Current, winStreak, 38, 102, 65);
    else
        PalacePrintStreakAligned(gText_Prev, winStreak, 38, 102, 65);
    PalacePrintStreakAligned(gText_Record, recordStreak, 38, 102, 89);
    PutWindowTilemap(gRecordsWindowId);
    CopyWindowToVram(gRecordsWindowId, COPYWIN_FULL);
}

// Battle Pike records.
static u16 PikeGetWinStreak(u8 lvlMode)
{
    u16 winStreak = gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode];
    if (winStreak > MAX_STREAK)
        return MAX_STREAK;
    else
        return winStreak;
}

static void PikePrintStreakAligned(const u8 *str, u16 num, u8 x1, u8 x2, u8 y)
{
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, str, x1, y, TEXT_SKIP_DRAW, NULL);
    if (num > MAX_STREAK)
        num = MAX_STREAK;
    ConvertIntToDecimalStringN(gStringVar1, num, STR_CONV_MODE_RIGHT_ALIGN, 4);
    StringExpandPlaceholders(gStringVar4, gText_RoomsCleared);
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gStringVar4, x2, y, TEXT_SKIP_DRAW, NULL);
}

static void ShowPikeResultsWindow(void)
{
    bool8 isCurrent;
    u16 winStreak = PikeGetWinStreak(FRONTIER_LVL_OPEN);
    u16 recordStreak = gSaveBlock2Ptr->frontier.pikeRecordStreaks[FRONTIER_LVL_OPEN];
    
    gRecordsWindowId = AddWindow(&sFrontierResultsWindowTemplate);
    DrawStdWindowFrame(gRecordsWindowId, FALSE);
    FillWindowPixelBuffer(gRecordsWindowId, PIXEL_FILL(1));
    StringExpandPlaceholders(gStringVar4, gText_BattleChoiceResults);
    PrintAligned(gStringVar4, 2);
    
    isCurrent = IsWinStreakActive(STREAK_PIKE_OPEN);
    
    if (isCurrent == TRUE)
        PikePrintStreakAligned(gText_Current, winStreak, 30, 94, 65);
    else
        PikePrintStreakAligned(gText_Prev, winStreak, 30, 94, 65);
    PikePrintStreakAligned(gText_Record, recordStreak, 30, 94, 89);
    PutWindowTilemap(gRecordsWindowId);
    CopyWindowToVram(gRecordsWindowId, COPYWIN_FULL);
}

// Battle Arena records.

static u16 ArenaGetWinStreak(u8 lvlMode)
{
    u16 winStreak = gSaveBlock2Ptr->frontier.arenaWinStreaks[lvlMode];
    if (winStreak > MAX_STREAK)
        return MAX_STREAK;
    else
        return winStreak;
}

static void ArenaPrintStreakAligned(const u8 *str, u16 num, u8 x1, u8 x2, u8 y)
{
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, str, x1, y, TEXT_SKIP_DRAW, NULL);
    if (num > MAX_STREAK)
        num = MAX_STREAK;
    ConvertIntToDecimalStringN(gStringVar1, num, STR_CONV_MODE_RIGHT_ALIGN, 4);
    StringExpandPlaceholders(gStringVar4, gText_KOsInARow);
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gStringVar4, x2, y, TEXT_SKIP_DRAW, NULL);
}

static void ShowArenaResultsWindow(void)
{
    bool8 isCurrent;
    u16 winStreak = ArenaGetWinStreak(FRONTIER_LVL_OPEN);
    u16 recordStreak = gSaveBlock2Ptr->frontier.arenaRecordStreaks[FRONTIER_LVL_OPEN];
    
    gRecordsWindowId = AddWindow(&sFrontierResultsWindowTemplate);
    DrawStdWindowFrame(gRecordsWindowId, FALSE);
    FillWindowPixelBuffer(gRecordsWindowId, PIXEL_FILL(1));
    StringExpandPlaceholders(gStringVar4, gText_SetKOTourneyResults);
    PrintAligned(gStringVar4, 2);
    
    isCurrent = IsWinStreakActive(STREAK_ARENA_OPEN);
    
    if (isCurrent == TRUE)
        ArenaPrintStreakAligned(gText_Current, winStreak, 35, 99, 65);
    else
        ArenaPrintStreakAligned(gText_Prev, winStreak, 35, 99, 65);
    ArenaPrintStreakAligned(gText_Record, recordStreak, 35, 99, 89);
    PutWindowTilemap(gRecordsWindowId);
    CopyWindowToVram(gRecordsWindowId, COPYWIN_FULL);
}

// Battle Factory records.

static void FactoryPrintStreakAligned(const u8 *str, u16 num, u8 x1, u8 x2, u8 y)
{
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, str, x1, y, TEXT_SKIP_DRAW, NULL);
    if (num > MAX_STREAK)
        num = MAX_STREAK;
    ConvertIntToDecimalStringN(gStringVar1, num, STR_CONV_MODE_RIGHT_ALIGN, 4);
    StringExpandPlaceholders(gStringVar4, gText_WinStreak);
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gStringVar4, x2, y, TEXT_SKIP_DRAW, NULL);
}

static u16 FactoryGetWinStreak(u8 battleMode, u8 lvlMode)
{
    u16 winStreak = gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode];
    if (winStreak > MAX_STREAK)
        return MAX_STREAK;
    else
        return winStreak;
}

static void ShowFactoryResultsWindow(u8 battleMode)
{
    bool8 isCurrent;
    u16 winStreak = FactoryGetWinStreak(battleMode, FRONTIER_LVL_OPEN);
    u16 recordStreak = gSaveBlock2Ptr->frontier.factoryRecordWinStreaks[battleMode][FRONTIER_LVL_OPEN];
    
    gRecordsWindowId = AddWindow(&sFrontierResultsWindowTemplate);
    DrawStdWindowFrame(gRecordsWindowId, FALSE);
    FillWindowPixelBuffer(gRecordsWindowId, PIXEL_FILL(1));
    if (battleMode == FRONTIER_MODE_SINGLES)
        StringExpandPlaceholders(gStringVar4, gText_BattleSwapSingleResults);
    else
        StringExpandPlaceholders(gStringVar4, gText_BattleSwapDoubleResults);

    PrintAligned(gStringVar4, 2);
    
    switch (battleMode)
    {
    default:
    case FRONTIER_MODE_SINGLES:
        isCurrent = IsWinStreakActive(STREAK_FACTORY_SINGLES_OPEN);
        break;
    case FRONTIER_MODE_DOUBLES:
        isCurrent = IsWinStreakActive(STREAK_FACTORY_DOUBLES_OPEN);
        break;
    }
    
    if (isCurrent == TRUE)
        FactoryPrintStreakAligned(gText_Current, winStreak, 38, 102, 65);
    else
        FactoryPrintStreakAligned(gText_Prev, winStreak, 38, 102, 65);
    FactoryPrintStreakAligned(gText_Record, recordStreak, 38, 102, 89);
    PutWindowTilemap(gRecordsWindowId);
    CopyWindowToVram(gRecordsWindowId, COPYWIN_FULL);
}

// Battle Pyramid records.

static u16 PyramidGetWinStreak(u8 lvlMode)
{
    u16 winStreak = gSaveBlock2Ptr->frontier.pyramidWinStreaks[lvlMode];
    if (winStreak > MAX_STREAK)
        return MAX_STREAK;
    else
        return winStreak;
}

static void PyramidPrintStreakAligned(const u8 *str, u16 num, u8 x1, u8 x2, u8 y)
{
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, str, x1, y, TEXT_SKIP_DRAW, NULL);
    if (num > MAX_STREAK)
        num = MAX_STREAK;
    ConvertIntToDecimalStringN(gStringVar1, num, STR_CONV_MODE_RIGHT_ALIGN, 4);
    StringExpandPlaceholders(gStringVar4, gText_FloorsCleared);
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gStringVar4, x2, y, TEXT_SKIP_DRAW, NULL);
}

static void ShowPyramidResultsWindow(void)
{
    bool8 isCurrent;
    u16 winStreak = PyramidGetWinStreak(FRONTIER_LVL_OPEN);
    u16 recordStreak = gSaveBlock2Ptr->frontier.pyramidRecordStreaks[FRONTIER_LVL_OPEN];
    
    gRecordsWindowId = AddWindow(&sFrontierResultsWindowTemplate);
    DrawStdWindowFrame(gRecordsWindowId, FALSE);
    FillWindowPixelBuffer(gRecordsWindowId, PIXEL_FILL(1));
    StringExpandPlaceholders(gStringVar4, gText_BattleQuestResults);
    PrintAligned(gStringVar4, 2);
    
    isCurrent = IsWinStreakActive(STREAK_PYRAMID_OPEN);
    
    if (isCurrent == TRUE)
        PyramidPrintStreakAligned(gText_Current, winStreak, 27, 91, 65);
    else
        PyramidPrintStreakAligned(gText_Prev, winStreak, 27, 91, 65);
    PyramidPrintStreakAligned(gText_Record, recordStreak, 27, 91, 89);
    PutWindowTilemap(gRecordsWindowId);
    CopyWindowToVram(gRecordsWindowId, COPYWIN_FULL);
}

// Link contest records. Why is it in this file?
static void ShowLinkContestResultsWindow(void)
{
    const u8 *str;
    s32 i, j;
    s32 x;

    gRecordsWindowId = AddWindow(&sLinkContestResultsWindowTemplate);
    DrawStdWindowFrame(gRecordsWindowId, FALSE);
    FillWindowPixelBuffer(gRecordsWindowId, PIXEL_FILL(1));

    StringExpandPlaceholders(gStringVar4, gText_LinkContestResults);
    x = GetStringCenterAlignXOffset(FONT_NORMAL, gStringVar4, 208);
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gStringVar4, x, 1, TEXT_SKIP_DRAW, NULL);

    str = gText_1st;
    x = GetStringRightAlignXOffset(FONT_NORMAL, str, 38) + 50;
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, str, x, 25, TEXT_SKIP_DRAW, NULL);

    str = gText_2nd;
    x = GetStringRightAlignXOffset(FONT_NORMAL, str, 38) + 88;
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, str, x, 25, TEXT_SKIP_DRAW, NULL);

    str = gText_3rd;
    x = GetStringRightAlignXOffset(FONT_NORMAL, str, 38) + 126;
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, str, x, 25, TEXT_SKIP_DRAW, NULL);

    str = gText_4th;
    x = GetStringRightAlignXOffset(FONT_NORMAL, str, 38) + 164;
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, str, x, 25, TEXT_SKIP_DRAW, NULL);

    x = 6;
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gText_Cool, x, 41, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gText_Beauty, x, 57, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gText_Cute, x, 73, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gText_Smart, x, 89, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gText_Tough, x, 105, TEXT_SKIP_DRAW, NULL);

    for (i = 0; i < CONTEST_CATEGORIES_COUNT; i++)
    {
        for (j = 0; j < CONTESTANT_COUNT; j++)
        {
            ConvertIntToDecimalStringN(gStringVar4, gSaveBlock2Ptr->contestLinkResults[i][j], STR_CONV_MODE_RIGHT_ALIGN, 4);
            AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gStringVar4, (j * 38) + 64, (i * 16) + 41, TEXT_SKIP_DRAW, NULL);
        }
    }

    PutWindowTilemap(gRecordsWindowId);
    CopyWindowToVram(gRecordsWindowId, COPYWIN_FULL);
}

static void CheckPutFrontierTVShowOnAir(void)
{
    u8 name[32];
    s32 lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);
    s32 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);

    switch (facility)
    {
    case FRONTIER_FACILITY_TOWER:
        if (gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode] > gSaveBlock2Ptr->frontier.towerRecordWinStreaks[battleMode][lvlMode])
        {
            gSaveBlock2Ptr->frontier.towerRecordWinStreaks[battleMode][lvlMode] = gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode];
            if (battleMode == FRONTIER_MODE_LINK_MULTIS)
            {
                StringCopy(name, gLinkPlayers[gBattleScripting.multiplayerId ^ 1].name);
                StripExtCtrlCodes(name);
                StringCopy(gSaveBlock2Ptr->frontier.opponentNames[lvlMode], name);
                SetTrainerId(gLinkPlayers[gBattleScripting.multiplayerId ^ 1].trainerId, gSaveBlock2Ptr->frontier.opponentTrainerIds[lvlMode]);
            }
            if (gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode] > 1
                && ShouldAirFrontierTVShow())
            {
                switch (battleMode)
                {
                case FRONTIER_MODE_SINGLES:
                    TryPutFrontierTVShowOnAir(gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode], FRONTIER_SHOW_TOWER_SINGLES);
                    break;
                case FRONTIER_MODE_DOUBLES:
                    TryPutFrontierTVShowOnAir(gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode], FRONTIER_SHOW_TOWER_DOUBLES);
                    break;
                case FRONTIER_MODE_MULTIS:
                    TryPutFrontierTVShowOnAir(gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode], FRONTIER_SHOW_TOWER_MULTIS);
                    break;
                case FRONTIER_MODE_LINK_MULTIS:
                    TryPutFrontierTVShowOnAir(gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode], FRONTIER_SHOW_TOWER_LINK_MULTIS);
                    break;
                }
            }
        }
        break;
    case FRONTIER_FACILITY_DOME:
        if (gSaveBlock2Ptr->frontier.domeWinStreaks[battleMode][lvlMode] > gSaveBlock2Ptr->frontier.domeRecordWinStreaks[battleMode][lvlMode])
        {
            gSaveBlock2Ptr->frontier.domeRecordWinStreaks[battleMode][lvlMode] = gSaveBlock2Ptr->frontier.domeWinStreaks[battleMode][lvlMode];
            if (gSaveBlock2Ptr->frontier.domeWinStreaks[battleMode][lvlMode] > 1
                && ShouldAirFrontierTVShow())
            {
                if (battleMode == FRONTIER_MODE_SINGLES)
                    TryPutFrontierTVShowOnAir(gSaveBlock2Ptr->frontier.domeWinStreaks[battleMode][lvlMode], FRONTIER_SHOW_DOME_SINGLES);
                else
                    TryPutFrontierTVShowOnAir(gSaveBlock2Ptr->frontier.domeWinStreaks[battleMode][lvlMode], FRONTIER_SHOW_DOME_DOUBLES);
            }
        }
        break;
    case FRONTIER_FACILITY_PALACE:
        if (gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode] > gSaveBlock2Ptr->frontier.palaceRecordWinStreaks[battleMode][lvlMode])
        {
            gSaveBlock2Ptr->frontier.palaceRecordWinStreaks[battleMode][lvlMode] = gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode];
            if (gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode] > 1
                && ShouldAirFrontierTVShow())
            {
                if (battleMode == FRONTIER_MODE_SINGLES)
                    TryPutFrontierTVShowOnAir(gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode], FRONTIER_SHOW_PALACE_SINGLES);
                else
                    TryPutFrontierTVShowOnAir(gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode], FRONTIER_SHOW_PALACE_DOUBLES);
            }
        }
        break;
    case FRONTIER_FACILITY_ARENA:
        if (gSaveBlock2Ptr->frontier.arenaWinStreaks[lvlMode] > gSaveBlock2Ptr->frontier.arenaRecordStreaks[lvlMode])
        {
            gSaveBlock2Ptr->frontier.arenaRecordStreaks[lvlMode] = gSaveBlock2Ptr->frontier.arenaWinStreaks[lvlMode];
            if (gSaveBlock2Ptr->frontier.arenaWinStreaks[lvlMode] > 1
                && ShouldAirFrontierTVShow())
            {
                TryPutFrontierTVShowOnAir(gSaveBlock2Ptr->frontier.arenaWinStreaks[lvlMode], FRONTIER_SHOW_ARENA);
            }
        }
        break;
    case FRONTIER_FACILITY_FACTORY:
        if (gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode] > gSaveBlock2Ptr->frontier.factoryRecordWinStreaks[battleMode][lvlMode])
        {
            gSaveBlock2Ptr->frontier.factoryRecordWinStreaks[battleMode][lvlMode] = gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode];
            gSaveBlock2Ptr->frontier.factoryRecordRentsCount[battleMode][lvlMode] = gSaveBlock2Ptr->frontier.factoryRentsCount[battleMode][lvlMode];
            if (gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode] > 1
                && ShouldAirFrontierTVShow())
            {
                if (battleMode == FRONTIER_MODE_SINGLES)
                    TryPutFrontierTVShowOnAir(gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode], FRONTIER_SHOW_FACTORY_SINGLES);
                else
                    TryPutFrontierTVShowOnAir(gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode], FRONTIER_SHOW_FACTORY_DOUBLES);
            }
        }
        break;
    case FRONTIER_FACILITY_PIKE:
        if (gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode] > gSaveBlock2Ptr->frontier.pikeRecordStreaks[lvlMode])
        {
            gSaveBlock2Ptr->frontier.pikeRecordStreaks[lvlMode] = gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode];
            if (gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode] > 1
                && ShouldAirFrontierTVShow())
            {
                TryPutFrontierTVShowOnAir(gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode], FRONTIER_SHOW_PIKE);
            }
        }
        break;
    case FRONTIER_FACILITY_PYRAMID:
        if (gSaveBlock2Ptr->frontier.pyramidWinStreaks[lvlMode] > gSaveBlock2Ptr->frontier.pyramidRecordStreaks[lvlMode])
        {
            gSaveBlock2Ptr->frontier.pyramidRecordStreaks[lvlMode] = gSaveBlock2Ptr->frontier.pyramidWinStreaks[lvlMode];
            if (gSaveBlock2Ptr->frontier.pyramidWinStreaks[lvlMode] > 1
                && ShouldAirFrontierTVShow())
            {
                TryPutFrontierTVShowOnAir(gSaveBlock2Ptr->frontier.pyramidWinStreaks[lvlMode], FRONTIER_SHOW_PYRAMID);
            }
        }
        break;
    }
}

static void Script_GetFrontierBrainStatus(void)
{
    VarGet(VAR_FRONTIER_FACILITY); // Unused return value.
    gSpecialVar_Result = GetFrontierBrainStatus();
}

u8 GetFrontierBrainStatus(void)
{
    s32 status = FRONTIER_BRAIN_NOT_READY;
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);
    s32 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    u16 winStreakNoModifier = GetCurrentFacilityWinStreak();
    s32 winStreak = winStreakNoModifier + sFrontierBrainStreakAppearances[facility][3];
    s32 symbolsCount;

    if (battleMode != FRONTIER_MODE_SINGLES)
        return FRONTIER_BRAIN_NOT_READY;

    symbolsCount = GetPlayerSymbolCountForFacility(facility);
    switch (symbolsCount)
    {
    // Missing a symbol
    case 0:
    case 1:
        if (winStreak == sFrontierBrainStreakAppearances[facility][symbolsCount])
            status = symbolsCount + 1; // FRONTIER_BRAIN_SILVER and FRONTIER_BRAIN_GOLD
        break;
    // Already received both symbols
    case 2:
    default:
        // Silver streak is reached
        if (winStreak == sFrontierBrainStreakAppearances[facility][0])
            status = FRONTIER_BRAIN_STREAK;
        // Gold streak is reached
        else if (winStreak == sFrontierBrainStreakAppearances[facility][1])
            status = FRONTIER_BRAIN_STREAK_LONG;
        // Some increment of the gold streak is reached
        else if (winStreak > sFrontierBrainStreakAppearances[facility][1] && (winStreak - sFrontierBrainStreakAppearances[facility][1]) % sFrontierBrainStreakAppearances[facility][2] == 0)
            status = FRONTIER_BRAIN_STREAK_LONG;
        break;
    }

    return status;
}

void CopyFrontierTrainerText(u8 whichText, u16 trainerId)
{
    switch (whichText)
    {
    case FRONTIER_BEFORE_TEXT:
    #if FREE_BATTLE_TOWER_E_READER == FALSE
        if (trainerId == TRAINER_EREADER)
            FrontierSpeechToString(gSaveBlock2Ptr->frontier.ereaderTrainer.greeting);
        else if (trainerId == TRAINER_FRONTIER_BRAIN)
    #else
        if (trainerId == TRAINER_FRONTIER_BRAIN)
    #endif //FREE_BATTLE_TOWER_E_READER
            CopyFrontierBrainText(FALSE);
        else if (trainerId < FRONTIER_TRAINERS_COUNT)
            FrontierSpeechToString(gFacilityTrainers[trainerId].speechBefore);
        else if (trainerId < TRAINER_RECORD_MIXING_APPRENTICE)
            FrontierSpeechToString(gSaveBlock2Ptr->frontier.towerRecords[trainerId - TRAINER_RECORD_MIXING_FRIEND].greeting);
        else
            BufferApprenticeChallengeText(trainerId - TRAINER_RECORD_MIXING_APPRENTICE);
        break;
    case FRONTIER_PLAYER_LOST_TEXT:
    #if FREE_BATTLE_TOWER_E_READER == FALSE
        if (trainerId == TRAINER_EREADER)
        {
            FrontierSpeechToString(gSaveBlock2Ptr->frontier.ereaderTrainer.farewellPlayerLost);
        }
        else if (trainerId == TRAINER_FRONTIER_BRAIN)
    #else
        if (trainerId == TRAINER_FRONTIER_BRAIN)
    #endif //FREE_BATTLE_TOWER_E_READER
        {
            CopyFrontierBrainText(FALSE);
        }
        else if (trainerId < FRONTIER_TRAINERS_COUNT)
        {
            FrontierSpeechToString(gFacilityTrainers[trainerId].speechWin);
        }
        else if (trainerId < TRAINER_RECORD_MIXING_APPRENTICE)
        {
            if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
                FrontierSpeechToString(GetRecordedBattleEasyChatSpeech());
            else
                FrontierSpeechToString(gSaveBlock2Ptr->frontier.towerRecords[trainerId - TRAINER_RECORD_MIXING_FRIEND].speechWon);
        }
        else
        {
            if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
                FrontierSpeechToString(GetRecordedBattleEasyChatSpeech());
            else
                FrontierSpeechToString(gSaveBlock2Ptr->apprentices[trainerId - TRAINER_RECORD_MIXING_APPRENTICE].speechWon);
        }
        break;
    case FRONTIER_PLAYER_WON_TEXT:
        if (trainerId == TRAINER_EREADER)
        {
        #if FREE_BATTLE_TOWER_E_READER == FALSE
            FrontierSpeechToString(gSaveBlock2Ptr->frontier.ereaderTrainer.farewellPlayerWon);
        #endif //FREE_BATTLE_TOWER_E_READER
        }
        else if (trainerId == TRAINER_FRONTIER_BRAIN)
        {
            CopyFrontierBrainText(TRUE);
        }
        else if (trainerId < FRONTIER_TRAINERS_COUNT)
        {
            FrontierSpeechToString(gFacilityTrainers[trainerId].speechLose);
        }
        else if (trainerId < TRAINER_RECORD_MIXING_APPRENTICE)
        {
            if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
                FrontierSpeechToString(GetRecordedBattleEasyChatSpeech());
            else
                FrontierSpeechToString(gSaveBlock2Ptr->frontier.towerRecords[trainerId - TRAINER_RECORD_MIXING_FRIEND].speechLost);
        }
        else
        {
            if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
            {
                trainerId = GetRecordedBattleApprenticeId();
                FrontierSpeechToString(gApprentices[trainerId].speechLost);
            }
            else
            {
                trainerId = gSaveBlock2Ptr->apprentices[trainerId - TRAINER_RECORD_MIXING_APPRENTICE].id;
                FrontierSpeechToString(gApprentices[trainerId].speechLost);
            }
        }
        break;
    }
}

void ResetWinStreaks(void)
{
    s32 battleMode, lvlMode;

    gSaveBlock2Ptr->frontier.winStreakActiveFlags = 0;
    for (battleMode = 0; battleMode < FRONTIER_MODE_COUNT; battleMode++)
    {
        for (lvlMode = 0; lvlMode < FRONTIER_LVL_TENT; lvlMode++)
        {
            gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode] = 0;
            if (battleMode < FRONTIER_MODE_MULTIS)
            {
                gSaveBlock2Ptr->frontier.domeWinStreaks[battleMode][lvlMode] = 0;
                gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode] = 0;
                gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode] = 0;
            }
            if (battleMode == FRONTIER_MODE_SINGLES)
            {
                gSaveBlock2Ptr->frontier.arenaWinStreaks[lvlMode] = 0;
                gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode] = 0;
                gSaveBlock2Ptr->frontier.pyramidWinStreaks[lvlMode] = 0;
            }
        }
    }
    if (gSaveBlock2Ptr->frontier.challengeStatus != 0)
        gSaveBlock2Ptr->frontier.challengeStatus = CHALLENGE_STATUS_SAVING;
}

u32 GetCurrentFacilityWinStreak(void)
{
    s32 lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    s32 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);

    switch (facility)
    {
    case FRONTIER_FACILITY_TOWER:
        return gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode];
    case FRONTIER_FACILITY_DOME:
        return gSaveBlock2Ptr->frontier.domeWinStreaks[battleMode][lvlMode];
    case FRONTIER_FACILITY_PALACE:
        return gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode];
    case FRONTIER_FACILITY_ARENA:
        return gSaveBlock2Ptr->frontier.arenaWinStreaks[lvlMode];
    case FRONTIER_FACILITY_FACTORY:
        return gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode];
    case FRONTIER_FACILITY_PIKE:
        return gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode];
    case FRONTIER_FACILITY_PYRAMID:
        return gSaveBlock2Ptr->frontier.pyramidWinStreaks[lvlMode];
    default:
        return 0;
    }
}

void ResetFrontierTrainerIds(void)
{
    s32 i;

    for (i = 0; i < (int)ARRAY_COUNT(gSaveBlock2Ptr->frontier.trainerIds); i++)
        gSaveBlock2Ptr->frontier.trainerIds[i] = 0xFFFF;
}

static void IsTrainerFrontierBrain(void)
{
    if (gTrainerBattleOpponent_A == TRAINER_FRONTIER_BRAIN)
        gSpecialVar_Result = TRUE;
    else
        gSpecialVar_Result = FALSE;
}

u8 GetPlayerSymbolCountForFacility(u8 facility)
{
    return FlagGet(FLAG_SYS_TOWER_SILVER + facility * 2)
         + FlagGet(FLAG_SYS_TOWER_GOLD + facility * 2);
}

static void GiveBattlePoints(void)
{
    s32 challengeNum = 0;
    s32 lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);
    s32 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    s32 points;

    switch (facility)
    {
    case FRONTIER_FACILITY_TOWER:
        challengeNum = gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode] / FRONTIER_STAGES_PER_CHALLENGE;
        break;
    case FRONTIER_FACILITY_DOME:
        challengeNum = gSaveBlock2Ptr->frontier.domeWinStreaks[battleMode][lvlMode];
        break;
    case FRONTIER_FACILITY_PALACE:
        challengeNum = gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode] / FRONTIER_STAGES_PER_CHALLENGE;
        break;
    case FRONTIER_FACILITY_ARENA:
        challengeNum = gSaveBlock2Ptr->frontier.arenaWinStreaks[lvlMode] / FRONTIER_STAGES_PER_CHALLENGE;
        break;
    case FRONTIER_FACILITY_FACTORY:
        challengeNum = gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode] / FRONTIER_STAGES_PER_CHALLENGE;
        break;
    case FRONTIER_FACILITY_PIKE:
        challengeNum = gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode] / NUM_PIKE_ROOMS;
        break;
    case FRONTIER_FACILITY_PYRAMID:
        challengeNum = gSaveBlock2Ptr->frontier.pyramidWinStreaks[lvlMode] / FRONTIER_STAGES_PER_CHALLENGE;
        break;
    }

    if (challengeNum != 0)
        challengeNum--;
    if (challengeNum >= ARRAY_COUNT(sBattlePointAwards[0][0]))
        challengeNum = ARRAY_COUNT(sBattlePointAwards[0][0]) - 1;

    points = sBattlePointAwards[facility][battleMode][challengeNum];
    if (gTrainerBattleOpponent_A == TRAINER_FRONTIER_BRAIN)
        points += 10;
    gSaveBlock2Ptr->frontier.battlePoints += points;
    ConvertIntToDecimalStringN(gStringVar1, points, STR_CONV_MODE_LEFT_ALIGN, 2);
    if (gSaveBlock2Ptr->frontier.battlePoints > MAX_BATTLE_FRONTIER_POINTS)
        gSaveBlock2Ptr->frontier.battlePoints = MAX_BATTLE_FRONTIER_POINTS;

    points = gSaveBlock2Ptr->frontier.cardBattlePoints;
    points += sBattlePointAwards[facility][battleMode][challengeNum];
    IncrementDailyBattlePoints(sBattlePointAwards[facility][battleMode][challengeNum]);
    if (gTrainerBattleOpponent_A == TRAINER_FRONTIER_BRAIN)
    {
        points += 10;
        IncrementDailyBattlePoints(10);
    }
    if (points > 0xFFFF)
        points = 0xFFFF;
    gSaveBlock2Ptr->frontier.cardBattlePoints = points;
}

static void GetFacilitySymbolCount(void)
{
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);
    gSpecialVar_Result = GetPlayerSymbolCountForFacility(facility);
}

static void GiveFacilitySymbol(void)
{
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);
    if (GetPlayerSymbolCountForFacility(facility) == 0)
        FlagSet(FLAG_SYS_TOWER_SILVER + facility * 2);
    else
        FlagSet(FLAG_SYS_TOWER_GOLD + facility * 2);
}

static void CheckBattleTypeFlag(void)
{
    if (gBattleTypeFlags & gSpecialVar_0x8005)
        gSpecialVar_Result = TRUE;
    else
        gSpecialVar_Result = FALSE;
}

#define SPECIES_PER_LINE 3

static void AppendCaughtBannedMonSpeciesName(u16 species, u8 count, s32 numBannedMonsCaught)
{
    if (numBannedMonsCaught == count)
        StringAppend(gStringVar1, gText_SpaceAndSpace);
    else if (numBannedMonsCaught > count)
        StringAppend(gStringVar1, gText_CommaSpace);
    if ((count % SPECIES_PER_LINE) == 0)
    {
        if (count == SPECIES_PER_LINE)
            StringAppend(gStringVar1, gText_NewLine);
        else
            StringAppend(gStringVar1, gText_LineBreak);
    }
    StringAppend(gStringVar1, GetSpeciesName(species));
}

static void AppendIfValid(u16 species, u16 heldItem, u16 hp, u8 lvlMode, u8 monLevel, u16 *speciesArray, u16 *itemsArray, u8 *count)
{
    s32 i = 0;

    if (species == SPECIES_EGG || species == SPECIES_NONE)
        return;
    if (gSpeciesInfo[species].isFrontierBanned)
        return;
    if (lvlMode == FRONTIER_LVL_50 && monLevel > FRONTIER_MAX_LEVEL_50)
        return;

    for (i = 0; i < *count && speciesArray[i] != species; i++)
        ;
    if (i != *count)
        return;

    if (heldItem != 0)
    {
        for (i = 0; i < *count && itemsArray[i] != heldItem; i++)
            ;
        if (i != *count)
            return;
    }

    speciesArray[*count] = species;
    itemsArray[*count] = heldItem;
    (*count)++;
}

// gSpecialVar_Result is the level mode before and after calls to this function
// gSpecialVar_0x8004 is used to store the return value instead (TRUE if there are insufficient eligible mons)
// The names of ineligible Pokémon that have been caught are also buffered to print
static void CheckPartyIneligibility(void)
{
    u16 speciesArray[PARTY_SIZE];
    u16 itemArray[PARTY_SIZE];
    s32 monId = 0;
    s32 toChoose = 0;
    u8 count = 0;
    s32 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    s32 monIdLooper;

    // count is re-used, define for clarity
    #define numEligibleMons count

    switch (battleMode)
    {
    case FRONTIER_MODE_SINGLES:
        toChoose = FRONTIER_PARTY_SIZE;
        break;
    case FRONTIER_MODE_MULTIS:
    case FRONTIER_MODE_LINK_MULTIS:
        toChoose = FRONTIER_MULTI_PARTY_SIZE;
        break;
    case FRONTIER_MODE_DOUBLES:
        if (VarGet(VAR_FRONTIER_FACILITY) == FRONTIER_FACILITY_TOWER)
            toChoose = FRONTIER_DOUBLES_PARTY_SIZE;
        else
            toChoose = FRONTIER_PARTY_SIZE;
        break;
    }

    monIdLooper = 0;
    do
    {
        monId = monIdLooper;
        numEligibleMons = 0;
        do
        {
            u16 species = GetMonData(&gPlayerParty[monId], MON_DATA_SPECIES_OR_EGG);
            u16 heldItem = GetMonData(&gPlayerParty[monId], MON_DATA_HELD_ITEM);
            u8 level = GetMonData(&gPlayerParty[monId], MON_DATA_LEVEL);
            u16 hp = GetMonData(&gPlayerParty[monId], MON_DATA_HP);
            if (VarGet(VAR_FRONTIER_FACILITY) == FRONTIER_FACILITY_PYRAMID)
            {
                if (heldItem == ITEM_NONE)
                    AppendIfValid(species, heldItem, hp, gSpecialVar_Result, level, speciesArray, itemArray, &numEligibleMons);
            }
            else
            {
                AppendIfValid(species, heldItem, hp, gSpecialVar_Result, level, speciesArray, itemArray, &numEligibleMons);
            }
            monId++;
            if (monId >= PARTY_SIZE)
                monId = 0;
        } while (monId != monIdLooper);

        monIdLooper++;
    } while (monIdLooper < PARTY_SIZE && numEligibleMons < toChoose);

    if (numEligibleMons < toChoose)
    {
        u32 i;
        u32 baseSpecies = 0;
        u32 totalCaughtBanned = 0;
        u32 caughtBanned[100] = {0};

        for (i = 0; i < NUM_SPECIES; i++)
        {
            if (totalCaughtBanned >= ARRAY_COUNT(caughtBanned))
                break;
            baseSpecies = GET_BASE_SPECIES_ID(i);
            if (baseSpecies == i)
            {
                if (gSpeciesInfo[baseSpecies].isFrontierBanned)
                {
                    if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(baseSpecies), FLAG_GET_CAUGHT))
                    {
                        caughtBanned[totalCaughtBanned] = baseSpecies;
                        totalCaughtBanned++;
                    }
                }
            }
        }
        gStringVar1[0] = EOS;
        gSpecialVar_0x8004 = TRUE;
        for (i = 0; i < totalCaughtBanned; i++)
            AppendCaughtBannedMonSpeciesName(caughtBanned[i], i+1, totalCaughtBanned);

        if (totalCaughtBanned == 0)
        {
            StringAppend(gStringVar1, gText_Space2);
            StringAppend(gStringVar1, gText_Are);
        }
        else
        {
            if (totalCaughtBanned % SPECIES_PER_LINE == SPECIES_PER_LINE - 1)
                StringAppend(gStringVar1, gText_LineBreak);
            else
                StringAppend(gStringVar1, gText_Space2);
            StringAppend(gStringVar1, gText_Are2);
        }
    }
    else
    {
        gSpecialVar_0x8004 = FALSE;
        gSaveBlock2Ptr->frontier.lvlMode = gSpecialVar_Result;
    }
    #undef numEligibleMons
}

#undef SPECIES_PER_LINE

static void ValidateVisitingTrainer(void)
{
    ValidateEReaderTrainer();
}

static void IncrementWinStreak(void)
{
    s32 lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    s32 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);

    switch (facility)
    {
    case FRONTIER_FACILITY_TOWER:
        if (gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode] < MAX_STREAK)
        {
            gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode]++;
            if (battleMode == FRONTIER_MODE_SINGLES)
            {
                SetGameStat(GAME_STAT_BATTLE_TOWER_SINGLES_STREAK, gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode]);
                gSaveBlock2Ptr->frontier.towerSinglesStreak = gSaveBlock2Ptr->frontier.towerWinStreaks[battleMode][lvlMode];
            }
        }
        break;
    case FRONTIER_FACILITY_DOME:
        if (gSaveBlock2Ptr->frontier.domeWinStreaks[battleMode][lvlMode] < MAX_STREAK)
            gSaveBlock2Ptr->frontier.domeWinStreaks[battleMode][lvlMode]++;
        if (gSaveBlock2Ptr->frontier.domeTotalChampionships[battleMode][lvlMode] < MAX_STREAK)
            gSaveBlock2Ptr->frontier.domeTotalChampionships[battleMode][lvlMode]++;
        break;
    case FRONTIER_FACILITY_PALACE:
        if (gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode] < MAX_STREAK)
            gSaveBlock2Ptr->frontier.palaceWinStreaks[battleMode][lvlMode]++;
        break;
    case FRONTIER_FACILITY_ARENA:
        if (gSaveBlock2Ptr->frontier.arenaWinStreaks[lvlMode] < MAX_STREAK)
            gSaveBlock2Ptr->frontier.arenaWinStreaks[lvlMode]++;
        break;
    case FRONTIER_FACILITY_FACTORY:
        if (gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode] < MAX_STREAK)
            gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode]++;
        break;
    case FRONTIER_FACILITY_PIKE:
        if (gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode] < MAX_STREAK)
            gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode]++;
        break;
    case FRONTIER_FACILITY_PYRAMID:
        if (gSaveBlock2Ptr->frontier.pyramidWinStreaks[lvlMode] < MAX_STREAK)
            gSaveBlock2Ptr->frontier.pyramidWinStreaks[lvlMode]++;
        break;
    }
}

static void RestoreHeldItems(void)
{
    u8 i;

    for (i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
    {
        if (gSaveBlock2Ptr->frontier.selectedPartyMons[i] != 0)
        {
            u16 item = GetMonData(&gSaveBlock1Ptr->playerParty[gSaveBlock2Ptr->frontier.selectedPartyMons[i] - 1], MON_DATA_HELD_ITEM, NULL);
            SetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM, &item);
        }
    }
}

static void SaveRecordBattle(void)
{
    gSpecialVar_Result = MoveRecordedBattleToSaveData();
    gSaveBlock2Ptr->frontier.disableRecordBattle = TRUE;
}

static void BufferFrontierTrainerName(void)
{
    switch (gSpecialVar_0x8005)
    {
    case 0:
        GetFrontierTrainerName(gStringVar1, gTrainerBattleOpponent_A);
        break;
    case 1:
        GetFrontierTrainerName(gStringVar2, gTrainerBattleOpponent_A);
        break;
    }
}

static void ResetSketchedMoves(void)
{
    u8 i, j, k;

    for (i = 0; i < FRONTIER_PARTY_SIZE_FULL; i++)
    {
        u16 monId = gSaveBlock2Ptr->frontier.selectedPartyMons[i] - 1;
        if (monId < PARTY_SIZE)
        {
            for (j = 0; j < MAX_MON_MOVES; j++)
            {
                u16 currentMove = GetMonData(&gPlayerParty[i], MON_DATA_MOVE1 + j, NULL);
                if (currentMove == MOVE_NONE)
                    continue;
                    
                for (k = 0; k < MAX_MON_MOVES; k++)
                {
                    if (GetMonData(&gSaveBlock1Ptr->playerParty[monId], MON_DATA_MOVE1 + k, NULL) == currentMove)
                        break;
                }
                // Only reset to Sketch if the move was actually learned via Sketch
                if (k == MAX_MON_MOVES)
                {
                    u16 originalMove = GetMonData(&gSaveBlock1Ptr->playerParty[monId], MON_DATA_MOVE1 + j, NULL);
                    if (originalMove == MOVE_SKETCH)
                        SetMonMoveSlot(&gPlayerParty[i], MOVE_SKETCH, j);
                }
            }
            gSaveBlock1Ptr->playerParty[monId] = gPlayerParty[i];
        }
    }
}

static void SetFacilityBrainObjectEvent(void)
{
    SetFrontierBrainObjEventGfx(VarGet(VAR_FRONTIER_FACILITY));
}

// Battle Frontier Ranking Hall records.
static void Print1PRecord(s32 position, s32 x, s32 y, struct RankingHall1P *hallRecord, s32 hallFacilityId)
{
    u8 text[32];
    u16 winStreak;

    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gText_123Dot[position], x * 8, (8 * (y + 5 * position)) + 1, TEXT_SKIP_DRAW, NULL);
    hallRecord->name[PLAYER_NAME_LENGTH] = EOS;
    if (hallRecord->winStreak)
    {
        TVShowConvertInternationalString(text, hallRecord->name, hallRecord->language);
        AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, text, (x + 2) * 8, (8 * (y + 5 * position)) + 1, TEXT_SKIP_DRAW, NULL);
        winStreak = hallRecord->winStreak;
        if (winStreak > MAX_STREAK)
            winStreak = MAX_STREAK;
        ConvertIntToDecimalStringN(gStringVar2, winStreak, STR_CONV_MODE_RIGHT_ALIGN, 4);
        StringExpandPlaceholders(gStringVar4, sHallFacilityToRecordsText[hallFacilityId]);
        AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gStringVar4, GetStringRightAlignXOffset(FONT_NORMAL, sHallFacilityToRecordsText[hallFacilityId], 0xC8), (8 * (y + 5 * position)) + 1, TEXT_SKIP_DRAW, NULL);
    }
}

static void Print2PRecord(s32 position, s32 x, s32 y, struct RankingHall2P *hallRecord)
{
    u8 text[32];
    u16 winStreak;

    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gText_123Dot[position], x * 8, (8 * (y + 5 * position)) + 1, TEXT_SKIP_DRAW, NULL);
    if (hallRecord->winStreak)
    {
        hallRecord->name1[PLAYER_NAME_LENGTH] = EOS;
        hallRecord->name2[PLAYER_NAME_LENGTH] = EOS;
        TVShowConvertInternationalString(text, hallRecord->name1, hallRecord->language);
        AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, text, (x + 2) * 8, (8 * (y + 5 * position - 1)) + 1, TEXT_SKIP_DRAW, NULL);
        if (IsStringJapanese(hallRecord->name2))
            TVShowConvertInternationalString(text, hallRecord->name2, LANGUAGE_JAPANESE);
        else
            StringCopy(text, hallRecord->name2);
        AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, text, (x + 4) * 8, (8 * (y + 5 * position + 1)) + 1, TEXT_SKIP_DRAW, NULL);

        winStreak = hallRecord->winStreak;
        if (winStreak > MAX_STREAK)
            winStreak = MAX_STREAK;
        ConvertIntToDecimalStringN(gStringVar2, winStreak, STR_CONV_MODE_RIGHT_ALIGN, 4);
        StringExpandPlaceholders(gStringVar4, sHallFacilityToRecordsText[RANKING_HALL_TOWER_LINK]);
        AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gStringVar4, GetStringRightAlignXOffset(FONT_NORMAL, sHallFacilityToRecordsText[RANKING_HALL_TOWER_LINK], 0xC8), (8 * (y + 5 * position)) + 1, TEXT_SKIP_DRAW, NULL);
    }
}

// Trainer data for ranking hall
static const struct RankingHall1P sInGameTrainers[][FRONTIER_LVL_MODE_COUNT][HALL_RECORDS_COUNT] = 
{
    [RANKING_HALL_TOWER_SINGLES] = {
        [FRONTIER_LVL_OPEN] = {
            {{0}, 92, {CHAR_R, CHAR_E, CHAR_D, EOS}, GAME_LANGUAGE},
            {{0}, 69, {CHAR_E, CHAR_T, CHAR_H, CHAR_A, CHAR_N, EOS}, GAME_LANGUAGE},
            {{0}, 58, {CHAR_W, CHAR_A, CHAR_L, CHAR_L, CHAR_Y, EOS}, GAME_LANGUAGE},
        },
    },
    [RANKING_HALL_TOWER_DOUBLES] = {
        [FRONTIER_LVL_OPEN] = {
            {{0}, 87, {CHAR_B, CHAR_L, CHAR_U, CHAR_E, EOS}, GAME_LANGUAGE},
            {{0}, 65, {CHAR_D, CHAR_A, CHAR_W, CHAR_N, EOS}, GAME_LANGUAGE},
            {{0}, 46, {CHAR_C, CHAR_Y, CHAR_N, CHAR_T, CHAR_H, CHAR_I, CHAR_A, EOS}, GAME_LANGUAGE},
        },
    },
    [RANKING_HALL_TOWER_MULTIS] = {
        [FRONTIER_LVL_OPEN] = {
            {{0}, 36, {CHAR_D, CHAR_A, CHAR_W, CHAR_N, EOS}, GAME_LANGUAGE},
            {{0}, 24, {CHAR_W, CHAR_A, CHAR_L, CHAR_L, CHAR_Y, EOS}, GAME_LANGUAGE},
            {{0}, 13, {CHAR_R, CHAR_O, CHAR_X, CHAR_A, CHAR_N, CHAR_N, CHAR_E, EOS}, GAME_LANGUAGE},
        },
    },
    [RANKING_HALL_DOME] = {
        [FRONTIER_LVL_OPEN] = {
            {{0}, 13, {CHAR_L, CHAR_A, CHAR_N, CHAR_C, CHAR_E, EOS}, GAME_LANGUAGE},
            {{0}, 11, {CHAR_B, CHAR_L, CHAR_U, CHAR_E, EOS}, GAME_LANGUAGE},
            {{0}, 6, {CHAR_B, CHAR_R, CHAR_A, CHAR_W, CHAR_L, CHAR_Y, EOS}, GAME_LANGUAGE},
        },
    },
    [RANKING_HALL_PALACE] = {
        [FRONTIER_LVL_OPEN] = {
            {{0}, 14, {CHAR_W, CHAR_A, CHAR_L, CHAR_L, CHAR_Y, EOS}, GAME_LANGUAGE},
            {{0}, 6, {CHAR_S, CHAR_T, CHAR_E, CHAR_V, CHAR_E, CHAR_N, EOS}, GAME_LANGUAGE},
            {{0}, 4, {CHAR_N, CHAR_O, CHAR_R, CHAR_M, CHAR_A, CHAR_N, EOS}, GAME_LANGUAGE},
        },
    },
    [RANKING_HALL_ARENA] = {
        [FRONTIER_LVL_OPEN] = {
            {{0}, 82, {CHAR_S, CHAR_I, CHAR_L, CHAR_V, CHAR_E, CHAR_R, EOS}, GAME_LANGUAGE},
            {{0}, 67, {CHAR_B, CHAR_R, CHAR_U, CHAR_N, CHAR_O, EOS}, GAME_LANGUAGE},
            {{0}, 41, {CHAR_S, CHAR_I, CHAR_D, CHAR_N, CHAR_E, CHAR_Y, EOS}, GAME_LANGUAGE},
        },
    },
    [RANKING_HALL_FACTORY] = {
        [FRONTIER_LVL_OPEN] = {
            {{0}, 58, {CHAR_V, CHAR_O, CHAR_L, CHAR_K, CHAR_N, CHAR_E, CHAR_R, EOS}, GAME_LANGUAGE},
            {{0}, 39, {CHAR_C, CHAR_A, CHAR_N, CHAR_D, CHAR_I, CHAR_C, CHAR_E, EOS}, GAME_LANGUAGE},
            {{0}, 21, {CHAR_F, CHAR_A, CHAR_N, CHAR_T, CHAR_I, CHAR_N, CHAR_A, EOS}, GAME_LANGUAGE},
        },
    },
    [RANKING_HALL_PIKE] = {
        [FRONTIER_LVL_OPEN] = {
            {{0}, 149, {CHAR_P, CHAR_H, CHAR_O, CHAR_E, CHAR_B, CHAR_E, EOS}, GAME_LANGUAGE},
            {{0}, 101, {CHAR_A, CHAR_G, CHAR_A, CHAR_T, CHAR_H, CHAR_A, EOS}, GAME_LANGUAGE},
            {{0}, 46, {CHAR_W, CHAR_A, CHAR_T, CHAR_T, CHAR_S, CHAR_O, CHAR_N, EOS}, GAME_LANGUAGE},
        },
    },
    [RANKING_HALL_PYRAMID] = {
        [FRONTIER_LVL_OPEN] = {
            {{0}, 100, {CHAR_R, CHAR_E, CHAR_D, EOS}, GAME_LANGUAGE},
            {{0}, 59, {CHAR_C, CHAR_Y, CHAR_N, CHAR_T, CHAR_H, CHAR_I, CHAR_A, EOS}, GAME_LANGUAGE},
            {{0}, 43, {CHAR_W, CHAR_A, CHAR_L, CHAR_L, CHAR_Y, EOS}, GAME_LANGUAGE},
        },
    },
};

static const struct RankingHall2P sInGameTrainerPairs[][HALL_RECORDS_COUNT] = 
{
    [FRONTIER_LVL_OPEN] = {
        {{0}, {0}, 150, {CHAR_R, CHAR_E, CHAR_D, EOS}, {CHAR_B, CHAR_L, CHAR_U, CHAR_E, EOS}, GAME_LANGUAGE},
        {{0}, {0}, 62, {CHAR_D, CHAR_A, CHAR_W, CHAR_N, EOS}, {CHAR_C, CHAR_Y, CHAR_N, CHAR_T, CHAR_H, CHAR_I, CHAR_A, EOS}, GAME_LANGUAGE},
        {{0}, {0}, 35, {CHAR_A, CHAR_R, CHAR_C, CHAR_H, CHAR_I, CHAR_E, EOS}, {CHAR_M, CHAR_A, CHAR_X, CHAR_I, CHAR_E, EOS}, GAME_LANGUAGE},
    },
};

static void Fill1PRecords(struct RankingHall1P *dst, s32 hallFacilityId, s32 lvlMode)
{
    s32 i;
    struct PlayerHallRecords *playerHallRecords = AllocZeroed(sizeof(struct PlayerHallRecords));
    GetPlayerHallRecords(playerHallRecords);
    
    for (i = 0; i < HALL_RECORDS_COUNT; i++)
    {
        if (hallFacilityId < ARRAY_COUNT(sInGameTrainers) && lvlMode < FRONTIER_LVL_MODE_COUNT)
            dst[i] = sInGameTrainers[hallFacilityId][lvlMode][i];
        else
            memset(&dst[i], 0, sizeof(struct RankingHall1P));
    }
    
    // Add player record if it's better than the worst fake trainer
    u16 playerStreak = playerHallRecords->onePlayer[hallFacilityId][lvlMode].winStreak;
    if (playerStreak > dst[HALL_RECORDS_COUNT - 1].winStreak)
    {
        dst[HALL_RECORDS_COUNT - 1] = playerHallRecords->onePlayer[hallFacilityId][lvlMode];
        
        // Sort records by win streak (bubble sort)
        for (i = HALL_RECORDS_COUNT - 1; i > 0; i--)
        {
            if (dst[i].winStreak > dst[i - 1].winStreak)
            {
                struct RankingHall1P temp = dst[i];
                dst[i] = dst[i - 1];
                dst[i - 1] = temp;
            }
        }
    }
    
    Free(playerHallRecords);
}

static void Fill2PRecords(struct RankingHall2P *dst, s32 lvlMode)
{
    s32 i;
    struct PlayerHallRecords *playerHallRecords = AllocZeroed(sizeof(struct PlayerHallRecords));
    GetPlayerHallRecords(playerHallRecords);
    
    for (i = 0; i < HALL_RECORDS_COUNT; i++)
    {
        if (lvlMode < FRONTIER_LVL_MODE_COUNT)
            dst[i] = sInGameTrainerPairs[lvlMode][i];
        else
            memset(&dst[i], 0, sizeof(struct RankingHall2P));
    }
    
    u16 playerStreak = playerHallRecords->twoPlayers[lvlMode].winStreak;
    if (playerStreak > dst[HALL_RECORDS_COUNT - 1].winStreak)
    {
        dst[HALL_RECORDS_COUNT - 1] = playerHallRecords->twoPlayers[lvlMode];
        
        for (i = HALL_RECORDS_COUNT - 1; i > 0; i--)
        {
            if (dst[i].winStreak > dst[i - 1].winStreak)
            {
                struct RankingHall2P temp = dst[i];
                dst[i] = dst[i - 1];
                dst[i - 1] = temp;
            }
        }
    }
    
    Free(playerHallRecords);
}

static void PrintHallRecords(s32 hallFacilityId, s32 lvlMode)
{
    s32 i;
    struct RankingHall1P records1P[HALL_RECORDS_COUNT];
    struct RankingHall2P records2P[HALL_RECORDS_COUNT];

    StringCopy(gStringVar1, sRecordsWindowChallengeTexts[hallFacilityId][0]);
    StringExpandPlaceholders(gStringVar4, sRecordsWindowChallengeTexts[hallFacilityId][1]);
    AddTextPrinterParameterized(gRecordsWindowId, FONT_NORMAL, gStringVar4, 0, 1, TEXT_SKIP_DRAW, NULL);
    if (hallFacilityId == RANKING_HALL_TOWER_LINK)
    {
        gSaveBlock2Ptr->frontier.opponentNames[0][PLAYER_NAME_LENGTH] = EOS;
        gSaveBlock2Ptr->frontier.opponentNames[1][PLAYER_NAME_LENGTH] = EOS;
        Fill2PRecords(records2P, lvlMode);
        for (i = 0; i < HALL_RECORDS_COUNT; i++)
            Print2PRecord(i, 1, 4, &records2P[i]);
    }
    else
    {
        Fill1PRecords(records1P, hallFacilityId, lvlMode);
        for (i = 0; i < HALL_RECORDS_COUNT; i++)
            Print1PRecord(i, 1, 4, &records1P[i], hallFacilityId);
    }
}

void ShowRankingHallRecordsWindow(void)
{
    gRecordsWindowId = AddWindow(&sRankingHallRecordsWindowTemplate);
    DrawStdWindowFrame(gRecordsWindowId, FALSE);
    FillWindowPixelBuffer(gRecordsWindowId, PIXEL_FILL(1));
    PrintHallRecords(gSpecialVar_0x8005, FRONTIER_LVL_OPEN);
    PutWindowTilemap(gRecordsWindowId);
    CopyWindowToVram(gRecordsWindowId, COPYWIN_FULL);
}

void ScrollRankingHallRecordsWindow(void)
{
    FillWindowPixelBuffer(gRecordsWindowId, PIXEL_FILL(1));
    PrintHallRecords(gSpecialVar_0x8005, FRONTIER_LVL_OPEN);
    CopyWindowToVram(gRecordsWindowId, COPYWIN_GFX);
}

void ClearRankingHallRecords(void)
{
#if FREE_RECORD_MIXING_HALL_RECORDS == FALSE
    s32 i, j, k;

    // UB: Passing 0 as a pointer instead of a pointer holding a value of 0.
#ifdef UBFIX
    u8 emptyId[TRAINER_ID_LENGTH] = {0};
    #define ZERO emptyId
#else
    #define ZERO 0
#endif

    for (i = 0; i < HALL_FACILITIES_COUNT; i++)
    {
        for (j = 0; j < FRONTIER_LVL_MODE_COUNT; j++)
        {
            for (k = 0; k < HALL_RECORDS_COUNT; k++)
            {
                CopyTrainerId(gSaveBlock2Ptr->hallRecords1P[i][j][k].id, ZERO);
                gSaveBlock2Ptr->hallRecords1P[i][j][k].name[0] = EOS;
                gSaveBlock2Ptr->hallRecords1P[i][j][k].winStreak = 0;
            }
        }
    }

    for (j = 0; j < FRONTIER_LVL_MODE_COUNT; j++)
    {
        for (k = 0; k < HALL_RECORDS_COUNT; k++)
        {
            CopyTrainerId(gSaveBlock2Ptr->hallRecords2P[j][k].id1, ZERO);
            CopyTrainerId(gSaveBlock2Ptr->hallRecords2P[j][k].id2, ZERO);
            gSaveBlock2Ptr->hallRecords2P[j][k].name1[0] = EOS;
            gSaveBlock2Ptr->hallRecords2P[j][k].name2[0] = EOS;
            gSaveBlock2Ptr->hallRecords2P[j][k].winStreak = 0;
        }
    }
#endif //FREE_RECORD_MIXING_HALL_RECORDS
}

void SaveGameFrontier(void)
{
    s32 i;
    struct Pokemon *monsParty = AllocZeroed(sizeof(struct Pokemon) * PARTY_SIZE);

    for (i = 0; i < PARTY_SIZE; i++)
        monsParty[i] = gPlayerParty[i];

    i = gPlayerPartyCount;
    LoadPlayerParty();
    SetContinueGameWarpStatusToDynamicWarp();
    TrySavingData(SAVE_LINK);
    ClearContinueGameWarpStatus2();
    gPlayerPartyCount = i;

    for (i = 0; i < PARTY_SIZE; i++)
        gPlayerParty[i] = monsParty[i];

    Free(monsParty);
}

// Frontier Brain functions.
u8 GetFrontierBrainTrainerPicIndex(void)
{
    s32 facility;

    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
        facility = GetRecordedBattleFrontierFacility();
    else
        facility = VarGet(VAR_FRONTIER_FACILITY);

    return GetTrainerPicFromId(sFrontierBrainTrainerIds[facility]);
}

u8 GetFrontierBrainTrainerClass(void)
{
    s32 facility;

    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
        facility = GetRecordedBattleFrontierFacility();
    else
        facility = VarGet(VAR_FRONTIER_FACILITY);

    return GetTrainerClassFromId(sFrontierBrainTrainerIds[facility]);
}

void CopyFrontierBrainTrainerName(u8 *dst)
{
    s32 i;
    s32 facility;
    const u8 *trainerName;

    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
        facility = GetRecordedBattleFrontierFacility();
    else
        facility = VarGet(VAR_FRONTIER_FACILITY);

    trainerName = GetTrainerNameFromId(sFrontierBrainTrainerIds[facility]);
    for (i = 0; i < PLAYER_NAME_LENGTH; i++)
        dst[i] = trainerName[i];

    dst[i] = EOS;
}

bool8 IsFrontierBrainFemale(void)
{
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);
    return sFrontierBrainObjEventGfx[facility][1];
}

void SetFrontierBrainObjEventGfx_2(void)
{
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);
    VarSet(VAR_OBJ_GFX_ID_0, sFrontierBrainObjEventGfx[facility][0]);
}

#define FRONTIER_BRAIN_OTID 61226

void CreateFrontierBrainPokemon(void)
{
    s32 i, j;
    s32 selectedMonBits;
    s32 monPartyId;
    s32 monLevel = 0;
    s32 teamSize = FRONTIER_PARTY_SIZE;
    u8 friendship;
    u8 abilitySlot;
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);
    s32 symbol = GetFronterBrainSymbol();

    if (facility == FRONTIER_FACILITY_DOME)
        selectedMonBits = GetDomeTrainerSelectedMons(TrainerIdToDomeTournamentId(TRAINER_FRONTIER_BRAIN));
    else if (facility == FRONTIER_FACILITY_TOWER || facility == FRONTIER_FACILITY_PYRAMID)
    {
        teamSize = FRONTIER_PARTY_SIZE_FULL;
        selectedMonBits = (1 << FRONTIER_PARTY_SIZE_FULL) - 1; // all 6 mons selected
    }
    else
        selectedMonBits = (1 << FRONTIER_PARTY_SIZE) - 1; // 3 mons selected

    ZeroEnemyPartyMons();
    monPartyId = 0;
    monLevel = SetFacilityPtrsGetLevel();
    for (i = 0; i < teamSize; selectedMonBits >>= 1, i++)
    {
        if (!(selectedMonBits & 1))
            continue;

        do
        {
            j = Random32(); //should just be one while loop, but that doesn't match
        } while (sFrontierBrainsMons[facility][symbol][i].nature != GetNatureFromPersonality(j));
        CreateMon(&gEnemyParty[monPartyId],
                  sFrontierBrainsMons[facility][symbol][i].species,
                  monLevel,
                  sFrontierBrainsMons[facility][symbol][i].fixedIV,
                  TRUE, j,
                  OT_ID_PRESET, FRONTIER_BRAIN_OTID);
        SetMonData(&gEnemyParty[monPartyId], MON_DATA_HELD_ITEM, &sFrontierBrainsMons[facility][symbol][i].heldItem);
        // SetMonData(&gEnemyParty[monPartyId], MON_DATA_IS_SHINY, &sFrontierBrainsMons[facility][symbol][i].isShiny); // Not implemented
        for (j = 0; j < NUM_STATS; j++)
            SetMonData(&gEnemyParty[monPartyId], MON_DATA_HP_EV + j, &sFrontierBrainsMons[facility][symbol][i].evs[j]);
        friendship = MAX_FRIENDSHIP;
        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            SetMonMoveSlot(&gEnemyParty[monPartyId], sFrontierBrainsMons[facility][symbol][i].moves[j], j);
            if (gMovesInfo[sFrontierBrainsMons[facility][symbol][i].moves[j]].effect == EFFECT_FRUSTRATION)
                friendship = 0;
        }
        SetMonData(&gEnemyParty[monPartyId], MON_DATA_FRIENDSHIP, &friendship);
        j = sFrontierBrainsMons[facility][symbol][i].isShiny;
        SetMonData(&gEnemyParty[monPartyId], MON_DATA_IS_SHINY, &j);
        abilitySlot = 0; 
        for (int j = 0; j < NUM_ABILITY_SLOTS; j++)
        {
            if (GetSpeciesAbility(sFrontierBrainsMons[facility][symbol][i].species, j) == sFrontierBrainsMons[facility][symbol][i].ability)
            {
                abilitySlot = j;
                break;
            }
        }
        SetMonData(&gEnemyParty[monPartyId], MON_DATA_ABILITY_NUM, &abilitySlot);
        CalculateMonStats(&gEnemyParty[monPartyId]);
        monPartyId++;
    }
}

u16 GetFrontierBrainMonSpecies(u8 monId)
{
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);
    s32 symbol = GetFronterBrainSymbol();

    return sFrontierBrainsMons[facility][symbol][monId].species;
}

void SetFrontierBrainObjEventGfx(u8 facility)
{
    gTrainerBattleOpponent_A = TRAINER_FRONTIER_BRAIN;
    VarSet(VAR_OBJ_GFX_ID_0, sFrontierBrainObjEventGfx[facility][0]);
}

u16 GetFrontierBrainMonMove(u8 monId, u8 moveSlotId)
{
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);
    s32 symbol = GetFronterBrainSymbol();

    return sFrontierBrainsMons[facility][symbol][monId].moves[moveSlotId];
}

u8 GetFrontierBrainMonNature(u8 monId)
{
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);
    s32 symbol = GetFronterBrainSymbol();

    return sFrontierBrainsMons[facility][symbol][monId].nature;
}

u8 GetFrontierBrainMonEvs(u8 monId, u8 evStatId)
{
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);
    s32 symbol = GetFronterBrainSymbol();

    return sFrontierBrainsMons[facility][symbol][monId].evs[evStatId];
}

s32 GetFronterBrainSymbol(void)
{
    s32 facility = VarGet(VAR_FRONTIER_FACILITY);
    s32 symbol = GetPlayerSymbolCountForFacility(facility);

    if (symbol == 2)
    {
        u16 winStreak = GetCurrentFacilityWinStreak();
        if (winStreak + sFrontierBrainStreakAppearances[facility][3] == sFrontierBrainStreakAppearances[facility][0])
            symbol = 0;
        else if (winStreak + sFrontierBrainStreakAppearances[facility][3] == sFrontierBrainStreakAppearances[facility][1])
            symbol = 1;
       else if (winStreak + sFrontierBrainStreakAppearances[facility][3] > sFrontierBrainStreakAppearances[facility][1]
                 && (winStreak + sFrontierBrainStreakAppearances[facility][3] - sFrontierBrainStreakAppearances[facility][1]) % sFrontierBrainStreakAppearances[facility][2] == 0)
            symbol = 1;
    }
    return symbol;
}

// Called for intro speech as well despite the fact that its handled in the map scripts files instead
static void CopyFrontierBrainText(bool8 playerWonText)
{
    s32 facility;
    s32 symbol;

    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
    {
        facility = GetRecordedBattleFrontierFacility();
        symbol = GetRecordedBattleFronterBrainSymbol();
    }
    else
    {
        facility = VarGet(VAR_FRONTIER_FACILITY);
        symbol = GetFronterBrainSymbol();
    }

    switch (playerWonText)
    {
    case FALSE:
        StringCopy(gStringVar4, sFrontierBrainPlayerLostTexts[symbol][facility]);
        break;
    case TRUE:
        StringCopy(gStringVar4, sFrontierBrainPlayerWonTexts[symbol][facility]);
        break;
    }
}

void ClearEnemyPartyAfterChallenge()
{
    // We zero out the Enemy's party here when the player either wins or loses the challenge since we
    // can't do it the usual way in FreeResetData_ReturnToOvOrDoEvolutions() in battle_main.c due to the
    // way facilities like the Battle Factory and the Slateport Battle Tent work
    if (gSpecialVar_0x8005 == 0)
    {
        ZeroEnemyPartyMons();
    }
}
