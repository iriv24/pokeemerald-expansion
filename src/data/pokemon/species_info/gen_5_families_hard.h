[SPECIES_VICTINI] = HARD_MODE(
        .abilities = { ABILITY_VICTORY_STAR,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sVictiniLevelUpLearnset,
        .teachableLearnset = sVictiniTeachableLearnset,
    ),

    [SPECIES_SNIVY] = HARD_MODE(
        .abilities = { ABILITY_OVERGROW,  ABILITY_BAD_COMPANY,  ABILITY_CONTRARY},
        .levelUpLearnset = sSnivyLevelUpLearnset,
        .teachableLearnset = sSnivyTeachableLearnset,
        .eggMoveLearnset = sSnivyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_SERVINE}),
    ),

    [SPECIES_SERVINE] = HARD_MODE(
        .abilities = { ABILITY_OVERGROW,  ABILITY_BAD_COMPANY,  ABILITY_CONTRARY},
        .levelUpLearnset = sServineLevelUpLearnset,
        .teachableLearnset = sServineTeachableLearnset,
        .eggMoveLearnset = sSnivyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_SERPERIOR}),
    ),

    [SPECIES_SERPERIOR] = HARD_MODE(
        .abilities = { ABILITY_OVERGROW,  ABILITY_BAD_COMPANY,  ABILITY_CONTRARY},
        .levelUpLearnset = sSerperiorLevelUpLearnset,
        .teachableLearnset = sSerperiorTeachableLearnset,
        .eggMoveLearnset = sSnivyEggMoveLearnset,
    ),

    [SPECIES_TEPIG] = HARD_MODE(
        .abilities = { ABILITY_BLAZE,  ABILITY_THICK_FAT,  ABILITY_NONE},
        .levelUpLearnset = sTepigLevelUpLearnset,
        .teachableLearnset = sTepigTeachableLearnset,
        .eggMoveLearnset = sTepigEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_PIGNITE}),
    ),

    [SPECIES_PIGNITE] = HARD_MODE(
        .abilities = { ABILITY_BLAZE,  ABILITY_THICK_FAT,  ABILITY_NONE},
        .levelUpLearnset = sPigniteLevelUpLearnset,
        .teachableLearnset = sPigniteTeachableLearnset,
        .eggMoveLearnset = sTepigEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_EMBOAR}),
    ),

    [SPECIES_EMBOAR] = HARD_MODE(
        .abilities = { ABILITY_BLAZE,  ABILITY_BULL_RUSH,  ABILITY_RECKLESS},
        .levelUpLearnset = sEmboarLevelUpLearnset,
        .teachableLearnset = sEmboarTeachableLearnset,
        .eggMoveLearnset = sTepigEggMoveLearnset,
    ),

    [SPECIES_EMBOAR_MEGA] = HARD_MODE(
        .abilities = { ABILITY_BULL_RUSH, ABILITY_BULL_RUSH, ABILITY_MOLD_BREAKER },
        .levelUpLearnset = sEmboarLevelUpLearnset,
        .teachableLearnset = sEmboarTeachableLearnset,
    ),

    [SPECIES_OSHAWOTT] = HARD_MODE(
        .abilities = { ABILITY_TORRENT,  ABILITY_SHELL_ARMOR,  ABILITY_NONE},
        .levelUpLearnset = sOshawottLevelUpLearnset,
        .teachableLearnset = sOshawottTeachableLearnset,
        .eggMoveLearnset = sOshawottEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_DEWOTT}),
    ),

    [SPECIES_DEWOTT] = HARD_MODE(
        .abilities = { ABILITY_TORRENT,  ABILITY_SHELL_ARMOR,  ABILITY_NONE},
        .levelUpLearnset = sDewottLevelUpLearnset,
        .teachableLearnset = sDewottTeachableLearnset,
        .eggMoveLearnset = sOshawottEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_DAY, 36, SPECIES_SAMUROTT}, {EVO_LEVEL_NIGHT, 36, SPECIES_SAMUROTT_HISUI}),
    ),

    [SPECIES_SAMUROTT] = HARD_MODE(
        .abilities = { ABILITY_TORRENT,  ABILITY_SHELL_ARMOR,  ABILITY_SHARPNESS},
        .levelUpLearnset = sSamurottLevelUpLearnset,
        .teachableLearnset = sSamurottTeachableLearnset,
        .eggMoveLearnset = sOshawottEggMoveLearnset,
    ),

    [SPECIES_SAMUROTT_HISUI] = HARD_MODE(
        .abilities = { ABILITY_TORRENT,  ABILITY_SHARPNESS,  ABILITY_SHELL_ARMOR},
        .levelUpLearnset = sSamurottHisuiLevelUpLearnset,
        .teachableLearnset = sSamurottHisuiTeachableLearnset,
        .eggMoveLearnset = sOshawottEggMoveLearnset,
    ),

    [SPECIES_PATRAT] = HARD_MODE(
        .abilities = { ABILITY_ANALYTIC,  ABILITY_NO_GUARD,  ABILITY_NONE},
        .levelUpLearnset = sPatratLevelUpLearnset,
        .teachableLearnset = sPatratTeachableLearnset,
        .eggMoveLearnset = sPatratEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_WATCHOG}),
    ),

    [SPECIES_WATCHOG] = HARD_MODE(
        .abilities = { ABILITY_ANALYTIC,  ABILITY_NO_GUARD,  ABILITY_NONE},
        .levelUpLearnset = sWatchogLevelUpLearnset,
        .teachableLearnset = sWatchogTeachableLearnset,
        .eggMoveLearnset = sPatratEggMoveLearnset,
    ),

    [SPECIES_LILLIPUP] = HARD_MODE(
        .abilities = { ABILITY_VITAL_SPIRIT,  ABILITY_PICKUP,  ABILITY_RUN_AWAY},
        .levelUpLearnset = sLillipupLevelUpLearnset,
        .teachableLearnset = sLillipupTeachableLearnset,
        .eggMoveLearnset = sLillipupEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_HERDIER}),
    ),

    [SPECIES_HERDIER] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_SAND_RUSH,  ABILITY_SCRAPPY},
        .levelUpLearnset = sHerdierLevelUpLearnset,
        .teachableLearnset = sHerdierTeachableLearnset,
        .eggMoveLearnset = sLillipupEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_STOUTLAND}),
    ),

    [SPECIES_STOUTLAND] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_SAND_RUSH,  ABILITY_SCRAPPY},
        .levelUpLearnset = sStoutlandLevelUpLearnset,
        .teachableLearnset = sStoutlandTeachableLearnset,
        .eggMoveLearnset = sLillipupEggMoveLearnset,
    ),

    [SPECIES_PURRLOIN] = HARD_MODE(
        .abilities = { ABILITY_PRANKSTER,  ABILITY_UNBURDEN,  ABILITY_LIMBER},
        .levelUpLearnset = sPurrloinLevelUpLearnset,
        .teachableLearnset = sPurrloinTeachableLearnset,
        .eggMoveLearnset = sPurrloinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LIEPARD}),
    ),

    [SPECIES_LIEPARD] = HARD_MODE(
        .abilities = { ABILITY_PRANKSTER,  ABILITY_UNBURDEN, ABILITY_MOXIE },
        .levelUpLearnset = sLiepardLevelUpLearnset,
        .teachableLearnset = sLiepardTeachableLearnset,
        .eggMoveLearnset = sPurrloinEggMoveLearnset,
    ),

    [SPECIES_PANSAGE] = HARD_MODE(
        .abilities = { ABILITY_GLUTTONY,  ABILITY_OVERGROW,  ABILITY_NONE},
        .levelUpLearnset = sPansageLevelUpLearnset,
        .teachableLearnset = sPansageTeachableLearnset,
        .eggMoveLearnset = sPansageEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SIMISAGE}),
    ),

    [SPECIES_SIMISAGE] = HARD_MODE(
        .abilities = { ABILITY_SAGE_POWER,  ABILITY_OVERGROW,  ABILITY_NONE},
        .levelUpLearnset = sSimisageLevelUpLearnset,
        .teachableLearnset = sSimisageTeachableLearnset,
        .eggMoveLearnset = sPansageEggMoveLearnset,
    ),

    [SPECIES_PANSEAR] = HARD_MODE(
        .abilities = { ABILITY_GLUTTONY,  ABILITY_BLAZE,  ABILITY_NONE},
        .levelUpLearnset = sPansearLevelUpLearnset,
        .teachableLearnset = sPansearTeachableLearnset,
        .eggMoveLearnset = sPansearEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_SIMISEAR}),
    ),

    [SPECIES_SIMISEAR] = HARD_MODE(
        .abilities = { ABILITY_SAGE_POWER,  ABILITY_BLAZE,  ABILITY_NONE},
        .levelUpLearnset = sSimisearLevelUpLearnset,
        .teachableLearnset = sSimisearTeachableLearnset,
        .eggMoveLearnset = sPansearEggMoveLearnset,
    ),

    [SPECIES_PANPOUR] = HARD_MODE(
        .abilities = { ABILITY_GLUTTONY,  ABILITY_TORRENT,  ABILITY_NONE},
        .levelUpLearnset = sPanpourLevelUpLearnset,
        .teachableLearnset = sPanpourTeachableLearnset,
        .eggMoveLearnset = sPanpourEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_SIMIPOUR}),
    ),

    [SPECIES_SIMIPOUR] = HARD_MODE(
        .abilities = { ABILITY_SAGE_POWER,  ABILITY_TORRENT,  ABILITY_NONE},
        .levelUpLearnset = sSimipourLevelUpLearnset,
        .teachableLearnset = sSimipourTeachableLearnset,
        .eggMoveLearnset = sPanpourEggMoveLearnset,
    ),

    [SPECIES_MUNNA] = HARD_MODE(
        .abilities = { ABILITY_SYNCHRONIZE,  ABILITY_NONE,  ABILITY_TELEPATHY},
        .levelUpLearnset = sMunnaLevelUpLearnset,
        .teachableLearnset = sMunnaTeachableLearnset,
        .eggMoveLearnset = sMunnaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_MUSHARNA}),
    ),

    [SPECIES_MUSHARNA] = HARD_MODE(
        .abilities = { ABILITY_UNAWARE,  ABILITY_NONE,  ABILITY_SYNCHRONIZE},
        .levelUpLearnset = sMusharnaLevelUpLearnset,
        .teachableLearnset = sMusharnaTeachableLearnset,
        .eggMoveLearnset = sMunnaEggMoveLearnset,
    ),

    [SPECIES_PIDOVE] = HARD_MODE(
        .abilities = { ABILITY_SUPER_LUCK,  ABILITY_SUPER_LUCK,  ABILITY_RIVALRY},
        .levelUpLearnset = sPidoveLevelUpLearnset,
        .teachableLearnset = sPidoveTeachableLearnset,
        .eggMoveLearnset = sPidoveEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_TRANQUILL}),
    ),

    [SPECIES_TRANQUILL] = HARD_MODE(
        .abilities = { ABILITY_SUPER_LUCK,  ABILITY_SUPER_LUCK,  ABILITY_RIVALRY},
        .levelUpLearnset = sTranquillLevelUpLearnset,
        .teachableLearnset = sTranquillTeachableLearnset,
        .eggMoveLearnset = sPidoveEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_UNFEZANT}),
    ),

    [SPECIES_UNFEZANT] = HARD_MODE(
        .abilities = { ABILITY_SUPER_LUCK,  ABILITY_SUPER_LUCK,  ABILITY_RIVALRY},
        .levelUpLearnset = sUnfezantLevelUpLearnset,
        .teachableLearnset = sUnfezantTeachableLearnset,
        .eggMoveLearnset = sPidoveEggMoveLearnset,
    ),

    [SPECIES_BLITZLE] = HARD_MODE(
        .abilities = { ABILITY_MOTOR_DRIVE,  ABILITY_FLARE_BOOST,  ABILITY_SAP_SIPPER},
        .levelUpLearnset = sBlitzleLevelUpLearnset,
        .teachableLearnset = sBlitzleTeachableLearnset,
        .eggMoveLearnset = sBlitzleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_ZEBSTRIKA}),
    ),

    [SPECIES_ZEBSTRIKA] = HARD_MODE(
        .abilities = { ABILITY_MOTOR_DRIVE,  ABILITY_FLARE_BOOST,  ABILITY_SAP_SIPPER},
        .levelUpLearnset = sZebstrikaLevelUpLearnset,
        .teachableLearnset = sZebstrikaTeachableLearnset,
        .eggMoveLearnset = sBlitzleEggMoveLearnset,
    ),

    [SPECIES_ROGGENROLA] = HARD_MODE(
        .abilities = { ABILITY_STURDY,  ABILITY_STURDY,  ABILITY_WEAK_ARMOR},
        .levelUpLearnset = sRoggenrolaLevelUpLearnset,
        .teachableLearnset = sRoggenrolaTeachableLearnset,
        .eggMoveLearnset = sRoggenrolaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_BOLDORE}),
    ),

    [SPECIES_BOLDORE] = HARD_MODE(
        .abilities = { ABILITY_STURDY,  ABILITY_STURDY,  ABILITY_WEAK_ARMOR},
        .levelUpLearnset = sBoldoreLevelUpLearnset,
        .teachableLearnset = sBoldoreTeachableLearnset,
        .eggMoveLearnset = sRoggenrolaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GIGALITH}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GIGALITH}),
    ),

    [SPECIES_GIGALITH] = HARD_MODE(
        .abilities = { ABILITY_STURDY,  ABILITY_STURDY,  ABILITY_SAND_STREAM},
        .levelUpLearnset = sGigalithLevelUpLearnset,
        .teachableLearnset = sGigalithTeachableLearnset,
        .eggMoveLearnset = sRoggenrolaEggMoveLearnset,
    ),

    [SPECIES_WOOBAT] = HARD_MODE(
        .abilities = { ABILITY_UNAWARE,  ABILITY_NONE,  ABILITY_SIMPLE},
        .levelUpLearnset = sWoobatLevelUpLearnset,
        .teachableLearnset = sWoobatTeachableLearnset,
        .eggMoveLearnset = sWoobatEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_SWOOBAT}),
    ),

    [SPECIES_SWOOBAT] = HARD_MODE(
        .abilities = { ABILITY_UNAWARE,  ABILITY_NONE,  ABILITY_SIMPLE},
        .levelUpLearnset = sSwoobatLevelUpLearnset,
        .teachableLearnset = sSwoobatTeachableLearnset,
        .eggMoveLearnset = sWoobatEggMoveLearnset,
    ),

    [SPECIES_DRILBUR] = HARD_MODE(
        .abilities = { ABILITY_SAND_RUSH,  ABILITY_MOLD_BREAKER,  ABILITY_SAND_FORCE},
        .levelUpLearnset = sDrilburLevelUpLearnset,
        .teachableLearnset = sDrilburTeachableLearnset,
        .eggMoveLearnset = sDrilburEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_EXCADRILL}),
    ),

    [SPECIES_EXCADRILL] = HARD_MODE(
        .abilities = { ABILITY_SAND_RUSH,  ABILITY_MOLD_BREAKER,  ABILITY_SAND_FORCE},
        .levelUpLearnset = sExcadrillLevelUpLearnset,
        .teachableLearnset = sExcadrillTeachableLearnset,
        .eggMoveLearnset = sDrilburEggMoveLearnset,
    ),

    [SPECIES_EXCADRILL_MEGA] = HARD_MODE(
        .abilities = { ABILITY_SAND_RUSH, ABILITY_SAND_FORCE, ABILITY_MOLD_BREAKER },
        .levelUpLearnset = sExcadrillLevelUpLearnset,
        .teachableLearnset = sExcadrillTeachableLearnset,
    ),

    [SPECIES_AUDINO] = HARD_MODE(
        .abilities = { ABILITY_REGENERATOR,  ABILITY_NONE,  ABILITY_REGENERATOR},
        .levelUpLearnset = sAudinoLevelUpLearnset,
        .teachableLearnset = sAudinoTeachableLearnset,
        .eggMoveLearnset = sAudinoEggMoveLearnset,
    ),

    [SPECIES_AUDINO_MEGA] = HARD_MODE(
        .abilities = { ABILITY_HOSPITALITY,  ABILITY_HOSPITALITY,  ABILITY_REGENERATOR},
        .levelUpLearnset = sAudinoLevelUpLearnset,
        .teachableLearnset = sAudinoTeachableLearnset,
        .eggMoveLearnset = sAudinoEggMoveLearnset,
    ),

    [SPECIES_TIMBURR] = HARD_MODE(
        .abilities = { ABILITY_GUTS,  ABILITY_IRON_FIST,  ABILITY_SHEER_FORCE},
        .levelUpLearnset = sTimburrLevelUpLearnset,
        .teachableLearnset = sTimburrTeachableLearnset,
        .eggMoveLearnset = sTimburrEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_GURDURR}),
    ),

    [SPECIES_GURDURR] = HARD_MODE(
        .abilities = { ABILITY_GUTS,  ABILITY_IRON_FIST,  ABILITY_SHEER_FORCE},
        .levelUpLearnset = sGurdurrLevelUpLearnset,
        .teachableLearnset = sGurdurrTeachableLearnset,
        .eggMoveLearnset = sTimburrEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_CONKELDURR}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_CONKELDURR}),
    ),

    [SPECIES_CONKELDURR] = HARD_MODE(
        .abilities = { ABILITY_GUTS,  ABILITY_IRON_FIST,  ABILITY_SHEER_FORCE},
        .levelUpLearnset = sConkeldurrLevelUpLearnset,
        .teachableLearnset = sConkeldurrTeachableLearnset,
        .eggMoveLearnset = sTimburrEggMoveLearnset,
    ),

    [SPECIES_TYMPOLE] = HARD_MODE(
        .abilities = { ABILITY_SWIFT_SWIM,  ABILITY_SWIFT_SWIM,  ABILITY_WATER_ABSORB},
        .levelUpLearnset = sTympoleLevelUpLearnset,
        .teachableLearnset = sTympoleTeachableLearnset,
        .eggMoveLearnset = sTympoleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_PALPITOAD}),
    ),

    [SPECIES_PALPITOAD] = HARD_MODE(
        .abilities = { ABILITY_SWIFT_SWIM,  ABILITY_SWIFT_SWIM,  ABILITY_WATER_ABSORB},
        .levelUpLearnset = sPalpitoadLevelUpLearnset,
        .teachableLearnset = sPalpitoadTeachableLearnset,
        .eggMoveLearnset = sTympoleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SEISMITOAD}),
    ),

    [SPECIES_SEISMITOAD] = HARD_MODE(
        .abilities = { ABILITY_SWIFT_SWIM,  ABILITY_SWIFT_SWIM,  ABILITY_WATER_ABSORB},
        .levelUpLearnset = sSeismitoadLevelUpLearnset,
        .teachableLearnset = sSeismitoadTeachableLearnset,
        .eggMoveLearnset = sTympoleEggMoveLearnset,
    ),

    [SPECIES_THROH] = HARD_MODE(
        .abilities = { ABILITY_GUTS,  ABILITY_TECHNICIAN,  ABILITY_MOLD_BREAKER},
        .levelUpLearnset = sThrohLevelUpLearnset,
        .teachableLearnset = sThrohTeachableLearnset,
    ),

    [SPECIES_SAWK] = HARD_MODE(
        .abilities = { ABILITY_STURDY,  ABILITY_CONTRARY,  ABILITY_INNER_FOCUS},
        .levelUpLearnset = sSawkLevelUpLearnset,
        .teachableLearnset = sSawkTeachableLearnset,
    ),

    [SPECIES_SEWADDLE] = HARD_MODE(
        .abilities = { ABILITY_SWARM,  ABILITY_CHLOROPHYLL,  ABILITY_OVERCOAT},
        .levelUpLearnset = sSewaddleLevelUpLearnset,
        .teachableLearnset = sSewaddleTeachableLearnset,
        .eggMoveLearnset = sSewaddleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_SWADLOON}),
    ),

    [SPECIES_SWADLOON] = HARD_MODE(
        .abilities = { ABILITY_LEAF_GUARD,  ABILITY_CHLOROPHYLL,  ABILITY_OVERCOAT},
        .levelUpLearnset = sSwadloonLevelUpLearnset,
        .teachableLearnset = sSwadloonTeachableLearnset,
        .eggMoveLearnset = sSewaddleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_LEAVANNY}),
    ),

    [SPECIES_LEAVANNY] = HARD_MODE(
        .abilities = { ABILITY_SHARPNESS,  ABILITY_CHLOROPHYLL,  ABILITY_SWARM},
        .levelUpLearnset = sLeavannyLevelUpLearnset,
        .teachableLearnset = sLeavannyTeachableLearnset,
        .eggMoveLearnset = sSewaddleEggMoveLearnset,
    ),

    [SPECIES_VENIPEDE] = HARD_MODE(
        .abilities = { ABILITY_SPEED_BOOST,  ABILITY_SWARM,  ABILITY_POISON_TOUCH},
        .levelUpLearnset = sVenipedeLevelUpLearnset,
        .teachableLearnset = sVenipedeTeachableLearnset,
        .eggMoveLearnset = sVenipedeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_WHIRLIPEDE}),
    ),

    [SPECIES_WHIRLIPEDE] = HARD_MODE(
        .abilities = { ABILITY_SPEED_BOOST,  ABILITY_SWARM,  ABILITY_POISON_TOUCH},
        .levelUpLearnset = sWhirlipedeLevelUpLearnset,
        .teachableLearnset = sWhirlipedeTeachableLearnset,
        .eggMoveLearnset = sVenipedeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SCOLIPEDE}),
    ),

    [SPECIES_SCOLIPEDE] = HARD_MODE(
        .abilities = { ABILITY_SPEED_BOOST,  ABILITY_SWARM,  ABILITY_POISON_TOUCH},
        .levelUpLearnset = sScolipedeLevelUpLearnset,
        .teachableLearnset = sScolipedeTeachableLearnset,
        .eggMoveLearnset = sVenipedeEggMoveLearnset,
    ),

    [SPECIES_SCOLIPEDE_MEGA] = HARD_MODE(
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR },
        .levelUpLearnset = sScolipedeLevelUpLearnset,
        .teachableLearnset = sScolipedeTeachableLearnset,
    ),

    [SPECIES_COTTONEE] = HARD_MODE(
        .abilities = { ABILITY_PRANKSTER,  ABILITY_CHLOROPHYLL,  ABILITY_INFILTRATOR},
        .levelUpLearnset = sCottoneeLevelUpLearnset,
        .teachableLearnset = sCottoneeTeachableLearnset,
        .eggMoveLearnset = sCottoneeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SUN_STONE, SPECIES_WHIMSICOTT}),
    ),

    [SPECIES_WHIMSICOTT] = HARD_MODE(
        .abilities = { ABILITY_PRANKSTER,  ABILITY_CHLOROPHYLL,  ABILITY_INFILTRATOR},
        .levelUpLearnset = sWhimsicottLevelUpLearnset,
        .teachableLearnset = sWhimsicottTeachableLearnset,
        .eggMoveLearnset = sCottoneeEggMoveLearnset,
    ),

    [SPECIES_PETILIL] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL,  ABILITY_LEAF_GUARD},
        .levelUpLearnset = sPetililLevelUpLearnset,
        .teachableLearnset = sPetililTeachableLearnset,
        .eggMoveLearnset = sPetililEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SUN_STONE, SPECIES_LILLIGANT}, {EVO_ITEM, ITEM_LEAF_STONE, SPECIES_LILLIGANT_HISUI}),
    ),

    [SPECIES_LILLIGANT] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL,  ABILITY_LEAF_GUARD},
        .levelUpLearnset = sLilligantLevelUpLearnset,
        .teachableLearnset = sLilligantTeachableLearnset,
        .eggMoveLearnset = sPetililEggMoveLearnset,
    ),

    [SPECIES_LILLIGANT_HISUI] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL,  ABILITY_LEAF_GUARD},
        .levelUpLearnset = sLilligantHisuiLevelUpLearnset,
        .teachableLearnset = sLilligantHisuiTeachableLearnset,
        .eggMoveLearnset = sPetililEggMoveLearnset,
    ),

    [SPECIES_BASCULIN_RED_STRIPED] = HARD_MODE(
        .abilities = { ABILITY_RECKLESS,  ABILITY_ADAPTABILITY,  ABILITY_MOLD_BREAKER},
        .levelUpLearnset = sBasculinLevelUpLearnset,
        .teachableLearnset = sBasculinTeachableLearnset,
        .eggMoveLearnset = sBasculinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_MALE, 44, SPECIES_BASCULEGION_M}, {EVO_LEVEL_FEMALE, 44, SPECIES_BASCULEGION_F}),
    ),

    [SPECIES_BASCULIN_BLUE_STRIPED] = HARD_MODE(
        .abilities = { ABILITY_ROCK_HEAD,  ABILITY_ADAPTABILITY,  ABILITY_MOLD_BREAKER},
        .levelUpLearnset = sBasculinLevelUpLearnset,
        .teachableLearnset = sBasculinTeachableLearnset,
        .eggMoveLearnset = sBasculinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_MALE, 44, SPECIES_BASCULEGION_M}, {EVO_LEVEL_FEMALE, 44, SPECIES_BASCULEGION_F}),
    ),

    [SPECIES_BASCULIN_WHITE_STRIPED] = HARD_MODE(
        .abilities = { ABILITY_ROCK_HEAD,  ABILITY_ADAPTABILITY,  ABILITY_MOLD_BREAKER},
        .levelUpLearnset = sBasculinWhiteStripedLevelUpLearnset,
        .teachableLearnset = sBasculinWhiteStripedTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_MALE, 44, SPECIES_BASCULEGION_M}, {EVO_LEVEL_FEMALE, 44, SPECIES_BASCULEGION_F}),
    ),

    [SPECIES_BASCULEGION_M] = HARD_MODE(
        .abilities = { ABILITY_SWIFT_SWIM,  ABILITY_ADAPTABILITY,  ABILITY_MOLD_BREAKER},
        .levelUpLearnset = sBasculegionLevelUpLearnset,
        .teachableLearnset = sBasculegionTeachableLearnset,
        .eggMoveLearnset = sBasculinEggMoveLearnset,
    ),

    [SPECIES_BASCULEGION_F] = HARD_MODE(
        .abilities = { ABILITY_SWIFT_SWIM,  ABILITY_ADAPTABILITY,  ABILITY_MOLD_BREAKER},
        .levelUpLearnset = sBasculegionLevelUpLearnset,
        .teachableLearnset = sBasculegionTeachableLearnset,
        .eggMoveLearnset = sBasculinEggMoveLearnset,
    ),

    [SPECIES_SANDILE] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_INTIMIDATE,  ABILITY_MOXIE},
        .levelUpLearnset = sSandileLevelUpLearnset,
        .teachableLearnset = sSandileTeachableLearnset,
        .eggMoveLearnset = sSandileEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_KROKOROK}),
    ),

    [SPECIES_KROKOROK] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_INTIMIDATE,  ABILITY_MOXIE},
        .levelUpLearnset = sKrokorokLevelUpLearnset,
        .teachableLearnset = sKrokorokTeachableLearnset,
        .eggMoveLearnset = sSandileEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_KROOKODILE}),
    ),

    [SPECIES_KROOKODILE] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_INTIMIDATE,  ABILITY_MOXIE},
        .levelUpLearnset = sKrookodileLevelUpLearnset,
        .teachableLearnset = sKrookodileTeachableLearnset,
        .eggMoveLearnset = sSandileEggMoveLearnset,
    ),

    [SPECIES_DARUMAKA] = HARD_MODE(
        .abilities = { ABILITY_INNER_FOCUS,  ABILITY_NONE,  ABILITY_HUSTLE},
        .levelUpLearnset = sDarumakaLevelUpLearnset,
        .teachableLearnset = sDarumakaTeachableLearnset,
        .eggMoveLearnset = sDarumakaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_DARMANITAN_STANDARD}),
    ),

    [SPECIES_DARMANITAN_STANDARD] = HARD_MODE(
        .abilities = { ABILITY_SHEER_FORCE,  ABILITY_ZEN_MODE,  ABILITY_NONE},
        .levelUpLearnset = sDarmanitanLevelUpLearnset,
        .teachableLearnset = sDarmanitanTeachableLearnset,
        .eggMoveLearnset = sDarumakaEggMoveLearnset,
    ),

    [SPECIES_DARMANITAN_ZEN] = HARD_MODE(
        .abilities = { ABILITY_ZEN_MODE,  ABILITY_ZEN_MODE,  ABILITY_ZEN_MODE},
        .levelUpLearnset = sDarmanitanLevelUpLearnset,
        .teachableLearnset = sDarmanitanTeachableLearnset,
    ),

    [SPECIES_DARUMAKA_GALAR] = HARD_MODE(
        .abilities = { ABILITY_INNER_FOCUS,  ABILITY_NONE,  ABILITY_HUSTLE},
        .levelUpLearnset = sDarumakaGalarLevelUpLearnset,
        .teachableLearnset = sDarumakaGalarTeachableLearnset,
        .eggMoveLearnset = sDarumakaGalarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_DARMANITAN_GALAR_STANDARD}),
    ),

    [SPECIES_DARMANITAN_GALAR_STANDARD] = HARD_MODE(
        .abilities = { ABILITY_GORILLA_TACTICS,  ABILITY_NONE,  ABILITY_ZEN_MODE},
        .levelUpLearnset = sDarmanitanGalarLevelUpLearnset,
        .teachableLearnset = sDarmanitanGalarTeachableLearnset,
        .eggMoveLearnset = sDarumakaGalarEggMoveLearnset,
    ),

    [SPECIES_DARMANITAN_GALAR_ZEN] = HARD_MODE(
        .abilities = { ABILITY_ZEN_MODE,  ABILITY_ZEN_MODE,  ABILITY_ZEN_MODE},
        .levelUpLearnset = sDarmanitanGalarLevelUpLearnset,
        .teachableLearnset = sDarmanitanGalarTeachableLearnset,
    ),

    [SPECIES_MARACTUS] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL,  ABILITY_GRASSY_SURGE},
        .levelUpLearnset = sMaractusLevelUpLearnset,
        .teachableLearnset = sMaractusTeachableLearnset,
        .eggMoveLearnset = sMaractusEggMoveLearnset,
    ),

    [SPECIES_DWEBBLE] = HARD_MODE(
        .abilities = { ABILITY_STURDY,  ABILITY_SHELL_ARMOR,  ABILITY_WEAK_ARMOR},
        .levelUpLearnset = sDwebbleLevelUpLearnset,
        .teachableLearnset = sDwebbleTeachableLearnset,
        .eggMoveLearnset = sDwebbleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_CRUSTLE}),
    ),

    [SPECIES_CRUSTLE] = HARD_MODE(
        .abilities = { ABILITY_STURDY,  ABILITY_SHELL_ARMOR,  ABILITY_WEAK_ARMOR},
        .levelUpLearnset = sCrustleLevelUpLearnset,
        .teachableLearnset = sCrustleTeachableLearnset,
        .eggMoveLearnset = sDwebbleEggMoveLearnset,
    ),

    [SPECIES_SCRAGGY] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_INTIMIDATE,  ABILITY_MOXIE},
        .levelUpLearnset = sScraggyLevelUpLearnset,
        .teachableLearnset = sScraggyTeachableLearnset,
        .eggMoveLearnset = sScraggyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_SCRAFTY}),
    ),

    [SPECIES_SCRAFTY] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_INTIMIDATE,  ABILITY_MOXIE},
        .levelUpLearnset = sScraftyLevelUpLearnset,
        .teachableLearnset = sScraftyTeachableLearnset,
        .eggMoveLearnset = sScraggyEggMoveLearnset,
    ),

    [SPECIES_SCRAFTY_MEGA] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE, ABILITY_INTIMIDATE, ABILITY_INTIMIDATE },
        .levelUpLearnset = sScraftyLevelUpLearnset,
        .teachableLearnset = sScraftyTeachableLearnset,
    ),

    [SPECIES_SIGILYPH] = HARD_MODE(
        .abilities = { ABILITY_MAGIC_GUARD,  ABILITY_MAGIC_GUARD,  ABILITY_TINTED_LENS},
        .levelUpLearnset = sSigilyphLevelUpLearnset,
        .teachableLearnset = sSigilyphTeachableLearnset,
        .eggMoveLearnset = sSigilyphEggMoveLearnset,
    ),

    [SPECIES_YAMASK] = HARD_MODE(
        .abilities = { ABILITY_MUMMY,  ABILITY_SHADOW_SHIELD,  ABILITY_NONE},
        .levelUpLearnset = sYamaskLevelUpLearnset,
        .teachableLearnset = sYamaskTeachableLearnset,
        .eggMoveLearnset = sYamaskEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_COFAGRIGUS}),
    ),

    [SPECIES_COFAGRIGUS] = HARD_MODE(
        .abilities = { ABILITY_MUMMY,  ABILITY_SHADOW_SHIELD,  ABILITY_NONE},
        .levelUpLearnset = sCofagrigusLevelUpLearnset,
        .teachableLearnset = sCofagrigusTeachableLearnset,
        .eggMoveLearnset = sYamaskEggMoveLearnset,
    ),

    [SPECIES_YAMASK_GALAR] = HARD_MODE(
        .abilities = { ABILITY_WANDERING_SPIRIT,  ABILITY_SHADOW_SHIELD,  ABILITY_NONE},
        .levelUpLearnset = sYamaskGalarLevelUpLearnset,
        .teachableLearnset = sYamaskGalarTeachableLearnset,
        .eggMoveLearnset = sYamaskGalarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_RUNERIGUS}),
    ),

    [SPECIES_RUNERIGUS] = HARD_MODE(
        .abilities = { ABILITY_WANDERING_SPIRIT,  ABILITY_NONE,  ABILITY_SHADOW_SHIELD},
        .levelUpLearnset = sRunerigusLevelUpLearnset,
        .teachableLearnset = sRunerigusTeachableLearnset,
        .eggMoveLearnset = sYamaskGalarEggMoveLearnset,
    ),

    [SPECIES_TIRTOUGA] = HARD_MODE(
        .abilities = { ABILITY_SOLID_ROCK,  ABILITY_STURDY,  ABILITY_SWIFT_SWIM},
        .levelUpLearnset = sTirtougaLevelUpLearnset,
        .teachableLearnset = sTirtougaTeachableLearnset,
        .eggMoveLearnset = sTirtougaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_CARRACOSTA}),
    ),

    [SPECIES_CARRACOSTA] = HARD_MODE(
        .abilities = { ABILITY_SOLID_ROCK,  ABILITY_STURDY,  ABILITY_SWIFT_SWIM},
        .levelUpLearnset = sCarracostaLevelUpLearnset,
        .teachableLearnset = sCarracostaTeachableLearnset,
        .eggMoveLearnset = sTirtougaEggMoveLearnset,
    ),

    [SPECIES_ARCHEN] = HARD_MODE(
        .abilities = { ABILITY_DEFEATIST,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sArchenLevelUpLearnset,
        .teachableLearnset = sArchenTeachableLearnset,
        .eggMoveLearnset = sArchenEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_ARCHEOPS}),
    ),

    [SPECIES_ARCHEOPS] = HARD_MODE(
        .abilities = { ABILITY_DEFEATIST,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sArcheopsLevelUpLearnset,
        .teachableLearnset = sArcheopsTeachableLearnset,
        .eggMoveLearnset = sArchenEggMoveLearnset,
    ),

    [SPECIES_TRUBBISH] = HARD_MODE(
        .abilities = { ABILITY_STENCH,  ABILITY_STICKY_HOLD,  ABILITY_AFTERMATH},
        .levelUpLearnset = sTrubbishLevelUpLearnset,
        .teachableLearnset = sTrubbishTeachableLearnset,
        .eggMoveLearnset = sTrubbishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_GARBODOR}),
    ),

    [SPECIES_GARBODOR] = HARD_MODE(
        .abilities = { ABILITY_STENCH,  ABILITY_WEAK_ARMOR,  ABILITY_AFTERMATH},
        .levelUpLearnset = sGarbodorLevelUpLearnset,
        .teachableLearnset = sGarbodorTeachableLearnset,
        .eggMoveLearnset = sTrubbishEggMoveLearnset,
    ),

    [SPECIES_GARBODOR_MEGA] = HARD_MODE(
        .abilities = { ABILITY_PARASITIC_WASTE,  ABILITY_PARASITIC_WASTE,  ABILITY_PARASITIC_WASTE},
        .levelUpLearnset = sGarbodorLevelUpLearnset,
        .teachableLearnset = sGarbodorTeachableLearnset,
    ),

    [SPECIES_ZORUA] = HARD_MODE(
        .abilities = { ABILITY_ILLUSION,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sZoruaLevelUpLearnset,
        .teachableLearnset = sZoruaTeachableLearnset,
        .eggMoveLearnset = sZoruaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ZOROARK}),
    ),

    [SPECIES_ZOROARK] = HARD_MODE(
        .abilities = { ABILITY_ILLUSION,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sZoroarkLevelUpLearnset,
        .teachableLearnset = sZoroarkTeachableLearnset,
        .eggMoveLearnset = sZoruaEggMoveLearnset,
    ),

    [SPECIES_ZORUA_HISUI] = HARD_MODE(
        .abilities = { ABILITY_ILLUSION,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sZoruaHisuiLevelUpLearnset,
        .teachableLearnset = sZoruaHisuiTeachableLearnset,
        .eggMoveLearnset = sZoruaHisuiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ZOROARK_HISUI}),
    ),

    [SPECIES_ZOROARK_HISUI] = HARD_MODE(
        .abilities = { ABILITY_ILLUSION,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sZoroarkHisuiLevelUpLearnset,
        .teachableLearnset = sZoroarkHisuiTeachableLearnset,
        .eggMoveLearnset = sZoruaHisuiEggMoveLearnset,
    ),

    [SPECIES_MINCCINO] = HARD_MODE(
        .abilities = { ABILITY_SKILL_LINK,  ABILITY_TECHNICIAN,  ABILITY_CUTE_CHARM},
        .levelUpLearnset = sMinccinoLevelUpLearnset,
        .teachableLearnset = sMinccinoTeachableLearnset,
        .eggMoveLearnset = sMinccinoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_CINCCINO}),
    ),

    [SPECIES_CINCCINO] = HARD_MODE(
        .abilities = { ABILITY_SKILL_LINK,  ABILITY_TECHNICIAN,  ABILITY_CUTE_CHARM},
        .levelUpLearnset = sCinccinoLevelUpLearnset,
        .teachableLearnset = sCinccinoTeachableLearnset,
        .eggMoveLearnset = sMinccinoEggMoveLearnset,
    ),

    [SPECIES_GOTHITA] = HARD_MODE(
        .abilities = { ABILITY_SHADOW_TAG,  ABILITY_COMPETITIVE,  ABILITY_NONE},
        .levelUpLearnset = sGothitaLevelUpLearnset,
        .teachableLearnset = sGothitaTeachableLearnset,
        .eggMoveLearnset = sGothitaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_GOTHORITA}),
    ),

    [SPECIES_GOTHORITA] = HARD_MODE(
        .abilities = { ABILITY_SHADOW_TAG,  ABILITY_COMPETITIVE,  ABILITY_NONE},
        .levelUpLearnset = sGothoritaLevelUpLearnset,
        .teachableLearnset = sGothoritaTeachableLearnset,
        .eggMoveLearnset = sGothitaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_GOTHITELLE}),
    ),

    [SPECIES_GOTHITELLE] = HARD_MODE(
        .abilities = { ABILITY_SHADOW_TAG,  ABILITY_COMPETITIVE,  ABILITY_NONE},
        .levelUpLearnset = sGothitelleLevelUpLearnset,
        .teachableLearnset = sGothitelleTeachableLearnset,
        .eggMoveLearnset = sGothitaEggMoveLearnset,
    ),

    [SPECIES_SOLOSIS] = HARD_MODE(
        .abilities = { ABILITY_REGENERATOR,  ABILITY_MAGIC_GUARD,  ABILITY_OVERCOAT},
        .levelUpLearnset = sSolosisLevelUpLearnset,
        .teachableLearnset = sSolosisTeachableLearnset,
        .eggMoveLearnset = sSolosisEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_DUOSION}),
    ),

    [SPECIES_DUOSION] = HARD_MODE(
        .abilities = { ABILITY_REGENERATOR,  ABILITY_MAGIC_GUARD,  ABILITY_OVERCOAT},
        .levelUpLearnset = sDuosionLevelUpLearnset,
        .teachableLearnset = sDuosionTeachableLearnset,
        .eggMoveLearnset = sSolosisEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 41, SPECIES_REUNICLUS}),
    ),

    [SPECIES_REUNICLUS] = HARD_MODE(
        .abilities = { ABILITY_REGENERATOR,  ABILITY_MAGIC_GUARD,  ABILITY_OVERCOAT},
        .levelUpLearnset = sReuniclusLevelUpLearnset,
        .teachableLearnset = sReuniclusTeachableLearnset,
        .eggMoveLearnset = sSolosisEggMoveLearnset,
    ),

    [SPECIES_DUCKLETT] = HARD_MODE(
        .abilities = { ABILITY_HYDRATION,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sDucklettLevelUpLearnset,
        .teachableLearnset = sDucklettTeachableLearnset,
        .eggMoveLearnset = sDucklettEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_SWANNA}),
    ),

    [SPECIES_SWANNA] = HARD_MODE(
        .abilities = { ABILITY_NO_GUARD,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sSwannaLevelUpLearnset,
        .teachableLearnset = sSwannaTeachableLearnset,
        .eggMoveLearnset = sDucklettEggMoveLearnset,
    ),

    [SPECIES_VANILLITE] = HARD_MODE(
        .abilities = { ABILITY_ICE_BODY,  ABILITY_SLUSH_RUSH,  ABILITY_WEAK_ARMOR},
        .levelUpLearnset = sVanilliteLevelUpLearnset,
        .teachableLearnset = sVanilliteTeachableLearnset,
        .eggMoveLearnset = sVanilliteEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_VANILLISH}),
    ),

    [SPECIES_VANILLISH] = HARD_MODE(
        .abilities = { ABILITY_ICE_BODY,  ABILITY_SLUSH_RUSH,  ABILITY_WEAK_ARMOR},
        .levelUpLearnset = sVanillishLevelUpLearnset,
        .teachableLearnset = sVanillishTeachableLearnset,
        .eggMoveLearnset = sVanilliteEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 44, SPECIES_VANILLUXE}),
    ),

    [SPECIES_VANILLUXE] = HARD_MODE(
        .abilities = { ABILITY_ICE_BODY,  ABILITY_SNOW_WARNING,  ABILITY_WEAK_ARMOR},
        .levelUpLearnset = sVanilluxeLevelUpLearnset,
        .teachableLearnset = sVanilluxeTeachableLearnset,
        .eggMoveLearnset = sVanilliteEggMoveLearnset,
    ),

    [SPECIES_DEERLING_SPRING] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_SERENE_GRACE,  ABILITY_SAP_SIPPER},
        .levelUpLearnset = sDeerlingLevelUpLearnset,
        .teachableLearnset = sDeerlingTeachableLearnset,
        .eggMoveLearnset = sDeerlingEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_SAWSBUCK_SPRING}),
    ),

    [SPECIES_DEERLING_SUMMER] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_SERENE_GRACE,  ABILITY_SAP_SIPPER},
        .levelUpLearnset = sDeerlingLevelUpLearnset,
        .teachableLearnset = sDeerlingTeachableLearnset,
        .eggMoveLearnset = sDeerlingEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_SAWSBUCK_SUMMER}),
    ),

    [SPECIES_DEERLING_AUTUMN] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_SERENE_GRACE,  ABILITY_SAP_SIPPER},
        .levelUpLearnset = sDeerlingLevelUpLearnset,
        .teachableLearnset = sDeerlingTeachableLearnset,
        .eggMoveLearnset = sDeerlingEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_SAWSBUCK_AUTUMN}),
    ),

    [SPECIES_DEERLING_WINTER] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_SERENE_GRACE,  ABILITY_SAP_SIPPER},
        .levelUpLearnset = sDeerlingLevelUpLearnset,
        .teachableLearnset = sDeerlingTeachableLearnset,
        .eggMoveLearnset = sDeerlingEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_SAWSBUCK_WINTER}),
    ),

    [SPECIES_SAWSBUCK_SPRING] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_SERENE_GRACE,  ABILITY_SAP_SIPPER},
        .levelUpLearnset = sSawsbuckLevelUpLearnset,
        .teachableLearnset = sSawsbuckTeachableLearnset,
        .eggMoveLearnset = sDeerlingEggMoveLearnset,
    ),

    [SPECIES_SAWSBUCK_SUMMER] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_SERENE_GRACE,  ABILITY_SAP_SIPPER},
        .levelUpLearnset = sSawsbuckLevelUpLearnset,
        .teachableLearnset = sSawsbuckTeachableLearnset,
        .eggMoveLearnset = sDeerlingEggMoveLearnset,
    ),

    [SPECIES_SAWSBUCK_AUTUMN] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_SERENE_GRACE,  ABILITY_SAP_SIPPER},
        .levelUpLearnset = sSawsbuckLevelUpLearnset,
        .teachableLearnset = sSawsbuckTeachableLearnset,
        .eggMoveLearnset = sDeerlingEggMoveLearnset,
    ),

    [SPECIES_SAWSBUCK_WINTER] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_SERENE_GRACE,  ABILITY_SAP_SIPPER},
        .levelUpLearnset = sSawsbuckLevelUpLearnset,
        .teachableLearnset = sSawsbuckTeachableLearnset,
        .eggMoveLearnset = sDeerlingEggMoveLearnset,
    ),

    [SPECIES_EMOLGA] = HARD_MODE(
        .abilities = { ABILITY_MOTOR_DRIVE,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD},
        .levelUpLearnset = sEmolgaLevelUpLearnset,
        .teachableLearnset = sEmolgaTeachableLearnset,
        .eggMoveLearnset = sEmolgaEggMoveLearnset,
    ),

    [SPECIES_KARRABLAST] = HARD_MODE(
        .abilities = { ABILITY_SWARM,  ABILITY_SHED_SKIN,  ABILITY_NO_GUARD},
        .levelUpLearnset = sKarrablastLevelUpLearnset,
        .teachableLearnset = sKarrablastTeachableLearnset,
        .eggMoveLearnset = sKarrablastEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_SPECIFIC_MON, SPECIES_SHELMET, SPECIES_ESCAVALIER}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_ESCAVALIER}),
    ),

    [SPECIES_ESCAVALIER] = HARD_MODE(
        .abilities = { ABILITY_SWARM,  ABILITY_SHELL_ARMOR,  ABILITY_OVERCOAT},
        .levelUpLearnset = sEscavalierLevelUpLearnset,
        .teachableLearnset = sEscavalierTeachableLearnset,
        .eggMoveLearnset = sKarrablastEggMoveLearnset,
    ),

    [SPECIES_FOONGUS] = HARD_MODE(
        .abilities = { ABILITY_EFFECT_SPORE,  ABILITY_NONE,  ABILITY_REGENERATOR},
        .levelUpLearnset = sFoongusLevelUpLearnset,
        .teachableLearnset = sFoongusTeachableLearnset,
        .eggMoveLearnset = sFoongusEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_AMOONGUSS}),
    ),

    [SPECIES_AMOONGUSS] = HARD_MODE(
        .abilities = { ABILITY_EFFECT_SPORE,  ABILITY_NONE,  ABILITY_REGENERATOR},
        .levelUpLearnset = sAmoongussLevelUpLearnset,
        .teachableLearnset = sAmoongussTeachableLearnset,
        .eggMoveLearnset = sFoongusEggMoveLearnset,
    ),

    [SPECIES_FRILLISH] = HARD_MODE(
        .abilities = { ABILITY_WATER_BUBBLE,  ABILITY_DAMP,  ABILITY_WATER_ABSORB},
        .levelUpLearnset = sFrillishLevelUpLearnset,
        .teachableLearnset = sFrillishTeachableLearnset,
        .eggMoveLearnset = sFrillishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_JELLICENT}),
    ),

    [SPECIES_JELLICENT] = HARD_MODE(
        .abilities = { ABILITY_WATER_BUBBLE,  ABILITY_DAMP,  ABILITY_WATER_ABSORB},
        .levelUpLearnset = sJellicentLevelUpLearnset,
        .teachableLearnset = sJellicentTeachableLearnset,
        .eggMoveLearnset = sFrillishEggMoveLearnset,
    ),

    [SPECIES_ALOMOMOLA] = HARD_MODE(
        .abilities = { ABILITY_HYDRATION,  ABILITY_NONE,  ABILITY_REGENERATOR},
        .levelUpLearnset = sAlomomolaLevelUpLearnset,
        .teachableLearnset = sAlomomolaTeachableLearnset,
        .eggMoveLearnset = sAlomomolaEggMoveLearnset,
    ),

    [SPECIES_JOLTIK] = HARD_MODE(
        .abilities = { ABILITY_COMPOUND_EYES,  ABILITY_SWARM,  ABILITY_UNNERVE},
        .levelUpLearnset = sJoltikLevelUpLearnset,
        .teachableLearnset = sJoltikTeachableLearnset,
        .eggMoveLearnset = sJoltikEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_GALVANTULA}),
    ),

    [SPECIES_GALVANTULA] = HARD_MODE(
        .abilities = { ABILITY_COMPOUND_EYES,  ABILITY_SWARM,  ABILITY_UNNERVE},
        .levelUpLearnset = sGalvantulaLevelUpLearnset,
        .teachableLearnset = sGalvantulaTeachableLearnset,
        .eggMoveLearnset = sJoltikEggMoveLearnset,
    ),

    [SPECIES_FERROSEED] = HARD_MODE(
        .abilities = { ABILITY_IRON_BARBS,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sFerroseedLevelUpLearnset,
        .teachableLearnset = sFerroseedTeachableLearnset,
        .eggMoveLearnset = sFerroseedEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_FERROTHORN}),
    ),

    [SPECIES_FERROTHORN] = HARD_MODE(
        .abilities = { ABILITY_IRON_BARBS,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sFerrothornLevelUpLearnset,
        .teachableLearnset = sFerrothornTeachableLearnset,
        .eggMoveLearnset = sFerroseedEggMoveLearnset,
    ),

    [SPECIES_KLINK] = HARD_MODE(
        .abilities = { ABILITY_PLUS,  ABILITY_MINUS,  ABILITY_CLEAR_BODY},
        .levelUpLearnset = sKlinkLevelUpLearnset,
        .teachableLearnset = sKlinkTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_KLANG}),
    ),

    [SPECIES_KLANG] = HARD_MODE(
        .abilities = { ABILITY_PLUS,  ABILITY_MINUS,  ABILITY_CLEAR_BODY},
        .levelUpLearnset = sKlangLevelUpLearnset,
        .teachableLearnset = sKlangTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_KLINKLANG}),
    ),

    [SPECIES_KLINKLANG] = HARD_MODE(
        .abilities = { ABILITY_CLEAR_BODY,  ABILITY_STEELY_SPIRIT,  ABILITY_NONE},
        .levelUpLearnset = sKlinklangLevelUpLearnset,
        .teachableLearnset = sKlinklangTeachableLearnset,
    ),

    [SPECIES_TYNAMO] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sTynamoLevelUpLearnset,
        .teachableLearnset = sTynamoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_EELEKTRIK}),
    ),

    [SPECIES_EELEKTRIK] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sEelektrikLevelUpLearnset,
        .teachableLearnset = sEelektrikTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_EELEKTROSS}),
    ),

    [SPECIES_EELEKTROSS] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_FATAL_PRECISION},
        .levelUpLearnset = sEelektrossLevelUpLearnset,
        .teachableLearnset = sEelektrossTeachableLearnset,
    ),

    [SPECIES_EELEKTROSS_MEGA] = HARD_MODE(
        .abilities = { ABILITY_FATAL_PRECISION, ABILITY_NONE, ABILITY_LEVITATE },
        .levelUpLearnset = sEelektrossLevelUpLearnset,
        .teachableLearnset = sEelektrossTeachableLearnset,
    ),

    [SPECIES_ELGYEM] = HARD_MODE(
        .abilities = { ABILITY_ANALYTIC,  ABILITY_SYNCHRONIZE,  ABILITY_TELEPATHY},
        .levelUpLearnset = sElgyemLevelUpLearnset,
        .teachableLearnset = sElgyemTeachableLearnset,
        .eggMoveLearnset = sElgyemEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_BEHEEYEM}),
    ),

    [SPECIES_BEHEEYEM] = HARD_MODE(
        .abilities = { ABILITY_ANALYTIC,  ABILITY_SYNCHRONIZE,  ABILITY_NONE},
        .levelUpLearnset = sBeheeyemLevelUpLearnset,
        .teachableLearnset = sBeheeyemTeachableLearnset,
        .eggMoveLearnset = sElgyemEggMoveLearnset,
    ),

    [SPECIES_LITWICK] = HARD_MODE(
        .abilities = { ABILITY_SHADOW_TAG,  ABILITY_FLAME_BODY,  ABILITY_FLASH_FIRE},
        .levelUpLearnset = sLitwickLevelUpLearnset,
        .teachableLearnset = sLitwickTeachableLearnset,
        .eggMoveLearnset = sLitwickEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_LAMPENT}),
    ),

    [SPECIES_LAMPENT] = HARD_MODE(
        .abilities = { ABILITY_SHADOW_TAG,  ABILITY_FLAME_BODY,  ABILITY_FLASH_FIRE},
        .levelUpLearnset = sLampentLevelUpLearnset,
        .teachableLearnset = sLampentTeachableLearnset,
        .eggMoveLearnset = sLitwickEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_CHANDELURE}),
    ),

    [SPECIES_CHANDELURE] = HARD_MODE(
        .abilities = { ABILITY_SHADOW_TAG,  ABILITY_FLAME_BODY,  ABILITY_FLASH_FIRE},
        .levelUpLearnset = sChandelureLevelUpLearnset,
        .teachableLearnset = sChandelureTeachableLearnset,
        .eggMoveLearnset = sLitwickEggMoveLearnset,
    ),

    [SPECIES_CHANDELURE_MEGA] = HARD_MODE(
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG },
        .levelUpLearnset = sChandelureLevelUpLearnset,
        .teachableLearnset = sChandelureTeachableLearnset,
    ),

    [SPECIES_AXEW] = HARD_MODE(
        .abilities = { ABILITY_UNNERVE,  ABILITY_MOLD_BREAKER,  ABILITY_RIVALRY},
        .levelUpLearnset = sAxewLevelUpLearnset,
        .teachableLearnset = sAxewTeachableLearnset,
        .eggMoveLearnset = sAxewEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_FRAXURE}),
    ),

    [SPECIES_FRAXURE] = HARD_MODE(
        .abilities = { ABILITY_UNNERVE,  ABILITY_MOLD_BREAKER,  ABILITY_RIVALRY},
        .levelUpLearnset = sFraxureLevelUpLearnset,
        .teachableLearnset = sFraxureTeachableLearnset,
        .eggMoveLearnset = sAxewEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 44, SPECIES_HAXORUS}),
    ),

    [SPECIES_HAXORUS] = HARD_MODE(
        .abilities = { ABILITY_UNNERVE,  ABILITY_MOLD_BREAKER,  ABILITY_RIVALRY},
        .levelUpLearnset = sHaxorusLevelUpLearnset,
        .teachableLearnset = sHaxorusTeachableLearnset,
        .eggMoveLearnset = sAxewEggMoveLearnset,
    ),

    [SPECIES_CUBCHOO] = HARD_MODE(
        .abilities = { ABILITY_SLUSH_RUSH,  ABILITY_SWIFT_SWIM,  ABILITY_NONE},
        .levelUpLearnset = sCubchooLevelUpLearnset,
        .teachableLearnset = sCubchooTeachableLearnset,
        .eggMoveLearnset = sCubchooEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_BEARTIC}),
    ),

    [SPECIES_BEARTIC] = HARD_MODE(
        .abilities = { ABILITY_SLUSH_RUSH,  ABILITY_SWIFT_SWIM,  ABILITY_NONE},
        .levelUpLearnset = sBearticLevelUpLearnset,
        .teachableLearnset = sBearticTeachableLearnset,
        .eggMoveLearnset = sCubchooEggMoveLearnset,
    ),

    [SPECIES_CRYOGONAL] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sCryogonalLevelUpLearnset,
        .teachableLearnset = sCryogonalTeachableLearnset,
    ),

    [SPECIES_SHELMET] = HARD_MODE(
        .abilities = { ABILITY_HYDRATION,  ABILITY_SHELL_ARMOR,  ABILITY_OVERCOAT},
        .levelUpLearnset = sShelmetLevelUpLearnset,
        .teachableLearnset = sShelmetTeachableLearnset,
        .eggMoveLearnset = sShelmetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_SPECIFIC_MON, SPECIES_KARRABLAST, SPECIES_ACCELGOR}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_ACCELGOR}),
    ),

    [SPECIES_ACCELGOR] = HARD_MODE(
        .abilities = { ABILITY_SHEER_FORCE,  ABILITY_SHEER_FORCE,  ABILITY_UNBURDEN},
        .levelUpLearnset = sAccelgorLevelUpLearnset,
        .teachableLearnset = sAccelgorTeachableLearnset,
        .eggMoveLearnset = sShelmetEggMoveLearnset,
    ),

    [SPECIES_STUNFISK] = HARD_MODE(
        .abilities = { ABILITY_STATIC,  ABILITY_MIMICRY,  ABILITY_WATER_ABSORB},
        .levelUpLearnset = sStunfiskLevelUpLearnset,
        .teachableLearnset = sStunfiskTeachableLearnset,
        .eggMoveLearnset = sStunfiskEggMoveLearnset,
    ),

    [SPECIES_STUNFISK_GALAR] = HARD_MODE(
        .abilities = { ABILITY_MIMICRY,  ABILITY_IRON_BARBS,  ABILITY_FILTER},
        .levelUpLearnset = sStunfiskGalarLevelUpLearnset,
        .teachableLearnset = sStunfiskGalarTeachableLearnset,
        .eggMoveLearnset = sStunfiskGalarEggMoveLearnset,
    ),

    [SPECIES_MIENFOO] = HARD_MODE(
        .abilities = { ABILITY_INNER_FOCUS,  ABILITY_REGENERATOR,  ABILITY_RECKLESS},
        .levelUpLearnset = sMienfooLevelUpLearnset,
        .teachableLearnset = sMienfooTeachableLearnset,
        .eggMoveLearnset = sMienfooEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_MIENSHAO}),
    ),

    [SPECIES_MIENSHAO] = HARD_MODE(
        .abilities = { ABILITY_INNER_FOCUS,  ABILITY_REGENERATOR,  ABILITY_RECKLESS},
        .levelUpLearnset = sMienshaoLevelUpLearnset,
        .teachableLearnset = sMienshaoTeachableLearnset,
        .eggMoveLearnset = sMienfooEggMoveLearnset,
    ),

    [SPECIES_DRUDDIGON] = HARD_MODE(
        .abilities = { ABILITY_ROUGH_SKIN,  ABILITY_SHEER_FORCE,  ABILITY_MOLD_BREAKER},
        .levelUpLearnset = sDruddigonLevelUpLearnset,
        .teachableLearnset = sDruddigonTeachableLearnset,
        .eggMoveLearnset = sDruddigonEggMoveLearnset,
    ),

    [SPECIES_GOLETT] = HARD_MODE(
        .abilities = { ABILITY_IRON_FIST,  ABILITY_NO_GUARD,  ABILITY_NONE},
        .levelUpLearnset = sGolettLevelUpLearnset,
        .teachableLearnset = sGolettTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_GOLURK}),
    ),

    [SPECIES_GOLURK] = HARD_MODE(
        .abilities = { ABILITY_IRON_FIST,  ABILITY_NO_GUARD,  ABILITY_NONE},
        .levelUpLearnset = sGolurkLevelUpLearnset,
        .teachableLearnset = sGolurkTeachableLearnset,
    ),

    [SPECIES_GOLURK_MEGA] = HARD_MODE(
        .abilities = { ABILITY_IRON_FIST, ABILITY_KLUTZ, ABILITY_NO_GUARD },
        .levelUpLearnset = sGolurkLevelUpLearnset,
        .teachableLearnset = sGolurkTeachableLearnset,
    ),

    [SPECIES_PAWNIARD] = HARD_MODE(
        .abilities = { ABILITY_INNER_FOCUS,  ABILITY_INNER_FOCUS,  ABILITY_DEFIANT},
        .levelUpLearnset = sPawniardLevelUpLearnset,
        .teachableLearnset = sPawniardTeachableLearnset,
        .eggMoveLearnset = sPawniardEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_BISHARP}),
    ),

    [SPECIES_BISHARP] = HARD_MODE(
        .abilities = { ABILITY_INNER_FOCUS,  ABILITY_INNER_FOCUS,  ABILITY_DEFIANT},
        .levelUpLearnset = sBisharpLevelUpLearnset,
        .teachableLearnset = sBisharpTeachableLearnset,
        .eggMoveLearnset = sPawniardEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MAPSEC, MAPSEC_MT_PYRE, SPECIES_KINGAMBIT}),
    ),

    [SPECIES_KINGAMBIT] = HARD_MODE(
        .abilities = { ABILITY_SUPREME_OVERLORD,  ABILITY_SUPREME_OVERLORD,  ABILITY_DEFIANT},
        .levelUpLearnset = sKingambitLevelUpLearnset,
        .teachableLearnset = sKingambitTeachableLearnset,
        .eggMoveLearnset = sPawniardEggMoveLearnset,
    ),

    [SPECIES_BOUFFALANT] = HARD_MODE(
        .abilities = { ABILITY_BULL_RUSH,  ABILITY_BULL_RUSH,  ABILITY_SAP_SIPPER},
        .levelUpLearnset = sBouffalantLevelUpLearnset,
        .teachableLearnset = sBouffalantTeachableLearnset,
        .eggMoveLearnset = sBouffalantEggMoveLearnset,
    ),

    [SPECIES_RUFFLET] = HARD_MODE(
        .abilities = { ABILITY_SHEER_FORCE,  ABILITY_SHEER_FORCE,  ABILITY_HUSTLE},
        .levelUpLearnset = sRuffletLevelUpLearnset,
        .teachableLearnset = sRuffletTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_DAY, 34, SPECIES_BRAVIARY}, {EVO_LEVEL_NIGHT, 36, SPECIES_BRAVIARY_HISUI}),
    ),

    [SPECIES_BRAVIARY] = HARD_MODE(
        .abilities = { ABILITY_SHEER_FORCE,  ABILITY_SHEER_FORCE,  ABILITY_DEFIANT},
        .levelUpLearnset = sBraviaryLevelUpLearnset,
        .teachableLearnset = sBraviaryTeachableLearnset,
    ),

    [SPECIES_BRAVIARY_HISUI] = HARD_MODE(
        .abilities = { ABILITY_SHEER_FORCE,  ABILITY_SHEER_FORCE,  ABILITY_TINTED_LENS},
        .levelUpLearnset = sBraviaryHisuiLevelUpLearnset,
        .teachableLearnset = sBraviaryHisuiTeachableLearnset,
    ),

    [SPECIES_VULLABY] = HARD_MODE(
        .abilities = { ABILITY_CLEAR_BODY,  ABILITY_OVERCOAT,  ABILITY_WEAK_ARMOR},
        .levelUpLearnset = sVullabyLevelUpLearnset,
        .teachableLearnset = sVullabyTeachableLearnset,
        .eggMoveLearnset = sVullabyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_MANDIBUZZ}),
    ),

    [SPECIES_MANDIBUZZ] = HARD_MODE(
        .abilities = { ABILITY_CLEAR_BODY,  ABILITY_OVERCOAT,  ABILITY_WEAK_ARMOR},
        .levelUpLearnset = sMandibuzzLevelUpLearnset,
        .teachableLearnset = sMandibuzzTeachableLearnset,
        .eggMoveLearnset = sVullabyEggMoveLearnset,
    ),

    [SPECIES_HEATMOR] = HARD_MODE(
        .abilities = { ABILITY_FATAL_PRECISION,  ABILITY_FATAL_PRECISION,  ABILITY_FLASH_FIRE},
        .levelUpLearnset = sHeatmorLevelUpLearnset,
        .teachableLearnset = sHeatmorTeachableLearnset,
        .eggMoveLearnset = sHeatmorEggMoveLearnset,
    ),

    [SPECIES_DURANT] = HARD_MODE(
        .abilities = { ABILITY_SWARM,  ABILITY_SWARM,  ABILITY_TRUANT},
        .levelUpLearnset = sDurantLevelUpLearnset,
        .teachableLearnset = sDurantTeachableLearnset,
        .eggMoveLearnset = sDurantEggMoveLearnset,
    ),

    [SPECIES_DEINO] = HARD_MODE(
        .abilities = { ABILITY_HUSTLE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sDeinoLevelUpLearnset,
        .teachableLearnset = sDeinoTeachableLearnset,
        .eggMoveLearnset = sDeinoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_ZWEILOUS}),
    ),

    [SPECIES_ZWEILOUS] = HARD_MODE(
        .abilities = { ABILITY_HUSTLE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sZweilousLevelUpLearnset,
        .teachableLearnset = sZweilousTeachableLearnset,
        .eggMoveLearnset = sDeinoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 61, SPECIES_HYDREIGON}),
    ),

    [SPECIES_HYDREIGON] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sHydreigonLevelUpLearnset,
        .teachableLearnset = sHydreigonTeachableLearnset,
        .eggMoveLearnset = sDeinoEggMoveLearnset,
    ),

    [SPECIES_LARVESTA] = HARD_MODE(
        .abilities = { ABILITY_FLAME_BODY,  ABILITY_SWARM,  ABILITY_NONE},
        .levelUpLearnset = sLarvestaLevelUpLearnset,
        .teachableLearnset = sLarvestaTeachableLearnset,
        .eggMoveLearnset = sLarvestaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 59, SPECIES_VOLCARONA}),
    ),

    [SPECIES_VOLCARONA] = HARD_MODE(
        .abilities = { ABILITY_FLAME_BODY,  ABILITY_SWARM,  ABILITY_NONE},
        .levelUpLearnset = sVolcaronaLevelUpLearnset,
        .teachableLearnset = sVolcaronaTeachableLearnset,
        .eggMoveLearnset = sLarvestaEggMoveLearnset,
    ),

    [SPECIES_COBALION] = HARD_MODE(
        .abilities = { ABILITY_JUSTIFIED,  ABILITY_SHARPNESS,  ABILITY_NONE},
        .levelUpLearnset = sCobalionLevelUpLearnset,
        .teachableLearnset = sCobalionTeachableLearnset,
    ),

    [SPECIES_TERRAKION] = HARD_MODE(
        .abilities = { ABILITY_JUSTIFIED,  ABILITY_SHARPNESS,  ABILITY_NONE},
        .levelUpLearnset = sTerrakionLevelUpLearnset,
        .teachableLearnset = sTerrakionTeachableLearnset,
    ),

    [SPECIES_VIRIZION] = HARD_MODE(
        .abilities = { ABILITY_JUSTIFIED,  ABILITY_SHARPNESS,  ABILITY_NONE},
        .levelUpLearnset = sVirizionLevelUpLearnset,
        .teachableLearnset = sVirizionTeachableLearnset,
    ),

    [SPECIES_TORNADUS_INCARNATE] = HARD_MODE(
        .abilities = { ABILITY_PRANKSTER,  ABILITY_NONE,  ABILITY_DEFIANT},
        .levelUpLearnset = sTornadusLevelUpLearnset,
        .teachableLearnset = sTornadusTeachableLearnset,
    ),

    [SPECIES_TORNADUS_THERIAN] = HARD_MODE(
        .abilities = { ABILITY_REGENERATOR,  ABILITY_NONE,  ABILITY_REGENERATOR},
        .levelUpLearnset = sTornadusLevelUpLearnset,
        .teachableLearnset = sTornadusTeachableLearnset,
    ),

    [SPECIES_THUNDURUS_INCARNATE] = HARD_MODE(
        .abilities = { ABILITY_PRANKSTER,  ABILITY_NONE,  ABILITY_DEFIANT},
        .levelUpLearnset = sThundurusLevelUpLearnset,
        .teachableLearnset = sThundurusTeachableLearnset,
    ),

    [SPECIES_THUNDURUS_THERIAN] = HARD_MODE(
        .abilities = { ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_VOLT_ABSORB},
        .levelUpLearnset = sThundurusLevelUpLearnset,
        .teachableLearnset = sThundurusTeachableLearnset,
    ),

    [SPECIES_LANDORUS_INCARNATE] = HARD_MODE(
        .abilities = { ABILITY_SHEER_FORCE,  ABILITY_NONE,  ABILITY_SAND_FORCE},
        .levelUpLearnset = sLandorusLevelUpLearnset,
        .teachableLearnset = sLandorusTeachableLearnset,
    ),

    [SPECIES_LANDORUS_THERIAN] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_NONE,  ABILITY_INTIMIDATE},
        .levelUpLearnset = sLandorusLevelUpLearnset,
        .teachableLearnset = sLandorusTeachableLearnset,
    ),

    [SPECIES_KELDEO_ORDINARY] = HARD_MODE(
        .abilities = { ABILITY_JUSTIFIED,  ABILITY_SHARPNESS,  ABILITY_NONE},
        .levelUpLearnset = sKeldeoLevelUpLearnset,
        .teachableLearnset = sKeldeoTeachableLearnset,
    ),

    [SPECIES_KELDEO_RESOLUTE] = HARD_MODE(
        .abilities = { ABILITY_JUSTIFIED,  ABILITY_SHARPNESS,  ABILITY_NONE},
        .levelUpLearnset = sKeldeoLevelUpLearnset,
        .teachableLearnset = sKeldeoTeachableLearnset,
    ),

    [SPECIES_MELOETTA_ARIA] = HARD_MODE(
        .abilities = { ABILITY_SERENE_GRACE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sMeloettaLevelUpLearnset,
        .teachableLearnset = sMeloettaTeachableLearnset,
    ),

    [SPECIES_MELOETTA_PIROUETTE] = HARD_MODE(
        .abilities = { ABILITY_SERENE_GRACE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sMeloettaLevelUpLearnset,
        .teachableLearnset = sMeloettaTeachableLearnset,
    ),