[SPECIES_TREECKO] = HARD_MODE(
        .abilities = {ABILITY_OVERGROW,  ABILITY_NONE,  ABILITY_UNBURDEN },
        .levelUpLearnset = sTreeckoLevelUpLearnset,
        .teachableLearnset = sTreeckoTeachableLearnset,
        .eggMoveLearnset = sTreeckoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_GROVYLE}),
    ),

    [SPECIES_GROVYLE] = HARD_MODE(
        .abilities = {ABILITY_OVERGROW,  ABILITY_NONE,  ABILITY_UNBURDEN },
        .levelUpLearnset = sGrovyleLevelUpLearnset,
        .teachableLearnset = sGrovyleTeachableLearnset,
        .eggMoveLearnset = sTreeckoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SCEPTILE}),
    ),

    [SPECIES_SCEPTILE] = HARD_MODE(
        .abilities = {ABILITY_OVERGROW,  ABILITY_NONE,  ABILITY_UNBURDEN },
        .levelUpLearnset = sSceptileLevelUpLearnset,
        .teachableLearnset = sSceptileTeachableLearnset,
        .eggMoveLearnset = sTreeckoEggMoveLearnset,
    ),

    [SPECIES_SCEPTILE_MEGA] = HARD_MODE(
        .abilities = {ABILITY_TECHNICIAN,  ABILITY_TECHNICIAN,  ABILITY_TECHNICIAN },
        .levelUpLearnset = sSceptileLevelUpLearnset,
        .teachableLearnset = sSceptileTeachableLearnset,
    ),

    [SPECIES_TORCHIC] = HARD_MODE(
        .abilities = {ABILITY_BLAZE,  ABILITY_STRIKER,  ABILITY_STRIKER },
        .levelUpLearnset = sTorchicLevelUpLearnset,
        .teachableLearnset = sTorchicTeachableLearnset,
        .eggMoveLearnset = sTorchicEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_COMBUSKEN}),
    ),

    [SPECIES_COMBUSKEN] = HARD_MODE(
        .abilities = {ABILITY_BLAZE,  ABILITY_STRIKER,  ABILITY_STRIKER },
        .levelUpLearnset = sCombuskenLevelUpLearnset,
        .teachableLearnset = sCombuskenTeachableLearnset,
        .eggMoveLearnset = sTorchicEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_BLAZIKEN}),
    ),

    [SPECIES_BLAZIKEN] = HARD_MODE(
        .abilities = {ABILITY_BLAZE,  ABILITY_STRIKER,  ABILITY_STRIKER },
        .levelUpLearnset = sBlazikenLevelUpLearnset,
        .teachableLearnset = sBlazikenTeachableLearnset,
        .eggMoveLearnset = sTorchicEggMoveLearnset,
    ),

    [SPECIES_BLAZIKEN_MEGA] = HARD_MODE(
        .abilities = {ABILITY_STRIKER,  ABILITY_STRIKER,  ABILITY_STRIKER },
        .levelUpLearnset = sBlazikenLevelUpLearnset,
        .teachableLearnset = sBlazikenTeachableLearnset,
    ),

    [SPECIES_MUDKIP] = HARD_MODE(
        .abilities = {ABILITY_TORRENT,  ABILITY_NONE,  ABILITY_DAMP },
        .levelUpLearnset = sMudkipLevelUpLearnset,
        .teachableLearnset = sMudkipTeachableLearnset,
        .eggMoveLearnset = sMudkipEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_MARSHTOMP}),
    ),

    [SPECIES_MARSHTOMP] = HARD_MODE(
        .abilities = {ABILITY_TORRENT,  ABILITY_NONE,  ABILITY_DAMP },
        .levelUpLearnset = sMarshtompLevelUpLearnset,
        .teachableLearnset = sMarshtompTeachableLearnset,
        .eggMoveLearnset = sMudkipEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SWAMPERT}),
    ),

    [SPECIES_SWAMPERT] = HARD_MODE(
        .abilities = {ABILITY_TORRENT,  ABILITY_NONE,  ABILITY_DAMP },
        .levelUpLearnset = sSwampertLevelUpLearnset,
        .teachableLearnset = sSwampertTeachableLearnset,
        .eggMoveLearnset = sMudkipEggMoveLearnset,
    ),

    [SPECIES_SWAMPERT_MEGA] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_SWIFT_SWIM,  ABILITY_SWIFT_SWIM },
        .levelUpLearnset = sSwampertLevelUpLearnset,
        .teachableLearnset = sSwampertTeachableLearnset,
    ),

    [SPECIES_POOCHYENA] = HARD_MODE(
        .abilities = {ABILITY_RUN_AWAY,  ABILITY_QUICK_FEET,  ABILITY_MOXIE },
        .levelUpLearnset = sPoochyenaLevelUpLearnset,
        .teachableLearnset = sPoochyenaTeachableLearnset,
        .eggMoveLearnset = sPoochyenaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_MIGHTYENA}),
    ),

    [SPECIES_MIGHTYENA] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_STRONG_JAW,  ABILITY_MOXIE },
        .levelUpLearnset = sMightyenaLevelUpLearnset,
        .teachableLearnset = sMightyenaTeachableLearnset,
        .eggMoveLearnset = sPoochyenaEggMoveLearnset,
    ),

    [SPECIES_ZIGZAGOON] = HARD_MODE(
        .abilities = {ABILITY_QUICK_FEET,  ABILITY_QUICK_FEET,  ABILITY_GLUTTONY },
        .levelUpLearnset = sZigzagoonLevelUpLearnset,
        .teachableLearnset = sZigzagoonTeachableLearnset,
        .eggMoveLearnset = sZigzagoonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_LINOONE}),
    ),

    [SPECIES_LINOONE] = HARD_MODE(
        .abilities = {ABILITY_QUICK_FEET,  ABILITY_QUICK_FEET,  ABILITY_GLUTTONY },
        .levelUpLearnset = sLinooneLevelUpLearnset,
        .teachableLearnset = sLinooneTeachableLearnset,
        .eggMoveLearnset = sZigzagoonEggMoveLearnset,
    ),

    [SPECIES_ZIGZAGOON_GALAR] = HARD_MODE(
        .abilities = {ABILITY_QUICK_FEET,  ABILITY_QUICK_FEET,  ABILITY_GLUTTONY },
        .levelUpLearnset = sZigzagoonGalarLevelUpLearnset,
        .teachableLearnset = sZigzagoonGalarTeachableLearnset,
        .eggMoveLearnset = sZigzagoonGalarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_LINOONE_GALAR}),
    ),

    [SPECIES_LINOONE_GALAR] = HARD_MODE(
        .abilities = {ABILITY_QUICK_FEET,  ABILITY_QUICK_FEET,  ABILITY_GLUTTONY },
        .levelUpLearnset = sLinooneGalarLevelUpLearnset,
        .teachableLearnset = sLinooneGalarTeachableLearnset,
        .eggMoveLearnset = sZigzagoonGalarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_NIGHT, 35, SPECIES_OBSTAGOON}),
    ),

    [SPECIES_OBSTAGOON] = HARD_MODE(
        .abilities = {ABILITY_GUTS,  ABILITY_GUTS,  ABILITY_DEFIANT },
        .levelUpLearnset = sObstagoonLevelUpLearnset,
        .teachableLearnset = sObstagoonTeachableLearnset,
        .eggMoveLearnset = sZigzagoonGalarEggMoveLearnset,
    ),

    [SPECIES_WURMPLE] = HARD_MODE(
        .abilities = {ABILITY_SHIELD_DUST,  ABILITY_NONE,  ABILITY_RUN_AWAY },
        .levelUpLearnset = sWurmpleLevelUpLearnset,
        .teachableLearnset = sWurmpleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_SILCOON, 7, SPECIES_SILCOON}, {EVO_LEVEL_CASCOON, 7, SPECIES_CASCOON}),
    ),

    [SPECIES_SILCOON] = HARD_MODE(
        .abilities = {ABILITY_SHED_SKIN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSilcoonLevelUpLearnset,
        .teachableLearnset = sSilcoonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_BEAUTIFLY}),
    ),

    [SPECIES_BEAUTIFLY] = HARD_MODE(
        .abilities = {ABILITY_SWARM,  ABILITY_NONE,  ABILITY_RIVALRY },
        .levelUpLearnset = sBeautiflyLevelUpLearnset,
        .teachableLearnset = sBeautiflyTeachableLearnset,
    ),

    [SPECIES_CASCOON] = HARD_MODE(
        .abilities = {ABILITY_SHED_SKIN,  ABILITY_NONE,  ABILITY_RUN_AWAY },
        .levelUpLearnset = sCascoonLevelUpLearnset,
        .teachableLearnset = sCascoonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_DUSTOX}),
    ),

    [SPECIES_DUSTOX] = HARD_MODE(
        .abilities = {ABILITY_SHIELD_DUST,  ABILITY_COMPOUND_EYES,  ABILITY_NONE },
        .levelUpLearnset = sDustoxLevelUpLearnset,
        .teachableLearnset = sDustoxTeachableLearnset,
    ),

    [SPECIES_LOTAD] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_RAIN_DISH,  ABILITY_OWN_TEMPO },
        .levelUpLearnset = sLotadLevelUpLearnset,
        .teachableLearnset = sLotadTeachableLearnset,
        .eggMoveLearnset = sLotadEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_LOMBRE}),
    ),

    [SPECIES_LOMBRE] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_RAIN_DISH,  ABILITY_OWN_TEMPO },
        .levelUpLearnset = sLombreLevelUpLearnset,
        .teachableLearnset = sLombreTeachableLearnset,
        .eggMoveLearnset = sLotadEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_LUDICOLO}),
    ),

    [SPECIES_LUDICOLO] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_RAIN_DISH,  ABILITY_OWN_TEMPO },
        .levelUpLearnset = sLudicoloLevelUpLearnset,
        .teachableLearnset = sLudicoloTeachableLearnset,
        .eggMoveLearnset = sLotadEggMoveLearnset,
    ),

    [SPECIES_SEEDOT] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_EARLY_BIRD,  ABILITY_INFILTRATOR },
        .levelUpLearnset = sSeedotLevelUpLearnset,
        .teachableLearnset = sSeedotTeachableLearnset,
        .eggMoveLearnset = sSeedotEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_NUZLEAF}),
    ),

    [SPECIES_NUZLEAF] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_EARLY_BIRD,  ABILITY_INFILTRATOR },
        .levelUpLearnset = sNuzleafLevelUpLearnset,
        .teachableLearnset = sNuzleafTeachableLearnset,
        .eggMoveLearnset = sSeedotEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SHIFTRY}),
    ),

    [SPECIES_SHIFTRY] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_WIND_RIDER,  ABILITY_INFILTRATOR },
        .levelUpLearnset = sShiftryLevelUpLearnset,
        .teachableLearnset = sShiftryTeachableLearnset,
        .eggMoveLearnset = sSeedotEggMoveLearnset,
    ),

    [SPECIES_TAILLOW] = HARD_MODE(
        .abilities = {ABILITY_GUTS,  ABILITY_NONE,  ABILITY_SCRAPPY },
        .levelUpLearnset = sTaillowLevelUpLearnset,
        .teachableLearnset = sTaillowTeachableLearnset,
        .eggMoveLearnset = sTaillowEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_SWELLOW}),
    ),

    [SPECIES_SWELLOW] = HARD_MODE(
        .abilities = {ABILITY_GUTS,  ABILITY_NONE,  ABILITY_AERILATE },
        .levelUpLearnset = sSwellowLevelUpLearnset,
        .teachableLearnset = sSwellowTeachableLearnset,
        .eggMoveLearnset = sTaillowEggMoveLearnset,
    ),

    [SPECIES_WINGULL] = HARD_MODE(
        .abilities = {ABILITY_RAIN_DISH,  ABILITY_HYDRATION,  ABILITY_NONE },
        .levelUpLearnset = sWingullLevelUpLearnset,
        .teachableLearnset = sWingullTeachableLearnset,
        .eggMoveLearnset = sWingullEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_PELIPPER}),
    ),

    [SPECIES_PELIPPER] = HARD_MODE(
        .abilities = {ABILITY_ADAPTABILITY,  ABILITY_RAIN_DISH,  ABILITY_DRIZZLE },
        .levelUpLearnset = sPelipperLevelUpLearnset,
        .teachableLearnset = sPelipperTeachableLearnset,
        .eggMoveLearnset = sWingullEggMoveLearnset,
    ),

    [SPECIES_RALTS] = HARD_MODE(
        .abilities = {ABILITY_TRACE,  ABILITY_TRACE,  ABILITY_SYNCHRONIZE },
        .levelUpLearnset = sRaltsLevelUpLearnset,
        .teachableLearnset = sRaltsTeachableLearnset,
        .eggMoveLearnset = sRaltsEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_KIRLIA}),
    ),

    [SPECIES_KIRLIA] = HARD_MODE(
        .abilities = {ABILITY_TRACE,  ABILITY_TRACE,  ABILITY_SYNCHRONIZE },
        .levelUpLearnset = sKirliaLevelUpLearnset,
        .teachableLearnset = sKirliaTeachableLearnset,
        .eggMoveLearnset = sRaltsEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_GARDEVOIR}, {EVO_ITEM_MALE, ITEM_DAWN_STONE, SPECIES_GALLADE}),
    ),

    [SPECIES_GARDEVOIR] = HARD_MODE(
        .abilities = {ABILITY_TRACE,  ABILITY_TRACE,  ABILITY_SYNCHRONIZE },
        .levelUpLearnset = sGardevoirLevelUpLearnset,
        .teachableLearnset = sGardevoirTeachableLearnset,
        .eggMoveLearnset = sRaltsEggMoveLearnset,
    ),

    [SPECIES_GARDEVOIR_MEGA] = HARD_MODE(
        .abilities = {ABILITY_PIXILATE,  ABILITY_PIXILATE,  ABILITY_PIXILATE },
        .levelUpLearnset = sGardevoirLevelUpLearnset,
        .teachableLearnset = sGardevoirTeachableLearnset,
    ),

    [SPECIES_GALLADE] = HARD_MODE(
        .abilities = {ABILITY_STEADFAST,  ABILITY_JUSTIFIED,  ABILITY_SHARPNESS },
        .levelUpLearnset = sGalladeLevelUpLearnset,
        .teachableLearnset = sGalladeTeachableLearnset,
        .eggMoveLearnset = sRaltsEggMoveLearnset,
    ),

    [SPECIES_GALLADE_MEGA] = HARD_MODE(
        .abilities = {ABILITY_SHARPNESS,  ABILITY_SHARPNESS,  ABILITY_SHARPNESS },
        .levelUpLearnset = sGalladeLevelUpLearnset,
        .teachableLearnset = sGalladeTeachableLearnset,
    ),

    [SPECIES_SURSKIT] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_NONE,  ABILITY_RAIN_DISH },
        .levelUpLearnset = sSurskitLevelUpLearnset,
        .teachableLearnset = sSurskitTeachableLearnset,
        .eggMoveLearnset = sSurskitEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_MASQUERAIN}),
    ),

    [SPECIES_MASQUERAIN] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_NONE,  ABILITY_UNNERVE },
        .levelUpLearnset = sMasquerainLevelUpLearnset,
        .teachableLearnset = sMasquerainTeachableLearnset,
        .eggMoveLearnset = sSurskitEggMoveLearnset,
    ),

    [SPECIES_SHROOMISH] = HARD_MODE(
        .abilities = {ABILITY_QUICK_FEET,  ABILITY_POISON_HEAL,  ABILITY_EFFECT_SPORE },
        .levelUpLearnset = sShroomishLevelUpLearnset,
        .teachableLearnset = sShroomishTeachableLearnset,
        .eggMoveLearnset = sShroomishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_BRELOOM}),
    ),

    [SPECIES_BRELOOM] = HARD_MODE(
        .abilities = {ABILITY_TECHNICIAN,  ABILITY_POISON_HEAL,  ABILITY_EFFECT_SPORE },
        .levelUpLearnset = sBreloomLevelUpLearnset,
        .teachableLearnset = sBreloomTeachableLearnset,
        .eggMoveLearnset = sShroomishEggMoveLearnset,
    ),

    [SPECIES_SLAKOTH] = HARD_MODE(
        .abilities = {ABILITY_TRUANT,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSlakothLevelUpLearnset,
        .teachableLearnset = sSlakothTeachableLearnset,
        .eggMoveLearnset = sSlakothEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_VIGOROTH}),
    ),

    [SPECIES_VIGOROTH] = HARD_MODE(
        .abilities = {ABILITY_VITAL_SPIRIT,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sVigorothLevelUpLearnset,
        .teachableLearnset = sVigorothTeachableLearnset,
        .eggMoveLearnset = sSlakothEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SLAKING}),
    ),

    [SPECIES_SLAKING] = HARD_MODE(
        .abilities = {ABILITY_TRUANT,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSlakingLevelUpLearnset,
        .teachableLearnset = sSlakingTeachableLearnset,
        .eggMoveLearnset = sSlakothEggMoveLearnset,
    ),

    [SPECIES_NINCADA] = HARD_MODE(
        .abilities = {ABILITY_COMPOUND_EYES,  ABILITY_NONE,  ABILITY_RUN_AWAY },
        .levelUpLearnset = sNincadaLevelUpLearnset,
        .teachableLearnset = sNincadaTeachableLearnset,
        .eggMoveLearnset = sNincadaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_NINJASK, 20, SPECIES_NINJASK}),
    ),

    [SPECIES_NINJASK] = HARD_MODE(
        .abilities = {ABILITY_SPEED_BOOST,  ABILITY_NONE,  ABILITY_INFILTRATOR },
        .levelUpLearnset = sNinjaskLevelUpLearnset,
        .teachableLearnset = sNinjaskTeachableLearnset,
        .eggMoveLearnset = sNincadaEggMoveLearnset,
    ),

    [SPECIES_WHISMUR] = HARD_MODE(
        .abilities = {ABILITY_SOUNDPROOF,  ABILITY_OBLIVIOUS,  ABILITY_SCRAPPY },
        .levelUpLearnset = sWhismurLevelUpLearnset,
        .teachableLearnset = sWhismurTeachableLearnset,
        .eggMoveLearnset = sWhismurEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LOUDRED}),
    ),

    [SPECIES_LOUDRED] = HARD_MODE(
        .abilities = {ABILITY_SOUNDPROOF,  ABILITY_SCRAPPY,  ABILITY_PUNK_ROCK },
        .levelUpLearnset = sLoudredLevelUpLearnset,
        .teachableLearnset = sLoudredTeachableLearnset,
        .eggMoveLearnset = sWhismurEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_EXPLOUD}),
    ),

    [SPECIES_EXPLOUD] = HARD_MODE(
        .abilities = {ABILITY_SOUNDPROOF,  ABILITY_SCRAPPY,  ABILITY_PUNK_ROCK },
        .levelUpLearnset = sExploudLevelUpLearnset,
        .teachableLearnset = sExploudTeachableLearnset,
        .eggMoveLearnset = sWhismurEggMoveLearnset,
    ),

    [SPECIES_MAKUHITA] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_GUTS,  ABILITY_SHEER_FORCE },
        .levelUpLearnset = sMakuhitaLevelUpLearnset,
        .teachableLearnset = sMakuhitaTeachableLearnset,
        .eggMoveLearnset = sMakuhitaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_HARIYAMA}),
    ),

    [SPECIES_HARIYAMA] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_GUTS,  ABILITY_SHEER_FORCE },
        .levelUpLearnset = sHariyamaLevelUpLearnset,
        .teachableLearnset = sHariyamaTeachableLearnset,
        .eggMoveLearnset = sMakuhitaEggMoveLearnset,
    ),

    [SPECIES_NOSEPASS] = HARD_MODE(
        .abilities = {ABILITY_STURDY,  ABILITY_STURDY,  ABILITY_MAGNET_PULL },
        .levelUpLearnset = sNosepassLevelUpLearnset,
        .teachableLearnset = sNosepassTeachableLearnset,
        .eggMoveLearnset = sNosepassEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_METAL_COAT, SPECIES_PROBOPASS}),
    ),

    [SPECIES_PROBOPASS] = HARD_MODE(
        .abilities = {ABILITY_STURDY,  ABILITY_LEVITATE,  ABILITY_MAGNET_PULL },
        .levelUpLearnset = sProbopassLevelUpLearnset,
        .teachableLearnset = sProbopassTeachableLearnset,
        .eggMoveLearnset = sNosepassEggMoveLearnset,
    ),

    [SPECIES_SKITTY] = HARD_MODE(
        .abilities = {ABILITY_FELINE_PROWESS,  ABILITY_FELINE_PROWESS,  ABILITY_CUTE_CHARM },
        .levelUpLearnset = sSkittyLevelUpLearnset,
        .teachableLearnset = sSkittyTeachableLearnset,
        .eggMoveLearnset = sSkittyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_DELCATTY}),
    ),

    [SPECIES_DELCATTY] = HARD_MODE(
        .abilities = {ABILITY_FELINE_PROWESS,  ABILITY_FELINE_PROWESS,  ABILITY_CUTE_CHARM },
        .levelUpLearnset = sDelcattyLevelUpLearnset,
        .teachableLearnset = sDelcattyTeachableLearnset,
        .eggMoveLearnset = sSkittyEggMoveLearnset,
    ),

    [SPECIES_SABLEYE] = HARD_MODE(
        .abilities = {ABILITY_PRANKSTER,  ABILITY_NONE,  ABILITY_FRISK },
        .levelUpLearnset = sSableyeLevelUpLearnset,
        .teachableLearnset = sSableyeTeachableLearnset,
        .eggMoveLearnset = sSableyeEggMoveLearnset,
    ),

    [SPECIES_SABLEYE_MEGA] = HARD_MODE(
        .abilities = {ABILITY_MAGIC_GUARD,  ABILITY_MAGIC_GUARD,  ABILITY_MAGIC_BOUNCE },
        .levelUpLearnset = sSableyeLevelUpLearnset,
        .teachableLearnset = sSableyeTeachableLearnset,
        .eggMoveLearnset = sSableyeEggMoveLearnset,
    ),

    [SPECIES_MAWILE] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_INTIMIDATE,  ABILITY_SHEER_FORCE },
        .levelUpLearnset = sMawileLevelUpLearnset,
        .teachableLearnset = sMawileTeachableLearnset,
        .eggMoveLearnset = sMawileEggMoveLearnset,
    ),

    [SPECIES_MAWILE_MEGA] = HARD_MODE(
        .abilities = {ABILITY_HUGE_POWER,  ABILITY_HUGE_POWER,  ABILITY_HUGE_POWER },
        .levelUpLearnset = sMawileLevelUpLearnset,
        .teachableLearnset = sMawileTeachableLearnset,
        .eggMoveLearnset = sMawileEggMoveLearnset,
    ),

    [SPECIES_ARON] = HARD_MODE(
        .abilities = {ABILITY_STURDY,  ABILITY_ROCK_HEAD,  ABILITY_HEAVY_METAL },
        .levelUpLearnset = sAronLevelUpLearnset,
        .teachableLearnset = sAronTeachableLearnset,
        .eggMoveLearnset = sAronEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_LAIRON}),
    ),

    [SPECIES_LAIRON] = HARD_MODE(
        .abilities = {ABILITY_STURDY,  ABILITY_ROCK_HEAD,  ABILITY_HEAVY_METAL },
        .levelUpLearnset = sLaironLevelUpLearnset,
        .teachableLearnset = sLaironTeachableLearnset,
        .eggMoveLearnset = sAronEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_AGGRON}),
    ),

    [SPECIES_AGGRON] = HARD_MODE(
        .abilities = {ABILITY_STURDY,  ABILITY_ROCK_HEAD,  ABILITY_HEAVY_METAL },
        .levelUpLearnset = sAggronLevelUpLearnset,
        .teachableLearnset = sAggronTeachableLearnset,
        .eggMoveLearnset = sAronEggMoveLearnset,
    ),

    [SPECIES_AGGRON_MEGA] = HARD_MODE(
        .abilities = {ABILITY_FILTER,  ABILITY_FILTER,  ABILITY_FILTER },
        .levelUpLearnset = sAggronLevelUpLearnset,
        .teachableLearnset = sAggronTeachableLearnset,
    ),

    [SPECIES_MEDITITE] = HARD_MODE(
        .abilities = {ABILITY_HUGE_POWER,  ABILITY_NONE,  ABILITY_TELEPATHY },
        .levelUpLearnset = sMedititeLevelUpLearnset,
        .teachableLearnset = sMedititeTeachableLearnset,
        .eggMoveLearnset = sMedititeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_MEDICHAM}),
    ),

    [SPECIES_MEDICHAM] = HARD_MODE(
        .abilities = {ABILITY_HUGE_POWER,  ABILITY_NONE,  ABILITY_TELEPATHY },
        .levelUpLearnset = sMedichamLevelUpLearnset,
        .teachableLearnset = sMedichamTeachableLearnset,
        .eggMoveLearnset = sMedititeEggMoveLearnset,
    ),

    [SPECIES_MEDICHAM_MEGA] = HARD_MODE(
        .abilities = {ABILITY_HUGE_POWER,  ABILITY_HUGE_POWER,  ABILITY_HUGE_POWER },
        .levelUpLearnset = sMedichamLevelUpLearnset,
        .teachableLearnset = sMedichamTeachableLearnset,
    ),

    [SPECIES_ELECTRIKE] = HARD_MODE(
        .abilities = {ABILITY_STATIC,  ABILITY_STATIC,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sElectrikeLevelUpLearnset,
        .teachableLearnset = sElectrikeTeachableLearnset,
        .eggMoveLearnset = sElectrikeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_MANECTRIC}),
    ),

    [SPECIES_MANECTRIC] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_INTIMIDATE,  ABILITY_LIGHTNING_ROD},
        .levelUpLearnset = sManectricLevelUpLearnset,
        .teachableLearnset = sManectricTeachableLearnset,
        .eggMoveLearnset = sElectrikeEggMoveLearnset,
    ),

    [SPECIES_MANECTRIC_MEGA] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_INTIMIDATE,  ABILITY_INTIMIDATE },
        .levelUpLearnset = sManectricLevelUpLearnset,
        .teachableLearnset = sManectricTeachableLearnset,
    ),

    [SPECIES_PLUSLE] = HARD_MODE(
        .abilities = {ABILITY_TRANSISTOR,  ABILITY_TRANSISTOR,  ABILITY_LIGHTNING_ROD },
        .levelUpLearnset = sPlusleLevelUpLearnset,
        .teachableLearnset = sPlusleTeachableLearnset,
        .eggMoveLearnset = sPlusleEggMoveLearnset,
    ),

    [SPECIES_MINUN] = HARD_MODE(
        .abilities = {ABILITY_GALVANIZE,  ABILITY_GALVANIZE,  ABILITY_VOLT_ABSORB },
        .levelUpLearnset = sMinunLevelUpLearnset,
        .teachableLearnset = sMinunTeachableLearnset,
        .eggMoveLearnset = sMinunEggMoveLearnset,
    ),

    [SPECIES_VOLBEAT] = HARD_MODE(
        .abilities = {ABILITY_PRANKSTER,  ABILITY_NONE,  ABILITY_ILLUMINATE },
        .levelUpLearnset = sVolbeatLevelUpLearnset,
        .teachableLearnset = sVolbeatTeachableLearnset,
        .eggMoveLearnset = sVolbeatEggMoveLearnset,
    ),

    [SPECIES_ILLUMISE] = HARD_MODE(
        .abilities = {ABILITY_PRANKSTER,  ABILITY_PRANKSTER,  ABILITY_TINTED_LENS },
        .levelUpLearnset = sIllumiseLevelUpLearnset,
        .teachableLearnset = sIllumiseTeachableLearnset,
        .eggMoveLearnset = sIllumiseEggMoveLearnset,
    ),

    [SPECIES_BUDEW] = HARD_MODE(
        .abilities = {ABILITY_LEAF_GUARD,  ABILITY_NATURAL_CURE,  ABILITY_POISON_TOUCH },
        .levelUpLearnset = sBudewLevelUpLearnset,
        .teachableLearnset = sBudewTeachableLearnset,
        .eggMoveLearnset = sBudewEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP_DAY, 0, SPECIES_ROSELIA}),
    ),

    [SPECIES_ROSELIA] = HARD_MODE(
        .abilities = {ABILITY_LEAF_GUARD,   ABILITY_NATURAL_CURE,  ABILITY_POISON_TOUCH },
        .levelUpLearnset = sRoseliaLevelUpLearnset,
        .teachableLearnset = sRoseliaTeachableLearnset,
        .eggMoveLearnset = sRoseliaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ROSERADE}),
    ),

    [SPECIES_ROSERADE] = HARD_MODE(
        .abilities = {ABILITY_TECHNICIAN,  ABILITY_NATURAL_CURE,  ABILITY_POISON_TOUCH },
        .levelUpLearnset = sRoseradeLevelUpLearnset,
        .teachableLearnset = sRoseradeTeachableLearnset,
        .eggMoveLearnset = sRoseliaEggMoveLearnset,
    ),

    [SPECIES_GULPIN] = HARD_MODE(
        .abilities = {ABILITY_LIQUID_OOZE,  ABILITY_STICKY_HOLD,  ABILITY_GLUTTONY },
        .levelUpLearnset = sGulpinLevelUpLearnset,
        .teachableLearnset = sGulpinTeachableLearnset,
        .eggMoveLearnset = sGulpinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_SWALOT}),
    ),

    [SPECIES_SWALOT] = HARD_MODE(
        .abilities = {ABILITY_LIQUID_OOZE,  ABILITY_STICKY_HOLD,  ABILITY_MAGIC_GUARD },
        .levelUpLearnset = sSwalotLevelUpLearnset,
        .teachableLearnset = sSwalotTeachableLearnset,
        .eggMoveLearnset = sGulpinEggMoveLearnset,
    ),

    [SPECIES_CARVANHA] = HARD_MODE(
        .abilities = {ABILITY_ROUGH_SKIN,  ABILITY_SPEED_BOOST,  ABILITY_NONE },
        .levelUpLearnset = sCarvanhaLevelUpLearnset,
        .teachableLearnset = sCarvanhaTeachableLearnset,
        .eggMoveLearnset = sCarvanhaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SHARPEDO}),
    ),

    [SPECIES_SHARPEDO] = HARD_MODE(
        .abilities = {ABILITY_ROUGH_SKIN,  ABILITY_SPEED_BOOST,  ABILITY_NONE },
        .levelUpLearnset = sSharpedoLevelUpLearnset,
        .teachableLearnset = sSharpedoTeachableLearnset,
        .eggMoveLearnset = sCarvanhaEggMoveLearnset,
    ),

    [SPECIES_SHARPEDO_MEGA] = HARD_MODE(
        .abilities = {ABILITY_STRONG_JAW,  ABILITY_STRONG_JAW,  ABILITY_STRONG_JAW },
        .levelUpLearnset = sSharpedoLevelUpLearnset,
        .teachableLearnset = sSharpedoTeachableLearnset,
    ),

    [SPECIES_WAILMER] = HARD_MODE(
        .abilities = {ABILITY_OBLIVIOUS,  ABILITY_OBLIVIOUS,  ABILITY_PRESSURE },
        .levelUpLearnset = sWailmerLevelUpLearnset,
        .teachableLearnset = sWailmerTeachableLearnset,
        .eggMoveLearnset = sWailmerEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_WAILORD}),
    ),

    [SPECIES_WAILORD] = HARD_MODE(
        .abilities = {ABILITY_MULTISCALE,  ABILITY_MULTISCALE,  ABILITY_PRESSURE },
        .levelUpLearnset = sWailordLevelUpLearnset,
        .teachableLearnset = sWailordTeachableLearnset,
        .eggMoveLearnset = sWailmerEggMoveLearnset,
    ),

    [SPECIES_NUMEL] = HARD_MODE(
        .abilities = {ABILITY_OBLIVIOUS,  ABILITY_SIMPLE,  ABILITY_OWN_TEMPO },
        .levelUpLearnset = sNumelLevelUpLearnset,
        .teachableLearnset = sNumelTeachableLearnset,
        .eggMoveLearnset = sNumelEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_CAMERUPT}),
    ),

    [SPECIES_CAMERUPT] = HARD_MODE(
        .abilities = {ABILITY_BATTLE_ARMOR,  ABILITY_SOLID_ROCK,  ABILITY_ANGER_POINT },
        .levelUpLearnset = sCameruptLevelUpLearnset,
        .teachableLearnset = sCameruptTeachableLearnset,
        .eggMoveLearnset = sNumelEggMoveLearnset,
    ),

    [SPECIES_CAMERUPT_MEGA] = HARD_MODE(
        .abilities = {ABILITY_SHEER_FORCE,  ABILITY_SHEER_FORCE,  ABILITY_SHEER_FORCE },
        .levelUpLearnset = sCameruptLevelUpLearnset,
        .teachableLearnset = sCameruptTeachableLearnset,
    ),

    [SPECIES_TORKOAL] = HARD_MODE(
        .abilities = {ABILITY_WHITE_SMOKE,  ABILITY_SHELL_ARMOR,  ABILITY_DROUGHT },
        .levelUpLearnset = sTorkoalLevelUpLearnset,
        .teachableLearnset = sTorkoalTeachableLearnset,
        .eggMoveLearnset = sTorkoalEggMoveLearnset,
    ),

    [SPECIES_SPOINK] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_OWN_TEMPO,  ABILITY_GLUTTONY },
        .levelUpLearnset = sSpoinkLevelUpLearnset,
        .teachableLearnset = sSpoinkTeachableLearnset,
        .eggMoveLearnset = sSpoinkEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL,25, SPECIES_GRUMPIG}),
    ),

    [SPECIES_GRUMPIG] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_OWN_TEMPO,  ABILITY_GLUTTONY },
        .levelUpLearnset = sGrumpigLevelUpLearnset,
        .teachableLearnset = sGrumpigTeachableLearnset,
        .eggMoveLearnset = sSpoinkEggMoveLearnset,
    ),

    [SPECIES_SPINDA] = HARD_MODE(
        .abilities = {ABILITY_OWN_TEMPO,  ABILITY_NONE,  ABILITY_CONTRARY },
        .levelUpLearnset = sSpindaLevelUpLearnset,
        .teachableLearnset = sSpindaTeachableLearnset,
        .eggMoveLearnset = sSpindaEggMoveLearnset,
    ),

    [SPECIES_TRAPINCH] = HARD_MODE(
        .abilities = {ABILITY_HYPER_CUTTER,  ABILITY_ARENA_TRAP,  ABILITY_SHEER_FORCE },
        .levelUpLearnset = sTrapinchLevelUpLearnset,
        .teachableLearnset = sTrapinchTeachableLearnset,
        .eggMoveLearnset = sTrapinchEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_VIBRAVA}),
    ),

    [SPECIES_VIBRAVA] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_COMPOUND_EYES,  ABILITY_TINTED_LENS },
        .levelUpLearnset = sVibravaLevelUpLearnset,
        .teachableLearnset = sVibravaTeachableLearnset,
        .eggMoveLearnset = sTrapinchEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 44, SPECIES_FLYGON}),
    ),

    [SPECIES_FLYGON] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_COMPOUND_EYES,  ABILITY_TINTED_LENS },
        .levelUpLearnset = sFlygonLevelUpLearnset,
        .teachableLearnset = sFlygonTeachableLearnset,
        .eggMoveLearnset = sTrapinchEggMoveLearnset,
    ),

    [SPECIES_CACNEA] = HARD_MODE(
        .abilities = {ABILITY_SAND_VEIL,  ABILITY_SAND_RUSH,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sCacneaLevelUpLearnset,
        .teachableLearnset = sCacneaTeachableLearnset,
        .eggMoveLearnset = sCacneaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_CACTURNE}),
    ),

    [SPECIES_CACTURNE] = HARD_MODE(
        .abilities = {ABILITY_SAND_VEIL,  ABILITY_SAND_RUSH,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sCacturneLevelUpLearnset,
        .teachableLearnset = sCacturneTeachableLearnset,
        .eggMoveLearnset = sCacneaEggMoveLearnset,
    ),

    [SPECIES_SWABLU] = HARD_MODE(
        .abilities = {ABILITY_NATURAL_CURE,  ABILITY_NONE,  ABILITY_CLOUD_NINE },
        .levelUpLearnset = sSwabluLevelUpLearnset,
        .teachableLearnset = sSwabluTeachableLearnset,
        .eggMoveLearnset = sSwabluEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_ALTARIA}),
    ),

    [SPECIES_ALTARIA] = HARD_MODE(
        .abilities = {ABILITY_NATURAL_CURE,  ABILITY_NONE,  ABILITY_CLOUD_NINE },
        .levelUpLearnset = sAltariaLevelUpLearnset,
        .teachableLearnset = sAltariaTeachableLearnset,
        .eggMoveLearnset = sSwabluEggMoveLearnset,
    ),

    [SPECIES_ALTARIA_MEGA] = HARD_MODE(
        .abilities = {ABILITY_PIXILATE,  ABILITY_PIXILATE,  ABILITY_PIXILATE },
        .levelUpLearnset = sAltariaLevelUpLearnset,
        .teachableLearnset = sAltariaTeachableLearnset,
    ),

    [SPECIES_ZANGOOSE] = HARD_MODE(
        .abilities = {ABILITY_TOUGH_CLAWS,  ABILITY_NONE,  ABILITY_TOXIC_BOOST },
        .levelUpLearnset = sZangooseLevelUpLearnset,
        .teachableLearnset = sZangooseTeachableLearnset,
        .eggMoveLearnset = sZangooseEggMoveLearnset,
    ),

    [SPECIES_SEVIPER] = HARD_MODE(
        .abilities = {ABILITY_FATAL_PRECISION,  ABILITY_FATAL_PRECISION,  ABILITY_MERCILESS },
        .levelUpLearnset = sSeviperLevelUpLearnset,
        .teachableLearnset = sSeviperTeachableLearnset,
        .eggMoveLearnset = sSeviperEggMoveLearnset,
    ),

    [SPECIES_LUNATONE] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sLunatoneLevelUpLearnset,
        .teachableLearnset = sLunatoneTeachableLearnset,
    ),

    [SPECIES_SOLROCK] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sSolrockLevelUpLearnset,
        .teachableLearnset = sSolrockTeachableLearnset,
    ),

    [SPECIES_BARBOACH] = HARD_MODE(
        .abilities = {ABILITY_OBLIVIOUS,  ABILITY_NONE,  ABILITY_HYDRATION },
        .levelUpLearnset = sBarboachLevelUpLearnset,
        .teachableLearnset = sBarboachTeachableLearnset,
        .eggMoveLearnset = sBarboachEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_WHISCASH}),
    ),

    [SPECIES_WHISCASH] = HARD_MODE(
        .abilities = {ABILITY_WATER_BUBBLE,  ABILITY_NONE,  ABILITY_HYDRATION },
        .levelUpLearnset = sWhiscashLevelUpLearnset,
        .teachableLearnset = sWhiscashTeachableLearnset,
        .eggMoveLearnset = sBarboachEggMoveLearnset,
    ),

    [SPECIES_CORPHISH] = HARD_MODE(
        .abilities = {ABILITY_ADAPTABILITY,  ABILITY_SHELL_ARMOR,  ABILITY_HYPER_CUTTER },
        .levelUpLearnset = sCorphishLevelUpLearnset,
        .teachableLearnset = sCorphishTeachableLearnset,
        .eggMoveLearnset = sCorphishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_CRAWDAUNT}),
    ),

    [SPECIES_CRAWDAUNT] = HARD_MODE(
        .abilities = {ABILITY_ADAPTABILITY,  ABILITY_SHELL_ARMOR,  ABILITY_HYPER_CUTTER },
        .levelUpLearnset = sCrawdauntLevelUpLearnset,
        .teachableLearnset = sCrawdauntTeachableLearnset,
        .eggMoveLearnset = sCorphishEggMoveLearnset,
    ),

    [SPECIES_BALTOY] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sBaltoyLevelUpLearnset,
        .teachableLearnset = sBaltoyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_CLAYDOL}),
    ),

    [SPECIES_CLAYDOL] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sClaydolLevelUpLearnset,
        .teachableLearnset = sClaydolTeachableLearnset,
    ),

    [SPECIES_LILEEP] = HARD_MODE(
        .abilities = {ABILITY_SUCTION_CUPS,  ABILITY_NONE,  ABILITY_STORM_DRAIN },
        .levelUpLearnset = sLileepLevelUpLearnset,
        .teachableLearnset = sLileepTeachableLearnset,
        .eggMoveLearnset = sLileepEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_CRADILY}),
    ),

    [SPECIES_CRADILY] = HARD_MODE(
        .abilities = {ABILITY_SUCTION_CUPS,  ABILITY_NONE,  ABILITY_STORM_DRAIN },
        .levelUpLearnset = sCradilyLevelUpLearnset,
        .teachableLearnset = sCradilyTeachableLearnset,
        .eggMoveLearnset = sLileepEggMoveLearnset,
    ),

    [SPECIES_ANORITH] = HARD_MODE(
        .abilities = {ABILITY_BATTLE_ARMOR,  ABILITY_SKILL_LINK,  ABILITY_SWIFT_SWIM },
        .levelUpLearnset = sAnorithLevelUpLearnset,
        .teachableLearnset = sAnorithTeachableLearnset,
        .eggMoveLearnset = sAnorithEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ARMALDO}),
    ),

    [SPECIES_ARMALDO] = HARD_MODE(
        .abilities = {ABILITY_BATTLE_ARMOR,  ABILITY_SKILL_LINK,  ABILITY_SWIFT_SWIM },
        .levelUpLearnset = sArmaldoLevelUpLearnset,
        .teachableLearnset = sArmaldoTeachableLearnset,
        .eggMoveLearnset = sAnorithEggMoveLearnset,
    ),

    [SPECIES_FEEBAS] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_OBLIVIOUS,  ABILITY_ADAPTABILITY },
        .levelUpLearnset = sFeebasLevelUpLearnset,
        .teachableLearnset = sFeebasTeachableLearnset,
        .eggMoveLearnset = sFeebasEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_BEAUTY, 170, SPECIES_MILOTIC}, {EVO_TRADE_ITEM, ITEM_PRISM_SCALE, SPECIES_MILOTIC}, {EVO_ITEM, ITEM_PRISM_SCALE, SPECIES_MILOTIC}),
    ),

    [SPECIES_MILOTIC] = HARD_MODE(
        .abilities = {ABILITY_MARVEL_SCALE,  ABILITY_NONE,  ABILITY_COMPETITIVE },
        .levelUpLearnset = sMiloticLevelUpLearnset,
        .teachableLearnset = sMiloticTeachableLearnset,
        .eggMoveLearnset = sFeebasEggMoveLearnset,
    ),

    [SPECIES_CASTFORM_NORMAL] = HARD_MODE(
        .abilities = {ABILITY_FORECAST,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
    ),

    [SPECIES_CASTFORM_SUNNY] = HARD_MODE(
        .abilities = {ABILITY_FORECAST,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
    ),

    [SPECIES_CASTFORM_RAINY] = HARD_MODE(
        .abilities = {ABILITY_FORECAST,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
    ),

    [SPECIES_CASTFORM_SNOWY] = HARD_MODE(
        .abilities = {ABILITY_FORECAST,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
    ),

    [SPECIES_KECLEON] = HARD_MODE(
        .abilities = {ABILITY_PROTEAN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sKecleonLevelUpLearnset,
        .teachableLearnset = sKecleonTeachableLearnset,
        .eggMoveLearnset = sKecleonEggMoveLearnset,
    ),

    [SPECIES_SHUPPET] = HARD_MODE(
        .abilities = {ABILITY_WANDERING_SPIRIT,  ABILITY_WANDERING_SPIRIT,  ABILITY_INSOMNIA },
        .levelUpLearnset = sShuppetLevelUpLearnset,
        .teachableLearnset = sShuppetTeachableLearnset,
        .eggMoveLearnset = sShuppetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_BANETTE}),
    ),

    [SPECIES_BANETTE] = HARD_MODE(
        .abilities = {ABILITY_WANDERING_SPIRIT,  ABILITY_WANDERING_SPIRIT,  ABILITY_INSOMNIA },
        .levelUpLearnset = sBanetteLevelUpLearnset,
        .teachableLearnset = sBanetteTeachableLearnset,
        .eggMoveLearnset = sShuppetEggMoveLearnset,
    ),

    [SPECIES_BANETTE_MEGA] = HARD_MODE(
        .abilities = {ABILITY_PRANKSTER,  ABILITY_PRANKSTER,  ABILITY_PRANKSTER },
        .levelUpLearnset = sBanetteLevelUpLearnset,
        .teachableLearnset = sBanetteTeachableLearnset,
    ),

    [SPECIES_DUSKULL] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_FRISK },
        .levelUpLearnset = sDuskullLevelUpLearnset,
        .teachableLearnset = sDuskullTeachableLearnset,
        .eggMoveLearnset = sDuskullEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_DUSCLOPS}),
    ),

    [SPECIES_DUSCLOPS] = HARD_MODE(
        .abilities = {ABILITY_PRESSURE,  ABILITY_NONE,  ABILITY_FRISK },
        .levelUpLearnset = sDusclopsLevelUpLearnset,
        .teachableLearnset = sDusclopsTeachableLearnset,
        .eggMoveLearnset = sDuskullEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MAPSEC, MAPSEC_MIRAGE_TOWER, SPECIES_DUSKNOIR}),
    ),

    [SPECIES_DUSKNOIR] = HARD_MODE(
        .abilities = {ABILITY_PRESSURE,  ABILITY_NONE,  ABILITY_HUSTLE },
        .levelUpLearnset = sDusknoirLevelUpLearnset,
        .teachableLearnset = sDusknoirTeachableLearnset,
        .eggMoveLearnset = sDuskullEggMoveLearnset,
    ),

    [SPECIES_TROPIUS] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_WIND_RIDER,  ABILITY_HARVEST },
        .levelUpLearnset = sTropiusLevelUpLearnset,
        .teachableLearnset = sTropiusTeachableLearnset,
        .eggMoveLearnset = sTropiusEggMoveLearnset,
    ),

    [SPECIES_CHINGLING] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sChinglingLevelUpLearnset,
        .teachableLearnset = sChinglingTeachableLearnset,
        .eggMoveLearnset = sChinglingEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_CHIMECHO}),
    ),

    [SPECIES_CHIMECHO] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sChimechoLevelUpLearnset,
        .teachableLearnset = sChimechoTeachableLearnset,
        .eggMoveLearnset = sChimechoEggMoveLearnset,
    ),

    [SPECIES_CHIMECHO_MEGA] = HARD_MODE(
        .abilities = { ABILITY_WISTFUL_ECHO, ABILITY_NONE, ABILITY_NONE },
        .levelUpLearnset = sChimechoLevelUpLearnset,
        .teachableLearnset = sChimechoTeachableLearnset,
        .eggMoveLearnset = sChimechoEggMoveLearnset,
    ),

    [SPECIES_ABSOL] = HARD_MODE(
        .abilities = {ABILITY_JUSTIFIED,  ABILITY_SUPER_LUCK,  ABILITY_PRESSURE },
        .levelUpLearnset = sAbsolLevelUpLearnset,
        .teachableLearnset = sAbsolTeachableLearnset,
        .eggMoveLearnset = sAbsolEggMoveLearnset,
    ),

    [SPECIES_ABSOL_MEGA] = HARD_MODE(
        .abilities = {ABILITY_SHARPNESS,  ABILITY_SHARPNESS,  ABILITY_MAGIC_BOUNCE },
        .levelUpLearnset = sAbsolLevelUpLearnset,
        .teachableLearnset = sAbsolTeachableLearnset,
        .eggMoveLearnset = sAbsolEggMoveLearnset,
    ),

    [SPECIES_ABSOL_MEGA_Z] = HARD_MODE(
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE },
        .levelUpLearnset = sAbsolLevelUpLearnset,
        .teachableLearnset = sAbsolTeachableLearnset,
        .eggMoveLearnset = sAbsolEggMoveLearnset,
    ),

    [SPECIES_SNORUNT] = HARD_MODE(
        .abilities = {ABILITY_INNER_FOCUS,  ABILITY_ICE_BODY,  ABILITY_REFRIGERATE },
        .levelUpLearnset = sSnoruntLevelUpLearnset,
        .teachableLearnset = sSnoruntTeachableLearnset,
        .eggMoveLearnset = sSnoruntEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_GLALIE}, {EVO_ITEM_FEMALE, ITEM_DAWN_STONE, SPECIES_FROSLASS}),
    ),

    [SPECIES_GLALIE] = HARD_MODE(
        .abilities = {ABILITY_INNER_FOCUS,  ABILITY_ICE_BODY,  ABILITY_REFRIGERATE },
        .levelUpLearnset = sGlalieLevelUpLearnset,
        .teachableLearnset = sGlalieTeachableLearnset,
        .eggMoveLearnset = sSnoruntEggMoveLearnset,
    ),

    [SPECIES_GLALIE_MEGA] = HARD_MODE(
        .abilities = {ABILITY_REFRIGERATE,  ABILITY_REFRIGERATE,  ABILITY_REFRIGERATE },
        .levelUpLearnset = sGlalieLevelUpLearnset,
        .teachableLearnset = sGlalieTeachableLearnset,
    ),

    [SPECIES_FROSLASS] = HARD_MODE(
        .abilities = {ABILITY_STAKEOUT, ABILITY_ICE_BODY ,  ABILITY_NONE },
        .levelUpLearnset = sFroslassLevelUpLearnset,
        .teachableLearnset = sFroslassTeachableLearnset,
        .eggMoveLearnset = sSnoruntEggMoveLearnset,
    ),

    [SPECIES_FROSLASS_MEGA] = HARD_MODE(
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .levelUpLearnset = sFroslassLevelUpLearnset,
        .teachableLearnset = sFroslassTeachableLearnset,
    ),

    [SPECIES_SPHEAL] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_THICK_FAT,  ABILITY_FUR_COAT },
        .levelUpLearnset = sSphealLevelUpLearnset,
        .teachableLearnset = sSphealTeachableLearnset,
        .eggMoveLearnset = sSphealEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SEALEO}),
    ),

    [SPECIES_SEALEO] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_THICK_FAT,  ABILITY_FUR_COAT },
        .levelUpLearnset = sSealeoLevelUpLearnset,
        .teachableLearnset = sSealeoTeachableLearnset,
        .eggMoveLearnset = sSphealEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 44, SPECIES_WALREIN}),
    ),

    [SPECIES_WALREIN] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_THICK_FAT,  ABILITY_FUR_COAT },
        .levelUpLearnset = sWalreinLevelUpLearnset,
        .teachableLearnset = sWalreinTeachableLearnset,
        .eggMoveLearnset = sSphealEggMoveLearnset,
    ),

    [SPECIES_CLAMPERL] = HARD_MODE(
        .abilities = {ABILITY_SHELL_ARMOR,  ABILITY_NONE,  ABILITY_HYDRATION },
        .levelUpLearnset = sClamperlLevelUpLearnset,
        .teachableLearnset = sClamperlTeachableLearnset,
        .eggMoveLearnset = sClamperlEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_HUNTAIL}, {EVO_ITEM, ITEM_SUN_STONE, SPECIES_GOREBYSS}),
    ),

    [SPECIES_HUNTAIL] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_NONE,  ABILITY_DEFIANT },
        .levelUpLearnset = sHuntailLevelUpLearnset,
        .teachableLearnset = sHuntailTeachableLearnset,
        .eggMoveLearnset = sClamperlEggMoveLearnset,
    ),

    [SPECIES_GOREBYSS] = HARD_MODE(
        .abilities = {ABILITY_DAZZLING,  ABILITY_NONE,  ABILITY_REGENERATOR },
        .levelUpLearnset = sGorebyssLevelUpLearnset,
        .teachableLearnset = sGorebyssTeachableLearnset,
        .eggMoveLearnset = sClamperlEggMoveLearnset,
    ),

    [SPECIES_RELICANTH] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_ROCK_HEAD,  ABILITY_STURDY },
        .levelUpLearnset = sRelicanthLevelUpLearnset,
        .teachableLearnset = sRelicanthTeachableLearnset,
        .eggMoveLearnset = sRelicanthEggMoveLearnset,
    ),

    [SPECIES_LUVDISC] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_NONE,  ABILITY_SOUL_HEART },
        .levelUpLearnset = sLuvdiscLevelUpLearnset,
        .teachableLearnset = sLuvdiscTeachableLearnset,
        .eggMoveLearnset = sLuvdiscEggMoveLearnset,
    ),

    [SPECIES_BAGON] = HARD_MODE(
        .abilities = {ABILITY_ROCK_HEAD,  ABILITY_NONE,  ABILITY_SHEER_FORCE },
        .levelUpLearnset = sBagonLevelUpLearnset,
        .teachableLearnset = sBagonTeachableLearnset,
        .eggMoveLearnset = sBagonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SHELGON}),
    ),

    [SPECIES_SHELGON] = HARD_MODE(
        .abilities = {ABILITY_ROCK_HEAD,  ABILITY_NONE,  ABILITY_OVERCOAT },
        .levelUpLearnset = sShelgonLevelUpLearnset,
        .teachableLearnset = sShelgonTeachableLearnset,
        .eggMoveLearnset = sBagonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_SALAMENCE}),
    ),

    [SPECIES_SALAMENCE] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_NONE,  ABILITY_MOXIE },
        .levelUpLearnset = sSalamenceLevelUpLearnset,
        .teachableLearnset = sSalamenceTeachableLearnset,
        .eggMoveLearnset = sBagonEggMoveLearnset,
    ),

    [SPECIES_SALAMENCE_MEGA] = HARD_MODE(
        .abilities = {ABILITY_AERILATE,  ABILITY_AERILATE,  ABILITY_AERILATE },
        .levelUpLearnset = sSalamenceLevelUpLearnset,
        .teachableLearnset = sSalamenceTeachableLearnset,
    ),

    [SPECIES_BELDUM] = HARD_MODE(
        .abilities = {ABILITY_CLEAR_BODY,  ABILITY_NONE,  ABILITY_MAGNET_PULL },
        .levelUpLearnset = sBeldumLevelUpLearnset,
        .teachableLearnset = sBeldumTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_METANG}),
    ),

    [SPECIES_METANG] = HARD_MODE(
        .abilities = {ABILITY_CLEAR_BODY,  ABILITY_NONE,  ABILITY_TOUGH_CLAWS },
        .levelUpLearnset = sMetangLevelUpLearnset,
        .teachableLearnset = sMetangTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 45, SPECIES_METAGROSS}),
    ),

    [SPECIES_METAGROSS] = HARD_MODE(
        .abilities = {ABILITY_CLEAR_BODY,  ABILITY_NONE,  ABILITY_TOUGH_CLAWS },
        .levelUpLearnset = sMetagrossLevelUpLearnset,
        .teachableLearnset = sMetagrossTeachableLearnset,
    ),

    [SPECIES_METAGROSS_MEGA] = HARD_MODE(
        .abilities = {ABILITY_TOUGH_CLAWS,  ABILITY_TOUGH_CLAWS,  ABILITY_TOUGH_CLAWS },
        .levelUpLearnset = sMetagrossLevelUpLearnset,
        .teachableLearnset = sMetagrossTeachableLearnset,
    ),

    [SPECIES_REGIROCK] = HARD_MODE(
        .abilities = {ABILITY_SOLID_ROCK,  ABILITY_CLEAR_BODY,  ABILITY_NONE },
        .levelUpLearnset = sRegirockLevelUpLearnset,
        .teachableLearnset = sRegirockTeachableLearnset,
    ),

    [SPECIES_REGICE] = HARD_MODE(
        .abilities = {ABILITY_FILTER,  ABILITY_CLEAR_BODY,  ABILITY_NONE },
        .levelUpLearnset = sRegiceLevelUpLearnset,
        .teachableLearnset = sRegiceTeachableLearnset,
    ),

    [SPECIES_REGISTEEL] = HARD_MODE(
        .abilities = {ABILITY_CLEAR_BODY,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sRegisteelLevelUpLearnset,
        .teachableLearnset = sRegisteelTeachableLearnset,
    ),

    [SPECIES_LATIAS] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sLatiasLevelUpLearnset,
        .teachableLearnset = sLatiasTeachableLearnset,
    ),

    [SPECIES_LATIAS_MEGA] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_LEVITATE,  ABILITY_LEVITATE },
        .levelUpLearnset = sLatiasLevelUpLearnset,
        .teachableLearnset = sLatiasTeachableLearnset,
    ),

    [SPECIES_LATIOS] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sLatiosLevelUpLearnset,
        .teachableLearnset = sLatiosTeachableLearnset,
    ),

    [SPECIES_LATIOS_MEGA] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_LEVITATE,  ABILITY_LEVITATE },
        .levelUpLearnset = sLatiosLevelUpLearnset,
        .teachableLearnset = sLatiosTeachableLearnset,
    ),

    [SPECIES_KYOGRE] = HARD_MODE(
        .abilities = {ABILITY_DRIZZLE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sKyogreLevelUpLearnset,
        .teachableLearnset = sKyogreTeachableLearnset,
    ),

    [SPECIES_KYOGRE_PRIMAL] = HARD_MODE(
        .abilities = {ABILITY_PRIMORDIAL_SEA,  ABILITY_PRIMORDIAL_SEA,  ABILITY_PRIMORDIAL_SEA },
        .levelUpLearnset = sKyogreLevelUpLearnset,
        .teachableLearnset = sKyogreTeachableLearnset,
    ),

    [SPECIES_GROUDON] = HARD_MODE(
        .abilities = {ABILITY_DROUGHT,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sGroudonLevelUpLearnset,
        .teachableLearnset = sGroudonTeachableLearnset,
    ),

    [SPECIES_GROUDON_PRIMAL] = HARD_MODE(
        .abilities = {ABILITY_DESOLATE_LAND,  ABILITY_DESOLATE_LAND,  ABILITY_DESOLATE_LAND },
        .levelUpLearnset = sGroudonLevelUpLearnset,
        .teachableLearnset = sGroudonTeachableLearnset,
    ),

    [SPECIES_RAYQUAZA] = HARD_MODE(
        .abilities = {ABILITY_AIR_LOCK,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sRayquazaLevelUpLearnset,
        .teachableLearnset = sRayquazaTeachableLearnset,
    ),

    [SPECIES_RAYQUAZA_MEGA] = HARD_MODE(
        .abilities = {ABILITY_DELTA_STREAM,  ABILITY_DELTA_STREAM,  ABILITY_DELTA_STREAM },
        .levelUpLearnset = sRayquazaLevelUpLearnset,
        .teachableLearnset = sRayquazaTeachableLearnset,
    ),

    [SPECIES_JIRACHI] = HARD_MODE(
        .abilities = {ABILITY_SERENE_GRACE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sJirachiLevelUpLearnset,
        .teachableLearnset = sJirachiTeachableLearnset,
    ),

    [SPECIES_DEOXYS_NORMAL] = HARD_MODE(
        .abilities = {ABILITY_PRESSURE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sDeoxysNormalLevelUpLearnset,
        .teachableLearnset = sDeoxysNormalTeachableLearnset,
    ),

    [SPECIES_DEOXYS_ATTACK] = HARD_MODE(
        .abilities = {ABILITY_PRESSURE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sDeoxysAttackLevelUpLearnset,
        .teachableLearnset = sDeoxysAttackTeachableLearnset,
    ),

    [SPECIES_DEOXYS_DEFENSE] = HARD_MODE(
        .abilities = {ABILITY_PRESSURE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sDeoxysDefenseLevelUpLearnset,
        .teachableLearnset = sDeoxysDefenseTeachableLearnset,
    ),

    [SPECIES_DEOXYS_SPEED] = HARD_MODE(
        .abilities = {ABILITY_PRESSURE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sDeoxysSpeedLevelUpLearnset,
        .teachableLearnset = sDeoxysSpeedTeachableLearnset,
    ),