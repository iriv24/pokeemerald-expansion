#include "constants/abilities.h"
#include "species_info/shared_dex_text.h"

// Macros for ease of use.

#define EVOLUTION(...) (const struct Evolution[]) { __VA_ARGS__, { EVOLUTIONS_END }, }

#if P_FOOTPRINTS
#define FOOTPRINT(sprite) .footprint = gMonFootprint_## sprite,
#else
#define FOOTPRINT(sprite)
#endif

#if B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE
#define SHADOW(x, y, size)  .enemyShadowXOffset = x, .enemyShadowYOffset = y, .enemyShadowSize = size,
#define NO_SHADOW           .suppressEnemyShadow = TRUE,
#else
#define SHADOW(x, y, size)  .enemyShadowXOffset = 0, .enemyShadowYOffset = 0, .enemyShadowSize = 0,
#define NO_SHADOW           .suppressEnemyShadow = FALSE,
#endif

#define SIZE_32x32 1
#define SIZE_64x64 0

// Set .compressed = OW_GFX_COMPRESS
#define COMP OW_GFX_COMPRESS

#if OW_POKEMON_OBJECT_EVENTS
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
#define OVERWORLD_PAL(...)                                  \
    .overworldPalette = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPalette = DEFAULT_2(NULL, __VA_ARGS__),
#if P_GENDER_DIFFERENCES
#define OVERWORLD_PAL_FEMALE(...)                                 \
    .overworldPaletteFemale = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPaletteFemale = DEFAULT_2(NULL, __VA_ARGS__),
#else
#define OVERWORLD_PAL_FEMALE(...)
#endif //P_GENDER_DIFFERENCES
#else
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE

#define OVERWORLD(picTable, _size, shadow, _tracks, ...)                                    \
.overworldData = {                                                                          \
    .tileTag = TAG_NONE,                                                                    \
    .paletteTag = OBJ_EVENT_PAL_TAG_DYNAMIC,                                                \
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,                                         \
    .size = (_size == SIZE_32x32 ? 512 : 2048),                                             \
    .width = (_size == SIZE_32x32 ? 32 : 64),                                               \
    .height = (_size == SIZE_32x32 ? 32 : 64),                                              \
    .paletteSlot = PALSLOT_NPC_1,                                                           \
    .shadowSize = shadow,                                                                   \
    .inanimate = FALSE,                                                                     \
    .compressed = COMP,                                                                     \
    .tracks = _tracks,                                                                      \
    .oam = (_size == SIZE_32x32 ? &gObjectEventBaseOam_32x32 : &gObjectEventBaseOam_64x64), \
    .subspriteTables = (_size == SIZE_32x32 ? sOamTables_32x32 : sOamTables_64x64),         \
    .anims = sAnimTable_Following,                                                          \
    .images = picTable,                                                                     \
    .affineAnims = gDummySpriteAffineAnimTable,                                             \
},                                                                                          \
    OVERWORLD_PAL(__VA_ARGS__)

#define OVERWORLD_SET_ANIM(picTable, _size, shadow, _tracks, _anims, ...)                   \
.overworldData = {                                                                          \
    .tileTag = TAG_NONE,                                                                    \
    .paletteTag = OBJ_EVENT_PAL_TAG_DYNAMIC,                                                \
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,                                         \
    .size = (_size == SIZE_32x32 ? 512 : 2048),                                             \
    .width = (_size == SIZE_32x32 ? 32 : 64),                                               \
    .height = (_size == SIZE_32x32 ? 32 : 64),                                              \
    .paletteSlot = PALSLOT_NPC_1,                                                           \
    .shadowSize = shadow,                                                                   \
    .inanimate = FALSE,                                                                     \
    .compressed = COMP,                                                                     \
    .tracks = _tracks,                                                                      \
    .oam = (_size == SIZE_32x32 ? &gObjectEventBaseOam_32x32 : &gObjectEventBaseOam_64x64), \
    .subspriteTables = (_size == SIZE_32x32 ? sOamTables_32x32 : sOamTables_64x64),         \
    .anims = _anims,                                                                        \
    .images = picTable,                                                                     \
    .affineAnims = gDummySpriteAffineAnimTable,                                             \
},                                                                                          \
    OVERWORLD_PAL(__VA_ARGS__)

#if P_GENDER_DIFFERENCES
#define OVERWORLD_FEMALE(picTable, _size, shadow, _tracks, ...)                             \
.overworldDataFemale = {                                                                    \
    .tileTag = TAG_NONE,                                                                    \
    .paletteTag = OBJ_EVENT_PAL_TAG_DYNAMIC,                                                \
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,                                         \
    .size = (_size == SIZE_32x32 ? 512 : 2048),                                             \
    .width = (_size == SIZE_32x32 ? 32 : 64),                                               \
    .height = (_size == SIZE_32x32 ? 32 : 64),                                              \
    .paletteSlot = PALSLOT_NPC_1,                                                           \
    .shadowSize = shadow,                                                                   \
    .inanimate = FALSE,                                                                     \
    .compressed = COMP,                                                                     \
    .tracks = _tracks,                                                                      \
    .oam = (_size == SIZE_32x32 ? &gObjectEventBaseOam_32x32 : &gObjectEventBaseOam_64x64), \
    .subspriteTables = (_size == SIZE_32x32 ? sOamTables_32x32 : sOamTables_64x64),         \
    .anims = sAnimTable_Following,                                                          \
    .images = picTable,                                                                     \
    .affineAnims = gDummySpriteAffineAnimTable,                                             \
},                                                                                          \
    OVERWORLD_PAL_FEMALE(__VA_ARGS__)
#else
#define OVERWORLD_FEMALE(picTable, _size, shadow, _tracks, ...)
#endif //P_GENDER_DIFFERENCES

#else
#define OVERWORLD(picTable, _size, shadow, _tracks, ...)
#define OVERWORLD_SET_ANIM(picTable, _size, shadow, _tracks, _anims, ...)
#define OVERWORLD_FEMALE(picTable, _size, shadow, _tracks, ...)
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_POKEMON_OBJECT_EVENTS

// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

#define MON_TYPES(type1, ...) { type1, DEFAULT(type1, __VA_ARGS__) }
#define MON_EGG_GROUPS(group1, ...) { group1, DEFAULT(group1, __VA_ARGS__) }

#define FLIP    0
#define NO_FLIP 1

const struct SpeciesInfo gSpeciesInfo[] =
{
    [SPECIES_NONE] =
    {
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = gFallbackPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_None,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
    #if OW_POKEMON_OBJECT_EVENTS
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
    #endif
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },

    #include "species_info/gen_1_families.h"
    #include "species_info/gen_2_families.h"
    #include "species_info/gen_3_families.h"
    #include "species_info/gen_4_families.h"
    #include "species_info/gen_5_families.h"
    #include "species_info/gen_6_families.h"
    #include "species_info/gen_7_families.h"
    #include "species_info/gen_8_families.h"
    #include "species_info/gen_9_families.h"

    [SPECIES_EGG] =
    {
        .frontPic = gMonFrontPic_Egg,
        .frontPicSize = MON_COORDS_SIZE(24, 24),
        .frontPicYOffset = 20,
        .backPic = gMonFrontPic_Egg,
        .backPicSize = MON_COORDS_SIZE(24, 24),
        .backPicYOffset = 20,
        .palette = gMonPalette_Egg,
        .shinyPalette = gMonPalette_Egg,
        .iconSprite = gMonIcon_Egg,
        .iconPalIndex = 1,
    },

    /* You may add any custom species below this point based on the following structure: */

    /*
    [SPECIES_NONE] =
    {
        .baseHP        = 1,
        .baseAttack    = 1,
        .baseDefense   = 1,
        .baseSpeed     = 1,
        .baseSpAttack  = 1,
        .baseSpDefense = 1,
        .types = MON_TYPES(TYPE_MYSTERY),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NONE, ABILITY_CURSED_BODY, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_None,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CircledQuestionMark,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_CircledQuestionMarkF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .paletteFemale = gMonPalette_CircledQuestionMarkF,
        .shinyPaletteFemale = gMonShinyPalette_CircledQuestionMarkF,
        .iconSpriteFemale = gMonIcon_QuestionMarkF,
        .iconPalIndexFemale = 1,
#endif //P_GENDER_DIFFERENCES
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },
    */
   #if P_MEGA_EVOLUTIONS
    [SPECIES_LUXRAY_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 130,
        .baseDefense   = 79,
        .baseSpeed     = 130,
        .baseSpAttack  = 110,
        .baseSpDefense = 79,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_DARK),
        .catchRate = 45,
        .expYield = 262,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_STRONG_JAW, ABILITY_STRONG_JAW },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Luxray"),
        .cryId = CRY_MANECTRIC_MEGA,
        .natDexNum = NATIONAL_DEX_LUXRAY,
        .categoryName = _("Gleam Eyes"),
        .height = 14,
        .weight = 460,
        .description = COMPOUND_STRING(
            "It has eyes which can see through\n"
            "anything. Luxray's ability to see\n"
            "through objects comes in handy when\n"
            "it's scouting for danger."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LuxrayMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_LuxrayMega,
        //.frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_LuxrayMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_LuxrayMega,
        .shinyPalette = gMonShinyPalette_LuxrayMega,
        .iconSprite = gMonIcon_Luxray,
        .iconPalIndex = 0,
    #if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_LuxrayMega,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_LuxrayMega,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
    #endif //P_GENDER_DIFFERENCES
        FOOTPRINT(Luxray)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sLuxrayLevelUpLearnset,
        .teachableLearnset = sLuxrayTeachableLearnset,
        .formSpeciesIdTable = sLuxrayFormSpeciesIdTable,
        .formChangeTable = sLuxrayFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },

    [SPECIES_TORTERRA_MEGA] =
    {
        .baseHP        = 115, //+20
        .baseAttack    = 139, //+30
        .baseDefense   = 135, //+30
        .baseSpeed     = 56,
        .baseSpAttack  = 75,
        .baseSpDefense = 105, //+20
        .types = MON_TYPES(TYPE_GRASS, TYPE_GROUND),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 263,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 236,
    #else
        .expYield = 208,
    #endif
        .evYield_Attack = 2,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_ICE_EATER, ABILITY_ICE_EATER, ABILITY_ICE_EATER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Torterra"),
        .cryId = CRY_TORTERRA,
        .natDexNum = NATIONAL_DEX_TORTERRA,
        .categoryName = _("Continent"),
        .height = 22,
        .weight = 3100,
        .description = COMPOUND_STRING(
            "Some Pokémon are born on a Torterra's\n"
            "back and spend their entire life there.\n"
            "Ancient people imagined that beneath \n"
            "the ground, a gigantic Torterra dwelled."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_TorterraMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TorterraMega,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_TorterraMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_TorterraMega,
        .shinyPalette = gMonShinyPalette_Torterra,
        .iconSprite = gMonIcon_Torterra,
        .iconPalIndex = 1,
        FOOTPRINT(Torterra)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sTorterraLevelUpLearnset,
        .teachableLearnset = sTorterraTeachableLearnset,
        .formSpeciesIdTable = sTorterraFormSpeciesIdTable,
        .formChangeTable = sTorterraFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },

    [SPECIES_EMPOLEON_MEGA_O] =
    {
        .baseHP        = 100, //+16
        .baseAttack    = 150, //+64
        .baseDefense   = 75,  //-13
        .baseSpeed     = 120, //+60
        .baseSpAttack  = 110, //-1
        .baseSpDefense = 75,  //-26
        .types = MON_TYPES(TYPE_WATER, TYPE_STEEL),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 210,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_EMPERORS_PRESENCE, ABILITY_EMPERORS_PRESENCE, ABILITY_EMPERORS_PRESENCE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Empoleon"),
        .cryId = CRY_EMPOLEON,
        .natDexNum = NATIONAL_DEX_EMPOLEON,
        .categoryName = _("Emperor"),
        .height = 17,
        .weight = 845,
        .description = COMPOUND_STRING(
            "The three horns that extend from its beak\n"
            "attest to its power. It avoids unnecessary\n"
            "disputes, but it will decimate anything\n"
            "that threatens its pride."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_EmpoleonMegaO,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_EmpoleonMegaO,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_EmpoleonMegaO,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_EmpoleonMegaO,
        .shinyPalette = gMonShinyPalette_EmpoleonMegaO,
        .iconSprite = gMonIcon_Empoleon,
        .iconPalIndex = 0,
        FOOTPRINT(Empoleon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sEmpoleonLevelUpLearnset,
        .teachableLearnset = sEmpoleonTeachableLearnset,
        .formSpeciesIdTable = sEmpoleonFormSpeciesIdTable,
        .formChangeTable = sEmpoleonFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },

    [SPECIES_EMPOLEON_MEGA_D] =
    {
        .baseHP        = 140, //+56
        .baseAttack    = 75,  //-11
        .baseDefense   = 145, //+57
        .baseSpeed     = 50,  //-10
        .baseSpAttack  = 75,  //-36
        .baseSpDefense = 145, //+44
        .types = MON_TYPES(TYPE_WATER, TYPE_STEEL),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 210,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Empoleon"),
        .cryId = CRY_EMPOLEON,
        .natDexNum = NATIONAL_DEX_EMPOLEON,
        .categoryName = _("Emperor"),
        .height = 17,
        .weight = 1600,
        .description = COMPOUND_STRING(
            "The three horns that extend from its beak\n"
            "attest to its power. It avoids unnecessary\n"
            "disputes, but it will decimate anything\n"
            "that threatens its pride."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_EmpoleonMegaD,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_EmpoleonMegaD,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_EmpoleonMegaD,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_EmpoleonMegaD,
        .shinyPalette = gMonShinyPalette_EmpoleonMegaD,
        .iconSprite = gMonIcon_Empoleon,
        .iconPalIndex = 0,
        FOOTPRINT(Empoleon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sEmpoleonLevelUpLearnset,
        .teachableLearnset = sEmpoleonTeachableLearnset,
        .formSpeciesIdTable = sEmpoleonFormSpeciesIdTable,
        .formChangeTable = sEmpoleonFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },

    [SPECIES_INFERNAPE_MEGA] =
    {
        .baseHP        = 76,
        .baseAttack    = 137, //+33
        .baseDefense   = 71,
        .baseSpeed     = 142, //+34
        .baseSpAttack  = 137, //+33
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FIGHTING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 267,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 240,
    #else
        .expYield = 209,
    #endif
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Infernape"),
        .cryId = CRY_INFERNAPE,
        .natDexNum = NATIONAL_DEX_INFERNAPE,
        .categoryName = _("Flame"),
        .height = 12,
        .weight = 700,
        .description = COMPOUND_STRING(
            "Its crown of fire is indicative of its\n"
            "fiery nature. It uses a special kind of\n"
            "martial arts involving all of its limbs to\n"
            "take on any opponent."),
        .pokemonScale = 282,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_InfernapeMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_InfernapeMega,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_InfernapeMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_InfernapeMega,
        .shinyPalette = gMonShinyPalette_InfernapeMega,
        .iconSprite = gMonIcon_Infernape,
        .iconPalIndex = 0,
        FOOTPRINT(Infernape)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sInfernapeLevelUpLearnset,
        .teachableLearnset = sInfernapeTeachableLearnset,
        .formSpeciesIdTable = sInfernapeFormSpeciesIdTable,
        .formChangeTable = sInfernapeFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },

    [SPECIES_SLAKING_MEGA] =
    {
        .baseHP        = 150,
        .baseAttack    = 160,
        .baseDefense   = 110,
        .baseSpeed     = 110,
        .baseSpAttack  = 60,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 285,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 252,
    #else
        .expYield = 210,
    #endif
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_COMATOSE, ABILITY_COMATOSE, ABILITY_COMATOSE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Slaking"),
        .cryId = CRY_SLAKING,
        .natDexNum = NATIONAL_DEX_SLAKING,
        .categoryName = _("Lazy"),
        .height = 20,
        .weight = 1305,
        .description = COMPOUND_STRING(
            "Hordes of Slaking gather around trees\n"
            "when fruits come into season. They wait\n"
            "around patiently for ripened fruits to fall\n"
            "out of the trees."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_SlakingMega,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SlakingMega,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_SlakingMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_SlakingMega,
        .shinyPalette = gMonShinyPalette_Slaking,
        .iconSprite = gMonIcon_Slaking,
        .iconPalIndex = 2,
        FOOTPRINT(Slaking)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSlakingLevelUpLearnset,
        .teachableLearnset = sSlakingTeachableLearnset,
        .formSpeciesIdTable = sSlakingFormSpeciesIdTable,
        .formChangeTable = sSlakingFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },

    [SPECIES_ROSERADE_MEGA] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 85,
        .baseSpeed     = 130,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 75,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 258,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 232,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 227,
    #else
        .expYield = 204,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_TECHNICIAN, ABILITY_TECHNICIAN, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Roserade"),
        .cryId = CRY_ROSERADE,
        .natDexNum = NATIONAL_DEX_ROSERADE,
        .categoryName = _("Bouquet"),
        .height = 9,
        .weight = 200,
        .description = COMPOUND_STRING(
            "Its sweet aroma attracts prey.\n"
            "With the movements of a dancer,\n"
            "it strikes with whips that are densely\n"
            "lined with poison thorns."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RoseradeMega,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_RoseradeMega,
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_RoseradeMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_RoseradeMega,
        .shinyPalette = gMonShinyPalette_Roserade,
        .iconSprite = gMonIcon_Roserade,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RoseradeMega,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_RoseradeMega,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        FOOTPRINT(Roserade)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sRoseradeLevelUpLearnset,
        .teachableLearnset = sRoseradeTeachableLearnset,
        .formSpeciesIdTable = sRoseradeFormSpeciesIdTable,
        .formChangeTable = sRoseradeFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },

    [SPECIES_DUSKNOIR_MEGA] =
    {
        .baseHP        = 105, // + 60
        .baseAttack    = 110, // + 10
        .baseDefense   = 150, // + 15 
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 150, // + 15
        .types = MON_TYPES(TYPE_GHOST, TYPE_DARK),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 263,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 236,
    #else
        .expYield = 210,
    #endif
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = {ABILITY_PRANKSTER,  ABILITY_PRANKSTER,  ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dusknoir"),
        .cryId = CRY_DUSKNOIR,
        .natDexNum = NATIONAL_DEX_DUSKNOIR,
        .categoryName = _("Gripper"),
        .height = 22,
        .weight = 1066,
        .description = COMPOUND_STRING(
            "This feared Pokémon is said to travel to\n"
            "worlds unknown. Some even believe that\n"
            "it takes lost spirits into its pliant body\n"
            "and guides them home."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_DusknoirMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_DusknoirMega,
        .frontAnimId = ANIM_H_SLIDE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_DusknoirMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_DusknoirMega,
        .shinyPalette = gMonShinyPalette_DusknoirMega,
        .iconSprite = gMonIcon_Dusknoir,
        .iconPalIndex = 2,
        SHADOW(6, 13, SHADOW_SIZE_M)
        FOOTPRINT(Dusknoir)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sDusknoirLevelUpLearnset,
        .teachableLearnset = sDusknoirTeachableLearnset,
        .formSpeciesIdTable = sDusknoirFormSpeciesIdTable,
        .formChangeTable = sDusknoirFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS

        [SPECIES_DARMANITAN_GALAR_ZEN_MODE_TWO] =
        {
            .baseHP        = 105,
            .baseAttack    = 160,
            .baseDefense   = 55,
            .baseSpeed     = 135,
            .baseSpAttack  = 30,
            .baseSpDefense = 55,
            .types = MON_TYPES(TYPE_ICE, TYPE_FIRE),
            .catchRate = 60,
            .expYield = (P_UPDATED_EXP_YIELDS >= GEN_7) ? 189 : 168,
            .evYield_SpAttack = 2,
            .genderRatio = PERCENT_FEMALE(50),
            .eggCycles = 20,
            .friendship = STANDARD_FRIENDSHIP,
            .growthRate = GROWTH_MEDIUM_SLOW,
            .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
            .abilities = { ABILITY_ZEN_MODE, ABILITY_ZEN_MODE, ABILITY_ZEN_MODE },
            .bodyColor = BODY_COLOR_WHITE,
            .speciesName = _("Darmanitan"),
            .cryId = CRY_DARMANITAN,
            .natDexNum = NATIONAL_DEX_DARMANITAN,
            .categoryName = _("Blazing"),
            .height = 17,
            .weight = 1200,
            .description = COMPOUND_STRING(
                "Darmanitan takes this form when\n"
                "enraged. It won't stop spewing flames\n"
                "until its rage has settled, even if\n"
                "its body starts to melt."),
            .pokemonScale = 272,
            .pokemonOffset = 3,
            .trainerScale = 256,
            .trainerOffset = 0,
            .frontPic = gMonFrontPic_DarmanitanGalarZen,
            .frontPicSize = MON_COORDS_SIZE(48, 64),
            .frontPicYOffset = 2,
            .frontAnimFrames = sAnims_DarmanitanGalarZen,
            //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
            .backPic = gMonBackPic_DarmanitanGalarZen,
            .backPicSize = MON_COORDS_SIZE(64, 64),
            .backPicYOffset = 1,
            //.backAnimId = BACK_ANIM_NONE,
            .palette = gMonPalette_DarmanitanGalarZen,
            .shinyPalette = gMonShinyPalette_DarmanitanGalarZen,
            .iconSprite = gMonIcon_DarmanitanGalarZen,
            .iconPalIndex = 0,
            FOOTPRINT(Darmanitan)
            .levelUpLearnset = sDarmanitanGalarLevelUpLearnset,
            .teachableLearnset = sDarmanitanGalarTeachableLearnset,
            .randomizerMode = MON_RANDOMIZER_INVALID
        },

        [SPECIES_DIALGA_PRIMAL] =
        {
            .baseHP        = 100,
            .baseAttack    = 120,
            .baseDefense   = 150,
            .baseSpeed     = 90,
            .baseSpAttack  = 185,
            .baseSpDefense = 130,
            .types = MON_TYPES(TYPE_STEEL, TYPE_DRAGON),
            .catchRate = 3,
            .expYield = DIALGA_EXP_YIELD,
            .evYield_SpAttack = 3,
            .genderRatio = MON_GENDERLESS,
            .eggCycles = 120,
            .friendship = 0,
            .growthRate = GROWTH_SLOW,
            .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
            .abilities = { ABILITY_PRIMAL_ARMOR, ABILITY_PRIMAL_ARMOR, ABILITY_PRIMAL_ARMOR },
            .bodyColor = BODY_COLOR_WHITE,
            .speciesName = _("Dialga"),
            .cryId = CRY_DIALGA,
            .natDexNum = NATIONAL_DEX_DIALGA,
            .categoryName = _("Temporal"),
            .height = 54,
            .weight = 6830,
            .description = COMPOUND_STRING(
                "A Pokémon spoken of in legend.\n"
                "It completely controls the flow of time.\n"
                "It uses its power to travel at will\n"
                "through the past and future."),
            .pokemonScale = 256,
            .pokemonOffset = 0,
            .trainerScale = 721,
            .trainerOffset = 19,
            .frontPic = gMonFrontPic_DialgaPrimal,
            .frontPicSize = MON_COORDS_SIZE(64, 64),
            .frontPicYOffset = 0,
            .frontAnimFrames = sAnims_Dialga,
            .frontAnimId = ANIM_H_SHAKE,
            .backPic = gMonBackPic_DialgaPrimal,
            .backPicSize = MON_COORDS_SIZE(64, 64),
            .backPicYOffset = 0,
            .backAnimId = BACK_ANIM_V_SHAKE,
            .palette = gMonPalette_DialgaPrimal,
            .shinyPalette = gMonShinyPalette_Dialga,
            .iconSprite = gMonIcon_Dialga,
            .iconPalIndex = 2,
            FOOTPRINT(Dialga)
            .isLegendary = TRUE,
            .isPrimalReversion = TRUE,
            .levelUpLearnset = sDialgaLevelUpLearnset,
            .teachableLearnset = sDialgaTeachableLearnset,
            .formSpeciesIdTable = sDialgaFormSpeciesIdTable,
            .formChangeTable = sDialgaFormChangeTable,
            .randomizerMode = MON_RANDOMIZER_INVALID
        },

        [SPECIES_PALKIA_PRIMAL] =
        {
            .baseHP        = 90,
            .baseAttack    = 120,
            .baseDefense   = 130,
            .baseSpeed     = 100,
            .baseSpAttack  = 185,
            .baseSpDefense = 150,
            .types = MON_TYPES(TYPE_WATER, TYPE_DRAGON),
            .catchRate = 3,
            .expYield = PALKIA_EXP_YIELD,
            .evYield_SpAttack = 3,
            .genderRatio = MON_GENDERLESS,
            .eggCycles = 120,
            .friendship = 0,
            .growthRate = GROWTH_SLOW,
            .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
            .abilities = { ABILITY_PRIMAL_ARMOR, ABILITY_PRIMAL_ARMOR, ABILITY_PRIMAL_ARMOR },
            .bodyColor = BODY_COLOR_PURPLE,
            .speciesName = _("Palkia"),
            .cryId = CRY_PALKIA,
            .natDexNum = NATIONAL_DEX_PALKIA,
            .categoryName = _("Spatial"),
            .height = 42,
            .weight = 3360,
            .description = COMPOUND_STRING(
                "Palkia has the ability to distort space.\n"
                "Its total control over the boundaries of\n"
                "space enable it to transport itself to\n"
                "faraway places and other dimensions."),
            .pokemonScale = 256,
            .pokemonOffset = 0,
            .trainerScale = 650,
            .trainerOffset = 16,
            .frontPic = gMonFrontPic_PalkiaPrimal,
            .frontPicSize = MON_COORDS_SIZE(64, 64),
            .frontPicYOffset = 0,
            .frontAnimFrames = sAnims_Palkia,
            .frontAnimId = ANIM_V_SHAKE,
            .backPic = gMonBackPic_PalkiaPrimal,
            .backPicSize = MON_COORDS_SIZE(64, 64),
            .backPicYOffset = 6,
            .backAnimId = BACK_ANIM_H_SHAKE,
            .palette = gMonPalette_PalkiaPrimal,
            .shinyPalette = gMonShinyPalette_Palkia,
            .iconSprite = gMonIcon_Palkia,
            .iconPalIndex = 2,
            FOOTPRINT(Palkia)
            .isLegendary = TRUE,
            .isPrimalReversion = TRUE,
            .levelUpLearnset = sPalkiaLevelUpLearnset,
            .teachableLearnset = sPalkiaTeachableLearnset,
            .formSpeciesIdTable = sPalkiaFormSpeciesIdTable,
            .formChangeTable = sPalkiaFormChangeTable,
            .randomizerMode = MON_RANDOMIZER_INVALID
        },

        [SPECIES_DIANCIE_RUBY] =
        {
            .baseHP        = 50,
            .baseAttack    = 100,
            .baseDefense   = 150,
            .baseSpeed     = 50,
            .baseSpAttack  = 100,
            .baseSpDefense = 150,
            .types = MON_TYPES(TYPE_FIRE, TYPE_FAIRY),
            .catchRate = 3,
            .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
            .evYield_Defense = 1,
            .evYield_SpDefense = 2,
            .genderRatio = MON_GENDERLESS,
            .eggCycles = 25,
            .friendship = STANDARD_FRIENDSHIP,
            .growthRate = GROWTH_SLOW,
            .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
            .abilities = {    ABILITY_CLEAR_BODY,   ABILITY_NONE,   ABILITY_NONE   },
            .bodyColor = BODY_COLOR_PINK,
            .speciesName = _("Diancie"),
            .cryId = CRY_DIANCIE,
            .natDexNum = NATIONAL_DEX_DIANCIE,
            .categoryName = _("Jewel"),
            .height = 7,
            .weight = 88,
            .description = COMPOUND_STRING(
                "A sudden transformation of Carbink,\n"
                "its pink, glimmering body is said to be\n"
                "the loveliest sight in the whole world.\n"
                "It creates diamonds between its hands."),
            .pokemonScale = 365,
            .pokemonOffset = 12,
            .trainerScale = 256,
            .trainerOffset = 0,
            .frontPic = gMonFrontPic_DiancieRuby, // here
            .frontPicSize = MON_COORDS_SIZE(40, 64),
            .frontPicYOffset = 1,
            .frontAnimFrames = sAnims_Diancie,
            .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
            .backPic = gMonBackPic_DiancieRuby, // here
            .backPicSize = MON_COORDS_SIZE(64, 64),
            .backPicYOffset = 7,
            //.backAnimId = BACK_ANIM_NONE,
            .palette = gMonPalette_DiancieRuby, // here
            .shinyPalette = gMonShinyPalette_DiancieRuby, // here
            .iconSprite = gMonIcon_DiancieRuby, // here
            .iconPalIndex = 4,
            SHADOW(0, 13, SHADOW_SIZE_S)
            FOOTPRINT(Diancie)
            OVERWORLD(
                sPicTable_DiancieRuby,
                SIZE_32x32,
                SHADOW_SIZE_M,
                TRACKS_FOOT,
                gOverworldPalette_DiancieRuby,
                gShinyOverworldPalette_DiancieRuby
            )
            .isMythical = TRUE,
            .isFrontierBanned = TRUE,
            .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
            .levelUpLearnset = sDiancieLevelUpLearnset,
            .teachableLearnset = sDiancieTeachableLearnset,
            //.formSpeciesIdTable = sDiancieFormSpeciesIdTable,
            //.formChangeTable = sDiancieFormChangeTable,
        },

        [SPECIES_DIANCIE_SAPPHIRE] =
        {
            .baseHP        = 50,
            .baseAttack    = 100,
            .baseDefense   = 150,
            .baseSpeed     = 50,
            .baseSpAttack  = 100,
            .baseSpDefense = 150,
            .types = MON_TYPES(TYPE_WATER, TYPE_FAIRY),
            .catchRate = 3,
            .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
            .evYield_Defense = 1,
            .evYield_SpDefense = 2,
            .genderRatio = MON_GENDERLESS,
            .eggCycles = 25,
            .friendship = STANDARD_FRIENDSHIP,
            .growthRate = GROWTH_SLOW,
            .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
            .abilities = {    ABILITY_CLEAR_BODY,   ABILITY_NONE,   ABILITY_NONE   },
            .bodyColor = BODY_COLOR_PINK,
            .speciesName = _("Diancie"),
            .cryId = CRY_DIANCIE,
            .natDexNum = NATIONAL_DEX_DIANCIE,
            .categoryName = _("Jewel"),
            .height = 7,
            .weight = 88,
            .description = COMPOUND_STRING(
                "A sudden transformation of Carbink,\n"
                "its pink, glimmering body is said to be\n"
                "the loveliest sight in the whole world.\n"
                "It creates diamonds between its hands."),
            .pokemonScale = 365,
            .pokemonOffset = 12,
            .trainerScale = 256,
            .trainerOffset = 0,
            .frontPic = gMonFrontPic_DiancieSapphire, // here
            .frontPicSize = MON_COORDS_SIZE(40, 64),
            .frontPicYOffset = 1,
            .frontAnimFrames = sAnims_Diancie,
            .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
            .backPic = gMonBackPic_DiancieSapphire, // here
            .backPicSize = MON_COORDS_SIZE(64, 64),
            .backPicYOffset = 7,
            //.backAnimId = BACK_ANIM_NONE,
            .palette = gMonPalette_DiancieSapphire, // here
            .shinyPalette = gMonShinyPalette_DiancieSapphire, // here
            .iconSprite = gMonIcon_DiancieSapphire, // here
            .iconPalIndex = 0,
            SHADOW(0, 13, SHADOW_SIZE_S)
            FOOTPRINT(Diancie)
            OVERWORLD(
                sPicTable_DiancieSapphire,
                SIZE_32x32,
                SHADOW_SIZE_M,
                TRACKS_FOOT,
                gOverworldPalette_DiancieSapphire,
                gShinyOverworldPalette_DiancieSapphire
            )
            .isMythical = TRUE,
            .isFrontierBanned = TRUE,
            .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
            .levelUpLearnset = sDiancieLevelUpLearnset,
            .teachableLearnset = sDiancieTeachableLearnset,
            //.formSpeciesIdTable = sDiancieFormSpeciesIdTable,
            //.formChangeTable = sDiancieFormChangeTable,
        },
};
