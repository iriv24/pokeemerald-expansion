[SPECIES_CHIKORITA] = HARD_MODE(
        .abilities = {ABILITY_SELF_SUFFICIENT,  ABILITY_NONE,  ABILITY_LEAF_GUARD },
        .levelUpLearnset = sChikoritaLevelUpLearnset,
        .teachableLearnset = sChikoritaTeachableLearnset,
        .eggMoveLearnset = sChikoritaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_BAYLEEF}),
    ),

    [SPECIES_BAYLEEF] = HARD_MODE(
        .abilities = {ABILITY_SELF_SUFFICIENT,  ABILITY_NONE,  ABILITY_LEAF_GUARD },
        .levelUpLearnset = sBayleefLevelUpLearnset,
        .teachableLearnset = sBayleefTeachableLearnset,
        .eggMoveLearnset = sChikoritaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_MEGANIUM}),
    ),

    [SPECIES_MEGANIUM] = HARD_MODE(
        .abilities = {ABILITY_SELF_SUFFICIENT,  ABILITY_NONE,  ABILITY_TRIAGE },
        .levelUpLearnset = sMeganiumLevelUpLearnset,
        .teachableLearnset = sMeganiumTeachableLearnset,
        .eggMoveLearnset = sChikoritaEggMoveLearnset,
    ),

    [SPECIES_MEGANIUM_MEGA] = HARD_MODE(
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LEAF_GUARD },
        .levelUpLearnset = sMeganiumLevelUpLearnset,
        .teachableLearnset = sMeganiumTeachableLearnset,
    ),

    [SPECIES_CYNDAQUIL] = HARD_MODE(
        .abilities = {ABILITY_BLAZE,  ABILITY_NONE,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sCyndaquilLevelUpLearnset,
        .teachableLearnset = sCyndaquilTeachableLearnset,
        .eggMoveLearnset = sCyndaquilEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_QUILAVA}),
    ),

    [SPECIES_QUILAVA] = HARD_MODE(
        .abilities = {ABILITY_BLAZE,  ABILITY_NONE,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sQuilavaLevelUpLearnset,
        .teachableLearnset = sQuilavaTeachableLearnset,
        .eggMoveLearnset = sCyndaquilEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_DAY, 36, SPECIES_TYPHLOSION}, {EVO_LEVEL_NIGHT, 36, SPECIES_TYPHLOSION_HISUI}),
    ),

    [SPECIES_TYPHLOSION] = HARD_MODE(
        .abilities = {ABILITY_BLAZING_SOUL,  ABILITY_NONE,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sTyphlosionLevelUpLearnset,
        .teachableLearnset = sTyphlosionTeachableLearnset,
        .eggMoveLearnset = sCyndaquilEggMoveLearnset,
    ),

    [SPECIES_TYPHLOSION_HISUI] = HARD_MODE(
        .abilities = {ABILITY_BLAZE,  ABILITY_NONE,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sTyphlosionHisuiLevelUpLearnset,
        .teachableLearnset = sTyphlosionHisuiTeachableLearnset,
        .eggMoveLearnset = sCyndaquilEggMoveLearnset,
    ),

    [SPECIES_TOTODILE] = HARD_MODE(
        .abilities = {ABILITY_SHEER_FORCE,  ABILITY_STRONG_JAW,  ABILITY_NONE },
        .levelUpLearnset = sTotodileLevelUpLearnset,
        .teachableLearnset = sTotodileTeachableLearnset,
        .eggMoveLearnset = sTotodileEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_CROCONAW}),
    ),

    [SPECIES_CROCONAW] = HARD_MODE(
        .abilities = {ABILITY_SHEER_FORCE,  ABILITY_STRONG_JAW,  ABILITY_NONE },
        .levelUpLearnset = sCroconawLevelUpLearnset,
        .teachableLearnset = sCroconawTeachableLearnset,
        .eggMoveLearnset = sTotodileEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_FERALIGATR}),
    ),

    [SPECIES_FERALIGATR] = HARD_MODE(
        .abilities = {ABILITY_SHEER_FORCE,  ABILITY_STRONG_JAW,  ABILITY_NONE },
        .levelUpLearnset = sFeraligatrLevelUpLearnset,
        .teachableLearnset = sFeraligatrTeachableLearnset,
        .eggMoveLearnset = sTotodileEggMoveLearnset,
    ),

    [SPECIES_FERALIGATR_MEGA] = HARD_MODE(
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .levelUpLearnset = sFeraligatrLevelUpLearnset,
        .teachableLearnset = sFeraligatrTeachableLearnset,
    ),

    [SPECIES_SENTRET] = HARD_MODE(
        .abilities = {ABILITY_ADAPTABILITY,  ABILITY_ADAPTABILITY,  ABILITY_NONE },
        .levelUpLearnset = sSentretLevelUpLearnset,
        .teachableLearnset = sSentretTeachableLearnset,
        .eggMoveLearnset = sSentretEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_FURRET}),
    ),

    [SPECIES_FURRET] = HARD_MODE(
        .abilities = {ABILITY_ADAPTABILITY,  ABILITY_ADAPTABILITY,  ABILITY_NONE },
        .levelUpLearnset = sFurretLevelUpLearnset,
        .teachableLearnset = sFurretTeachableLearnset,
        .eggMoveLearnset = sSentretEggMoveLearnset,
    ),

    [SPECIES_HOOTHOOT] = HARD_MODE(
        .abilities = {ABILITY_TINTED_LENS,  ABILITY_INSOMNIA,  ABILITY_INSOMNIA },
        .levelUpLearnset = sHoothootLevelUpLearnset,
        .teachableLearnset = sHoothootTeachableLearnset,
        .eggMoveLearnset = sHoothootEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_NOCTOWL}),
    ),

    [SPECIES_NOCTOWL] = HARD_MODE(
        .abilities = {ABILITY_TINTED_LENS,  ABILITY_INSOMNIA,  ABILITY_INSOMNIA },
        .levelUpLearnset = sNoctowlLevelUpLearnset,
        .teachableLearnset = sNoctowlTeachableLearnset,
        .eggMoveLearnset = sHoothootEggMoveLearnset,
    ),

    [SPECIES_LEDYBA] = HARD_MODE(
        .abilities = {ABILITY_SWARM,  ABILITY_SWARM,  ABILITY_NONE },
        .levelUpLearnset = sLedybaLevelUpLearnset,
        .teachableLearnset = sLedybaTeachableLearnset,
        .eggMoveLearnset = sLedybaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LEDIAN}),
    ),

    [SPECIES_LEDIAN] = HARD_MODE(
        .abilities = {ABILITY_IRON_FIST,  ABILITY_IRON_FIST,  ABILITY_NONE },
        .levelUpLearnset = sLedianLevelUpLearnset,
        .teachableLearnset = sLedianTeachableLearnset,
        .eggMoveLearnset = sLedybaEggMoveLearnset,
    ),

    [SPECIES_SPINARAK] = HARD_MODE(
        .abilities = {ABILITY_SWARM,  ABILITY_INSOMNIA,  ABILITY_SNIPER },
        .levelUpLearnset = sSpinarakLevelUpLearnset,
        .teachableLearnset = sSpinarakTeachableLearnset,
        .eggMoveLearnset = sSpinarakEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_ARIADOS}),
    ),

    [SPECIES_ARIADOS] = HARD_MODE(
        .abilities = {ABILITY_SWARM,  ABILITY_NO_GUARD,  ABILITY_SNIPER },
        .levelUpLearnset = sAriadosLevelUpLearnset,
        .teachableLearnset = sAriadosTeachableLearnset,
        .eggMoveLearnset = sSpinarakEggMoveLearnset,
    ),

    [SPECIES_CHINCHOU] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_VOLT_ABSORB,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sChinchouLevelUpLearnset,
        .teachableLearnset = sChinchouTeachableLearnset,
        .eggMoveLearnset = sChinchouEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_LANTURN}),
    ),

    [SPECIES_LANTURN] = HARD_MODE(
        .abilities = {ABILITY_VOLT_ABSORB,  ABILITY_VOLT_ABSORB,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sLanturnLevelUpLearnset,
        .teachableLearnset = sLanturnTeachableLearnset,
        .eggMoveLearnset = sChinchouEggMoveLearnset,
    ),

    [SPECIES_TOGEPI] = HARD_MODE(
        .abilities = {ABILITY_SERENE_GRACE,  ABILITY_SUPER_LUCK,  ABILITY_HUSTLE },
        .levelUpLearnset = sTogepiLevelUpLearnset,
        .teachableLearnset = sTogepiTeachableLearnset,
        .eggMoveLearnset = sTogepiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_TOGETIC}),
    ),

    [SPECIES_TOGETIC] = HARD_MODE(
        .abilities = {ABILITY_SERENE_GRACE,  ABILITY_SUPER_LUCK,  ABILITY_HUSTLE },
        .levelUpLearnset = sTogeticLevelUpLearnset,
        .teachableLearnset = sTogeticTeachableLearnset,
        .eggMoveLearnset = sTogepiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_TOGEKISS}),
    ),

    [SPECIES_TOGEKISS] = HARD_MODE(
        .abilities = {ABILITY_SERENE_GRACE,  ABILITY_SUPER_LUCK,  ABILITY_HUSTLE },
        .levelUpLearnset = sTogekissLevelUpLearnset,
        .teachableLearnset = sTogekissTeachableLearnset,
        .eggMoveLearnset = sTogepiEggMoveLearnset,
    ),

    [SPECIES_NATU] = HARD_MODE(
        .abilities = {ABILITY_SYNCHRONIZE,  ABILITY_MAGIC_GUARD,  ABILITY_MAGIC_BOUNCE },
        .levelUpLearnset = sNatuLevelUpLearnset,
        .teachableLearnset = sNatuTeachableLearnset,
        .eggMoveLearnset = sNatuEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_XATU}),
    ),

    [SPECIES_XATU] = HARD_MODE(
        .abilities = {ABILITY_SYNCHRONIZE,  ABILITY_MAGIC_GUARD,  ABILITY_MAGIC_BOUNCE },
        .levelUpLearnset = sXatuLevelUpLearnset,
        .teachableLearnset = sXatuTeachableLearnset,
        .eggMoveLearnset = sNatuEggMoveLearnset,
    ),

    [SPECIES_MAREEP] = HARD_MODE(
        .abilities = {ABILITY_STATIC,  ABILITY_NONE,  ABILITY_PLUS },
        .levelUpLearnset = sMareepLevelUpLearnset,
        .teachableLearnset = sMareepTeachableLearnset,
        .eggMoveLearnset = sMareepEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_FLAAFFY}),
    ),

    [SPECIES_FLAAFFY] = HARD_MODE(
        .abilities = {ABILITY_STATIC,  ABILITY_NONE,  ABILITY_PLUS },
        .levelUpLearnset = sFlaaffyLevelUpLearnset,
        .teachableLearnset = sFlaaffyTeachableLearnset,
        .eggMoveLearnset = sMareepEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_AMPHAROS}),
    ),

    [SPECIES_AMPHAROS] = HARD_MODE(
        .abilities = {ABILITY_STATIC,  ABILITY_NONE,  ABILITY_PLUS },
        .levelUpLearnset = sAmpharosLevelUpLearnset,
        .teachableLearnset = sAmpharosTeachableLearnset,
        .eggMoveLearnset = sMareepEggMoveLearnset,
    ),

    [SPECIES_AMPHAROS_MEGA] = HARD_MODE(
        .abilities = {ABILITY_MOLD_BREAKER,  ABILITY_NONE,  ABILITY_THICK_FAT },
        .levelUpLearnset = sAmpharosLevelUpLearnset,
        .teachableLearnset = sAmpharosTeachableLearnset,
    ),

    [SPECIES_AZURILL] = HARD_MODE(
        .abilities = {ABILITY_HUGE_POWER,  ABILITY_HUGE_POWER,  ABILITY_SAP_SIPPER },
        .levelUpLearnset = sAzurillLevelUpLearnset,
        .teachableLearnset = sAzurillTeachableLearnset,
        .eggMoveLearnset = sAzurillEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_MARILL}),
    ),

    [SPECIES_MARILL] = HARD_MODE(
        .abilities = {ABILITY_HUGE_POWER,  ABILITY_HUGE_POWER,  ABILITY_SAP_SIPPER },
        .levelUpLearnset = sMarillLevelUpLearnset,
        .teachableLearnset = sMarillTeachableLearnset,
        .eggMoveLearnset = sMarillEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_AZUMARILL}),
    ),

    [SPECIES_AZUMARILL] = HARD_MODE(
        .abilities = {ABILITY_HUGE_POWER,  ABILITY_HUGE_POWER,  ABILITY_SAP_SIPPER },
        .levelUpLearnset = sAzumarillLevelUpLearnset,
        .teachableLearnset = sAzumarillTeachableLearnset,
        .eggMoveLearnset = sMarillEggMoveLearnset,
    ),

    [SPECIES_BONSLY] = HARD_MODE(
        .abilities = {ABILITY_STURDY,  ABILITY_ROCK_HEAD,  ABILITY_NONE },
        .levelUpLearnset = sBonslyLevelUpLearnset,
        .teachableLearnset = sBonslyTeachableLearnset,
        .eggMoveLearnset = sBonslyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_SUDOWOODO}),
    ),

    [SPECIES_SUDOWOODO] = HARD_MODE(
        .abilities = {ABILITY_STURDY,  ABILITY_ROCK_HEAD,  ABILITY_NONE },
        .levelUpLearnset = sSudowoodoLevelUpLearnset,
        .teachableLearnset = sSudowoodoTeachableLearnset,
        .eggMoveLearnset = sSudowoodoEggMoveLearnset,
    ),

    [SPECIES_HOPPIP] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL,  ABILITY_INFILTRATOR },
        .levelUpLearnset = sHoppipLevelUpLearnset,
        .teachableLearnset = sHoppipTeachableLearnset,
        .eggMoveLearnset = sHoppipEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_SKIPLOOM}),
    ),

    [SPECIES_SKIPLOOM] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL,  ABILITY_INFILTRATOR },
        .levelUpLearnset = sSkiploomLevelUpLearnset,
        .teachableLearnset = sSkiploomTeachableLearnset,
        .eggMoveLearnset = sHoppipEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_JUMPLUFF}),
    ),

    [SPECIES_JUMPLUFF] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_CHLOROPHYLL,  ABILITY_AERILATE },
        .levelUpLearnset = sJumpluffLevelUpLearnset,
        .teachableLearnset = sJumpluffTeachableLearnset,
        .eggMoveLearnset = sHoppipEggMoveLearnset,
    ),

    [SPECIES_AIPOM] = HARD_MODE(
        .abilities = {ABILITY_TECHNICIAN,  ABILITY_SKILL_LINK,  ABILITY_PICKUP },
        .levelUpLearnset = sAipomLevelUpLearnset,
        .teachableLearnset = sAipomTeachableLearnset,
        .eggMoveLearnset = sAipomEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_AMBIPOM}),
    ),

    [SPECIES_AMBIPOM] = HARD_MODE(
        .abilities = {ABILITY_TECHNICIAN,  ABILITY_SKILL_LINK,  ABILITY_PICKUP },
        .levelUpLearnset = sAmbipomLevelUpLearnset,
        .teachableLearnset = sAmbipomTeachableLearnset,
        .eggMoveLearnset = sAipomEggMoveLearnset,
    ),

    [SPECIES_SUNKERN] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_SOLAR_POWER,  ABILITY_EARLY_BIRD },
        .levelUpLearnset = sSunkernLevelUpLearnset,
        .teachableLearnset = sSunkernTeachableLearnset,
        .eggMoveLearnset = sSunkernEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SUN_STONE, SPECIES_SUNFLORA}),
    ),

    [SPECIES_SUNFLORA] = HARD_MODE(
        .abilities = {ABILITY_CHLOROPHYLL,  ABILITY_SOLAR_POWER,  ABILITY_EARLY_BIRD },
        .levelUpLearnset = sSunfloraLevelUpLearnset,
        .teachableLearnset = sSunfloraTeachableLearnset,
        .eggMoveLearnset = sSunkernEggMoveLearnset,
    ),

    [SPECIES_YANMA] = HARD_MODE(
        .abilities = {ABILITY_SPEED_BOOST,  ABILITY_SPEED_BOOST,  ABILITY_COMPOUND_EYES },
        .levelUpLearnset = sYanmaLevelUpLearnset,
        .teachableLearnset = sYanmaTeachableLearnset,
        .eggMoveLearnset = sYanmaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_YANMEGA}),
    ),

    [SPECIES_YANMEGA] = HARD_MODE(
        .abilities = {ABILITY_SPEED_BOOST,  ABILITY_SPEED_BOOST,  ABILITY_TINTED_LENS },
        .levelUpLearnset = sYanmegaLevelUpLearnset,
        .teachableLearnset = sYanmegaTeachableLearnset,
        .eggMoveLearnset = sYanmaEggMoveLearnset,
    ),

    [SPECIES_WOOPER] = HARD_MODE(
        .abilities = {ABILITY_UNAWARE,  ABILITY_UNAWARE,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sWooperLevelUpLearnset,
        .teachableLearnset = sWooperTeachableLearnset,
        .eggMoveLearnset = sWooperEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_QUAGSIRE}),
    ),

    [SPECIES_QUAGSIRE] = HARD_MODE(
        .abilities = {ABILITY_UNAWARE,  ABILITY_UNAWARE,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sQuagsireLevelUpLearnset,
        .teachableLearnset = sQuagsireTeachableLearnset,
        .eggMoveLearnset = sWooperEggMoveLearnset,
    ),

    [SPECIES_WOOPER_PALDEA] = HARD_MODE(
        .abilities = {ABILITY_UNAWARE,  ABILITY_UNAWARE,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sWooperPaldeaLevelUpLearnset,
        .teachableLearnset = sWooperPaldeaTeachableLearnset,
        .eggMoveLearnset = sWooperPaldeaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_CLODSIRE}),
    ),

    [SPECIES_CLODSIRE] = HARD_MODE(
        .abilities = {ABILITY_UNAWARE,  ABILITY_UNAWARE,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sClodsireLevelUpLearnset,
        .teachableLearnset = sClodsireTeachableLearnset,
        .eggMoveLearnset = sWooperPaldeaEggMoveLearnset,
    ),

    [SPECIES_MURKROW] = HARD_MODE(
        .abilities = {ABILITY_PRANKSTER,  ABILITY_SUPER_LUCK,  ABILITY_INSOMNIA },
        .levelUpLearnset = sMurkrowLevelUpLearnset,
        .teachableLearnset = sMurkrowTeachableLearnset,
        .eggMoveLearnset = sMurkrowEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_HONCHKROW}),
    ),

    [SPECIES_HONCHKROW] = HARD_MODE(
        .abilities = {ABILITY_SUPER_LUCK,  ABILITY_SUPER_LUCK,  ABILITY_MOXIE },
        .levelUpLearnset = sHonchkrowLevelUpLearnset,
        .teachableLearnset = sHonchkrowTeachableLearnset,
        .eggMoveLearnset = sMurkrowEggMoveLearnset,
    ),

    [SPECIES_MISDREAVUS] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMisdreavusLevelUpLearnset,
        .teachableLearnset = sMisdreavusTeachableLearnset,
        .eggMoveLearnset = sMisdreavusEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MAPSEC, MAPSEC_MT_PYRE, SPECIES_MISMAGIUS}),
    ),

    [SPECIES_MISMAGIUS] = HARD_MODE(
        .abilities = {ABILITY_LEVITATE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sMismagiusLevelUpLearnset,
        .teachableLearnset = sMismagiusTeachableLearnset,
        .eggMoveLearnset = sMisdreavusEggMoveLearnset,
    ),

    [SPECIES_WYNAUT] = HARD_MODE(
        .abilities = {ABILITY_SHADOW_TAG,  ABILITY_NONE,  ABILITY_TELEPATHY },
        .levelUpLearnset = sWynautLevelUpLearnset,
        .teachableLearnset = sWynautTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_WOBBUFFET}),
    ),

    [SPECIES_WOBBUFFET] = HARD_MODE(
        .abilities = {ABILITY_SHADOW_TAG,  ABILITY_NONE,  ABILITY_TELEPATHY },
        .levelUpLearnset = sWobbuffetLevelUpLearnset,
        .teachableLearnset = sWobbuffetTeachableLearnset,
    ),

    [SPECIES_GIRAFARIG] = HARD_MODE(
        .abilities = {ABILITY_INNER_FOCUS,  ABILITY_EARLY_BIRD,  ABILITY_SAP_SIPPER },
        .levelUpLearnset = sGirafarigLevelUpLearnset,
        .teachableLearnset = sGirafarigTeachableLearnset,
        .eggMoveLearnset = sGirafarigEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_FARIGIRAF}),
    ),

    [SPECIES_FARIGIRAF] = HARD_MODE(
        .abilities = {ABILITY_PARENTAL_BOND,  ABILITY_ARMOR_TAIL,  ABILITY_SAP_SIPPER },
        .levelUpLearnset = sFarigirafLevelUpLearnset,
        .teachableLearnset = sFarigirafTeachableLearnset,
        .eggMoveLearnset = sGirafarigEggMoveLearnset,
    ),

    [SPECIES_PINECO] = HARD_MODE(
        .abilities = {ABILITY_STURDY,  ABILITY_NONE,  ABILITY_OVERCOAT },
        .levelUpLearnset = sPinecoLevelUpLearnset,
        .teachableLearnset = sPinecoTeachableLearnset,
        .eggMoveLearnset = sPinecoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_FORRETRESS}),
    ),

    [SPECIES_FORRETRESS] = HARD_MODE(
        .abilities = {ABILITY_STURDY,  ABILITY_NONE,  ABILITY_OVERCOAT },
        .levelUpLearnset = sForretressLevelUpLearnset,
        .teachableLearnset = sForretressTeachableLearnset,
        .eggMoveLearnset = sPinecoEggMoveLearnset,
    ),

    [SPECIES_DUNSPARCE] = HARD_MODE(
        .abilities = {ABILITY_SERENE_GRACE,  ABILITY_SERENE_GRACE,  ABILITY_NONE },
        .levelUpLearnset = sDunsparceLevelUpLearnset,
        .teachableLearnset = sDunsparceTeachableLearnset,
        .eggMoveLearnset = sDunsparceEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE_TWO_SEGMENT, MOVE_HYPER_DRILL, SPECIES_DUDUNSPARCE_TWO_SEGMENT}, {EVO_LEVEL, 28, SPECIES_DUDUNSPARCE_THREE_SEGMENT}),
    ),

    [SPECIES_DUDUNSPARCE_TWO_SEGMENT] = HARD_MODE(
        .abilities = {ABILITY_SERENE_GRACE,  ABILITY_SERENE_GRACE,  ABILITY_NONE },
        .levelUpLearnset = sDudunsparceLevelUpLearnset,
        .teachableLearnset = sDudunsparceTeachableLearnset,
        .eggMoveLearnset = sDunsparceEggMoveLearnset,
    ),

    [SPECIES_DUDUNSPARCE_THREE_SEGMENT] = HARD_MODE(
        .abilities = {ABILITY_SERENE_GRACE,  ABILITY_SERENE_GRACE,  ABILITY_NONE },
        .levelUpLearnset = sDudunsparceLevelUpLearnset,
        .teachableLearnset = sDudunsparceTeachableLearnset,
        .eggMoveLearnset = sDunsparceEggMoveLearnset,
    ),

    [SPECIES_GLIGAR] = HARD_MODE(
        .abilities = {ABILITY_HYPER_CUTTER,  ABILITY_HYPER_CUTTER,  ABILITY_IMMUNITY },
        .levelUpLearnset = sGligarLevelUpLearnset,
        .teachableLearnset = sGligarTeachableLearnset,
        .eggMoveLearnset = sGligarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_GLISCOR}),
    ),

    [SPECIES_GLISCOR] = HARD_MODE(
        .abilities = {ABILITY_HYPER_CUTTER,  ABILITY_HYPER_CUTTER,  ABILITY_POISON_HEAL },
        .levelUpLearnset = sGliscorLevelUpLearnset,
        .teachableLearnset = sGliscorTeachableLearnset,
        .eggMoveLearnset = sGligarEggMoveLearnset,
    ),

    [SPECIES_SNUBBULL] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_STRONG_JAW,  ABILITY_DEFIANT },
        .levelUpLearnset = sSnubbullLevelUpLearnset,
        .teachableLearnset = sSnubbullTeachableLearnset,
        .eggMoveLearnset = sSnubbullEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_GRANBULL}),
    ),

    [SPECIES_GRANBULL] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_BULL_RUSH,  ABILITY_STRONG_JAW },
        .levelUpLearnset = sGranbullLevelUpLearnset,
        .teachableLearnset = sGranbullTeachableLearnset,
        .eggMoveLearnset = sSnubbullEggMoveLearnset,
    ),

    [SPECIES_QWILFISH] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_SWIFT_SWIM, ABILITY_TOXIC_DEBRIS  },
        .levelUpLearnset = sQwilfishLevelUpLearnset,
        .teachableLearnset = sQwilfishTeachableLearnset,
        .eggMoveLearnset = sQwilfishEggMoveLearnset,
    ),

    [SPECIES_QWILFISH_HISUI] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_SWIFT_SWIM, ABILITY_POISON_TOUCH  },
        .levelUpLearnset = sQwilfishHisuiLevelUpLearnset,
        .teachableLearnset = sQwilfishHisuiTeachableLearnset,
        .eggMoveLearnset = sQwilfishHisuiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_OVERQWIL}),
    ),

    [SPECIES_OVERQWIL] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_SWIFT_SWIM, ABILITY_TOXIC_DEBRIS  },
        .levelUpLearnset = sOverqwilLevelUpLearnset,
        .teachableLearnset = sOverqwilTeachableLearnset,
        .eggMoveLearnset = sQwilfishHisuiEggMoveLearnset,
    ),

    [SPECIES_SHUCKLE] = HARD_MODE(
        .abilities = {ABILITY_STURDY,  ABILITY_SOLID_ROCK,  ABILITY_CONTRARY },
        .levelUpLearnset = sShuckleLevelUpLearnset,
        .teachableLearnset = sShuckleTeachableLearnset,
        .eggMoveLearnset = sShuckleEggMoveLearnset,
    ),

    [SPECIES_HERACROSS] = HARD_MODE(
        .abilities = {ABILITY_SWARM,  ABILITY_GUTS,  ABILITY_MOXIE },
        .levelUpLearnset = sHeracrossLevelUpLearnset,
        .teachableLearnset = sHeracrossTeachableLearnset,
        .eggMoveLearnset = sHeracrossEggMoveLearnset,
    ),

    [SPECIES_HERACROSS_MEGA] = HARD_MODE(
        .abilities = {ABILITY_SKILL_LINK,  ABILITY_SKILL_LINK,  ABILITY_SKILL_LINK },
        .levelUpLearnset = sHeracrossLevelUpLearnset,
        .teachableLearnset = sHeracrossTeachableLearnset,
        .eggMoveLearnset = sHeracrossEggMoveLearnset,
    ),

    [SPECIES_SNEASEL] = HARD_MODE(
        .abilities = {ABILITY_INNER_FOCUS,  ABILITY_INNER_FOCUS,  ABILITY_INFILTRATOR },
        .levelUpLearnset = sSneaselLevelUpLearnset,
        .teachableLearnset = sSneaselTeachableLearnset,
        .eggMoveLearnset = sSneaselEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_WEAVILE}),
    ),

    [SPECIES_WEAVILE] = HARD_MODE(
        .abilities = {ABILITY_PRESSURE,  ABILITY_NONE,  ABILITY_INFILTRATOR },
        .levelUpLearnset = sWeavileLevelUpLearnset,
        .teachableLearnset = sWeavileTeachableLearnset,
        .eggMoveLearnset = sSneaselEggMoveLearnset,
    ),

    [SPECIES_SNEASEL_HISUI] = HARD_MODE(
        .abilities = {ABILITY_INNER_FOCUS,  ABILITY_INNER_FOCUS,  ABILITY_POISON_TOUCH },
        .levelUpLearnset = sSneaselHisuiLevelUpLearnset,
        .teachableLearnset = sSneaselHisuiTeachableLearnset,
        .eggMoveLearnset = sSneaselHisuiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 47, SPECIES_SNEASLER}),
    ),

    [SPECIES_SNEASLER] = HARD_MODE(
        .abilities = {ABILITY_PRESSURE,  ABILITY_POISON_TOUCH,  ABILITY_UNBURDEN },
        .levelUpLearnset = sSneaslerLevelUpLearnset,
        .teachableLearnset = sSneaslerTeachableLearnset,
        .eggMoveLearnset = sSneaselHisuiEggMoveLearnset,
    ),

    [SPECIES_TEDDIURSA] = HARD_MODE(
        .abilities = {ABILITY_QUICK_FEET,  ABILITY_QUICK_FEET,  ABILITY_UNNERVE },
        .levelUpLearnset = sTeddiursaLevelUpLearnset,
        .teachableLearnset = sTeddiursaTeachableLearnset,
        .eggMoveLearnset = sTeddiursaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_URSARING}),
    ),

    [SPECIES_URSARING] = HARD_MODE(
        .abilities = {ABILITY_GUTS,  ABILITY_QUICK_FEET,  ABILITY_UNNERVE },
        .levelUpLearnset = sUrsaringLevelUpLearnset,
        .teachableLearnset = sUrsaringTeachableLearnset,
        .eggMoveLearnset = sTeddiursaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_DAY, 61, SPECIES_URSALUNA}, {EVO_LEVEL_NIGHT, 61, SPECIES_URSALUNA_BLOODMOON}),
    ),

    [SPECIES_URSALUNA] = HARD_MODE(
        .abilities = {ABILITY_GUTS,  ABILITY_BULLETPROOF,  ABILITY_UNNERVE },
        .levelUpLearnset = sUrsalunaLevelUpLearnset,
        .teachableLearnset = sUrsalunaTeachableLearnset,
        .eggMoveLearnset = sTeddiursaEggMoveLearnset,
    ),

    [SPECIES_URSALUNA_BLOODMOON] = HARD_MODE(
        .abilities = {ABILITY_MINDS_EYE,  ABILITY_MINDS_EYE,  ABILITY_MINDS_EYE },
        .levelUpLearnset = sUrsalunaBloodmoonLevelUpLearnset,
        .teachableLearnset = sUrsalunaBloodmoonTeachableLearnset,
        .eggMoveLearnset = sTeddiursaEggMoveLearnset,
    ),

    [SPECIES_SLUGMA] = HARD_MODE(
        .abilities = {ABILITY_FLAME_BODY,  ABILITY_FLAME_BODY,  ABILITY_WEAK_ARMOR },
        .levelUpLearnset = sSlugmaLevelUpLearnset,
        .teachableLearnset = sSlugmaTeachableLearnset,
        .eggMoveLearnset = sSlugmaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_MAGCARGO}),
    ),

    [SPECIES_MAGCARGO] = HARD_MODE(
        .abilities = {ABILITY_SHELL_ARMOR,  ABILITY_SHELL_ARMOR,  ABILITY_SIMPLE },
        .levelUpLearnset = sMagcargoLevelUpLearnset,
        .teachableLearnset = sMagcargoTeachableLearnset,
        .eggMoveLearnset = sSlugmaEggMoveLearnset,
    ),

    [SPECIES_SWINUB] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_NONE,  ABILITY_OBLIVIOUS },
        .levelUpLearnset = sSwinubLevelUpLearnset,
        .teachableLearnset = sSwinubTeachableLearnset,
        .eggMoveLearnset = sSwinubEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PILOSWINE}),
    ),

    [SPECIES_PILOSWINE] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_NONE,  ABILITY_OBLIVIOUS },
        .levelUpLearnset = sPiloswineLevelUpLearnset,
        .teachableLearnset = sPiloswineTeachableLearnset,
        .eggMoveLearnset = sSwinubEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 45, SPECIES_MAMOSWINE}),
    ),

    [SPECIES_MAMOSWINE] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_NONE,  ABILITY_OBLIVIOUS },
        .levelUpLearnset = sMamoswineLevelUpLearnset,
        .teachableLearnset = sMamoswineTeachableLearnset,
        .eggMoveLearnset = sSwinubEggMoveLearnset,
    ),

    [SPECIES_CORSOLA] = HARD_MODE(
        .abilities = {ABILITY_REGENERATOR,  ABILITY_REGENERATOR,  ABILITY_NONE },
        .levelUpLearnset = sCorsolaLevelUpLearnset,
        .teachableLearnset = sCorsolaTeachableLearnset,
        .eggMoveLearnset = sCorsolaEggMoveLearnset,
    ),

    [SPECIES_CORSOLA_GALAR] = HARD_MODE(
        .abilities = {ABILITY_UNBURDEN,  ABILITY_UNBURDEN,  ABILITY_PERISH_BODY },
        .levelUpLearnset = sCorsolaGalarLevelUpLearnset,
        .teachableLearnset = sCorsolaGalarTeachableLearnset,
        .eggMoveLearnset = sCorsolaGalarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_CURSOLA}),
    ),

    [SPECIES_CURSOLA] = HARD_MODE(
        .abilities = {ABILITY_UNBURDEN,  ABILITY_UNBURDEN,  ABILITY_PERISH_BODY },
        .levelUpLearnset = sCursolaLevelUpLearnset,
        .teachableLearnset = sCursolaTeachableLearnset,
        .eggMoveLearnset = sCorsolaGalarEggMoveLearnset,
    ),

    [SPECIES_REMORAID] = HARD_MODE(
        .abilities = {ABILITY_HUSTLE,  ABILITY_SKILL_LINK,  ABILITY_SNIPER },
        .levelUpLearnset = sRemoraidLevelUpLearnset,
        .teachableLearnset = sRemoraidTeachableLearnset,
        .eggMoveLearnset = sRemoraidEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_OCTILLERY}),
    ),

    [SPECIES_OCTILLERY] = HARD_MODE(
        .abilities = {ABILITY_MEGA_LAUNCHER,  ABILITY_SKILL_LINK,  ABILITY_SNIPER },
        .levelUpLearnset = sOctilleryLevelUpLearnset,
        .teachableLearnset = sOctilleryTeachableLearnset,
        .eggMoveLearnset = sRemoraidEggMoveLearnset,
    ),

    [SPECIES_DELIBIRD] = HARD_MODE(
        .abilities = {ABILITY_REFRIGERATE,  ABILITY_REFRIGERATE,  ABILITY_VITAL_SPIRIT },
        .levelUpLearnset = sDelibirdLevelUpLearnset,
        .teachableLearnset = sDelibirdTeachableLearnset,
        .eggMoveLearnset = sDelibirdEggMoveLearnset,
    ),

    [SPECIES_MANTYKE] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_SWIFT_SWIM,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sMantykeLevelUpLearnset,
        .teachableLearnset = sMantykeTeachableLearnset,
        .eggMoveLearnset = sMantykeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MANTINE}),
    ),

    [SPECIES_MANTINE] = HARD_MODE(
        .abilities = {ABILITY_SWIFT_SWIM,  ABILITY_SWIFT_SWIM,  ABILITY_WATER_ABSORB },
        .levelUpLearnset = sMantineLevelUpLearnset,
        .teachableLearnset = sMantineTeachableLearnset,
        .eggMoveLearnset = sMantineEggMoveLearnset,
    ),

    [SPECIES_SKARMORY] = HARD_MODE(
        .abilities = {ABILITY_WEAK_ARMOR,  ABILITY_STURDY, ABILITY_FRISK },
        .levelUpLearnset = sSkarmoryLevelUpLearnset,
        .teachableLearnset = sSkarmoryTeachableLearnset,
        .eggMoveLearnset = sSkarmoryEggMoveLearnset,
    ),

    [SPECIES_SKARMORY_MEGA] = HARD_MODE(
        .abilities = { ABILITY_KEEN_EYE, ABILITY_STURDY, ABILITY_WEAK_ARMOR },
        .levelUpLearnset = sSkarmoryLevelUpLearnset,
        .teachableLearnset = sSkarmoryTeachableLearnset,
    ),

    [SPECIES_HOUNDOUR] = HARD_MODE(
        .abilities = {ABILITY_UNNERVE,  ABILITY_UNNERVE,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sHoundourLevelUpLearnset,
        .teachableLearnset = sHoundourTeachableLearnset,
        .eggMoveLearnset = sHoundourEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_HOUNDOOM}),
    ),

    [SPECIES_HOUNDOOM] = HARD_MODE(
        .abilities = {ABILITY_UNNERVE,  ABILITY_UNNERVE,  ABILITY_FLASH_FIRE },
        .levelUpLearnset = sHoundoomLevelUpLearnset,
        .teachableLearnset = sHoundoomTeachableLearnset,
        .eggMoveLearnset = sHoundourEggMoveLearnset,
    ),

    [SPECIES_HOUNDOOM_MEGA] = HARD_MODE(
        .abilities = {ABILITY_DARK_AURA,  ABILITY_DARK_AURA,  ABILITY_DARK_AURA },
        .levelUpLearnset = sHoundoomLevelUpLearnset,
        .teachableLearnset = sHoundoomTeachableLearnset,
    ),

    [SPECIES_PHANPY] = HARD_MODE(
        .abilities = {ABILITY_PICKUP,  ABILITY_SAND_VEIL,  ABILITY_NONE },
        .levelUpLearnset = sPhanpyLevelUpLearnset,
        .teachableLearnset = sPhanpyTeachableLearnset,
        .eggMoveLearnset = sPhanpyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_DONPHAN}),
    ),

    [SPECIES_DONPHAN] = HARD_MODE(
        .abilities = {ABILITY_STURDY,  ABILITY_TECHNICIAN,  ABILITY_NONE },
        .levelUpLearnset = sDonphanLevelUpLearnset,
        .teachableLearnset = sDonphanTeachableLearnset,
        .eggMoveLearnset = sPhanpyEggMoveLearnset,
    ),

    [SPECIES_STANTLER] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_RECKLESS,  ABILITY_SAP_SIPPER },
        .levelUpLearnset = sStantlerLevelUpLearnset,
        .teachableLearnset = sStantlerTeachableLearnset,
        .eggMoveLearnset = sStantlerEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 44, SPECIES_WYRDEER}),
    ),

    [SPECIES_WYRDEER] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_FUR_COAT, ABILITY_SAP_SIPPER },
        .levelUpLearnset = sWyrdeerLevelUpLearnset,
        .teachableLearnset = sWyrdeerTeachableLearnset,
        .eggMoveLearnset = sStantlerEggMoveLearnset,
    ),

    [SPECIES_SMEARGLE] = HARD_MODE(
        .abilities = {ABILITY_OWN_TEMPO,  ABILITY_TECHNICIAN,  ABILITY_NONE },
        .levelUpLearnset = sSmeargleLevelUpLearnset,
        .teachableLearnset = sSmeargleTeachableLearnset,
    ),

    [SPECIES_MILTANK] = HARD_MODE(
        .abilities = {ABILITY_THICK_FAT,  ABILITY_SCRAPPY,  ABILITY_SAP_SIPPER },
        .levelUpLearnset = sMiltankLevelUpLearnset,
        .teachableLearnset = sMiltankTeachableLearnset,
        .eggMoveLearnset = sMiltankEggMoveLearnset,
    ),

    [SPECIES_RAIKOU] = HARD_MODE(
        .abilities = {ABILITY_INNER_FOCUS,  ABILITY_NONE,  ABILITY_PRESSURE },
        .levelUpLearnset = sRaikouLevelUpLearnset,
        .teachableLearnset = sRaikouTeachableLearnset,
    ),

    [SPECIES_ENTEI] = HARD_MODE(
        .abilities = {ABILITY_INNER_FOCUS,  ABILITY_NONE,  ABILITY_PRESSURE },
        .levelUpLearnset = sEnteiLevelUpLearnset,
        .teachableLearnset = sEnteiTeachableLearnset,
    ),

    [SPECIES_SUICUNE] = HARD_MODE(
        .abilities = {ABILITY_INNER_FOCUS,  ABILITY_NONE,  ABILITY_PRESSURE },
        .levelUpLearnset = sSuicuneLevelUpLearnset,
        .teachableLearnset = sSuicuneTeachableLearnset,
    ),

    [SPECIES_LARVITAR] = HARD_MODE(
        .abilities = {ABILITY_GUTS,  ABILITY_NONE,  ABILITY_SAND_VEIL },
        .levelUpLearnset = sLarvitarLevelUpLearnset,
        .teachableLearnset = sLarvitarTeachableLearnset,
        .eggMoveLearnset = sLarvitarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_PUPITAR}),
    ),

    [SPECIES_PUPITAR] = HARD_MODE(
        .abilities = {ABILITY_SHED_SKIN,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sPupitarLevelUpLearnset,
        .teachableLearnset = sPupitarTeachableLearnset,
        .eggMoveLearnset = sLarvitarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 55, SPECIES_TYRANITAR}),
    ),

    [SPECIES_TYRANITAR] = HARD_MODE(
        .abilities = {ABILITY_INTIMIDATE,  ABILITY_INTIMIDATE,  ABILITY_SAND_STREAM },
        .levelUpLearnset = sTyranitarLevelUpLearnset,
        .teachableLearnset = sTyranitarTeachableLearnset,
        .eggMoveLearnset = sLarvitarEggMoveLearnset,
    ),

    [SPECIES_TYRANITAR_MEGA] = HARD_MODE(
        .abilities = {ABILITY_SAND_FORCE,  ABILITY_SAND_FORCE,  ABILITY_SAND_STREAM },
        .levelUpLearnset = sTyranitarLevelUpLearnset,
        .teachableLearnset = sTyranitarTeachableLearnset,
    ),

    [SPECIES_CELEBI] = HARD_MODE(
        .abilities = {ABILITY_NATURAL_CURE,  ABILITY_NONE,  ABILITY_NONE },
        .levelUpLearnset = sCelebiLevelUpLearnset,
        .teachableLearnset = sCelebiTeachableLearnset,
    ),