[SPECIES_BULBASAUR] = HARD_MODE(
        .abilities = {ABILITY_OVERGROW,  ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL },
        .levelUpLearnset = sBulbasaurLevelUpLearnset,
        .teachableLearnset = sBulbasaurTeachableLearnset,
        .eggMoveLearnset = sBulbasaurEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_IVYSAUR}),
    ),

    [SPECIES_IVYSAUR] = HARD_MODE(
        .abilities = {ABILITY_OVERGROW,  ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL },
        .levelUpLearnset = sIvysaurLevelUpLearnset,
        .teachableLearnset = sIvysaurTeachableLearnset,
        .eggMoveLearnset = sBulbasaurEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_VENUSAUR}),
    ),

    [SPECIES_VENUSAUR] = HARD_MODE(
        .abilities = {ABILITY_OVERGROW,  ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL },
        .levelUpLearnset = sVenusaurLevelUpLearnset,
        .teachableLearnset = sVenusaurTeachableLearnset,
        .eggMoveLearnset = sBulbasaurEggMoveLearnset,
    ),

    [SPECIES_VENUSAUR_MEGA] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_THICK_FAT,  ABILITY_THICK_FAT },
        .levelUpLearnset = sVenusaurLevelUpLearnset,
        .teachableLearnset = sVenusaurTeachableLearnset,
    ),

    [SPECIES_CHARMANDER] = HARD_MODE(
        .abilities = {ABILITY_BLAZE,  ABILITY_SOLAR_POWER,  ABILITY_SOLAR_POWER },
        .levelUpLearnset = sCharmanderLevelUpLearnset,
        .teachableLearnset = sCharmanderTeachableLearnset,
        .eggMoveLearnset = sCharmanderEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_CHARMELEON}),
    ),

    [SPECIES_CHARMELEON] = HARD_MODE(
        .abilities = {ABILITY_BLAZE,  ABILITY_SOLAR_POWER,  ABILITY_SOLAR_POWER },
        .levelUpLearnset = sCharmeleonLevelUpLearnset,
        .teachableLearnset = sCharmeleonTeachableLearnset,
        .eggMoveLearnset = sCharmanderEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_CHARIZARD}),
    ),

    [SPECIES_CHARIZARD] = HARD_MODE(
        .abilities = {ABILITY_BLAZE,  ABILITY_SOLAR_POWER,  ABILITY_SOLAR_POWER },
        .levelUpLearnset = sCharizardLevelUpLearnset,
        .teachableLearnset = sCharizardTeachableLearnset,
        .eggMoveLearnset = sCharmanderEggMoveLearnset,
    ),

    [SPECIES_CHARIZARD_MEGA_X] = HARD_MODE(
        .abilities = {ABILITY_TOUGH_CLAWS,  ABILITY_TOUGH_CLAWS,  ABILITY_TOUGH_CLAWS },
        .levelUpLearnset = sCharizardLevelUpLearnset,
        .teachableLearnset = sCharizardTeachableLearnset,
    ),

    [SPECIES_CHARIZARD_MEGA_Y] = HARD_MODE(
        .abilities = {ABILITY_SHEER_FORCE,  ABILITY_SHEER_FORCE,  ABILITY_DROUGHT },
        .levelUpLearnset = sCharizardLevelUpLearnset,
        .teachableLearnset = sCharizardTeachableLearnset,
    ),

    [SPECIES_SQUIRTLE] = HARD_MODE(
        .abilities = {ABILITY_TORRENT,  ABILITY_RAIN_DISH,  ABILITY_RAIN_DISH },
        .levelUpLearnset = sSquirtleLevelUpLearnset,
        .teachableLearnset = sSquirtleTeachableLearnset,
        .eggMoveLearnset = sSquirtleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_WARTORTLE}),
    ),

    [SPECIES_WARTORTLE] = HARD_MODE(
        .abilities = {ABILITY_TORRENT,  ABILITY_RAIN_DISH,  ABILITY_RAIN_DISH },
        .levelUpLearnset = sWartortleLevelUpLearnset,
        .teachableLearnset = sWartortleTeachableLearnset,
        .eggMoveLearnset = sSquirtleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_BLASTOISE}),
    ),

    [SPECIES_BLASTOISE] = HARD_MODE(
        .abilities = {ABILITY_TORRENT,  ABILITY_RAIN_DISH,  ABILITY_RAIN_DISH },
        .levelUpLearnset = sBlastoiseLevelUpLearnset,
        .teachableLearnset = sBlastoiseTeachableLearnset,
        .eggMoveLearnset = sSquirtleEggMoveLearnset,
    ),

    [SPECIES_BLASTOISE_MEGA] = HARD_MODE(
        .abilities = {ABILITY_MEGA_LAUNCHER,  ABILITY_MEGA_LAUNCHER,  ABILITY_MEGA_LAUNCHER },
        .levelUpLearnset = sBlastoiseLevelUpLearnset,
        .teachableLearnset = sBlastoiseTeachableLearnset,
    ),

    [SPECIES_CATERPIE] = HARD_MODE(
        .abilities = {ABILITY_SHIELD_DUST,  ABILITY_NONE,  ABILITY_RUN_AWAY },
        .levelUpLearnset = sCaterpieLevelUpLearnset,
        .teachableLearnset = sCaterpieTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 7, SPECIES_METAPOD}),
    ),

    [SPECIES_METAPOD] = HARD_MODE(
        .abilities = {ABILITY_SHED_SKIN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMetapodLevelUpLearnset,
        .teachableLearnset = sMetapodTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_BUTTERFREE}),
    ),

    [SPECIES_BUTTERFREE] = HARD_MODE(
        .abilities = {ABILITY_COMPOUND_EYES,  ABILITY_SHIELD_DUST,  ABILITY_NONE },
        .levelUpLearnset = sButterfreeLevelUpLearnset,
        .teachableLearnset = sButterfreeTeachableLearnset,
    ),

    [SPECIES_BUTTERFREE_MEGA] = HARD_MODE(
        .abilities = {ABILITY_COMPOUND_EYES,  ABILITY_COMPOUND_EYES,  ABILITY_COMPOUND_EYES },
        .levelUpLearnset = sButterfreeLevelUpLearnset,
        .teachableLearnset = sButterfreeTeachableLearnset,
    ),

    [SPECIES_WEEDLE] = HARD_MODE(
        .abilities = {ABILITY_SHIELD_DUST,  ABILITY_NONE,  ABILITY_RUN_AWAY },
        .levelUpLearnset = sWeedleLevelUpLearnset,
        .teachableLearnset = sWeedleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 7, SPECIES_KAKUNA}),
    ),

    [SPECIES_KAKUNA] = HARD_MODE(
        .abilities = {ABILITY_SHED_SKIN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sKakunaLevelUpLearnset,
        .teachableLearnset = sKakunaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_BEEDRILL}),
    ),

    [SPECIES_BEEDRILL] = HARD_MODE(
        .abilities = {ABILITY_SWARM,  ABILITY_SNIPER,  ABILITY_NONE },
        .levelUpLearnset = sBeedrillLevelUpLearnset,
        .teachableLearnset = sBeedrillTeachableLearnset,
    ),

    [SPECIES_BEEDRILL_MEGA] = HARD_MODE(
        .abilities = {ABILITY_ADAPTABILITY,  ABILITY_ADAPTABILITY,  ABILITY_ADAPTABILITY },
        .levelUpLearnset = sBeedrillLevelUpLearnset,
        .teachableLearnset = sBeedrillTeachableLearnset,
    ),

    [SPECIES_PIDGEY] = HARD_MODE(
        .abilities = {ABILITY_NO_GUARD,  ABILITY_NONE,  ABILITY_FRISK },
        .levelUpLearnset = sPidgeyLevelUpLearnset,
        .teachableLearnset = sPidgeyTeachableLearnset,
        .eggMoveLearnset = sPidgeyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_PIDGEOTTO}),
    ),

    [SPECIES_PIDGEOTTO] = HARD_MODE(
        .abilities = {ABILITY_NO_GUARD,  ABILITY_NONE,  ABILITY_FRISK },
        .levelUpLearnset = sPidgeottoLevelUpLearnset,
        .teachableLearnset = sPidgeottoTeachableLearnset,
        .eggMoveLearnset = sPidgeyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_PIDGEOT}),
    ),

    [SPECIES_PIDGEOT] = HARD_MODE(
        .abilities = {ABILITY_NO_GUARD,  ABILITY_NONE,  ABILITY_FRISK },
        .levelUpLearnset = sPidgeotLevelUpLearnset,
        .teachableLearnset = sPidgeotTeachableLearnset,
        .eggMoveLearnset = sPidgeyEggMoveLearnset,
    ),

    [SPECIES_PIDGEOT_MEGA] = HARD_MODE(
        .abilities = {ABILITY_NO_GUARD,  ABILITY_NO_GUARD,  ABILITY_NO_GUARD },
        .levelUpLearnset = sPidgeotLevelUpLearnset,
        .teachableLearnset = sPidgeotTeachableLearnset,
    ),

    [SPECIES_RATTATA] = HARD_MODE(
        .abilities = {ABILITY_GUTS,  ABILITY_GUTS,  ABILITY_HUSTLE },
        .levelUpLearnset = sRattataLevelUpLearnset,
        .teachableLearnset = sRattataTeachableLearnset,
        .eggMoveLearnset = sRattataEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_RATICATE}),
    ),

    [SPECIES_RATICATE] = HARD_MODE(
        .abilities = {ABILITY_GUTS,  ABILITY_GUTS,  ABILITY_HUSTLE },
        .levelUpLearnset = sRaticateLevelUpLearnset,
        .teachableLearnset = sRaticateTeachableLearnset,
        .eggMoveLearnset = sRattataEggMoveLearnset,
    ),

    [SPECIES_RATTATA_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_THICK_FAT,  ABILITY_GLUTTONY },
        .levelUpLearnset = sRattataAlolaLevelUpLearnset,
        .teachableLearnset = sRattataAlolaTeachableLearnset,
        .eggMoveLearnset = sRattataAlolaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_NIGHT, 18, SPECIES_RATICATE_ALOLA}, {EVO_NONE, 0, SPECIES_RATICATE_ALOLA_TOTEM}),
    ),

    [SPECIES_RATICATE_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_THICK_FAT,  ABILITY_GLUTTONY },
        .levelUpLearnset = sRaticateAlolaLevelUpLearnset,
        .teachableLearnset = sRaticateAlolaTeachableLearnset,
        .eggMoveLearnset = sRattataAlolaEggMoveLearnset,
    ),

    [SPECIES_SPEAROW] = HARD_MODE(
        .abilities = {ABILITY_TECHNICIAN,  ABILITY_SNIPER,  ABILITY_NONE },
        .levelUpLearnset = sSpearowLevelUpLearnset,
        .teachableLearnset = sSpearowTeachableLearnset,
        .eggMoveLearnset = sSpearowEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_FEAROW}),
    ),

    [SPECIES_FEAROW] = HARD_MODE(
        .abilities = {ABILITY_TECHNICIAN,  ABILITY_SNIPER,  ABILITY_NONE },
        .levelUpLearnset = sFearowLevelUpLearnset,
        .teachableLearnset = sFearowTeachableLearnset,
        .eggMoveLearnset = sSpearowEggMoveLearnset,
    ),

    [SPECIES_EKANS] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_CORROSION,  ABILITY_SHED_SKIN },
        .levelUpLearnset = sEkansLevelUpLearnset,
        .teachableLearnset = sEkansTeachableLearnset,
        .eggMoveLearnset = sEkansEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_ARBOK}),
    ),

    [SPECIES_ARBOK] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_STRONG_JAW,  ABILITY_SHED_SKIN },
        .levelUpLearnset = sArbokLevelUpLearnset,
        .teachableLearnset = sArbokTeachableLearnset,
        .eggMoveLearnset = sEkansEggMoveLearnset,
    ),

    [SPECIES_PICHU] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPichuLevelUpLearnset,
        .teachableLearnset = sPichuTeachableLearnset,
        .eggMoveLearnset = sPichuEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_PIKACHU}),
    ),

    [SPECIES_PICHU_SPIKY_EARED] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPichuLevelUpLearnset,
        .teachableLearnset = sPichuTeachableLearnset,
        .eggMoveLearnset = sPichuEggMoveLearnset,
    ),

    [SPECIES_PIKACHU] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .eggMoveLearnset = sPichuEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_RAICHU}, {EVO_ITEM, ITEM_SHINY_STONE, SPECIES_RAICHU_ALOLA}),
    ),

    [SPECIES_PIKACHU_COSPLAY] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuCosplayLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
    ),

    [SPECIES_PIKACHU_ROCK_STAR] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuRockStarLevelUpLearnset,
        .teachableLearnset = sPikachuRockStarTeachableLearnset,
    ),

    [SPECIES_PIKACHU_BELLE] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuBelleLevelUpLearnset,
        .teachableLearnset = sPikachuBelleTeachableLearnset,
    ),

    [SPECIES_PIKACHU_POP_STAR] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuPopStarLevelUpLearnset,
        .teachableLearnset = sPikachuPopStarTeachableLearnset,
    ),

    [SPECIES_PIKACHU_PHD] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuPhDLevelUpLearnset,
        .teachableLearnset = sPikachuPhDTeachableLearnset,
    ),

    [SPECIES_PIKACHU_LIBRE] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuLibreLevelUpLearnset,
        .teachableLearnset = sPikachuLibreTeachableLearnset,
    ),

    [SPECIES_PIKACHU_SURFING] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuSurfingLevelUpLearnset,
        .teachableLearnset = sPikachuSurfingTeachableLearnset,
    ),

    [SPECIES_PIKACHU_FLYING] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuFlyingLevelUpLearnset,
        .teachableLearnset = sPikachuFlyingTeachableLearnset,
    ),

    [SPECIES_PIKACHU_ORIGINAL] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
    ),

    [SPECIES_PIKACHU_HOENN] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
    ),

    [SPECIES_PIKACHU_SINNOH] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
    ),

    [SPECIES_PIKACHU_UNOVA] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
    ),

    [SPECIES_PIKACHU_KALOS] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
    ),

    [SPECIES_PIKACHU_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
    ),

    [SPECIES_PIKACHU_PARTNER] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
    ),

    [SPECIES_PIKACHU_WORLD] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
    ),

    [SPECIES_PIKACHU_STARTER] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
    ),

    [SPECIES_RAICHU] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_NONE,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sRaichuLevelUpLearnset,
        .teachableLearnset = sRaichuTeachableLearnset,
        .eggMoveLearnset = sPichuEggMoveLearnset,
    ),

    [SPECIES_RAICHU_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_SURGE_SURFER,  ABILITY_VOLT_ABSORB,  ABILITY_NONE },
        .levelUpLearnset = sRaichuAlolaLevelUpLearnset,
        .teachableLearnset = sRaichuAlolaTeachableLearnset,
        .eggMoveLearnset = sPichuEggMoveLearnset,
    ),

    [SPECIES_RAICHU_MEGA_X] = HARD_MODE(
        .abilities = { ABILITY_TRANSISTOR, ABILITY_NONE, ABILITY_ELECTRIC_SURGE },
        .levelUpLearnset = sRaichuLevelUpLearnset,
        .teachableLearnset = sRaichuTeachableLearnset,
    ),

    [SPECIES_RAICHU_MEGA_Y] = HARD_MODE(
        .abilities = { ABILITY_NO_GUARD, ABILITY_NO_GUARD, ABILITY_NO_GUARD },
        .levelUpLearnset = sRaichuLevelUpLearnset,
        .teachableLearnset = sRaichuTeachableLearnset,
    ),

    [SPECIES_SANDSHREW] = HARD_MODE(
        .abilities = {ABILITY_SAND_RUSH,  ABILITY_NONE,  ABILITY_SAND_VEIL },
        .levelUpLearnset = sSandshrewLevelUpLearnset,
        .teachableLearnset = sSandshrewTeachableLearnset,
        .eggMoveLearnset = sSandshrewEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_SANDSLASH}),
    ),

    [SPECIES_SANDSLASH] = HARD_MODE(
        .abilities = {ABILITY_SAND_RUSH,  ABILITY_NONE,  ABILITY_SAND_VEIL },
        .levelUpLearnset = sSandslashLevelUpLearnset,
        .teachableLearnset = sSandslashTeachableLearnset,
        .eggMoveLearnset = sSandshrewEggMoveLearnset,
    ),

    [SPECIES_SANDSHREW_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_SLUSH_RUSH,  ABILITY_NONE,  ABILITY_ICE_BODY },
        .levelUpLearnset = sSandshrewAlolaLevelUpLearnset,
        .teachableLearnset = sSandshrewAlolaTeachableLearnset,
        .eggMoveLearnset = sSandshrewAlolaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_SANDSLASH_ALOLA}),
    ),

    [SPECIES_SANDSLASH_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_SLUSH_RUSH,  ABILITY_NONE,  ABILITY_ICE_SCALES },
        .levelUpLearnset = sSandslashAlolaLevelUpLearnset,
        .teachableLearnset = sSandslashAlolaTeachableLearnset,
        .eggMoveLearnset = sSandshrewAlolaEggMoveLearnset,
    ),

    [SPECIES_NIDORAN_F] = HARD_MODE(
        .abilities = {ABILITY_POISON_TOUCH,  ABILITY_POISON_TOUCH,  ABILITY_HUSTLE },
        .levelUpLearnset = sNidoranFLevelUpLearnset,
        .teachableLearnset = sNidoranFTeachableLearnset,
        .eggMoveLearnset = sNidoranFEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_NIDORINA}),
    ),

    [SPECIES_NIDORINA] = HARD_MODE(
        .abilities = {ABILITY_POISON_TOUCH,  ABILITY_POISON_TOUCH,  ABILITY_HUSTLE },
        .levelUpLearnset = sNidorinaLevelUpLearnset,
        .teachableLearnset = sNidorinaTeachableLearnset,
        .eggMoveLearnset = sNidoranFEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOQUEEN}),
    ),

    [SPECIES_NIDOQUEEN] = HARD_MODE(
        .abilities = {ABILITY_SHEER_FORCE,  ABILITY_SHEER_FORCE,  ABILITY_HUSTLE },
        .levelUpLearnset = sNidoqueenLevelUpLearnset,
        .teachableLearnset = sNidoqueenTeachableLearnset,
        .eggMoveLearnset = sNidoranFEggMoveLearnset,
    ),

    [SPECIES_NIDORAN_M] = HARD_MODE(
        .abilities = {ABILITY_POISON_TOUCH,  ABILITY_POISON_TOUCH,  ABILITY_HUSTLE },
        .levelUpLearnset = sNidoranMLevelUpLearnset,
        .teachableLearnset = sNidoranMTeachableLearnset,
        .eggMoveLearnset = sNidoranMEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_NIDORINO}),
    ),

    [SPECIES_NIDORINO] = HARD_MODE(
        .abilities = {ABILITY_POISON_TOUCH,  ABILITY_POISON_TOUCH,  ABILITY_HUSTLE },
        .levelUpLearnset = sNidorinoLevelUpLearnset,
        .teachableLearnset = sNidorinoTeachableLearnset,
        .eggMoveLearnset = sNidoranMEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOKING}),
    ),

    [SPECIES_NIDOKING] = HARD_MODE(
        .abilities = {ABILITY_SHEER_FORCE,  ABILITY_SHEER_FORCE,  ABILITY_HUSTLE },
        .levelUpLearnset = sNidokingLevelUpLearnset,
        .teachableLearnset = sNidokingTeachableLearnset,
        .eggMoveLearnset = sNidoranMEggMoveLearnset,
    ),

    [SPECIES_CLEFFA] = HARD_MODE(
        .abilities = {ABILITY_FRIEND_GUARD,  ABILITY_MAGIC_GUARD,  ABILITY_CUTE_CHARM },
        .levelUpLearnset = sCleffaLevelUpLearnset,
        .teachableLearnset = sCleffaTeachableLearnset,
        .eggMoveLearnset = sCleffaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_CLEFAIRY}),
    ),

    [SPECIES_CLEFAIRY] = HARD_MODE(
        .abilities = {ABILITY_FRIEND_GUARD,  ABILITY_MAGIC_GUARD,  ABILITY_CUTE_CHARM },
        .levelUpLearnset = sClefairyLevelUpLearnset,
        .teachableLearnset = sClefairyTeachableLearnset,
        .eggMoveLearnset = sCleffaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_CLEFABLE}),
    ),

    [SPECIES_CLEFABLE] = HARD_MODE(
        .abilities = {ABILITY_MAGIC_GUARD,  ABILITY_MAGIC_GUARD,  ABILITY_CUTE_CHARM },
        .levelUpLearnset = sClefableLevelUpLearnset,
        .teachableLearnset = sClefableTeachableLearnset,
        .eggMoveLearnset = sCleffaEggMoveLearnset,
    ),

    [SPECIES_CLEFABLE_MEGA] = HARD_MODE(
        .abilities = { ABILITY_UNAWARE, ABILITY_UNAWARE, ABILITY_MAGIC_BOUNCE },
        .levelUpLearnset = sClefableLevelUpLearnset,
        .teachableLearnset = sClefableTeachableLearnset,
    ),

    [SPECIES_VULPIX] = HARD_MODE(
        .abilities = {ABILITY_SHEER_FORCE,  ABILITY_NONE,  ABILITY_DROUGHT },
        .levelUpLearnset = sVulpixLevelUpLearnset,
        .teachableLearnset = sVulpixTeachableLearnset,
        .eggMoveLearnset = sVulpixEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_NINETALES}),
    ),

    [SPECIES_NINETALES] = HARD_MODE(
        .abilities = {ABILITY_SHEER_FORCE,  ABILITY_NONE,  ABILITY_DROUGHT },
        .levelUpLearnset = sNinetalesLevelUpLearnset,
        .teachableLearnset = sNinetalesTeachableLearnset,
        .eggMoveLearnset = sVulpixEggMoveLearnset,
    ),

    [SPECIES_VULPIX_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_SERENE_GRACE,  ABILITY_NONE,  ABILITY_SNOW_WARNING },
        .levelUpLearnset = sVulpixAlolaLevelUpLearnset,
        .teachableLearnset = sVulpixAlolaTeachableLearnset,
        .eggMoveLearnset = sVulpixAlolaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_NINETALES_ALOLA}),
    ),

    [SPECIES_NINETALES_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_SERENE_GRACE,  ABILITY_NONE,  ABILITY_SNOW_WARNING },
        .levelUpLearnset = sNinetalesAlolaLevelUpLearnset,
        .teachableLearnset = sNinetalesAlolaTeachableLearnset,
        .eggMoveLearnset = sVulpixAlolaEggMoveLearnset,
    ),

    [SPECIES_IGGLYBUFF] = HARD_MODE(
        .abilities = {ABILITY_FRIEND_GUARD,  ABILITY_FRIEND_GUARD,  ABILITY_COMPETITIVE },
        .levelUpLearnset = sIgglybuffLevelUpLearnset,
        .teachableLearnset = sIgglybuffTeachableLearnset,
        .eggMoveLearnset = sIgglybuffEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_JIGGLYPUFF}),
    ),

    [SPECIES_JIGGLYPUFF] = HARD_MODE(
        .abilities = {ABILITY_FRIEND_GUARD,  ABILITY_FRIEND_GUARD,  ABILITY_COMPETITIVE },
        .levelUpLearnset = sJigglypuffLevelUpLearnset,
        .teachableLearnset = sJigglypuffTeachableLearnset,
        .eggMoveLearnset = sIgglybuffEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_WIGGLYTUFF}),
    ),

    [SPECIES_WIGGLYTUFF] = HARD_MODE(
        .abilities = {ABILITY_SHEER_FORCE,  ABILITY_SHEER_FORCE,  ABILITY_COMPETITIVE },
        .levelUpLearnset = sWigglytuffLevelUpLearnset,
        .teachableLearnset = sWigglytuffTeachableLearnset,
        .eggMoveLearnset = sIgglybuffEggMoveLearnset,
    ),

    [SPECIES_ZUBAT] = HARD_MODE(
        .abilities = {ABILITY_INFILTRATOR,  ABILITY_SNIPER,  ABILITY_CORROSION },
        .levelUpLearnset = sZubatLevelUpLearnset,
        .teachableLearnset = sZubatTeachableLearnset,
        .eggMoveLearnset = sZubatEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_GOLBAT}),
    ),

    [SPECIES_GOLBAT] = HARD_MODE(
        .abilities = {ABILITY_INFILTRATOR,  ABILITY_SNIPER,  ABILITY_CORROSION },
        .levelUpLearnset = sGolbatLevelUpLearnset,
        .teachableLearnset = sGolbatTeachableLearnset,
        .eggMoveLearnset = sZubatEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_CROBAT}),
    ),

    [SPECIES_CROBAT] = HARD_MODE(
        .abilities = {ABILITY_INFILTRATOR,  ABILITY_SNIPER,  ABILITY_CORROSION },
        .levelUpLearnset = sCrobatLevelUpLearnset,
        .teachableLearnset = sCrobatTeachableLearnset,
        .eggMoveLearnset = sZubatEggMoveLearnset,
    ),

    [SPECIES_ODDISH] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_NONE,  ABILITY_RUN_AWAY },
        .levelUpLearnset = sOddishLevelUpLearnset,
        .teachableLearnset = sOddishTeachableLearnset,
        .eggMoveLearnset = sOddishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_GLOOM}),
    ),

    [SPECIES_GLOOM] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_NONE,  ABILITY_STENCH },
        .levelUpLearnset = sGloomLevelUpLearnset,
        .teachableLearnset = sGloomTeachableLearnset,
        .eggMoveLearnset = sOddishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VILEPLUME}, {EVO_ITEM, ITEM_SUN_STONE, SPECIES_BELLOSSOM}),
    ),

    [SPECIES_VILEPLUME] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_NONE,  ABILITY_EFFECT_SPORE },
        .levelUpLearnset = sVileplumeLevelUpLearnset,
        .teachableLearnset = sVileplumeTeachableLearnset,
        .eggMoveLearnset = sOddishEggMoveLearnset,
    ),

    [SPECIES_BELLOSSOM] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sBellossomLevelUpLearnset,
        .teachableLearnset = sBellossomTeachableLearnset,
        .eggMoveLearnset = sOddishEggMoveLearnset,
    ),

    [SPECIES_PARAS] = HARD_MODE(
        .abilities = {ABILITY_EFFECT_SPORE,  ABILITY_EFFECT_SPORE,  ABILITY_DRY_SKIN },
        .levelUpLearnset = sParasLevelUpLearnset,
        .teachableLearnset = sParasTeachableLearnset,
        .eggMoveLearnset = sParasEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_PARASECT}),
    ),

    [SPECIES_PARASECT] = HARD_MODE(
        .abilities = {ABILITY_EFFECT_SPORE,  ABILITY_EFFECT_SPORE,  ABILITY_DRY_SKIN },
        .levelUpLearnset = sParasectLevelUpLearnset,
        .teachableLearnset = sParasectTeachableLearnset,
        .eggMoveLearnset = sParasEggMoveLearnset,
    ),

    [SPECIES_VENONAT] = HARD_MODE(
        .abilities = {ABILITY_COMPOUND_EYES,  ABILITY_COMPOUND_EYES,  ABILITY_TINTED_LENS },
        .levelUpLearnset = sVenonatLevelUpLearnset,
        .teachableLearnset = sVenonatTeachableLearnset,
        .eggMoveLearnset = sVenonatEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_VENOMOTH}),
    ),

    [SPECIES_VENOMOTH] = HARD_MODE(
        .abilities = {ABILITY_SHIELD_DUST,  ABILITY_SHIELD_DUST,  ABILITY_TINTED_LENS },
        .levelUpLearnset = sVenomothLevelUpLearnset,
        .teachableLearnset = sVenomothTeachableLearnset,
        .eggMoveLearnset = sVenonatEggMoveLearnset,
    ),

    [SPECIES_DIGLETT] = HARD_MODE(
        .abilities = {ABILITY_ARENA_TRAP,  ABILITY_ARENA_TRAP,  ABILITY_SAND_FORCE },
        .levelUpLearnset = sDiglettLevelUpLearnset,
        .teachableLearnset = sDiglettTeachableLearnset,
        .eggMoveLearnset = sDiglettEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_DUGTRIO}),
    ),

    [SPECIES_DUGTRIO] = HARD_MODE(
        .abilities = {ABILITY_ARENA_TRAP,  ABILITY_ARENA_TRAP,  ABILITY_SAND_FORCE },
        .levelUpLearnset = sDugtrioLevelUpLearnset,
        .teachableLearnset = sDugtrioTeachableLearnset,
        .eggMoveLearnset = sDiglettEggMoveLearnset,
    ),

    [SPECIES_DIGLETT_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_TANGLING_HAIR,  ABILITY_TANGLING_HAIR,  ABILITY_SAND_FORCE },
        .levelUpLearnset = sDiglettAlolaLevelUpLearnset,
        .teachableLearnset = sDiglettAlolaTeachableLearnset,
        .eggMoveLearnset = sDiglettAlolaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_DUGTRIO_ALOLA}),
    ),

    [SPECIES_DUGTRIO_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_TANGLING_HAIR,  ABILITY_TANGLING_HAIR,  ABILITY_SAND_FORCE },
        .levelUpLearnset = sDugtrioAlolaLevelUpLearnset,
        .teachableLearnset = sDugtrioAlolaTeachableLearnset,
        .eggMoveLearnset = sDiglettAlolaEggMoveLearnset,
    ),

    [SPECIES_MEOWTH] = HARD_MODE(
        .abilities = {ABILITY_TECHNICIAN,  ABILITY_FELINE_PROWESS,  ABILITY_NONE },
        .levelUpLearnset = sMeowthLevelUpLearnset,
        .teachableLearnset = sMeowthTeachableLearnset,
        .eggMoveLearnset = sMeowthEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PERSIAN}),
    ),

    [SPECIES_PERSIAN] = HARD_MODE(
        .abilities = {ABILITY_TECHNICIAN,  ABILITY_FELINE_PROWESS,  ABILITY_NONE },
        .levelUpLearnset = sPersianLevelUpLearnset,
        .teachableLearnset = sPersianTeachableLearnset,
        .eggMoveLearnset = sMeowthEggMoveLearnset,
    ),

    [SPECIES_MEOWTH_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_TECHNICIAN,  ABILITY_FELINE_PROWESS,  ABILITY_NONE },
        .levelUpLearnset = sMeowthAlolaLevelUpLearnset,
        .teachableLearnset = sMeowthAlolaTeachableLearnset,
        .eggMoveLearnset = sMeowthAlolaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PERSIAN_ALOLA}),
    ),

    [SPECIES_PERSIAN_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_FUR_COAT,  ABILITY_FELINE_PROWESS,  ABILITY_NONE },
        .levelUpLearnset = sPersianAlolaLevelUpLearnset,
        .teachableLearnset = sPersianAlolaTeachableLearnset,
        .eggMoveLearnset = sMeowthAlolaEggMoveLearnset,
    ),

    [SPECIES_MEOWTH_GALAR] = HARD_MODE(
        .abilities = {ABILITY_PICKUP,  ABILITY_TOUGH_CLAWS,  ABILITY_UNNERVE },
        .levelUpLearnset = sMeowthGalarLevelUpLearnset,
        .teachableLearnset = sMeowthGalarTeachableLearnset,
        .eggMoveLearnset = sMeowthGalarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PERRSERKER}),
    ),

    [SPECIES_PERRSERKER] = HARD_MODE(
        .abilities = {ABILITY_BATTLE_ARMOR,  ABILITY_TOUGH_CLAWS,  ABILITY_STEELY_SPIRIT },
        .levelUpLearnset = sPerrserkerLevelUpLearnset,
        .teachableLearnset = sPerrserkerTeachableLearnset,
        .eggMoveLearnset = sMeowthGalarEggMoveLearnset,
    ),

    [SPECIES_PSYDUCK] = HARD_MODE(
        .abilities = {ABILITY_DAMP,  ABILITY_SWIFT_SWIM,  ABILITY_CLOUD_NINE },
        .levelUpLearnset = sPsyduckLevelUpLearnset,
        .teachableLearnset = sPsyduckTeachableLearnset,
        .eggMoveLearnset = sPsyduckEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_GOLDUCK}),
    ),

    [SPECIES_GOLDUCK] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_NEUROFORCE,  ABILITY_CLOUD_NINE },
        .levelUpLearnset = sGolduckLevelUpLearnset,
        .teachableLearnset = sGolduckTeachableLearnset,
        .eggMoveLearnset = sPsyduckEggMoveLearnset,
    ),

    [SPECIES_MANKEY] = HARD_MODE(
        .abilities = {ABILITY_VITAL_SPIRIT,  ABILITY_VITAL_SPIRIT,  ABILITY_ANGER_POINT },
        .levelUpLearnset = sMankeyLevelUpLearnset,
        .teachableLearnset = sMankeyTeachableLearnset,
        .eggMoveLearnset = sMankeyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PRIMEAPE}),
    ),

    [SPECIES_PRIMEAPE] = HARD_MODE(
        .abilities = {ABILITY_VITAL_SPIRIT,  ABILITY_VITAL_SPIRIT,  ABILITY_ANGER_POINT },
        .levelUpLearnset = sPrimeapeLevelUpLearnset,
        .teachableLearnset = sPrimeapeTeachableLearnset,
        .eggMoveLearnset = sMankeyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MAPSEC, MAPSEC_MT_PYRE, SPECIES_ANNIHILAPE}),
    ),

    [SPECIES_ANNIHILAPE] = HARD_MODE(
        .abilities = {ABILITY_INNER_FOCUS,  ABILITY_INNER_FOCUS,  ABILITY_DEFIANT },
        .levelUpLearnset = sAnnihilapeLevelUpLearnset,
        .teachableLearnset = sAnnihilapeTeachableLearnset,
        .eggMoveLearnset = sMankeyEggMoveLearnset,
    ),

    [SPECIES_GROWLITHE] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_JUSTIFIED,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sGrowlitheLevelUpLearnset,
        .teachableLearnset = sGrowlitheTeachableLearnset,
        .eggMoveLearnset = sGrowlitheEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE}),
    ),

    [SPECIES_ARCANINE] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_JUSTIFIED,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sArcanineLevelUpLearnset,
        .teachableLearnset = sArcanineTeachableLearnset,
        .eggMoveLearnset = sGrowlitheEggMoveLearnset,
    ),

    [SPECIES_GROWLITHE_HISUI] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_ROCK_HEAD,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sGrowlitheHisuiLevelUpLearnset,
        .teachableLearnset = sGrowlitheHisuiTeachableLearnset,
        .eggMoveLearnset = sGrowlitheHisuiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE_HISUI}),
    ),

    [SPECIES_ARCANINE_HISUI] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_ROCK_HEAD,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sArcanineHisuiLevelUpLearnset,
        .teachableLearnset = sArcanineHisuiTeachableLearnset,
        .eggMoveLearnset = sGrowlitheHisuiEggMoveLearnset,
    ),

    [SPECIES_POLIWAG] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_DAMP,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sPoliwagLevelUpLearnset,
        .teachableLearnset = sPoliwagTeachableLearnset,
        .eggMoveLearnset = sPoliwagEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_POLIWHIRL}),
    ),

    [SPECIES_POLIWHIRL] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_DAMP,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sPoliwhirlLevelUpLearnset,
        .teachableLearnset = sPoliwhirlTeachableLearnset,
        .eggMoveLearnset = sPoliwagEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_POLIWRATH}, {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_POLITOED}, {EVO_ITEM, ITEM_KINGS_ROCK, SPECIES_POLITOED}),
    ),

    [SPECIES_POLIWRATH] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_DAMP,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sPoliwrathLevelUpLearnset,
        .teachableLearnset = sPoliwrathTeachableLearnset,
        .eggMoveLearnset = sPoliwagEggMoveLearnset,
    ),

    [SPECIES_POLITOED] = HARD_MODE(
        .abilities = {ABILITY_ADAPTABILITY,  ABILITY_DAMP,  ABILITY_DRIZZLE },
        .levelUpLearnset = sPolitoedLevelUpLearnset,
        .teachableLearnset = sPolitoedTeachableLearnset,
        .eggMoveLearnset = sPoliwagEggMoveLearnset,
    ),

    [SPECIES_ABRA] = HARD_MODE(
        .abilities = {ABILITY_MAGIC_GUARD,  ABILITY_INNER_FOCUS,  ABILITY_SYNCHRONIZE },
        .levelUpLearnset = sAbraLevelUpLearnset,
        .teachableLearnset = sAbraTeachableLearnset,
        .eggMoveLearnset = sAbraEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_KADABRA}),
    ),

    [SPECIES_KADABRA] = HARD_MODE(
        .abilities = {ABILITY_MAGIC_GUARD,  ABILITY_INNER_FOCUS,  ABILITY_SYNCHRONIZE },
        .levelUpLearnset = sKadabraLevelUpLearnset,
        .teachableLearnset = sKadabraTeachableLearnset,
        .eggMoveLearnset = sAbraEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_ALAKAZAM}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_ALAKAZAM}),
    ),

    [SPECIES_ALAKAZAM] = HARD_MODE(
        .abilities = {ABILITY_MAGIC_GUARD,  ABILITY_INNER_FOCUS,  ABILITY_SYNCHRONIZE },
        .levelUpLearnset = sAlakazamLevelUpLearnset,
        .teachableLearnset = sAlakazamTeachableLearnset,
        .eggMoveLearnset = sAbraEggMoveLearnset,
    ),

    [SPECIES_ALAKAZAM_MEGA] = HARD_MODE(
        .abilities = {ABILITY_TRACE,  ABILITY_TRACE,  ABILITY_TRACE },
        .levelUpLearnset = sAlakazamLevelUpLearnset,
        .teachableLearnset = sAlakazamTeachableLearnset,
    ),

    [SPECIES_MACHOP] = HARD_MODE(
        .abilities = {ABILITY_GUTS,  ABILITY_NO_GUARD,  ABILITY_STEADFAST },
        .levelUpLearnset = sMachopLevelUpLearnset,
        .teachableLearnset = sMachopTeachableLearnset,
        .eggMoveLearnset = sMachopEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_MACHOKE}),
    ),

    [SPECIES_MACHOKE] = HARD_MODE(
        .abilities = {ABILITY_GUTS,  ABILITY_NO_GUARD,  ABILITY_STEADFAST },
        .levelUpLearnset = sMachokeLevelUpLearnset,
        .teachableLearnset = sMachokeTeachableLearnset,
        .eggMoveLearnset = sMachopEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_MACHAMP}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_MACHAMP}),
    ),

    [SPECIES_MACHAMP] = HARD_MODE(
        .abilities = {ABILITY_GUTS,  ABILITY_NO_GUARD,  ABILITY_STEADFAST },
        .levelUpLearnset = sMachampLevelUpLearnset,
        .teachableLearnset = sMachampTeachableLearnset,
        .eggMoveLearnset = sMachopEggMoveLearnset,
    ),

    [SPECIES_MACHAMP_MEGA] = HARD_MODE(
        .abilities = {ABILITY_ORAORAORAORA,  ABILITY_ORAORAORAORA,  ABILITY_ORAORAORAORA },
        .levelUpLearnset = sMachampLevelUpLearnset,
        .teachableLearnset = sMachampTeachableLearnset,
    ),

    [SPECIES_BELLSPROUT] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_NONE,  ABILITY_GLUTTONY },
        .levelUpLearnset = sBellsproutLevelUpLearnset,
        .teachableLearnset = sBellsproutTeachableLearnset,
        .eggMoveLearnset = sBellsproutEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 21, SPECIES_WEEPINBELL}),
    ),

    [SPECIES_WEEPINBELL] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_NONE,  ABILITY_GLUTTONY },
        .levelUpLearnset = sWeepinbellLevelUpLearnset,
        .teachableLearnset = sWeepinbellTeachableLearnset,
        .eggMoveLearnset = sBellsproutEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VICTREEBEL}),
    ),

    [SPECIES_VICTREEBEL] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_NONE,  ABILITY_GLUTTONY },
        .levelUpLearnset = sVictreebelLevelUpLearnset,
        .teachableLearnset = sVictreebelTeachableLearnset,
        .eggMoveLearnset = sBellsproutEggMoveLearnset,
    ),

    [SPECIES_VICTREEBEL_MEGA] = HARD_MODE(
        .abilities = { ABILITY_INNARDS_OUT, ABILITY_NONE, ABILITY_INNARDS_OUT },
        .levelUpLearnset = sVictreebelLevelUpLearnset,
        .teachableLearnset = sVictreebelTeachableLearnset,
    ),

    [SPECIES_TENTACOOL] = HARD_MODE(
        .abilities = {ABILITY_CLEAR_BODY,  ABILITY_LIQUID_OOZE,  ABILITY_RAIN_DISH },
        .levelUpLearnset = sTentacoolLevelUpLearnset,
        .teachableLearnset = sTentacoolTeachableLearnset,
        .eggMoveLearnset = sTentacoolEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_TENTACRUEL}),
    ),

    [SPECIES_TENTACRUEL] = HARD_MODE(
        .abilities = {ABILITY_CLEAR_BODY,  ABILITY_LIQUID_OOZE,  ABILITY_RAIN_DISH },
        .levelUpLearnset = sTentacruelLevelUpLearnset,
        .teachableLearnset = sTentacruelTeachableLearnset,
        .eggMoveLearnset = sTentacoolEggMoveLearnset,
    ),

    [SPECIES_GEODUDE] = HARD_MODE(
        .abilities = {ABILITY_ROCK_HEAD,  ABILITY_STURDY,  ABILITY_SAND_VEIL },
        .levelUpLearnset = sGeodudeLevelUpLearnset,
        .teachableLearnset = sGeodudeTeachableLearnset,
        .eggMoveLearnset = sGeodudeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_GRAVELER}),
    ),

    [SPECIES_GRAVELER] = HARD_MODE(
        .abilities = {ABILITY_ROCK_HEAD,  ABILITY_STURDY,  ABILITY_SAND_VEIL },
        .levelUpLearnset = sGravelerLevelUpLearnset,
        .teachableLearnset = sGravelerTeachableLearnset,
        .eggMoveLearnset = sGeodudeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOLEM}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOLEM}),
    ),

    [SPECIES_GOLEM] = HARD_MODE(
        .abilities = {ABILITY_ROCK_HEAD,  ABILITY_STURDY,  ABILITY_SAND_VEIL },
        .levelUpLearnset = sGolemLevelUpLearnset,
        .teachableLearnset = sGolemTeachableLearnset,
        .eggMoveLearnset = sGeodudeEggMoveLearnset,
    ),

    [SPECIES_GEODUDE_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_GALVANIZE,  ABILITY_ROCK_HEAD,  ABILITY_STURDY },
        .levelUpLearnset = sGeodudeAlolaLevelUpLearnset,
        .teachableLearnset = sGeodudeAlolaTeachableLearnset,
        .eggMoveLearnset = sGeodudeAlolaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_GRAVELER_ALOLA}),
    ),

    [SPECIES_GRAVELER_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_GALVANIZE,  ABILITY_ROCK_HEAD,  ABILITY_STURDY },
        .levelUpLearnset = sGravelerAlolaLevelUpLearnset,
        .teachableLearnset = sGravelerAlolaTeachableLearnset,
        .eggMoveLearnset = sGeodudeAlolaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOLEM_ALOLA}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOLEM_ALOLA}),
    ),

    [SPECIES_GOLEM_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_GALVANIZE,  ABILITY_ROCK_HEAD,  ABILITY_MAGNET_PULL },
        .levelUpLearnset = sGolemAlolaLevelUpLearnset,
        .teachableLearnset = sGolemAlolaTeachableLearnset,
        .eggMoveLearnset = sGeodudeAlolaEggMoveLearnset,
    ),

    [SPECIES_PONYTA] = HARD_MODE(
        .abilities = {ABILITY_FLAME_BODY,  ABILITY_FLAME_BODY,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sPonytaLevelUpLearnset,
        .teachableLearnset = sPonytaTeachableLearnset,
        .eggMoveLearnset = sPonytaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_RAPIDASH}),
    ),

    [SPECIES_RAPIDASH] = HARD_MODE(
        .abilities = {ABILITY_BLAZING_SOUL,  ABILITY_BLAZING_SOUL,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sRapidashLevelUpLearnset,
        .teachableLearnset = sRapidashTeachableLearnset,
        .eggMoveLearnset = sPonytaEggMoveLearnset,
    ),

    [SPECIES_PONYTA_GALAR] = HARD_MODE(
        .abilities = {ABILITY_RUN_AWAY,  ABILITY_IMMUNITY,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sPonytaGalarLevelUpLearnset,
        .teachableLearnset = sPonytaGalarTeachableLearnset,
        .eggMoveLearnset = sPonytaGalarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_RAPIDASH_GALAR}),
    ),

    [SPECIES_RAPIDASH_GALAR] = HARD_MODE(
        .abilities = {ABILITY_RUN_AWAY,  ABILITY_IMMUNITY,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sRapidashGalarLevelUpLearnset,
        .teachableLearnset = sRapidashGalarTeachableLearnset,
        .eggMoveLearnset = sPonytaGalarEggMoveLearnset,
    ),

    [SPECIES_SLOWPOKE] = HARD_MODE(
        .abilities = {ABILITY_OBLIVIOUS,  ABILITY_OWN_TEMPO,  ABILITY_REGENERATOR },
        .levelUpLearnset = sSlowpokeLevelUpLearnset,
        .teachableLearnset = sSlowpokeTeachableLearnset,
        .eggMoveLearnset = sSlowpokeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_SLOWBRO}, {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING}, {EVO_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING}),
    ),

    [SPECIES_SLOWBRO] = HARD_MODE(
        .abilities = {ABILITY_OBLIVIOUS,  ABILITY_OWN_TEMPO,  ABILITY_REGENERATOR },
        .levelUpLearnset = sSlowbroLevelUpLearnset,
        .teachableLearnset = sSlowbroTeachableLearnset,
        .eggMoveLearnset = sSlowpokeEggMoveLearnset,
    ),

    [SPECIES_SLOWKING] = HARD_MODE(
        .abilities = {ABILITY_OBLIVIOUS,  ABILITY_OWN_TEMPO,  ABILITY_REGENERATOR },
        .levelUpLearnset = sSlowkingLevelUpLearnset,
        .teachableLearnset = sSlowkingTeachableLearnset,
        .eggMoveLearnset = sSlowpokeEggMoveLearnset,
    ),

    [SPECIES_SLOWBRO_MEGA] = HARD_MODE(
        .abilities = {ABILITY_SHELL_ARMOR,  ABILITY_SHELL_ARMOR,  ABILITY_REGENERATOR },
        .levelUpLearnset = sSlowbroLevelUpLearnset,
        .teachableLearnset = sSlowbroTeachableLearnset,
    ),

    [SPECIES_SLOWPOKE_GALAR] = HARD_MODE(
        .abilities = {ABILITY_GLUTTONY,  ABILITY_OWN_TEMPO,  ABILITY_REGENERATOR },
        .levelUpLearnset = sSlowpokeGalarLevelUpLearnset,
        .teachableLearnset = sSlowpokeGalarTeachableLearnset,
        .eggMoveLearnset = sSlowpokeGalarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_SLOWBRO_GALAR}, {EVO_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING_GALAR}),
    ),

    [SPECIES_SLOWBRO_GALAR] = HARD_MODE(
        .abilities = {ABILITY_QUICK_DRAW,  ABILITY_OWN_TEMPO,  ABILITY_REGENERATOR },
        .levelUpLearnset = sSlowbroGalarLevelUpLearnset,
        .teachableLearnset = sSlowbroGalarTeachableLearnset,
        .eggMoveLearnset = sSlowpokeGalarEggMoveLearnset,
    ),

    [SPECIES_SLOWKING_GALAR] = HARD_MODE(
        .abilities = {ABILITY_OBLIVIOUS,  ABILITY_OWN_TEMPO,  ABILITY_REGENERATOR },
        .levelUpLearnset = sSlowkingGalarLevelUpLearnset,
        .teachableLearnset = sSlowkingGalarTeachableLearnset,
        .eggMoveLearnset = sSlowpokeGalarEggMoveLearnset,
    ),

    [SPECIES_MAGNEMITE] = HARD_MODE(
        .abilities = {ABILITY_ANALYTIC,  ABILITY_STURDY,  ABILITY_MAGNET_PULL },
        .levelUpLearnset = sMagnemiteLevelUpLearnset,
        .teachableLearnset = sMagnemiteTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MAGNETON}),
    ),

    [SPECIES_MAGNETON] = HARD_MODE(
        .abilities = {ABILITY_ANALYTIC,  ABILITY_STURDY,  ABILITY_MAGNET_PULL },
        .levelUpLearnset = sMagnetonLevelUpLearnset,
        .teachableLearnset = sMagnetonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_MAPSEC, MAPSEC_NEW_MAUVILLE, SPECIES_MAGNEZONE}, {EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_MAGNEZONE}),
    ),

    [SPECIES_MAGNEZONE] = HARD_MODE(
        .abilities = {ABILITY_ANALYTIC,  ABILITY_STURDY,  ABILITY_MAGNET_PULL },
        .levelUpLearnset = sMagnezoneLevelUpLearnset,
        .teachableLearnset = sMagnezoneTeachableLearnset,
    ),

    [SPECIES_FARFETCHD] = HARD_MODE(
        .abilities = {ABILITY_SHARPNESS,  ABILITY_SHARPNESS,  ABILITY_INNER_FOCUS },
        .levelUpLearnset = sFarfetchdLevelUpLearnset,
        .teachableLearnset = sFarfetchdTeachableLearnset,
        .eggMoveLearnset = sFarfetchdEggMoveLearnset,
    ),

    [SPECIES_FARFETCHD_GALAR] = HARD_MODE(
        .abilities = {ABILITY_STEADFAST,  ABILITY_NONE,  ABILITY_SCRAPPY },
        .levelUpLearnset = sFarfetchdGalarLevelUpLearnset,
        .teachableLearnset = sFarfetchdGalarTeachableLearnset,
        .eggMoveLearnset = sFarfetchdGalarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SIRFETCHD}),
    ),

    [SPECIES_SIRFETCHD] = HARD_MODE(
        .abilities = {ABILITY_SHARPNESS,  ABILITY_NONE,  ABILITY_SCRAPPY },
        .levelUpLearnset = sSirfetchdLevelUpLearnset,
        .teachableLearnset = sSirfetchdTeachableLearnset,
        .eggMoveLearnset = sFarfetchdGalarEggMoveLearnset,
    ),

    [SPECIES_DODUO] = HARD_MODE(
        .abilities = {ABILITY_RUN_AWAY,  ABILITY_RUN_AWAY,  ABILITY_NONE },
        .levelUpLearnset = sDoduoLevelUpLearnset,
        .teachableLearnset = sDoduoTeachableLearnset,
        .eggMoveLearnset = sDoduoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_DODRIO}),
    ),

    [SPECIES_DODRIO] = HARD_MODE(
        .abilities = {ABILITY_ROCK_HEAD,  ABILITY_ROCK_HEAD,  ABILITY_NONE },
        .levelUpLearnset = sDodrioLevelUpLearnset,
        .teachableLearnset = sDodrioTeachableLearnset,
        .eggMoveLearnset = sDoduoEggMoveLearnset,
    ),

    [SPECIES_SEEL] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_ICE_BODY,  ABILITY_HYDRATION },
        .levelUpLearnset = sSeelLevelUpLearnset,
        .teachableLearnset = sSeelTeachableLearnset,
        .eggMoveLearnset = sSeelEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_DEWGONG}),
    ),

    [SPECIES_DEWGONG] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_ICE_BODY,  ABILITY_ICE_SCALES },
        .levelUpLearnset = sDewgongLevelUpLearnset,
        .teachableLearnset = sDewgongTeachableLearnset,
        .eggMoveLearnset = sSeelEggMoveLearnset,
    ),

    [SPECIES_GRIMER] = HARD_MODE(
        .abilities = {ABILITY_POISON_TOUCH,  ABILITY_STICKY_HOLD, ABILITY_STENCH  },
        .levelUpLearnset = sGrimerLevelUpLearnset,
        .teachableLearnset = sGrimerTeachableLearnset,
        .eggMoveLearnset = sGrimerEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_MUK}),
    ),

    [SPECIES_MUK] = HARD_MODE(
        .abilities = {ABILITY_POISON_TOUCH,  ABILITY_STICKY_HOLD,  ABILITY_REGENERATOR },
        .levelUpLearnset = sMukLevelUpLearnset,
        .teachableLearnset = sMukTeachableLearnset,
        .eggMoveLearnset = sGrimerEggMoveLearnset,
    ),

    [SPECIES_GRIMER_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_POISON_TOUCH,  ABILITY_GLUTTONY,  ABILITY_POWER_OF_ALCHEMY },
        .levelUpLearnset = sGrimerAlolaLevelUpLearnset,
        .teachableLearnset = sGrimerAlolaTeachableLearnset,
        .eggMoveLearnset = sGrimerAlolaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_MUK_ALOLA}),
    ),

    [SPECIES_MUK_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_POISON_TOUCH,  ABILITY_GLUTTONY,  ABILITY_POWER_OF_ALCHEMY },
        .levelUpLearnset = sMukAlolaLevelUpLearnset,
        .teachableLearnset = sMukAlolaTeachableLearnset,
        .eggMoveLearnset = sGrimerAlolaEggMoveLearnset,
    ),

    [SPECIES_SHELLDER] = HARD_MODE(
        .abilities = {ABILITY_SHELL_ARMOR,  ABILITY_SKILL_LINK,  ABILITY_OVERCOAT },
        .levelUpLearnset = sShellderLevelUpLearnset,
        .teachableLearnset = sShellderTeachableLearnset,
        .eggMoveLearnset = sShellderEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_CLOYSTER}),
    ),

    [SPECIES_CLOYSTER] = HARD_MODE(
        .abilities = {ABILITY_SHELL_ARMOR,  ABILITY_SKILL_LINK,  ABILITY_OVERCOAT },
        .levelUpLearnset = sCloysterLevelUpLearnset,
        .teachableLearnset = sCloysterTeachableLearnset,
        .eggMoveLearnset = sShellderEggMoveLearnset,
    ),

    [SPECIES_GASTLY] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_LEVITATE },
        .levelUpLearnset = sGastlyLevelUpLearnset,
        .teachableLearnset = sGastlyTeachableLearnset,
        .eggMoveLearnset = sGastlyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_HAUNTER}),
    ),

    [SPECIES_HAUNTER] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_LEVITATE },
        .levelUpLearnset = sHaunterLevelUpLearnset,
        .teachableLearnset = sHaunterTeachableLearnset,
        .eggMoveLearnset = sGastlyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GENGAR}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GENGAR}),
    ),

    [SPECIES_GENGAR] = HARD_MODE(
        .abilities = {ABILITY_CURSED_BODY,  ABILITY_NONE,  ABILITY_LEVITATE },
        .levelUpLearnset = sGengarLevelUpLearnset,
        .teachableLearnset = sGengarTeachableLearnset,
        .eggMoveLearnset = sGastlyEggMoveLearnset,
    ),

    [SPECIES_GENGAR_MEGA] = HARD_MODE(
        .abilities = {ABILITY_SHADOW_TAG,  ABILITY_SHADOW_TAG,  ABILITY_SHADOW_TAG },
        .levelUpLearnset = sGengarLevelUpLearnset,
        .teachableLearnset = sGengarTeachableLearnset,
    ),

    [SPECIES_ONIX] = HARD_MODE(
        .abilities = {ABILITY_ROCK_HEAD,  ABILITY_STURDY,  ABILITY_WEAK_ARMOR },
        .levelUpLearnset = sOnixLevelUpLearnset,
        .teachableLearnset = sOnixTeachableLearnset,
        .eggMoveLearnset = sOnixEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_STEELIX}, {EVO_ITEM, ITEM_METAL_COAT, SPECIES_STEELIX}),
    ),

    [SPECIES_STEELIX] = HARD_MODE(
        .abilities = {ABILITY_ROCK_HEAD,  ABILITY_STURDY,  ABILITY_SHEER_FORCE },
        .levelUpLearnset = sSteelixLevelUpLearnset,
        .teachableLearnset = sSteelixTeachableLearnset,
        .eggMoveLearnset = sOnixEggMoveLearnset,
    ),

    [SPECIES_STEELIX_MEGA] = HARD_MODE(
        .abilities = {ABILITY_HEATPROOF,  ABILITY_HEATPROOF,  ABILITY_HEATPROOF },
        .levelUpLearnset = sSteelixLevelUpLearnset,
        .teachableLearnset = sSteelixTeachableLearnset,
    ),

    [SPECIES_DROWZEE] = HARD_MODE(
        .abilities = {ABILITY_INSOMNIA,  ABILITY_BAD_DREAMS,  ABILITY_PSYCHIC_SURGE },
        .levelUpLearnset = sDrowzeeLevelUpLearnset,
        .teachableLearnset = sDrowzeeTeachableLearnset,
        .eggMoveLearnset = sDrowzeeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_HYPNO}),
    ),

    [SPECIES_HYPNO] = HARD_MODE(
        .abilities = {ABILITY_INSOMNIA,  ABILITY_BAD_DREAMS,  ABILITY_PSYCHIC_SURGE },
        .levelUpLearnset = sHypnoLevelUpLearnset,
        .teachableLearnset = sHypnoTeachableLearnset,
        .eggMoveLearnset = sDrowzeeEggMoveLearnset,
    ),

    [SPECIES_KRABBY] = HARD_MODE(
        .abilities = {ABILITY_HYPER_CUTTER,  ABILITY_SHELL_ARMOR,  ABILITY_SHEER_FORCE },
        .levelUpLearnset = sKrabbyLevelUpLearnset,
        .teachableLearnset = sKrabbyTeachableLearnset,
        .eggMoveLearnset = sKrabbyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_KINGLER}),
    ),

    [SPECIES_KINGLER] = HARD_MODE(
        .abilities = {ABILITY_HYPER_CUTTER,  ABILITY_SHELL_ARMOR,  ABILITY_SHEER_FORCE },
        .levelUpLearnset = sKinglerLevelUpLearnset,
        .teachableLearnset = sKinglerTeachableLearnset,
        .eggMoveLearnset = sKrabbyEggMoveLearnset,
    ),

    [SPECIES_KINGLER_MEGA] = HARD_MODE(
        .abilities = {ABILITY_TOUGH_CLAWS,  ABILITY_TOUGH_CLAWS,  ABILITY_TOUGH_CLAWS },
        .levelUpLearnset = sKinglerLevelUpLearnset,
        .teachableLearnset = sKinglerTeachableLearnset,
    ),

    [SPECIES_VOLTORB] = HARD_MODE(
        .abilities = {ABILITY_SOUNDPROOF,  ABILITY_GALVANIZE,  ABILITY_STATIC },
        .levelUpLearnset = sVoltorbLevelUpLearnset,
        .teachableLearnset = sVoltorbTeachableLearnset,
        .eggMoveLearnset = sVoltorbEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_ELECTRODE}),
    ),

    [SPECIES_ELECTRODE] = HARD_MODE(
        .abilities = {ABILITY_SOUNDPROOF,  ABILITY_GALVANIZE,  ABILITY_STATIC },
        .levelUpLearnset = sElectrodeLevelUpLearnset,
        .teachableLearnset = sElectrodeTeachableLearnset,
        .eggMoveLearnset = sVoltorbEggMoveLearnset,
    ),

    [SPECIES_VOLTORB_HISUI] = HARD_MODE(
        .abilities = {ABILITY_SOUNDPROOF,  ABILITY_STATIC,  ABILITY_RECKLESS },
        .levelUpLearnset = sVoltorbHisuiLevelUpLearnset,
        .teachableLearnset = sVoltorbHisuiTeachableLearnset,
        .eggMoveLearnset = sVoltorbHisuiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_ELECTRODE_HISUI}),
    ),

    [SPECIES_ELECTRODE_HISUI] = HARD_MODE(
        .abilities = {ABILITY_SOUNDPROOF,  ABILITY_STATIC,  ABILITY_RECKLESS },
        .levelUpLearnset = sElectrodeHisuiLevelUpLearnset,
        .teachableLearnset = sElectrodeHisuiTeachableLearnset,
        .eggMoveLearnset = sVoltorbHisuiEggMoveLearnset,
    ),

    [SPECIES_EXEGGCUTE] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_HARVEST,  ABILITY_NONE },
        .levelUpLearnset = sExeggcuteLevelUpLearnset,
        .teachableLearnset = sExeggcuteTeachableLearnset,
        .eggMoveLearnset = sExeggcuteEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_EXEGGUTOR}, {EVO_ITEM, ITEM_SUN_STONE, SPECIES_EXEGGUTOR_ALOLA}),
    ),

    [SPECIES_EXEGGUTOR] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_HARVEST,  ABILITY_NONE },
        .levelUpLearnset = sExeggutorLevelUpLearnset,
        .teachableLearnset = sExeggutorTeachableLearnset,
        .eggMoveLearnset = sExeggcuteEggMoveLearnset,
    ),

    [SPECIES_EXEGGUTOR_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_HARVEST,  ABILITY_NONE },
        .levelUpLearnset = sExeggutorAlolaLevelUpLearnset,
        .teachableLearnset = sExeggutorAlolaTeachableLearnset,
        .eggMoveLearnset = sExeggcuteEggMoveLearnset,
    ),

    [SPECIES_CUBONE] = HARD_MODE(
        .abilities = {ABILITY_BONE_ZONE,  ABILITY_BATTLE_ARMOR,  ABILITY_ROCK_HEAD },
        .levelUpLearnset = sCuboneLevelUpLearnset,
        .teachableLearnset = sCuboneTeachableLearnset,
        .eggMoveLearnset = sCuboneEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_MAROWAK}, {EVO_ITEM, ITEM_DUSK_STONE, SPECIES_MAROWAK_ALOLA}, {EVO_NONE, 0, SPECIES_MAROWAK_ALOLA_TOTEM}),
    ),

    [SPECIES_MAROWAK] = HARD_MODE(
        .abilities = {ABILITY_BONE_ZONE,  ABILITY_BATTLE_ARMOR,  ABILITY_ROCK_HEAD },
        .levelUpLearnset = sMarowakLevelUpLearnset,
        .teachableLearnset = sMarowakTeachableLearnset,
        .eggMoveLearnset = sCuboneEggMoveLearnset,
    ),

    [SPECIES_MAROWAK_ALOLA] = HARD_MODE(
        .abilities = {ABILITY_BONE_ZONE,  ABILITY_ROCK_HEAD,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sMarowakAlolaLevelUpLearnset,
        .teachableLearnset = sMarowakAlolaTeachableLearnset,
        .eggMoveLearnset = sCuboneEggMoveLearnset,
    ),

    [SPECIES_TYROGUE] = HARD_MODE(
        .abilities = {ABILITY_GUTS,  ABILITY_STEADFAST,  ABILITY_VITAL_SPIRIT },
        .levelUpLearnset = sTyrogueLevelUpLearnset,
        .teachableLearnset = sTyrogueTeachableLearnset,
        .eggMoveLearnset = sTyrogueEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_ATK_LT_DEF, 20, SPECIES_HITMONCHAN}, {EVO_LEVEL_ATK_GT_DEF, 20, SPECIES_HITMONLEE}, {EVO_LEVEL_ATK_EQ_DEF, 20, SPECIES_HITMONTOP}),
    ),

    [SPECIES_HITMONLEE] = HARD_MODE(
        .abilities = {ABILITY_STRIKER,  ABILITY_RECKLESS,  ABILITY_UNBURDEN },
        .levelUpLearnset = sHitmonleeLevelUpLearnset,
        .teachableLearnset = sHitmonleeTeachableLearnset,
        .eggMoveLearnset = sTyrogueEggMoveLearnset,
    ),

    [SPECIES_HITMONCHAN] = HARD_MODE(
        .abilities = {ABILITY_IRON_FIST,  ABILITY_IRON_FIST,  ABILITY_INNER_FOCUS },
        .levelUpLearnset = sHitmonchanLevelUpLearnset,
        .teachableLearnset = sHitmonchanTeachableLearnset,
        .eggMoveLearnset = sTyrogueEggMoveLearnset,
    ),

    [SPECIES_HITMONTOP] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_TECHNICIAN,  ABILITY_STEADFAST },
        .levelUpLearnset = sHitmontopLevelUpLearnset,
        .teachableLearnset = sHitmontopTeachableLearnset,
        .eggMoveLearnset = sTyrogueEggMoveLearnset,
    ),

    [SPECIES_LICKITUNG] = HARD_MODE(
        .abilities = {ABILITY_OWN_TEMPO,  ABILITY_OBLIVIOUS,  ABILITY_CLOUD_NINE },
        .levelUpLearnset = sLickitungLevelUpLearnset,
        .teachableLearnset = sLickitungTeachableLearnset,
        .eggMoveLearnset = sLickitungEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_LICKILICKY}, {EVO_MOVE, MOVE_ROLLOUT, SPECIES_LICKILICKY}),
    ),

    [SPECIES_LICKILICKY] = HARD_MODE(
        .abilities = {ABILITY_OWN_TEMPO,  ABILITY_UNAWARE,  ABILITY_CLOUD_NINE },
        .levelUpLearnset = sLickilickyLevelUpLearnset,
        .teachableLearnset = sLickilickyTeachableLearnset,
        .eggMoveLearnset = sLickitungEggMoveLearnset,
    ),

    [SPECIES_KOFFING] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NEUTRALIZING_GAS },
        .levelUpLearnset = sKoffingLevelUpLearnset,
        .teachableLearnset = sKoffingTeachableLearnset,
        .eggMoveLearnset = sKoffingEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_DAY, 35, SPECIES_WEEZING}, {EVO_LEVEL_NIGHT, 35, SPECIES_WEEZING_GALAR}),
    ),

    [SPECIES_WEEZING] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NEUTRALIZING_GAS },
        .levelUpLearnset = sWeezingLevelUpLearnset,
        .teachableLearnset = sWeezingTeachableLearnset,
        .eggMoveLearnset = sKoffingEggMoveLearnset,
    ),

    [SPECIES_WEEZING_GALAR] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE, ABILITY_LEVITATE , ABILITY_NEUTRALIZING_GAS  },
        .levelUpLearnset = sWeezingGalarLevelUpLearnset,
        .teachableLearnset = sWeezingGalarTeachableLearnset,
        .eggMoveLearnset = sKoffingEggMoveLearnset,
    ),

    [SPECIES_RHYHORN] = HARD_MODE(
        .abilities = {ABILITY_RECKLESS,  ABILITY_ROCK_HEAD,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sRhyhornLevelUpLearnset,
        .teachableLearnset = sRhyhornTeachableLearnset,
        .eggMoveLearnset = sRhyhornEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_RHYDON}),
    ),

    [SPECIES_RHYDON] = HARD_MODE(
        .abilities = {ABILITY_RECKLESS,  ABILITY_ROCK_HEAD,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sRhydonLevelUpLearnset,
        .teachableLearnset = sRhydonTeachableLearnset,
        .eggMoveLearnset = sRhyhornEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_PROTECTOR, SPECIES_RHYPERIOR}, {EVO_MAPSEC, MAPSEC_MIRAGE_TOWER, SPECIES_RHYPERIOR}),
    ),

    [SPECIES_RHYPERIOR] = HARD_MODE(
        .abilities = {ABILITY_SOLID_ROCK,  ABILITY_SOLID_ROCK,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sRhyperiorLevelUpLearnset,
        .teachableLearnset = sRhyperiorTeachableLearnset,
        .eggMoveLearnset = sRhyhornEggMoveLearnset,
    ),

    [SPECIES_HAPPINY] = HARD_MODE(
        .abilities = {ABILITY_NATURAL_CURE,  ABILITY_SERENE_GRACE,  ABILITY_FRIEND_GUARD },
        .levelUpLearnset = sHappinyLevelUpLearnset,
        .teachableLearnset = sHappinyTeachableLearnset,
        .eggMoveLearnset = sHappinyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_CHANSEY}),
    ),

    [SPECIES_CHANSEY] = HARD_MODE(
        .abilities = {ABILITY_NATURAL_CURE,  ABILITY_SERENE_GRACE,  ABILITY_NONE },
        .levelUpLearnset = sChanseyLevelUpLearnset,
        .teachableLearnset = sChanseyTeachableLearnset,
        .eggMoveLearnset = sChanseyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_BLISSEY}),
    ),

    [SPECIES_BLISSEY] = HARD_MODE(
        .abilities = {ABILITY_NATURAL_CURE,  ABILITY_SERENE_GRACE,  ABILITY_NONE },
        .levelUpLearnset = sBlisseyLevelUpLearnset,
        .teachableLearnset = sBlisseyTeachableLearnset,
        .eggMoveLearnset = sChanseyEggMoveLearnset,
    ),

    [SPECIES_TANGELA] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL,  ABILITY_REGENERATOR },
        .levelUpLearnset = sTangelaLevelUpLearnset,
        .teachableLearnset = sTangelaTeachableLearnset,
        .eggMoveLearnset = sTangelaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_TANGROWTH}),
    ),

    [SPECIES_TANGROWTH] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL,  ABILITY_REGENERATOR },
        .levelUpLearnset = sTangrowthLevelUpLearnset,
        .teachableLearnset = sTangrowthTeachableLearnset,
        .eggMoveLearnset = sTangelaEggMoveLearnset,
    ),

    [SPECIES_KANGASKHAN] = HARD_MODE(
        .abilities = {ABILITY_INNER_FOCUS,  ABILITY_SCRAPPY,  ABILITY_EARLY_BIRD },
        .levelUpLearnset = sKangaskhanLevelUpLearnset,
        .teachableLearnset = sKangaskhanTeachableLearnset,
        .eggMoveLearnset = sKangaskhanEggMoveLearnset,
    ),

    [SPECIES_KANGASKHAN_MEGA] = HARD_MODE(
        .abilities = {ABILITY_PARENTAL_BOND,  ABILITY_PARENTAL_BOND,  ABILITY_PARENTAL_BOND },
        .levelUpLearnset = sKangaskhanLevelUpLearnset,
        .teachableLearnset = sKangaskhanTeachableLearnset,
        .eggMoveLearnset = sKangaskhanEggMoveLearnset,
    ),

    [SPECIES_HORSEA] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_SNIPER,  ABILITY_DAMP },
        .levelUpLearnset = sHorseaLevelUpLearnset,
        .teachableLearnset = sHorseaTeachableLearnset,
        .eggMoveLearnset = sHorseaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_SEADRA}),
    ),

    [SPECIES_SEADRA] = HARD_MODE(
        .abilities = {ABILITY_POISON_TOUCH,  ABILITY_SNIPER,  ABILITY_DAMP },
        .levelUpLearnset = sSeadraLevelUpLearnset,
        .teachableLearnset = sSeadraTeachableLearnset,
        .eggMoveLearnset = sHorseaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_DRAGON_SCALE, SPECIES_KINGDRA}, {EVO_ITEM, ITEM_PRISM_SCALE, SPECIES_KINGDRA}),
    ),

    [SPECIES_KINGDRA] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_SNIPER,  ABILITY_DAMP },
        .levelUpLearnset = sKingdraLevelUpLearnset,
        .teachableLearnset = sKingdraTeachableLearnset,
        .eggMoveLearnset = sHorseaEggMoveLearnset,
    ),

    [SPECIES_GOLDEEN] = HARD_MODE(
        .abilities = {ABILITY_LIGHTNING_ROD,  ABILITY_WATER_VEIL,  ABILITY_RAIN_DISH },
        .levelUpLearnset = sGoldeenLevelUpLearnset,
        .teachableLearnset = sGoldeenTeachableLearnset,
        .eggMoveLearnset = sGoldeenEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_SEAKING}),
    ),

    [SPECIES_SEAKING] = HARD_MODE(
        .abilities = {ABILITY_LIGHTNING_ROD,  ABILITY_WATER_VEIL,  ABILITY_RAIN_DISH },
        .levelUpLearnset = sSeakingLevelUpLearnset,
        .teachableLearnset = sSeakingTeachableLearnset,
        .eggMoveLearnset = sGoldeenEggMoveLearnset,
    ),

    [SPECIES_STARYU] = HARD_MODE(
        .abilities = {ABILITY_ILLUMINATE,  ABILITY_NATURAL_CURE,  ABILITY_ANALYTIC },
        .levelUpLearnset = sStaryuLevelUpLearnset,
        .teachableLearnset = sStaryuTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_STARMIE}),
    ),

    [SPECIES_STARMIE] = HARD_MODE(
        .abilities = {ABILITY_ILLUMINATE,  ABILITY_NATURAL_CURE,  ABILITY_ANALYTIC },
        .levelUpLearnset = sStarmieLevelUpLearnset,
        .teachableLearnset = sStarmieTeachableLearnset,
    ),

    [SPECIES_STARMIE_MEGA] = HARD_MODE(
        .abilities = { ABILITY_HUGE_POWER, ABILITY_HUGE_POWER, ABILITY_HUGE_POWER },
        .levelUpLearnset = sStarmieLevelUpLearnset,
        .teachableLearnset = sStarmieTeachableLearnset,
    ),

    [SPECIES_MIME_JR] = HARD_MODE(
        .abilities = {ABILITY_SOUNDPROOF,  ABILITY_FILTER,  ABILITY_TECHNICIAN },
        .levelUpLearnset = sMimeJrLevelUpLearnset,
        .teachableLearnset = sMimeJrTeachableLearnset,
        .eggMoveLearnset = sMimeJrEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_MIMIC, SPECIES_MR_MIME}, {EVO_ITEM, ITEM_ICE_STONE, SPECIES_MR_MIME_GALAR}),
    ),

    [SPECIES_MR_MIME] = HARD_MODE(
        .abilities = {ABILITY_SOUNDPROOF,  ABILITY_FILTER,  ABILITY_MISTY_SURGE },
        .levelUpLearnset = sMrMimeLevelUpLearnset,
        .teachableLearnset = sMrMimeTeachableLearnset,
        .eggMoveLearnset = sMrMimeEggMoveLearnset,
    ),

    [SPECIES_MR_MIME_GALAR] = HARD_MODE(
        .abilities = {ABILITY_VITAL_SPIRIT,  ABILITY_SCREEN_CLEANER,  ABILITY_ICE_BODY },
        .levelUpLearnset = sMrMimeGalarLevelUpLearnset,
        .teachableLearnset = sMrMimeGalarTeachableLearnset,
        .eggMoveLearnset = sMrMimeGalarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_MR_RIME}),
    ),

    [SPECIES_MR_RIME] = HARD_MODE(
        .abilities = {ABILITY_SCREEN_CLEANER,  ABILITY_NONE,  ABILITY_ICE_BODY },
        .levelUpLearnset = sMrRimeLevelUpLearnset,
        .teachableLearnset = sMrRimeTeachableLearnset,
        .eggMoveLearnset = sMrMimeGalarEggMoveLearnset,
    ),

    [SPECIES_SCYTHER] = HARD_MODE(
        .abilities = {ABILITY_SWARM,  ABILITY_TECHNICIAN,  ABILITY_STEADFAST },
        .levelUpLearnset = sScytherLevelUpLearnset,
        .teachableLearnset = sScytherTeachableLearnset,
        .eggMoveLearnset = sScytherEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_SCIZOR}, {EVO_ITEM, ITEM_KINGS_ROCK, SPECIES_KLEAVOR}, {EVO_ITEM, ITEM_METAL_COAT, SPECIES_SCIZOR}),
    ),

    [SPECIES_SCIZOR] = HARD_MODE(
        .abilities = {ABILITY_SWARM,  ABILITY_TECHNICIAN,  ABILITY_NONE },
        .levelUpLearnset = sScizorLevelUpLearnset,
        .teachableLearnset = sScizorTeachableLearnset,
        .eggMoveLearnset = sScytherEggMoveLearnset,
    ),

    [SPECIES_SCIZOR_MEGA] = HARD_MODE(
        .abilities = {ABILITY_TECHNICIAN,  ABILITY_TECHNICIAN,  ABILITY_TECHNICIAN },
        .levelUpLearnset = sScizorLevelUpLearnset,
        .teachableLearnset = sScizorTeachableLearnset,
    ),

    [SPECIES_KLEAVOR] = HARD_MODE(
        .abilities = {ABILITY_SHEER_FORCE,  ABILITY_SHARPNESS,  ABILITY_TECHNICIAN },
        .levelUpLearnset = sKleavorLevelUpLearnset,
        .teachableLearnset = sKleavorTeachableLearnset,
        .eggMoveLearnset = sScytherEggMoveLearnset,
    ),

    [SPECIES_SMOOCHUM] = HARD_MODE(
        .abilities = {ABILITY_OBLIVIOUS,  ABILITY_NONE,  ABILITY_HYDRATION },
        .levelUpLearnset = sSmoochumLevelUpLearnset,
        .teachableLearnset = sSmoochumTeachableLearnset,
        .eggMoveLearnset = sSmoochumEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_JYNX}),
    ),

    [SPECIES_JYNX] = HARD_MODE(
        .abilities = {ABILITY_RAIN_DISH,  ABILITY_NONE,  ABILITY_DRY_SKIN },
        .levelUpLearnset = sJynxLevelUpLearnset,
        .teachableLearnset = sJynxTeachableLearnset,
        .eggMoveLearnset = sSmoochumEggMoveLearnset,
    ),

    [SPECIES_ELEKID] = HARD_MODE(
        .abilities = {ABILITY_IRON_FIST,  ABILITY_VITAL_SPIRIT,  ABILITY_STATIC },
        .levelUpLearnset = sElekidLevelUpLearnset,
        .teachableLearnset = sElekidTeachableLearnset,
        .eggMoveLearnset = sElekidEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_ELECTABUZZ}),
    ),

    [SPECIES_ELECTABUZZ] = HARD_MODE(
        .abilities = {ABILITY_IRON_FIST,  ABILITY_VITAL_SPIRIT,  ABILITY_STATIC },
        .levelUpLearnset = sElectabuzzLevelUpLearnset,
        .teachableLearnset = sElectabuzzTeachableLearnset,
        .eggMoveLearnset = sElekidEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_ELECTIRIZER, SPECIES_ELECTIVIRE}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_ELECTIVIRE}),
    ),

    [SPECIES_ELECTIVIRE] = HARD_MODE(
        .abilities = {ABILITY_IRON_FIST,  ABILITY_VITAL_SPIRIT,  ABILITY_MOTOR_DRIVE },
        .levelUpLearnset = sElectivireLevelUpLearnset,
        .teachableLearnset = sElectivireTeachableLearnset,
        .eggMoveLearnset = sElekidEggMoveLearnset,
    ),

    [SPECIES_MAGBY] = HARD_MODE(
        .abilities = {ABILITY_FLAME_BODY,  ABILITY_FLAME_BODY,  ABILITY_VITAL_SPIRIT },
        .levelUpLearnset = sMagbyLevelUpLearnset,
        .teachableLearnset = sMagbyTeachableLearnset,
        .eggMoveLearnset = sMagbyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_MAGMAR}),
    ),

    [SPECIES_MAGMAR] = HARD_MODE(
        .abilities = {ABILITY_FLAME_BODY,  ABILITY_FLAME_BODY,  ABILITY_VITAL_SPIRIT },
        .levelUpLearnset = sMagmarLevelUpLearnset,
        .teachableLearnset = sMagmarTeachableLearnset,
        .eggMoveLearnset = sMagbyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_MAGMARIZER, SPECIES_MAGMORTAR}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_MAGMORTAR}),
    ),

    [SPECIES_MAGMORTAR] = HARD_MODE(
        .abilities = {ABILITY_MEGA_LAUNCHER,  ABILITY_MEGA_LAUNCHER,  ABILITY_QUICK_DRAW },
        .levelUpLearnset = sMagmortarLevelUpLearnset,
        .teachableLearnset = sMagmortarTeachableLearnset,
        .eggMoveLearnset = sMagbyEggMoveLearnset,
    ),

    [SPECIES_PINSIR] = HARD_MODE(
        .abilities = {ABILITY_HYPER_CUTTER,  ABILITY_MOLD_BREAKER,  ABILITY_MOXIE },
        .levelUpLearnset = sPinsirLevelUpLearnset,
        .teachableLearnset = sPinsirTeachableLearnset,
        .eggMoveLearnset = sPinsirEggMoveLearnset,
    ),

    [SPECIES_PINSIR_MEGA] = HARD_MODE(
        .abilities = {ABILITY_AERILATE,  ABILITY_AERILATE,  ABILITY_AERILATE },
        .levelUpLearnset = sPinsirLevelUpLearnset,
        .teachableLearnset = sPinsirTeachableLearnset,
        .eggMoveLearnset = sPinsirEggMoveLearnset,
    ),

    [SPECIES_TAUROS] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_SHEER_FORCE,  ABILITY_ANGER_POINT },
        .levelUpLearnset = sTaurosLevelUpLearnset,
        .teachableLearnset = sTaurosTeachableLearnset,
    ),

    [SPECIES_TAUROS_PALDEA_COMBAT] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_SHEER_FORCE,  ABILITY_ANGER_POINT },
        .levelUpLearnset = sTaurosPaldeaCombatLevelUpLearnset,
        .teachableLearnset = sTaurosPaldeaCombatTeachableLearnset,
        .eggMoveLearnset = sTaurosPaldeaCombatEggMoveLearnset,
    ),

    [SPECIES_TAUROS_PALDEA_BLAZE] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_INTIMIDATE,  ABILITY_ANGER_POINT },
        .levelUpLearnset = sTaurosPaldeaBlazeLevelUpLearnset,
        .teachableLearnset = sTaurosPaldeaBlazeTeachableLearnset,
        .eggMoveLearnset = sTaurosPaldeaBlazeEggMoveLearnset,
    ),

    [SPECIES_TAUROS_PALDEA_AQUA] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_INTIMIDATE,  ABILITY_ANGER_POINT },
        .levelUpLearnset = sTaurosPaldeaAquaLevelUpLearnset,
        .teachableLearnset = sTaurosPaldeaAquaTeachableLearnset,
        .eggMoveLearnset = sTaurosPaldeaAquaEggMoveLearnset,
    ),

    [SPECIES_MAGIKARP] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_NONE,  ABILITY_HYDRATION },
        .levelUpLearnset = sMagikarpLevelUpLearnset,
        .teachableLearnset = sMagikarpTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_GYARADOS}),
    ),

    [SPECIES_GYARADOS] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_NONE,  ABILITY_MOXIE },
        .levelUpLearnset = sGyaradosLevelUpLearnset,
        .teachableLearnset = sGyaradosTeachableLearnset,
    ),

    [SPECIES_GYARADOS_MEGA] = HARD_MODE(
        .abilities = {ABILITY_MOLD_BREAKER,  ABILITY_MOLD_BREAKER,  ABILITY_MOLD_BREAKER },
        .levelUpLearnset = sGyaradosLevelUpLearnset,
        .teachableLearnset = sGyaradosTeachableLearnset,
    ),

    [SPECIES_LAPRAS] = HARD_MODE(
        .abilities = {ABILITY_HYDRATION,  ABILITY_NONE,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sLaprasLevelUpLearnset,
        .teachableLearnset = sLaprasTeachableLearnset,
        .eggMoveLearnset = sLaprasEggMoveLearnset,
    ),

    [SPECIES_LAPRAS_MEGA] = HARD_MODE(
        .abilities = {ABILITY_LIQUID_VOICE,  ABILITY_LIQUID_VOICE,  ABILITY_LIQUID_VOICE },
        .levelUpLearnset = sLaprasLevelUpLearnset,
        .teachableLearnset = sLaprasTeachableLearnset,
        .eggMoveLearnset = sLaprasEggMoveLearnset,
    ),

    [SPECIES_DITTO] = HARD_MODE(
        .abilities = {ABILITY_LIMBER,  ABILITY_NONE,  ABILITY_IMPOSTER },
        .levelUpLearnset = sDittoLevelUpLearnset,
        .teachableLearnset = sDittoTeachableLearnset,
    ),

    [SPECIES_EEVEE] = HARD_MODE(
        .abilities = {ABILITY_RUN_AWAY,  ABILITY_ADAPTABILITY,  ABILITY_NONE },
        .levelUpLearnset = sEeveeLevelUpLearnset,
        .teachableLearnset = sEeveeTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
    ),

    [SPECIES_EEVEE_STARTER] = HARD_MODE(
        .abilities = {ABILITY_RUN_AWAY,  ABILITY_ADAPTABILITY,  ABILITY_ANTICIPATION },
        .levelUpLearnset = sEeveeLevelUpLearnset,
        .teachableLearnset = sEeveeTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
    ),

    [SPECIES_VAPOREON] = HARD_MODE(
        .abilities = {ABILITY_RAIN_DISH,  ABILITY_RAIN_DISH,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sVaporeonLevelUpLearnset,
        .teachableLearnset = sVaporeonTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
    ),

    [SPECIES_JOLTEON] = HARD_MODE(
        .abilities = {ABILITY_QUICK_FEET,  ABILITY_QUICK_FEET,  ABILITY_VOLT_ABSORB },
        .levelUpLearnset = sJolteonLevelUpLearnset,
        .teachableLearnset = sJolteonTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
    ),

    [SPECIES_FLAREON] = HARD_MODE(
        .abilities = {ABILITY_TOXIC_BOOST,  ABILITY_TOXIC_BOOST,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sFlareonLevelUpLearnset,
        .teachableLearnset = sFlareonTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
    ),

    [SPECIES_ESPEON] = HARD_MODE(
        .abilities = {ABILITY_MAGIC_GUARD,  ABILITY_MAGIC_GUARD,  ABILITY_NONE },
        .levelUpLearnset = sEspeonLevelUpLearnset,
        .teachableLearnset = sEspeonTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
    ),

    [SPECIES_UMBREON] = HARD_MODE(
        .abilities = {ABILITY_SYNCHRONIZE,  ABILITY_SYNCHRONIZE,  ABILITY_INNER_FOCUS },
        .levelUpLearnset = sUmbreonLevelUpLearnset,
        .teachableLearnset = sUmbreonTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
    ),

    [SPECIES_LEAFEON] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL,  ABILITY_SAP_SIPPER },
        .levelUpLearnset = sLeafeonLevelUpLearnset,
        .teachableLearnset = sLeafeonTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
    ),

    [SPECIES_GLACEON] = HARD_MODE(
        .abilities = {ABILITY_ICE_BODY,  ABILITY_SLUSH_RUSH,  ABILITY_SLUSH_RUSH },
        .levelUpLearnset = sGlaceonLevelUpLearnset,
        .teachableLearnset = sGlaceonTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
    ),

    [SPECIES_SYLVEON] = HARD_MODE(
        .abilities = {ABILITY_PIXILATE,  ABILITY_PIXILATE,  ABILITY_CUTE_CHARM },
        .levelUpLearnset = sSylveonLevelUpLearnset,
        .teachableLearnset = sSylveonTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
    ),

    [SPECIES_PORYGON] = HARD_MODE(
        .abilities = {ABILITY_TRACE,  ABILITY_ANALYTIC,  ABILITY_DOWNLOAD },
        .levelUpLearnset = sPorygonLevelUpLearnset,
        .teachableLearnset = sPorygonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_PORYGON2}),
    ),

    [SPECIES_PORYGON2] = HARD_MODE(
        .abilities = {ABILITY_TRACE,  ABILITY_ANALYTIC,  ABILITY_DOWNLOAD },
        .levelUpLearnset = sPorygon2LevelUpLearnset,
        .teachableLearnset = sPorygon2TeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LINKING_CORD, SPECIES_PORYGON_Z}),
    ),

    [SPECIES_PORYGON_Z] = HARD_MODE(
        .abilities = {ABILITY_ADAPTABILITY, ABILITY_ANALYTIC,  ABILITY_DOWNLOAD },
        .levelUpLearnset = sPorygonZLevelUpLearnset,
        .teachableLearnset = sPorygonZTeachableLearnset,
    ),

    [SPECIES_OMANYTE] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_SHELL_ARMOR,  ABILITY_WEAK_ARMOR },
        .levelUpLearnset = sOmanyteLevelUpLearnset,
        .teachableLearnset = sOmanyteTeachableLearnset,
        .eggMoveLearnset = sOmanyteEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_OMASTAR}),
    ),

    [SPECIES_OMASTAR] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_SHELL_ARMOR,  ABILITY_WEAK_ARMOR },
        .levelUpLearnset = sOmastarLevelUpLearnset,
        .teachableLearnset = sOmastarTeachableLearnset,
        .eggMoveLearnset = sOmanyteEggMoveLearnset,
    ),

    [SPECIES_KABUTO] = HARD_MODE(
        .abilities = {ABILITY_WEAK_ARMOR,  ABILITY_BATTLE_ARMOR,  ABILITY_SWIFT_SWIM },
        .levelUpLearnset = sKabutoLevelUpLearnset,
        .teachableLearnset = sKabutoTeachableLearnset,
        .eggMoveLearnset = sKabutoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_KABUTOPS}),
    ),

    [SPECIES_KABUTOPS] = HARD_MODE(
        .abilities = {ABILITY_SHARPNESS,  ABILITY_BATTLE_ARMOR,  ABILITY_SWIFT_SWIM },
        .levelUpLearnset = sKabutopsLevelUpLearnset,
        .teachableLearnset = sKabutopsTeachableLearnset,
        .eggMoveLearnset = sKabutoEggMoveLearnset,
    ),

    [SPECIES_AERODACTYL] = HARD_MODE(
        .abilities = {ABILITY_ROCK_HEAD,  ABILITY_UNNERVE,  ABILITY_PRESSURE },
        .levelUpLearnset = sAerodactylLevelUpLearnset,
        .teachableLearnset = sAerodactylTeachableLearnset,
        .eggMoveLearnset = sAerodactylEggMoveLearnset,
    ),

    [SPECIES_AERODACTYL_MEGA] = HARD_MODE(
        .abilities = {ABILITY_TOUGH_CLAWS,  ABILITY_TOUGH_CLAWS,  ABILITY_TOUGH_CLAWS },
        .levelUpLearnset = sAerodactylLevelUpLearnset,
        .teachableLearnset = sAerodactylTeachableLearnset,
        .eggMoveLearnset = sAerodactylEggMoveLearnset,
    ),

    [SPECIES_MUNCHLAX] = HARD_MODE(
        .abilities = {ABILITY_PICKUP,  ABILITY_THICK_FAT,  ABILITY_GLUTTONY },
        .levelUpLearnset = sMunchlaxLevelUpLearnset,
        .teachableLearnset = sMunchlaxTeachableLearnset,
        .eggMoveLearnset = sMunchlaxEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SNORLAX}),
    ),

    [SPECIES_SNORLAX] = HARD_MODE(
        .abilities = {ABILITY_IMMUNITY,  ABILITY_THICK_FAT,  ABILITY_GLUTTONY },
        .levelUpLearnset = sSnorlaxLevelUpLearnset,
        .teachableLearnset = sSnorlaxTeachableLearnset,
        .eggMoveLearnset = sSnorlaxEggMoveLearnset,
    ),

    [SPECIES_SNORLAX_MEGA] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_THICK_FAT,  ABILITY_THICK_FAT },
        .levelUpLearnset = sSnorlaxLevelUpLearnset,
        .teachableLearnset = sSnorlaxTeachableLearnset,
        .eggMoveLearnset = sSnorlaxEggMoveLearnset,
    ),

    [SPECIES_ARTICUNO] = HARD_MODE(
        .abilities = {ABILITY_SHIELD_DUST,  ABILITY_NONE,  ABILITY_PRESSURE },
        .levelUpLearnset = sArticunoLevelUpLearnset,
        .teachableLearnset = sArticunoTeachableLearnset,
    ),

    [SPECIES_ARTICUNO_GALAR] = HARD_MODE(
        .abilities = {ABILITY_CLEAR_BODY,  ABILITY_NONE,  ABILITY_COMPETITIVE },
        .levelUpLearnset = sArticunoGalarLevelUpLearnset,
        .teachableLearnset = sArticunoGalarTeachableLearnset,
    ),

    [SPECIES_ZAPDOS] = HARD_MODE(
        .abilities = {ABILITY_STATIC,  ABILITY_NONE, ABILITY_PRESSURE},
        .levelUpLearnset = sZapdosLevelUpLearnset,
        .teachableLearnset = sZapdosTeachableLearnset,
    ),

    [SPECIES_ZAPDOS_GALAR] = HARD_MODE(
        .abilities = {ABILITY_HYPER_CUTTER,  ABILITY_NONE,  ABILITY_DEFIANT },
        .levelUpLearnset = sZapdosGalarLevelUpLearnset,
        .teachableLearnset = sZapdosGalarTeachableLearnset,
    ),

    [SPECIES_MOLTRES] = HARD_MODE(
        .abilities = {ABILITY_FLAME_BODY,  ABILITY_NONE,  ABILITY_PRESSURE },
        .levelUpLearnset = sMoltresLevelUpLearnset,
        .teachableLearnset = sMoltresTeachableLearnset,
    ),

    [SPECIES_MOLTRES_GALAR] = HARD_MODE(
        .abilities = {ABILITY_BERSERK,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMoltresGalarLevelUpLearnset,
        .teachableLearnset = sMoltresGalarTeachableLearnset,
    ),

    [SPECIES_DRATINI] = HARD_MODE(
        .abilities = {ABILITY_MARVEL_SCALE,  ABILITY_NONE,  ABILITY_SHED_SKIN },
        .levelUpLearnset = sDratiniLevelUpLearnset,
        .teachableLearnset = sDratiniTeachableLearnset,
        .eggMoveLearnset = sDratiniEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_DRAGONAIR}),
    ),

    [SPECIES_DRAGONAIR] = HARD_MODE(
        .abilities = {ABILITY_MARVEL_SCALE,  ABILITY_NONE,  ABILITY_SHED_SKIN },
        .levelUpLearnset = sDragonairLevelUpLearnset,
        .teachableLearnset = sDragonairTeachableLearnset,
        .eggMoveLearnset = sDratiniEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 55, SPECIES_DRAGONITE}),
    ),

    [SPECIES_DRAGONITE] = HARD_MODE(
        .abilities = {ABILITY_INNER_FOCUS,  ABILITY_NONE,  ABILITY_MULTISCALE },
        .levelUpLearnset = sDragoniteLevelUpLearnset,
        .teachableLearnset = sDragoniteTeachableLearnset,
        .eggMoveLearnset = sDratiniEggMoveLearnset,
    ),

    [SPECIES_DRAGONITE_MEGA] = HARD_MODE(
        .abilities = { ABILITY_MULTISCALE, ABILITY_NONE, ABILITY_MULTISCALE },
        .levelUpLearnset = sDragoniteLevelUpLearnset,
        .teachableLearnset = sDragoniteTeachableLearnset,
    ),

    [SPECIES_MEW] = HARD_MODE(
        .abilities = {ABILITY_SYNCHRONIZE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMewLevelUpLearnset,
        .teachableLearnset = sMewTeachableLearnset,
    ),