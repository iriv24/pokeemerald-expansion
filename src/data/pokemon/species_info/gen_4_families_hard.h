[SPECIES_TURTWIG] = HARD_MODE(
        .abilities = { ABILITY_SHELL_ARMOR,  ABILITY_ROCK_HEAD,  ABILITY_SELF_SUFFICIENT},
        .levelUpLearnset = sTurtwigLevelUpLearnset,
        .teachableLearnset = sTurtwigTeachableLearnset,
        .eggMoveLearnset = sTurtwigEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_GROTLE}),
    ),

    [SPECIES_GROTLE] = HARD_MODE(
        .abilities = { ABILITY_SHELL_ARMOR,  ABILITY_ROCK_HEAD,  ABILITY_SELF_SUFFICIENT},
        .levelUpLearnset = sGrotleLevelUpLearnset,
        .teachableLearnset = sGrotleTeachableLearnset,
        .eggMoveLearnset = sTurtwigEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_TORTERRA}),
    ),

    [SPECIES_TORTERRA] = HARD_MODE(
        .abilities = { ABILITY_SHELL_ARMOR,  ABILITY_ROCK_HEAD,  ABILITY_SELF_SUFFICIENT},
        .levelUpLearnset = sTorterraLevelUpLearnset,
        .teachableLearnset = sTorterraTeachableLearnset,
        .eggMoveLearnset = sTurtwigEggMoveLearnset,
    ),

    [SPECIES_CHIMCHAR] = HARD_MODE(
        .abilities = { ABILITY_BLAZE,  ABILITY_IRON_FIST,  ABILITY_NONE},
        .levelUpLearnset = sChimcharLevelUpLearnset,
        .teachableLearnset = sChimcharTeachableLearnset,
        .eggMoveLearnset = sChimcharEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_MONFERNO}),
    ),

    [SPECIES_MONFERNO] = HARD_MODE(
        .abilities = { ABILITY_BLAZE,  ABILITY_IRON_FIST,  ABILITY_NONE},
        .levelUpLearnset = sMonfernoLevelUpLearnset,
        .teachableLearnset = sMonfernoTeachableLearnset,
        .eggMoveLearnset = sChimcharEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_INFERNAPE}),
    ),

    [SPECIES_INFERNAPE] = HARD_MODE(
        .abilities = { ABILITY_BLAZE,  ABILITY_NONE,  ABILITY_IRON_FIST},
        .levelUpLearnset = sInfernapeLevelUpLearnset,
        .teachableLearnset = sInfernapeTeachableLearnset,
        .eggMoveLearnset = sChimcharEggMoveLearnset,
    ),

    [SPECIES_PIPLUP] = HARD_MODE(
        .abilities = { ABILITY_TORRENT,  ABILITY_CLEAR_BODY,  ABILITY_COMPETITIVE},
        .levelUpLearnset = sPiplupLevelUpLearnset,
        .teachableLearnset = sPiplupTeachableLearnset,
        .eggMoveLearnset = sPiplupEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_PRINPLUP}),
    ),

    [SPECIES_PRINPLUP] = HARD_MODE(
        .abilities = { ABILITY_TORRENT,  ABILITY_CLEAR_BODY,  ABILITY_COMPETITIVE},
        .levelUpLearnset = sPrinplupLevelUpLearnset,
        .teachableLearnset = sPrinplupTeachableLearnset,
        .eggMoveLearnset = sPiplupEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_EMPOLEON}),
    ),

    [SPECIES_EMPOLEON] = HARD_MODE(
        .abilities = { ABILITY_TORRENT,  ABILITY_CLEAR_BODY,  ABILITY_COMPETITIVE},
        .levelUpLearnset = sEmpoleonLevelUpLearnset,
        .teachableLearnset = sEmpoleonTeachableLearnset,
        .eggMoveLearnset = sPiplupEggMoveLearnset,
    ),

    [SPECIES_STARLY] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_RECKLESS,  ABILITY_INTIMIDATE},
        .levelUpLearnset = sStarlyLevelUpLearnset,
        .teachableLearnset = sStarlyTeachableLearnset,
        .eggMoveLearnset = sStarlyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_STARAVIA}),
    ),

    [SPECIES_STARAVIA] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_RECKLESS,  ABILITY_INTIMIDATE},
        .levelUpLearnset = sStaraviaLevelUpLearnset,
        .teachableLearnset = sStaraviaTeachableLearnset,
        .eggMoveLearnset = sStarlyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_STARAPTOR}),
    ),

    [SPECIES_STARAPTOR] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_RECKLESS,  ABILITY_INTIMIDATE},
        .levelUpLearnset = sStaraptorLevelUpLearnset,
        .teachableLearnset = sStaraptorTeachableLearnset,
        .eggMoveLearnset = sStarlyEggMoveLearnset,
    ),

    [SPECIES_STARAPTOR_MEGA] = HARD_MODE(
        .abilities = { ABILITY_BAD_COMPANY, ABILITY_BAD_COMPANY, ABILITY_CONTRARY },
        .levelUpLearnset = sStaraptorLevelUpLearnset,
        .teachableLearnset = sStaraptorTeachableLearnset,
    ),

    [SPECIES_BIDOOF] = HARD_MODE(
        .abilities = { ABILITY_UNAWARE,  ABILITY_UNAWARE,  ABILITY_SIMPLE},
        .levelUpLearnset = sBidoofLevelUpLearnset,
        .teachableLearnset = sBidoofTeachableLearnset,
        .eggMoveLearnset = sBidoofEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_BIBAREL}),
    ),

    [SPECIES_BIBAREL] = HARD_MODE(
        .abilities = { ABILITY_UNAWARE,  ABILITY_UNAWARE,  ABILITY_SIMPLE},
        .levelUpLearnset = sBibarelLevelUpLearnset,
        .teachableLearnset = sBibarelTeachableLearnset,
        .eggMoveLearnset = sBidoofEggMoveLearnset,
    ),

    [SPECIES_KRICKETOT] = HARD_MODE(
        .abilities = { ABILITY_TECHNICIAN,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sKricketotLevelUpLearnset,
        .teachableLearnset = sKricketotTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_KRICKETUNE}),
    ),

    [SPECIES_KRICKETUNE] = HARD_MODE(
        .abilities = { ABILITY_TECHNICIAN,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sKricketuneLevelUpLearnset,
        .teachableLearnset = sKricketuneTeachableLearnset,
    ),

    [SPECIES_SHINX] = HARD_MODE(
        .abilities = { ABILITY_GUTS,  ABILITY_INTIMIDATE,  ABILITY_RIVALRY},
        .levelUpLearnset = sShinxLevelUpLearnset,
        .teachableLearnset = sShinxTeachableLearnset,
        .eggMoveLearnset = sShinxEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_LUXIO}),
    ),

    [SPECIES_LUXIO] = HARD_MODE(
        .abilities = { ABILITY_GUTS,  ABILITY_INTIMIDATE,  ABILITY_RIVALRY},
        .levelUpLearnset = sLuxioLevelUpLearnset,
        .teachableLearnset = sLuxioTeachableLearnset,
        .eggMoveLearnset = sShinxEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_LUXRAY}),
    ),

    [SPECIES_LUXRAY] = HARD_MODE(
        .abilities = { ABILITY_GUTS,  ABILITY_INTIMIDATE,  ABILITY_RIVALRY},
        .levelUpLearnset = sLuxrayLevelUpLearnset,
        .teachableLearnset = sLuxrayTeachableLearnset,
        .eggMoveLearnset = sShinxEggMoveLearnset,
    ),

    [SPECIES_CRANIDOS] = HARD_MODE(
        .abilities = { ABILITY_SHEER_FORCE,  ABILITY_MOLD_BREAKER,  ABILITY_NONE},
        .levelUpLearnset = sCranidosLevelUpLearnset,
        .teachableLearnset = sCranidosTeachableLearnset,
        .eggMoveLearnset = sCranidosEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_RAMPARDOS}),
    ),

    [SPECIES_RAMPARDOS] = HARD_MODE(
        .abilities = { ABILITY_SHEER_FORCE,  ABILITY_MOLD_BREAKER,  ABILITY_NONE},
        .levelUpLearnset = sRampardosLevelUpLearnset,
        .teachableLearnset = sRampardosTeachableLearnset,
        .eggMoveLearnset = sCranidosEggMoveLearnset,
    ),

    [SPECIES_SHIELDON] = HARD_MODE(
        .abilities = { ABILITY_STURDY,  ABILITY_SOUNDPROOF,  ABILITY_NONE},
        .levelUpLearnset = sShieldonLevelUpLearnset,
        .teachableLearnset = sShieldonTeachableLearnset,
        .eggMoveLearnset = sShieldonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_BASTIODON}),
    ),

    [SPECIES_BASTIODON] = HARD_MODE(
        .abilities = { ABILITY_DAUNTLESS_SHIELD,  ABILITY_SOUNDPROOF,  ABILITY_NONE},
        .levelUpLearnset = sBastiodonLevelUpLearnset,
        .teachableLearnset = sBastiodonTeachableLearnset,
        .eggMoveLearnset = sShieldonEggMoveLearnset,
    ),

    [SPECIES_BURMY_PLANT] = HARD_MODE(
        .abilities = { ABILITY_SHED_SKIN,  ABILITY_NONE,  ABILITY_OVERCOAT},
        .levelUpLearnset = sBurmyLevelUpLearnset,
        .teachableLearnset = sBurmyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 16, SPECIES_WORMADAM_PLANT}, {EVO_LEVEL_MALE, 16, SPECIES_MOTHIM}),
    ),

    [SPECIES_BURMY_SANDY] = HARD_MODE(
        .abilities = { ABILITY_SHED_SKIN,  ABILITY_NONE,  ABILITY_OVERCOAT},
        .levelUpLearnset = sBurmyLevelUpLearnset,
        .teachableLearnset = sBurmyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 16, SPECIES_WORMADAM_SANDY}, {EVO_LEVEL_MALE, 16, SPECIES_MOTHIM_SANDY}),
    ),

    [SPECIES_BURMY_TRASH] = HARD_MODE(
        .abilities = { ABILITY_SHED_SKIN,  ABILITY_NONE,  ABILITY_OVERCOAT},
        .levelUpLearnset = sBurmyLevelUpLearnset,
        .teachableLearnset = sBurmyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 16, SPECIES_WORMADAM_TRASH}, {EVO_LEVEL_MALE, 16, SPECIES_MOTHIM_TRASH}),
    ),

    [SPECIES_WORMADAM_PLANT] = HARD_MODE(
        .abilities = { ABILITY_OVERCOAT,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sWormadamPlantCloakLevelUpLearnset,
        .teachableLearnset = sWormadamPlantCloakTeachableLearnset,
    ),

    [SPECIES_WORMADAM_SANDY] = HARD_MODE(
        .abilities = { ABILITY_OVERCOAT,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sWormadamSandyLevelUpLearnset,
        .teachableLearnset = sWormadamSandyTeachableLearnset,
    ),

    [SPECIES_WORMADAM_TRASH] = HARD_MODE(
        .abilities = { ABILITY_OVERCOAT,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sWormadamTrashLevelUpLearnset,
        .teachableLearnset = sWormadamTrashTeachableLearnset,
    ),

    [SPECIES_COMBEE] = HARD_MODE(
        .abilities = { ABILITY_SWARM,  ABILITY_HUSTLE,  ABILITY_NONE},
        .levelUpLearnset = sCombeeLevelUpLearnset,
        .teachableLearnset = sCombeeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 21, SPECIES_VESPIQUEN}),
    ),

    [SPECIES_VESPIQUEN] = HARD_MODE(
        .abilities = { ABILITY_QUEENLY_MAJESTY,  ABILITY_UNNERVE,  ABILITY_NONE},
        .levelUpLearnset = sVespiquenLevelUpLearnset,
        .teachableLearnset = sVespiquenTeachableLearnset,
    ),

    [SPECIES_PACHIRISU] = HARD_MODE(
        .abilities = { ABILITY_PRANKSTER,  ABILITY_VOLT_ABSORB,  ABILITY_NONE},
        .levelUpLearnset = sPachirisuLevelUpLearnset,
        .teachableLearnset = sPachirisuTeachableLearnset,
        .eggMoveLearnset = sPachirisuEggMoveLearnset,
    ),

    [SPECIES_BUIZEL] = HARD_MODE(
        .abilities = { ABILITY_TECHNICIAN,  ABILITY_NONE,  ABILITY_WATER_VEIL},
        .levelUpLearnset = sBuizelLevelUpLearnset,
        .teachableLearnset = sBuizelTeachableLearnset,
        .eggMoveLearnset = sBuizelEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_FLOATZEL}),
    ),

    [SPECIES_FLOATZEL] = HARD_MODE(
        .abilities = { ABILITY_TECHNICIAN,  ABILITY_NONE,  ABILITY_WATER_VEIL},
        .levelUpLearnset = sFloatzelLevelUpLearnset,
        .teachableLearnset = sFloatzelTeachableLearnset,
        .eggMoveLearnset = sBuizelEggMoveLearnset,
    ),

    [SPECIES_CHERUBI] = HARD_MODE(
        .abilities = { ABILITY_CHLOROPHYLL,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sCherubiLevelUpLearnset,
        .teachableLearnset = sCherubiTeachableLearnset,
        .eggMoveLearnset = sCherubiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_CHERRIM_OVERCAST}),
    ),

    [SPECIES_CHERRIM_OVERCAST] = HARD_MODE(
        .abilities = { ABILITY_FLOWER_GIFT,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sCherrimLevelUpLearnset,
        .teachableLearnset = sCherrimTeachableLearnset,
        .eggMoveLearnset = sCherubiEggMoveLearnset,
    ),

    [SPECIES_CHERRIM_SUNSHINE] = HARD_MODE(
        .abilities = { ABILITY_FLOWER_GIFT,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sCherrimLevelUpLearnset,
        .teachableLearnset = sCherrimTeachableLearnset,
    ),

    [SPECIES_SHELLOS_WEST] = HARD_MODE(
        .abilities = { ABILITY_STICKY_HOLD,  ABILITY_SAND_FORCE,  ABILITY_STORM_DRAIN},
        .levelUpLearnset = sShellosLevelUpLearnset,
        .teachableLearnset = sShellosTeachableLearnset,
        .eggMoveLearnset = sShellosEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_GASTRODON_WEST}),
    ),

    [SPECIES_SHELLOS_EAST] = HARD_MODE(
        .abilities = { ABILITY_STICKY_HOLD,  ABILITY_SAND_FORCE,  ABILITY_STORM_DRAIN},
        .levelUpLearnset = sShellosLevelUpLearnset,
        .teachableLearnset = sShellosTeachableLearnset,
        .eggMoveLearnset = sShellosEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_GASTRODON_EAST}),
    ),

    [SPECIES_GASTRODON_WEST] = HARD_MODE(
        .abilities = { ABILITY_STICKY_HOLD,  ABILITY_SAND_FORCE,  ABILITY_STORM_DRAIN},
        .levelUpLearnset = sGastrodonLevelUpLearnset,
        .teachableLearnset = sGastrodonTeachableLearnset,
        .eggMoveLearnset = sShellosEggMoveLearnset,
    ),

    [SPECIES_GASTRODON_EAST] = HARD_MODE(
        .abilities = { ABILITY_STICKY_HOLD,  ABILITY_SAND_FORCE,  ABILITY_STORM_DRAIN},
        .levelUpLearnset = sGastrodonLevelUpLearnset,
        .teachableLearnset = sGastrodonTeachableLearnset,
        .eggMoveLearnset = sShellosEggMoveLearnset,
    ),

    [SPECIES_DRIFLOON] = HARD_MODE(
        .abilities = { ABILITY_FLARE_BOOST,  ABILITY_UNBURDEN,  ABILITY_AFTERMATH},
        .levelUpLearnset = sDrifloonLevelUpLearnset,
        .teachableLearnset = sDrifloonTeachableLearnset,
        .eggMoveLearnset = sDrifloonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_DRIFBLIM}),
    ),

    [SPECIES_DRIFBLIM] = HARD_MODE(
        .abilities = { ABILITY_FLARE_BOOST,  ABILITY_UNBURDEN,  ABILITY_AFTERMATH},
        .levelUpLearnset = sDrifblimLevelUpLearnset,
        .teachableLearnset = sDrifblimTeachableLearnset,
        .eggMoveLearnset = sDrifloonEggMoveLearnset,
    ),

    [SPECIES_BUNEARY] = HARD_MODE(
        .abilities = { ABILITY_LIMBER,  ABILITY_NONE,  ABILITY_RUN_AWAY},
        .levelUpLearnset = sBunearyLevelUpLearnset,
        .teachableLearnset = sBunearyTeachableLearnset,
        .eggMoveLearnset = sBunearyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 19, SPECIES_LOPUNNY}),
    ),

    [SPECIES_LOPUNNY] = HARD_MODE(
        .abilities = { ABILITY_LIMBER,  ABILITY_NONE,  ABILITY_CUTE_CHARM},
        .levelUpLearnset = sLopunnyLevelUpLearnset,
        .teachableLearnset = sLopunnyTeachableLearnset,
        .eggMoveLearnset = sBunearyEggMoveLearnset,
    ),

    [SPECIES_LOPUNNY_MEGA] = HARD_MODE(
        .abilities = { ABILITY_SCRAPPY,  ABILITY_SCRAPPY,  ABILITY_SCRAPPY},
        .levelUpLearnset = sLopunnyLevelUpLearnset,
        .teachableLearnset = sLopunnyTeachableLearnset,
    ),

    [SPECIES_GLAMEOW] = HARD_MODE(
        .abilities = { ABILITY_LIMBER,  ABILITY_OWN_TEMPO,  ABILITY_FRISK},
        .levelUpLearnset = sGlameowLevelUpLearnset,
        .teachableLearnset = sGlameowTeachableLearnset,
        .eggMoveLearnset = sGlameowEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PURUGLY}),
    ),

    [SPECIES_PURUGLY] = HARD_MODE(
        .abilities = { ABILITY_THICK_FAT,  ABILITY_OWN_TEMPO,  ABILITY_DEFIANT},
        .levelUpLearnset = sPuruglyLevelUpLearnset,
        .teachableLearnset = sPuruglyTeachableLearnset,
        .eggMoveLearnset = sGlameowEggMoveLearnset,
    ),

    [SPECIES_STUNKY] = HARD_MODE(
        .abilities = { ABILITY_STENCH,  ABILITY_AFTERMATH,  ABILITY_NONE},
        .levelUpLearnset = sStunkyLevelUpLearnset,
        .teachableLearnset = sStunkyTeachableLearnset,
        .eggMoveLearnset = sStunkyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_SKUNTANK}),
    ),

    [SPECIES_SKUNTANK] = HARD_MODE(
        .abilities = { ABILITY_STENCH,  ABILITY_AFTERMATH,  ABILITY_NONE},
        .levelUpLearnset = sSkuntankLevelUpLearnset,
        .teachableLearnset = sSkuntankTeachableLearnset,
        .eggMoveLearnset = sStunkyEggMoveLearnset,
    ),

    [SPECIES_BRONZOR] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_HEATPROOF,  ABILITY_HEAVY_METAL},
        .levelUpLearnset = sBronzorLevelUpLearnset,
        .teachableLearnset = sBronzorTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_BRONZONG}),
    ),

    [SPECIES_BRONZONG] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_HEATPROOF,  ABILITY_HEAVY_METAL},
        .levelUpLearnset = sBronzongLevelUpLearnset,
        .teachableLearnset = sBronzongTeachableLearnset,
    ),

    [SPECIES_CHATOT] = HARD_MODE(
        .abilities = { ABILITY_PUNK_ROCK,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sChatotLevelUpLearnset,
        .teachableLearnset = sChatotTeachableLearnset,
        .eggMoveLearnset = sChatotEggMoveLearnset,
    ),

    [SPECIES_SPIRITOMB] = HARD_MODE(
        .abilities = { ABILITY_INTIMIDATE,  ABILITY_NONE,  ABILITY_PRESSURE},
        .levelUpLearnset = sSpiritombLevelUpLearnset,
        .teachableLearnset = sSpiritombTeachableLearnset,
        .eggMoveLearnset = sSpiritombEggMoveLearnset,
    ),

    [SPECIES_GIBLE] = HARD_MODE(
        .abilities = { ABILITY_ROUGH_SKIN,  ABILITY_NONE,  ABILITY_SAND_VEIL},
        .levelUpLearnset = sGibleLevelUpLearnset,
        .teachableLearnset = sGibleTeachableLearnset,
        .eggMoveLearnset = sGibleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_GABITE}),
    ),

    [SPECIES_GABITE] = HARD_MODE(
        .abilities = { ABILITY_ROUGH_SKIN,  ABILITY_NONE,  ABILITY_SAND_VEIL},
        .levelUpLearnset = sGabiteLevelUpLearnset,
        .teachableLearnset = sGabiteTeachableLearnset,
        .eggMoveLearnset = sGibleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 48, SPECIES_GARCHOMP}),
    ),

    [SPECIES_GARCHOMP] = HARD_MODE(
        .abilities = { ABILITY_ROUGH_SKIN,  ABILITY_NONE,  ABILITY_SAND_VEIL},
        .levelUpLearnset = sGarchompLevelUpLearnset,
        .teachableLearnset = sGarchompTeachableLearnset,
        .eggMoveLearnset = sGibleEggMoveLearnset,
    ),

    [SPECIES_GARCHOMP_MEGA] = HARD_MODE(
        .abilities = { ABILITY_SAND_FORCE,  ABILITY_SAND_FORCE,  ABILITY_SAND_FORCE},
        .levelUpLearnset = sGarchompLevelUpLearnset,
        .teachableLearnset = sGarchompTeachableLearnset,
    ),

    [SPECIES_GARCHOMP_MEGA_Z] = HARD_MODE(
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_ROUGH_SKIN },
        .levelUpLearnset = sGarchompLevelUpLearnset,
        .teachableLearnset = sGarchompTeachableLearnset,
    ),

    [SPECIES_RIOLU] = HARD_MODE(
        .abilities = { ABILITY_STEADFAST,  ABILITY_INNER_FOCUS,  ABILITY_PRANKSTER},
        .levelUpLearnset = sRioluLevelUpLearnset,
        .teachableLearnset = sRioluTeachableLearnset,
        .eggMoveLearnset = sRioluEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_LUCARIO}),
    ),

    [SPECIES_LUCARIO] = HARD_MODE(
        .abilities = { ABILITY_JUSTIFIED,  ABILITY_INNER_FOCUS,  ABILITY_STEADFAST},
        .levelUpLearnset = sLucarioLevelUpLearnset,
        .teachableLearnset = sLucarioTeachableLearnset,
        .eggMoveLearnset = sRioluEggMoveLearnset,
    ),

    [SPECIES_LUCARIO_MEGA] = HARD_MODE(
        .abilities = { ABILITY_ADAPTABILITY,  ABILITY_ADAPTABILITY,  ABILITY_ADAPTABILITY},
        .levelUpLearnset = sLucarioLevelUpLearnset,
        .teachableLearnset = sLucarioTeachableLearnset,
    ),

    [SPECIES_LUCARIO_MEGA_Z] = HARD_MODE(
        .abilities = { ABILITY_STEADFAST, ABILITY_INNER_FOCUS, ABILITY_JUSTIFIED },
        .levelUpLearnset = sLucarioLevelUpLearnset,
        .teachableLearnset = sLucarioTeachableLearnset,
    ),

    [SPECIES_HIPPOPOTAS] = HARD_MODE(
        .abilities = { ABILITY_SAND_FORCE,  ABILITY_SAND_STREAM,  ABILITY_NONE},
        .levelUpLearnset = sHippopotasLevelUpLearnset,
        .teachableLearnset = sHippopotasTeachableLearnset,
        .eggMoveLearnset = sHippopotasEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_HIPPOWDON}),
    ),

    [SPECIES_HIPPOWDON] = HARD_MODE(
        .abilities = { ABILITY_SAND_FORCE,  ABILITY_SAND_STREAM,  ABILITY_NONE},
        .levelUpLearnset = sHippowdonLevelUpLearnset,
        .teachableLearnset = sHippowdonTeachableLearnset,
        .eggMoveLearnset = sHippopotasEggMoveLearnset,
    ),

    [SPECIES_SKORUPI] = HARD_MODE(
        .abilities = { ABILITY_BATTLE_ARMOR,  ABILITY_SNIPER,  ABILITY_NONE},
        .levelUpLearnset = sSkorupiLevelUpLearnset,
        .teachableLearnset = sSkorupiTeachableLearnset,
        .eggMoveLearnset = sSkorupiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_DRAPION}),
    ),

    [SPECIES_DRAPION] = HARD_MODE(
        .abilities = { ABILITY_BATTLE_ARMOR,  ABILITY_SNIPER,  ABILITY_NONE},
        .levelUpLearnset = sDrapionLevelUpLearnset,
        .teachableLearnset = sDrapionTeachableLearnset,
        .eggMoveLearnset = sSkorupiEggMoveLearnset,
    ),

    [SPECIES_CROAGUNK] = HARD_MODE(
        .abilities = { ABILITY_POISON_TOUCH,  ABILITY_NONE,  ABILITY_DRY_SKIN},
        .levelUpLearnset = sCroagunkLevelUpLearnset,
        .teachableLearnset = sCroagunkTeachableLearnset,
        .eggMoveLearnset = sCroagunkEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_TOXICROAK}),
    ),

    [SPECIES_TOXICROAK] = HARD_MODE(
        .abilities = { ABILITY_POISON_TOUCH,  ABILITY_NONE,  ABILITY_DRY_SKIN},
        .levelUpLearnset = sToxicroakLevelUpLearnset,
        .teachableLearnset = sToxicroakTeachableLearnset,
        .eggMoveLearnset = sCroagunkEggMoveLearnset,
    ),

    [SPECIES_CARNIVINE] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sCarnivineLevelUpLearnset,
        .teachableLearnset = sCarnivineTeachableLearnset,
        .eggMoveLearnset = sCarnivineEggMoveLearnset,
    ),

    [SPECIES_FINNEON] = HARD_MODE(
        .abilities = { ABILITY_DAZZLING,  ABILITY_SWIFT_SWIM,  ABILITY_STORM_DRAIN},
        .levelUpLearnset = sFinneonLevelUpLearnset,
        .teachableLearnset = sFinneonTeachableLearnset,
        .eggMoveLearnset = sFinneonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_LUMINEON}),
    ),

    [SPECIES_LUMINEON] = HARD_MODE(
        .abilities = { ABILITY_DAZZLING,  ABILITY_SWIFT_SWIM,  ABILITY_STORM_DRAIN},
        .levelUpLearnset = sLumineonLevelUpLearnset,
        .teachableLearnset = sLumineonTeachableLearnset,
        .eggMoveLearnset = sFinneonEggMoveLearnset,
    ),

    [SPECIES_SNOVER] = HARD_MODE(
        .abilities = { ABILITY_SOUNDPROOF,  ABILITY_NONE,  ABILITY_ICE_BODY},
        .levelUpLearnset = sSnoverLevelUpLearnset,
        .teachableLearnset = sSnoverTeachableLearnset,
        .eggMoveLearnset = sSnoverEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_ABOMASNOW}),
    ),

    [SPECIES_ABOMASNOW] = HARD_MODE(
        .abilities = { ABILITY_SOUNDPROOF,  ABILITY_NONE, ABILITY_SNOW_WARNING },
        .levelUpLearnset = sAbomasnowLevelUpLearnset,
        .teachableLearnset = sAbomasnowTeachableLearnset,
        .eggMoveLearnset = sSnoverEggMoveLearnset,
    ),

    [SPECIES_ABOMASNOW_MEGA] = HARD_MODE(
        .abilities = { ABILITY_SLUSH_RUSH,  ABILITY_SLUSH_RUSH,  ABILITY_SNOW_WARNING},
        .levelUpLearnset = sAbomasnowLevelUpLearnset,
        .teachableLearnset = sAbomasnowTeachableLearnset,
    ),

    [SPECIES_ROTOM] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
    ),

    [SPECIES_ROTOM_HEAT] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sRotomHeatLevelUpLearnset,
        .teachableLearnset = sRotomHeatTeachableLearnset,
    ),

    [SPECIES_ROTOM_WASH] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sRotomWashLevelUpLearnset,
        .teachableLearnset = sRotomWashTeachableLearnset,
    ),

    [SPECIES_ROTOM_FROST] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sRotomFrostLevelUpLearnset,
        .teachableLearnset = sRotomFrostTeachableLearnset,
    ),

    [SPECIES_ROTOM_FAN] = HARD_MODE(
        .abilities = { ABILITY_MOTOR_DRIVE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sRotomFanLevelUpLearnset,
        .teachableLearnset = sRotomFanTeachableLearnset,
    ),

    [SPECIES_ROTOM_MOW] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sRotomCutLevelUpLearnset,
        .teachableLearnset = sRotomCutTeachableLearnset,
    ),

    [SPECIES_UXIE] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sUxieLevelUpLearnset,
        .teachableLearnset = sUxieTeachableLearnset,
    ),

    [SPECIES_MESPRIT] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sMespritLevelUpLearnset,
        .teachableLearnset = sMespritTeachableLearnset,
    ),

    [SPECIES_AZELF] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sAzelfLevelUpLearnset,
        .teachableLearnset = sAzelfTeachableLearnset,
    ),

    [SPECIES_HEATRAN] = HARD_MODE(
        .abilities = { ABILITY_FLAME_BODY,  ABILITY_NONE,  ABILITY_FLASH_FIRE},
        .levelUpLearnset = sHeatranLevelUpLearnset,
        .teachableLearnset = sHeatranTeachableLearnset,
    ),

    [SPECIES_HEATRAN_MEGA] = HARD_MODE(
        .abilities = { ABILITY_FLAME_BODY,  ABILITY_NONE,  ABILITY_FLASH_FIRE},
        .levelUpLearnset = sHeatranLevelUpLearnset,
        .teachableLearnset = sHeatranTeachableLearnset,
    ),

    [SPECIES_CRESSELIA] = HARD_MODE(
        .abilities = { ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sCresseliaLevelUpLearnset,
        .teachableLearnset = sCresseliaTeachableLearnset,
    ),

    [SPECIES_PHIONE] = HARD_MODE(
        .abilities = { ABILITY_HYDRATION,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sPhioneLevelUpLearnset,
        .teachableLearnset = sPhioneTeachableLearnset,
    ),

    [SPECIES_MANAPHY] = HARD_MODE(
        .abilities = { ABILITY_HYDRATION,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sManaphyLevelUpLearnset,
        .teachableLearnset = sManaphyTeachableLearnset,
    ),

    [SPECIES_DARKRAI] = HARD_MODE(
        .abilities = { ABILITY_BAD_DREAMS,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sDarkraiLevelUpLearnset,
        .teachableLearnset = sDarkraiTeachableLearnset,
    ),

    [SPECIES_DARKRAI_MEGA] = HARD_MODE(
        .abilities = { ABILITY_BAD_DREAMS, ABILITY_NONE, ABILITY_NONE },
        .levelUpLearnset = sDarkraiLevelUpLearnset,
        .teachableLearnset = sDarkraiTeachableLearnset,
    ),

    [SPECIES_SHAYMIN_LAND] = HARD_MODE(
        .abilities = { ABILITY_NATURAL_CURE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sShayminLandLevelUpLearnset,
        .teachableLearnset = sShayminLandTeachableLearnset,
    ),

    [SPECIES_SHAYMIN_SKY] = HARD_MODE(
        .abilities = { ABILITY_SERENE_GRACE,  ABILITY_NONE,  ABILITY_NONE},
        .levelUpLearnset = sShayminSkyLevelUpLearnset,
        .teachableLearnset = sShayminSkyTeachableLearnset,
    ),