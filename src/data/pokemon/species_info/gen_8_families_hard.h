[SPECIES_GROOKEY] = HARD_MODE(
        .abilities = {  ABILITY_OVERGROW,  ABILITY_INTIMIDATE,  ABILITY_GRASSY_SURGE },
        .levelUpLearnset = sGrookeyLevelUpLearnset,
        .teachableLearnset = sGrookeyTeachableLearnset,
        .eggMoveLearnset = sGrookeyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_THWACKEY}),
    ),

    [SPECIES_THWACKEY] = HARD_MODE(
        .abilities = {  ABILITY_OVERGROW,  ABILITY_INTIMIDATE,  ABILITY_GRASSY_SURGE },
        .levelUpLearnset = sThwackeyLevelUpLearnset,
        .teachableLearnset = sThwackeyTeachableLearnset,
        .eggMoveLearnset = sGrookeyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_RILLABOOM}),
    ),

    [SPECIES_RILLABOOM] = HARD_MODE(
        .abilities = {  ABILITY_OVERGROW,  ABILITY_INTIMIDATE,  ABILITY_GRASSY_SURGE },
        .levelUpLearnset = sRillaboomLevelUpLearnset,
        .teachableLearnset = sRillaboomTeachableLearnset,
        .eggMoveLearnset = sGrookeyEggMoveLearnset,
    ),

    [SPECIES_SCORBUNNY] = HARD_MODE(
        .abilities = {  ABILITY_BLAZE,  ABILITY_PROTEAN,  ABILITY_NONE },
        .levelUpLearnset = sScorbunnyLevelUpLearnset,
        .teachableLearnset = sScorbunnyTeachableLearnset,
        .eggMoveLearnset = sScorbunnyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_RABOOT}),
    ),

    [SPECIES_RABOOT] = HARD_MODE(
        .abilities = {  ABILITY_BLAZE,  ABILITY_PROTEAN,  ABILITY_NONE },
        .levelUpLearnset = sRabootLevelUpLearnset,
        .teachableLearnset = sRabootTeachableLearnset,
        .eggMoveLearnset = sScorbunnyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_CINDERACE}),
    ),

    [SPECIES_CINDERACE] = HARD_MODE(
        .abilities = {  ABILITY_BLAZE,  ABILITY_PROTEAN,  ABILITY_NONE },
        .levelUpLearnset = sCinderaceLevelUpLearnset,
        .teachableLearnset = sCinderaceTeachableLearnset,
        .eggMoveLearnset = sScorbunnyEggMoveLearnset,
    ),

    [SPECIES_SOBBLE] = HARD_MODE(
        .abilities = {  ABILITY_TORRENT,  ABILITY_SNIPER,  ABILITY_NONE },
        .levelUpLearnset = sSobbleLevelUpLearnset,
        .teachableLearnset = sSobbleTeachableLearnset,
        .eggMoveLearnset = sSobbleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_DRIZZILE}),
    ),

    [SPECIES_DRIZZILE] = HARD_MODE(
        .abilities = {  ABILITY_TORRENT,  ABILITY_SNIPER,  ABILITY_NONE },
        .levelUpLearnset = sDrizzileLevelUpLearnset,
        .teachableLearnset = sDrizzileTeachableLearnset,
        .eggMoveLearnset = sSobbleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_INTELEON}),
    ),

    [SPECIES_INTELEON] = HARD_MODE(
        .abilities = {  ABILITY_TORRENT,  ABILITY_SNIPER,  ABILITY_NONE },
        .levelUpLearnset = sInteleonLevelUpLearnset,
        .teachableLearnset = sInteleonTeachableLearnset,
        .eggMoveLearnset = sSobbleEggMoveLearnset,
    ),

    [SPECIES_SKWOVET] = HARD_MODE(
        .abilities = {  ABILITY_CHEEK_POUCH,  ABILITY_NONE,  ABILITY_GLUTTONY },
        .levelUpLearnset = sSkwovetLevelUpLearnset,
        .teachableLearnset = sSkwovetTeachableLearnset,
        .eggMoveLearnset = sSkwovetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_GREEDENT}),
    ),

    [SPECIES_GREEDENT] = HARD_MODE(
        .abilities = {  ABILITY_CHEEK_POUCH,  ABILITY_NONE,  ABILITY_GLUTTONY },
        .levelUpLearnset = sGreedentLevelUpLearnset,
        .teachableLearnset = sGreedentTeachableLearnset,
        .eggMoveLearnset = sSkwovetEggMoveLearnset,
    ),

    [SPECIES_ROOKIDEE] = HARD_MODE(
        .abilities = {  ABILITY_UNNERVE,  ABILITY_UNNERVE,  ABILITY_FRISK },
        .levelUpLearnset = sRookideeLevelUpLearnset,
        .teachableLearnset = sRookideeTeachableLearnset,
        .eggMoveLearnset = sRookideeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_CORVISQUIRE}),
    ),

    [SPECIES_CORVISQUIRE] = HARD_MODE(
        .abilities = {  ABILITY_UNNERVE,  ABILITY_UNNERVE,  ABILITY_FRISK },
        .levelUpLearnset = sCorvisquireLevelUpLearnset,
        .teachableLearnset = sCorvisquireTeachableLearnset,
        .eggMoveLearnset = sRookideeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_CORVIKNIGHT}),
    ),

    [SPECIES_CORVIKNIGHT] = HARD_MODE(
        .abilities = { ABILITY_MIRROR_ARMOR, ABILITY_UNNERVE, ABILITY_PRESSURE},
        .levelUpLearnset = sCorviknightLevelUpLearnset,
        .teachableLearnset = sCorviknightTeachableLearnset,
        .eggMoveLearnset = sRookideeEggMoveLearnset,
    ),

    [SPECIES_BLIPBUG] = HARD_MODE(
        .abilities = {  ABILITY_SWARM,  ABILITY_COMPOUND_EYES,  ABILITY_TELEPATHY },
        .levelUpLearnset = sBlipbugLevelUpLearnset,
        .teachableLearnset = sBlipbugTeachableLearnset,
        .eggMoveLearnset = sBlipbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_DOTTLER}),
    ),

    [SPECIES_DOTTLER] = HARD_MODE(
        .abilities = {  ABILITY_SWARM,  ABILITY_COMPOUND_EYES,  ABILITY_TELEPATHY },
        .levelUpLearnset = sDottlerLevelUpLearnset,
        .teachableLearnset = sDottlerTeachableLearnset,
        .eggMoveLearnset = sBlipbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_ORBEETLE}),
    ),

    [SPECIES_ORBEETLE] = HARD_MODE(
        .abilities = {  ABILITY_SWARM,  ABILITY_COMPOUND_EYES,  ABILITY_TELEPATHY },
        .levelUpLearnset = sOrbeetleLevelUpLearnset,
        .teachableLearnset = sOrbeetleTeachableLearnset,
        .eggMoveLearnset = sBlipbugEggMoveLearnset,
    ),

    [SPECIES_ORBEETLE_MEGA] = HARD_MODE(
        .abilities = {  ABILITY_MAGIC_GUARD,  ABILITY_MAGIC_GUARD,  ABILITY_MAGIC_GUARD },
        .levelUpLearnset = sOrbeetleLevelUpLearnset,
        .teachableLearnset = sOrbeetleTeachableLearnset,
    ),

    [SPECIES_NICKIT] = HARD_MODE(
        .abilities = {  ABILITY_UNBURDEN,  ABILITY_UNBURDEN,  ABILITY_STAKEOUT },
        .levelUpLearnset = sNickitLevelUpLearnset,
        .teachableLearnset = sNickitTeachableLearnset,
        .eggMoveLearnset = sNickitEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_THIEVUL}),
    ),

    [SPECIES_THIEVUL] = HARD_MODE(
        .abilities = {  ABILITY_UNBURDEN,  ABILITY_UNBURDEN,  ABILITY_STAKEOUT },
        .levelUpLearnset = sThievulLevelUpLearnset,
        .teachableLearnset = sThievulTeachableLearnset,
        .eggMoveLearnset = sNickitEggMoveLearnset,
    ),

    [SPECIES_GOSSIFLEUR] = HARD_MODE(
        .abilities = {  ABILITY_COTTON_DOWN,  ABILITY_REGENERATOR,  ABILITY_EFFECT_SPORE },
        .levelUpLearnset = sGossifleurLevelUpLearnset,
        .teachableLearnset = sGossifleurTeachableLearnset,
        .eggMoveLearnset = sGossifleurEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_ELDEGOSS}),
    ),

    [SPECIES_ELDEGOSS] = HARD_MODE(
        .abilities = {  ABILITY_COTTON_DOWN,  ABILITY_REGENERATOR,  ABILITY_EFFECT_SPORE },
        .levelUpLearnset = sEldegossLevelUpLearnset,
        .teachableLearnset = sEldegossTeachableLearnset,
        .eggMoveLearnset = sGossifleurEggMoveLearnset,
    ),

    [SPECIES_WOOLOO] = HARD_MODE(
        .abilities = {  ABILITY_FLUFFY,  ABILITY_FLUFFY,  ABILITY_BULLETPROOF },
        .levelUpLearnset = sWoolooLevelUpLearnset,
        .teachableLearnset = sWoolooTeachableLearnset,
        .eggMoveLearnset = sWoolooEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_DUBWOOL}),
    ),

    [SPECIES_DUBWOOL] = HARD_MODE(
        .abilities = {  ABILITY_FLUFFY,  ABILITY_FLUFFY,  ABILITY_BULLETPROOF },
        .levelUpLearnset = sDubwoolLevelUpLearnset,
        .teachableLearnset = sDubwoolTeachableLearnset,
        .eggMoveLearnset = sWoolooEggMoveLearnset,
    ),

    [SPECIES_CHEWTLE] = HARD_MODE(
        .abilities = {  ABILITY_STRONG_JAW,  ABILITY_SHELL_ARMOR,  ABILITY_SWIFT_SWIM },
        .levelUpLearnset = sChewtleLevelUpLearnset,
        .teachableLearnset = sChewtleTeachableLearnset,
        .eggMoveLearnset = sChewtleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_DREDNAW}),
    ),

    [SPECIES_DREDNAW] = HARD_MODE(
        .abilities = {  ABILITY_STRONG_JAW,  ABILITY_SHELL_ARMOR,  ABILITY_SWIFT_SWIM },
        .levelUpLearnset = sDrednawLevelUpLearnset,
        .teachableLearnset = sDrednawTeachableLearnset,
        .eggMoveLearnset = sChewtleEggMoveLearnset,
    ),

    [SPECIES_DREDNAW_MEGA] = HARD_MODE(
        .abilities = {  ABILITY_STRONG_JAW,  ABILITY_STRONG_JAW,  ABILITY_STRONG_JAW },
        .levelUpLearnset = sDrednawLevelUpLearnset,
        .teachableLearnset = sDrednawTeachableLearnset,
    ),

    [SPECIES_YAMPER] = HARD_MODE(
        .abilities = {  ABILITY_PICKUP,  ABILITY_NONE,  ABILITY_COMPETITIVE },
        .levelUpLearnset = sYamperLevelUpLearnset,
        .teachableLearnset = sYamperTeachableLearnset,
        .eggMoveLearnset = sYamperEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_BOLTUND}),
    ),

    [SPECIES_BOLTUND] = HARD_MODE(
        .abilities = {  ABILITY_STRONG_JAW,  ABILITY_NONE,  ABILITY_COMPETITIVE },
        .levelUpLearnset = sBoltundLevelUpLearnset,
        .teachableLearnset = sBoltundTeachableLearnset,
        .eggMoveLearnset = sYamperEggMoveLearnset,
    ),

    [SPECIES_ROLYCOLY] = HARD_MODE(
        .abilities = {  ABILITY_STEAM_ENGINE,  ABILITY_HEATPROOF,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sRolycolyLevelUpLearnset,
        .teachableLearnset = sRolycolyTeachableLearnset,
        .eggMoveLearnset = sRolycolyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_CARKOL}),
    ),

    [SPECIES_CARKOL] = HARD_MODE(
        .abilities = {  ABILITY_STEAM_ENGINE,  ABILITY_FLAME_BODY,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sCarkolLevelUpLearnset,
        .teachableLearnset = sCarkolTeachableLearnset,
        .eggMoveLearnset = sRolycolyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_COALOSSAL}),
    ),

    [SPECIES_COALOSSAL] = HARD_MODE(
        .abilities = {  ABILITY_STEAM_ENGINE,  ABILITY_FLAME_BODY,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sCoalossalLevelUpLearnset,
        .teachableLearnset = sCoalossalTeachableLearnset,
        .eggMoveLearnset = sRolycolyEggMoveLearnset,
    ),

    [SPECIES_COALOSSAL_MEGA] = HARD_MODE(
        .abilities = {  ABILITY_MOUNTAINEER,  ABILITY_MOUNTAINEER,  ABILITY_MOUNTAINEER },
        .levelUpLearnset = sCoalossalLevelUpLearnset,
        .teachableLearnset = sCoalossalTeachableLearnset,
    ),

    [SPECIES_APPLIN] = HARD_MODE(
        .abilities = {  ABILITY_RIPEN,  ABILITY_GLUTTONY,  ABILITY_BULLETPROOF },
        .levelUpLearnset = sApplinLevelUpLearnset,
        .teachableLearnset = sApplinTeachableLearnset,
        .eggMoveLearnset = sApplinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_FLAPPLE}, {EVO_ITEM, ITEM_SUN_STONE, SPECIES_APPLETUN}, {EVO_LEVEL, 30, SPECIES_DIPPLIN}),
    ),

    [SPECIES_FLAPPLE] = HARD_MODE(
        .abilities = {  ABILITY_RIPEN,  ABILITY_GLUTTONY,  ABILITY_HUSTLE },
        .levelUpLearnset = sFlappleLevelUpLearnset,
        .teachableLearnset = sFlappleTeachableLearnset,
        .eggMoveLearnset = sApplinEggMoveLearnset,
    ),

    [SPECIES_FLAPPLE_MEGA] = HARD_MODE(
        .abilities = {  ABILITY_DRAGONS_MAW,  ABILITY_DRAGONS_MAW,  ABILITY_DRAGONS_MAW },
        .levelUpLearnset = sFlappleLevelUpLearnset,
        .teachableLearnset = sFlappleTeachableLearnset,
    ),

    [SPECIES_APPLETUN] = HARD_MODE(
        .abilities = {  ABILITY_RIPEN,  ABILITY_THICK_FAT,  ABILITY_GLUTTONY },
        .levelUpLearnset = sAppletunLevelUpLearnset,
        .teachableLearnset = sAppletunTeachableLearnset,
        .eggMoveLearnset = sApplinEggMoveLearnset,
    ),

    [SPECIES_APPLETUN_MEGA] = HARD_MODE(
        .abilities = {  ABILITY_CONTRARY,  ABILITY_CONTRARY,  ABILITY_CONTRARY },
        .levelUpLearnset = sAppletunLevelUpLearnset,
        .teachableLearnset = sAppletunTeachableLearnset,
    ),

    [SPECIES_DIPPLIN] = HARD_MODE(
        .abilities = {  ABILITY_SUPERSWEET_SYRUP,  ABILITY_SUPERSWEET_SYRUP,  ABILITY_REGENERATOR },
        .levelUpLearnset = sDipplinLevelUpLearnset,
        .teachableLearnset = sDipplinTeachableLearnset,
        .eggMoveLearnset = sApplinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_HYDRAPPLE}),
    ),

    [SPECIES_HYDRAPPLE] = HARD_MODE(
        .abilities = {  ABILITY_SUPERSWEET_SYRUP,  ABILITY_SUPERSWEET_SYRUP,  ABILITY_REGENERATOR },
        .levelUpLearnset = sHydrappleLevelUpLearnset,
        .teachableLearnset = sHydrappleTeachableLearnset,
        .eggMoveLearnset = sApplinEggMoveLearnset,
    ),

    [SPECIES_SILICOBRA] = HARD_MODE(
        .abilities = {  ABILITY_SAND_FORCE,  ABILITY_SAND_FORCE,  ABILITY_SAND_SPIT },
        .levelUpLearnset = sSilicobraLevelUpLearnset,
        .teachableLearnset = sSilicobraTeachableLearnset,
        .eggMoveLearnset = sSilicobraEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SANDACONDA}),
    ),

    [SPECIES_SANDACONDA] = HARD_MODE(
        .abilities = {  ABILITY_SAND_FORCE,  ABILITY_SAND_FORCE,  ABILITY_SAND_SPIT },
        .levelUpLearnset = sSandacondaLevelUpLearnset,
        .teachableLearnset = sSandacondaTeachableLearnset,
        .eggMoveLearnset = sSilicobraEggMoveLearnset,
    ),

    [SPECIES_SANDACONDA_MEGA] = HARD_MODE(
        .abilities = {  ABILITY_AERILATE,  ABILITY_AERILATE,  ABILITY_AERILATE },
        .levelUpLearnset = sSandacondaLevelUpLearnset,
        .teachableLearnset = sSandacondaTeachableLearnset,
    ),

    [SPECIES_CRAMORANT] = HARD_MODE(
        .abilities = {  ABILITY_GULP_MISSILE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sCramorantLevelUpLearnset,
        .teachableLearnset = sCramorantTeachableLearnset,
        .eggMoveLearnset = sCramorantEggMoveLearnset,
    ),

    [SPECIES_CRAMORANT_GULPING] = HARD_MODE(
        .abilities = {  ABILITY_GULP_MISSILE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sCramorantLevelUpLearnset,
        .teachableLearnset = sCramorantTeachableLearnset,
        .eggMoveLearnset = sCramorantEggMoveLearnset,
    ),

    [SPECIES_CRAMORANT_GORGING] = HARD_MODE(
        .abilities = {  ABILITY_GULP_MISSILE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sCramorantLevelUpLearnset,
        .teachableLearnset = sCramorantTeachableLearnset,
        .eggMoveLearnset = sCramorantEggMoveLearnset,
    ),

    [SPECIES_ARROKUDA] = HARD_MODE(
        .abilities = {  ABILITY_SWIFT_SWIM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sArrokudaLevelUpLearnset,
        .teachableLearnset = sArrokudaTeachableLearnset,
        .eggMoveLearnset = sArrokudaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_BARRASKEWDA}),
    ),

    [SPECIES_BARRASKEWDA] = HARD_MODE(
        .abilities = {  ABILITY_SWIFT_SWIM,  ABILITY_NONE,  ABILITY_PROPELLER_TAIL },
        .levelUpLearnset = sBarraskewdaLevelUpLearnset,
        .teachableLearnset = sBarraskewdaTeachableLearnset,
        .eggMoveLearnset = sArrokudaEggMoveLearnset,
    ),

    [SPECIES_TOXEL] = HARD_MODE(
        .abilities = {  ABILITY_STATIC,  ABILITY_NONE, ABILITY_LIGHTNING_ROD  },
        .levelUpLearnset = sToxelLevelUpLearnset,
        .teachableLearnset = sToxelTeachableLearnset,
        .eggMoveLearnset = sToxelEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_NATURE_AMPED, 30, SPECIES_TOXTRICITY_AMPED}, {EVO_LEVEL_NATURE_LOW_KEY, 30, SPECIES_TOXTRICITY_LOW_KEY}),
    ),

    [SPECIES_TOXTRICITY_AMPED] = HARD_MODE(
        .abilities = {  ABILITY_PUNK_ROCK,  ABILITY_TECHNICIAN,  ABILITY_PLUS },
        .levelUpLearnset = sToxtricityAmpedLevelUpLearnset,
        .teachableLearnset = sToxtricityAmpedTeachableLearnset,
        .eggMoveLearnset = sToxelEggMoveLearnset,
    ),

    [SPECIES_TOXTRICITY_MEGA] = HARD_MODE(
        .abilities = {  ABILITY_PUNK_ROCK,  ABILITY_PUNK_ROCK,  ABILITY_PUNK_ROCK },
        .levelUpLearnset = sToxtricityAmpedLevelUpLearnset,
        .teachableLearnset = sToxtricityAmpedTeachableLearnset,
    ),

    [SPECIES_TOXTRICITY_LOW_KEY] = HARD_MODE(
        .abilities = {  ABILITY_PUNK_ROCK,  ABILITY_TECHNICIAN,  ABILITY_MINUS },
        .levelUpLearnset = sToxtricityLowKeyLevelUpLearnset,
        .teachableLearnset = sToxtricityLowKeyTeachableLearnset,
        .eggMoveLearnset = sToxelEggMoveLearnset,
    ),

    [SPECIES_SIZZLIPEDE] = HARD_MODE(
        .abilities = {  ABILITY_FLAME_BODY,  ABILITY_WHITE_SMOKE,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sSizzlipedeLevelUpLearnset,
        .teachableLearnset = sSizzlipedeTeachableLearnset,
        .eggMoveLearnset = sSizzlipedeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_CENTISKORCH}),
    ),

    [SPECIES_CENTISKORCH] = HARD_MODE(
        .abilities = {  ABILITY_FLAME_BODY,  ABILITY_WHITE_SMOKE,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sCentiskorchLevelUpLearnset,
        .teachableLearnset = sCentiskorchTeachableLearnset,
        .eggMoveLearnset = sSizzlipedeEggMoveLearnset,
    ),

    [SPECIES_CENTISKORCH_MEGA] = HARD_MODE(
        .abilities = {  ABILITY_MOUNTAINEER,  ABILITY_MOUNTAINEER,  ABILITY_MOUNTAINEER },
        .levelUpLearnset = sCentiskorchLevelUpLearnset,
        .teachableLearnset = sCentiskorchTeachableLearnset,
    ),

    [SPECIES_CLOBBOPUS] = HARD_MODE(
        .abilities = {  ABILITY_TECHNICIAN,  ABILITY_NONE,  ABILITY_LIMBER },
        .levelUpLearnset = sClobbopusLevelUpLearnset,
        .teachableLearnset = sClobbopusTeachableLearnset,
        .eggMoveLearnset = sClobbopusEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_GRAPPLOCT}),
    ),

    [SPECIES_GRAPPLOCT] = HARD_MODE(
        .abilities = {  ABILITY_TECHNICIAN,  ABILITY_NONE,  ABILITY_LIMBER },
        .levelUpLearnset = sGrapploctLevelUpLearnset,
        .teachableLearnset = sGrapploctTeachableLearnset,
        .eggMoveLearnset = sClobbopusEggMoveLearnset,
    ),

    [SPECIES_SINISTEA_PHONY] = HARD_MODE(
        .abilities = {  ABILITY_HEATPROOF,  ABILITY_NONE,  ABILITY_WEAK_ARMOR },
        .levelUpLearnset = sSinisteaLevelUpLearnset,
        .teachableLearnset = sSinisteaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_POLTEAGEIST_PHONY}),
    ),

    [SPECIES_SINISTEA_ANTIQUE] = HARD_MODE(
        .abilities = {  ABILITY_HEATPROOF,  ABILITY_NONE,  ABILITY_WEAK_ARMOR },
        .levelUpLearnset = sSinisteaLevelUpLearnset,
        .teachableLearnset = sSinisteaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_POLTEAGEIST_ANTIQUE}),
    ),

    [SPECIES_POLTEAGEIST_PHONY] = HARD_MODE(
        .abilities = {  ABILITY_HEATPROOF,  ABILITY_NONE,  ABILITY_WEAK_ARMOR },
        .levelUpLearnset = sPolteageistLevelUpLearnset,
        .teachableLearnset = sPolteageistTeachableLearnset,
    ),

    [SPECIES_POLTEAGEIST_ANTIQUE] = HARD_MODE(
        .abilities = {  ABILITY_HEATPROOF,  ABILITY_NONE,  ABILITY_WEAK_ARMOR },
        .levelUpLearnset = sPolteageistLevelUpLearnset,
        .teachableLearnset = sPolteageistTeachableLearnset,
    ),

    [SPECIES_HATENNA] = HARD_MODE(
        .abilities = {  ABILITY_MAGIC_GUARD,  ABILITY_NONE,  ABILITY_MAGIC_BOUNCE },
        .levelUpLearnset = sHatennaLevelUpLearnset,
        .teachableLearnset = sHatennaTeachableLearnset,
        .eggMoveLearnset = sHatennaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_HATTREM}),
    ),

    [SPECIES_HATTREM] = HARD_MODE(
        .abilities = {  ABILITY_MAGIC_GUARD,  ABILITY_NONE,  ABILITY_MAGIC_BOUNCE },
        .levelUpLearnset = sHattremLevelUpLearnset,
        .teachableLearnset = sHattremTeachableLearnset,
        .eggMoveLearnset = sHatennaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_HATTERENE}),
    ),

    [SPECIES_HATTERENE] = HARD_MODE(
        .abilities = {  ABILITY_MAGIC_GUARD,  ABILITY_NONE,  ABILITY_MAGIC_BOUNCE },
        .levelUpLearnset = sHattereneLevelUpLearnset,
        .teachableLearnset = sHattereneTeachableLearnset,
        .eggMoveLearnset = sHatennaEggMoveLearnset,
    ),

    [SPECIES_IMPIDIMP] = HARD_MODE(
        .abilities = {  ABILITY_PRANKSTER,  ABILITY_PRANKSTER,  ABILITY_INFILTRATOR },
        .levelUpLearnset = sImpidimpLevelUpLearnset,
        .teachableLearnset = sImpidimpTeachableLearnset,
        .eggMoveLearnset = sImpidimpEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_MORGREM}),
    ),

    [SPECIES_MORGREM] = HARD_MODE(
        .abilities = {  ABILITY_PRANKSTER,  ABILITY_PRANKSTER,  ABILITY_INFILTRATOR },
        .levelUpLearnset = sMorgremLevelUpLearnset,
        .teachableLearnset = sMorgremTeachableLearnset,
        .eggMoveLearnset = sImpidimpEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_GRIMMSNARL}),
    ),

    [SPECIES_GRIMMSNARL] = HARD_MODE(
        .abilities = {  ABILITY_PRANKSTER,  ABILITY_PRANKSTER,  ABILITY_INFILTRATOR },
        .levelUpLearnset = sGrimmsnarlLevelUpLearnset,
        .teachableLearnset = sGrimmsnarlTeachableLearnset,
        .eggMoveLearnset = sImpidimpEggMoveLearnset,
    ),

    [SPECIES_GRIMMSNARL_MEGA] = HARD_MODE(
        .abilities = {  ABILITY_SHEER_FORCE,  ABILITY_SHEER_FORCE,  ABILITY_SHEER_FORCE },
        .levelUpLearnset = sGrimmsnarlLevelUpLearnset,
        .teachableLearnset = sGrimmsnarlTeachableLearnset,
    ),

    [SPECIES_MILCERY] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sMilceryLevelUpLearnset,
        .teachableLearnset = sMilceryTeachableLearnset,
        .eggMoveLearnset = sMilceryEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM}, {EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM}, {EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ALCREMIE_STRAWBERRY_MATCHA_CREAM}, {EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ALCREMIE_STRAWBERRY_MINT_CREAM}, {EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ALCREMIE_STRAWBERRY_LEMON_CREAM}, {EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ALCREMIE_STRAWBERRY_SALTED_CREAM}, {EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ALCREMIE_STRAWBERRY_RUBY_SWIRL}, {EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ALCREMIE_STRAWBERRY_CARAMEL_SWIRL}, {EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ALCREMIE_STRAWBERRY_RAINBOW_SWIRL}),
    ),

    [SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
        .eggMoveLearnset = sMilceryEggMoveLearnset,
    ),

    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
        .eggMoveLearnset = sMilceryEggMoveLearnset,
    ),

    [SPECIES_ALCREMIE_STRAWBERRY_MATCHA_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
        .eggMoveLearnset = sMilceryEggMoveLearnset,
    ),

    [SPECIES_ALCREMIE_STRAWBERRY_MINT_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
        .eggMoveLearnset = sMilceryEggMoveLearnset,
    ),

    [SPECIES_ALCREMIE_STRAWBERRY_LEMON_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
        .eggMoveLearnset = sMilceryEggMoveLearnset,
    ),

    [SPECIES_ALCREMIE_STRAWBERRY_SALTED_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
        .eggMoveLearnset = sMilceryEggMoveLearnset,
    ),

    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
        .eggMoveLearnset = sMilceryEggMoveLearnset,
    ),

    [SPECIES_ALCREMIE_STRAWBERRY_CARAMEL_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
        .eggMoveLearnset = sMilceryEggMoveLearnset,
    ),

    [SPECIES_ALCREMIE_STRAWBERRY_RAINBOW_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
        .eggMoveLearnset = sMilceryEggMoveLearnset,
    ),

    [SPECIES_ALCREMIE_BERRY_VANILLA_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_BERRY_RUBY_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_BERRY_MATCHA_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_BERRY_MINT_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_BERRY_LEMON_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_BERRY_SALTED_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_BERRY_RUBY_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_BERRY_CARAMEL_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_BERRY_RAINBOW_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_LOVE_VANILLA_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_LOVE_RUBY_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_LOVE_MATCHA_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_LOVE_MINT_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_LOVE_LEMON_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_LOVE_SALTED_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_LOVE_RUBY_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_LOVE_CARAMEL_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_LOVE_RAINBOW_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_STAR_VANILLA_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_STAR_RUBY_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_STAR_MATCHA_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_STAR_MINT_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_STAR_LEMON_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_STAR_SALTED_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_STAR_RUBY_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_STAR_CARAMEL_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_STAR_RAINBOW_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_CLOVER_VANILLA_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_CLOVER_RUBY_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_CLOVER_MATCHA_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_CLOVER_MINT_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_CLOVER_LEMON_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_CLOVER_SALTED_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_CLOVER_RUBY_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_CLOVER_CARAMEL_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_CLOVER_RAINBOW_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_FLOWER_VANILLA_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_FLOWER_RUBY_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_FLOWER_MATCHA_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_FLOWER_MINT_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_FLOWER_LEMON_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_FLOWER_SALTED_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_FLOWER_RUBY_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_FLOWER_CARAMEL_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_FLOWER_RAINBOW_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_RIBBON_VANILLA_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_RIBBON_RUBY_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_RIBBON_MATCHA_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_RIBBON_MINT_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_RIBBON_LEMON_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_RIBBON_SALTED_CREAM] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_RIBBON_RUBY_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_RIBBON_CARAMEL_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_ALCREMIE_RIBBON_RAINBOW_SWIRL] = HARD_MODE(
        .abilities = {  ABILITY_SWEET_VEIL,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
    ),

    [SPECIES_FALINKS] = HARD_MODE(
        .abilities = {  ABILITY_BATTLE_ARMOR,  ABILITY_NONE,  ABILITY_DEFIANT },
        .levelUpLearnset = sFalinksLevelUpLearnset,
        .teachableLearnset = sFalinksTeachableLearnset,
    ),

    [SPECIES_FALINKS_MEGA] = HARD_MODE(
        .abilities = { ABILITY_SHARPNESS, ABILITY_NONE, ABILITY_ARENA_TRAP },
        .levelUpLearnset = sFalinksLevelUpLearnset,
        .teachableLearnset = sFalinksTeachableLearnset,
    ),

    [SPECIES_PINCURCHIN] = HARD_MODE(
        .abilities = {  ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_ELECTRIC_SURGE },
        .levelUpLearnset = sPincurchinLevelUpLearnset,
        .teachableLearnset = sPincurchinTeachableLearnset,
        .eggMoveLearnset = sPincurchinEggMoveLearnset,
    ),

    [SPECIES_SNOM] = HARD_MODE(
        .abilities = {  ABILITY_ICE_SCALES,  ABILITY_NONE,  ABILITY_SHIELD_DUST },
        .levelUpLearnset = sSnomLevelUpLearnset,
        .teachableLearnset = sSnomTeachableLearnset,
        .eggMoveLearnset = sSnomEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_FROSMOTH}),
    ),

    [SPECIES_FROSMOTH] = HARD_MODE(
        .abilities = {  ABILITY_ICE_SCALES,  ABILITY_NONE,  ABILITY_SHIELD_DUST },
        .levelUpLearnset = sFrosmothLevelUpLearnset,
        .teachableLearnset = sFrosmothTeachableLearnset,
        .eggMoveLearnset = sSnomEggMoveLearnset,
    ),

    [SPECIES_STONJOURNER] = HARD_MODE(
        .abilities = {  ABILITY_ROCKY_PAYLOAD,  ABILITY_POWER_SPOT,  ABILITY_NONE },
        .levelUpLearnset = sStonjournerLevelUpLearnset,
        .teachableLearnset = sStonjournerTeachableLearnset,
        .eggMoveLearnset = sStonjournerEggMoveLearnset,
    ),

    [SPECIES_EISCUE_ICE] = HARD_MODE(
        .abilities = {  ABILITY_ICE_FACE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sEiscueLevelUpLearnset,
        .teachableLearnset = sEiscueTeachableLearnset,
        .eggMoveLearnset = sEiscueEggMoveLearnset,
    ),

    [SPECIES_EISCUE_NOICE] = HARD_MODE(
        .abilities = {  ABILITY_ICE_FACE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sEiscueLevelUpLearnset,
        .teachableLearnset = sEiscueTeachableLearnset,
        .eggMoveLearnset = sEiscueEggMoveLearnset,
    ),

    [SPECIES_INDEEDEE_M] = HARD_MODE(
        .abilities = {  ABILITY_INNER_FOCUS,  ABILITY_SYNCHRONIZE,  ABILITY_PSYCHIC_SURGE },
        .levelUpLearnset = sIndeedeeMLevelUpLearnset,
        .teachableLearnset = sIndeedeeMTeachableLearnset,
    ),

    [SPECIES_INDEEDEE_F] = HARD_MODE(
        .abilities = {  ABILITY_OWN_TEMPO,  ABILITY_SYNCHRONIZE,  ABILITY_PSYCHIC_SURGE },
        .levelUpLearnset = sIndeedeeFLevelUpLearnset,
        .teachableLearnset = sIndeedeeFTeachableLearnset,
        .eggMoveLearnset = sIndeedeeFEggMoveLearnset,
    ),

    [SPECIES_MORPEKO_FULL_BELLY] = HARD_MODE(
        .abilities = {  ABILITY_HUNGER_SWITCH,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMorpekoLevelUpLearnset,
        .teachableLearnset = sMorpekoTeachableLearnset,
        .eggMoveLearnset = sMorpekoEggMoveLearnset,
    ),

    [SPECIES_MORPEKO_HANGRY] = HARD_MODE(
        .abilities = {  ABILITY_HUNGER_SWITCH,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMorpekoLevelUpLearnset,
        .teachableLearnset = sMorpekoTeachableLearnset,
        .eggMoveLearnset = sMorpekoEggMoveLearnset,
    ),

    [SPECIES_CUFANT] = HARD_MODE(
        .abilities = {  ABILITY_HEAVY_METAL,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sCufantLevelUpLearnset,
        .teachableLearnset = sCufantTeachableLearnset,
        .eggMoveLearnset = sCufantEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_COPPERAJAH}),
    ),

    [SPECIES_COPPERAJAH] = HARD_MODE(
        .abilities = {  ABILITY_HEAVY_METAL,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sCopperajahLevelUpLearnset,
        .teachableLearnset = sCopperajahTeachableLearnset,
        .eggMoveLearnset = sCufantEggMoveLearnset,
    ),

    [SPECIES_COPPERAJAH_MEGA] = HARD_MODE(
        .abilities = {  ABILITY_SHEER_FORCE,  ABILITY_SHEER_FORCE,  ABILITY_SHEER_FORCE },
        .levelUpLearnset = sCopperajahLevelUpLearnset,
        .teachableLearnset = sCopperajahTeachableLearnset,
    ),

    [SPECIES_DRACOZOLT] = HARD_MODE(
        .abilities = {  ABILITY_VOLT_ABSORB,  ABILITY_SAND_RUSH,  ABILITY_HUSTLE },
        .levelUpLearnset = sDracozoltLevelUpLearnset,
        .teachableLearnset = sDracozoltTeachableLearnset,
    ),

    [SPECIES_ARCTOZOLT] = HARD_MODE(
        .abilities = {  ABILITY_VOLT_ABSORB,  ABILITY_SLUSH_RUSH,  ABILITY_STATIC },
        .levelUpLearnset = sArctozoltLevelUpLearnset,
        .teachableLearnset = sArctozoltTeachableLearnset,
    ),

    [SPECIES_DRACOVISH] = HARD_MODE(
        .abilities = {  ABILITY_SAND_RUSH,  ABILITY_STRONG_JAW,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sDracovishLevelUpLearnset,
        .teachableLearnset = sDracovishTeachableLearnset,
    ),

    [SPECIES_ARCTOVISH] = HARD_MODE(
        .abilities = {  ABILITY_SLUSH_RUSH,  ABILITY_ICE_BODY,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sArctovishLevelUpLearnset,
        .teachableLearnset = sArctovishTeachableLearnset,
    ),

    [SPECIES_DURALUDON] = HARD_MODE(
        .abilities = {  ABILITY_HEAVY_METAL,  ABILITY_NONE,  ABILITY_STALWART },
        .levelUpLearnset = sDuraludonLevelUpLearnset,
        .teachableLearnset = sDuraludonTeachableLearnset,
        .eggMoveLearnset = sDuraludonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_METAL_ALLOY, SPECIES_ARCHALUDON}, {EVO_LEVEL, 50, SPECIES_ARCHALUDON}),
    ),

    [SPECIES_ARCHALUDON] = HARD_MODE(
        .abilities = {  ABILITY_STAMINA,  ABILITY_STURDY,  ABILITY_BAD_COMPANY },
        .levelUpLearnset = sArchaludonLevelUpLearnset,
        .teachableLearnset = sArchaludonTeachableLearnset,
        .eggMoveLearnset = sDuraludonEggMoveLearnset,
    ),

    [SPECIES_DREEPY] = HARD_MODE(
        .abilities = {  ABILITY_CLEAR_BODY,  ABILITY_INFILTRATOR,  ABILITY_RUN_AWAY },
        .levelUpLearnset = sDreepyLevelUpLearnset,
        .teachableLearnset = sDreepyTeachableLearnset,
        .eggMoveLearnset = sDreepyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_DRAKLOAK}),
    ),

    [SPECIES_DRAKLOAK] = HARD_MODE(
        .abilities = {  ABILITY_CLEAR_BODY,  ABILITY_INFILTRATOR,  ABILITY_STALWART },
        .levelUpLearnset = sDrakloakLevelUpLearnset,
        .teachableLearnset = sDrakloakTeachableLearnset,
        .eggMoveLearnset = sDreepyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 60, SPECIES_DRAGAPULT}),
    ),

    [SPECIES_DRAGAPULT] = HARD_MODE(
        .abilities = {  ABILITY_CLEAR_BODY,  ABILITY_INFILTRATOR,  ABILITY_STALWART },
        .levelUpLearnset = sDragapultLevelUpLearnset,
        .teachableLearnset = sDragapultTeachableLearnset,
        .eggMoveLearnset = sDreepyEggMoveLearnset,
    ),

    [SPECIES_KUBFU] = HARD_MODE(
        .abilities = {  ABILITY_INNER_FOCUS,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sKubfuLevelUpLearnset,
        .teachableLearnset = sKubfuTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_URSHIFU_SINGLE_STRIKE}, {EVO_ITEM, ITEM_WATER_STONE, SPECIES_URSHIFU_RAPID_STRIKE}),
    ),

    [SPECIES_URSHIFU_SINGLE_STRIKE] = HARD_MODE(
        .abilities = {  ABILITY_UNSEEN_FIST,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sUrshifuSingleStrikeLevelUpLearnset,
        .teachableLearnset = sUrshifuSingleStrikeTeachableLearnset,
    ),

    [SPECIES_URSHIFU_RAPID_STRIKE] = HARD_MODE(
        .abilities = {  ABILITY_UNSEEN_FIST,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sUrshifuRapidStrikeLevelUpLearnset,
        .teachableLearnset = sUrshifuRapidStrikeTeachableLearnset,
    ),

    [SPECIES_ZARUDE] = HARD_MODE(
        .abilities = {  ABILITY_CLEAR_BODY,  ABILITY_NONE,  ABILITY_DEFIANT },
        .levelUpLearnset = sZarudeLevelUpLearnset,
        .teachableLearnset = sZarudeTeachableLearnset,
    ),

    [SPECIES_ZARUDE_DADA] = HARD_MODE(
        .abilities = {  ABILITY_CLEAR_BODY,  ABILITY_NONE,  ABILITY_DEFIANT },
        .levelUpLearnset = sZarudeLevelUpLearnset,
        .teachableLearnset = sZarudeTeachableLearnset,
    ),

    [SPECIES_REGIELEKI] = HARD_MODE(
        .abilities = {  ABILITY_TRANSISTOR,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sRegielekiLevelUpLearnset,
        .teachableLearnset = sRegielekiTeachableLearnset,
    ),

    [SPECIES_REGIDRAGO] = HARD_MODE(
        .abilities = {  ABILITY_DRAGONS_MAW,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sRegidragoLevelUpLearnset,
        .teachableLearnset = sRegidragoTeachableLearnset,
    ),

    [SPECIES_CALYREX] = HARD_MODE(
        .abilities = {  ABILITY_UNNERVE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sCalyrexLevelUpLearnset,
        .teachableLearnset = sCalyrexTeachableLearnset,
    ),

    [SPECIES_ENAMORUS_INCARNATE] = HARD_MODE(
        .abilities = {  ABILITY_BAD_COMPANY,  ABILITY_NONE,  ABILITY_CONTRARY },
        .levelUpLearnset = sEnamorusLevelUpLearnset,
        .teachableLearnset = sEnamorusTeachableLearnset,
    ),

    [SPECIES_ENAMORUS_THERIAN] = HARD_MODE(
        .abilities = {  ABILITY_OVERCOAT,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sEnamorusLevelUpLearnset,
        .teachableLearnset = sEnamorusTeachableLearnset,
    ),