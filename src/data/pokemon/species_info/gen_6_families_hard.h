[SPECIES_CHESPIN] = HARD_MODE(
        .abilities = {    ABILITY_BULLETPROOF,   ABILITY_IRON_BARBS,   ABILITY_IRON_BARBS   },
        .levelUpLearnset = sChespinLevelUpLearnset,
        .teachableLearnset = sChespinTeachableLearnset,
        .eggMoveLearnset = sChespinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_QUILLADIN}),
    ),

    [SPECIES_QUILLADIN] = HARD_MODE(
        .abilities = {    ABILITY_BULLETPROOF,   ABILITY_IRON_BARBS,   ABILITY_IRON_BARBS   },
        .levelUpLearnset = sQuilladinLevelUpLearnset,
        .teachableLearnset = sQuilladinTeachableLearnset,
        .eggMoveLearnset = sChespinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_CHESNAUGHT}),
    ),

    [SPECIES_CHESNAUGHT] = HARD_MODE(
        .abilities = {    ABILITY_BULLETPROOF,   ABILITY_IRON_BARBS,   ABILITY_IRON_BARBS   },
        .levelUpLearnset = sChesnaughtLevelUpLearnset,
        .teachableLearnset = sChesnaughtTeachableLearnset,
        .eggMoveLearnset = sChespinEggMoveLearnset,
    ),

    [SPECIES_CHESNAUGHT_MEGA] = HARD_MODE(
        .abilities = { ABILITY_BULLETPROOF, ABILITY_BULLETPROOF, ABILITY_STAMINA },
        .levelUpLearnset = sChesnaughtLevelUpLearnset,
        .teachableLearnset = sChesnaughtTeachableLearnset,
    ),

    [SPECIES_FENNEKIN] = HARD_MODE(
        .abilities = {    ABILITY_BLAZE,   ABILITY_MAGIC_GUARD,   ABILITY_NONE   },
        .levelUpLearnset = sFennekinLevelUpLearnset,
        .teachableLearnset = sFennekinTeachableLearnset,
        .eggMoveLearnset = sFennekinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_BRAIXEN}),
    ),

    [SPECIES_BRAIXEN] = HARD_MODE(
        .abilities = {    ABILITY_BLAZE,   ABILITY_MAGIC_GUARD,   ABILITY_NONE   },
        .levelUpLearnset = sBraixenLevelUpLearnset,
        .teachableLearnset = sBraixenTeachableLearnset,
        .eggMoveLearnset = sFennekinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_DELPHOX}),
    ),

    [SPECIES_DELPHOX] = HARD_MODE(
        .abilities = {    ABILITY_BLAZE,   ABILITY_MAGIC_GUARD,   ABILITY_NONE   },
        .levelUpLearnset = sDelphoxLevelUpLearnset,
        .teachableLearnset = sDelphoxTeachableLearnset,
        .eggMoveLearnset = sFennekinEggMoveLearnset,
    ),

    [SPECIES_DELPHOX_MEGA] = HARD_MODE(
        .abilities = { ABILITY_TELEPATHY, ABILITY_TELEPATHY, ABILITY_LEVITATE },
        .levelUpLearnset = sDelphoxLevelUpLearnset,
        .teachableLearnset = sDelphoxTeachableLearnset,
    ),

    [SPECIES_FROAKIE] = HARD_MODE(
        .abilities = {    ABILITY_TORRENT,   ABILITY_PROTEAN,   ABILITY_NONE   },
        .levelUpLearnset = sFroakieLevelUpLearnset,
        .teachableLearnset = sFroakieTeachableLearnset,
        .eggMoveLearnset = sFroakieEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FROGADIER}),
    ),

    [SPECIES_FROGADIER] = HARD_MODE(
        .abilities = {    ABILITY_TORRENT,   ABILITY_PROTEAN,   ABILITY_NONE   },
        .levelUpLearnset = sFrogadierLevelUpLearnset,
        .teachableLearnset = sFrogadierTeachableLearnset,
        .eggMoveLearnset = sFroakieEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_GRENINJA}),
    ),

    [SPECIES_GRENINJA] = HARD_MODE(
        .abilities = {    ABILITY_TORRENT,   ABILITY_PROTEAN,   ABILITY_BATTLE_BOND   },
        .levelUpLearnset = sGreninjaLevelUpLearnset,
        .teachableLearnset = sGreninjaTeachableLearnset,
        .eggMoveLearnset = sFroakieEggMoveLearnset,
    ),

    [SPECIES_GRENINJA_BATTLE_BOND] = HARD_MODE(
        .abilities = {    ABILITY_BATTLE_BOND,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sGreninjaLevelUpLearnset,
        .teachableLearnset = sGreninjaTeachableLearnset,
    ),

    [SPECIES_GRENINJA_ASH] = HARD_MODE(
        .abilities = {    ABILITY_BATTLE_BOND,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sGreninjaLevelUpLearnset,
        .teachableLearnset = sGreninjaTeachableLearnset,
    ),

    [SPECIES_GRENINJA_MEGA] = HARD_MODE(
        .abilities = { ABILITY_PROTEAN, ABILITY_PROTEAN, ABILITY_PROTEAN },
        .levelUpLearnset = sGreninjaLevelUpLearnset,
        .teachableLearnset = sGreninjaTeachableLearnset,
    ),

    [SPECIES_BUNNELBY] = HARD_MODE(
        .abilities = {    ABILITY_HUGE_POWER,   ABILITY_NONE,   ABILITY_CHEEK_POUCH   },
        .levelUpLearnset = sBunnelbyLevelUpLearnset,
        .teachableLearnset = sBunnelbyTeachableLearnset,
        .eggMoveLearnset = sBunnelbyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_DIGGERSBY}),
    ),

    [SPECIES_DIGGERSBY] = HARD_MODE(
        .abilities = {    ABILITY_HUGE_POWER,   ABILITY_NONE,   ABILITY_CHEEK_POUCH   },
        .levelUpLearnset = sDiggersbyLevelUpLearnset,
        .teachableLearnset = sDiggersbyTeachableLearnset,
        .eggMoveLearnset = sBunnelbyEggMoveLearnset,
    ),

    [SPECIES_FLETCHLING] = HARD_MODE(
        .abilities = {    ABILITY_BIG_PECKS,   ABILITY_GALE_WINGS,   ABILITY_NONE   },
        .levelUpLearnset = sFletchlingLevelUpLearnset,
        .teachableLearnset = sFletchlingTeachableLearnset,
        .eggMoveLearnset = sFletchlingEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FLETCHINDER}),
    ),

    [SPECIES_FLETCHINDER] = HARD_MODE(
        .abilities = {    ABILITY_FLAME_BODY,   ABILITY_GALE_WINGS,   ABILITY_NONE   },
        .levelUpLearnset = sFletchinderLevelUpLearnset,
        .teachableLearnset = sFletchinderTeachableLearnset,
        .eggMoveLearnset = sFletchlingEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_TALONFLAME}),
    ),

    [SPECIES_TALONFLAME] = HARD_MODE(
        .abilities = {    ABILITY_FLAME_BODY,   ABILITY_GALE_WINGS,   ABILITY_NONE   },
        .levelUpLearnset = sTalonflameLevelUpLearnset,
        .teachableLearnset = sTalonflameTeachableLearnset,
        .eggMoveLearnset = sFletchlingEggMoveLearnset,
    ),

    [SPECIES_SCATTERBUG_ICY_SNOW] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_ICY_SNOW}),
    ),

    [SPECIES_SCATTERBUG_POLAR] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_POLAR}),
    ),

    [SPECIES_SCATTERBUG_TUNDRA] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_TUNDRA}),
    ),

    [SPECIES_SCATTERBUG_CONTINENTAL] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_CONTINENTAL}),
    ),

    [SPECIES_SCATTERBUG_GARDEN] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_GARDEN}),
    ),

    [SPECIES_SCATTERBUG_ELEGANT] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_ELEGANT}),
    ),

    [SPECIES_SCATTERBUG_MEADOW] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_MEADOW}),
    ),

    [SPECIES_SCATTERBUG_MODERN] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_MODERN}),
    ),

    [SPECIES_SCATTERBUG_MARINE] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_MARINE}),
    ),

    [SPECIES_SCATTERBUG_ARCHIPELAGO] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_ARCHIPELAGO}),
    ),

    [SPECIES_SCATTERBUG_HIGH_PLAINS] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_HIGH_PLAINS}),
    ),

    [SPECIES_SCATTERBUG_SANDSTORM] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_SANDSTORM}),
    ),

    [SPECIES_SCATTERBUG_RIVER] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_RIVER}),
    ),

    [SPECIES_SCATTERBUG_MONSOON] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_MONSOON}),
    ),

    [SPECIES_SCATTERBUG_SAVANNA] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_SAVANNA}),
    ),

    [SPECIES_SCATTERBUG_SUN] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_SUN}),
    ),

    [SPECIES_SCATTERBUG_OCEAN] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_OCEAN}),
    ),

    [SPECIES_SCATTERBUG_JUNGLE] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_JUNGLE}),
    ),

    [SPECIES_SCATTERBUG_FANCY] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_FANCY}),
    ),

    [SPECIES_SCATTERBUG_POKEBALL] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sScatterbugLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_POKEBALL}),
    ),

    [SPECIES_SPEWPA_ICY_SNOW] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_ICY_SNOW}),
    ),

    [SPECIES_SPEWPA_POLAR] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_POLAR}),
    ),

    [SPECIES_SPEWPA_TUNDRA] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_TUNDRA}),
    ),

    [SPECIES_SPEWPA_CONTINENTAL] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_CONTINENTAL}),
    ),

    [SPECIES_SPEWPA_GARDEN] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_GARDEN}),
    ),

    [SPECIES_SPEWPA_ELEGANT] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_ELEGANT}),
    ),

    [SPECIES_SPEWPA_MEADOW] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_MEADOW}),
    ),

    [SPECIES_SPEWPA_MODERN] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_MODERN}),
    ),

    [SPECIES_SPEWPA_MARINE] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_MARINE}),
    ),

    [SPECIES_SPEWPA_ARCHIPELAGO] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_ARCHIPELAGO}),
    ),

    [SPECIES_SPEWPA_HIGH_PLAINS] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_HIGH_PLAINS}),
    ),

    [SPECIES_SPEWPA_SANDSTORM] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_SANDSTORM}),
    ),

    [SPECIES_SPEWPA_RIVER] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_RIVER}),
    ),

    [SPECIES_SPEWPA_MONSOON] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_MONSOON}),
    ),

    [SPECIES_SPEWPA_SAVANNA] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_SAVANNA}),
    ),

    [SPECIES_SPEWPA_SUN] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_SUN}),
    ),

    [SPECIES_SPEWPA_OCEAN] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_OCEAN}),
    ),

    [SPECIES_SPEWPA_JUNGLE] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_JUNGLE}),
    ),

    [SPECIES_SPEWPA_FANCY] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_FANCY}),
    ),

    [SPECIES_SPEWPA_POKEBALL] = HARD_MODE(
        .abilities = {    ABILITY_SHED_SKIN,   ABILITY_NONE,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sSpewpaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_POKEBALL}),
    ),

    [SPECIES_VIVILLON_ICY_SNOW] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_POLAR] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_TUNDRA] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_CONTINENTAL] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_GARDEN] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_ELEGANT] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_MEADOW] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_MODERN] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_MARINE] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_ARCHIPELAGO] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_HIGH_PLAINS] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_SANDSTORM] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_RIVER] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_MONSOON] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_SAVANNA] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_SUN] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_OCEAN] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_JUNGLE] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_FANCY] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_VIVILLON_POKEBALL] = HARD_MODE(
        .abilities = {    ABILITY_SHIELD_DUST,   ABILITY_COMPOUND_EYES,   ABILITY_FRIEND_GUARD   },
        .levelUpLearnset = sVivillonLevelUpLearnset,
        .teachableLearnset = sVivillonTeachableLearnset,
        .eggMoveLearnset = sScatterbugEggMoveLearnset,
    ),

    [SPECIES_LITLEO] = HARD_MODE(
        .abilities = {    ABILITY_MOXIE,   ABILITY_UNNERVE,   ABILITY_RIVALRY   },
        .levelUpLearnset = sLitleoLevelUpLearnset,
        .teachableLearnset = sLitleoTeachableLearnset,
        .eggMoveLearnset = sLitleoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PYROAR}),
    ),

    [SPECIES_PYROAR] = HARD_MODE(
        .abilities = {    ABILITY_ADAPTABILITY,   ABILITY_UNNERVE,   ABILITY_RIVALRY   },
        .levelUpLearnset = sPyroarLevelUpLearnset,
        .teachableLearnset = sPyroarTeachableLearnset,
        .eggMoveLearnset = sLitleoEggMoveLearnset,
    ),

    [SPECIES_PYROAR_MEGA] = HARD_MODE(
        .abilities = { ABILITY_BLAZE, ABILITY_BLAZE, ABILITY_BLAZE },
        .levelUpLearnset = sPyroarLevelUpLearnset,
        .teachableLearnset = sPyroarTeachableLearnset,
    ),

    [SPECIES_FLABEBE_RED] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFlabebeLevelUpLearnset,
        .teachableLearnset = sFlabebeTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FLOETTE_RED}),
    ),

    [SPECIES_FLABEBE_YELLOW] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFlabebeLevelUpLearnset,
        .teachableLearnset = sFlabebeTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FLOETTE_YELLOW}),
    ),

    [SPECIES_FLABEBE_ORANGE] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFlabebeLevelUpLearnset,
        .teachableLearnset = sFlabebeTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FLOETTE_ORANGE}),
    ),

    [SPECIES_FLABEBE_BLUE] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFlabebeLevelUpLearnset,
        .teachableLearnset = sFlabebeTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FLOETTE_BLUE}),
    ),

    [SPECIES_FLABEBE_WHITE] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFlabebeLevelUpLearnset,
        .teachableLearnset = sFlabebeTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FLOETTE_WHITE}),
    ),

    [SPECIES_FLOETTE_RED] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFloetteLevelUpLearnset,
        .teachableLearnset = sFloetteTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_FLORGES_RED}),
    ),

    [SPECIES_FLOETTE_YELLOW] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFloetteLevelUpLearnset,
        .teachableLearnset = sFloetteTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_FLORGES_YELLOW}),
    ),

    [SPECIES_FLOETTE_ORANGE] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFloetteLevelUpLearnset,
        .teachableLearnset = sFloetteTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_FLORGES_ORANGE}),
    ),

    [SPECIES_FLOETTE_BLUE] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFloetteLevelUpLearnset,
        .teachableLearnset = sFloetteTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_FLORGES_BLUE}),
    ),

    [SPECIES_FLOETTE_WHITE] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFloetteLevelUpLearnset,
        .teachableLearnset = sFloetteTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_FLORGES_WHITE}),
    ),

    [SPECIES_FLOETTE_ETERNAL] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFloetteEternalLevelUpLearnset,
        .teachableLearnset = sFloetteEternalTeachableLearnset,
    ),

    [SPECIES_FLORGES_RED] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFlorgesLevelUpLearnset,
        .teachableLearnset = sFlorgesTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset
    ),

    [SPECIES_FLORGES_YELLOW] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFlorgesLevelUpLearnset,
        .teachableLearnset = sFlorgesTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset
    ),

    [SPECIES_FLORGES_ORANGE] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFlorgesLevelUpLearnset,
        .teachableLearnset = sFlorgesTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset
    ),

    [SPECIES_FLORGES_BLUE] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFlorgesLevelUpLearnset,
        .teachableLearnset = sFlorgesTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset
    ),

    [SPECIES_FLORGES_WHITE] = HARD_MODE(
        .abilities = {    ABILITY_NATURAL_CURE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFlorgesLevelUpLearnset,
        .teachableLearnset = sFlorgesTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset
    ),

    [SPECIES_FLOETTE_MEGA] = HARD_MODE(
        .abilities = { ABILITY_FAIRY_AURA, ABILITY_FAIRY_AURA, ABILITY_FAIRY_AURA },
        .levelUpLearnset = sFloetteEternalLevelUpLearnset,
        .teachableLearnset = sFloetteEternalTeachableLearnset,
        .eggMoveLearnset = sFlabebeEggMoveLearnset
    ),

    [SPECIES_SKIDDO] = HARD_MODE(
        .abilities = {    ABILITY_GRASS_PELT,   ABILITY_NONE,   ABILITY_SAP_SIPPER   },
        .levelUpLearnset = sSkiddoLevelUpLearnset,
        .teachableLearnset = sSkiddoTeachableLearnset,
        .eggMoveLearnset = sSkiddoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_GOGOAT}),
    ),

    [SPECIES_GOGOAT] = HARD_MODE(
        .abilities = {    ABILITY_GRASS_PELT,   ABILITY_NONE,   ABILITY_SAP_SIPPER   },
        .levelUpLearnset = sGogoatLevelUpLearnset,
        .teachableLearnset = sGogoatTeachableLearnset,
        .eggMoveLearnset = sSkiddoEggMoveLearnset,
    ),

    [SPECIES_PANCHAM] = HARD_MODE(
        .abilities = {    ABILITY_IRON_FIST,   ABILITY_SCRAPPY,   ABILITY_MOLD_BREAKER   },
        .levelUpLearnset = sPanchamLevelUpLearnset,
        .teachableLearnset = sPanchamTeachableLearnset,
        .eggMoveLearnset = sPanchamEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_PANGORO}),
    ),

    [SPECIES_PANGORO] = HARD_MODE(
        .abilities = {    ABILITY_IRON_FIST,   ABILITY_SCRAPPY,   ABILITY_MOLD_BREAKER   },
        .levelUpLearnset = sPangoroLevelUpLearnset,
        .teachableLearnset = sPangoroTeachableLearnset,
        .eggMoveLearnset = sPanchamEggMoveLearnset,
    ),

    [SPECIES_FURFROU_NATURAL] = HARD_MODE(
        .abilities = {    ABILITY_FUR_COAT,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFurfrouLevelUpLearnset,
        .teachableLearnset = sFurfrouTeachableLearnset,
        .eggMoveLearnset = sFurfrouEggMoveLearnset,
    ),

    [SPECIES_FURFROU_HEART_TRIM] = HARD_MODE(
        .abilities = {    ABILITY_FUR_COAT,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFurfrouLevelUpLearnset,
        .teachableLearnset = sFurfrouTeachableLearnset,
        .eggMoveLearnset = sFurfrouEggMoveLearnset,
    ),

    [SPECIES_FURFROU_STAR_TRIM] = HARD_MODE(
        .abilities = {    ABILITY_FUR_COAT,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFurfrouLevelUpLearnset,
        .teachableLearnset = sFurfrouTeachableLearnset,
        .eggMoveLearnset = sFurfrouEggMoveLearnset,
    ),

    [SPECIES_FURFROU_DIAMOND_TRIM] = HARD_MODE(
        .abilities = {    ABILITY_FUR_COAT,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFurfrouLevelUpLearnset,
        .teachableLearnset = sFurfrouTeachableLearnset,
        .eggMoveLearnset = sFurfrouEggMoveLearnset,
    ),

    [SPECIES_FURFROU_DEBUTANTE_TRIM] = HARD_MODE(
        .abilities = {    ABILITY_FUR_COAT,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFurfrouLevelUpLearnset,
        .teachableLearnset = sFurfrouTeachableLearnset,
        .eggMoveLearnset = sFurfrouEggMoveLearnset,
    ),

    [SPECIES_FURFROU_MATRON_TRIM] = HARD_MODE(
        .abilities = {    ABILITY_FUR_COAT,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFurfrouLevelUpLearnset,
        .teachableLearnset = sFurfrouTeachableLearnset,
        .eggMoveLearnset = sFurfrouEggMoveLearnset,
    ),

    [SPECIES_FURFROU_DANDY_TRIM] = HARD_MODE(
        .abilities = {    ABILITY_FUR_COAT,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFurfrouLevelUpLearnset,
        .teachableLearnset = sFurfrouTeachableLearnset,
        .eggMoveLearnset = sFurfrouEggMoveLearnset,
    ),

    [SPECIES_FURFROU_LA_REINE_TRIM] = HARD_MODE(
        .abilities = {    ABILITY_FUR_COAT,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFurfrouLevelUpLearnset,
        .teachableLearnset = sFurfrouTeachableLearnset,
        .eggMoveLearnset = sFurfrouEggMoveLearnset,
    ),

    [SPECIES_FURFROU_KABUKI_TRIM] = HARD_MODE(
        .abilities = {    ABILITY_FUR_COAT,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFurfrouLevelUpLearnset,
        .teachableLearnset = sFurfrouTeachableLearnset,
        .eggMoveLearnset = sFurfrouEggMoveLearnset,
    ),

    [SPECIES_FURFROU_PHARAOH_TRIM] = HARD_MODE(
        .abilities = {    ABILITY_FUR_COAT,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sFurfrouLevelUpLearnset,
        .teachableLearnset = sFurfrouTeachableLearnset,
        .eggMoveLearnset = sFurfrouEggMoveLearnset,
    ),

    [SPECIES_ESPURR] = HARD_MODE(
        .abilities = {    ABILITY_INFILTRATOR,   ABILITY_INFILTRATOR,   ABILITY_OWN_TEMPO   },
        .levelUpLearnset = sEspurrLevelUpLearnset,
        .teachableLearnset = sEspurrTeachableLearnset,
        .eggMoveLearnset = sEspurrEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_MALE, 23, SPECIES_MEOWSTIC_M}, {EVO_LEVEL_FEMALE, 23, SPECIES_MEOWSTIC_F}),
    ),

    [SPECIES_MEOWSTIC_M] = HARD_MODE(
        .abilities = {    ABILITY_PRANKSTER,   ABILITY_FELINE_PROWESS,   ABILITY_INFILTRATOR   },
        .levelUpLearnset = sMeowsticMLevelUpLearnset,
        .teachableLearnset = sMeowsticMTeachableLearnset,
        .eggMoveLearnset = sEspurrEggMoveLearnset,
    ),

    [SPECIES_MEOWSTIC_F] = HARD_MODE(
        .abilities = {    ABILITY_CLEAR_BODY,   ABILITY_FELINE_PROWESS,   ABILITY_INFILTRATOR   },
        .levelUpLearnset = sMeowsticFLevelUpLearnset,
        .teachableLearnset = sMeowsticFTeachableLearnset,
        .eggMoveLearnset = sEspurrEggMoveLearnset,
    ),

    [SPECIES_MEOWSTIC_M_MEGA] = HARD_MODE(
        .abilities = { ABILITY_TRACE, ABILITY_TRACE, ABILITY_TRACE },
        .levelUpLearnset = sMeowsticMLevelUpLearnset,
        .teachableLearnset = sMeowsticMTeachableLearnset,
    ),

    [SPECIES_MEOWSTIC_F_MEGA] = HARD_MODE(
        .abilities = { ABILITY_TRACE, ABILITY_TRACE, ABILITY_TRACE },
        .levelUpLearnset = sMeowsticFLevelUpLearnset,
        .teachableLearnset = sMeowsticFTeachableLearnset,
    ),

    [SPECIES_HONEDGE] = HARD_MODE(
        .abilities = {    ABILITY_SHARPNESS,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sHonedgeLevelUpLearnset,
        .teachableLearnset = sHonedgeTeachableLearnset,
        .eggMoveLearnset = sHonedgeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_DOUBLADE}),
    ),

    [SPECIES_DOUBLADE] = HARD_MODE(
        .abilities = {    ABILITY_SHARPNESS,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sDoubladeLevelUpLearnset,
        .teachableLearnset = sDoubladeTeachableLearnset,
        .eggMoveLearnset = sHonedgeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_AEGISLASH_SHIELD}),
    ),

    [SPECIES_AEGISLASH_SHIELD] = HARD_MODE(
        .abilities = {    ABILITY_STANCE_CHANGE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sAegislashLevelUpLearnset,
        .teachableLearnset = sAegislashTeachableLearnset,
        .eggMoveLearnset = sHonedgeEggMoveLearnset,
    ),

    [SPECIES_AEGISLASH_BLADE] = HARD_MODE(
        .abilities = {    ABILITY_STANCE_CHANGE,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sAegislashLevelUpLearnset,
        .teachableLearnset = sAegislashTeachableLearnset,
    ),

    [SPECIES_SPRITZEE] = HARD_MODE(
        .abilities = {    ABILITY_FAIRY_AURA,   ABILITY_NONE,   ABILITY_AROMA_VEIL   },
        .levelUpLearnset = sSpritzeeLevelUpLearnset,
        .teachableLearnset = sSpritzeeTeachableLearnset,
        .eggMoveLearnset = sSpritzeeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_AROMATISSE}),
    ),

    [SPECIES_AROMATISSE] = HARD_MODE(
        .abilities = {    ABILITY_FAIRY_AURA,   ABILITY_NONE,   ABILITY_AROMA_VEIL   },
        .levelUpLearnset = sAromatisseLevelUpLearnset,
        .teachableLearnset = sAromatisseTeachableLearnset,
        .eggMoveLearnset = sSpritzeeEggMoveLearnset,
    ),

    [SPECIES_SWIRLIX] = HARD_MODE(
        .abilities = {    ABILITY_UNBURDEN, ABILITY_SWEET_VEIL  , ABILITY_NONE   },
        .levelUpLearnset = sSwirlixLevelUpLearnset,
        .teachableLearnset = sSwirlixTeachableLearnset,
        .eggMoveLearnset = sSwirlixEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_SLURPUFF}),
    ),

    [SPECIES_SLURPUFF] = HARD_MODE(
        .abilities = {    ABILITY_UNBURDEN, ABILITY_SWEET_VEIL  , ABILITY_NONE   },
        .levelUpLearnset = sSlurpuffLevelUpLearnset,
        .teachableLearnset = sSlurpuffTeachableLearnset,
        .eggMoveLearnset = sSwirlixEggMoveLearnset,
    ),

    [SPECIES_INKAY] = HARD_MODE(
        .abilities = {ABILITY_CONTRARY, ABILITY_CONTRARY, ABILITY_SUCTION_CUPS},
        .levelUpLearnset = sInkayLevelUpLearnset,
        .teachableLearnset = sInkayTeachableLearnset,
        .eggMoveLearnset = sInkayEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MALAMAR}),
    ),

    [SPECIES_MALAMAR] = HARD_MODE(
        .abilities = {ABILITY_CONTRARY, ABILITY_CONTRARY, ABILITY_SUCTION_CUPS},
        .levelUpLearnset = sMalamarLevelUpLearnset,
        .teachableLearnset = sMalamarTeachableLearnset,
        .eggMoveLearnset = sInkayEggMoveLearnset,
    ),

    [SPECIES_MALAMAR_MEGA] = HARD_MODE(
        .abilities = { ABILITY_BAD_COMPANY, ABILITY_BAD_COMPANY, ABILITY_CONTRARY },
        .levelUpLearnset = sMalamarLevelUpLearnset,
        .teachableLearnset = sMalamarTeachableLearnset,
    ),

    [SPECIES_BINACLE] = HARD_MODE(
        .abilities = {    ABILITY_TOUGH_CLAWS,   ABILITY_SNIPER,   ABILITY_INFILTRATOR   },
        .levelUpLearnset = sBinacleLevelUpLearnset,
        .teachableLearnset = sBinacleTeachableLearnset,
        .eggMoveLearnset = sBinacleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_BARBARACLE}),
    ),

    [SPECIES_BARBARACLE] = HARD_MODE(
        .abilities = {    ABILITY_TOUGH_CLAWS,   ABILITY_SNIPER,   ABILITY_INFILTRATOR   },
        .levelUpLearnset = sBarbaracleLevelUpLearnset,
        .teachableLearnset = sBarbaracleTeachableLearnset,
        .eggMoveLearnset = sBinacleEggMoveLearnset,
    ),

    [SPECIES_BARBARACLE_MEGA] = HARD_MODE(
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .levelUpLearnset = sBarbaracleLevelUpLearnset,
        .teachableLearnset = sBarbaracleTeachableLearnset,
    ),

    [SPECIES_SKRELP] = HARD_MODE(
        .abilities = {ABILITY_ADAPTABILITY, ABILITY_NONE, ABILITY_POISON_TOUCH},
        .levelUpLearnset = sSkrelpLevelUpLearnset,
        .teachableLearnset = sSkrelpTeachableLearnset,
        .eggMoveLearnset = sSkrelpEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 44, SPECIES_DRAGALGE}),
    ),

    [SPECIES_DRAGALGE] = HARD_MODE(
        .abilities = {ABILITY_ADAPTABILITY, ABILITY_NONE, ABILITY_POISON_TOUCH},
        .levelUpLearnset = sDragalgeLevelUpLearnset,
        .teachableLearnset = sDragalgeTeachableLearnset,
        .eggMoveLearnset = sSkrelpEggMoveLearnset,
    ),

    [SPECIES_DRAGALGE_MEGA] = HARD_MODE(
        .abilities = { ABILITY_PARASITIC_WASTE, ABILITY_PARASITIC_WASTE, ABILITY_REGENERATOR },
        .levelUpLearnset = sDragalgeLevelUpLearnset,
        .teachableLearnset = sDragalgeTeachableLearnset,
    ),

    [SPECIES_CLAUNCHER] = HARD_MODE(
        .abilities = {    ABILITY_MEGA_LAUNCHER,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sClauncherLevelUpLearnset,
        .teachableLearnset = sClauncherTeachableLearnset,
        .eggMoveLearnset = sClauncherEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_CLAWITZER}),
    ),

    [SPECIES_CLAWITZER] = HARD_MODE(
        .abilities = {    ABILITY_MEGA_LAUNCHER,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sClawitzerLevelUpLearnset,
        .teachableLearnset = sClawitzerTeachableLearnset,
        .eggMoveLearnset = sClauncherEggMoveLearnset,
    ),

    [SPECIES_HELIOPTILE] = HARD_MODE(
        .abilities = {ABILITY_SOLAR_POWER, ABILITY_SOLAR_POWER, ABILITY_DRY_SKIN},
        .levelUpLearnset = sHelioptileLevelUpLearnset,
        .teachableLearnset = sHelioptileTeachableLearnset,
        .eggMoveLearnset = sHelioptileEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SUN_STONE, SPECIES_HELIOLISK}),
    ),

    [SPECIES_HELIOLISK] = HARD_MODE(
        .abilities = {ABILITY_SOLAR_POWER, ABILITY_SOLAR_POWER, ABILITY_DRY_SKIN},
        .levelUpLearnset = sHelioliskLevelUpLearnset,
        .teachableLearnset = sHelioliskTeachableLearnset,
        .eggMoveLearnset = sHelioptileEggMoveLearnset,
    ),

    [SPECIES_TYRUNT] = HARD_MODE(
        .abilities = {    ABILITY_STRONG_JAW,   ABILITY_STURDY,   ABILITY_NONE   },
        .levelUpLearnset = sTyruntLevelUpLearnset,
        .teachableLearnset = sTyruntTeachableLearnset,
        .eggMoveLearnset = sTyruntEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_DAY, 39, SPECIES_TYRANTRUM}),
    ),

    [SPECIES_TYRANTRUM] = HARD_MODE(
        .abilities = {    ABILITY_STRONG_JAW,   ABILITY_ROCK_HEAD,   ABILITY_NONE   },
        .levelUpLearnset = sTyrantrumLevelUpLearnset,
        .teachableLearnset = sTyrantrumTeachableLearnset,
        .eggMoveLearnset = sTyruntEggMoveLearnset,
    ),

    [SPECIES_AMAURA] = HARD_MODE(
        .abilities = {    ABILITY_REFRIGERATE,   ABILITY_NONE,   ABILITY_SNOW_WARNING   },
        .levelUpLearnset = sAmauraLevelUpLearnset,
        .teachableLearnset = sAmauraTeachableLearnset,
        .eggMoveLearnset = sAmauraEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_NIGHT, 39, SPECIES_AURORUS}),
    ),

    [SPECIES_AURORUS] = HARD_MODE(
        .abilities = {    ABILITY_REFRIGERATE,   ABILITY_NONE,   ABILITY_SNOW_WARNING   },
        .levelUpLearnset = sAurorusLevelUpLearnset,
        .teachableLearnset = sAurorusTeachableLearnset,
        .eggMoveLearnset = sAmauraEggMoveLearnset,
    ),

    [SPECIES_HAWLUCHA] = HARD_MODE(
        .abilities = {    ABILITY_UNBURDEN,   ABILITY_UNBURDEN,   ABILITY_MOLD_BREAKER   },
        .levelUpLearnset = sHawluchaLevelUpLearnset,
        .teachableLearnset = sHawluchaTeachableLearnset,
        .eggMoveLearnset = sHawluchaEggMoveLearnset,
    ),

    [SPECIES_HAWLUCHA_MEGA] = HARD_MODE(
        .abilities = { ABILITY_NO_GUARD, ABILITY_NO_GUARD, ABILITY_NO_GUARD },
        .levelUpLearnset = sHawluchaLevelUpLearnset,
        .teachableLearnset = sHawluchaTeachableLearnset,
    ),

    [SPECIES_DEDENNE] = HARD_MODE(
        .abilities = {    ABILITY_CHEEK_POUCH,   ABILITY_CHEEK_POUCH,   ABILITY_ELECTRIC_SURGE   },
        .levelUpLearnset = sDedenneLevelUpLearnset,
        .teachableLearnset = sDedenneTeachableLearnset,
        .eggMoveLearnset = sDedenneEggMoveLearnset,
    ),

    [SPECIES_CARBINK] = HARD_MODE(
        .abilities = {    ABILITY_CLEAR_BODY,   ABILITY_STURDY,   ABILITY_NONE   },
        .levelUpLearnset = sCarbinkLevelUpLearnset,
        .teachableLearnset = sCarbinkTeachableLearnset,
    ),

    [SPECIES_GOOMY] = HARD_MODE(
        .abilities = {    ABILITY_GOOEY,   ABILITY_GOOEY,   ABILITY_SAP_SIPPER   },
        .levelUpLearnset = sGoomyLevelUpLearnset,
        .teachableLearnset = sGoomyTeachableLearnset,
        .eggMoveLearnset = sGoomyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_SLIGGOO}, {EVO_ITEM, ITEM_METAL_COAT, SPECIES_SLIGGOO_HISUI}),
    ),

    [SPECIES_SLIGGOO] = HARD_MODE(
        .abilities = {    ABILITY_GOOEY,   ABILITY_GOOEY,   ABILITY_SAP_SIPPER   },
        .levelUpLearnset = sSliggooLevelUpLearnset,
        .teachableLearnset = sSliggooTeachableLearnset,
        .eggMoveLearnset = sGoomyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_RAIN, 45, SPECIES_GOODRA}, {EVO_LEVEL_FOG, 45, SPECIES_GOODRA}),
    ),

    [SPECIES_GOODRA] = HARD_MODE(
        .abilities = {    ABILITY_GOOEY,   ABILITY_GOOEY,   ABILITY_SAP_SIPPER   },
        .levelUpLearnset = sGoodraLevelUpLearnset,
        .teachableLearnset = sGoodraTeachableLearnset,
        .eggMoveLearnset = sGoomyEggMoveLearnset,
    ),

    [SPECIES_SLIGGOO_HISUI] = HARD_MODE(
        .abilities = {    ABILITY_SHELL_ARMOR,   ABILITY_SHELL_ARMOR,   ABILITY_SAP_SIPPER   },
        .levelUpLearnset = sSliggooHisuiLevelUpLearnset,
        .teachableLearnset = sSliggooHisuiTeachableLearnset,
        .eggMoveLearnset = sGoomyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_RAIN, 50, SPECIES_GOODRA_HISUI}, {EVO_LEVEL_FOG, 50, SPECIES_GOODRA_HISUI}),
    ),

    [SPECIES_GOODRA_HISUI] = HARD_MODE(
        .abilities = {    ABILITY_SHELL_ARMOR,   ABILITY_SHELL_ARMOR,   ABILITY_SAP_SIPPER   },
        .levelUpLearnset = sGoodraHisuiLevelUpLearnset,
        .teachableLearnset = sGoodraHisuiTeachableLearnset,
        .eggMoveLearnset = sGoomyEggMoveLearnset,
    ),

    [SPECIES_KLEFKI] = HARD_MODE(
        .abilities = {    ABILITY_PRANKSTER,   ABILITY_NONE,   ABILITY_MAGICIAN   },
        .levelUpLearnset = sKlefkiLevelUpLearnset,
        .teachableLearnset = sKlefkiTeachableLearnset,
        .eggMoveLearnset = sKlefkiEggMoveLearnset,
    ),

    [SPECIES_PHANTUMP] = HARD_MODE(
        .abilities = {    ABILITY_HARVEST,   ABILITY_HARVEST,   ABILITY_NATURAL_CURE   },
        .levelUpLearnset = sPhantumpLevelUpLearnset,
        .teachableLearnset = sPhantumpTeachableLearnset,
        .eggMoveLearnset = sPhantumpEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_TREVENANT}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_TREVENANT}),
    ),

    [SPECIES_TREVENANT] = HARD_MODE(
        .abilities = {    ABILITY_HARVEST,   ABILITY_HARVEST,   ABILITY_NATURAL_CURE   },
        .levelUpLearnset = sTrevenantLevelUpLearnset,
        .teachableLearnset = sTrevenantTeachableLearnset,
        .eggMoveLearnset = sPhantumpEggMoveLearnset,
    ),

    [SPECIES_PUMPKABOO_AVERAGE] = HARD_MODE(
        .abilities = {    ABILITY_FLARE_BOOST,   ABILITY_FLARE_BOOST,   ABILITY_FLARE_BOOST   },
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_AVERAGE}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOURGEIST_AVERAGE}),
    ),

    [SPECIES_PUMPKABOO_SMALL] = HARD_MODE(
        .abilities = {    ABILITY_FLARE_BOOST,   ABILITY_FLARE_BOOST,   ABILITY_INSOMNIA   },
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_SMALL}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOURGEIST_SMALL}),
    ),

    [SPECIES_PUMPKABOO_LARGE] = HARD_MODE(
        .abilities = {    ABILITY_FLARE_BOOST,   ABILITY_FLARE_BOOST,   ABILITY_INSOMNIA   },
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_LARGE}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOURGEIST_LARGE}),
    ),

    [SPECIES_PUMPKABOO_SUPER] = HARD_MODE(
        .abilities = {    ABILITY_FLARE_BOOST,   ABILITY_FLARE_BOOST,   ABILITY_INSOMNIA   },
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_SUPER}, {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOURGEIST_SUPER}),
    ),

    [SPECIES_GOURGEIST_AVERAGE] = HARD_MODE(
        .abilities = {    ABILITY_FLARE_BOOST,   ABILITY_FLARE_BOOST,   ABILITY_FLARE_BOOST   },
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
    ),

    [SPECIES_GOURGEIST_SMALL] = HARD_MODE(
        .abilities = {    ABILITY_FLARE_BOOST,   ABILITY_FLARE_BOOST,   ABILITY_FLARE_BOOST   },
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
    ),

    [SPECIES_GOURGEIST_LARGE] = HARD_MODE(
        .abilities = {    ABILITY_FLARE_BOOST,   ABILITY_FLARE_BOOST,   ABILITY_FLARE_BOOST   },
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
    ),

    [SPECIES_GOURGEIST_SUPER] = HARD_MODE(
        .abilities = {    ABILITY_FLARE_BOOST,   ABILITY_FLARE_BOOST,   ABILITY_FLARE_BOOST   },
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
    ),

    [SPECIES_BERGMITE] = HARD_MODE(
        .abilities = {    ABILITY_OWN_TEMPO,   ABILITY_STURDY,   ABILITY_ICE_BODY   },
        .levelUpLearnset = sBergmiteLevelUpLearnset,
        .teachableLearnset = sBergmiteTeachableLearnset,
        .eggMoveLearnset = sBergmiteEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_AVALUGG}, {EVO_ITEM, ITEM_ICE_STONE, SPECIES_AVALUGG_HISUI}),
    ),

    [SPECIES_AVALUGG] = HARD_MODE(
        .abilities = {    ABILITY_FILTER,   ABILITY_STURDY,   ABILITY_ICE_BODY   },
        .levelUpLearnset = sAvaluggLevelUpLearnset,
        .teachableLearnset = sAvaluggTeachableLearnset,
        .eggMoveLearnset = sBergmiteEggMoveLearnset,
    ),

    [SPECIES_AVALUGG_HISUI] = HARD_MODE(
        .abilities = {    ABILITY_STRONG_JAW,   ABILITY_STURDY,   ABILITY_TECHNICIAN   },
        .levelUpLearnset = sAvaluggHisuiLevelUpLearnset,
        .teachableLearnset = sAvaluggHisuiTeachableLearnset,
        .eggMoveLearnset = sBergmiteEggMoveLearnset,
    ),

    [SPECIES_NOIBAT] = HARD_MODE(
        .abilities = {    ABILITY_TELEPATHY,   ABILITY_INFILTRATOR,   ABILITY_INFILTRATOR   },
        .levelUpLearnset = sNoibatLevelUpLearnset,
        .teachableLearnset = sNoibatTeachableLearnset,
        .eggMoveLearnset = sNoibatEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_NOIVERN}),
    ),

    [SPECIES_NOIVERN] = HARD_MODE(
        .abilities = {    ABILITY_TELEPATHY,   ABILITY_INFILTRATOR,   ABILITY_INFILTRATOR   },
        .levelUpLearnset = sNoivernLevelUpLearnset,
        .teachableLearnset = sNoivernTeachableLearnset,
        .eggMoveLearnset = sNoibatEggMoveLearnset,
    ),

    [SPECIES_DIANCIE] = HARD_MODE(
        .abilities = {    ABILITY_CLEAR_BODY,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sDiancieLevelUpLearnset,
        .teachableLearnset = sDiancieTeachableLearnset,
    ),

    [SPECIES_HOOPA_CONFINED] = HARD_MODE(
        .abilities = {    ABILITY_MAGICIAN,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sHoopaConfinedLevelUpLearnset,
        .teachableLearnset = sHoopaConfinedTeachableLearnset,
    ),

    [SPECIES_HOOPA_UNBOUND] = HARD_MODE(
        .abilities = {    ABILITY_MAGICIAN,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sHoopaUnboundLevelUpLearnset,
        .teachableLearnset = sHoopaUnboundTeachableLearnset,
    ),

    [SPECIES_VOLCANION] = HARD_MODE(
        .abilities = {    ABILITY_WATER_ABSORB,   ABILITY_NONE,   ABILITY_NONE   },
        .levelUpLearnset = sVolcanionLevelUpLearnset,
        .teachableLearnset = sVolcanionTeachableLearnset,
    ),

