[SPECIES_ROWLET] = HARD_MODE(
        .abilities = {  ABILITY_OVERGROW,  ABILITY_TINTED_LENS,  ABILITY_NONE },
        .levelUpLearnset = sRowletLevelUpLearnset,
        .teachableLearnset = sRowletTeachableLearnset,
        .eggMoveLearnset = sRowletEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_DARTRIX}),
    ),

    [SPECIES_DARTRIX] = HARD_MODE(
        .abilities = {  ABILITY_OVERGROW,  ABILITY_TINTED_LENS,  ABILITY_NONE },
        .levelUpLearnset = sDartrixLevelUpLearnset,
        .teachableLearnset = sDartrixTeachableLearnset,
        .eggMoveLearnset = sRowletEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_NIGHT, 36, SPECIES_DECIDUEYE}, {EVO_LEVEL_DAY, 36, SPECIES_DECIDUEYE_HISUI}),
    ),

    [SPECIES_DECIDUEYE] = HARD_MODE(
        .abilities = {  ABILITY_OVERGROW,  ABILITY_TINTED_LENS,  ABILITY_NONE },
        .levelUpLearnset = sDecidueyeLevelUpLearnset,
        .teachableLearnset = sDecidueyeTeachableLearnset,
        .eggMoveLearnset = sRowletEggMoveLearnset,
    ),

    [SPECIES_DECIDUEYE_HISUI] = HARD_MODE(
        .abilities = {  ABILITY_QUILL_RUSH,  ABILITY_STRIKER,  ABILITY_OVERGROW },
        .levelUpLearnset = sDecidueyeHisuiLevelUpLearnset,
        .teachableLearnset = sDecidueyeHisuiTeachableLearnset,
        .eggMoveLearnset = sRowletEggMoveLearnset,
    ),

    [SPECIES_LITTEN] = HARD_MODE(
        .abilities = {  ABILITY_BLAZE,  ABILITY_INTIMIDATE,  ABILITY_NONE },
        .levelUpLearnset = sLittenLevelUpLearnset,
        .teachableLearnset = sLittenTeachableLearnset,
        .eggMoveLearnset = sLittenEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_TORRACAT}),
    ),

    [SPECIES_TORRACAT] = HARD_MODE(
        .abilities = {  ABILITY_BLAZE,  ABILITY_INTIMIDATE,  ABILITY_NONE },
        .levelUpLearnset = sTorracatLevelUpLearnset,
        .teachableLearnset = sTorracatTeachableLearnset,
        .eggMoveLearnset = sLittenEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_INCINEROAR}),
    ),

    [SPECIES_INCINEROAR] = HARD_MODE(
        .abilities = {  ABILITY_BLAZE,  ABILITY_INTIMIDATE,  ABILITY_NONE },
        .levelUpLearnset = sIncineroarLevelUpLearnset,
        .teachableLearnset = sIncineroarTeachableLearnset,
        .eggMoveLearnset = sLittenEggMoveLearnset,
    ),

    [SPECIES_POPPLIO] = HARD_MODE(
        .abilities = {  ABILITY_TORRENT,  ABILITY_LIQUID_VOICE,  ABILITY_NONE },
        .levelUpLearnset = sPopplioLevelUpLearnset,
        .teachableLearnset = sPopplioTeachableLearnset,
        .eggMoveLearnset = sPopplioEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_BRIONNE}),
    ),

    [SPECIES_BRIONNE] = HARD_MODE(
        .abilities = {  ABILITY_TORRENT,  ABILITY_LIQUID_VOICE,  ABILITY_NONE },
        .levelUpLearnset = sBrionneLevelUpLearnset,
        .teachableLearnset = sBrionneTeachableLearnset,
        .eggMoveLearnset = sPopplioEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_PRIMARINA}),
    ),

    [SPECIES_PRIMARINA] = HARD_MODE(
        .abilities = {  ABILITY_TORRENT,  ABILITY_LIQUID_VOICE,  ABILITY_NONE },
        .levelUpLearnset = sPrimarinaLevelUpLearnset,
        .teachableLearnset = sPrimarinaTeachableLearnset,
        .eggMoveLearnset = sPopplioEggMoveLearnset,
    ),

    [SPECIES_PIKIPEK] = HARD_MODE(
        .abilities = {  ABILITY_SHEER_FORCE,  ABILITY_SKILL_LINK,  ABILITY_PICKUP },
        .levelUpLearnset = sPikipekLevelUpLearnset,
        .teachableLearnset = sPikipekTeachableLearnset,
        .eggMoveLearnset = sPikipekEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_TRUMBEAK}),
    ),

    [SPECIES_TRUMBEAK] = HARD_MODE(
        .abilities = {  ABILITY_SHEER_FORCE,  ABILITY_SKILL_LINK,  ABILITY_PICKUP },
        .levelUpLearnset = sTrumbeakLevelUpLearnset,
        .teachableLearnset = sTrumbeakTeachableLearnset,
        .eggMoveLearnset = sPikipekEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_TOUCANNON}),
    ),

    [SPECIES_TOUCANNON] = HARD_MODE(
        .abilities = {  ABILITY_SHEER_FORCE,  ABILITY_SKILL_LINK,  ABILITY_PICKUP },
        .levelUpLearnset = sToucannonLevelUpLearnset,
        .teachableLearnset = sToucannonTeachableLearnset,
        .eggMoveLearnset = sPikipekEggMoveLearnset,
    ),

    [SPECIES_YUNGOOS] = HARD_MODE(
        .abilities = {  ABILITY_ADAPTABILITY,  ABILITY_STRONG_JAW,  ABILITY_STAKEOUT },
        .levelUpLearnset = sYungoosLevelUpLearnset,
        .teachableLearnset = sYungoosTeachableLearnset,
        .eggMoveLearnset = sYungoosEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_DAY, 20, SPECIES_GUMSHOOS}),
    ),

    [SPECIES_GUMSHOOS] = HARD_MODE(
        .abilities = {  ABILITY_ADAPTABILITY,  ABILITY_STRONG_JAW,  ABILITY_STAKEOUT },
        .levelUpLearnset = sGumshoosLevelUpLearnset,
        .teachableLearnset = sGumshoosTeachableLearnset,
        .eggMoveLearnset = sYungoosEggMoveLearnset,
    ),

    [SPECIES_GRUBBIN] = HARD_MODE(
        .abilities = {  ABILITY_SWARM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sGrubbinLevelUpLearnset,
        .teachableLearnset = sGrubbinTeachableLearnset,
        .eggMoveLearnset = sGrubbinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_CHARJABUG}),
    ),

    [SPECIES_CHARJABUG] = HARD_MODE(
        .abilities = {  ABILITY_BATTERY,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sCharjabugLevelUpLearnset,
        .teachableLearnset = sCharjabugTeachableLearnset,
        .eggMoveLearnset = sGrubbinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MAPSEC, MAPSEC_NEW_MAUVILLE, SPECIES_VIKAVOLT}, {EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_VIKAVOLT}, {EVO_NONE, 0, SPECIES_VIKAVOLT_TOTEM}),
    ),

    [SPECIES_VIKAVOLT] = HARD_MODE(
        .abilities = {  ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sVikavoltLevelUpLearnset,
        .teachableLearnset = sVikavoltTeachableLearnset,
        .eggMoveLearnset = sGrubbinEggMoveLearnset,
    ),

    [SPECIES_CRABRAWLER] = HARD_MODE(
        .abilities = {  ABILITY_HYPER_CUTTER,  ABILITY_IRON_FIST,  ABILITY_ANGER_POINT },
        .levelUpLearnset = sCrabrawlerLevelUpLearnset,
        .teachableLearnset = sCrabrawlerTeachableLearnset,
        .eggMoveLearnset = sCrabrawlerEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_CRABOMINABLE}),
    ),

    [SPECIES_CRABOMINABLE] = HARD_MODE(
        .abilities = {  ABILITY_HYPER_CUTTER,  ABILITY_IRON_FIST,  ABILITY_ANGER_POINT },
        .levelUpLearnset = sCrabominableLevelUpLearnset,
        .teachableLearnset = sCrabominableTeachableLearnset,
        .eggMoveLearnset = sCrabrawlerEggMoveLearnset,
    ),

    [SPECIES_CRABOMINABLE_MEGA] = HARD_MODE(
        .abilities = { ABILITY_IRON_FIST, ABILITY_IRON_FIST, ABILITY_IRON_FIST },
        .levelUpLearnset = sCrabominableLevelUpLearnset,
        .teachableLearnset = sCrabominableTeachableLearnset,
    ),

    [SPECIES_ORICORIO_BAILE] = HARD_MODE(
        .abilities = {  ABILITY_DANCER,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sOricorioLevelUpLearnset,
        .teachableLearnset = sOricorioTeachableLearnset,
        .eggMoveLearnset = sOricorioEggMoveLearnset,
    ),

    [SPECIES_ORICORIO_POM_POM] = HARD_MODE(
        .abilities = {  ABILITY_DANCER,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sOricorioLevelUpLearnset,
        .teachableLearnset = sOricorioTeachableLearnset,
        .eggMoveLearnset = sOricorioEggMoveLearnset,
    ),

    [SPECIES_ORICORIO_PAU] = HARD_MODE(
        .abilities = {  ABILITY_DANCER,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sOricorioLevelUpLearnset,
        .teachableLearnset = sOricorioTeachableLearnset,
        .eggMoveLearnset = sOricorioEggMoveLearnset,
    ),

    [SPECIES_ORICORIO_SENSU] = HARD_MODE(
        .abilities = {  ABILITY_DANCER,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sOricorioLevelUpLearnset,
        .teachableLearnset = sOricorioTeachableLearnset,
        .eggMoveLearnset = sOricorioEggMoveLearnset,
    ),

    [SPECIES_CUTIEFLY] = HARD_MODE(
        .abilities = {  ABILITY_SWARM,  ABILITY_SHIELD_DUST,  ABILITY_SWEET_VEIL },
        .levelUpLearnset = sCutieflyLevelUpLearnset,
        .teachableLearnset = sCutieflyTeachableLearnset,
        .eggMoveLearnset = sCutieflyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_RIBOMBEE}, {EVO_NONE, 0, SPECIES_RIBOMBEE_TOTEM}),
    ),

    [SPECIES_RIBOMBEE] = HARD_MODE(
        .abilities = {  ABILITY_SWARM,  ABILITY_SHIELD_DUST,  ABILITY_SWEET_VEIL },
        .levelUpLearnset = sRibombeeLevelUpLearnset,
        .teachableLearnset = sRibombeeTeachableLearnset,
        .eggMoveLearnset = sCutieflyEggMoveLearnset,
    ),

    [SPECIES_ROCKRUFF] = HARD_MODE(
        .abilities = {  ABILITY_VITAL_SPIRIT,  ABILITY_VITAL_SPIRIT,  ABILITY_STEADFAST },
        .levelUpLearnset = sRockruffLevelUpLearnset,
        .teachableLearnset = sRockruffTeachableLearnset,
        .eggMoveLearnset = sRockruffEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_DAY, 25, SPECIES_LYCANROC_MIDDAY}, {EVO_LEVEL_NIGHT, 25, SPECIES_LYCANROC_MIDNIGHT}, {EVO_LEVEL_DUSK, 25, SPECIES_LYCANROC_DUSK}),
    ),

    [SPECIES_ROCKRUFF_OWN_TEMPO] = HARD_MODE(
        .abilities = {  ABILITY_OWN_TEMPO,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sRockruffLevelUpLearnset,
        .teachableLearnset = sRockruffTeachableLearnset,
        .eggMoveLearnset = sRockruffEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_DUSK, 25, SPECIES_LYCANROC_DUSK}),
    ),

    [SPECIES_LYCANROC_MIDDAY] = HARD_MODE(
        .abilities = {  ABILITY_INNER_FOCUS,  ABILITY_SAND_RUSH,  ABILITY_STEADFAST },
        .levelUpLearnset = sLycanrocMiddayLevelUpLearnset,
        .teachableLearnset = sLycanrocMiddayTeachableLearnset,
        .eggMoveLearnset = sRockruffEggMoveLearnset,
    ),

    [SPECIES_LYCANROC_MIDNIGHT] = HARD_MODE(
        .abilities = {  ABILITY_NO_GUARD,  ABILITY_NO_GUARD,  ABILITY_VITAL_SPIRIT },
        .levelUpLearnset = sLycanrocMidnightLevelUpLearnset,
        .teachableLearnset = sLycanrocMidnightTeachableLearnset,
        .eggMoveLearnset = sRockruffEggMoveLearnset,
    ),

    [SPECIES_LYCANROC_DUSK] = HARD_MODE(
        .abilities = {  ABILITY_TOUGH_CLAWS,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sLycanrocDuskLevelUpLearnset,
        .teachableLearnset = sLycanrocDuskTeachableLearnset,
        .eggMoveLearnset = sRockruffEggMoveLearnset,
    ),

    [SPECIES_WISHIWASHI_SOLO] = HARD_MODE(
        .abilities = {  ABILITY_SCHOOLING,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sWishiwashiLevelUpLearnset,
        .teachableLearnset = sWishiwashiTeachableLearnset,
        .eggMoveLearnset = sWishiwashiEggMoveLearnset,
    ),

    [SPECIES_WISHIWASHI_SCHOOL] = HARD_MODE(
        .abilities = {  ABILITY_SCHOOLING,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sWishiwashiLevelUpLearnset,
        .teachableLearnset = sWishiwashiTeachableLearnset,
        .eggMoveLearnset = sWishiwashiEggMoveLearnset,
    ),

    [SPECIES_MAREANIE] = HARD_MODE(
        .abilities = {  ABILITY_MERCILESS,  ABILITY_LIMBER,  ABILITY_REGENERATOR },
        .levelUpLearnset = sMareanieLevelUpLearnset,
        .teachableLearnset = sMareanieTeachableLearnset,
        .eggMoveLearnset = sMareanieEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_TOXAPEX}),
    ),

    [SPECIES_TOXAPEX] = HARD_MODE(
        .abilities = {  ABILITY_MERCILESS,  ABILITY_LIMBER,  ABILITY_REGENERATOR },
        .levelUpLearnset = sToxapexLevelUpLearnset,
        .teachableLearnset = sToxapexTeachableLearnset,
        .eggMoveLearnset = sMareanieEggMoveLearnset,
    ),

    [SPECIES_MUDBRAY] = HARD_MODE(
        .abilities = {  ABILITY_OWN_TEMPO,  ABILITY_STAMINA,  ABILITY_INNER_FOCUS },
        .levelUpLearnset = sMudbrayLevelUpLearnset,
        .teachableLearnset = sMudbrayTeachableLearnset,
        .eggMoveLearnset = sMudbrayEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MUDSDALE}),
    ),

    [SPECIES_MUDSDALE] = HARD_MODE(
        .abilities = {  ABILITY_STRIKER,  ABILITY_STAMINA,  ABILITY_TANGLING_HAIR },
        .levelUpLearnset = sMudsdaleLevelUpLearnset,
        .teachableLearnset = sMudsdaleTeachableLearnset,
        .eggMoveLearnset = sMudbrayEggMoveLearnset,
    ),

    [SPECIES_DEWPIDER] = HARD_MODE(
        .abilities = {  ABILITY_WATER_BUBBLE,  ABILITY_NONE,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sDewpiderLevelUpLearnset,
        .teachableLearnset = sDewpiderTeachableLearnset,
        .eggMoveLearnset = sDewpiderEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_ARAQUANID}, {EVO_NONE, 0, SPECIES_ARAQUANID_TOTEM}),
    ),

    [SPECIES_ARAQUANID] = HARD_MODE(
        .abilities = {  ABILITY_WATER_BUBBLE,  ABILITY_NONE,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sAraquanidLevelUpLearnset,
        .teachableLearnset = sAraquanidTeachableLearnset,
        .eggMoveLearnset = sDewpiderEggMoveLearnset,
    ),

    [SPECIES_FOMANTIS] = HARD_MODE(
        .abilities = {  ABILITY_CONTRARY,  ABILITY_NONE,  ABILITY_LEAF_GUARD },
        .levelUpLearnset = sFomantisLevelUpLearnset,
        .teachableLearnset = sFomantisTeachableLearnset,
        .eggMoveLearnset = sFomantisEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_DAY, 30, SPECIES_LURANTIS}, {EVO_NONE, 0, SPECIES_LURANTIS_TOTEM}),
    ),

    [SPECIES_LURANTIS] = HARD_MODE(
        .abilities = {  ABILITY_CONTRARY,  ABILITY_NONE,  ABILITY_LEAF_GUARD },
        .levelUpLearnset = sLurantisLevelUpLearnset,
        .teachableLearnset = sLurantisTeachableLearnset,
        .eggMoveLearnset = sFomantisEggMoveLearnset,
    ),

    [SPECIES_MORELULL] = HARD_MODE(
        .abilities = {  ABILITY_ILLUMINATE,  ABILITY_EFFECT_SPORE,  ABILITY_RAIN_DISH },
        .levelUpLearnset = sMorelullLevelUpLearnset,
        .teachableLearnset = sMorelullTeachableLearnset,
        .eggMoveLearnset = sMorelullEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_SHIINOTIC}),
    ),

    [SPECIES_SHIINOTIC] = HARD_MODE(
        .abilities = {  ABILITY_ILLUMINATE,  ABILITY_EFFECT_SPORE,  ABILITY_RAIN_DISH },
        .levelUpLearnset = sShiinoticLevelUpLearnset,
        .teachableLearnset = sShiinoticTeachableLearnset,
        .eggMoveLearnset = sMorelullEggMoveLearnset,
    ),

    [SPECIES_SALANDIT] = HARD_MODE(
        .abilities = {  ABILITY_CORROSION,  ABILITY_NONE,  ABILITY_OBLIVIOUS },
        .levelUpLearnset = sSalanditLevelUpLearnset,
        .teachableLearnset = sSalanditTeachableLearnset,
        .eggMoveLearnset = sSalanditEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 33, SPECIES_SALAZZLE}, {EVO_NONE, 0, SPECIES_SALAZZLE_TOTEM}),
    ),

    [SPECIES_SALAZZLE] = HARD_MODE(
        .abilities = {  ABILITY_CORROSION,  ABILITY_NONE,  ABILITY_OBLIVIOUS },
        .levelUpLearnset = sSalazzleLevelUpLearnset,
        .teachableLearnset = sSalazzleTeachableLearnset,
        .eggMoveLearnset = sSalanditEggMoveLearnset,
    ),

    [SPECIES_STUFFUL] = HARD_MODE(
        .abilities = {  ABILITY_FLUFFY,  ABILITY_NONE,  ABILITY_CUTE_CHARM },
        .levelUpLearnset = sStuffulLevelUpLearnset,
        .teachableLearnset = sStuffulTeachableLearnset,
        .eggMoveLearnset = sStuffulEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_BEWEAR}),
    ),

    [SPECIES_BEWEAR] = HARD_MODE(
        .abilities = {  ABILITY_FLUFFY,  ABILITY_NONE,  ABILITY_UNNERVE },
        .levelUpLearnset = sBewearLevelUpLearnset,
        .teachableLearnset = sBewearTeachableLearnset,
        .eggMoveLearnset = sStuffulEggMoveLearnset,
    ),

    [SPECIES_BOUNSWEET] = HARD_MODE(
        .abilities = {  ABILITY_LEAF_GUARD,  ABILITY_OBLIVIOUS,  ABILITY_SWEET_VEIL },
        .levelUpLearnset = sBounsweetLevelUpLearnset,
        .teachableLearnset = sBounsweetTeachableLearnset,
        .eggMoveLearnset = sBounsweetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_STEENEE}),
    ),

    [SPECIES_STEENEE] = HARD_MODE(
        .abilities = {  ABILITY_STRIKER,  ABILITY_QUEENLY_MAJESTY,  ABILITY_LEAF_GUARD },
        .levelUpLearnset = sSteeneeLevelUpLearnset,
        .teachableLearnset = sSteeneeTeachableLearnset,
        .eggMoveLearnset = sBounsweetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_STOMP, SPECIES_TSAREENA}),
    ),

    [SPECIES_TSAREENA] = HARD_MODE(
        .abilities = {  ABILITY_STRIKER,  ABILITY_QUEENLY_MAJESTY,  ABILITY_LEAF_GUARD },
        .levelUpLearnset = sTsareenaLevelUpLearnset,
        .teachableLearnset = sTsareenaTeachableLearnset,
        .eggMoveLearnset = sBounsweetEggMoveLearnset,
    ),

    [SPECIES_COMFEY] = HARD_MODE(
        .abilities = {  ABILITY_TRIAGE,  ABILITY_NONE,  ABILITY_NATURAL_CURE },
        .levelUpLearnset = sComfeyLevelUpLearnset,
        .teachableLearnset = sComfeyTeachableLearnset,
        .eggMoveLearnset = sComfeyEggMoveLearnset,
    ),

    [SPECIES_ORANGURU] = HARD_MODE(
        .abilities = {  ABILITY_SAGE_POWER,  ABILITY_SAGE_POWER,  ABILITY_INNER_FOCUS },
        .levelUpLearnset = sOranguruLevelUpLearnset,
        .teachableLearnset = sOranguruTeachableLearnset,
        .eggMoveLearnset = sOranguruEggMoveLearnset,
    ),

    [SPECIES_PASSIMIAN] = HARD_MODE(
        .abilities = {  ABILITY_RECEIVER,  ABILITY_NONE,  ABILITY_DEFIANT },
        .levelUpLearnset = sPassimianLevelUpLearnset,
        .teachableLearnset = sPassimianTeachableLearnset,
        .eggMoveLearnset = sPassimianEggMoveLearnset,
    ),

    [SPECIES_WIMPOD] = HARD_MODE(
        .abilities = {  ABILITY_WIMP_OUT,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sWimpodLevelUpLearnset,
        .teachableLearnset = sWimpodTeachableLearnset,
        .eggMoveLearnset = sWimpodEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_GOLISOPOD}),
    ),

    [SPECIES_GOLISOPOD] = HARD_MODE(
        .abilities = {  ABILITY_EMERGENCY_EXIT,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sGolisopodLevelUpLearnset,
        .teachableLearnset = sGolisopodTeachableLearnset,
        .eggMoveLearnset = sWimpodEggMoveLearnset,
    ),

    [SPECIES_GOLISOPOD_MEGA] = HARD_MODE(
        .abilities = { ABILITY_WATER_BUBBLE, ABILITY_NONE, ABILITY_NONE },
        .levelUpLearnset = sGolisopodLevelUpLearnset,
        .teachableLearnset = sGolisopodTeachableLearnset,
    ),

    [SPECIES_SANDYGAST] = HARD_MODE(
        .abilities = {  ABILITY_WATER_COMPACTION,  ABILITY_NONE,  ABILITY_SAND_VEIL },
        .levelUpLearnset = sSandygastLevelUpLearnset,
        .teachableLearnset = sSandygastTeachableLearnset,
        .eggMoveLearnset = sSandygastEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_PALOSSAND}),
    ),

    [SPECIES_PALOSSAND] = HARD_MODE(
        .abilities = {  ABILITY_WATER_COMPACTION,  ABILITY_NONE,  ABILITY_SAND_VEIL },
        .levelUpLearnset = sPalossandLevelUpLearnset,
        .teachableLearnset = sPalossandTeachableLearnset,
        .eggMoveLearnset = sSandygastEggMoveLearnset,
    ),

    [SPECIES_PYUKUMUKU] = HARD_MODE(
        .abilities = {  ABILITY_UNAWARE,  ABILITY_NONE,  ABILITY_INNARDS_OUT },
        .levelUpLearnset = sPyukumukuLevelUpLearnset,
        .teachableLearnset = sPyukumukuTeachableLearnset,
        .eggMoveLearnset = sPyukumukuEggMoveLearnset,
    ),

    [SPECIES_TYPE_NULL] = HARD_MODE(
        .abilities = {  ABILITY_BATTLE_ARMOR,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sTypeNullLevelUpLearnset,
        .teachableLearnset = sTypeNullTeachableLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_SILVALLY_NORMAL}),
    ),

    [SPECIES_SILVALLY_NORMAL] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_FIGHTING] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_FLYING] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_POISON] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_GROUND] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_ROCK] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_BUG] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_GHOST] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_STEEL] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_FIRE] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_WATER] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_GRASS] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_ELECTRIC] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_PSYCHIC] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_ICE] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_DRAGON] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_DARK] = HARD_MODE(
        .abilities = {  ABILITY_RKS_SYSTEM,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_SILVALLY_FAIRY] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilvallyLevelUpLearnset,
        .teachableLearnset = sSilvallyTeachableLearnset,
    ),

    [SPECIES_MINIOR_METEOR_RED] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMiniorLevelUpLearnset,
        .teachableLearnset = sMiniorTeachableLearnset,
    ),

    [SPECIES_MINIOR_METEOR_ORANGE] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMiniorLevelUpLearnset,
        .teachableLearnset = sMiniorTeachableLearnset,
    ),

    [SPECIES_MINIOR_METEOR_YELLOW] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMiniorLevelUpLearnset,
        .teachableLearnset = sMiniorTeachableLearnset,
    ),

    [SPECIES_MINIOR_METEOR_GREEN] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMiniorLevelUpLearnset,
        .teachableLearnset = sMiniorTeachableLearnset,
    ),

    [SPECIES_MINIOR_METEOR_BLUE] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMiniorLevelUpLearnset,
        .teachableLearnset = sMiniorTeachableLearnset,
    ),

    [SPECIES_MINIOR_METEOR_INDIGO] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMiniorLevelUpLearnset,
        .teachableLearnset = sMiniorTeachableLearnset,
    ),

    [SPECIES_MINIOR_METEOR_VIOLET] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMiniorLevelUpLearnset,
        .teachableLearnset = sMiniorTeachableLearnset,
    ),

    [SPECIES_MINIOR_CORE_RED] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMiniorLevelUpLearnset,
        .teachableLearnset = sMiniorTeachableLearnset,
    ),

    [SPECIES_MINIOR_CORE_ORANGE] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMiniorLevelUpLearnset,
        .teachableLearnset = sMiniorTeachableLearnset,
    ),

    [SPECIES_MINIOR_CORE_YELLOW] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMiniorLevelUpLearnset,
        .teachableLearnset = sMiniorTeachableLearnset,
    ),

    [SPECIES_MINIOR_CORE_GREEN] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMiniorLevelUpLearnset,
        .teachableLearnset = sMiniorTeachableLearnset,
    ),

    [SPECIES_MINIOR_CORE_BLUE] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMiniorLevelUpLearnset,
        .teachableLearnset = sMiniorTeachableLearnset,
    ),

    [SPECIES_MINIOR_CORE_INDIGO] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMiniorLevelUpLearnset,
        .teachableLearnset = sMiniorTeachableLearnset,
    ),

    [SPECIES_MINIOR_CORE_VIOLET] = HARD_MODE(
        .abilities = {  ABILITY_SHIELDS_DOWN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMiniorLevelUpLearnset,
        .teachableLearnset = sMiniorTeachableLearnset,
    ),

    [SPECIES_KOMALA] = HARD_MODE(
        .abilities = {  ABILITY_COMATOSE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sKomalaLevelUpLearnset,
        .teachableLearnset = sKomalaTeachableLearnset,
        .eggMoveLearnset = sKomalaEggMoveLearnset,
    ),

    [SPECIES_TURTONATOR] = HARD_MODE(
        .abilities = {  ABILITY_SHELL_ARMOR,  ABILITY_DAUNTLESS_SHIELD,  ABILITY_MAGMA_ARMOR },
        .levelUpLearnset = sTurtonatorLevelUpLearnset,
        .teachableLearnset = sTurtonatorTeachableLearnset,
        .eggMoveLearnset = sTurtonatorEggMoveLearnset,
    ),

    [SPECIES_TOGEDEMARU] = HARD_MODE(
        .abilities = {  ABILITY_IRON_BARBS,  ABILITY_STURDY,  ABILITY_MOTOR_DRIVE },
        .levelUpLearnset = sTogedemaruLevelUpLearnset,
        .teachableLearnset = sTogedemaruTeachableLearnset,
        .eggMoveLearnset = sTogedemaruEggMoveLearnset,
    ),

    [SPECIES_MIMIKYU_DISGUISED] = HARD_MODE(
        .abilities = {  ABILITY_DISGUISE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMimikyuLevelUpLearnset,
        .teachableLearnset = sMimikyuTeachableLearnset,
        .eggMoveLearnset = sMimikyuEggMoveLearnset,
    ),

    [SPECIES_MIMIKYU_BUSTED] = HARD_MODE(
        .abilities = {  ABILITY_DISGUISE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMimikyuLevelUpLearnset,
        .teachableLearnset = sMimikyuTeachableLearnset,
        .eggMoveLearnset = sMimikyuEggMoveLearnset,
    ),

    [SPECIES_BRUXISH] = HARD_MODE(
        .abilities = {  ABILITY_DAZZLING,  ABILITY_STRONG_JAW,  ABILITY_WONDER_SKIN },
        .levelUpLearnset = sBruxishLevelUpLearnset,
        .teachableLearnset = sBruxishTeachableLearnset,
        .eggMoveLearnset = sBruxishEggMoveLearnset,
    ),

    [SPECIES_DRAMPA] = HARD_MODE(
        .abilities = {  ABILITY_FATAL_PRECISION,  ABILITY_FATAL_PRECISION, ABILITY_BERSERK  },
        .levelUpLearnset = sDrampaLevelUpLearnset,
        .teachableLearnset = sDrampaTeachableLearnset,
        .eggMoveLearnset = sDrampaEggMoveLearnset,
    ),

    [SPECIES_DRAMPA_MEGA] = HARD_MODE(
        .abilities = { ABILITY_WIND_RIDER, ABILITY_WIND_RIDER, ABILITY_DRIZZLE },
        .levelUpLearnset = sDrampaLevelUpLearnset,
        .teachableLearnset = sDrampaTeachableLearnset,
    ),

    [SPECIES_DHELMISE] = HARD_MODE(
        .abilities = {  ABILITY_STEELY_SPIRIT,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sDhelmiseLevelUpLearnset,
        .teachableLearnset = sDhelmiseTeachableLearnset,
    ),

    [SPECIES_JANGMO_O] = HARD_MODE(
        .abilities = {  ABILITY_BULLETPROOF,  ABILITY_SOUNDPROOF,  ABILITY_OVERCOAT },
        .levelUpLearnset = sJangmoOLevelUpLearnset,
        .teachableLearnset = sJangmoOTeachableLearnset,
        .eggMoveLearnset = sJangmoOEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_HAKAMO_O}),
    ),

    [SPECIES_HAKAMO_O] = HARD_MODE(
        .abilities = {  ABILITY_BULLETPROOF,  ABILITY_SOUNDPROOF,  ABILITY_OVERCOAT },
        .levelUpLearnset = sHakamoOLevelUpLearnset,
        .teachableLearnset = sHakamoOTeachableLearnset,
        .eggMoveLearnset = sJangmoOEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 45, SPECIES_KOMMO_O}, {EVO_NONE, 0, SPECIES_KOMMO_O_TOTEM}),
    ),

    [SPECIES_KOMMO_O] = HARD_MODE(
        .abilities = {  ABILITY_BULLETPROOF,  ABILITY_SOUNDPROOF,  ABILITY_OVERCOAT },
        .levelUpLearnset = sKommoOLevelUpLearnset,
        .teachableLearnset = sKommoOTeachableLearnset,
        .eggMoveLearnset = sJangmoOEggMoveLearnset,
    ),

    [SPECIES_TAPU_KOKO] = HARD_MODE(
        .abilities = {  ABILITY_TELEPATHY,  ABILITY_NONE,  ABILITY_ELECTRIC_SURGE },
        .levelUpLearnset = sTapuKokoLevelUpLearnset,
        .teachableLearnset = sTapuKokoTeachableLearnset,
    ),

    [SPECIES_TAPU_LELE] = HARD_MODE(
        .abilities = {  ABILITY_TELEPATHY,  ABILITY_NONE,  ABILITY_PSYCHIC_SURGE },
        .levelUpLearnset = sTapuLeleLevelUpLearnset,
        .teachableLearnset = sTapuLeleTeachableLearnset,
    ),

    [SPECIES_TAPU_BULU] = HARD_MODE(
        .abilities = {  ABILITY_TELEPATHY,  ABILITY_NONE,  ABILITY_GRASSY_SURGE },
        .levelUpLearnset = sTapuBuluLevelUpLearnset,
        .teachableLearnset = sTapuBuluTeachableLearnset,
    ),

    [SPECIES_TAPU_FINI] = HARD_MODE(
        .abilities = {  ABILITY_TELEPATHY,  ABILITY_NONE,  ABILITY_MISTY_SURGE },
        .levelUpLearnset = sTapuFiniLevelUpLearnset,
        .teachableLearnset = sTapuFiniTeachableLearnset,
    ),

    [SPECIES_NIHILEGO] = HARD_MODE(
        .abilities = {  ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_BEAST_BOOST },
        .levelUpLearnset = sNihilegoLevelUpLearnset,
        .teachableLearnset = sNihilegoTeachableLearnset,
    ),

    [SPECIES_BUZZWOLE] = HARD_MODE(
        .abilities = {  ABILITY_IRON_FIST,  ABILITY_NONE,  ABILITY_BEAST_BOOST },
        .levelUpLearnset = sBuzzwoleLevelUpLearnset,
        .teachableLearnset = sBuzzwoleTeachableLearnset,
    ),

    [SPECIES_PHEROMOSA] = HARD_MODE(
        .abilities = {  ABILITY_SHIELD_DUST,  ABILITY_NONE,  ABILITY_BEAST_BOOST },
        .levelUpLearnset = sPheromosaLevelUpLearnset,
        .teachableLearnset = sPheromosaTeachableLearnset,
    ),

    [SPECIES_XURKITREE] = HARD_MODE(
        .abilities = {  ABILITY_STEELWORKER,  ABILITY_NONE,  ABILITY_BEAST_BOOST },
        .levelUpLearnset = sXurkitreeLevelUpLearnset,
        .teachableLearnset = sXurkitreeTeachableLearnset,
    ),

    [SPECIES_CELESTEELA] = HARD_MODE(
        .abilities = {  ABILITY_CLEAR_BODY,  ABILITY_NONE,  ABILITY_BEAST_BOOST },
        .levelUpLearnset = sCelesteelaLevelUpLearnset,
        .teachableLearnset = sCelesteelaTeachableLearnset,
    ),

    [SPECIES_KARTANA] = HARD_MODE(
        .abilities = {  ABILITY_HYPER_CUTTER,  ABILITY_NONE,  ABILITY_BEAST_BOOST },
        .levelUpLearnset = sKartanaLevelUpLearnset,
        .teachableLearnset = sKartanaTeachableLearnset,
    ),

    [SPECIES_GUZZLORD] = HARD_MODE(
        .abilities = {  ABILITY_DARK_AURA,  ABILITY_NONE,  ABILITY_BEAST_BOOST },
        .levelUpLearnset = sGuzzlordLevelUpLearnset,
        .teachableLearnset = sGuzzlordTeachableLearnset,
    ),

    [SPECIES_MAGEARNA] = HARD_MODE(
        .abilities = {  ABILITY_SOUL_HEART,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMagearnaLevelUpLearnset,
        .teachableLearnset = sMagearnaTeachableLearnset,
    ),

    [SPECIES_MAGEARNA_ORIGINAL] = HARD_MODE(
        .abilities = {  ABILITY_SOUL_HEART,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMagearnaLevelUpLearnset,
        .teachableLearnset = sMagearnaTeachableLearnset,
    ),

    [SPECIES_MAGEARNA_MEGA] = HARD_MODE(
        .abilities = { ABILITY_SOUL_HEART, ABILITY_NONE, ABILITY_NONE },
        .levelUpLearnset = sMagearnaLevelUpLearnset,
        .teachableLearnset = sMagearnaTeachableLearnset,
    ),

    [SPECIES_MAGEARNA_ORIGINAL_MEGA] = HARD_MODE(
        .abilities = { ABILITY_SOUL_HEART, ABILITY_NONE, ABILITY_NONE },
        .levelUpLearnset = sMagearnaLevelUpLearnset,
        .teachableLearnset = sMagearnaTeachableLearnset,
    ),

    [SPECIES_MARSHADOW] = HARD_MODE(
        .abilities = {  ABILITY_TECHNICIAN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMarshadowLevelUpLearnset,
        .teachableLearnset = sMarshadowTeachableLearnset,
    ),

    [SPECIES_POIPOLE] = HARD_MODE(
        .abilities = {  ABILITY_TINTED_LENS,  ABILITY_NONE,  ABILITY_BEAST_BOOST },
        .levelUpLearnset = sPoipoleLevelUpLearnset,
        .teachableLearnset = sPoipoleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_DRAGON_PULSE, SPECIES_NAGANADEL}),
    ),

    [SPECIES_NAGANADEL] = HARD_MODE(
        .abilities = {  ABILITY_TINTED_LENS,  ABILITY_NONE,  ABILITY_BEAST_BOOST },
        .levelUpLearnset = sNaganadelLevelUpLearnset,
        .teachableLearnset = sNaganadelTeachableLearnset,
    ),

    [SPECIES_STAKATAKA] = HARD_MODE(
        .abilities = {  ABILITY_FILTER,  ABILITY_NONE,  ABILITY_BEAST_BOOST },
        .levelUpLearnset = sStakatakaLevelUpLearnset,
        .teachableLearnset = sStakatakaTeachableLearnset,
    ),

    [SPECIES_BLACEPHALON] = HARD_MODE(
        .abilities = {  ABILITY_MAGICIAN,  ABILITY_NONE,  ABILITY_BEAST_BOOST },
        .levelUpLearnset = sBlacephalonLevelUpLearnset,
        .teachableLearnset = sBlacephalonTeachableLearnset,
    ),

    [SPECIES_ZERAORA] = HARD_MODE(
        .abilities = {  ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sZeraoraLevelUpLearnset,
        .teachableLearnset = sZeraoraTeachableLearnset,
    ),

    [SPECIES_ZERAORA_MEGA] = HARD_MODE(
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_NONE, ABILITY_NONE },
        .levelUpLearnset = sZeraoraLevelUpLearnset,
        .teachableLearnset = sZeraoraTeachableLearnset,
    ),
