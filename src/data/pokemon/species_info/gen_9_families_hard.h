[SPECIES_SPRIGATITO] = HARD_MODE(
        .abilities = { ABILITY_OVERGROW,  ABILITY_PROTEAN,  ABILITY_NONE },
        .levelUpLearnset = sSprigatitoLevelUpLearnset,
        .teachableLearnset = sSprigatitoTeachableLearnset,
        .eggMoveLearnset = sSprigatitoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FLORAGATO}),
    ),

    [SPECIES_FLORAGATO] = HARD_MODE(
        .abilities = { ABILITY_OVERGROW,  ABILITY_PROTEAN,  ABILITY_NONE },
        .levelUpLearnset = sFloragatoLevelUpLearnset,
        .teachableLearnset = sFloragatoTeachableLearnset,
        .eggMoveLearnset = sSprigatitoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_MEOWSCARADA}),
    ),

    [SPECIES_MEOWSCARADA] = HARD_MODE(
        .abilities = { ABILITY_OVERGROW,  ABILITY_PROTEAN,  ABILITY_NONE },
        .levelUpLearnset = sMeowscaradaLevelUpLearnset,
        .teachableLearnset = sMeowscaradaTeachableLearnset,
        .eggMoveLearnset = sSprigatitoEggMoveLearnset,
    ),

    [SPECIES_FUECOCO] = HARD_MODE(
        .abilities = { ABILITY_BLAZE,  ABILITY_UNAWARE,  ABILITY_NONE },
        .levelUpLearnset = sFuecocoLevelUpLearnset,
        .teachableLearnset = sFuecocoTeachableLearnset,
        .eggMoveLearnset = sFuecocoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_CROCALOR}),
    ),

    [SPECIES_CROCALOR] = HARD_MODE(
        .abilities = { ABILITY_BLAZE,  ABILITY_UNAWARE,  ABILITY_NONE },
        .levelUpLearnset = sCrocalorLevelUpLearnset,
        .teachableLearnset = sCrocalorTeachableLearnset,
        .eggMoveLearnset = sFuecocoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SKELEDIRGE}),
    ),

    [SPECIES_SKELEDIRGE] = HARD_MODE(
        .abilities = { ABILITY_BLAZE,  ABILITY_UNAWARE,  ABILITY_NONE },
        .levelUpLearnset = sSkeledirgeLevelUpLearnset,
        .teachableLearnset = sSkeledirgeTeachableLearnset,
        .eggMoveLearnset = sFuecocoEggMoveLearnset,
    ),

    [SPECIES_QUAXLY] = HARD_MODE(
        .abilities = { ABILITY_TORRENT,  ABILITY_NONE,  ABILITY_MOXIE },
        .levelUpLearnset = sQuaxlyLevelUpLearnset,
        .teachableLearnset = sQuaxlyTeachableLearnset,
        .eggMoveLearnset = sQuaxlyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_QUAXWELL}),
    ),

    [SPECIES_QUAXWELL] = HARD_MODE(
        .abilities = { ABILITY_TORRENT,  ABILITY_NONE,  ABILITY_MOXIE },
        .levelUpLearnset = sQuaxwellLevelUpLearnset,
        .teachableLearnset = sQuaxwellTeachableLearnset,
        .eggMoveLearnset = sQuaxlyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_QUAQUAVAL}),
    ),

    [SPECIES_QUAQUAVAL] = HARD_MODE(
        .abilities = { ABILITY_TORRENT,  ABILITY_NONE,  ABILITY_MOXIE },
        .levelUpLearnset = sQuaquavalLevelUpLearnset,
        .teachableLearnset = sQuaquavalTeachableLearnset,
        .eggMoveLearnset = sQuaxlyEggMoveLearnset,
    ),

    [SPECIES_LECHONK] = HARD_MODE(
        .abilities = { ABILITY_AROMA_VEIL,  ABILITY_THICK_FAT,  ABILITY_GLUTTONY },
        .levelUpLearnset = sLechonkLevelUpLearnset,
        .teachableLearnset = sLechonkTeachableLearnset,
        .eggMoveLearnset = sLechonkEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_MALE, 16, SPECIES_OINKOLOGNE_M}, {EVO_LEVEL_FEMALE, 16, SPECIES_OINKOLOGNE_F}),
    ),

    [SPECIES_OINKOLOGNE_M] = HARD_MODE(
        .abilities = { ABILITY_LINGERING_AROMA,  ABILITY_GLUTTONY,  ABILITY_THICK_FAT },
        .levelUpLearnset = sOinkologneMLevelUpLearnset,
        .teachableLearnset = sOinkologneTeachableLearnset,
        .eggMoveLearnset = sLechonkEggMoveLearnset,
    ),

    [SPECIES_OINKOLOGNE_F] = HARD_MODE(
        .abilities = { ABILITY_AROMA_VEIL,  ABILITY_THICK_FAT,  ABILITY_GLUTTONY },
        .levelUpLearnset = sOinkologneFLevelUpLearnset,
        .teachableLearnset = sOinkologneTeachableLearnset,
        .eggMoveLearnset = sLechonkEggMoveLearnset,
    ),

    [SPECIES_TAROUNTULA] = HARD_MODE(
        .abilities = { ABILITY_STAKEOUT,  ABILITY_NONE,  ABILITY_INSOMNIA },
        .levelUpLearnset = sTarountulaLevelUpLearnset,
        .teachableLearnset = sTarountulaTeachableLearnset,
        .eggMoveLearnset = sTarountulaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_SPIDOPS}),
    ),

    [SPECIES_SPIDOPS] = HARD_MODE(
        .abilities = { ABILITY_STAKEOUT,  ABILITY_NONE,  ABILITY_INSOMNIA },
        .levelUpLearnset = sSpidopsLevelUpLearnset,
        .teachableLearnset = sSpidopsTeachableLearnset,
        .eggMoveLearnset = sTarountulaEggMoveLearnset,
    ),

    [SPECIES_NYMBLE] = HARD_MODE(
        .abilities = { ABILITY_SWARM,  ABILITY_NONE,  ABILITY_TINTED_LENS },
        .levelUpLearnset = sNymbleLevelUpLearnset,
        .teachableLearnset = sNymbleTeachableLearnset,
        .eggMoveLearnset = sNymbleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_LOKIX}),
    ),

    [SPECIES_LOKIX] = HARD_MODE(
        .abilities = { ABILITY_SWARM,  ABILITY_NONE,  ABILITY_TINTED_LENS },
        .levelUpLearnset = sLokixLevelUpLearnset,
        .teachableLearnset = sLokixTeachableLearnset,
        .eggMoveLearnset = sNymbleEggMoveLearnset,
    ),

    [SPECIES_PAWMI] = HARD_MODE(
        .abilities = { ABILITY_IRON_FIST,  ABILITY_IRON_FIST,  ABILITY_STATIC },
        .levelUpLearnset = sPawmiLevelUpLearnset,
        .teachableLearnset = sPawmiTeachableLearnset,
        .eggMoveLearnset = sPawmiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_PAWMO}),
    ),

    [SPECIES_PAWMO] = HARD_MODE(
        .abilities = { ABILITY_IRON_FIST,  ABILITY_IRON_FIST,  ABILITY_VOLT_ABSORB },
        .levelUpLearnset = sPawmoLevelUpLearnset,
        .teachableLearnset = sPawmoTeachableLearnset,
        .eggMoveLearnset = sPawmiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_PAWMOT}),
    ),

    [SPECIES_PAWMOT] = HARD_MODE(
        .abilities = { ABILITY_IRON_FIST,  ABILITY_IRON_FIST,  ABILITY_VOLT_ABSORB },
        .levelUpLearnset = sPawmotLevelUpLearnset,
        .teachableLearnset = sPawmotTeachableLearnset,
        .eggMoveLearnset = sPawmiEggMoveLearnset,
    ),

    [SPECIES_TANDEMAUS] = HARD_MODE(
        .abilities = { ABILITY_RUN_AWAY,  ABILITY_PICKUP,  ABILITY_OWN_TEMPO },
        .levelUpLearnset = sTandemausLevelUpLearnset,
        .teachableLearnset = sTandemausTeachableLearnset,
        .eggMoveLearnset = sTandemausEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_FAMILY_OF_FOUR, 25, SPECIES_MAUSHOLD_FOUR}, {EVO_LEVEL_FAMILY_OF_THREE, 25, SPECIES_MAUSHOLD_THREE}),
    ),

    [SPECIES_MAUSHOLD_THREE] = HARD_MODE(
        .abilities = { ABILITY_FRIEND_GUARD,  ABILITY_TECHNICIAN,  ABILITY_CHEEK_POUCH },
        .levelUpLearnset = sMausholdLevelUpLearnset,
        .teachableLearnset = sMausholdTeachableLearnset,
        .eggMoveLearnset = sTandemausEggMoveLearnset,
    ),

    [SPECIES_MAUSHOLD_FOUR] = HARD_MODE(
        .abilities = { ABILITY_FRIEND_GUARD,  ABILITY_TECHNICIAN,  ABILITY_CHEEK_POUCH },
        .levelUpLearnset = sMausholdLevelUpLearnset,
        .teachableLearnset = sMausholdTeachableLearnset,
        .eggMoveLearnset = sTandemausEggMoveLearnset,
    ),

    [SPECIES_FIDOUGH] = HARD_MODE(
        .abilities = { ABILITY_OWN_TEMPO,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sFidoughLevelUpLearnset,
        .teachableLearnset = sFidoughTeachableLearnset,
        .eggMoveLearnset = sFidoughEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_DACHSBUN}),
    ),

    [SPECIES_DACHSBUN] = HARD_MODE(
        .abilities = { ABILITY_WELL_BAKED_BODY,  ABILITY_NONE,  ABILITY_AROMA_VEIL },
        .levelUpLearnset = sDachsbunLevelUpLearnset,
        .teachableLearnset = sDachsbunTeachableLearnset,
        .eggMoveLearnset = sFidoughEggMoveLearnset,
    ),

    [SPECIES_SMOLIV] = HARD_MODE(
        .abilities = { ABILITY_HARVEST,  ABILITY_NONE, ABILITY_EARLY_BIRD },
        .levelUpLearnset = sSmolivLevelUpLearnset,
        .teachableLearnset = sSmolivTeachableLearnset,
        .eggMoveLearnset = sSmolivEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_DOLLIV}),
    ),

    [SPECIES_DOLLIV] = HARD_MODE(
        .abilities = { ABILITY_HARVEST,  ABILITY_NONE, ABILITY_EARLY_BIRD },
        .levelUpLearnset = sDollivLevelUpLearnset,
        .teachableLearnset = sDollivTeachableLearnset,
        .eggMoveLearnset = sSmolivEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_ARBOLIVA}),
    ),

    [SPECIES_ARBOLIVA] = HARD_MODE(
        .abilities = { ABILITY_HARVEST,  ABILITY_NONE, ABILITY_SEED_SOWER },
        .levelUpLearnset = sArbolivaLevelUpLearnset,
        .teachableLearnset = sArbolivaTeachableLearnset,
        .eggMoveLearnset = sSmolivEggMoveLearnset,
    ),

    [SPECIES_SQUAWKABILLY_GREEN] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_GUTS,  ABILITY_HUSTLE },
        .levelUpLearnset = sSquawkabillyLevelUpLearnset,
        .teachableLearnset = sSquawkabillyTeachableLearnset,
        .eggMoveLearnset = sSquawkabillyEggMoveLearnset,
    ),

    [SPECIES_SQUAWKABILLY_BLUE] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_GUTS,  ABILITY_HUSTLE },
        .levelUpLearnset = sSquawkabillyLevelUpLearnset,
        .teachableLearnset = sSquawkabillyTeachableLearnset,
        .eggMoveLearnset = sSquawkabillyEggMoveLearnset,
    ),

    [SPECIES_SQUAWKABILLY_YELLOW] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_SHEER_FORCE,  ABILITY_HUSTLE },
        .levelUpLearnset = sSquawkabillyLevelUpLearnset,
        .teachableLearnset = sSquawkabillyTeachableLearnset,
        .eggMoveLearnset = sSquawkabillyEggMoveLearnset,
    ),

    [SPECIES_SQUAWKABILLY_WHITE] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_SHEER_FORCE,  ABILITY_HUSTLE },
        .levelUpLearnset = sSquawkabillyLevelUpLearnset,
        .teachableLearnset = sSquawkabillyTeachableLearnset,
        .eggMoveLearnset = sSquawkabillyEggMoveLearnset,
    ),

    [SPECIES_NACLI] = HARD_MODE(
        .abilities = { ABILITY_PURIFYING_SALT,  ABILITY_CLEAR_BODY,  ABILITY_STURDY },
        .levelUpLearnset = sNacliLevelUpLearnset,
        .teachableLearnset = sNacliTeachableLearnset,
        .eggMoveLearnset = sNacliEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_NACLSTACK}),
    ),

    [SPECIES_NACLSTACK] = HARD_MODE(
        .abilities = { ABILITY_PURIFYING_SALT,  ABILITY_CLEAR_BODY,  ABILITY_STURDY },
        .levelUpLearnset = sNaclstackLevelUpLearnset,
        .teachableLearnset = sNaclstackTeachableLearnset,
        .eggMoveLearnset = sNacliEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_GARGANACL}),
    ),

    [SPECIES_GARGANACL] = HARD_MODE(
        .abilities = { ABILITY_PURIFYING_SALT,  ABILITY_CLEAR_BODY,  ABILITY_STURDY },
        .levelUpLearnset = sGarganaclLevelUpLearnset,
        .teachableLearnset = sGarganaclTeachableLearnset,
        .eggMoveLearnset = sNacliEggMoveLearnset,
    ),

    [SPECIES_CHARCADET] = HARD_MODE(
        .abilities = { ABILITY_FLAME_BODY,  ABILITY_WEAK_ARMOR,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sCharcadetLevelUpLearnset,
        .teachableLearnset = sCharcadetTeachableLearnset,
        .eggMoveLearnset = sCharcadetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MAPSEC, MAPSEC_FIERY_PATH, SPECIES_ARMAROUGE}, {EVO_MAPSEC, MAPSEC_MIRAGE_TOWER, SPECIES_CERULEDGE}),
    ),

    [SPECIES_ARMAROUGE] = HARD_MODE(
        .abilities = { ABILITY_MEGA_LAUNCHER,  ABILITY_MEGA_LAUNCHER,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sArmarougeLevelUpLearnset,
        .teachableLearnset = sArmarougeTeachableLearnset,
        .eggMoveLearnset = sCharcadetEggMoveLearnset,
    ),

    [SPECIES_CERULEDGE] = HARD_MODE(
        .abilities = { ABILITY_SHARPNESS,  ABILITY_SHARPNESS,  ABILITY_WEAK_ARMOR },
        .levelUpLearnset = sCeruledgeLevelUpLearnset,
        .teachableLearnset = sCeruledgeTeachableLearnset,
        .eggMoveLearnset = sCharcadetEggMoveLearnset,
    ),

    [SPECIES_TADBULB] = HARD_MODE(
        .abilities = { ABILITY_OWN_TEMPO,  ABILITY_DAMP,  ABILITY_STATIC },
        .levelUpLearnset = sTadbulbLevelUpLearnset,
        .teachableLearnset = sTadbulbTeachableLearnset,
        .eggMoveLearnset = sTadbulbEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_BELLIBOLT}),
    ),

    [SPECIES_BELLIBOLT] = HARD_MODE(
        .abilities = { ABILITY_ELECTROMORPHOSIS,  ABILITY_DAMP,  ABILITY_STATIC },
        .levelUpLearnset = sBelliboltLevelUpLearnset,
        .teachableLearnset = sBelliboltTeachableLearnset,
        .eggMoveLearnset = sTadbulbEggMoveLearnset,
    ),

    [SPECIES_WATTREL] = HARD_MODE(
        .abilities = { ABILITY_STATIC,  ABILITY_STATIC,  ABILITY_VOLT_ABSORB },
        .levelUpLearnset = sWattrelLevelUpLearnset,
        .teachableLearnset = sWattrelTeachableLearnset,
        .eggMoveLearnset = sWattrelEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_KILOWATTREL}),
    ),

    [SPECIES_KILOWATTREL] = HARD_MODE(
        .abilities = { ABILITY_STATIC,  ABILITY_STATIC,  ABILITY_VOLT_ABSORB },
        .levelUpLearnset = sKilowattrelLevelUpLearnset,
        .teachableLearnset = sKilowattrelTeachableLearnset,
        .eggMoveLearnset = sWattrelEggMoveLearnset,
    ),

    [SPECIES_MASCHIFF] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_INTIMIDATE,  ABILITY_STAKEOUT },
        .levelUpLearnset = sMaschiffLevelUpLearnset,
        .teachableLearnset = sMaschiffTeachableLearnset,
        .eggMoveLearnset = sMaschiffEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_MABOSSTIFF}),
    ),

    [SPECIES_MABOSSTIFF] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_INTIMIDATE,  ABILITY_STAKEOUT },
        .levelUpLearnset = sMabosstiffLevelUpLearnset,
        .teachableLearnset = sMabosstiffTeachableLearnset,
        .eggMoveLearnset = sMaschiffEggMoveLearnset,
    ),

    [SPECIES_SHROODLE] = HARD_MODE(
        .abilities = { ABILITY_UNBURDEN,  ABILITY_PRANKSTER,  ABILITY_POISON_TOUCH },
        .levelUpLearnset = sShroodleLevelUpLearnset,
        .teachableLearnset = sShroodleTeachableLearnset,
        .eggMoveLearnset = sShroodleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_GRAFAIAI}),
    ),

    [SPECIES_GRAFAIAI] = HARD_MODE(
        .abilities = { ABILITY_UNBURDEN,  ABILITY_PRANKSTER,  ABILITY_POISON_TOUCH },
        .levelUpLearnset = sGrafaiaiLevelUpLearnset,
        .teachableLearnset = sGrafaiaiTeachableLearnset,
        .eggMoveLearnset = sShroodleEggMoveLearnset,
    ),

    [SPECIES_BRAMBLIN] = HARD_MODE(
        .abilities = { ABILITY_WIND_RIDER,  ABILITY_NONE,  ABILITY_INFILTRATOR },
        .levelUpLearnset = sBramblinLevelUpLearnset,
        .teachableLearnset = sBramblinTeachableLearnset,
        .eggMoveLearnset = sBramblinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_BRAMBLEGHAST}),
    ),

    [SPECIES_BRAMBLEGHAST] = HARD_MODE(
        .abilities = { ABILITY_WIND_RIDER,  ABILITY_NONE,  ABILITY_INFILTRATOR },
        .levelUpLearnset = sBrambleghastLevelUpLearnset,
        .teachableLearnset = sBrambleghastTeachableLearnset,
        .eggMoveLearnset = sBramblinEggMoveLearnset,
    ),

    [SPECIES_TOEDSCOOL] = HARD_MODE(
        .abilities = { ABILITY_CLEAR_BODY,  ABILITY_MOLD_BREAKER,  ABILITY_NONE },
        .levelUpLearnset = sToedscoolLevelUpLearnset,
        .teachableLearnset = sToedscoolTeachableLearnset,
        .eggMoveLearnset = sToedscoolEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_TOEDSCRUEL}),
    ),

    [SPECIES_TOEDSCRUEL] = HARD_MODE(
        .abilities = { ABILITY_CLEAR_BODY,  ABILITY_MOLD_BREAKER,  ABILITY_NONE },
        .levelUpLearnset = sToedscruelLevelUpLearnset,
        .teachableLearnset = sToedscruelTeachableLearnset,
        .eggMoveLearnset = sToedscoolEggMoveLearnset,
    ),

    [SPECIES_KLAWF] = HARD_MODE(
        .abilities = { ABILITY_ANGER_SHELL,  ABILITY_SHELL_ARMOR,  ABILITY_REGENERATOR },
        .levelUpLearnset = sKlawfLevelUpLearnset,
        .teachableLearnset = sKlawfTeachableLearnset,
        .eggMoveLearnset = sKlawfEggMoveLearnset,
    ),

    [SPECIES_CAPSAKID] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL,  ABILITY_NONE },
        .levelUpLearnset = sCapsakidLevelUpLearnset,
        .teachableLearnset = sCapsakidTeachableLearnset,
        .eggMoveLearnset = sCapsakidEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_SCOVILLAIN}),
    ),

    [SPECIES_SCOVILLAIN] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL,  ABILITY_NONE },
        .levelUpLearnset = sScovillainLevelUpLearnset,
        .teachableLearnset = sScovillainTeachableLearnset,
        .eggMoveLearnset = sCapsakidEggMoveLearnset,
    ),

    [SPECIES_SCOVILLAIN_MEGA] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_CHLOROPHYLL, ABILITY_MOODY },
        .levelUpLearnset = sScovillainLevelUpLearnset,
        .teachableLearnset = sScovillainTeachableLearnset,
    ),

    [SPECIES_RELLOR] = HARD_MODE(
        .abilities = { ABILITY_COMPOUND_EYES,  ABILITY_NONE,  ABILITY_SHED_SKIN },
        .levelUpLearnset = sRellorLevelUpLearnset,
        .teachableLearnset = sRellorTeachableLearnset,
        .eggMoveLearnset = sRellorEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 21, SPECIES_RABSCA}),
    ),

    [SPECIES_RABSCA] = HARD_MODE(
        .abilities = { ABILITY_SYNCHRONIZE,  ABILITY_NONE,  ABILITY_TELEPATHY },
        .levelUpLearnset = sRabscaLevelUpLearnset,
        .teachableLearnset = sRabscaTeachableLearnset,
        .eggMoveLearnset = sRellorEggMoveLearnset,
    ),

    [SPECIES_FLITTLE] = HARD_MODE(
        .abilities = { ABILITY_SPEED_BOOST,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sFlittleLevelUpLearnset,
        .teachableLearnset = sFlittleTeachableLearnset,
        .eggMoveLearnset = sFlittleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ESPATHRA}),
    ),

    [SPECIES_ESPATHRA] = HARD_MODE(
        .abilities = { ABILITY_SPEED_BOOST,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sEspathraLevelUpLearnset,
        .teachableLearnset = sEspathraTeachableLearnset,
        .eggMoveLearnset = sFlittleEggMoveLearnset,
    ),

    [SPECIES_TINKATINK] = HARD_MODE(
        .abilities = { ABILITY_MOLD_BREAKER,  ABILITY_OWN_TEMPO,  ABILITY_NONE },
        .levelUpLearnset = sTinkatinkLevelUpLearnset,
        .teachableLearnset = sTinkatinkTeachableLearnset,
        .eggMoveLearnset = sTinkatinkEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_TINKATUFF}),
    ),

    [SPECIES_TINKATUFF] = HARD_MODE(
        .abilities = { ABILITY_MOLD_BREAKER,  ABILITY_OWN_TEMPO,  ABILITY_NONE },
        .levelUpLearnset = sTinkatuffLevelUpLearnset,
        .teachableLearnset = sTinkatuffTeachableLearnset,
        .eggMoveLearnset = sTinkatinkEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_TINKATON}),
    ),

    [SPECIES_TINKATON] = HARD_MODE(
        .abilities = { ABILITY_MOLD_BREAKER,  ABILITY_OWN_TEMPO,  ABILITY_NONE },
        .levelUpLearnset = sTinkatonLevelUpLearnset,
        .teachableLearnset = sTinkatonTeachableLearnset,
        .eggMoveLearnset = sTinkatinkEggMoveLearnset,
    ),

    [SPECIES_WIGLETT] = HARD_MODE(
        .abilities = { ABILITY_GOOEY,  ABILITY_ARENA_TRAP,  ABILITY_SAND_VEIL },
        .levelUpLearnset = sWiglettLevelUpLearnset,
        .teachableLearnset = sWiglettTeachableLearnset,
        .eggMoveLearnset = sWiglettEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_WUGTRIO}),
    ),

    [SPECIES_WUGTRIO] = HARD_MODE(
        .abilities = { ABILITY_GOOEY,  ABILITY_ARENA_TRAP,  ABILITY_SAND_VEIL },
        .levelUpLearnset = sWugtrioLevelUpLearnset,
        .teachableLearnset = sWugtrioTeachableLearnset,
        .eggMoveLearnset = sWiglettEggMoveLearnset,
    ),

    [SPECIES_BOMBIRDIER] = HARD_MODE(
        .abilities = { ABILITY_ROCKY_PAYLOAD,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sBombirdierLevelUpLearnset,
        .teachableLearnset = sBombirdierTeachableLearnset,
        .eggMoveLearnset = sBombirdierEggMoveLearnset,
    ),

    [SPECIES_FINIZEN] = HARD_MODE(
        .abilities = { ABILITY_WATER_VEIL,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sFinizenLevelUpLearnset,
        .teachableLearnset = sFinizenTeachableLearnset,
        .eggMoveLearnset = sFinizenEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_PALAFIN_ZERO}),
    ),

    [SPECIES_PALAFIN_ZERO] = HARD_MODE(
        .abilities = { ABILITY_ZERO_TO_HERO,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sPalafinLevelUpLearnset,
        .teachableLearnset = sPalafinTeachableLearnset,
        .eggMoveLearnset = sFinizenEggMoveLearnset,
    ),

    [SPECIES_PALAFIN_HERO] = HARD_MODE(
        .abilities = { ABILITY_ZERO_TO_HERO,  ABILITY_NONE,  ABILITY_MOLD_BREAKER },
        .levelUpLearnset = sPalafinLevelUpLearnset,
        .teachableLearnset = sPalafinTeachableLearnset,
    ),

    [SPECIES_VAROOM] = HARD_MODE(
        .abilities = { ABILITY_FILTER,  ABILITY_NONE,  ABILITY_OVERCOAT },
        .levelUpLearnset = sVaroomLevelUpLearnset,
        .teachableLearnset = sVaroomTeachableLearnset,
        .eggMoveLearnset = sVaroomEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_REVAVROOM}),
    ),

    [SPECIES_REVAVROOM] = HARD_MODE(
        .abilities = { ABILITY_FILTER,  ABILITY_NONE,  ABILITY_OVERCOAT },
        .levelUpLearnset = sRevavroomLevelUpLearnset,
        .teachableLearnset = sRevavroomTeachableLearnset,
        .eggMoveLearnset = sVaroomEggMoveLearnset,
    ),

    [SPECIES_CYCLIZAR] = HARD_MODE(
        .abilities = { ABILITY_REGENERATOR,  ABILITY_NONE,  ABILITY_SHED_SKIN },
        .levelUpLearnset = sCyclizarLevelUpLearnset,
        .teachableLearnset = sCyclizarTeachableLearnset,
        .eggMoveLearnset = sCyclizarEggMoveLearnset,
    ),

    [SPECIES_ORTHWORM] = HARD_MODE(
        .abilities = { ABILITY_EARTH_EATER,  ABILITY_NONE,  ABILITY_SAND_VEIL },
        .levelUpLearnset = sOrthwormLevelUpLearnset,
        .teachableLearnset = sOrthwormTeachableLearnset,
        .eggMoveLearnset = sOrthwormEggMoveLearnset,
    ),

    [SPECIES_GLIMMET] = HARD_MODE(
        .abilities = { ABILITY_CORROSION,  ABILITY_NONE,  ABILITY_TOXIC_DEBRIS },
        .levelUpLearnset = sGlimmetLevelUpLearnset,
        .teachableLearnset = sGlimmetTeachableLearnset,
        .eggMoveLearnset = sGlimmetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_GLIMMORA}),
    ),

    [SPECIES_GLIMMORA] = HARD_MODE(
        .abilities = { ABILITY_CORROSION,  ABILITY_NONE,  ABILITY_TOXIC_DEBRIS },
        .levelUpLearnset = sGlimmoraLevelUpLearnset,
        .teachableLearnset = sGlimmoraTeachableLearnset,
        .eggMoveLearnset = sGlimmetEggMoveLearnset,
    ),

    [SPECIES_GLIMMORA_MEGA] = HARD_MODE(
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY },
        .levelUpLearnset = sGlimmoraLevelUpLearnset,
        .teachableLearnset = sGlimmoraTeachableLearnset,
    ),

    [SPECIES_GREAVARD] = HARD_MODE(
        .abilities = { ABILITY_FLUFFY,  ABILITY_NONE,  ABILITY_PICKUP },
        .levelUpLearnset = sGreavardLevelUpLearnset,
        .teachableLearnset = sGreavardTeachableLearnset,
        .eggMoveLearnset = sGreavardEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_HOUNDSTONE}),
    ),

    [SPECIES_HOUNDSTONE] = HARD_MODE(
        .abilities = { ABILITY_FLUFFY,  ABILITY_NONE,  ABILITY_PICKUP },
        .levelUpLearnset = sHoundstoneLevelUpLearnset,
        .teachableLearnset = sHoundstoneTeachableLearnset,
        .eggMoveLearnset = sGreavardEggMoveLearnset,
    ),

    [SPECIES_FLAMIGO] = HARD_MODE(
        .abilities = { ABILITY_SCRAPPY,  ABILITY_NONE,  ABILITY_COSTAR },
        .levelUpLearnset = sFlamigoLevelUpLearnset,
        .teachableLearnset = sFlamigoTeachableLearnset,
        .eggMoveLearnset = sFlamigoEggMoveLearnset,
    ),

    [SPECIES_CETODDLE] = HARD_MODE(
        .abilities = { ABILITY_THICK_FAT,  ABILITY_SHEER_FORCE,  ABILITY_SLUSH_RUSH },
        .levelUpLearnset = sCetoddleLevelUpLearnset,
        .teachableLearnset = sCetoddleTeachableLearnset,
        .eggMoveLearnset = sCetoddleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_CETITAN}),
    ),

    [SPECIES_CETITAN] = HARD_MODE(
        .abilities = { ABILITY_THICK_FAT,  ABILITY_SHEER_FORCE,  ABILITY_SLUSH_RUSH },
        .levelUpLearnset = sCetitanLevelUpLearnset,
        .teachableLearnset = sCetitanTeachableLearnset,
        .eggMoveLearnset = sCetoddleEggMoveLearnset,
    ),

    [SPECIES_VELUZA] = HARD_MODE(
        .abilities = { ABILITY_SHARPNESS,  ABILITY_NONE, ABILITY_MOLD_BREAKER },
        .levelUpLearnset = sVeluzaLevelUpLearnset,
        .teachableLearnset = sVeluzaTeachableLearnset,
        .eggMoveLearnset = sVeluzaEggMoveLearnset,
    ),

    [SPECIES_DONDOZO] = HARD_MODE(
        .abilities = { ABILITY_UNAWARE,  ABILITY_UNAWARE,  ABILITY_OBLIVIOUS },
        .levelUpLearnset = sDondozoLevelUpLearnset,
        .teachableLearnset = sDondozoTeachableLearnset,
        .eggMoveLearnset = sDondozoEggMoveLearnset,
    ),

    [SPECIES_TATSUGIRI_CURLY] = HARD_MODE(
        .abilities = { ABILITY_SWIFT_SWIM,  ABILITY_NONE,  ABILITY_STORM_DRAIN },
        .levelUpLearnset = sTatsugiriLevelUpLearnset,
        .teachableLearnset = sTatsugiriTeachableLearnset,
        .eggMoveLearnset = sTatsugiriEggMoveLearnset,
    ),

    [SPECIES_TATSUGIRI_DROOPY] = HARD_MODE(
        .abilities = { ABILITY_SWIFT_SWIM,  ABILITY_NONE,  ABILITY_STORM_DRAIN },
        .levelUpLearnset = sTatsugiriLevelUpLearnset,
        .teachableLearnset = sTatsugiriTeachableLearnset,
        .eggMoveLearnset = sTatsugiriEggMoveLearnset,
    ),

    [SPECIES_TATSUGIRI_STRETCHY] = HARD_MODE(
        .abilities = { ABILITY_SWIFT_SWIM,  ABILITY_NONE,  ABILITY_STORM_DRAIN },
        .levelUpLearnset = sTatsugiriLevelUpLearnset,
        .teachableLearnset = sTatsugiriTeachableLearnset,
        .eggMoveLearnset = sTatsugiriEggMoveLearnset,
    ),

    [SPECIES_TATSUGIRI_CURLY_MEGA] = HARD_MODE(
        .abilities = { ABILITY_STORM_DRAIN, ABILITY_NONE, ABILITY_STORM_DRAIN },
        .levelUpLearnset = sTatsugiriLevelUpLearnset,
        .teachableLearnset = sTatsugiriTeachableLearnset,
        .eggMoveLearnset = sTatsugiriEggMoveLearnset,
    ),

    [SPECIES_TATSUGIRI_DROOPY_MEGA] = HARD_MODE(
        .abilities = { ABILITY_STORM_DRAIN, ABILITY_NONE, ABILITY_STORM_DRAIN },
        .levelUpLearnset = sTatsugiriLevelUpLearnset,
        .teachableLearnset = sTatsugiriTeachableLearnset,
        .eggMoveLearnset = sTatsugiriEggMoveLearnset,
    ),

    [SPECIES_TATSUGIRI_STRETCHY_MEGA] = HARD_MODE(
        .abilities = { ABILITY_STORM_DRAIN, ABILITY_NONE, ABILITY_STORM_DRAIN },
        .levelUpLearnset = sTatsugiriLevelUpLearnset,
        .teachableLearnset = sTatsugiriTeachableLearnset,
        .eggMoveLearnset = sTatsugiriEggMoveLearnset,
    ),

    [SPECIES_GREAT_TUSK] = HARD_MODE(
        .abilities = { ABILITY_PROTOSYNTHESIS,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sGreatTuskLevelUpLearnset,
        .teachableLearnset = sGreatTuskTeachableLearnset,
    ),

    [SPECIES_SCREAM_TAIL] = HARD_MODE(
        .abilities = { ABILITY_PROTOSYNTHESIS,  ABILITY_TANGLING_HAIR,  ABILITY_NONE },
        .levelUpLearnset = sScreamTailLevelUpLearnset,
        .teachableLearnset = sScreamTailTeachableLearnset,
    ),

    [SPECIES_BRUTE_BONNET] = HARD_MODE(
        .abilities = { ABILITY_PROTOSYNTHESIS,  ABILITY_POISON_HEAL,  ABILITY_NONE },
        .levelUpLearnset = sBruteBonnetLevelUpLearnset,
        .teachableLearnset = sBruteBonnetTeachableLearnset,
    ),

    [SPECIES_FLUTTER_MANE] = HARD_MODE(
        .abilities = { ABILITY_PROTOSYNTHESIS,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sFlutterManeLevelUpLearnset,
        .teachableLearnset = sFlutterManeTeachableLearnset,
    ),

    [SPECIES_SLITHER_WING] = HARD_MODE(
        .abilities = { ABILITY_PROTOSYNTHESIS,  ABILITY_MULTISCALE,  ABILITY_NONE },
        .levelUpLearnset = sSlitherWingLevelUpLearnset,
        .teachableLearnset = sSlitherWingTeachableLearnset,
    ),

    [SPECIES_SANDY_SHOCKS] = HARD_MODE(
        .abilities = { ABILITY_PROTOSYNTHESIS,  ABILITY_WATER_COMPACTION,  ABILITY_NONE },
        .levelUpLearnset = sSandyShocksLevelUpLearnset,
        .teachableLearnset = sSandyShocksTeachableLearnset,
    ),

    [SPECIES_IRON_TREADS] = HARD_MODE(
        .abilities = { ABILITY_QUARK_DRIVE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sIronTreadsLevelUpLearnset,
        .teachableLearnset = sIronTreadsTeachableLearnset,
    ),

    [SPECIES_IRON_BUNDLE] = HARD_MODE(
        .abilities = { ABILITY_QUARK_DRIVE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sIronBundleLevelUpLearnset,
        .teachableLearnset = sIronBundleTeachableLearnset,
    ),

    [SPECIES_IRON_HANDS] = HARD_MODE(
        .abilities = { ABILITY_QUARK_DRIVE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sIronHandsLevelUpLearnset,
        .teachableLearnset = sIronHandsTeachableLearnset,
    ),

    [SPECIES_IRON_JUGULIS] = HARD_MODE(
        .abilities = { ABILITY_QUARK_DRIVE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sIronJugulisLevelUpLearnset,
        .teachableLearnset = sIronJugulisTeachableLearnset,
    ),

    [SPECIES_IRON_MOTH] = HARD_MODE(
        .abilities = { ABILITY_QUARK_DRIVE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sIronMothLevelUpLearnset,
        .teachableLearnset = sIronMothTeachableLearnset,
    ),

    [SPECIES_IRON_THORNS] = HARD_MODE(
        .abilities = { ABILITY_QUARK_DRIVE,  ABILITY_SOLID_ROCK,  ABILITY_NONE },
        .levelUpLearnset = sIronThornsLevelUpLearnset,
        .teachableLearnset = sIronThornsTeachableLearnset,
    ),

    [SPECIES_FRIGIBAX] = HARD_MODE(
        .abilities = { ABILITY_THERMAL_EXCHANGE,  ABILITY_NONE,  ABILITY_ICE_BODY },
        .levelUpLearnset = sFrigibaxLevelUpLearnset,
        .teachableLearnset = sFrigibaxTeachableLearnset,
        .eggMoveLearnset = sFrigibaxEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_ARCTIBAX}),
    ),

    [SPECIES_ARCTIBAX] = HARD_MODE(
        .abilities = { ABILITY_THERMAL_EXCHANGE,  ABILITY_NONE,  ABILITY_ICE_BODY },
        .levelUpLearnset = sArctibaxLevelUpLearnset,
        .teachableLearnset = sArctibaxTeachableLearnset,
        .eggMoveLearnset = sFrigibaxEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 54, SPECIES_BAXCALIBUR}),
    ),

    [SPECIES_BAXCALIBUR] = HARD_MODE(
        .abilities = { ABILITY_THERMAL_EXCHANGE,  ABILITY_NONE,  ABILITY_ICE_BODY },
        .levelUpLearnset = sBaxcaliburLevelUpLearnset,
        .teachableLearnset = sBaxcaliburTeachableLearnset,
        .eggMoveLearnset = sFrigibaxEggMoveLearnset,
    ),

    [SPECIES_BAXCALIBUR_MEGA] = HARD_MODE(
        .abilities = { ABILITY_THERMAL_EXCHANGE, ABILITY_NONE, ABILITY_ICE_BODY },
        .levelUpLearnset = sBaxcaliburLevelUpLearnset,
        .teachableLearnset = sBaxcaliburTeachableLearnset,
    ),

    [SPECIES_GIMMIGHOUL_CHEST] = HARD_MODE(
        .abilities = { ABILITY_CLEAR_BODY,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sGimmighoulLevelUpLearnset,
        .teachableLearnset = sGimmighoulTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 45, SPECIES_GHOLDENGO}),
    ),

    [SPECIES_GIMMIGHOUL_ROAMING] = HARD_MODE(
        .abilities = { ABILITY_RUN_AWAY,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sGimmighoulLevelUpLearnset,
        .teachableLearnset = sGimmighoulTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 45, SPECIES_GHOLDENGO}),
    ),

    [SPECIES_GHOLDENGO] = HARD_MODE(
        .abilities = { ABILITY_GOOD_AS_GOLD,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sGholdengoLevelUpLearnset,
        .teachableLearnset = sGholdengoTeachableLearnset,
    ),

    [SPECIES_WO_CHIEN] = HARD_MODE(
        .abilities = { ABILITY_TABLETS_OF_RUIN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sWoChienLevelUpLearnset,
        .teachableLearnset = sWoChienTeachableLearnset,
    ),

    [SPECIES_CHIEN_PAO] = HARD_MODE(
        .abilities = { ABILITY_SWORD_OF_RUIN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sChienPaoLevelUpLearnset,
        .teachableLearnset = sChienPaoTeachableLearnset,
    ),

    [SPECIES_TING_LU] = HARD_MODE(
        .abilities = { ABILITY_VESSEL_OF_RUIN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sTingLuLevelUpLearnset,
        .teachableLearnset = sTingLuTeachableLearnset,
    ),

    [SPECIES_CHI_YU] = HARD_MODE(
        .abilities = { ABILITY_BEADS_OF_RUIN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sChiYuLevelUpLearnset,
        .teachableLearnset = sChiYuTeachableLearnset,
    ),

    [SPECIES_ROARING_MOON] = HARD_MODE(
        .abilities = { ABILITY_PROTOSYNTHESIS,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sRoaringMoonLevelUpLearnset,
        .teachableLearnset = sRoaringMoonTeachableLearnset,
    ),

    [SPECIES_IRON_VALIANT] = HARD_MODE(
        .abilities = { ABILITY_QUARK_DRIVE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sIronValiantLevelUpLearnset,
        .teachableLearnset = sIronValiantTeachableLearnset,
    ),

    [SPECIES_WALKING_WAKE] = HARD_MODE(
        .abilities = { ABILITY_PROTOSYNTHESIS,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sWalkingWakeLevelUpLearnset,
        .teachableLearnset = sWalkingWakeTeachableLearnset,
    ),

    [SPECIES_IRON_LEAVES] = HARD_MODE(
        .abilities = { ABILITY_QUARK_DRIVE,  ABILITY_SHARPNESS,  ABILITY_NONE },
        .levelUpLearnset = sIronLeavesLevelUpLearnset,
        .teachableLearnset = sIronLeavesTeachableLearnset,
    ),

    [SPECIES_POLTCHAGEIST_COUNTERFEIT] = HARD_MODE(
        .abilities = { ABILITY_HEATPROOF,  ABILITY_HOSPITALITY,  ABILITY_NONE },
        .levelUpLearnset = sPoltchageistLevelUpLearnset,
        .teachableLearnset = sPoltchageistTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SINISTCHA_UNREMARKABLE}),
    ),

    [SPECIES_POLTCHAGEIST_ARTISAN] = HARD_MODE(
        .abilities = { ABILITY_HEATPROOF,  ABILITY_HOSPITALITY,  ABILITY_NONE },
        .levelUpLearnset = sPoltchageistLevelUpLearnset,
        .teachableLearnset = sPoltchageistTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SINISTCHA_MASTERPIECE}),
    ),

    [SPECIES_SINISTCHA_UNREMARKABLE] = HARD_MODE(
        .abilities = { ABILITY_HEATPROOF,  ABILITY_HEATPROOF,  ABILITY_NONE },
        .levelUpLearnset = sSinistchaLevelUpLearnset,
        .teachableLearnset = sSinistchaTeachableLearnset,
    ),

    [SPECIES_SINISTCHA_MASTERPIECE] = HARD_MODE(
        .abilities = { ABILITY_HEATPROOF,  ABILITY_HOSPITALITY,  ABILITY_NONE },
        .levelUpLearnset = sSinistchaLevelUpLearnset,
        .teachableLearnset = sSinistchaTeachableLearnset,
    ),

    [SPECIES_OKIDOGI] = HARD_MODE(
        .abilities = { ABILITY_TOXIC_CHAIN,  ABILITY_DEFIANT,  ABILITY_NONE },
        .levelUpLearnset = sOkidogiLevelUpLearnset,
        .teachableLearnset = sOkidogiTeachableLearnset,
    ),

    [SPECIES_MUNKIDORI] = HARD_MODE(
        .abilities = { ABILITY_TOXIC_CHAIN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMunkidoriLevelUpLearnset,
        .teachableLearnset = sMunkidoriTeachableLearnset,
    ),

    [SPECIES_FEZANDIPITI] = HARD_MODE(
        .abilities = { ABILITY_TOXIC_CHAIN,  ABILITY_TECHNICIAN,  ABILITY_NONE },
        .levelUpLearnset = sFezandipitiLevelUpLearnset,
        .teachableLearnset = sFezandipitiTeachableLearnset,
    ),

    [SPECIES_OGERPON_TEAL] = HARD_MODE(
        .abilities = { ABILITY_DEFIANT,  ABILITY_NONE,  ABILITY_DEFIANT },
        .levelUpLearnset = sOgerponLevelUpLearnset,
        .teachableLearnset = sOgerponTeachableLearnset,
    ),

    [SPECIES_OGERPON_WELLSPRING] = HARD_MODE(
        .abilities = { ABILITY_WATER_ABSORB,  ABILITY_NONE,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sOgerponLevelUpLearnset,
        .teachableLearnset = sOgerponTeachableLearnset,
    ),

    [SPECIES_OGERPON_HEARTHFLAME] = HARD_MODE(
        .abilities = { ABILITY_MOLD_BREAKER,  ABILITY_NONE,  ABILITY_MOLD_BREAKER },
        .levelUpLearnset = sOgerponLevelUpLearnset,
        .teachableLearnset = sOgerponTeachableLearnset,
    ),

    [SPECIES_OGERPON_CORNERSTONE] = HARD_MODE(
        .abilities = { ABILITY_STURDY,  ABILITY_NONE,  ABILITY_STURDY },
        .levelUpLearnset = sOgerponLevelUpLearnset,
        .teachableLearnset = sOgerponTeachableLearnset,
    ),

    [SPECIES_GOUGING_FIRE] = HARD_MODE(
        .abilities = { ABILITY_PROTOSYNTHESIS,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sGougingFireLevelUpLearnset,
        .teachableLearnset = sGougingFireTeachableLearnset,
    ),

    [SPECIES_RAGING_BOLT] = HARD_MODE(
        .abilities = { ABILITY_PROTOSYNTHESIS,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sRagingBoltLevelUpLearnset,
        .teachableLearnset = sRagingBoltTeachableLearnset,
    ),

    [SPECIES_IRON_BOULDER] = HARD_MODE(
        .abilities = { ABILITY_QUARK_DRIVE,  ABILITY_SHARPNESS,  ABILITY_NONE },
        .levelUpLearnset = sIronBoulderLevelUpLearnset,
        .teachableLearnset = sIronBoulderTeachableLearnset,
    ),

    [SPECIES_IRON_CROWN] = HARD_MODE(
        .abilities = { ABILITY_QUARK_DRIVE,  ABILITY_SHARPNESS,  ABILITY_NONE },
        .levelUpLearnset = sIronCrownLevelUpLearnset,
        .teachableLearnset = sIronCrownTeachableLearnset,
    ),

    [SPECIES_PECHARUNT] = HARD_MODE(
        .abilities = { ABILITY_POISON_PUPPETEER,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sPecharuntLevelUpLearnset,
        .teachableLearnset = sPecharuntTeachableLearnset,
    ),