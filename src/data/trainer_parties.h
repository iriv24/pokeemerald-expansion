static const struct TrainerMon sParty_Sawyer1[] = {
    {
    .lvl = 21,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout1[] = {
    {
    .lvl = 65,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    {
    .lvl = 65,
    .species = SPECIES_CROBAT,
    },
    {
    .lvl = 65,
    .species = SPECIES_LANTURN,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    {
    .lvl = 65,
    .species = SPECIES_BEARTIC,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    {
    .lvl = 65,
    .species = SPECIES_PALOSSAND,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    {
    .lvl = 70,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 70,
    .species = SPECIES_PERSIAN,
    },
    {
    .lvl = 70,
    .species = SPECIES_PERSIAN_ALOLA,
    }
};



static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    {
    .lvl = 70,
    .species = SPECIES_CROBAT,
    },
    {
    .lvl = 70,
    .species = SPECIES_CARRACOSTA,
    }
};

static const struct TrainerMon sParty_Gabrielle1[] = {
    {
    .lvl = 64,
    .species = SPECIES_MAROWAK,
    },
    {
    .lvl = 64,
    .species = SPECIES_MAROWAK_ALOLA,
    },
};

static const struct TrainerMon sParty_GruntPetalburgWoods[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),   
    .lvl = 202, 
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_QUICK_FEET,
    .species = SPECIES_POOCHYENA,
    .moves = {MOVE_BITE, MOVE_TACKLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CARVANHA,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_ROUGH_SKIN,
    .moves = {MOVE_AQUA_JET, MOVE_BITE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Marcel[] = {
    {
    .lvl = 64,
    .species = SPECIES_CLOYSTER,
    },
    {
    .lvl = 64,
    .species = SPECIES_CARRACOSTA,
    }
};

static const struct TrainerMon sParty_Alberto[] = {
    {
    .lvl = 58,
    .species = SPECIES_SALAMENCE,
    },
    {
    .lvl = 58,
    .species = SPECIES_FLYGON,
    }
};

static const struct TrainerMon sParty_Ed[] = {
    {
    .lvl = 56,
    .species = SPECIES_MEGANIUM,
    },
    {
    .lvl = 56,
    .species = SPECIES_PORYGON2,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern4[] = {
    {
    .lvl = 70,
    .species = SPECIES_GOLISOPOD,
    },
    {
    .lvl = 70,
    .species = SPECIES_LOKIX,
    }
};

static const struct TrainerMon sParty_Declan[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TYRANTRUM,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_SCALE_SHOT, MOVE_STEALTH_ROCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_ESPEON,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MAGIC_BOUNCE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_MORNING_SUN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_SUNFLORA,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SEED_FLARE, MOVE_EARTH_POWER, MOVE_WEATHER_BALL, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_TYPHLOSION,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_BLAZING_SOUL,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_ERUPTION, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST, MOVE_SCORCHING_SANDS}
    }
};

static const struct TrainerMon sParty_GruntRusturfTunnel[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),   
    .lvl = 202, 
    .species = SPECIES_GLAMEOW,
    .moves = {MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FACADE},
    .ability = ABILITY_OWN_TEMPO,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_SILK_SCARF,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),   
    .lvl = 202, 
    .species = SPECIES_MIGHTYENA,
    .moves = {MOVE_BITE, MOVE_SUCKER_PUNCH, MOVE_FIRE_FANG, MOVE_THUNDER_FANG},
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_MUSCLE_BAND,
    },
    {
     .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),   
    .lvl = 202, 
    .species = SPECIES_SPOINK,
    .moves = {MOVE_PSYBEAM, MOVE_FLASH, MOVE_ICY_WIND, MOVE_GRASS_KNOT},
    .ability = ABILITY_GLUTTONY,
    .nature = NATURE_CALM,
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst1[] = {
    {
    .lvl = 60,
    .species = SPECIES_PERRSERKER,
    },
    {
    .lvl = 60,
    .species = SPECIES_PERSIAN_ALOLA,
    }
};

static const struct TrainerMon sParty_MattWeatherInst[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_MACHAMPITE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_GUTS,
    .moves = {MOVE_MACH_PUNCH, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_OGERPON_WELLSPRING,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .heldItem = ITEM_WELLSPRING_MASK,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, MOVE_THROAT_CHOP, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_GRENINJA,
    .ability = ABILITY_BATTLE_BOND,
    .heldItem = ITEM_EXPERT_BELT,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .moves = {MOVE_DARK_PULSE, MOVE_SURF, MOVE_ICE_BEAM, MOVE_GRASS_KNOT}
    },
};

static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_ARMALDO,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .heldItem = ITEM_PASSHO_BERRY,
    .ability = ABILITY_SKILL_LINK,
    .moves = {MOVE_ROCK_BLAST, MOVE_PIN_MISSILE, MOVE_SWORDS_DANCE, MOVE_STOMPING_TANTRUM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_FOCUS_SASH,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ILLUMINATE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_THUNDER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_IRON_JUGULIS,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_QUARK_DRIVE,
    .moves = {MOVE_AIR_SLASH, MOVE_DARK_PULSE, MOVE_DRAGON_PULSE, MOVE_EARTH_POWER}
    }
};

static const struct TrainerMon sParty_GruntWeatherInst3[] = {
    {
    .lvl = 60,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 60,
    .species = SPECIES_CROBAT,
    }
};

static const struct TrainerMon sParty_GruntMuseum1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 30,
    .species = SPECIES_LOKIX,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_TINTED_LENS,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_LUNGE, MOVE_ASSURANCE, MOVE_DOUBLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 28,
    .species = SPECIES_QWILFISH,
    .heldItem = ITEM_WACAN_BERRY,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_BARB_BARRAGE, MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_REVENGE}
    },
};

static const struct TrainerMon sParty_GruntMuseum2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 30,
    .species = SPECIES_GOLISOPOD,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_EMERGENCY_EXIT,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_RAZOR_SHELL, MOVE_AQUA_JET, MOVE_LEECH_LIFE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 28,
    .species = SPECIES_PALPITOAD,
    .heldItem = ITEM_EVIOLITE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_ICY_WIND, MOVE_MUD_BOMB, MOVE_UPROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 28,
    .species = SPECIES_QWILFISH_HISUI,
    .heldItem = ITEM_SHUCA_BERRY,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_BARB_BARRAGE, MOVE_THROAT_CHOP, MOVE_FELL_STINGER, MOVE_FLIP_TURN}
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter1[] = {
    {
    .lvl = 32,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMtPyre1[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst4[] = {
    {
    .lvl = 60,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout5[] = {
    {
    .lvl = 65,
    .species = SPECIES_BISHARP,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    {
    .lvl = 65,
    .species = SPECIES_GRAPPLOCT,
    }
};

static const struct TrainerMon sParty_Fredrick[] = {
    {
    .lvl = 56,
    .species = SPECIES_FLORGES,
    },
    {
    .lvl = 56,
    .species = SPECIES_GOLURK,
    }
};

static const struct TrainerMon sParty_ArchieHideout[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 74,
    .species = SPECIES_OVERQWIL,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_TOXIC_SPIKES, MOVE_HAZE, MOVE_BARB_BARRAGE, MOVE_THROAT_CHOP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 74,
    .species = SPECIES_BASCULEGION_M,
    .heldItem = ITEM_ASSAULT_VEST,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_SPIRIT_SHACKLE, MOVE_WAVE_CRASH, MOVE_SUPERPOWER, MOVE_SHADOW_SNEAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 74,
    .species = SPECIES_EELEKTROSS,
    .heldItem = ITEM_EXPERT_BELT,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_THUNDERCLAP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 74,
    .species = SPECIES_POLIWRATH,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_JET_PUNCH}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 30, 30),
    .lvl = 74,
    .species = SPECIES_IRON_BUNDLE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_QUARK_DRIVE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 74,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_SHARPEDONITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_AQUA_JET, MOVE_AQUA_FANG}
    },
};

static const struct TrainerMon sParty_Zander[] = {
    {
    .lvl = 65,
    .species = SPECIES_ANNIHILAPE,
    }
};

static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_HUNTAIL,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_SHELL_SMASH, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_WAVE_CRASH}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
    .lvl = 64,
    .species = SPECIES_KELDEO_RESOLUTE,
    .heldItem = ITEM_CHOICE_SPECS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_SECRET_SWORD, MOVE_AIR_SLASH, MOVE_HYDRO_PUMP, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_HAXORUS,
    .heldItem = ITEM_LUM_BERRY,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_MOLD_BREAKER,
    .moves = {MOVE_DUAL_CHOP, MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_DECIDUEYE,
    .heldItem = ITEM_ASSAULT_VEST,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TINTED_LENS,
    .moves = {MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_THOUSAND_ARROWS, MOVE_SHADOW_SNEAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_BRAVIARY_HISUI,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_GYARADOS,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_GYARADOSITE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_AQUA_TAIL, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_ShellySeafloorCavern[] = {
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
    .lvl = 80,
    .species = SPECIES_KELDEO_RESOLUTE,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_SECRET_SWORD, MOVE_AIR_SLASH, MOVE_HYDRO_PUMP, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_DECIDUEYE,
    .heldItem = ITEM_FOCUS_SASH,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TINTED_LENS,
    .moves = {MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_THOUSAND_ARROWS, MOVE_SHADOW_SNEAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_GOODRA_HISUI,
    .heldItem = ITEM_ASSAULT_VEST,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_SAP_SIPPER,
    .moves = {MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_GYARADOS,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_GYARADOSITE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_AQUA_TAIL, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_MattSeafloorCavern[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_FROSLASS,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_STAKEOUT,
    .heldItem = ITEM_WIDE_LENS,
    .moves = {MOVE_TRIPLE_AXEL, MOVE_POLTERGEIST, MOVE_WAKE_UP_SLAP, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_GRENINJA,
    .ability = ABILITY_BATTLE_BOND,
    .heldItem = ITEM_EXPERT_BELT,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .moves = {MOVE_DARK_PULSE, MOVE_SURF, MOVE_ICE_BEAM, MOVE_GRASS_KNOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_MULTISCALE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_MACHAMPITE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_GUTS,
    .moves = {MOVE_MACH_PUNCH, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH}
    },
};

static const struct TrainerMon sParty_Archie[] = {
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 30, 30),
    .lvl = 80,
    .species = SPECIES_IRON_BUNDLE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_QUARK_DRIVE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_FREEZE_DRY, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_GOLURK,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_NO_GUARD,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_DYNAMIC_PUNCH, MOVE_POLTERGEIST, MOVE_STONE_EDGE, MOVE_HEADLONG_RUSH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_EELEKTROSS,
    .heldItem = ITEM_EXPERT_BELT,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_FATAL_PRECISION,
    .moves = {MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_THUNDERCLAP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_QUAQUAVAL,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_MOXIE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_ICE_SPINNER, MOVE_BRAVE_BIRD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_SHARPEDONITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_AQUA_FANG, MOVE_AQUA_JET}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_KYOGRE,
    .heldItem = ITEM_BLUE_ORB,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_DRIZZLE,
    .ball = ITEM_MASTER_BALL,
    .moves = {MOVE_ORIGIN_PULSE, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_WATER_SPOUT}
    },
};

static const struct TrainerMon sParty_Leah[] = {
    {
    .lvl = 65,
    .species = SPECIES_GRUMPIG,
    }
};

static const struct TrainerMon sParty_Daisy[] = {
    {
    .lvl = 24,
    .species = SPECIES_BRELOOM,
    },
    {
    .lvl = 24,
    .species = SPECIES_SQUAWKABILLY,
    }
};

static const struct TrainerMon sParty_Rose1[] = {
    {
    .lvl = 29,
    .species = SPECIES_LILLIGANT,
    },
    {
    .lvl = 29,
    .species = SPECIES_GARBODOR,
    }
};

static const struct TrainerMon sParty_Felix[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_REUNICLUS,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_MAGIC_GUARD,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_GRANBULL,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_BULL_RUSH,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_PLAY_ROUGH, MOVE_ICE_FANG, MOVE_JAW_LOCK, MOVE_CRUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_REGIDRAGO,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_DRAGONS_MAW,
    .heldItem = ITEM_DRAGON_FANG,
    .moves = {MOVE_DRAGON_ENERGY, MOVE_DRAGON_CLAW, MOVE_BODY_SLAM, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_AEGISLASH,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_STANCE_CHANGE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_TOXIC, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_KINGS_SHIELD}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 31, 31),
    .lvl = 84,
    .species = SPECIES_MANECTRIC,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_MANECTITE,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_CHARGE_BEAM, MOVE_HIDDEN_POWER}
    }
};

static const struct TrainerMon sParty_Violet[] = {
    {
    .lvl = 56,
    .species = SPECIES_VILEPLUME,
    },
    {
    .lvl = 56,
    .species = SPECIES_BELLOSSOM,
    }
};

static const struct TrainerMon sParty_Rose2[] = {
    {
    .lvl = 29,
    .species = SPECIES_LILLIGANT,
    },
    {
    .lvl = 29,
    .species = SPECIES_GARBODOR,
    }
};

static const struct TrainerMon sParty_Rose3[] = {
    {
    .lvl = 29,
    .species = SPECIES_LILLIGANT,
    },
    {
    .lvl = 29,
    .species = SPECIES_GARBODOR,
    }
};

static const struct TrainerMon sParty_Rose4[] = {
    {
    .lvl = 29,
    .species = SPECIES_LILLIGANT,
    },
    {
    .lvl = 29,
    .species = SPECIES_GARBODOR,
    }
};

static const struct TrainerMon sParty_Rose5[] = {
    {
    .lvl = 29,
    .species = SPECIES_LILLIGANT,
    },
    {
    .lvl = 29,
    .species = SPECIES_GARBODOR,
    }
};

static const struct TrainerMon sParty_Dusty1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DUGTRIO_ALOLA,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAND_FORCE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MINIOR,
    .nature = NATURE_NAIVE,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
    .ability = ABILITY_SHIELDS_DOWN,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_POWER_GEM, MOVE_EARTHQUAKE, MOVE_ACROBATICS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DRACOVISH,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAND_RUSH,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_FISHIOUS_REND, MOVE_DRAGON_CLAW, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_AERODACTYL,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_AERODACTYLITE,
    .moves = {MOVE_HONE_CLAWS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT}
    }
};

static const struct TrainerMon sParty_Foster[] = {
    {
    .lvl = 55,
    .species = SPECIES_SEISMITOAD,
    },
    {
    .lvl = 55,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Dusty2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DUGTRIO_ALOLA,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAND_FORCE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MINIOR,
    .nature = NATURE_NAIVE,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
    .ability = ABILITY_SHIELDS_DOWN,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_POWER_GEM, MOVE_EARTHQUAKE, MOVE_ACROBATICS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DRACOVISH,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAND_RUSH,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_FISHIOUS_REND, MOVE_DRAGON_CLAW, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_AERODACTYL,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_AERODACTYLITE,
    .moves = {MOVE_HONE_CLAWS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT}
    }
};

static const struct TrainerMon sParty_Dusty3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DUGTRIO_ALOLA,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAND_FORCE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MINIOR,
    .nature = NATURE_NAIVE,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
    .ability = ABILITY_SHIELDS_DOWN,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_POWER_GEM, MOVE_EARTHQUAKE, MOVE_ACROBATICS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DRACOVISH,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAND_RUSH,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_FISHIOUS_REND, MOVE_DRAGON_CLAW, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_AERODACTYL,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_AERODACTYLITE,
    .moves = {MOVE_HONE_CLAWS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT}
    }
};

static const struct TrainerMon sParty_Dusty4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DUGTRIO_ALOLA,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAND_FORCE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MINIOR,
    .nature = NATURE_NAIVE,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
    .ability = ABILITY_SHIELDS_DOWN,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_POWER_GEM, MOVE_EARTHQUAKE, MOVE_ACROBATICS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DRACOVISH,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAND_RUSH,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_FISHIOUS_REND, MOVE_DRAGON_CLAW, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_AERODACTYL,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_AERODACTYLITE,
    .moves = {MOVE_HONE_CLAWS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT}
    }
};

static const struct TrainerMon sParty_Dusty5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DUGTRIO_ALOLA,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAND_FORCE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MINIOR,
    .nature = NATURE_NAIVE,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
    .ability = ABILITY_SHIELDS_DOWN,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_POWER_GEM, MOVE_EARTHQUAKE, MOVE_ACROBATICS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DRACOVISH,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAND_RUSH,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_FISHIOUS_REND, MOVE_DRAGON_CLAW, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_AERODACTYL,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_AERODACTYLITE,
    .moves = {MOVE_HONE_CLAWS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT}
    }
};

static const struct TrainerMon sParty_GabbyAndTy1[] = {
    {
    .lvl = 34,
    .species = SPECIES_SWALOT,
    },
    {
    .lvl = 34,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_GabbyAndTy2[] = {
    {
    .lvl = 55,
    .species = SPECIES_SWALOT,
    },
    {
    .lvl = 55,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_GabbyAndTy3[] = {
    {
    .lvl = 60,
    .species = SPECIES_SWALOT,
    },
    {
    .lvl = 60,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_GabbyAndTy4[] = {
    {
    .lvl = 60,
    .species = SPECIES_SWALOT,
    },
    {
    .lvl = 60,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_GabbyAndTy5[] = {
    {
    .lvl = 60,
    .species = SPECIES_SWALOT,
    },
    {
    .lvl = 60,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_GabbyAndTy6[] = {
    {
    .lvl = 60,
    .species = SPECIES_SWALOT,
    },
    {
    .lvl = 60,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_Lola1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 20,
    .species = SPECIES_CLAMPERL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 20,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Austina[] = {
    {
    .lvl = 56,
    .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMon sParty_Gwen[] = {
    {
    .lvl = 56,
    .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMon sParty_Lola2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 20,
    .species = SPECIES_CLAMPERL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 20,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Lola3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 20,
    .species = SPECIES_CLAMPERL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 20,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Lola4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 20,
    .species = SPECIES_CLAMPERL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 20,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Lola5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 20,
    .species = SPECIES_CLAMPERL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 20,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Ricky1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 22,
    .species = SPECIES_SIMIPOUR,
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_SCALD}
    }
};

static const struct TrainerMon sParty_Simon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_FLAME_ORB,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_POUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_STUNFISK,
    .heldItem = ITEM_SHUCA_BERRY,
    .nature = NATURE_SASSY,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_DISCHARGE, MOVE_MUD_BOMB, MOVE_ROCK_SLIDE, MOVE_SILVER_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_MYSTIC_WATER,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_AQUA_TAIL, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_ICE_PUNCH}
    },
};

static const struct TrainerMon sParty_Charlie[] = {
    {
    .lvl = 56,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 56,
    .species = SPECIES_DUDUNSPARCE,
    },
};

static const struct TrainerMon sParty_Ricky2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 22,
    .species = SPECIES_SIMIPOUR,
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_SCALD}
    }
};

static const struct TrainerMon sParty_Ricky3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 22,
    .species = SPECIES_SIMIPOUR,
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_SCALD}
    }
};

static const struct TrainerMon sParty_Ricky4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 22,
    .species = SPECIES_SIMIPOUR,
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_SCALD}
    }
};

static const struct TrainerMon sParty_Ricky5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 22,
    .species = SPECIES_SIMIPOUR,
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_SCALD}
    }
};

static const struct TrainerMon sParty_George[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_SLAKOTH,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SLACK_OFF, MOVE_COUNTER, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Berke[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Braxton[] = {
    {
    .lvl = 56,
    .species = SPECIES_PRIMEAPE,
    },
    {
    .lvl = 56,
    .species = SPECIES_MAGNEZONE,
    },
    {
    .lvl = 56,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Vincent[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Leroy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 46,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 46,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Wilton1[] = {
    {
    .lvl = 35,
    .species = SPECIES_NOCTOWL,
    },
    {
    .lvl = 35,
    .species = SPECIES_SAWSBUCK,
    },
    {
    .lvl = 35,
    .species = SPECIES_BEHEEYEM,
    }
};

static const struct TrainerMon sParty_Edgar[] = {
    {
    .lvl = 75,
    .species = SPECIES_GREEDENT,
    },
    {
    .lvl = 75,
    .species = SPECIES_ARCANINE,
    }
};

static const struct TrainerMon sParty_Albert[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_TOXAPEX,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_REGENERATOR,
    .heldItem = ITEM_BLACK_SLUDGE,
    .moves = {MOVE_TOXIC_SPIKES, MOVE_HAZE, MOVE_LIQUIDATION, MOVE_POISON_JAB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_MABOSSTIFF,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_STAKEOUT,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_CRUNCH, MOVE_JAW_LOCK, MOVE_PLAY_ROUGH, MOVE_ICE_FANG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_SIGILYPH,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MAGIC_GUARD,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_AIR_SLASH, MOVE_ROOST, MOVE_STORED_POWER, MOVE_COSMIC_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_RHYPERIOR,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_THUNDERPUNCH, MOVE_MEGAHORN}
    },
    {
         //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 30, 31),
    .lvl = 84,
    .species = SPECIES_VENUSAUR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_VENUSAURITE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER}
    }
};

static const struct TrainerMon sParty_Samuel[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_MIENSHAO,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_REGENERATOR,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_POISON_JAB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_FLAPPLE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_HUSTLE,
    .heldItem = ITEM_WIDE_LENS,
    .moves = {MOVE_SCALE_SHOT, MOVE_GRAV_APPLE, MOVE_SUCKER_PUNCH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_MR_RIME,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SCREEN_CLEANER,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_FREEZY_FROST, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_INTELEON,
    .heldItem = ITEM_CHOICE_SPECS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SNIPER,
    .moves = {MOVE_SNIPE_SHOT, MOVE_AIR_SLASH, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_PINSIR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_HYPER_CUTTER,
    .heldItem = ITEM_PINSIRITE,
    .moves = {MOVE_X_SCISSOR, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_Vito[] = {
    {
    .lvl = 75,
    .species = SPECIES_GOODRA,
    },
    {
    .lvl = 75,
    .species = SPECIES_ALAKAZAM,
    },
    {
    .lvl = 75,
    .species = SPECIES_GALVANTULA,
    }
};

static const struct TrainerMon sParty_Owen[] = {
    {
    .lvl = 75,
    .species = SPECIES_SIGILYPH,
    },
    {
    .lvl = 75,
    .species = SPECIES_SWOOBAT,
    },
    {
    .lvl = 75,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Wilton2[] = {
    {
    .lvl = 35,
    .species = SPECIES_NOCTOWL,
    },
    {
    .lvl = 35,
    .species = SPECIES_SAWSBUCK,
    },
    {
    .lvl = 35,
    .species = SPECIES_BEHEEYEM,
    }
};

static const struct TrainerMon sParty_Wilton3[] = {
    {
    .lvl = 35,
    .species = SPECIES_NOCTOWL,
    },
    {
    .lvl = 35,
    .species = SPECIES_SAWSBUCK,
    },
    {
    .lvl = 35,
    .species = SPECIES_BEHEEYEM,
    }
};

static const struct TrainerMon sParty_Wilton4[] = {
    {
    .lvl = 35,
    .species = SPECIES_NOCTOWL,
    },
    {
    .lvl = 35,
    .species = SPECIES_SAWSBUCK,
    },
    {
    .lvl = 35,
    .species = SPECIES_BEHEEYEM,
    }
};

static const struct TrainerMon sParty_Wilton5[] = {
    {
    .lvl = 35,
    .species = SPECIES_NOCTOWL,
    },
    {
    .lvl = 35,
    .species = SPECIES_SAWSBUCK,
    },
    {
    .lvl = 35,
    .species = SPECIES_BEHEEYEM,
    }
};

static const struct TrainerMon sParty_Warren[] = {
    {
    .lvl = 71,
    .species = SPECIES_GOLEM,
    },
    {
    .lvl = 71,
    .species = SPECIES_GOLEM_ALOLA,
    }
};

static const struct TrainerMon sParty_Mary[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FEINT_ATTACK, MOVE_SHOCK_WAVE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Alexia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DEFENSE_CURL, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jody[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWORDS_DANCE, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Wendy[] = {
    {
    .lvl = 57,
    .species = SPECIES_EMOLGA,
    },
    {
    .lvl = 57,
    .species = SPECIES_ROSERADE,
    },
    {
    .lvl = 57,
    .species = SPECIES_CLAWITZER,
    }
};

static const struct TrainerMon sParty_Keira[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Brooke1[] = {
    {
    .lvl = 37,
    .species = SPECIES_GOGOAT,
    },
    {
    .lvl = 37,
    .species = SPECIES_GREEDENT,
    }
};

static const struct TrainerMon sParty_Jennifer[] = {
    {
    .lvl = 64,
    .species = SPECIES_PURUGLY,
    }
};

static const struct TrainerMon sParty_Hope[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_MAUSHOLD,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TECHNICIAN,
    .heldItem = ITEM_WIDE_LENS,
    .moves = {MOVE_POPULATION_BOMB, MOVE_BITE, MOVE_BULLET_SEED, MOVE_TIDY_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_MAROWAK_ALOLA,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_THICK_CLUB,
    .moves = {MOVE_SHADOW_BONE, MOVE_FLARE_BLITZ, MOVE_BONEMERANG, MOVE_THUNDERPUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_TOGEKISS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SERENE_GRACE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_AIR_SLASH, MOVE_THUNDER_WAVE, MOVE_MOONBLAST, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_XURKITREE,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_BEAST_BOOST,
    .moves = {MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_ENERGY_BALL, MOVE_TAIL_GLOW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_ORBEETLE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SWARM,
    .heldItem = ITEM_ORBEETLITE,
    .moves = {MOVE_BUG_BUZZ, MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_CALM_MIND}
    }
};

static const struct TrainerMon sParty_Shannon[] = {
    {
    .lvl = 75,
    .species = SPECIES_SAWK,
    },
    {
    .lvl = 75,
    .species = SPECIES_THROH,
    },
    {
    .lvl = 75,
    .species = SPECIES_DURANT,
    }
};

static const struct TrainerMon sParty_Michelle[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_CARBINK,
    .nature = NATURE_SASSY,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 6, 252, 0 ),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_CUSTAP_BERRY,
    .moves = {MOVE_STEALTH_ROCK, MOVE_MOONBLAST, MOVE_POWER_GEM, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_POLTEAGEIST,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_HEATPROOF,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_STORED_POWER, MOVE_SHELL_SMASH}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
    .lvl = 83,
    .species = SPECIES_CHATOT,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PUNK_ROCK,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_CHATTER, MOVE_BOOMBURST, MOVE_SYNCHRONOISE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_TORTERRA,
    .heldItem = ITEM_LEFTOVERS,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_SELF_SUFFICIENT,
    .moves = {MOVE_WOOD_HAMMER, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SYNTHESIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_AGGRON,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_AGGRONITE,
    .moves = {MOVE_HEAVY_SLAM, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_BODY_PRESS}
    }
};

static const struct TrainerMon sParty_Caroline[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_WEAVILE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INFILTRATOR,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FAKE_OUT, MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_LOW_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_MAGCARGO,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SIMPLE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_SHELL_SMASH, MOVE_FLAMETHROWER, MOVE_POWER_GEM, MOVE_EARTH_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_BARRASKEWDA,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_LIQUIDATION, MOVE_SCALE_SHOT, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 83,
    .species = SPECIES_MISMAGIUS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_MOONBLAST, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_LOPUNNY,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_LIMBER,
    .heldItem = ITEM_LOPUNNITE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_FAKE_OUT, MOVE_RETURN, MOVE_POWER_UP_PUNCH, MOVE_PLAY_ROUGH}
    }
};

static const struct TrainerMon sParty_Julie[] = {
    {
    .lvl = 75,
    .species = SPECIES_MUK,
    },
    {
    .lvl = 75,
    .species = SPECIES_SWALOT,
    },
    {
    .lvl = 75,
    .species = SPECIES_GARBODOR,
    }
};

static const struct TrainerMon sParty_Brooke2[] = {
    {
    .lvl = 37,
    .species = SPECIES_GOGOAT,
    },
    {
    .lvl = 37,
    .species = SPECIES_GREEDENT,
    }
};

static const struct TrainerMon sParty_Brooke3[] = {
    {
    .lvl = 37,
    .species = SPECIES_GOGOAT,
    },
    {
    .lvl = 37,
    .species = SPECIES_GREEDENT,
    }
};

static const struct TrainerMon sParty_Brooke4[] = {
    {
    .lvl = 37,
    .species = SPECIES_GOGOAT,
    },
    {
    .lvl = 37,
    .species = SPECIES_GREEDENT,
    }
};

static const struct TrainerMon sParty_Brooke5[] = {
    {
    .lvl = 37,
    .species = SPECIES_GOGOAT,
    },
    {
    .lvl = 37,
    .species = SPECIES_GREEDENT,
    }
};

static const struct TrainerMon sParty_Patricia[] = {
    {
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 41,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Kindra[] = {
    {
    .lvl = 56,
    .species = SPECIES_DUSKNOIR,
    },
    {
    .lvl = 56,
    .species = SPECIES_GOTHITELLE,
    }
};

static const struct TrainerMon sParty_Tammy[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_JYNX,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_DRY_SKIN,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_PSYSTRIKE, MOVE_FREEZE_DRY, MOVE_LOVELY_KISS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TOXICROAK,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_DRY_SKIN,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FAKE_OUT, MOVE_GUNK_SHOT, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HELIOLISK,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_DRY_SKIN,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_SURF, MOVE_BOOMBURST, MOVE_THUNDER, MOVE_DRAGON_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_VIVILLON,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SHIELD_DUST,
    .heldItem = ITEM_SHARP_BEAK,
    .moves = {MOVE_QUIVER_DANCE, MOVE_HURRICANE, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER}
    }
};

static const struct TrainerMon sParty_Valerie1[] = {
    {
    .lvl = 65,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

static const struct TrainerMon sParty_Tasha[] = {
    {
    .lvl = 65,
    .species = SPECIES_DUSKNOIR,
    }
};

static const struct TrainerMon sParty_Valerie2[] = {
    {
    .lvl = 65,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

static const struct TrainerMon sParty_Valerie3[] = {
    {
    .lvl = 65,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

static const struct TrainerMon sParty_Valerie4[] = {
    {
    .lvl = 65,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

static const struct TrainerMon sParty_Valerie5[] = {
    {
    .lvl = 65,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

static const struct TrainerMon sParty_Cindy1[] = {
    {
    .lvl = 7,
    .species = SPECIES_CUTIEFLY,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Daphne[] = {
    {
    .lvl = 70,
    .species = SPECIES_CLEFABLE,
    },
    {
    .lvl = 70,
    .species = SPECIES_WHIMSICOTT,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
    {
    .lvl = 26,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 30,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Cindy2[] = {
    {
    .lvl = 7,
    .species = SPECIES_CUTIEFLY,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Brianna[] = {
    {
    .lvl = 70,
    .species = SPECIES_MR_MIME,
    },
    {
    .lvl = 70,
    .species = SPECIES_MR_RIME,
    }
};

static const struct TrainerMon sParty_Naomi[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy3[] = {
    {
    .lvl = 7,
    .species = SPECIES_CUTIEFLY,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy4[] = {
    {
    .lvl = 7,
    .species = SPECIES_CUTIEFLY,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy5[] = {
    {
    .lvl = 7,
    .species = SPECIES_CUTIEFLY,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy6[] = {
    {
    .lvl = 7,
    .species = SPECIES_CUTIEFLY,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Melissa[] = {
    {
    .lvl = 40,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Sheila[] = {
    {
    .lvl = 40,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Shirley[] = {
    {
    .lvl = 40,
    .species = SPECIES_HEATMOR,
    }
};

static const struct TrainerMon sParty_Jessica1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MAGNEZONE,
    .nature = NATURE_NAIVE,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_CUSTAP_BERRY,
    .moves = {MOVE_EXPLOSION, MOVE_FLASH_CANNON, MOVE_THUNDER, MOVE_BODY_PRESS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GLISCOR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_HEAL,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_ROOST, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CRAWDAUNT,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_ADAPTABILITY,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_LIQUIDATION, MOVE_KNOCK_OFF, MOVE_X_SCISSOR, MOVE_AQUA_JET}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_BLASTOISE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_BLASTOISINITE,
    .moves = {MOVE_SHELL_SMASH, MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_AURA_SPHERE}
    }
};

static const struct TrainerMon sParty_Connie[] = {
    {
    .lvl = 72,
    .species = SPECIES_ALCREMIE,
    }
};

static const struct TrainerMon sParty_Bridget[] = {
    {
    .lvl = 71,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Olivia[] = {
    {
    .lvl = 71,
    .species = SPECIES_GOREBYSS,
    },
    {
    .lvl = 71,
    .species = SPECIES_HUNTAIL,
    },
};

static const struct TrainerMon sParty_Tiffany[] = {
    {
    .lvl = 70,
    .species = SPECIES_DACHSBUN,
    },
    {
    .lvl = 70,
    .species = SPECIES_HATTERENE,
    }
};

static const struct TrainerMon sParty_Jessica2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MAGNEZONE,
    .nature = NATURE_HASTY,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_CUSTAP_BERRY,
    .moves = {MOVE_EXPLOSION, MOVE_FLASH_CANNON, MOVE_THUNDER, MOVE_STEALTH_ROCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GLISCOR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_HEAL,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_ROOST, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CRAWDAUNT,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_ADAPTABILITY,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_LIQUIDATION, MOVE_KNOCK_OFF, MOVE_X_SCISSOR, MOVE_AQUA_JET}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_BLASTOISE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_BLASTOISINITE,
    .moves = {MOVE_SHELL_SMASH, MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_AURA_SPHERE}
    }
};

static const struct TrainerMon sParty_Jessica3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MAGNEZONE,
    .nature = NATURE_HASTY,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_CUSTAP_BERRY,
    .moves = {MOVE_EXPLOSION, MOVE_FLASH_CANNON, MOVE_THUNDER, MOVE_STEALTH_ROCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GLISCOR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_HEAL,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_ROOST, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CRAWDAUNT,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_ADAPTABILITY,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_LIQUIDATION, MOVE_KNOCK_OFF, MOVE_X_SCISSOR, MOVE_AQUA_JET}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_BLASTOISE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_BLASTOISINITE,
    .moves = {MOVE_SHELL_SMASH, MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_AURA_SPHERE}
    }
};

static const struct TrainerMon sParty_Jessica4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MAGNEZONE,
    .nature = NATURE_HASTY,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_CUSTAP_BERRY,
    .moves = {MOVE_EXPLOSION, MOVE_FLASH_CANNON, MOVE_THUNDER, MOVE_STEALTH_ROCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GLISCOR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_HEAL,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_ROOST, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CRAWDAUNT,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_ADAPTABILITY,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_LIQUIDATION, MOVE_KNOCK_OFF, MOVE_X_SCISSOR, MOVE_AQUA_JET}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_BLASTOISE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_BLASTOISINITE,
    .moves = {MOVE_SHELL_SMASH, MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_AURA_SPHERE}
    }
};

static const struct TrainerMon sParty_Jessica5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MAGNEZONE,
    .nature = NATURE_HASTY,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_CUSTAP_BERRY,
    .moves = {MOVE_EXPLOSION, MOVE_FLASH_CANNON, MOVE_THUNDER, MOVE_STEALTH_ROCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GLISCOR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_HEAL,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_ROOST, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CRAWDAUNT,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_ADAPTABILITY,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_LIQUIDATION, MOVE_KNOCK_OFF, MOVE_X_SCISSOR, MOVE_AQUA_JET}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_BLASTOISE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_BLASTOISINITE,
    .moves = {MOVE_SHELL_SMASH, MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_AURA_SPHERE}
    }
};

static const struct TrainerMon sParty_Winston1[] = {
    {
    .lvl = 8,
    .species = SPECIES_YUNGOOS,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Mollie[] = {
    {
    .lvl = 33,
    .species = SPECIES_WHISCASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Garret[] = {
    {
    .lvl = 45,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston2[] = {
    {
    .lvl = 8,
    .species = SPECIES_YUNGOOS,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston3[] = {
    {
    .lvl = 8,
    .species = SPECIES_YUNGOOS,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston4[] = {
    {
    .lvl = 8,
    .species = SPECIES_YUNGOOS,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston5[] = {
    {
    .lvl = 8,
    .species = SPECIES_YUNGOOS,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Steve1[] = {
    {
    .lvl = 36,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 36,
    .species = SPECIES_FORRETRESS,
    },
    {
    .lvl = 36,
    .species = SPECIES_LICKILICKY,
    }
};

static const struct TrainerMon sParty_Thalia1[] = {
    {
    .lvl = 56,
    .species = SPECIES_ALAKAZAM,
    },
    {
    .lvl = 56,
    .species = SPECIES_GRANBULL,
    }
};

static const struct TrainerMon sParty_Mark[] = {
    {
    .lvl = 65,
    .species = SPECIES_TREVENANT,
    }
};

static const struct TrainerMon sParty_CourtneyMtChimney[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_CENTISKORCH,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .heldItem = ITEM_CENTISKITE,
    .ability = ABILITY_FLASH_FIRE,
    .moves = {MOVE_X_SCISSOR, MOVE_FIRE_LASH, MOVE_CRUNCH, MOVE_POWER_WHIP}
    },
    //hp, atk, def, speed, spatk, spdef
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 31, 31),
    .lvl = 43,
    .species = SPECIES_SERPERIOR,
    .heldItem = ITEM_FOCUS_SASH,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_LEAF_STORM, MOVE_DRAGON_PULSE, MOVE_HIDDEN_POWER, MOVE_GLARE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_TAUROS_PALDEA_BLAZE,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_STONE_EDGE, MOVE_RAGING_BULL, MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT}
    }
};

static const struct TrainerMon sParty_Steve2[] = {
    {
    .lvl = 36,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 36,
    .species = SPECIES_FORRETRESS,
    },
    {
    .lvl = 36,
    .species = SPECIES_LICKILICKY,
    }
};

static const struct TrainerMon sParty_Steve3[] = {
    {
    .lvl = 36,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 36,
    .species = SPECIES_FORRETRESS,
    },
    {
    .lvl = 36,
    .species = SPECIES_LICKILICKY,
    }
};

static const struct TrainerMon sParty_Steve4[] = {
    {
    .lvl = 36,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 36,
    .species = SPECIES_FORRETRESS,
    },
    {
    .lvl = 36,
    .species = SPECIES_LICKILICKY,
    }
};

static const struct TrainerMon sParty_Steve5[] = {
    {
    .lvl = 36,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 36,
    .species = SPECIES_FORRETRESS,
    },
    {
    .lvl = 36,
    .species = SPECIES_LICKILICKY,
    }
};

static const struct TrainerMon sParty_Luis[] = {
    {
    .lvl = 55,
    .species = SPECIES_BRUXISH,
    },
    {
    .lvl = 55,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Dominik[] = {
    {
    .lvl = 55,
    .species = SPECIES_INTELEON,
    }
};

static const struct TrainerMon sParty_Douglas[] = {
    {
    .lvl = 55,
    .species = SPECIES_GRAPPLOCT,
    },
    {
    .lvl = 55,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Darrin[] = {
    {
    .lvl = 56,
    .species = SPECIES_POLIWRATH,
    },
    {
    .lvl = 56,
    .species = SPECIES_POLITOED,
    },
    {
    .lvl = 56,
    .species = SPECIES_WHISCASH,
    }
};

static const struct TrainerMon sParty_Tony1[] = {
    {
    .lvl = 56,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_Jerome[] = {
    {
    .lvl = 56,
    .species = SPECIES_GOLDUCK,
    },
    {
    .lvl = 56,
    .species = SPECIES_CLEFABLE,
    }
};

static const struct TrainerMon sParty_Matthew[] = {
    {
    .lvl = 56,
    .species = SPECIES_SHARPEDO,
    },
    {
    .lvl = 56,
    .species = SPECIES_SIRFETCHD,
    }
};

static const struct TrainerMon sParty_David[] = {
    {
    .lvl = 56,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 56,
    .species = SPECIES_CLODSIRE,
    }
};

static const struct TrainerMon sParty_Spencer[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_AMBIPOM,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TECHNICIAN,
    .heldItem = ITEM_LOADED_DICE,
    .moves = {MOVE_FAKE_OUT, MOVE_TAIL_SLAP, MOVE_ARM_THRUST, MOVE_DUAL_CHOP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_FLAREON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TOXIC_BOOST,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_FLAME_CHARGE, MOVE_SACRED_FIRE, MOVE_FACADE, MOVE_SUPERPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DRIFBLIM,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_FLARE_BOOST,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_STRENGTH_SAP, MOVE_SHADOW_BALL, MOVE_AIR_SLASH, MOVE_WEATHER_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CHARIZARD,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SOLAR_POWER,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_AIR_SLASH, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_SCORCHING_SANDS}
    }
};

static const struct TrainerMon sParty_Roland[] = {
    {
    .lvl = 66,
    .species = SPECIES_POLIWRATH,
    }
};

static const struct TrainerMon sParty_Nolen[] = {
    {
    .lvl = 60,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Stan[] = {
    {
    .lvl = 60,
    .species = SPECIES_DONDOZO,
    }
};

static const struct TrainerMon sParty_Barry[] = {
    {
    .lvl = 61,
    .species = SPECIES_FLOATZEL,
    },
    {
    .lvl = 61,
    .species = SPECIES_CARRACOSTA,
    }
};

static const struct TrainerMon sParty_Dean[] = {
    {
    .lvl = 59,
    .species = SPECIES_BASCULEGION_M,
    },
    {
    .lvl = 59,
    .species = SPECIES_BASCULEGION_F,
    },
    {
    .lvl = 59,
    .species = SPECIES_BASCULIN_WHITE_STRIPED,
    }
};

static const struct TrainerMon sParty_Rodney[] = {
    {
    .lvl = 65,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 65,
    .species = SPECIES_EELEKTROSS,
    },
};

static const struct TrainerMon sParty_Richard[] = {
    {
    .lvl = 68,
    .species = SPECIES_JELLICENT,
    },
    {
    .lvl = 68,
    .species = SPECIES_TAUROS_PALDEA_AQUA,
    },
};

static const struct TrainerMon sParty_Herman[] = {
    {
    .lvl = 70,
    .species = SPECIES_PALPITOAD,
    },
    {
    .lvl = 70,
    .species = SPECIES_CURSOLA,
    }
};

static const struct TrainerMon sParty_Santiago[] = {
    {
    .lvl = 65,
    .species = SPECIES_SIMIPOUR,
    },
    {
    .lvl = 65,
    .species = SPECIES_WIGGLYTUFF,
    }
};

static const struct TrainerMon sParty_Gilbert[] = {
    {
    .lvl = 70,
    .species = SPECIES_LAPRAS,
    },
    {
    .lvl = 70,
    .species = SPECIES_HAWLUCHA,
    }
};

static const struct TrainerMon sParty_Franklin[] = {
    {
    .lvl = 70,
    .species = SPECIES_WALREIN,
    },
    {
    .lvl = 70,
    .species = SPECIES_DEWGONG,
    }

};

static const struct TrainerMon sParty_Kevin[] = {
    {
    .lvl = 67,
    .species = SPECIES_CRAWDAUNT,
    },
    {
    .lvl = 67,
    .species = SPECIES_MUK_ALOLA,
    },
};

static const struct TrainerMon sParty_Jack[] = {
    {
    .lvl = 74,
    .species = SPECIES_NOCTOWL,
    }
};

static const struct TrainerMon sParty_Dudley[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Chad[] = {
    {
    .lvl = 66,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Tony2[] = {
    {
    .lvl = 56,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_Tony3[] = {
    {
    .lvl = 56,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_Tony4[] = {
    {
    .lvl = 56,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_Tony5[] = {
    {
    .lvl = 56,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_Takao[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 17,
    .species = SPECIES_STUFFUL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 17,
    .species = SPECIES_CRABRAWLER,
    }
};

static const struct TrainerMon sParty_Hitoshi[] = {
    {
    .lvl = 72,
    .species = SPECIES_FLAMIGO,
    },
    {
    .lvl = 72,
    .species = SPECIES_FALINKS,
    }
};

static const struct TrainerMon sParty_Kiyo[] = {
    {
    .lvl = 70,
    .species = SPECIES_HARIYAMA,
    },
    {
    .lvl = 70,
    .species = SPECIES_CONKELDURR,
    },
};

static const struct TrainerMon sParty_Koichi[] = {
    {
    .lvl = 55,
    .species = SPECIES_MIENSHAO,
    },
    {
    .lvl = 55,
    .species = SPECIES_GIGALITH,
    }
};

static const struct TrainerMon sParty_Nob1[] = {
    {
    .lvl = 40,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Nob2[] = {
    {
    .lvl = 40,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Nob3[] = {
    {
    .lvl = 40,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Nob4[] = {
    {
    .lvl = 40,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Nob5[] = {
    {
    .lvl = 40,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Yuji[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 26,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Daisuke[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GRANBULL,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_PLAY_ROUGH, MOVE_ICE_FANG, MOVE_JAW_LOCK, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KROOKODILE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_CUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_HITMONTOP,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_WIDE_LENS,
    .moves = {MOVE_TRIPLE_AXEL, MOVE_TRIPLE_KICK, MOVE_SUCKER_PUNCH, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_HITMONCHAN,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_IRON_FIST,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_MACH_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_HITMONLEE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_STRIKER,
    .heldItem = ITEM_KICKING_SHOES,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_SUCKER_PUNCH, MOVE_BLAZE_KICK, MOVE_AQUA_STEP}
    },
};

static const struct TrainerMon sParty_Atsushi[] = {
    {
    .lvl = 65,
    .species = SPECIES_THROH,
    },
    {
    .lvl = 65,
    .species = SPECIES_SAWK,
    }
};

static const struct TrainerMon sParty_Kirk[] = {
    {
    .lvl = 27,
    .species = SPECIES_CHIMECHO,
    },
    {
    .lvl = 27,
    .species = SPECIES_ALCREMIE,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout7[] = {
    {
    .lvl = 64,
    .species = SPECIES_TOXAPEX,
    },
    {
    .lvl = 64,
    .species = SPECIES_SPIRITOMB,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    {
    .lvl = 64,
    .species = SPECIES_LIEPARD,
    }
};

static const struct TrainerMon sParty_Shawn[] = {
    {
    .lvl = 27,
    .species = SPECIES_AERODACTYL,
    },
    {
    .lvl = 27,
    .species = SPECIES_DRUDDIGON,
    }
};

static const struct TrainerMon sParty_Fernando1[] = {
    {
    .lvl = 56,
    .species = SPECIES_CARBINK,
    },
    {
    .lvl = 56,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_Dalton1[] = {
    {
    .lvl = 28,
    .species = SPECIES_SWANNA,
    },
    {
    .lvl = 28,
    .species = SPECIES_VIVILLON,
    },
    {
    .lvl = 28,
    .species = SPECIES_HELIOLISK,
    },
    {
    .lvl = 28,
    .species = SPECIES_OINKOLOGNE,
    },
};

static const struct TrainerMon sParty_Dalton2[] = {
    {
    .lvl = 28,
    .species = SPECIES_SWANNA,
    },
    {
    .lvl = 28,
    .species = SPECIES_VIVILLON,
    },
    {
    .lvl = 28,
    .species = SPECIES_HELIOLISK,
    },
    {
    .lvl = 28,
    .species = SPECIES_OINKOLOGNE,
    },
};

static const struct TrainerMon sParty_Dalton3[] = {
    {
    .lvl = 28,
    .species = SPECIES_SWANNA,
    },
    {
    .lvl = 28,
    .species = SPECIES_VIVILLON,
    },
    {
    .lvl = 28,
    .species = SPECIES_HELIOLISK,
    },
    {
    .lvl = 28,
    .species = SPECIES_OINKOLOGNE,
    },
};

static const struct TrainerMon sParty_Dalton4[] = {
    {
    .lvl = 28,
    .species = SPECIES_SWANNA,
    },
    {
    .lvl = 28,
    .species = SPECIES_VIVILLON,
    },
    {
    .lvl = 28,
    .species = SPECIES_HELIOLISK,
    },
    {
    .lvl = 28,
    .species = SPECIES_OINKOLOGNE,
    },
};

static const struct TrainerMon sParty_Dalton5[] = {
    {
    .lvl = 28,
    .species = SPECIES_SWANNA,
    },
    {
    .lvl = 28,
    .species = SPECIES_VIVILLON,
    },
    {
    .lvl = 28,
    .species = SPECIES_HELIOLISK,
    },
    {
    .lvl = 28,
    .species = SPECIES_OINKOLOGNE,
    },
};

static const struct TrainerMon sParty_Cole[] = {
    {
    .lvl = 40,
    .species = SPECIES_MAGCARGO,
    }
};

static const struct TrainerMon sParty_Jeff[] = {
    {
    .lvl = 40,
    .species = SPECIES_SUNFLORA,
    },
    {
    .lvl = 40,
    .species = SPECIES_TALONFLAME,
    }
};

static const struct TrainerMon sParty_Axle[] = {
    {
    .lvl = 41,
    .species = SPECIES_FLAREON,
    }
};

static const struct TrainerMon sParty_Jace[] = {
    {
    .lvl = 41,
    .species = SPECIES_RAPIDASH,
    }
};

static const struct TrainerMon sParty_Keegan[] = {
    {
    .lvl = 41,
    .species = SPECIES_TURTONATOR,
    }
};

static const struct TrainerMon sParty_Bernie1[] = {
    {
    .lvl = 37,
    .species = SPECIES_ELECTABUZZ,
    },
    {
    .lvl = 37,
    .species = SPECIES_GOURGEIST,
    },
};

static const struct TrainerMon sParty_Bernie2[] = {
    {
    .lvl = 37,
    .species = SPECIES_ELECTABUZZ,
    },
    {
    .lvl = 37,
    .species = SPECIES_GOURGEIST,
    },
};

static const struct TrainerMon sParty_Bernie3[] = {
    {
    .lvl = 37,
    .species = SPECIES_ELECTABUZZ,
    },
    {
    .lvl = 37,
    .species = SPECIES_GOURGEIST,
    },
};

static const struct TrainerMon sParty_Bernie4[] = {
    {
    .lvl = 37,
    .species = SPECIES_ELECTABUZZ,
    },
    {
    .lvl = 37,
    .species = SPECIES_GOURGEIST,
    },
};

static const struct TrainerMon sParty_Bernie5[] = {
    {
    .lvl = 37,
    .species = SPECIES_ELECTABUZZ,
    },
    {
    .lvl = 37,
    .species = SPECIES_GOURGEIST,
    },
};

static const struct TrainerMon sParty_Drew[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_EXCADRILL,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAND_RUSH,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SANDY_SHOCKS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_WATER_COMPACTION,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_DISCHARGE, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SANDACONDA,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAND_SPIT,
    .heldItem = ITEM_SANDACONDITE,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_QUICK_ATTACK, MOVE_HIGH_HORSEPOWER, MOVE_SCALE_SHOT}
    }
};

static const struct TrainerMon sParty_Beau[] = {
    {
    .lvl = 55,
    .species = SPECIES_CLAYDOL,
    },
    {
    .lvl = 55,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Larry[] = {
    {
    .lvl = 35,
    .species = SPECIES_UNFEZANT,
    },
    {
    .lvl = 35,
    .species = SPECIES_SCOLIPEDE,
    }
};

static const struct TrainerMon sParty_Shane[] = {
    {
    .lvl = 37,
    .species = SPECIES_JYNX,
    },
    {
    .lvl = 37,
    .species = SPECIES_DUBWOOL,
    }
};

static const struct TrainerMon sParty_Rusty[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DURALUDON,
    .nature = NATURE_RELAXED,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 0, 252, 6, 0, 0 ),
    .ability = ABILITY_HEAVY_METAL,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_BODY_PRESS, MOVE_DRAGON_TAIL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BRONZONG,
    .nature = NATURE_RELAXED,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 0, 252, 0, 6, 0 ),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_OCCA_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_GYRO_BALL, MOVE_BODY_PRESS, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GHOLDENGO,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_GOOD_AS_GOLD,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_FOCUS_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_SAMUROTT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SHARPNESS,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_SMART_STRIKE, MOVE_KNOCK_OFF, MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_IRON_CROWN,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_TACHYON_CUTTER, MOVE_PSYSHOCK, MOVE_SECRET_SWORD, MOVE_AIR_SLASH}
    }
};

static const struct TrainerMon sParty_Ethan1[] = {
    {
    .lvl = 40,
    .species = SPECIES_PERSIAN_ALOLA,
    }
};

static const struct TrainerMon sParty_Autumn[] = {
    {
    .lvl = 40,
    .species = SPECIES_PERRSERKER,
    }
};

static const struct TrainerMon sParty_Travis[] = {
    {
    .lvl = 34,
    .species = SPECIES_SANDSLASH,
    },
    {
    .lvl = 34,
    .species = SPECIES_PARASECT,
    },
    {
    .lvl = 34,
    .species = SPECIES_TOUCANNON,
    }
};

static const struct TrainerMon sParty_Ethan2[] = {
    {
    .lvl = 40,
    .species = SPECIES_PERSIAN_ALOLA,
    }
};

static const struct TrainerMon sParty_Ethan3[] = {
    {
    .lvl = 40,
    .species = SPECIES_PERSIAN_ALOLA,
    }
};

static const struct TrainerMon sParty_Ethan4[] = {
    {
    .lvl = 40,
    .species = SPECIES_PERSIAN_ALOLA,
    }
};

static const struct TrainerMon sParty_Ethan5[] = {
    {
    .lvl = 40,
    .species = SPECIES_PERSIAN_ALOLA,
    }
};

static const struct TrainerMon sParty_Brent[] = {
    {
    .lvl = 59,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Donald[] = {
    {
    .lvl = 57,
    .species = SPECIES_DUSTOX,
    },
    {
    .lvl = 57,
    .species = SPECIES_RIBOMBEE,
    },
    {
    .lvl = 57,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Taylor[] = {
    {
    .lvl = 58,
    .species = SPECIES_STONJOURNER,
    },
    {
    .lvl = 58,
    .species = SPECIES_GOGOAT,
    }
};

static const struct TrainerMon sParty_Jeffrey1[] = {
    {
    .lvl = 64,
    .species = SPECIES_MOTHIM,
    }
};

static const struct TrainerMon sParty_Jeffrey2[] = {
    {
    .lvl = 64,
    .species = SPECIES_MOTHIM,
    }
};

static const struct TrainerMon sParty_Jeffrey3[] = {
    {
    .lvl = 64,
    .species = SPECIES_MOTHIM,
    }
};

static const struct TrainerMon sParty_Jeffrey4[] = {
    {
    .lvl = 64,
    .species = SPECIES_MOTHIM,
    }
};

static const struct TrainerMon sParty_Jeffrey5[] = {
    {
    .lvl = 64,
    .species = SPECIES_MOTHIM,
    }
};

static const struct TrainerMon sParty_Edward[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DACHSBUN,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_WELL_BAKED_BODY,
    .heldItem = ITEM_PIXIE_PLATE,
    .moves = {MOVE_PLAY_ROUGH, MOVE_BODY_PRESS, MOVE_BODY_SLAM, MOVE_DIG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MUDSDALE,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_STAMINA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_BODY_PRESS, MOVE_ROCK_TOMB, MOVE_HEAVY_SLAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CRYOGONAL,
    .nature = NATURE_TIMID,
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .moves = {MOVE_FREEZE_DRY, MOVE_ICE_SHARD, MOVE_ANCIENT_POWER, MOVE_RECOVER}
    },
};

static const struct TrainerMon sParty_Preston[] = {
    {
    .lvl = 66,
    .species = SPECIES_SWOOBAT,
    }
};

static const struct TrainerMon sParty_Virgil[] = {
    {
    .lvl = 66,
    .species = SPECIES_RAICHU_ALOLA,
    }
};

static const struct TrainerMon sParty_Blake[] = {
    {
    .lvl = 66,
    .species = SPECIES_BEHEEYEM,
    }
};

static const struct TrainerMon sParty_William[] = {
    {
    .lvl = 64,
    .species = SPECIES_HYPNO,
    },
    {
    .lvl = 64,
    .species = SPECIES_ESPATHRA,
    }
};

static const struct TrainerMon sParty_Joshua[] = {
    {
    .lvl = 41,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 41,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron1[] = {
    {
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    },
    {
    .lvl = 55,
    .species = SPECIES_LUNATONE
    }
};

static const struct TrainerMon sParty_Cameron2[] = {
    {
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    },
    {
    .lvl = 55,
    .species = SPECIES_LUNATONE
    }
};

static const struct TrainerMon sParty_Cameron3[] = {
    {
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    },
    {
    .lvl = 55,
    .species = SPECIES_LUNATONE
    }
};

static const struct TrainerMon sParty_Cameron4[] = {
    {
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    },
    {
    .lvl = 55,
    .species = SPECIES_LUNATONE
    }
};

static const struct TrainerMon sParty_Cameron5[] = {
    {
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    },
    {
    .lvl = 55,
    .species = SPECIES_LUNATONE
    }
};

static const struct TrainerMon sParty_Jaclyn[] = {
    {
    .lvl = 26,
    .species = SPECIES_HYPNO,
    }
};

static const struct TrainerMon sParty_Hannah[] = {
    {
    .lvl = 66,
    .species = SPECIES_GARDEVOIR,
    }
};

static const struct TrainerMon sParty_Samantha[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 66,
    .species = SPECIES_GALLADE,
    }
};

static const struct TrainerMon sParty_Maura[] = {
    {
    .lvl = 66,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Kayla[] = {
    {
    .lvl = 64,
    .species = SPECIES_COFAGRIGUS,
    },
    {
    .lvl = 64,
    .species = SPECIES_RUNERIGUS,
    }
};

static const struct TrainerMon sParty_Alexis[] = {
    {
    .lvl = 41,
    .species = SPECIES_KIRLIA,
    },
    {
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Jacki1[] = {
    {
    .lvl = 56,
    .species = SPECIES_MR_MIME,
    },
    {
    .lvl = 56,
    .species = SPECIES_PANGORO,
    }
};

static const struct TrainerMon sParty_Jacki2[] = {
    {
    .lvl = 56,
    .species = SPECIES_MR_MIME,
    },
    {
    .lvl = 56,
    .species = SPECIES_PANGORO,
    }
};

static const struct TrainerMon sParty_Jacki3[] = {
    {
    .lvl = 56,
    .species = SPECIES_MR_MIME,
    },
    {
    .lvl = 56,
    .species = SPECIES_PANGORO,
    }
};

static const struct TrainerMon sParty_Jacki4[] = {
    {
    .lvl = 56,
    .species = SPECIES_MR_MIME,
    },
    {
    .lvl = 56,
    .species = SPECIES_PANGORO,
    }
};

static const struct TrainerMon sParty_Jacki5[] = {
    {
    .lvl = 56,
    .species = SPECIES_MR_MIME,
    },
    {
    .lvl = 56,
    .species = SPECIES_PANGORO,
    }
};

static const struct TrainerMon sParty_Walter1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SEAKING,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_LIGHTNING_ROD,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FISHIOUS_REND, MOVE_AQUA_JET, MOVE_MEGAHORN, MOVE_SCALE_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CORVIKNIGHT,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_UNNERVE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_PRESS, MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_TAILWIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_OMASTAR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_HYDRO_PUMP, MOVE_EARTH_POWER, MOVE_ICE_BEAM}
    }
};

static const struct TrainerMon sParty_Vanessa[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_KILOWATTREL,
    .heldItem = ITEM_YACHE_BERRY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_STATIC,
    .moves = {MOVE_HURRICANE, MOVE_THUNDER, MOVE_DISCHARGE, MOVE_WEATHER_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_KABUTOPS,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SWORDS_DANCE, MOVE_STONE_EDGE, MOVE_LIQUIDATION, MOVE_X_SCISSOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .lvl = 201,
    .species = SPECIES_DREDNAW,
    .heldItem = ITEM_DREDNAWITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_STRONG_JAW,
    .moves = {MOVE_JAW_LOCK, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_AQUA_FANG}
    },
};

static const struct TrainerMon sParty_Micah[] = {
    {
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Thomas[] = {
    {
    .lvl = 45,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_Walter2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SEAKING,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_LIGHTNING_ROD,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FISHIOUS_REND, MOVE_AQUA_JET, MOVE_MEGAHORN, MOVE_SCALE_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CORVIKNIGHT,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_UNNERVE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_PRESS, MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_TAILWIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_OMASTAR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_HYDRO_PUMP, MOVE_EARTH_POWER, MOVE_ICE_BEAM}
    }
};

static const struct TrainerMon sParty_Walter3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SEAKING,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_LIGHTNING_ROD,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FISHIOUS_REND, MOVE_AQUA_JET, MOVE_MEGAHORN, MOVE_SCALE_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CORVIKNIGHT,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_UNNERVE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_PRESS, MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_TAILWIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_OMASTAR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_HYDRO_PUMP, MOVE_EARTH_POWER, MOVE_ICE_BEAM}
    }
};

static const struct TrainerMon sParty_Walter4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SEAKING,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_LIGHTNING_ROD,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FISHIOUS_REND, MOVE_AQUA_JET, MOVE_MEGAHORN, MOVE_SCALE_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CORVIKNIGHT,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_UNNERVE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_PRESS, MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_TAILWIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_OMASTAR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_HYDRO_PUMP, MOVE_EARTH_POWER, MOVE_ICE_BEAM}
    }
};

static const struct TrainerMon sParty_Walter5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SEAKING,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_LIGHTNING_ROD,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FISHIOUS_REND, MOVE_AQUA_JET, MOVE_MEGAHORN, MOVE_SCALE_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CORVIKNIGHT,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_UNNERVE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_PRESS, MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_TAILWIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_OMASTAR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_HYDRO_PUMP, MOVE_EARTH_POWER, MOVE_ICE_BEAM}
    }
};

static const struct TrainerMon sParty_Sidney1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_MOLTRES_GALAR,
    .nature = NATURE_HASTY,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
    .ability = ABILITY_BERSERK,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_TAILWIND, MOVE_FIERY_WRATH, MOVE_AIR_SLASH, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_GRIMMSNARL,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_PRANKSTER,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SPIRIT_BREAK, MOVE_DARKEST_LARIAT, MOVE_HAMMER_ARM, MOVE_PARTING_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_MUNKIDORI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TOXIC_CHAIN,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_FAKE_OUT, MOVE_SLUDGE_WAVE, MOVE_GRASS_KNOT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_DELPHOX,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MAGIC_GUARD,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_MIND_BLOWN, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_SCORCHING_SANDS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_ROARING_MOON,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_DRAGON_DANCE, MOVE_IRON_HEAD, MOVE_DRAGON_CLAW, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_ABSOL,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_JUSTIFIED,
    .heldItem = ITEM_ABSOLITE,
    .moves = {MOVE_NIGHT_SLASH, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE}
    },
};

static const struct TrainerMon sParty_Sidney2[] = {
    //hp, atk, def, speed, spatk, spdef
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .lvl = 85,
    .species = SPECIES_MOLTRES_GALAR,
    .nature = NATURE_QUIET,
    .ev = TRAINER_PARTY_EVS_QUIET(),
    .ability = ABILITY_BERSERK,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_TRICK_ROOM, MOVE_FIERY_WRATH, MOVE_AIR_SLASH, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .lvl = 85,
    .species = SPECIES_ABSOL,
    .nature = NATURE_BRAVE,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 252, 6, 0, 0, 0 ),
    .ability = ABILITY_SUPER_LUCK,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SUCKER_PUNCH, MOVE_CLOSE_COMBAT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_MUNKIDORI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TOXIC_CHAIN,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_FAKE_OUT, MOVE_SLUDGE_WAVE, MOVE_GRASS_KNOT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .lvl = 85,
    .species = SPECIES_VICTINI,
    .nature = NATURE_BRAVE,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 252, 6, 0, 0, 0 ),
    .ability = ABILITY_VICTORY_STAR,
    .heldItem = ITEM_ROOM_SERVICE,
    .moves = {MOVE_TRICK_ROOM, MOVE_ZEN_HEADBUTT, MOVE_BOLT_STRIKE, MOVE_V_CREATE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .lvl = 85,
    .species = SPECIES_GUZZLORD,
    .nature = NATURE_BRAVE,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 252, 0, 0, 6, 0 ),
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_DRAGON_CLAW, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .lvl = 85,
    .species = SPECIES_GRIMMSNARL,
    .nature = NATURE_QUIET,
    .ev = TRAINER_PARTY_EVS_QUIET(),
    .ability = ABILITY_PRANKSTER,
    .heldItem = ITEM_GRIMMITE,
    .moves = {MOVE_DARK_PULSE, MOVE_MOONBLAST, MOVE_AURA_SPHERE, MOVE_NASTY_PLOT}
    },
};

static const struct TrainerMon sParty_Phoebe1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_WEEZING,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_PAYAPA_BERRY,
    .moves = {MOVE_TOXIC_SPIKES, MOVE_SLUDGE_WAVE, MOVE_HAZE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_DRIFBLIM,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_UNBURDEN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHADOW_BALL, MOVE_AIR_SLASH, MOVE_CALM_MIND, MOVE_STRENGTH_SAP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_FEZANDIPITI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TOXIC_CHAIN,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_MOONBLAST, MOVE_SLUDGE_WAVE, MOVE_DARK_PULSE, MOVE_HEAT_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_PECHARUNT,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_POISON_PUPPETEER,
    .heldItem = ITEM_BLACK_SLUDGE,
    .moves = {MOVE_MALIGNANT_CHAIN, MOVE_HEX, MOVE_PARTING_SHOT, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_LUNALA,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_SHADOW_SHIELD,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_MOONGEIST_BEAM, MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_MOONLIGHT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_DUSKNOIR,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_PRESSURE,
    .heldItem = ITEM_DUSKNOIRITE,
    .moves = {MOVE_WILL_O_WISP, MOVE_AMNESIA, MOVE_EARTHQUAKE, MOVE_POLTERGEIST}
    },
};

static const struct TrainerMon sParty_Phoebe2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_DRAGAPULT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_CLEAR_BODY,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DRAGON_DARTS, MOVE_SHADOW_CLAW, MOVE_STEEL_WING, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_DRAPION,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_WICKED_BLOW, MOVE_CROSS_POISON, MOVE_EARTHQUAKE, MOVE_ICE_FANG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_ANNIHILAPE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_DEFIANT,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_RAGE_FIST, MOVE_ROCK_SLIDE, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_PECHARUNT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_PUPPETEER,
    .heldItem = ITEM_WIDE_LENS,
    .moves = {MOVE_GUNK_SHOT, MOVE_POLTERGEIST, MOVE_FOUL_PLAY, MOVE_PARTING_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_CALYREX_SHADOW,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_AS_ONE_SHADOW_RIDER,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_NASTY_PLOT, MOVE_ASTRAL_BARRAGE, MOVE_PSYSHOCK, MOVE_DRAINING_KISS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_GENGAR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_GENGARITE,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT}
    },
};

static const struct TrainerMon sParty_Glacia1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_NINETALES,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_DROUGHT,
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_FLAMETHROWER, MOVE_ENERGY_BALL, MOVE_PSYSHOCK, MOVE_SCORCHING_SANDS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_DECIDUEYE_HISUI,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_QUILL_RUSH,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_LEAF_BLADE, MOVE_SUCKER_PUNCH, MOVE_STONE_EDGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_DARMANITAN_GALAR_ZEN_MODE_TWO,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_ZEN_MODE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLARE_BLITZ, MOVE_ICICLE_CRASH, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_VOLCANION,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_WATER_ABSORB,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_SLUDGE_WAVE, MOVE_DEFOG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_RESHIRAM,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TURBOBLAZE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_FUSION_FLARE, MOVE_DRAGON_PULSE, MOVE_AURA_SPHERE, MOVE_FLAME_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_CHARIZARD,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_BLAZE,
    .heldItem = ITEM_CHARIZARDITE_Y,
    .moves = {MOVE_FLAMETHROWER, MOVE_AIR_SLASH, MOVE_SOLAR_BEAM, MOVE_DRAGON_PULSE}
    },
};

static const struct TrainerMon sParty_Glacia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_NINETALES_ALOLA,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SNOW_WARNING,
    .heldItem = ITEM_ICY_ROCK,
    .moves = {MOVE_EXTRASENSORY, MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_ELECTIVIRE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_IRON_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_PLASMA_FISTS, MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_DARMANITAN_GALAR_ZEN_MODE_TWO,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_ZEN_MODE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLARE_BLITZ, MOVE_ICICLE_CRASH, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_VOLCANION,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_WATER_ABSORB,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_STEAM_ERUPTION, MOVE_FLAMETHROWER, MOVE_SLUDGE_WAVE, MOVE_DEFOG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_KYUREM_BLACK,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TERAVOLT,
    .heldItem = ITEM_LOADED_DICE,
    .moves = {MOVE_FUSION_BOLT, MOVE_SCALE_SHOT, MOVE_ICICLE_SPEAR, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_ABOMASNOW,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SNOW_WARNING,
    .heldItem = ITEM_ABOMASITE,
    .moves = {MOVE_ICE_HAMMER, MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Cynthia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_SPIRITOMB,
    .nature = NATURE_SASSY,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 6, 252, 0 ),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_DARK_HOLE, MOVE_SUCKER_PUNCH, MOVE_DREAM_EATER, MOVE_POLTERGEIST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_HEATRAN,
    .heldItem = ITEM_AIR_BALLOON,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_FLASH_FIRE,
    .moves = {MOVE_FLAMETHROWER, MOVE_FLASH_CANNON, MOVE_POWER_GEM, MOVE_WILL_O_WISP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_CRAMORANT,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_GULP_MISSILE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_AIR_SLASH, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_ZAMAZENTA_HERO,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_DAUNTLESS_SHIELD,
    .heldItem = ITEM_RUSTED_SHIELD,
    .moves = {MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH}
    },
    {
             //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 30, 31),
    .lvl = 85,
    .species = SPECIES_XERNEAS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_FAIRY_AURA,
    .heldItem = ITEM_POWER_HERB,
    .moves = {MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_HIDDEN_POWER, MOVE_GEOMANCY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_GARCHOMP,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAND_VEIL,
    .heldItem = ITEM_GARCHOMPITE,
    .moves = {MOVE_SCALE_SHOT, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_Drake[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_SALAMENCE,
    .nature = NATURE_HASTY,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT, MOVE_FIRE_BLAST, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_MAGEARNA,
    .heldItem = ITEM_LEFTOVERS,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_SOUL_HEART,
    .moves = {MOVE_FLASH_CANNON, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_AURA_SPHERE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_ARCHALUDON,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_BAD_COMPANY,
    .heldItem = ITEM_POWER_HERB,
    .moves = {MOVE_DRACO_METEOR, MOVE_STEEL_BEAM, MOVE_ELECTRO_SHOT, MOVE_DARK_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_TAUROS_PALDEA_AQUA,
    .heldItem = ITEM_ASSAULT_VEST,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_WAVE_CRASH, MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_GOUGING_FIRE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_FLARE_BLITZ, MOVE_DRAGON_CLAW, MOVE_STOMPING_TANTRUM, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_RAYQUAZA,
    .heldItem = ITEM_FOCUS_SASH,
    .nature = NATURE_NAIVE,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
    .ability = ABILITY_AIR_LOCK,
    .ball = ITEM_MASTER_BALL,
    .moves = {MOVE_DRAGON_ASCENT, MOVE_DRAGON_PULSE, MOVE_EARTH_POWER, MOVE_EXTREME_SPEED}
    },
};

static const struct TrainerMon sParty_Roxanne1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 14,
    .species = SPECIES_RHYHORN,
    .heldItem = ITEM_RINDO_BERRY,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_ROCK_TOMB, MOVE_HORN_ATTACK, MOVE_BULLDOZE, MOVE_ROCK_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_WOOPER_PALDEA,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_MODEST,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_MUD_SHOT, MOVE_ACID_SPRAY, MOVE_YAWN, MOVE_SANDSTORM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_GLIGAR,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SAND_VEIL,
    .moves = {MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_BULLDOZE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_BERRY_JUICE,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_ROCK_BLAST, MOVE_SPARK, MOVE_BULLDOZE, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMon sParty_Brawly1[] = {
    {
            //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 30, 30),
    .lvl = 23,
    .species = SPECIES_PIKACHU_LIBRE,
    .nature = NATURE_TIMID,
    .heldItem = ITEM_LIGHT_BALL,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_FAKE_OUT, MOVE_ELECTROWEB, MOVE_HIDDEN_POWER, MOVE_DRAINING_KISS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 24,
    .species = SPECIES_SANDSLASH_ALOLA,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_ICE_SCALES,
    .moves = {MOVE_ICE_SHARD, MOVE_AERIAL_ACE, MOVE_BULLDOZE, MOVE_CUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_LYCANROC_DUSK,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_TOUGH_CLAWS,
    .moves = {MOVE_LOW_SWEEP, MOVE_ACCELEROCK, MOVE_BULLDOZE, MOVE_ROCK_TOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_GURDURR,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_MACH_PUNCH, MOVE_FIRE_PUNCH, MOVE_LOW_SWEEP, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_THICK_FAT,
    .moves = {MOVE_FAKE_OUT, MOVE_LOW_SWEEP, MOVE_BULLET_PUNCH, MOVE_BULK_UP}
    }
};

static const struct TrainerMon sParty_Wattson1[] = {
    //hp, atk, def, speed, spatk, spdef
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 31, 31),
    .lvl = 34,
    .species = SPECIES_DEDENNE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_ELECTRIC_SURGE,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_VOLT_SWITCH, MOVE_DRAINING_KISS, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_KILOWATTREL,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_AIR_SLASH, MOVE_ELECTROWEB, MOVE_VOLT_SWITCH, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_EVIOLITE,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_ANALYTIC,
    .moves = {MOVE_SHOCK_WAVE, MOVE_MIRROR_SHOT, MOVE_VOLT_SWITCH, MOVE_TRI_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_OCCA_BERRY,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_CHARGE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_LUXRITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_THUNDER_FANG, MOVE_BITE, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG}
    }
};

static const struct TrainerMon sParty_Flannery1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_NINETALES,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_DROUGHT,
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_FLAMETHROWER, MOVE_ENERGY_BALL, MOVE_ROAR, MOVE_SCORCHING_SANDS}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 30, 31, 30, 30),
    .lvl = 47,
    .species = SPECIES_WALKING_WAKE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_CHOICE_SCARF,
    .moves = {MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_SCOVILLAIN,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER, MOVE_SCORCHING_SANDS, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_ROTOM_HEAT,
    .nature = NATURE_BOLD,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 6, 0 ),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_TORKOAL,
    .nature = NATURE_QUIET,
    .ev = TRAINER_PARTY_EVS_QUIET(),
    .ability = ABILITY_DROUGHT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_INFERNAPITE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_BLAZE,
    .isShiny = TRUE,
    .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_THUNDER_PUNCH}
    }
};

static const struct TrainerMon sParty_Norman1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_ZOROARK_HISUI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ILLUSION,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_BITTER_MALICE, MOVE_AURA_SPHERE, MOVE_HYPER_VOICE, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_IRON_VALIANT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_SPIRIT_BREAK, MOVE_BULK_UP, MOVE_KNOCK_OFF}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 30, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_URSALUNA_BLOODMOON,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_MINDS_EYE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_EARTH_POWER, MOVE_BLOOD_MOON, MOVE_HYPER_VOICE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_CYCLIZAR,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_REGENERATOR,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_SHED_TAIL, MOVE_AQUA_TAIL, MOVE_DRAGON_CLAW, MOVE_RETURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_SLAKING,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TRUANT,
    .heldItem = ITEM_SLAKITE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_POWER_UP_PUNCH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_OBSTAGOON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_BRICK_BREAK, MOVE_OBSTRUCT}
    },
};

static const struct TrainerMon sParty_Winona1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_AGGRON,
    .nature = NATURE_ADAMANT,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 6, 252, 252, 0, 0, 0 ),
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_HEAVY_SLAM, MOVE_HEAD_SMASH, MOVE_FIRE_PUNCH, MOVE_BODY_PRESS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_FLYGON,
    .nature = NATURE_NAIVE,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
    .ability = ABILITY_TINTED_LENS,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_DRACO_METEOR, MOVE_HEADLONG_RUSH, MOVE_DUAL_WINGBEAT, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_FROSMOTH,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ICE_SCALES,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 30, 30),
    .lvl = 68,
    .species = SPECIES_THUNDURUS_THERIAN,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_SLUDGE_WAVE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ALTARIANITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_NATURAL_CURE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_RETURN}
    }
};

static const struct TrainerMon sParty_Tate[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_TAPU_LELE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PSYCHIC_SURGE,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .moves = {MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_THUNDERBOLT}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 30, 30),
    .lvl = 76,
    .species = SPECIES_ESPATHRA,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SPEED_BOOST,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_LUMINA_CRASH, MOVE_AIR_SLASH, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_KANGASKHANITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_POWER_UP_PUNCH, MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_BRICK_BREAK}
    }
};

static const struct TrainerMon sParty_Liza[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_IRON_LEAVES,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SHARPNESS,
    .heldItem = ITEM_CHOICE_SCARF,
    .moves = {MOVE_LEAF_BLADE, MOVE_PSYBLADE, MOVE_SACRED_SWORD, MOVE_NIGHT_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_FARIGIRAF,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_PARENTAL_BOND,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_EXPANDING_FORCE, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_ALAKAZITE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_EXPANDING_FORCE, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Juan1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_TAPU_FINI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MISTY_SURGE,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .moves = {MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_SURF, MOVE_FLIP_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_TINKATON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_OWN_TEMPO,
    .heldItem = ITEM_SHUCA_BERRY,
    .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_STONE_EDGE, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_RAPIDASH_GALAR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_URSALUNA,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_BULLETPROOF,
    .heldItem = ITEM_ASSAULT_VEST,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_FLUTTER_MANE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_ENERGY_BALL, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_PSYSHOCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_DIANCIE,
    .heldItem = ITEM_DIANCITE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_MOONBLAST, MOVE_DIAMOND_STORM, MOVE_CALM_MIND, MOVE_EARTH_POWER}
    }
};

static const struct TrainerMon sParty_Jerry1[] = {
    {
    .lvl = 17,
    .species = SPECIES_MARACTUS,
    }
};

static const struct TrainerMon sParty_Ted[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KLEAVOR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SHARPNESS,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_STONE_AXE, MOVE_X_SCISSOR, MOVE_ACCELEROCK, MOVE_NIGHT_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_JUMPLUFF,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_AERILATE,
    .heldItem = ITEM_YACHE_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE, MOVE_LEAF_BLADE, MOVE_STRENGTH_SAP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_PARASECT,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_DRY_SKIN,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SPORE, MOVE_SAPPY_SEED, MOVE_LEECH_LIFE, MOVE_CRABHAMMER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_SNORLAX,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_SNORLAXITE,
    .moves = {MOVE_BODY_SLAM, MOVE_WOOD_HAMMER, MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_PHEROMOSA,
    .nature = NATURE_MILD,
    .ev = TRAINER_PARTY_EVS_MILD(),
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_BUG_BUZZ, MOVE_AURA_SPHERE, MOVE_ICE_BEAM, MOVE_CLOSE_COMBAT}
    }
};

static const struct TrainerMon sParty_Rachel[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LEAVANNY,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SHARPNESS,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_SACRED_SWORD, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_ELECTRODE_HISUI,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_RECKLESS,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_CHLOROBLAST, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CRUSTLE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_X_SCISSOR, MOVE_STONE_EDGE, MOVE_KNOCK_OFF}
    },
    {
         //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 30, 31),
    .lvl = 202,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_ROSERADITE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_MEGA_DRAIN, MOVE_SLUDGE, MOVE_ANCIENT_POWER, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_KARTANA,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_LEAF_BLADE, MOVE_SMART_STRIKE, MOVE_SACRED_SWORD, MOVE_NIGHT_SLASH}
    }
};

static const struct TrainerMon sParty_Jerry2[] = {
    {
    .lvl = 17,
    .species = SPECIES_MARACTUS,
    }
};

static const struct TrainerMon sParty_Jerry3[] = {
    {
    .lvl = 17,
    .species = SPECIES_MARACTUS,
    }
};

static const struct TrainerMon sParty_Jerry4[] = {
    {
    .lvl = 17,
    .species = SPECIES_MARACTUS,
    }
};

static const struct TrainerMon sParty_Jerry5[] = {
    {
    .lvl = 17,
    .species = SPECIES_MARACTUS,
    }
};

static const struct TrainerMon sParty_Karen1[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 10,
    .species = SPECIES_NIDORAN_F,
    }
};

static const struct TrainerMon sParty_Georgia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TREVENANT,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_HARVEST,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_LEECH_SEED, MOVE_CONFUSE_RAY, MOVE_HORN_LEECH, MOVE_POLTERGEIST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TOEDSCRUEL,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CLEAR_BODY,
    .heldItem = ITEM_YACHE_BERRY,
    .moves = {MOVE_SPORE, MOVE_LEECH_SEED, MOVE_EARTH_POWER, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MASQUERAIN,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_QUIVER_DANCE, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_BUG_BUZZ}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BUTTERFREE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_COMPOUND_EYES,
    .heldItem = ITEM_BUTTERFRITE,
    .moves = {MOVE_QUIVER_DANCE, MOVE_HURRICANE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_WO_CHIEN,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_TABLETS_OF_RUIN,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_LEECH_SEED, MOVE_STUN_SPORE, MOVE_GIGA_DRAIN, MOVE_RUINATION}
    }
};

static const struct TrainerMon sParty_Karen2[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 10,
    .species = SPECIES_NIDORAN_F,
    }
};

static const struct TrainerMon sParty_Karen3[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 10,
    .species = SPECIES_NIDORAN_F,
    }
};

static const struct TrainerMon sParty_Karen4[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 10,
    .species = SPECIES_NIDORAN_F,
    }
};

static const struct TrainerMon sParty_Karen5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 10,
    .species = SPECIES_NIDORAN_F,
    }
};

static const struct TrainerMon sParty_KateAndJoy[] = {
    {
    .lvl = 64,
    .species = SPECIES_SPINDA,
    },
    {
    .lvl = 64,
    .species = SPECIES_LIEPARD,
    }
};

static const struct TrainerMon sParty_AnnaAndMeg1[] = {
    {
    .lvl = 26,
    .species = SPECIES_LINOONE,
    },
    {
    .lvl = 26,
    .species = SPECIES_XATU,
    },
    {
    .lvl = 24,
    .species = SPECIES_FLAAFFY,
    },
    {
    .lvl = 24,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_AnnaAndMeg2[] = {
    {
    .lvl = 26,
    .species = SPECIES_LINOONE,
    },
    {
    .lvl = 26,
    .species = SPECIES_XATU,
    },
    {
    .lvl = 24,
    .species = SPECIES_FLAAFFY,
    },
    {
    .lvl = 24,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_AnnaAndMeg3[] = {
    {
    .lvl = 26,
    .species = SPECIES_LINOONE,
    },
    {
    .lvl = 26,
    .species = SPECIES_XATU,
    },
    {
    .lvl = 24,
    .species = SPECIES_FLAAFFY,
    },
    {
    .lvl = 24,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_AnnaAndMeg4[] = {
    {
    .lvl = 26,
    .species = SPECIES_LINOONE,
    },
    {
    .lvl = 26,
    .species = SPECIES_XATU,
    },
    {
    .lvl = 24,
    .species = SPECIES_FLAAFFY,
    },
    {
    .lvl = 24,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_AnnaAndMeg5[] = {
    {
    .lvl = 26,
    .species = SPECIES_LINOONE,
    },
    {
    .lvl = 26,
    .species = SPECIES_XATU,
    },
    {
    .lvl = 24,
    .species = SPECIES_FLAAFFY,
    },
    {
    .lvl = 24,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Victor[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_BOLTUND,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_STRONG_JAW,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_PIDGEOT,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_FRISK,
    .heldItem = ITEM_PIDGEOTITE,
    .moves = {MOVE_HURRICANE, MOVE_FACADE, MOVE_ROOST, MOVE_HEAT_WAVE}
    },
};

static const struct TrainerMon sParty_Miguel1[] = {
    {
    .lvl = 25,
    .species = SPECIES_DELCATTY,
    },
    {
    .lvl = 25,
    .species = SPECIES_FEAROW,
    }
};

static const struct TrainerMon sParty_Colton[] = {
    {
    .lvl = 22,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 36,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 40,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 12,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 30,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 42,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    }
};

static const struct TrainerMon sParty_Miguel2[] = {
    {
    .lvl = 25,
    .species = SPECIES_DELCATTY,
    },
    {
    .lvl = 25,
    .species = SPECIES_FEAROW,
    }
};

static const struct TrainerMon sParty_Miguel3[] = {
    {
    .lvl = 25,
    .species = SPECIES_DELCATTY,
    },
    {
    .lvl = 25,
    .species = SPECIES_FEAROW,
    }
};

static const struct TrainerMon sParty_Miguel4[] = {
    {
    .lvl = 25,
    .species = SPECIES_DELCATTY,
    },
    {
    .lvl = 25,
    .species = SPECIES_FEAROW,
    }
};

static const struct TrainerMon sParty_Miguel5[] = {
    {
    .lvl = 25,
    .species = SPECIES_DELCATTY,
    },
    {
    .lvl = 25,
    .species = SPECIES_FEAROW,
    }
};

static const struct TrainerMon sParty_Victoria[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CETITAN,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_SHEER_FORCE,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .moves = {MOVE_ICICLE_CRASH, MOVE_BODY_SLAM, MOVE_BULLDOZE, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SLOWBRO,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_OWN_TEMPO,
    .heldItem = ITEM_SLOWBRONITE,
    .moves = {MOVE_PSYCHIC, MOVE_SCALD, MOVE_YAWN, MOVE_SLACK_OFF}
    },
};

static const struct TrainerMon sParty_Bethany[] = {
    {
    .lvl = 70,
    .species = SPECIES_MEGANIUM,
    },
    {
    .lvl = 70,
    .species = SPECIES_CARBINK,
    },
    {
    .lvl = 70,
    .species = SPECIES_COMFEY,
    }
};

static const struct TrainerMon sParty_Isabel1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_MAGNET,
    .nature = NATURE_TIMID,
    .ability = ABILITY_TRANSISTOR,
    .moves = {MOVE_GRASS_KNOT, MOVE_SIGNAL_BEAM, MOVE_ELECTROWEB, MOVE_CHARGE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_CALM,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_ICY_WIND, MOVE_AIR_SLASH, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_Isabel2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_MAGNET,
    .nature = NATURE_TIMID,
    //custom timid
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 160, 0, 160 ),
    .ability = ABILITY_TRANSISTOR,
    .moves = {MOVE_GRASS_KNOT, MOVE_SIGNAL_BEAM, MOVE_ELECTROWEB, MOVE_CHARGE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_CALM,
    //custom calm
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 160, 0, 0, 0, 160, 0 ),
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_ICY_WIND, MOVE_AIR_SLASH, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_Isabel3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_MAGNET,
    .nature = NATURE_TIMID,
    //custom timid
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 160, 0, 160 ),
    .ability = ABILITY_TRANSISTOR,
    .moves = {MOVE_GRASS_KNOT, MOVE_SIGNAL_BEAM, MOVE_ELECTROWEB, MOVE_CHARGE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_CALM,
    //custom calm
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 160, 0, 0, 0, 160, 0 ),
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_ICY_WIND, MOVE_AIR_SLASH, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_Isabel4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_MAGNET,
    .nature = NATURE_TIMID,
    //custom timid
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 160, 0, 160 ),
    .ability = ABILITY_TRANSISTOR,
    .moves = {MOVE_GRASS_KNOT, MOVE_SIGNAL_BEAM, MOVE_ELECTROWEB, MOVE_CHARGE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_CALM,
    //custom calm
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 160, 0, 0, 0, 160, 0 ),
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_ICY_WIND, MOVE_AIR_SLASH, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_Isabel5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_MAGNET,
    .nature = NATURE_TIMID,
    //custom timid
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 160, 0, 160 ),
    .ability = ABILITY_TRANSISTOR,
    .moves = {MOVE_GRASS_KNOT, MOVE_SIGNAL_BEAM, MOVE_ELECTROWEB, MOVE_CHARGE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_CALM,
    //custom calm
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 160, 0, 0, 0, 160, 0 ),
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_ICY_WIND, MOVE_AIR_SLASH, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_Timothy1[] = {
    {
    .lvl = 56,
    .species = SPECIES_HAXORUS,
    }
};

static const struct TrainerMon sParty_Timothy2[] = {
    {
    .lvl = 56,
    .species = SPECIES_HAXORUS,
    }
};

static const struct TrainerMon sParty_Timothy3[] = {
    {
    .lvl = 56,
    .species = SPECIES_HAXORUS,
    }
};

static const struct TrainerMon sParty_Timothy4[] = {
    {
    .lvl = 56,
    .species = SPECIES_HAXORUS,
    }
};

static const struct TrainerMon sParty_Timothy5[] = {
    {
    .lvl = 56,
    .species = SPECIES_HAXORUS,
    }
};

static const struct TrainerMon sParty_Vicky[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_DURALUDON,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_HEAVY_METAL,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_BODY_PRESS, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MEDICHAM,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_HUGE_POWER,
    .heldItem = ITEM_MEDICHAMITE,
    .moves = {MOVE_FAKE_OUT, MOVE_DRAIN_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH}
    },
};

static const struct TrainerMon sParty_Shelby1[] = {
    {
    .lvl = 40,
    .species = SPECIES_RUNERIGUS,
    },
    {
    .lvl = 40,
    .species = SPECIES_MIENSHAO,
    }
};

static const struct TrainerMon sParty_Shelby2[] = {
    {
    .lvl = 40,
    .species = SPECIES_RUNERIGUS,
    },
    {
    .lvl = 40,
    .species = SPECIES_MIENSHAO,
    }
};

static const struct TrainerMon sParty_Shelby3[] = {
    {
    .lvl = 40,
    .species = SPECIES_RUNERIGUS,
    },
    {
    .lvl = 40,
    .species = SPECIES_MIENSHAO,
    }
};

static const struct TrainerMon sParty_Shelby4[] = {
    {
    .lvl = 40,
    .species = SPECIES_RUNERIGUS,
    },
    {
    .lvl = 40,
    .species = SPECIES_MIENSHAO,
    }
};

static const struct TrainerMon sParty_Shelby5[] = {
    {
    .lvl = 40,
    .species = SPECIES_RUNERIGUS,
    },
    {
    .lvl = 40,
    .species = SPECIES_MIENSHAO,
    }
};

static const struct TrainerMon sParty_Calvin1[] = {
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_Billy[] = {
    {
    .lvl = 7,
    .species = SPECIES_WOOLOO,
    },
    {
    .lvl = 7,
    .species = SPECIES_SEEDOT,
    }
};

static const struct TrainerMon sParty_Josh[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 12,
    .species = SPECIES_GROWLITHE_HISUI,
    }
};

static const struct TrainerMon sParty_Tommy[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SCRAGGY,
    .lvl = 10,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .species = SPECIES_DIGLETT_ALOLA,
    .lvl = 10,
    }
};

static const struct TrainerMon sParty_Joey[] = {
    {
    .lvl = 10,
    .species = SPECIES_TIMBURR,
    }
};

static const struct TrainerMon sParty_Ben[] = {
    {
    .lvl = 27,
    .species = SPECIES_GRAFAIAI,
    },
    {
    .lvl = 27,
    .species = SPECIES_VULLABY,
    }
};

static const struct TrainerMon sParty_Quincy[] = {
    {
    .lvl = 75,
    .species = SPECIES_ARMAROUGE,
    },
    {
    .lvl = 75,
    .species = SPECIES_CERULEDGE,
    }
};

static const struct TrainerMon sParty_Katelynn[] = {
    {
    .lvl = 75,
    .species = SPECIES_VILEPLUME,
    },
    {
    .lvl = 75,
    .species = SPECIES_ELDEGOSS,
    },
    {
    .lvl = 75,
    .species = SPECIES_WHIMSICOTT,
    }
};

static const struct TrainerMon sParty_Jaylen[] = {
    {
    .lvl = 37,
    .species = SPECIES_VIBRAVA,
    },
    {
    .lvl = 35,
    .species = SPECIES_GRAPPLOCT,
    }
};

static const struct TrainerMon sParty_Dillon[] = {
    {
    .lvl = 37,
    .species = SPECIES_LAIRON,
    },
    {
    .lvl = 36,
    .species = SPECIES_CLEFABLE,
    }
};

static const struct TrainerMon sParty_Calvin2[] = {
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_Calvin3[] = {
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_Calvin4[] = {
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_Calvin5[] = {
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_Eddie[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_QWILFISH,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_TOXIC_SPIKES, MOVE_FLIP_TURN, MOVE_TAUNT, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_REVAVROOM,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_FILTER,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_GUNK_SHOT, MOVE_SPIN_OUT, MOVE_SHIFT_GEAR, MOVE_HIGH_HORSEPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DRAPION,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_WICKED_BLOW, MOVE_CROSS_POISON, MOVE_ICE_FANG, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BEEDRILL,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SWARM,
    .heldItem = ITEM_BEEDRILLITE,
    .moves = {MOVE_SWORDS_DANCE, MOVE_X_SCISSOR, MOVE_POISON_JAB, MOVE_DRILL_RUN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_NAGANADEL,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_DRAGON_PULSE, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT}
    }
};

static const struct TrainerMon sParty_Allen[] = {
    {
    .lvl = 4,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 5,
    .species = SPECIES_PATRAT,
    }
};

static const struct TrainerMon sParty_Timmy[] = {
    {
    .lvl = 25,
    .species = SPECIES_ELDEGOSS,
    },
    {
    .lvl = 25,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 25,
    .species = SPECIES_CHATOT,
    }
};

static const struct TrainerMon sParty_WallaceWithSteven[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_EMPOLEON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_EMPOLEONITE_O,
    .isShiny = TRUE,
    .moves = {MOVE_IRON_HEAD, MOVE_LIQUIDATION, MOVE_DRILL_PECK, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_PALKIA,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TELEPATHY,
    .heldItem = ITEM_LUSTROUS_ORB,
    .moves = {MOVE_SPACIAL_REND, MOVE_EARTH_POWER, MOVE_AURA_SPHERE, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_SUICUNE,
    .heldItem = ITEM_LEFTOVERS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_AIR_SLASH}
    }
};

static const struct TrainerMon sParty_StevenWithWallace[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_EMPOLEON,
    .nature = NATURE_RELAXED,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_EMPOLEONITE_D,
    .isShiny = TRUE,
    .moves = {MOVE_TOXIC, MOVE_FLASH_CANNON, MOVE_FLIP_TURN, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_DIALGA,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TELEPATHY,
    .heldItem = ITEM_ADAMANT_ORB,
    .moves = {MOVE_ROAR_OF_TIME, MOVE_FLASH_CANNON, MOVE_FIRE_BLAST, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 85,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_ASSAULT_VEST,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TOUGH_CLAWS,
    .moves = {MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_BULLET_PUNCH}
    }
};

static const struct TrainerMon sParty_Ivan[] = {
    {
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 6,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 7,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Claude[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BEARTIC,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SLUSH_RUSH,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_ICICLE_CRASH, MOVE_BRICK_BREAK, MOVE_NIGHT_SLASH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_ARCTOVISH,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_SLUSH_RUSH,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FISHIOUS_REND, MOVE_ICICLE_CRASH, MOVE_CRUNCH, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CLOYSTER,
    .nature = NATURE_NAIVE,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
    .ability = ABILITY_SKILL_LINK,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_ARAQUANID,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_WATER_BUBBLE,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_MIRROR_COAT, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Elliot1[] = {
    {
    .lvl = 13,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 15,
    .species = SPECIES_MAREANIE,
    },
    {
    .lvl = 14,
    .species = SPECIES_KRABBY,
    }
};

static const struct TrainerMon sParty_Ned[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_TENTACOOL,
    },
    {
        .species = SPECIES_DUCKLETT,
        .lvl = 16,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_WATER_PULSE, MOVE_AIR_CUTTER, MOVE_NONE, MOVE_NONE},
    }
};

static const struct TrainerMon sParty_Dale[] = {
    {
    .lvl = 25,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 23,
    .species = SPECIES_PYUKUMUKU,
    },
    {
    .lvl = 23,
    .species = SPECIES_BASCULIN,
    },
    {
    .lvl = 22,
    .species = SPECIES_QUAGSIRE,
    }
};

static const struct TrainerMon sParty_Nolan[] = {
    {
    .lvl = 37,
    .species = SPECIES_WHISCASH,
    },
    {
    .lvl = 37,
    .species = SPECIES_GASTRODON,
    },
    {
    .lvl = 37,
    .species = SPECIES_QUAGSIRE,
    }
};

static const struct TrainerMon sParty_Barny[] = {
    {
    .lvl = 55,
    .species = SPECIES_WAILORD,
    },
    {
    .lvl = 55,
    .species = SPECIES_DREDNAW,
    }
};

static const struct TrainerMon sParty_Wade[] = {
    {
    .lvl = 55,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Carter[] = {
    {
    .lvl = 55,
    .species = SPECIES_CRAMORANT,
    },
    {
    .lvl = 55,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot2[] = {
    {
    .lvl = 13,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 15,
    .species = SPECIES_MAREANIE,
    },
    {
    .lvl = 14,
    .species = SPECIES_KRABBY,
    }
};

static const struct TrainerMon sParty_Elliot3[] = {
    {
    .lvl = 13,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 15,
    .species = SPECIES_MAREANIE,
    },
    {
    .lvl = 14,
    .species = SPECIES_KRABBY,
    }
};

static const struct TrainerMon sParty_Elliot4[] = {
    {
    .lvl = 13,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 15,
    .species = SPECIES_MAREANIE,
    },
    {
    .lvl = 14,
    .species = SPECIES_KRABBY,
    }
};

static const struct TrainerMon sParty_Elliot5[] = {
    {
    .lvl = 13,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 15,
    .species = SPECIES_MAREANIE,
    },
    {
    .lvl = 14,
    .species = SPECIES_KRABBY,
    }
};

static const struct TrainerMon sParty_Ronald[] = {
    {
    .lvl = 70,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 70,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Jacob[] = {
    {
    .lvl = 23,
    .species = SPECIES_STARAVIA,
    },
    {
    .lvl = 23,
    .species = SPECIES_BOLDORE,
    },
    {
    .lvl = 23,
    .species = SPECIES_CINCCINO,
    },
    {
    .lvl = 23,
    .species = SPECIES_SIRFETCHD,
    }
};

static const struct TrainerMon sParty_Anthony[] = {
    {
    .lvl = 25,
    .species = SPECIES_MAGNETON,
    },
    {
    .lvl = 25,
    .species = SPECIES_VIGOROTH,
    },
    {
    .lvl = 25,
    .species = SPECIES_SIGILYPH,
    }
};

static const struct TrainerMon sParty_Benjamin1[] = {
    {
    .lvl = 26,
    .species = SPECIES_DIGGERSBY,
    },
    {
    .lvl = 26,
    .species = SPECIES_COMFEY,
    },
    {
    .lvl = 26,
    .species = SPECIES_SNEASEL,
    }
};

static const struct TrainerMon sParty_Benjamin2[] = {
    {
    .lvl = 26,
    .species = SPECIES_DIGGERSBY,
    },
    {
    .lvl = 26,
    .species = SPECIES_COMFEY,
    },
    {
    .lvl = 26,
    .species = SPECIES_SNEASEL,
    }
};

static const struct TrainerMon sParty_Benjamin3[] = {
    {
    .lvl = 26,
    .species = SPECIES_DIGGERSBY,
    },
    {
    .lvl = 26,
    .species = SPECIES_COMFEY,
    },
    {
    .lvl = 26,
    .species = SPECIES_SNEASEL,
    }
};

static const struct TrainerMon sParty_Benjamin4[] = {
    {
    .lvl = 26,
    .species = SPECIES_DIGGERSBY,
    },
    {
    .lvl = 26,
    .species = SPECIES_COMFEY,
    },
    {
    .lvl = 26,
    .species = SPECIES_SNEASEL,
    }
};

static const struct TrainerMon sParty_Benjamin5[] = {
    {
    .lvl = 26,
    .species = SPECIES_DIGGERSBY,
    },
    {
    .lvl = 26,
    .species = SPECIES_COMFEY,
    },
    {
    .lvl = 26,
    .species = SPECIES_SNEASEL,
    }
};

static const struct TrainerMon sParty_Abigail1[] = {
    {
    .lvl = 26,
    .species = SPECIES_MORPEKO,
    },
    {
    .lvl = 26,
    .species = SPECIES_CORSOLA,
    }
};

static const struct TrainerMon sParty_Jasmine[] = {
    {
    .lvl = 24,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 24,
    .species = SPECIES_HOUNDOOM,
    },
    {
    .lvl = 24,
    .species = SPECIES_VOLTORB_HISUI,
    }
};

static const struct TrainerMon sParty_Abigail2[] = {
    {
    .lvl = 26,
    .species = SPECIES_MORPEKO,
    },
    {
    .lvl = 26,
    .species = SPECIES_CORSOLA,
    }
};

static const struct TrainerMon sParty_Abigail3[] = {
    {
    .lvl = 26,
    .species = SPECIES_MORPEKO,
    },
    {
    .lvl = 26,
    .species = SPECIES_CORSOLA,
    }
};

static const struct TrainerMon sParty_Abigail4[] = {
    {
    .lvl = 26,
    .species = SPECIES_MORPEKO,
    },
    {
    .lvl = 26,
    .species = SPECIES_CORSOLA,
    }
};

static const struct TrainerMon sParty_Abigail5[] = {
    {
    .lvl = 26,
    .species = SPECIES_MORPEKO,
    },
    {
    .lvl = 26,
    .species = SPECIES_CORSOLA,
    }
};

static const struct TrainerMon sParty_Dylan1[] = {
    {
    .lvl = 27,
    .species = SPECIES_HITMONCHAN,
    },
    {
    .lvl = 27,
    .species = SPECIES_SAWK,
    }
};

static const struct TrainerMon sParty_Dylan2[] = {
    {
    .lvl = 27,
    .species = SPECIES_HITMONCHAN,
    },
    {
    .lvl = 27,
    .species = SPECIES_SAWK,
    }
};

static const struct TrainerMon sParty_Dylan3[] = {
    {
    .lvl = 27,
    .species = SPECIES_HITMONCHAN,
    },
    {
    .lvl = 27,
    .species = SPECIES_SAWK,
    }
};

static const struct TrainerMon sParty_Dylan4[] = {
    {
    .lvl = 27,
    .species = SPECIES_HITMONCHAN,
    },
    {
    .lvl = 27,
    .species = SPECIES_SAWK,
    }
};

static const struct TrainerMon sParty_Dylan5[] = {
    {
    .lvl = 27,
    .species = SPECIES_HITMONCHAN,
    },
    {
    .lvl = 27,
    .species = SPECIES_SAWK,
    }
};

static const struct TrainerMon sParty_Maria1[] = {
    {
    .lvl = 27,
    .species = SPECIES_HITMONLEE,
    },
    {
    .lvl = 27,
    .species = SPECIES_THROH,
    },
};

static const struct TrainerMon sParty_Maria2[] = {
    {
    .lvl = 27,
    .species = SPECIES_HITMONLEE,
    },
    {
    .lvl = 27,
    .species = SPECIES_THROH,
    },
};

static const struct TrainerMon sParty_Maria3[] = {
    {
    .lvl = 27,
    .species = SPECIES_HITMONLEE,
    },
    {
    .lvl = 27,
    .species = SPECIES_THROH,
    },
};

static const struct TrainerMon sParty_Maria4[] = {
    {
    .lvl = 27,
    .species = SPECIES_HITMONLEE,
    },
    {
    .lvl = 27,
    .species = SPECIES_THROH,
    },
};

static const struct TrainerMon sParty_Maria5[] = {
    {
    .lvl = 27,
    .species = SPECIES_HITMONLEE,
    },
    {
    .lvl = 27,
    .species = SPECIES_THROH,
    },
};

static const struct TrainerMon sParty_Camden[] = {
    {
    .lvl = 63,
    .species = SPECIES_INTELEON,
    },
    {
    .lvl = 63,
    .species = SPECIES_GOLDUCK,
    }
};

static const struct TrainerMon sParty_Demetrius[] = {
    {
    .lvl = 56,
    .species = SPECIES_OBSTAGOON,
    },
    {
    .lvl = 56,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Isaiah1[] = {
    {
    .lvl = 67,
    .species = SPECIES_XATU,
    },
    {
    .lvl = 67,
    .species = SPECIES_MANTINE,
    }
};

static const struct TrainerMon sParty_Pablo1[] = {
    {
    .lvl = 62,
    .species = SPECIES_OCTILLERY,
    },
    {
    .lvl = 62,
    .species = SPECIES_GRENINJA,
    }
};

static const struct TrainerMon sParty_Chase[] = {
    {
    .lvl = 68,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 68,
    .species = SPECIES_GRENINJA,
    }
};

static const struct TrainerMon sParty_Isaiah2[] = {
    {
    .lvl = 67,
    .species = SPECIES_XATU,
    },
    {
    .lvl = 67,
    .species = SPECIES_MANTINE,
    }
};

static const struct TrainerMon sParty_Isaiah3[] = {
    {
    .lvl = 67,
    .species = SPECIES_XATU,
    },
    {
    .lvl = 67,
    .species = SPECIES_MANTINE,
    }
};

static const struct TrainerMon sParty_Isaiah4[] = {
    {
    .lvl = 67,
    .species = SPECIES_XATU,
    },
    {
    .lvl = 67,
    .species = SPECIES_MANTINE,
    }
};

static const struct TrainerMon sParty_Isaiah5[] = {
    {
    .lvl = 67,
    .species = SPECIES_XATU,
    },
    {
    .lvl = 67,
    .species = SPECIES_MANTINE,
    }
};

static const struct TrainerMon sParty_Isobel[] = {
    {
    .lvl = 60,
    .species = SPECIES_TATSUGIRI,
    }
};

static const struct TrainerMon sParty_Donny[] = {
    {
    .lvl = 62,
    .species = SPECIES_ARCTOVISH,
    },
    {
    .lvl = 62,
    .species = SPECIES_DRACOVISH,
    }
};

static const struct TrainerMon sParty_Talia[] = {
    {
    .lvl = 68,
    .species = SPECIES_STARMIE,
    },
    {
    .lvl = 68,
    .species = SPECIES_MUK,
    },
};

static const struct TrainerMon sParty_Katelyn1[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Allison[] = {
    {
    .lvl = 67,
    .species = SPECIES_ROSERADE,
    },
    {
    .lvl = 67,
    .species = SPECIES_BASCULEGION_M,
    }
};

static const struct TrainerMon sParty_Katelyn2[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn3[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn4[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn5[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Nicolas1[] = {
    {
    .lvl = 71,
    .species = SPECIES_GOODRA,
    },
    {
    .lvl = 71,
    .species = SPECIES_GOODRA_HISUI,
    }
};

static const struct TrainerMon sParty_Nicolas2[] = {
    {
    .lvl = 71,
    .species = SPECIES_GOODRA,
    },
    {
    .lvl = 71,
    .species = SPECIES_GOODRA_HISUI,
    }
};

static const struct TrainerMon sParty_Nicolas3[] = {
    {
    .lvl = 71,
    .species = SPECIES_GOODRA,
    },
    {
    .lvl = 71,
    .species = SPECIES_GOODRA_HISUI,
    }
};

static const struct TrainerMon sParty_Nicolas4[] = {
    {
    .lvl = 71,
    .species = SPECIES_GOODRA,
    },
    {
    .lvl = 71,
    .species = SPECIES_GOODRA_HISUI,
    }
};

static const struct TrainerMon sParty_Nicolas5[] = {
    {
    .lvl = 71,
    .species = SPECIES_GOODRA,
    },
    {
    .lvl = 71,
    .species = SPECIES_GOODRA_HISUI,
    }
};

static const struct TrainerMon sParty_Aaron[] = {
    {
    .lvl = 72,
    .species = SPECIES_KOMMO_O,
    }
};

static const struct TrainerMon sParty_Perry[] = {
    {
    .lvl = 56,
    .species = SPECIES_SQUAWKABILLY,
    }
};

static const struct TrainerMon sParty_Hugh[] = {
    {
    .lvl = 59,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Phil[] = {
    {
    .lvl = 60,
    .species = SPECIES_KOMALA,
    }
};

static const struct TrainerMon sParty_Jared[] = {
    {
    .lvl = 60,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 60,
    .species = SPECIES_TOUCANNON,
    }
};

static const struct TrainerMon sParty_Humberto[] = {
    {
    .lvl = 62,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Presley[] = {
    {
    .lvl = 59,
    .species = SPECIES_UNFEZANT,
    },
    {
    .lvl = 59,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Edwardo[] = {
    {
    .lvl = 60,
    .species = SPECIES_DODRIO,
    },
    {
    .lvl = 60,
    .species = SPECIES_CORVIKNIGHT,
    }
};

static const struct TrainerMon sParty_Colin[] = {
    {
    .lvl = 62,
    .species = SPECIES_XATU,
    },
    {
    .lvl = 62,
    .species = SPECIES_HONCHKROW,
    }
};

static const struct TrainerMon sParty_Robert1[] = {
    {
    .lvl = 63,
    .species = SPECIES_CRAMORANT,
    }
};

static const struct TrainerMon sParty_Benny[] = {
    {
    .lvl = 36,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 36,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Chester[] = {
    {
    .lvl = 55,
    .species = SPECIES_FLAMIGO,
    },
    {
    .lvl = 55,
    .species = SPECIES_UNFEZANT,
    }
};

static const struct TrainerMon sParty_Robert2[] = {
    {
    .lvl = 63,
    .species = SPECIES_CRAMORANT,
    }
};

static const struct TrainerMon sParty_Robert3[] = {
    {
    .lvl = 63,
    .species = SPECIES_CRAMORANT,
    }
};

static const struct TrainerMon sParty_Robert4[] = {
    {
    .lvl = 63,
    .species = SPECIES_CRAMORANT,
    }
};

static const struct TrainerMon sParty_Robert5[] = {
    {
    .lvl = 63,
    .species = SPECIES_CRAMORANT,
    }
};

static const struct TrainerMon sParty_Alex[] = {
    {
    .lvl = 74,
    .species = SPECIES_BOMBIRDIER,
    }
};

static const struct TrainerMon sParty_Beck[] = {
    {
    .lvl = 71,
    .species = SPECIES_TROPIUS,
    },
    {
    .lvl = 71,
    .species = SPECIES_TOUCANNON,
    }
};

static const struct TrainerMon sParty_Yasu[] = {
    {
    .lvl = 60,
    .species = SPECIES_MR_RIME,
    }
};

static const struct TrainerMon sParty_Takashi[] = {
    {
    .lvl = 58,
    .species = SPECIES_OINKOLOGNE,
    },
    {
    .lvl = 58,
    .species = SPECIES_HYPNO,
    }
};

static const struct TrainerMon sParty_Dianne[] = {
    {
    .lvl = 75,
    .species = SPECIES_GENGAR,
    },
    {
    .lvl = 75,
    .species = SPECIES_COFAGRIGUS,
    }
};

static const struct TrainerMon sParty_Jani[] = {
    {
    .lvl = 56,
    .species = SPECIES_EXEGGUTOR,
    },
    {
    .lvl = 56,
    .species = SPECIES_EXEGGUTOR_ALOLA,
    }
};

static const struct TrainerMon sParty_Lao1[] = {
    {
    .lvl = 36,
    .species = SPECIES_MIENSHAO,
    },
    {
    .lvl = 35,
    .species = SPECIES_THWACKEY,
    },
    {
    .lvl = 36,
    .species = SPECIES_SPIDOPS,
    }
};

static const struct TrainerMon sParty_Lung[] = {
    {
    .lvl = 35,
    .species = SPECIES_FROGADIER,
    },
    {
    .lvl = 34,
    .species = SPECIES_MABOSSTIFF,
    },
    {
    .lvl = 34,
    .species = SPECIES_WEEZING,
    }
};

static const struct TrainerMon sParty_Lao2[] = {
    {
    .lvl = 36,
    .species = SPECIES_MIENSHAO,
    },
    {
    .lvl = 35,
    .species = SPECIES_THWACKEY,
    },
    {
    .lvl = 36,
    .species = SPECIES_SPIDOPS,
    }
};

static const struct TrainerMon sParty_Lao3[] = {
    {
    .lvl = 36,
    .species = SPECIES_MIENSHAO,
    },
    {
    .lvl = 35,
    .species = SPECIES_THWACKEY,
    },
    {
    .lvl = 36,
    .species = SPECIES_SPIDOPS,
    }
};

static const struct TrainerMon sParty_Lao4[] = {
    {
    .lvl = 36,
    .species = SPECIES_MIENSHAO,
    },
    {
    .lvl = 35,
    .species = SPECIES_THWACKEY,
    },
    {
    .lvl = 36,
    .species = SPECIES_SPIDOPS,
    }
};

static const struct TrainerMon sParty_Lao5[] = {
    {
    .lvl = 36,
    .species = SPECIES_MIENSHAO,
    },
    {
    .lvl = 35,
    .species = SPECIES_THWACKEY,
    },
    {
    .lvl = 36,
    .species = SPECIES_SPIDOPS,
    }
};

static const struct TrainerMon sParty_Jocelyn[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 17,
    .species = SPECIES_PIGNITE,
    }
};

static const struct TrainerMon sParty_Laura[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 18,
    .species = SPECIES_LOPUNNY,
    }
};

static const struct TrainerMon sParty_Cyndy1[] = {
    {
    .lvl = 39,
    .species = SPECIES_DUDUNSPARCE,
    },
    {
    .lvl = 39,
    .species = SPECIES_ALCREMIE,
    }
};

static const struct TrainerMon sParty_Cora[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Paula[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Cyndy2[] = {
    {
    .lvl = 39,
    .species = SPECIES_DUDUNSPARCE,
    },
    {
    .lvl = 39,
    .species = SPECIES_ALCREMIE,
    }
};

static const struct TrainerMon sParty_Cyndy3[] = {
    {
    .lvl = 39,
    .species = SPECIES_DUDUNSPARCE,
    },
    {
    .lvl = 39,
    .species = SPECIES_ALCREMIE,
    }
};

static const struct TrainerMon sParty_Cyndy4[] = {
    {
    .lvl = 39,
    .species = SPECIES_DUDUNSPARCE,
    },
    {
    .lvl = 39,
    .species = SPECIES_ALCREMIE,
    }
};

static const struct TrainerMon sParty_Cyndy5[] = {
    {
    .lvl = 39,
    .species = SPECIES_DUDUNSPARCE,
    },
    {
    .lvl = 39,
    .species = SPECIES_ALCREMIE,
    }
};

static const struct TrainerMon sParty_Madeline1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_SNEASLER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_DIRE_CLAW, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_HONCHKROW,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_SUPER_LUCK,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_DRILL_PECK, MOVE_NIGHT_SLASH, MOVE_SUCKER_PUNCH, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_PALOSSAND,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_WATER_COMPACTION,
    .heldItem = ITEM_YACHE_BERRY,
    .moves = {MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_SHORE_UP, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HERACROSS,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_HERACRONITE,
    .moves = {MOVE_ROCK_BLAST, MOVE_ARM_THRUST, MOVE_BULLET_SEED, MOVE_PIN_MISSILE}
    },
};

static const struct TrainerMon sParty_Clarissa[] = {
    {
    .lvl = 63,
    .species = SPECIES_VICTREEBEL,
    },
    {
    .lvl = 63,
    .species = SPECIES_JELLICENT,
    }
};

static const struct TrainerMon sParty_Angelica[] = {
    {
    .lvl = 64,
    .species = SPECIES_LUXRAY,
    }
};

static const struct TrainerMon sParty_Madeline2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_SNEASLER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_DIRE_CLAW, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_HONCHKROW,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_SUPER_LUCK,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_DRILL_PECK, MOVE_NIGHT_SLASH, MOVE_SUCKER_PUNCH, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_PALOSSAND,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_WATER_COMPACTION,
    .heldItem = ITEM_YACHE_BERRY,
    .moves = {MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_SHORE_UP, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HERACROSS,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_HERACRONITE,
    .moves = {MOVE_ROCK_BLAST, MOVE_ARM_THRUST, MOVE_BULLET_SEED, MOVE_PIN_MISSILE}
    },
};

static const struct TrainerMon sParty_Madeline3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_SNEASLER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_DIRE_CLAW, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_HONCHKROW,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_SUPER_LUCK,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_DRILL_PECK, MOVE_NIGHT_SLASH, MOVE_SUCKER_PUNCH, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_PALOSSAND,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_WATER_COMPACTION,
    .heldItem = ITEM_YACHE_BERRY,
    .moves = {MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_SHORE_UP, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HERACROSS,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_HERACRONITE,
    .moves = {MOVE_ROCK_BLAST, MOVE_ARM_THRUST, MOVE_BULLET_SEED, MOVE_PIN_MISSILE}
    },
};

static const struct TrainerMon sParty_Madeline4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_SNEASLER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_DIRE_CLAW, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_HONCHKROW,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_SUPER_LUCK,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_DRILL_PECK, MOVE_NIGHT_SLASH, MOVE_SUCKER_PUNCH, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_PALOSSAND,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_WATER_COMPACTION,
    .heldItem = ITEM_YACHE_BERRY,
    .moves = {MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_SHORE_UP, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HERACROSS,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_HERACRONITE,
    .moves = {MOVE_ROCK_BLAST, MOVE_ARM_THRUST, MOVE_BULLET_SEED, MOVE_PIN_MISSILE}
    },
};

static const struct TrainerMon sParty_Madeline5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_SNEASLER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_DIRE_CLAW, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_HONCHKROW,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_SUPER_LUCK,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_DRILL_PECK, MOVE_NIGHT_SLASH, MOVE_SUCKER_PUNCH, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_PALOSSAND,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_WATER_COMPACTION,
    .heldItem = ITEM_YACHE_BERRY,
    .moves = {MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_SHORE_UP, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HERACROSS,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_HERACRONITE,
    .moves = {MOVE_ROCK_BLAST, MOVE_ARM_THRUST, MOVE_BULLET_SEED, MOVE_PIN_MISSILE}
    },
};

static const struct TrainerMon sParty_Beverly[] = {
    {
    .lvl = 55,
    .species = SPECIES_SEAKING,
    },
    {
    .lvl = 55,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Imani[] = {
    {
    .lvl = 55,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Kyla[] = {
    {
    .lvl = 56,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Denise[] = {
    {
    .lvl = 55,
    .species = SPECIES_BUTTERFREE,
    },
    {
    .lvl = 55,
    .species = SPECIES_VIVILLON,
    }
};

static const struct TrainerMon sParty_Beth[] = {
    {
    .lvl = 56,
    .species = SPECIES_MUK,
    },
    {
    .lvl = 56,
    .species = SPECIES_MUK_ALOLA,
    }
};

static const struct TrainerMon sParty_Tara[] = {
    {
    .lvl = 57,
    .species = SPECIES_CHERRIM,
    },
    {
    .lvl = 57,
    .species = SPECIES_KINGLER,
    }
};

static const struct TrainerMon sParty_Missy[] = {
    {
    .lvl = 56,
    .species = SPECIES_WUGTRIO,
    },
    {
    .lvl = 56,
    .species = SPECIES_WUGTRIO,
    },
    {
    .lvl = 56,
    .species = SPECIES_WUGTRIO,
    }
};

static const struct TrainerMon sParty_Alice[] = {
    {
    .lvl = 54,
    .species = SPECIES_SEAKING,
    },
    {
    .lvl = 54,
    .species = SPECIES_QUAQUAVAL,
    },
    {
    .lvl = 54,
    .species = SPECIES_CROBAT,
    }
};

static const struct TrainerMon sParty_Jenny1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_JOLTEON,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_WEATHER_BALL, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_VICTREEBEL,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_POWER_WHIP, MOVE_POISON_JAB, MOVE_SLEEP_POWDER, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SCREAM_TAIL,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_WISH, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SKELEDIRGE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_UNAWARE,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_FLAME_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MAGMORTAR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MEGA_LAUNCHER,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_FLAMETHROWER, MOVE_HYDRO_STEAM, MOVE_AURA_SPHERE, MOVE_DARK_PULSE}
    }
};

static const struct TrainerMon sParty_Grace[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_PYROAR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ADAPTABILITY,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_SCORCHING_SANDS, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LEAFEON,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_STOMPING_TANTRUM, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_WHISCASH,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_WATER_BUBBLE,
    .heldItem = ITEM_RINDO_BERRY,
    .moves = {MOVE_WATERFALL, MOVE_BOUNCE, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CINDERACE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_LIBERO,
    .heldItem = ITEM_WIDE_LENS,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_PYRO_BALL, MOVE_SUCKER_PUNCH, MOVE_GUNK_SHOT}
    }
};

static const struct TrainerMon sParty_Tanya[] = {
    {
    .lvl = 60,
    .species = SPECIES_SWANNA,
    }
};

static const struct TrainerMon sParty_Sharon[] = {
    {
    .lvl = 60,
    .species = SPECIES_KINGDRA,
    }
};

static const struct TrainerMon sParty_Nikki[] = {
    {
    .lvl = 60,
    .species = SPECIES_STARMIE,
    },
    {
    .lvl = 60,
    .species = SPECIES_WALREIN,
    }
};

static const struct TrainerMon sParty_Brenda[] = {
    {
    .lvl = 63,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Katie[] = {
    {
    .lvl = 65,
    .species = SPECIES_SIMISAGE,
    },
    {
    .lvl = 65,
    .species = SPECIES_CLEFABLE,
    }
};

static const struct TrainerMon sParty_Susie[] = {
    {
    .lvl = 70,
    .species = SPECIES_ALCREMIE,
    },
    {
    .lvl = 70,
    .species = SPECIES_LUDICOLO,
    },
};

static const struct TrainerMon sParty_Kara[] = {
    {
    .lvl = 70,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 70,
    .species = SPECIES_PAWMOT,
    },
};

static const struct TrainerMon sParty_Dana[] = {
    {
    .lvl = 70,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 70,
    .species = SPECIES_PRIMARINA,
    },

};

static const struct TrainerMon sParty_Sienna[] = {
    {
    .lvl = 62,
    .species = SPECIES_MILOTIC,
    },
    {
    .lvl = 62,
    .species = SPECIES_PRIMARINA,
    }
};

static const struct TrainerMon sParty_Debra[] = {
    {
    .lvl = 70,
    .species = SPECIES_SEAKING,
    },
    {
    .lvl = 70,
    .species = SPECIES_SAMUROTT_HISUI,
    }
};

static const struct TrainerMon sParty_Linda[] = {
    {
    .lvl = 33,
    .species = SPECIES_HORSEA,
    },
    {
    .lvl = 33,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Kaylee[] = {
    {
    .lvl = 34,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Laurel[] = {
    {
    .lvl = 73,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 72,
    .species = SPECIES_MILOTIC,
    }
};

static const struct TrainerMon sParty_Carlee[] = {
    {
    .lvl = 65,
    .species = SPECIES_SAMUROTT,
    }
};

static const struct TrainerMon sParty_Jenny2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_JOLTEON,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_WEATHER_BALL, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_VICTREEBEL,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_POWER_WHIP, MOVE_POISON_JAB, MOVE_SLEEP_POWDER, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SCREAM_TAIL,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_WISH, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SKELEDIRGE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_UNAWARE,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_FLAME_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MAGMORTAR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MEGA_LAUNCHER,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_FLAMETHROWER, MOVE_HYDRO_STEAM, MOVE_AURA_SPHERE, MOVE_DARK_PULSE}
    }
};

static const struct TrainerMon sParty_Jenny3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_JOLTEON,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_WEATHER_BALL, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_VICTREEBEL,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_POWER_WHIP, MOVE_POISON_JAB, MOVE_SLEEP_POWDER, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SCREAM_TAIL,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_WISH, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SKELEDIRGE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_UNAWARE,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_FLAME_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MAGMORTAR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MEGA_LAUNCHER,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_FLAMETHROWER, MOVE_HYDRO_STEAM, MOVE_AURA_SPHERE, MOVE_DARK_PULSE}
    }
};

static const struct TrainerMon sParty_Jenny4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_JOLTEON,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_WEATHER_BALL, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_VICTREEBEL,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_POWER_WHIP, MOVE_POISON_JAB, MOVE_SLEEP_POWDER, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SCREAM_TAIL,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_WISH, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SKELEDIRGE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_UNAWARE,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_FLAME_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MAGMORTAR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MEGA_LAUNCHER,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_FLAMETHROWER, MOVE_HYDRO_STEAM, MOVE_AURA_SPHERE, MOVE_DARK_PULSE}
    }
};

static const struct TrainerMon sParty_Jenny5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_JOLTEON,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_WEATHER_BALL, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_VICTREEBEL,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_POWER_WHIP, MOVE_POISON_JAB, MOVE_SLEEP_POWDER, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SCREAM_TAIL,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_WISH, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SKELEDIRGE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_UNAWARE,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_FLAME_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MAGMORTAR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MEGA_LAUNCHER,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_FLAMETHROWER, MOVE_HYDRO_STEAM, MOVE_AURA_SPHERE, MOVE_DARK_PULSE}
    }
};

static const struct TrainerMon sParty_Heidi[] = {
    {
    .lvl = 55,
    .species = SPECIES_SHUCKLE,
    },
    {
    .lvl = 55,
    .species = SPECIES_SANDSHREW_ALOLA,
    }
};

static const struct TrainerMon sParty_Becky[] = {
    {
    .lvl = 55,
    .species = SPECIES_MAWILE,
    },
    {
    .lvl = 55,
    .species = SPECIES_WORMADAM_SANDY,
    }
};

static const struct TrainerMon sParty_Carol[] = {
    {
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 34,
    .species = SPECIES_KROKOROK,
    },
    {
    .lvl = 35,
    .species = SPECIES_VANILLISH,
    }
};

static const struct TrainerMon sParty_Nancy[] = {
    {
    .lvl = 36,
    .species = SPECIES_ARBOK,
    },
    {
    .lvl = 36,
    .species = SPECIES_SEVIPER,
    },
    {
    .lvl = 36,
    .species = SPECIES_SANDACONDA,
    },
};

static const struct TrainerMon sParty_Martha[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DURANT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_HUSTLE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_SUPERPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BASTIODON,
    .nature = NATURE_SASSY,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 6, 0, 0, 252, 0 ),
    .ability = ABILITY_DAUNTLESS_SHIELD,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_METAL_BURST, MOVE_BODY_PRESS, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_SKARMORY,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_ROOST, MOVE_TOXIC, MOVE_FLY, MOVE_IRON_HEAD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KINGLER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_HYPER_CUTTER,
    .heldItem = ITEM_KINGLERITE,
    .moves = {MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_ICE_HAMMER, MOVE_IRON_HEAD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_IRON_TREADS,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_IRON_HEAD, MOVE_WILD_CHARGE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF}
    }
};

static const struct TrainerMon sParty_Diana1[] = {
    {
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .lvl = 39,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Cedric[] = {
    {
    .lvl = 65,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

static const struct TrainerMon sParty_Irene[] = {
    {
    .lvl = 35,
    .species = SPECIES_WAILORD,
    },
    {
    .lvl = 35,
    .species = SPECIES_BOUFFALANT,
    }
};

static const struct TrainerMon sParty_Diana2[] = {
    {
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .lvl = 39,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Diana3[] = {
    {
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .lvl = 39,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Diana4[] = {
    {
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .lvl = 39,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Diana5[] = {
    {
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .lvl = 39,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_AmyAndLiv1[] = {
    {
    .lvl = 25,
    .species = SPECIES_NIDOKING,
    },
    {
    .lvl = 25,
    .species = SPECIES_NIDOQUEEN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv2[] = {
    {
    .lvl = 25,
    .species = SPECIES_NIDOKING,
    },
    {
    .lvl = 25,
    .species = SPECIES_NIDOQUEEN,
    }
};

static const struct TrainerMon sParty_GinaAndMia1[] = {
    {
    .lvl = 9,
    .species = SPECIES_EKANS,
    },
    {
    .lvl = 9,
    .species = SPECIES_GOSSIFLEUR,
    }
};

static const struct TrainerMon sParty_MiuAndYuki[] = {
    {
    .lvl = 56,
    .species = SPECIES_ESPEON,
    },
    {
    .lvl = 56,
    .species = SPECIES_UMBREON,
    }
};

static const struct TrainerMon sParty_AmyAndLiv3[] = {
    {
    .lvl = 25,
    .species = SPECIES_NIDOKING,
    },
    {
    .lvl = 25,
    .species = SPECIES_NIDOQUEEN,
    }
};

static const struct TrainerMon sParty_GinaAndMia2[] = {
    {
    .lvl = 9,
    .species = SPECIES_EKANS,
    },
    {
    .lvl = 9,
    .species = SPECIES_GOSSIFLEUR,
    }
};

static const struct TrainerMon sParty_AmyAndLiv4[] = {
    {
    .lvl = 25,
    .species = SPECIES_NIDOKING,
    },
    {
    .lvl = 25,
    .species = SPECIES_NIDOQUEEN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv5[] = {
    {
    .lvl = 25,
    .species = SPECIES_NIDOKING,
    },
    {
    .lvl = 25,
    .species = SPECIES_NIDOQUEEN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv6[] = {
    {
    .lvl = 25,
    .species = SPECIES_NIDOKING,
    },
    {
    .lvl = 25,
    .species = SPECIES_NIDOQUEEN,
    }
};

static const struct TrainerMon sParty_Huey[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 21,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 21,
    .species = SPECIES_WHISCASH,
    }
};

static const struct TrainerMon sParty_Edmond[] = {
    {
    .lvl = 22,
    .species = SPECIES_OCTILLERY,
    }
};

static const struct TrainerMon sParty_Ernest1[] = {
    {
    .lvl = 59,
    .species = SPECIES_CONKELDURR,
    },
    {
    .lvl = 59,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Dwayne[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_THIEVUL,
    .heldItem = ITEM_DARK_GEM,
    .nature = NATURE_TIMID,
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_DARK_PULSE, MOVE_SUCKER_PUNCH, MOVE_GRASS_KNOT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_CRAMORANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_TIMID,
    .ability = ABILITY_GULP_MISSILE,
    .moves = {MOVE_ROOST, MOVE_SURF, MOVE_ICY_WIND, MOVE_AIR_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_PINSIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_MOLD_BREAKER,
    .moves = {MOVE_X_SCISSOR, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE, MOVE_CUT}
    },
};

static const struct TrainerMon sParty_Phillip[] = {
    {
    .lvl = 44,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 44,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Leonard[] = {
    {
    .lvl = 43,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 43,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Duncan[] = {
    {
    .lvl = 56,
    .species = SPECIES_WALREIN,
    },
    {
    .lvl = 56,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Ernest2[] = {
    {
    .lvl = 59,
    .species = SPECIES_CONKELDURR,
    },
    {
    .lvl = 59,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Ernest3[] = {
    {
    .lvl = 59,
    .species = SPECIES_CONKELDURR,
    },
    {
    .lvl = 59,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Ernest4[] = {
    {
    .lvl = 59,
    .species = SPECIES_CONKELDURR,
    },
    {
    .lvl = 59,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Ernest5[] = {
    {
    .lvl = 59,
    .species = SPECIES_CONKELDURR,
    },
    {
    .lvl = 59,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Eli[] = {
    {
    .lvl = 41,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Annika[] = {
    {
    .lvl = 70,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 70,
    .species = SPECIES_WIGGLYTUFF,
    }
};

static const struct TrainerMon sParty_Jazmyn[] = {
    {
    .lvl = 57,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Jonas[] = {
    {
    .lvl = 55,
    .species = SPECIES_WEEZING,
    },
    {
    .lvl = 55,
    .species = SPECIES_WEEZING_GALAR,
    }
};

static const struct TrainerMon sParty_Kayley[] = {
    {
    .lvl = 56,
    .species = SPECIES_TAUROS,
    },
    {
    .lvl = 56,
    .species = SPECIES_TAUROS_PALDEA_COMBAT,
    }
};

static const struct TrainerMon sParty_Auron[] = {
    {
    .lvl = 59,
    .species = SPECIES_BOMBIRDIER,
    },
    {
    .lvl = 59,
    .species = SPECIES_KANGASKHAN,
    }
};

static const struct TrainerMon sParty_Kelvin[] = {
    {
    .lvl = 74,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Marley[] = {
    {
    .lvl = 72,
    .species = SPECIES_DRAGONITE,
    }
};

static const struct TrainerMon sParty_Reyna[] = {
    {
    .lvl = 72,
    .species = SPECIES_LUCARIO,
    },
    {
    .lvl = 72,
    .species = SPECIES_BEEDRILL,
    }
};

static const struct TrainerMon sParty_Hudson[] = {
    {
    .lvl = 72,
    .species = SPECIES_KINGDRA,
    },
    {
    .lvl = 72,
    .species = SPECIES_KINGLER,
    }
};

static const struct TrainerMon sParty_Conor[] = {
    {
    .lvl = 71,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 71,
    .species = SPECIES_STOUTLAND,
    }
};

static const struct TrainerMon sParty_Edwin1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_COBA_BERRY,
    .nature = NATURE_TIMID,
    .ability = ABILITY_OWN_TEMPO,
    .moves = {MOVE_MEGA_DRAIN, MOVE_BUBBLE_BEAM, MOVE_AURORA_BEAM, MOVE_FAKE_OUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_STOUTLAND,
    .heldItem = ITEM_SILK_SCARF,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_RETALIATE, MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_PSYCHIC_FANGS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CLODSIRE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_POISON_JAB, MOVE_BULLDOZE, MOVE_ROCK_TOMB, MOVE_RECOVER}
    },
};

static const struct TrainerMon sParty_Hector[] = {
    {
    .lvl = 40,
    .species = SPECIES_ZANGOOSE,
    },
    {
    .lvl = 40,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sParty_TabithaMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 38,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 40,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_Edwin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_COBA_BERRY,
    .nature = NATURE_TIMID,
    //custom timid
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 180, 0, 180 ),
    .ability = ABILITY_OWN_TEMPO,
    .moves = {MOVE_MEGA_DRAIN, MOVE_BUBBLE_BEAM, MOVE_AURORA_BEAM, MOVE_FAKE_OUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_STOUTLAND,
    .heldItem = ITEM_SILK_SCARF,
    .nature = NATURE_JOLLY,
    //custom jolly
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 180, 0, 0, 0, 180 ),
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_RETALIATE, MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_PSYCHIC_FANGS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CLODSIRE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .nature = NATURE_IMPISH,
    //custom impish
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 180, 0, 180, 0, 0, 0 ),
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_POISON_JAB, MOVE_BULLDOZE, MOVE_ROCK_TOMB, MOVE_RECOVER}
    },
};

static const struct TrainerMon sParty_Edwin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_COBA_BERRY,
    .nature = NATURE_TIMID,
    //custom timid
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 180, 0, 180 ),
    .ability = ABILITY_OWN_TEMPO,
    .moves = {MOVE_MEGA_DRAIN, MOVE_BUBBLE_BEAM, MOVE_AURORA_BEAM, MOVE_FAKE_OUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_STOUTLAND,
    .heldItem = ITEM_SILK_SCARF,
    .nature = NATURE_JOLLY,
    //custom jolly
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 180, 0, 0, 0, 180 ),
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_RETALIATE, MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_PSYCHIC_FANGS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CLODSIRE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .nature = NATURE_IMPISH,
    //custom impish
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 180, 0, 180, 0, 0, 0 ),
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_POISON_JAB, MOVE_BULLDOZE, MOVE_ROCK_TOMB, MOVE_RECOVER}
    },
};

static const struct TrainerMon sParty_Edwin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_COBA_BERRY,
    .nature = NATURE_TIMID,
    //custom timid
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 180, 0, 180 ),
    .ability = ABILITY_OWN_TEMPO,
    .moves = {MOVE_MEGA_DRAIN, MOVE_BUBBLE_BEAM, MOVE_AURORA_BEAM, MOVE_FAKE_OUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_STOUTLAND,
    .heldItem = ITEM_SILK_SCARF,
    .nature = NATURE_JOLLY,
    //custom jolly
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 180, 0, 0, 0, 180 ),
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_RETALIATE, MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_PSYCHIC_FANGS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CLODSIRE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .nature = NATURE_IMPISH,
    //custom impish
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 180, 0, 180, 0, 0, 0 ),
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_POISON_JAB, MOVE_BULLDOZE, MOVE_ROCK_TOMB, MOVE_RECOVER}
    },
};

static const struct TrainerMon sParty_Edwin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_COBA_BERRY,
    .nature = NATURE_TIMID,
    //custom timid
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 180, 0, 180 ),
    .ability = ABILITY_OWN_TEMPO,
    .moves = {MOVE_MEGA_DRAIN, MOVE_BUBBLE_BEAM, MOVE_AURORA_BEAM, MOVE_FAKE_OUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_STOUTLAND,
    .heldItem = ITEM_SILK_SCARF,
    .nature = NATURE_JOLLY,
    //custom jolly
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 180, 0, 0, 0, 180 ),
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_RETALIATE, MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_PSYCHIC_FANGS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CLODSIRE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .nature = NATURE_IMPISH,
    //custom impish
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 180, 0, 180, 0, 0, 0 ),
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_POISON_JAB, MOVE_BULLDOZE, MOVE_ROCK_TOMB, MOVE_RECOVER}
    },
};

static const struct TrainerMon sParty_WallyVR1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_SNEASLER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_DIRE_CLAW, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_SHAYMIN_SKY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SERENE_GRACE,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_AIR_SLASH, MOVE_SEED_FLARE, MOVE_EARTH_POWER, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_CELESTEELA,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_POWER_HERB,
    .moves = {MOVE_AIR_SLASH, MOVE_FLASH_CANNON, MOVE_METEOR_BEAM, MOVE_FLAMETHROWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_DARMANITAN,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SHEER_FORCE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_RAGING_BOLT,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_DRAGON_PULSE, MOVE_THUNDERCLAP, MOVE_THUNDERBOLT, MOVE_HYPER_VOICE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_GARDEVOIR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TRACE,
    .heldItem = ITEM_GARDEVOIRITE,
    .moves = {MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_CALM_MIND}
    },
};

static const struct TrainerMon sParty_MayAndBrendanRoute103Mudkip[] = {
    {
    .lvl = 5,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_MayAndBrendanRoute110Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_DRAGONAIR,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_SHED_SKIN,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_DRAGON_TAIL, MOVE_DRAGON_RAGE, MOVE_BODY_SLAM, MOVE_THUNDER_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GOREBYSS,
    .nature = NATURE_MODEST,
    .ability = ABILITY_DAZZLING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AURORA_BEAM, MOVE_WATER_PULSE, MOVE_DRAINING_KISS, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GROVYLE,
    .nature = NATURE_JOLLY,
    //custom jolly
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 0, 0, 80 ),
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_LEAF_BLADE, MOVE_ROCK_SLIDE, MOVE_POWER_UP_PUNCH, MOVE_LOW_SWEEP}
    }
};

static const struct TrainerMon sParty_MayAndBrendanRoute119Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_LEECH_LIFE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_DRAGONITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_MULTISCALE,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_GOREBYSS,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_DAZZLING,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_MOONBLAST, MOVE_SHELL_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_URSHIFU_SINGLE_STRIKE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_ARMAROUGE,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_MEGA_LAUNCHER,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_ARMOR_CANNON, MOVE_AURA_SPHERE, MOVE_PSYCHIC, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_SCEPTILE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_SCEPTILITE,
    .moves = {MOVE_DUAL_CHOP, MOVE_BULLET_SEED, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_MayAndBrendanRoute103Treecko[] = {
    {
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_MayAndBrendanRoute110Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_METANG,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_TOUGH_CLAWS,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_METAL_CLAW, MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_BULLDOZE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_WHIMSICOTT,
    .nature = NATURE_TIMID,
    .ability = ABILITY_PRANKSTER,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_LEECH_SEED, MOVE_DAZZLING_GLEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_COMBUSKEN,
    .nature = NATURE_MODEST,
    //custom modest
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 0, 0, 80 ),
    .ability = ABILITY_BLAZE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FLAME_BURST, MOVE_SCORCHING_SANDS, MOVE_QUICK_ATTACK, MOVE_COUNTER}
    }
};

static const struct TrainerMon sParty_MayAndBrendanRoute119Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_LEECH_LIFE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_METAGROSS,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_TOUGH_CLAWS,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_METEOR_MASH, MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_WHIMSICOTT,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PRANKSTER,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_LEECH_SEED, MOVE_MOONBLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_URSHIFU_SINGLE_STRIKE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_BASCULEGION_F,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_ADAPTABILITY,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_BLAZIKEN,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_STRIKER,
    .heldItem = ITEM_BLAZIKENITE,
    .moves = {MOVE_BLAZE_KICK, MOVE_THUNDEROUS_KICK, MOVE_THUNDER_PUNCH, MOVE_BULK_UP}
    }
};

static const struct TrainerMon sParty_MayAndBrendanRoute103Torchic[] = {
    {
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_MayAndBrendanRoute110Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SLIGGOO_HISUI,
    .nature = NATURE_CALM,
    .ability = ABILITY_SAP_SIPPER,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_DRAGON_BREATH, MOVE_FLASH_CANNON, MOVE_WATER_PULSE, MOVE_LIFE_DEW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_RAPIDASH_GALAR,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_IMMUNITY,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAME_WHEEL, MOVE_WILL_O_WISP, MOVE_COVET, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_FOCUS_SASH,
    .nature = NATURE_BRAVE,
    //custom brave
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 80, 0, 0, 0, 0 ),
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_BULLDOZE, MOVE_ROCK_SLIDE, MOVE_LIQUIDATION, MOVE_FLIP_TURN}
    }
};

static const struct TrainerMon sParty_MayAndBrendanRoute119Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_LEECH_LIFE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_GOODRA_HISUI,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_SAP_SIPPER,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_WISH, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_RAPIDASH_GALAR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_FIRE_LASH, MOVE_WILL_O_WISP, MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_URSHIFU_SINGLE_STRIKE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_ELECTRODE_HISUI,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_RECKLESS,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_CHLOROBLAST, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_SWAMPERTITE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_POWER_UP_PUNCH, MOVE_AVALANCHE}
    }
};

static const struct TrainerMon sParty_Ezekiel1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_LOUDRED,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_PUNK_ROCK,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_HYPER_VOICE, MOVE_SHOCK_WAVE, MOVE_WATER_PULSE, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_PIGNITE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_BRICK_BREAK, MOVE_FIRE_PUNCH, MOVE_SUCKER_PUNCH, MOVE_FLAME_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_ORBEETLE,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_SWARM,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYSHOCK, MOVE_CONFUSE_RAY, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_FLAMIGO,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SCRAPPY,
    .heldItem = ITEM_FIGHTING_GEM,
    .moves = {MOVE_JUMP_KICK, MOVE_ACROBATICS, MOVE_ROOST, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SPIRITOMB,
    .nature = NATURE_RELAXED,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 0, 252, 6, 0, 0 ),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DARK_PULSE, MOVE_HEX, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP}
    },
};

static const struct TrainerMon sParty_Davis[] = {
    {
    .lvl = 57,
    .species = SPECIES_PINSIR,
    }
};

static const struct TrainerMon sParty_Mitchell[] = {
    {
    .lvl = 75,
    .species = SPECIES_LOKIX,
    },
    {
    .lvl = 75,
    .species = SPECIES_DRUDDIGON,
    }
};

static const struct TrainerMon sParty_Ezekiel2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_LOUDRED,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_PUNK_ROCK,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_HYPER_VOICE, MOVE_SHOCK_WAVE, MOVE_WATER_PULSE, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_PIGNITE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_BRICK_BREAK, MOVE_FIRE_PUNCH, MOVE_SUCKER_PUNCH, MOVE_FLAME_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_ORBEETLE,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_SWARM,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYSHOCK, MOVE_CONFUSE_RAY, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_FLAMIGO,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SCRAPPY,
    .heldItem = ITEM_FIGHTING_GEM,
    .moves = {MOVE_JUMP_KICK, MOVE_ACROBATICS, MOVE_ROOST, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SPIRITOMB,
    .nature = NATURE_RELAXED,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 0, 252, 6, 0, 0 ),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DARK_PULSE, MOVE_HEX, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP}
    },
};

static const struct TrainerMon sParty_Ezekiel3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_LOUDRED,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_PUNK_ROCK,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_HYPER_VOICE, MOVE_SHOCK_WAVE, MOVE_WATER_PULSE, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_PIGNITE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_BRICK_BREAK, MOVE_FIRE_PUNCH, MOVE_SUCKER_PUNCH, MOVE_FLAME_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_ORBEETLE,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_SWARM,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYSHOCK, MOVE_CONFUSE_RAY, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_FLAMIGO,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SCRAPPY,
    .heldItem = ITEM_FIGHTING_GEM,
    .moves = {MOVE_JUMP_KICK, MOVE_ACROBATICS, MOVE_ROOST, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SPIRITOMB,
    .nature = NATURE_RELAXED,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 0, 252, 6, 0, 0 ),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DARK_PULSE, MOVE_HEX, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP}
    },
};

static const struct TrainerMon sParty_Ezekiel4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_LOUDRED,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_PUNK_ROCK,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_HYPER_VOICE, MOVE_SHOCK_WAVE, MOVE_WATER_PULSE, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_PIGNITE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_BRICK_BREAK, MOVE_FIRE_PUNCH, MOVE_SUCKER_PUNCH, MOVE_FLAME_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_ORBEETLE,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_SWARM,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYSHOCK, MOVE_CONFUSE_RAY, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_FLAMIGO,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SCRAPPY,
    .heldItem = ITEM_FIGHTING_GEM,
    .moves = {MOVE_JUMP_KICK, MOVE_ACROBATICS, MOVE_ROOST, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SPIRITOMB,
    .nature = NATURE_RELAXED,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 0, 252, 6, 0, 0 ),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DARK_PULSE, MOVE_HEX, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP}
    },
};

static const struct TrainerMon sParty_Ezekiel5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_LOUDRED,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_PUNK_ROCK,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_HYPER_VOICE, MOVE_SHOCK_WAVE, MOVE_WATER_PULSE, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_PIGNITE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_BRICK_BREAK, MOVE_FIRE_PUNCH, MOVE_SUCKER_PUNCH, MOVE_FLAME_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_ORBEETLE,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_SWARM,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYSHOCK, MOVE_CONFUSE_RAY, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_FLAMIGO,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SCRAPPY,
    .heldItem = ITEM_FIGHTING_GEM,
    .moves = {MOVE_JUMP_KICK, MOVE_ACROBATICS, MOVE_ROOST, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SPIRITOMB,
    .nature = NATURE_RELAXED,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 0, 252, 6, 0, 0 ),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DARK_PULSE, MOVE_HEX, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP}
    },
};

static const struct TrainerMon sParty_Lydia1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_GLIMMET,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_TOXIC_DEBRIS,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_ANCIENT_POWER, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_BAYLEEF,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_MEGA_DRAIN, MOVE_SYNTHESIS, MOVE_POISON_POWDER, MOVE_FLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SEVIPER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_MERCILESS,
    .heldItem = ITEM_POISON_BARB,
    .moves = {MOVE_POISON_JAB, MOVE_NIGHT_SLASH, MOVE_BULLDOZE, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_MILTANK,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_THUNDER_PUNCH, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SNEASEL_HISUI,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_CROSS_POISON, MOVE_ICE_PUNCH, MOVE_ROCK_SMASH}
    },
};

static const struct TrainerMon sParty_Halle[] = {
    {
    .lvl = 75,
    .species = SPECIES_SNORLAX,
    },
    {
    .lvl = 75,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Garrison[] = {
    {
    .lvl = 56,
    .species = SPECIES_SANDSLASH,
    },
    {
    .lvl = 56,
    .species = SPECIES_SANDSLASH_ALOLA,
    }
};

static const struct TrainerMon sParty_Lydia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_GLIMMET,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_TOXIC_DEBRIS,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_ANCIENT_POWER, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_BAYLEEF,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_MEGA_DRAIN, MOVE_SYNTHESIS, MOVE_POISON_POWDER, MOVE_FLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SEVIPER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_MERCILESS,
    .heldItem = ITEM_POISON_BARB,
    .moves = {MOVE_POISON_JAB, MOVE_NIGHT_SLASH, MOVE_BULLDOZE, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_MILTANK,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_THUNDER_PUNCH, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SNEASEL_HISUI,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_CROSS_POISON, MOVE_ICE_PUNCH, MOVE_ROCK_SMASH}
    },
};

static const struct TrainerMon sParty_Lydia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_GLIMMET,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_TOXIC_DEBRIS,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_ANCIENT_POWER, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_BAYLEEF,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_MEGA_DRAIN, MOVE_SYNTHESIS, MOVE_POISON_POWDER, MOVE_FLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SEVIPER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_MERCILESS,
    .heldItem = ITEM_POISON_BARB,
    .moves = {MOVE_POISON_JAB, MOVE_NIGHT_SLASH, MOVE_BULLDOZE, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_MILTANK,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_THUNDER_PUNCH, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SNEASEL_HISUI,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_CROSS_POISON, MOVE_ICE_PUNCH, MOVE_ROCK_SMASH}
    },
};

static const struct TrainerMon sParty_Lydia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_GLIMMET,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_TOXIC_DEBRIS,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_ANCIENT_POWER, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_BAYLEEF,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_MEGA_DRAIN, MOVE_SYNTHESIS, MOVE_POISON_POWDER, MOVE_FLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SEVIPER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_MERCILESS,
    .heldItem = ITEM_POISON_BARB,
    .moves = {MOVE_POISON_JAB, MOVE_NIGHT_SLASH, MOVE_BULLDOZE, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_MILTANK,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_THUNDER_PUNCH, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SNEASEL_HISUI,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_CROSS_POISON, MOVE_ICE_PUNCH, MOVE_ROCK_SMASH}
    },
};

static const struct TrainerMon sParty_Lydia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_GLIMMET,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_TOXIC_DEBRIS,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_ANCIENT_POWER, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_BAYLEEF,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_MEGA_DRAIN, MOVE_SYNTHESIS, MOVE_POISON_POWDER, MOVE_FLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SEVIPER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_MERCILESS,
    .heldItem = ITEM_POISON_BARB,
    .moves = {MOVE_POISON_JAB, MOVE_NIGHT_SLASH, MOVE_BULLDOZE, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_MILTANK,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_THUNDER_PUNCH, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SNEASEL_HISUI,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_CROSS_POISON, MOVE_ICE_PUNCH, MOVE_ROCK_SMASH}
    },
};

static const struct TrainerMon sParty_Jackson1[] = {
    {
    .lvl = 60,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Lorenzo[] = {
    {
    .lvl = 62,
    .species = SPECIES_BRELOOM,
    },
    {
    .lvl = 62,
    .species = SPECIES_VENUSAUR,
    },
    {
    .lvl = 62,
    .species = SPECIES_LILLIGANT,
    }
};

static const struct TrainerMon sParty_Sebastian[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 39,
    .species = SPECIES_CACTURNE,
    }
};

static const struct TrainerMon sParty_Jackson2[] = {
    {
    .lvl = 60,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson3[] = {
    {
    .lvl = 60,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson4[] = {
    {
    .lvl = 60,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson5[] = {
    {
    .lvl = 60,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Catherine1[] = {
    {
    .lvl = 58,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .lvl = 58,
    .species = SPECIES_VILEPLUME,
    }
};

static const struct TrainerMon sParty_Jenna[] = {
    {
    .lvl = 62,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 62,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 62,
    .species = SPECIES_LURANTIS,
    }
};

static const struct TrainerMon sParty_Sophia[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 38,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 38,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine2[] = {
    {
    .lvl = 58,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .lvl = 58,
    .species = SPECIES_VILEPLUME,
    }
};

static const struct TrainerMon sParty_Catherine3[] = {
    {
    .lvl = 58,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .lvl = 58,
    .species = SPECIES_VILEPLUME,
    }
};

static const struct TrainerMon sParty_Catherine4[] = {
    {
    .lvl = 58,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .lvl = 58,
    .species = SPECIES_VILEPLUME,
    }
};

static const struct TrainerMon sParty_Catherine5[] = {
    {
    .lvl = 58,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .lvl = 58,
    .species = SPECIES_VILEPLUME,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    {
    .lvl = 70,
    .species = SPECIES_HITMONTOP,
    },
    {
    .lvl = 70,
    .species = SPECIES_OBSTAGOON,
    }
};

static const struct TrainerMon sParty_GruntUnused[] = {
    {
    .lvl = 31,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre4[] = {
    {
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 30,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntJaggedPass[] = {
    {
    .lvl = 40,
    .species = SPECIES_MAGMAR,
    },
    {
    .lvl = 40,
    .species = SPECIES_MIGHTYENA,
    },
};

static const struct TrainerMon sParty_Marc[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ANORITH,
    .lvl = 10,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCHEN,
    .lvl = 11,
    }
};

static const struct TrainerMon sParty_Brenden[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 17,
    .species = SPECIES_POLIWHIRL,
    }
};

static const struct TrainerMon sParty_Lilith[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 17,
    .species = SPECIES_HITMONTOP,
    }
};

static const struct TrainerMon sParty_Cristian[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 18,
    .species = SPECIES_SAWK,
    }
};

static const struct TrainerMon sParty_Sylvia[] = {
    {
    .lvl = 66,
    .species = SPECIES_GOTHITELLE,
    }
};

static const struct TrainerMon sParty_Leonardo[] = {
    {
    .lvl = 60,
    .species = SPECIES_LAPRAS,
    }
};

static const struct TrainerMon sParty_Athena[] = {
    {
    .lvl = 62,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 62,
    .species = SPECIES_OBSTAGOON,
    }
};

static const struct TrainerMon sParty_Harrison[] = {
    {
    .lvl = 65,
    .species = SPECIES_SAMUROTT_HISUI,
    }
};

static const struct TrainerMon sParty_GruntMtChimney2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_CRADILY,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_STORM_DRAIN,
    .moves = {MOVE_POWER_GEM, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_BOMBIRDIER,
    .heldItem = ITEM_EXPERT_BELT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_ROCKY_PAYLOAD,
    .moves = {MOVE_KNOCK_OFF, MOVE_DUAL_WINGBEAT, MOVE_SUCKER_PUNCH, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_IRON_THORNS,
    .heldItem = ITEM_AIR_BALLOON,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_ROCK_SLIDE, MOVE_SUPERCELL_SLAM, MOVE_ICE_PUNCH, MOVE_ACCELEROCK}
    }
};

static const struct TrainerMon sParty_Clarence[] = {
    {
    .lvl = 66,
    .species = SPECIES_FERALIGATR,
    },
    {
    .lvl = 66,
    .species = SPECIES_DONDOZO,
    },
};

static const struct TrainerMon sParty_Terry[] = {
    {
    .lvl = 37,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nate[] = {
    {
    .lvl = 66,
    .species = SPECIES_GRUMPIG,
    }
};

static const struct TrainerMon sParty_Kathleen[] = {
    {
    .lvl = 66,
    .species = SPECIES_VENOMOTH,
    }
};

static const struct TrainerMon sParty_Clifford[] = {
    {
    .lvl = 66,
    .species = SPECIES_MEOWSTIC_F,
    }
};

static const struct TrainerMon sParty_Nicholas[] = {
    {
    .lvl = 66,
    .species = SPECIES_REUNICLUS,
    }
};

static const struct TrainerMon sParty_WallaceSolo[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_SPOUT, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_AMNESIA, MOVE_HYPER_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RECOVER, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Macey[] = {
    {
    .lvl = 66,
    .species = SPECIES_MEOWSTIC_M,
    }
};

static const struct TrainerMon sParty_Paxton[] = {
    {
    .lvl = 70,
    .species = SPECIES_STARAPTOR,
    },
    {
    .lvl = 70,
    .species = SPECIES_SUNFLORA,
    }
};

static const struct TrainerMon sParty_Isabella[] = {
    {
    .lvl = 66,
    .species = SPECIES_BELLOSSOM,
    }
};

static const struct TrainerMon sParty_TabithaMtChimney[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_EMBOAR,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_BULL_RUSH,
    .moves = {MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_JUMP_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_ARCANINE_HISUI,
    .heldItem = ITEM_EXPERT_BELT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_ROCK_HEAD,
    .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_ACCELEROCK, MOVE_WILD_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_CONKELDURR,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_LOW_SWEEP, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, MOVE_BULK_UP}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
    .lvl = 43,
    .species = SPECIES_SALAZZLE,
    .heldItem = ITEM_AIR_BALLOON,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CORROSION,
    .moves = {MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_HOUNDOOMINITE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_FLASH_FIRE,
    .moves = {MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_SCORCHING_SANDS}
    },
};

static const struct TrainerMon sParty_Jonathan[] = {
    {
    .lvl = 70,
    .species = SPECIES_AGGRON,
    },
    {
    .lvl = 70,
    .species = SPECIES_WYRDEER,
    }
};

static const struct TrainerMon sParty_MayAndBrendanRustboroMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GOLBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_WING_ATTACK, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HATTREM,
    .nature = NATURE_MODEST,
    .ability = ABILITY_MAGIC_BOUNCE,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DRAINING_KISS, MOVE_PSYBEAM, MOVE_THUNDER_WAVE, MOVE_LIFE_DEW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_ROCK_SMASH, MOVE_AERIAL_ACE, MOVE_HEADBUTT, MOVE_ROCK_TOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GROVYLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_OVERGROW,
    .moves = {MOVE_BULLET_SEED, MOVE_ROCK_TOMB, MOVE_FURY_CUTTER, MOVE_ASSURANCE}
    }
};

static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_INCINEROAR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FAKE_OUT, MOVE_DARKEST_LARIAT, MOVE_FLARE_BLITZ, MOVE_BULLDOZE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_WHITE_HERB,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_POISON_JAB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_ENERGY_BALL, MOVE_SUCKER_PUNCH, MOVE_DARK_PULSE, MOVE_SCORCHING_SANDS}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
    .lvl = 80,
    .species = SPECIES_CHI_YU,
    .heldItem = ITEM_CHOICE_SPECS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_BEADS_OF_RUIN,
    .moves = {MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_CAMERUPTITE,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_HEAT_WAVE, MOVE_ANCIENT_POWER, MOVE_EARTH_POWER, MOVE_ERUPTION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_GROUDON,
    .heldItem = ITEM_RED_ORB,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_DROUGHT,
    .ball = ITEM_MASTER_BALL,
    .moves = {MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_BODY_PRESS, MOVE_ROCK_SLIDE}
    },
};

static const struct TrainerMon sParty_MaxieMtChimney[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_GIGALITH,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .heldItem = ITEM_CUSTAP_BERRY,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_BODY_PRESS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_MILD,
    .ev = TRAINER_PARTY_EVS_MILD(),
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_ENERGY_BALL, MOVE_SUCKER_PUNCH, MOVE_DARK_PULSE, MOVE_SCORCHING_SANDS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_COALOSSAL,
    .heldItem = ITEM_AIR_BALLOON,
    .nature = NATURE_RELAXED,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 0, 252, 0, 6, 0 ),
    .ability = ABILITY_STEAM_ENGINE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ROCK_SLIDE, MOVE_WILL_O_WISP, MOVE_SCALD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_WHITE_HERB,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_POISON_JAB}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
    .lvl = 44,
    .species = SPECIES_CHI_YU,
    .heldItem = ITEM_CHOICE_SPECS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_BEADS_OF_RUIN,
    .moves = {MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_CAMERUPTITE,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_FLAMETHROWER, MOVE_ANCIENT_POWER, MOVE_EARTH_POWER, MOVE_SLACK_OFF}
    },
};

static const struct TrainerMon sParty_Tiana[] = {
    {
    .lvl = 5,
    .species = SPECIES_JIGGLYPUFF,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley1[] = {
    {
    .lvl = 8,
    .species = SPECIES_LOTAD,
    .moves = {MOVE_ABSORB, MOVE_BUBBLE, MOVE_NONE, MOVE_NONE} 
    },
    {
    .lvl = 8,
    .species = SPECIES_PANSAGE,
    },
    {
    .lvl = 8,
    .species = SPECIES_ROOKIDEE,
    .moves = {MOVE_WING_ATTACK, MOVE_TACKLE, MOVE_NONE, MOVE_NONE} 
    }
};

static const struct TrainerMon sParty_Janice[] = {
    {
    .lvl = 17,
    .species = SPECIES_DEDENNE,
    }
};

static const struct TrainerMon sParty_Vivi[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_PELIPPER,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_DRIZZLE,
    .heldItem = ITEM_SHARP_BEAK,
    .moves = {MOVE_HURRICANE, MOVE_SCALD, MOVE_ROOST, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SCIZOR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TECHNICIAN,
    .heldItem = ITEM_SCIZORITE,
    .moves = {MOVE_BULLET_PUNCH, MOVE_SWORDS_DANCE, MOVE_POUNCE, MOVE_DUAL_WINGBEAT}
    },
};

static const struct TrainerMon sParty_Haley2[] = {
    {
    .lvl = 8,
    .species = SPECIES_LOTAD,
    .moves = {MOVE_ABSORB, MOVE_BUBBLE, MOVE_NONE, MOVE_NONE} 
    },
    {
    .lvl = 8,
    .species = SPECIES_PANSAGE,
    },
    {
    .lvl = 8,
    .species = SPECIES_ROOKIDEE,
    .moves = {MOVE_WING_ATTACK, MOVE_TACKLE, MOVE_NONE, MOVE_NONE} 
    }
};

static const struct TrainerMon sParty_Haley3[] = {
    {
    .lvl = 8,
    .species = SPECIES_LOTAD,
    .moves = {MOVE_ABSORB, MOVE_BUBBLE, MOVE_NONE, MOVE_NONE} 
    },
    {
    .lvl = 8,
    .species = SPECIES_PANSAGE,
    },
    {
    .lvl = 8,
    .species = SPECIES_ROOKIDEE,
    .moves = {MOVE_WING_ATTACK, MOVE_TACKLE, MOVE_NONE, MOVE_NONE} 
    }
};

static const struct TrainerMon sParty_Haley4[] = {
    {
    .lvl = 8,
    .species = SPECIES_LOTAD,
    .moves = {MOVE_ABSORB, MOVE_BUBBLE, MOVE_NONE, MOVE_NONE} 
    },
    {
    .lvl = 8,
    .species = SPECIES_PANSAGE,
    },
    {
    .lvl = 8,
    .species = SPECIES_ROOKIDEE,
    .moves = {MOVE_WING_ATTACK, MOVE_TACKLE, MOVE_NONE, MOVE_NONE} 
    }
};

static const struct TrainerMon sParty_Haley5[] = {
    {
    .lvl = 8,
    .species = SPECIES_LOTAD,
    .moves = {MOVE_ABSORB, MOVE_BUBBLE, MOVE_NONE, MOVE_NONE} 
    },
    {
    .lvl = 8,
    .species = SPECIES_PANSAGE,
    },
    {
    .lvl = 8,
    .species = SPECIES_ROOKIDEE,
    .moves = {MOVE_WING_ATTACK, MOVE_TACKLE, MOVE_NONE, MOVE_NONE} 
    }
};

static const struct TrainerMon sParty_Sally[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_ARBOK,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_SUCKER_PUNCH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GRAFAIAI,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_NORMAL_GEM,
    .moves = {MOVE_FURY_SWIPES, MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_PARTING_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TOXICROAK,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_DRAIN_PUNCH, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GENGAR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_IRON_MOTH,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_FIERY_DANCE, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL}
    }
};

static const struct TrainerMon sParty_Robin[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_WEEZING_GALAR,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .moves = {MOVE_STRANGE_STEAM, MOVE_CLEAR_SMOG, MOVE_HEAT_WAVE, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_ARIADOS,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_CROSS_POISON, MOVE_MEGAHORN, MOVE_SUCKER_PUNCH, MOVE_NIGHT_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TENTACRUEL,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CLEAR_BODY,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_HEX, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TOXTRICITY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PUNK_ROCK,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_OVERDRIVE, MOVE_BOOMBURST, MOVE_PSYCHIC_NOISE, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GARBODOR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_WEAK_ARMOR,
    .heldItem = ITEM_GARBODORITE,
    .moves = {MOVE_GUNK_SHOT, MOVE_BODY_SLAM, MOVE_DRAIN_PUNCH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_NIHILEGO,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_POWER_GEM, MOVE_DAZZLING_GLEAM, MOVE_GRASS_KNOT}
    }
};

static const struct TrainerMon sParty_Andrea[] = {
    {
    .lvl = 72,
    .species = SPECIES_SLURPUFF,
    }
};

static const struct TrainerMon sParty_Crissy[] = {
    {
    .lvl = 70,
    .species = SPECIES_SHIINOTIC,
    },
    {
    .lvl = 70,
    .species = SPECIES_KLEFKI,
    }
};

static const struct TrainerMon sParty_Rick[] = {
    {
    .lvl = 5,
    .species = SPECIES_GRUBBIN,
    },
    {
    .lvl = 5,
    .species = SPECIES_JOLTIK,
    }
};

static const struct TrainerMon sParty_Lyle[] = {
    {
    .lvl = 6,
    .species = SPECIES_WURMPLE,
    },
    {
    .lvl = 6,
    .species = SPECIES_BLIPBUG,
    },
    {
    .lvl = 6,
    .species = SPECIES_DEWPIDER,
    },
    {
    .lvl = 6,
    .species = SPECIES_SPINARAK,
    }
};

static const struct TrainerMon sParty_Jose[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 9,
    .species = SPECIES_LEDYBA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 10,
    .species = SPECIES_SPEWPA,
    }
};

static const struct TrainerMon sParty_Doug[] = {
    {
    .lvl = 58,
    .species = SPECIES_DHELMISE,
    },
    {
    .lvl = 58,
    .species = SPECIES_CARNIVINE,
    }
};

static const struct TrainerMon sParty_Greg[] = {
    {
    .lvl = 58,
    .species = SPECIES_LEDYBA,
    },
    {
    .lvl = 58,
    .species = SPECIES_LOKIX,
    }
};

static const struct TrainerMon sParty_Kent[] = {
    {
    .lvl = 60,
    .species = SPECIES_PINSIR,
    }
};

static const struct TrainerMon sParty_James1[] = {
    {
    .lvl = 7,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 7,
    .species = SPECIES_SIZZLIPEDE,
    }
};

static const struct TrainerMon sParty_James2[] = {
    {
    .lvl = 7,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 7,
    .species = SPECIES_SIZZLIPEDE,
    }
};

static const struct TrainerMon sParty_James3[] = {
    {
    .lvl = 7,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 7,
    .species = SPECIES_SIZZLIPEDE,
    }
};

static const struct TrainerMon sParty_James4[] = {
    {
    .lvl = 7,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 7,
    .species = SPECIES_SIZZLIPEDE,
    }
};

static const struct TrainerMon sParty_James5[] = {
    {
    .lvl = 7,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 7,
    .species = SPECIES_SIZZLIPEDE,
    }
};

static const struct TrainerMon sParty_Trent1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_AVALUGG_HISUI,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_NEVERMELTICE,
    .moves = {MOVE_AVALANCHE, MOVE_BODY_PRESS, MOVE_ROCK_SLIDE, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_RUNERIGUS,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_SHADOW_SHIELD,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SHADOW_CLAW, MOVE_EARTHQUAKE, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TURTONATOR,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_DAUNTLESS_SHIELD,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_FLAMETHROWER, MOVE_AURA_SPHERE, MOVE_DRAGON_PULSE, MOVE_SHELL_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LEFTOVERS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_MOONBLAST, MOVE_QUIVER_DANCE}
    },
};

static const struct TrainerMon sParty_Lenny[] = {
    {
    .lvl = 38,
    .species = SPECIES_AMOONGUSS,
    },
    {
    .lvl = 38,
    .species = SPECIES_CLAYDOL,
    }
};

static const struct TrainerMon sParty_Lucas1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LUNATONE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_HYPNOSIS, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_EISCUE_ICE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_ICE_FACE,
    .heldItem = ITEM_SALAC_BERRY,
    .moves = {MOVE_BELLY_DRUM, MOVE_ICICLE_CRASH, MOVE_LIQUIDATION, MOVE_ZEN_HEADBUTT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_NINETALES_ALOLA,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SNOW_WARNING,
    .heldItem = ITEM_LIGHT_CLAY,
    .moves = {MOVE_AURORA_VEIL, MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TOXICROAK,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_DRY_SKIN,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_DRAIN_PUNCH, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_ARCTOZOLT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SLUSH_RUSH,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_BOLT_BEAK, MOVE_ICICLE_CRASH, MOVE_PLUCK, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Alan[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_PROBOPASS,
    .nature = NATURE_RELAXED,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 0, 252, 6, 0, 0 ),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_VOLT_SWITCH, MOVE_POWER_GEM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_FERROTHORN,
    .nature = NATURE_RELAXED,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 6, 252, 0, 0, 0 ),
    .ability = ABILITY_IRON_BARBS,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_POWER_WHIP, MOVE_GYRO_BALL, MOVE_LEECH_SEED, MOVE_THUNDER_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MAGNEZONE,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_VOLT_SWITCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_STEELIX,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_STEELIXITE,
    .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_HEAVY_SLAM, MOVE_CURSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_STAKATAKA,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, MOVE_BODY_PRESS, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Clark[] = {
    {
    .lvl = 10,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Eric[] = {
    {
    .lvl = 39,
    .species = SPECIES_WORMADAM_SANDY,
    },
    {
    .lvl = 39,
    .species = SPECIES_GOLEM_ALOLA,
    }
};

static const struct TrainerMon sParty_Lucas2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LUNATONE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_HYPNOSIS, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_EISCUE_ICE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_ICE_FACE,
    .heldItem = ITEM_SALAC_BERRY,
    .moves = {MOVE_BELLY_DRUM, MOVE_ICICLE_CRASH, MOVE_LIQUIDATION, MOVE_ZEN_HEADBUTT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_NINETALES_ALOLA,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SNOW_WARNING,
    .heldItem = ITEM_LIGHT_CLAY,
    .moves = {MOVE_AURORA_VEIL, MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TOXICROAK,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_DRY_SKIN,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_DRAIN_PUNCH, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_ARCTOZOLT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SLUSH_RUSH,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_BOLT_BEAK, MOVE_ICICLE_CRASH, MOVE_PLUCK, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Mike1[] = {
    {
    .lvl = 28,
    .species = SPECIES_HITMONTOP,
    },
    {
    .lvl = 28,
    .species = SPECIES_KLAWF,
    },
    {
    .lvl = 28,
    .species = SPECIES_ESCAVALIER,
    }
};

static const struct TrainerMon sParty_Mike2[] = {
    {
    .lvl = 28,
    .species = SPECIES_HITMONTOP,
    },
    {
    .lvl = 28,
    .species = SPECIES_KLAWF,
    },
    {
    .lvl = 28,
    .species = SPECIES_ESCAVALIER,
    }
};

static const struct TrainerMon sParty_Trent2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_AVALUGG_HISUI,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_NEVERMELTICE,
    .moves = {MOVE_AVALANCHE, MOVE_BODY_PRESS, MOVE_ROCK_SLIDE, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_RUNERIGUS,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_SHADOW_SHIELD,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SHADOW_CLAW, MOVE_EARTHQUAKE, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TURTONATOR,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_DAUNTLESS_SHIELD,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_FLAMETHROWER, MOVE_AURA_SPHERE, MOVE_DRAGON_PULSE, MOVE_SHELL_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LEFTOVERS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_MOONBLAST, MOVE_QUIVER_DANCE}
    },
};

static const struct TrainerMon sParty_Trent3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_AVALUGG_HISUI,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_NEVERMELTICE,
    .moves = {MOVE_AVALANCHE, MOVE_BODY_PRESS, MOVE_ROCK_SLIDE, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_RUNERIGUS,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_SHADOW_SHIELD,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SHADOW_CLAW, MOVE_EARTHQUAKE, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TURTONATOR,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_DAUNTLESS_SHIELD,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_FLAMETHROWER, MOVE_AURA_SPHERE, MOVE_DRAGON_PULSE, MOVE_SHELL_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LEFTOVERS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_MOONBLAST, MOVE_QUIVER_DANCE}
    },
};

static const struct TrainerMon sParty_Trent4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_AVALUGG_HISUI,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_NEVERMELTICE,
    .moves = {MOVE_AVALANCHE, MOVE_BODY_PRESS, MOVE_ROCK_SLIDE, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_RUNERIGUS,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_SHADOW_SHIELD,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SHADOW_CLAW, MOVE_EARTHQUAKE, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TURTONATOR,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_DAUNTLESS_SHIELD,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_FLAMETHROWER, MOVE_AURA_SPHERE, MOVE_DRAGON_PULSE, MOVE_SHELL_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LEFTOVERS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_MOONBLAST, MOVE_QUIVER_DANCE}
    },
};

static const struct TrainerMon sParty_Trent5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_AVALUGG_HISUI,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_NEVERMELTICE,
    .moves = {MOVE_AVALANCHE, MOVE_BODY_PRESS, MOVE_ROCK_SLIDE, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_RUNERIGUS,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_SHADOW_SHIELD,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SHADOW_CLAW, MOVE_EARTHQUAKE, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TURTONATOR,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_DAUNTLESS_SHIELD,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_FLAMETHROWER, MOVE_AURA_SPHERE, MOVE_DRAGON_PULSE, MOVE_SHELL_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LEFTOVERS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_MOONBLAST, MOVE_QUIVER_DANCE}
    },
};

static const struct TrainerMon sParty_DezAndLuke[] = {
    {
    .lvl = 65,
    .species = SPECIES_LIEPARD,
    },
    {
    .lvl = 65,
    .species = SPECIES_UMBREON,
    }
};

static const struct TrainerMon sParty_LeaAndJed[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_KiraAndDan1[] = {
    {
    .lvl = 56,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 56,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan2[] = {
    {
    .lvl = 56,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 56,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan3[] = {
    {
    .lvl = 56,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 56,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan4[] = {
    {
    .lvl = 56,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 56,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan5[] = {
    {
    .lvl = 56,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 56,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Johanna[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FIRE_FANG, MOVE_EXTREME_SPEED, MOVE_THUNDER_FANG, MOVE_CRUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SCYTHER,
    .heldItem = ITEM_EVIOLITE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE, MOVE_BUG_BITE, MOVE_ROCK_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_LUMINEON,
    .heldItem = ITEM_WISE_GLASSES,
    .nature = NATURE_TIMID,
    .ability = ABILITY_STORM_DRAIN,
    .moves = {MOVE_SCALD, MOVE_AURORA_BEAM, MOVE_AIR_CUTTER, MOVE_OMINOUS_WIND}
    },
};

static const struct TrainerMon sParty_Gerald[] = {
    {
    .lvl = 40,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_FLAMETHROWER, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK, MOVE_BIND}
    }
};

static const struct TrainerMon sParty_Vivian[] = {
    {
    .lvl = 27,
    .species = SPECIES_TOGEDEMARU,
    },
    {
    .lvl = 27,
    .species = SPECIES_EMOLGA,
    }
};

static const struct TrainerMon sParty_Danielle[] = {
    {
    .lvl = 41,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Hideo[] = {
    {
    .lvl = 60,
    .species = SPECIES_BARRASKEWDA
    },
    {
    .lvl = 60,
    .species = SPECIES_GREEDENT
    }
};

static const struct TrainerMon sParty_Keigo[] = {
    {
    .lvl = 64,
    .species = SPECIES_MILTANK,
    },
    {
    .lvl = 64,
    .species = SPECIES_TOXICROAK,
    }
};

static const struct TrainerMon sParty_Riley[] = {
    {
    .lvl = 63,
    .species = SPECIES_TOXTRICITY,
    },
    {
    .lvl = 63,
    .species = SPECIES_LOPUNNY,
    }
};

static const struct TrainerMon sParty_Flint[] = {
    {
    .lvl = 60,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 60,
    .species = SPECIES_DELIBIRD,
    }
};

static const struct TrainerMon sParty_Ashley[] = {
    {
    .lvl = 60,
    .species = SPECIES_PIDGEOT,
    },
    {
    .lvl = 60,
    .species = SPECIES_YANMA,
    }
};

static const struct TrainerMon sParty_WallyMauville[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 30,
    .species = SPECIES_DREDNAW,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_STRONG_JAW,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CRUNCH, MOVE_RAZOR_SHELL, MOVE_ROCK_TOMB, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 30,
    .species = SPECIES_KRICKETUNE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_TECHNICIAN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BUG_BITE, MOVE_BULLDOZE, MOVE_AERIAL_ACE, MOVE_ROCK_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 31,
    .species = SPECIES_SKARMORY,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_STEEL_WING, MOVE_DRILL_PECK, MOVE_ROOST, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 32,
    .species = SPECIES_GARDEVOIR,
    .nature = NATURE_TIMID,
    //custom timid
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 80, 0, 0 ),
    .ability = ABILITY_TRACE,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DRAINING_KISS, MOVE_PSYCHIC_NOISE, MOVE_MAGICAL_LEAF, MOVE_SHADOW_BALL}
    },
    
};

static const struct TrainerMon sParty_WallyVR2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_SNEASLER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_DIRE_CLAW, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_SHAYMIN_SKY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SERENE_GRACE,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_AIR_SLASH, MOVE_SEED_FLARE, MOVE_EARTH_POWER, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_CELESTEELA,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_POWER_HERB,
    .moves = {MOVE_AIR_SLASH, MOVE_FLASH_CANNON, MOVE_METEOR_BEAM, MOVE_FLAMETHROWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_DARMANITAN,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SHEER_FORCE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_RAGING_BOLT,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_DRAGON_PULSE, MOVE_THUNDERCLAP, MOVE_THUNDERBOLT, MOVE_HYPER_VOICE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_GARDEVOIR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TRACE,
    .heldItem = ITEM_GARDEVOIRITE,
    .moves = {MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_CALM_MIND}
    },
};

static const struct TrainerMon sParty_WallyRoute110[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SNEASLER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_UNBURDEN,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_TAUNT, MOVE_DIRE_CLAW, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GALVANTULA,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_COMPOUND_EYES,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CORVIKNIGHT,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_UNNERVE,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_BODY_PRESS, MOVE_DRILL_PECK, MOVE_IRON_HEAD, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_DARMANITAN,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SHEER_FORCE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
    .lvl = 201,
    .species = SPECIES_WISHIWASHI,
    .nature = NATURE_QUIET,
    .ev = TRAINER_PARTY_EVS_QUIET(),
    .ability = ABILITY_SCHOOLING,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER, MOVE_FLIP_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GARDEVOIR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TRACE,
    .heldItem = ITEM_GARDEVOIRITE,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT}
    },
};

static const struct TrainerMon sParty_MayAndBrendanEvergrandeMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_LEECH_LIFE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_DRAGONITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_MULTISCALE,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_TAPU_FINI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MISTY_SURGE,
    .heldItem = ITEM_MISTY_SEED,
    .moves = {MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_MOONBLAST, MOVE_GRASS_KNOT},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_URSHIFU_SINGLE_STRIKE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_VOLCARONA,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_FLAME_BODY,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_SCEPTILE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_SCEPTILITE,
    .moves = {MOVE_DUAL_CHOP, MOVE_BULLET_SEED, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_MayAndBrendanEvergrandeTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_LEECH_LIFE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_METAGROSS,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_TOUGH_CLAWS,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_METEOR_MASH, MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_TAPU_BULU,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_GRASSY_SURGE,
    .heldItem = ITEM_GRASSY_SEED,
    .moves = {MOVE_WOOD_HAMMER, MOVE_PLAY_ROUGH, MOVE_SUPERPOWER, MOVE_ZEN_HEADBUTT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_URSHIFU_SINGLE_STRIKE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_MILOTIC,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_COMPETITIVE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BOUNCY_BUBBLE, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_BLAZIKEN,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_STRIKER,
    .heldItem = ITEM_BLAZIKENITE,
    .moves = {MOVE_BLAZE_KICK, MOVE_THUNDEROUS_KICK, MOVE_THUNDER_PUNCH, MOVE_BULK_UP}
    }
};

static const struct TrainerMon sParty_MayAndBrendanEvergrandeTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_LEECH_LIFE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_GOODRA_HISUI,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_SAP_SIPPER,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_WISH, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_TAPU_KOKO,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_ELECTRIC_SURGE,
    .heldItem = ITEM_ELECTRIC_SEED,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_SUPERCELL_SLAM, MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_URSHIFU_SINGLE_STRIKE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_OGERPON_HEARTHFLAME,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_MOLD_BREAKER,
    .heldItem = ITEM_HEARTHFLAME_MASK,
    .moves = {MOVE_IVY_CUDGEL, MOVE_WOOD_HAMMER, MOVE_THROAT_CHOP, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_SWAMPERTITE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_POWER_UP_PUNCH, MOVE_AVALANCHE}
    }
};

static const struct TrainerMon sParty_Jonah[] = {
    {
    .lvl = 60,
    .species = SPECIES_WAILORD,
    },
    {
    .lvl = 60,
    .species = SPECIES_BLASTOISE,
    },
    {
    .lvl = 60,
    .species = SPECIES_PINCURCHIN,
    }
};

static const struct TrainerMon sParty_Henry[] = {
    {
    .lvl = 62,
    .species = SPECIES_BARRASKEWDA,
    },
    {
    .lvl = 63,
    .species = SPECIES_BRUXISH,
    }
};

static const struct TrainerMon sParty_Roger[] = {
    {
    .lvl = 60,
    .species = SPECIES_MACHAMP,
    },
    {
    .lvl = 60,
    .species = SPECIES_GRAPPLOCT,
    },
    {
    .lvl = 60,
    .species = SPECIES_RAICHU,
    }
};

static const struct TrainerMon sParty_Alexa[] = {
    {
    .lvl = 65,
    .species = SPECIES_SCOVILLAIN,
    },
    {
    .lvl = 65,
    .species = SPECIES_BOLTUND,
    },
    {
    .lvl = 65,
    .species = SPECIES_COFAGRIGUS,
    }
};

static const struct TrainerMon sParty_Ruben[] = {
    {
    .lvl = 66,
    .species = SPECIES_MUDSDALE,
    },
    {
    .lvl = 66,
    .species = SPECIES_PROBOPASS,
    }
};

static const struct TrainerMon sParty_Koji1[] = {
    {
    .lvl = 65,
    .species = SPECIES_CONKELDURR,
    }
};

static const struct TrainerMon sParty_Wayne[] = {
    {
    .lvl = 66,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 66,
    .species = SPECIES_QUAQUAVAL,
    },
    {
    .lvl = 66,
    .species = SPECIES_SHIINOTIC,
    }
};

static const struct TrainerMon sParty_Aidan[] = {
    {
    .lvl = 62,
    .species = SPECIES_TALONFLAME,
    },
    {
    .lvl = 62,
    .species = SPECIES_KILOWATTREL,
    }
};

static const struct TrainerMon sParty_Reed[] = {
    {
    .lvl = 68,
    .species = SPECIES_WALREIN,
    },
    {
    .lvl = 68,
    .species = SPECIES_DEWGONG,
    }
};

static const struct TrainerMon sParty_Tisha[] = {
    {
    .lvl = 68,
    .species = SPECIES_DECIDUEYE,
    },
    {
    .lvl = 68,
    .species = SPECIES_DECIDUEYE_HISUI,
    },
};

static const struct TrainerMon sParty_ToriAndTia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_FLOATZEL,
    .nature = NATURE_HASTY,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
    .ability = ABILITY_TECHNICIAN,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_FAKE_OUT, MOVE_AQUA_JET}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_RAICHU,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_LIGHTNING_ROD,
    .heldItem = ITEM_MAGNET,
    .moves = {MOVE_FAKE_OUT, MOVE_ZIPPY_ZAP, MOVE_BRICK_BREAK, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_RIBOMBEE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SHIELD_DUST,
    .heldItem = ITEM_PIXIE_PLATE,
    .moves = {MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_GUMSHOOS,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_ADAPTABILITY,
    .heldItem = ITEM_SILK_SCARF,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_ICE_FANG}
    },
};

static const struct TrainerMon sParty_KimAndIris[] = {
    {
    .lvl = 59,
    .species = SPECIES_ALTARIA,
    },
    {
    .lvl = 59,
    .species = SPECIES_TURTONATOR,
    }
};

static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
    .lvl = 38,
    .species = SPECIES_PILOSWINE,
    .heldItem = ITEM_EVIOLITE
    },
    {
    .lvl = 38,
    .species = SPECIES_PILOSWINE,
    .heldItem = ITEM_EVIOLITE
    },
};

static const struct TrainerMon sParty_MelAndPaul[] = {
    {
    .lvl = 56,
    .species = SPECIES_DUSTOX,
    },
    {
    .lvl = 56,
    .species = SPECIES_BEAUTIFLY,
    },
    {
    .lvl = 56,
    .species = SPECIES_BUTTERFREE,
    },
    {
    .lvl = 56,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_JohnAndJay1[] = {
    {
    .lvl = 70,
    .species = SPECIES_TREVENANT,
    },
    {
    .lvl = 70,
    .species = SPECIES_ARCANINE,
    }
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
    {
    .lvl = 70,
    .species = SPECIES_TREVENANT,
    },
    {
    .lvl = 70,
    .species = SPECIES_ARCANINE,
    }
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
    {
    .lvl = 70,
    .species = SPECIES_TREVENANT,
    },
    {
    .lvl = 70,
    .species = SPECIES_ARCANINE,
    }
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
    {
    .lvl = 70,
    .species = SPECIES_TREVENANT,
    },
    {
    .lvl = 70,
    .species = SPECIES_ARCANINE,
    }
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
    {
    .lvl = 70,
    .species = SPECIES_TREVENANT,
    },
    {
    .lvl = 70,
    .species = SPECIES_ARCANINE,
    }
};

static const struct TrainerMon sParty_ReliAndIan[] = {
    {
    .lvl = 70,
    .species = SPECIES_SLOWKING_GALAR,
    },
    {
    .lvl = 70,
    .species = SPECIES_SLOWBRO_GALAR,
    }
};

static const struct TrainerMon sParty_LilaAndRoy1[] = {
    {
    .lvl = 66,
    .species = SPECIES_STARAPTOR,
    },
    {
    .lvl = 66,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
    {
    .lvl = 66,
    .species = SPECIES_STARAPTOR,
    },
    {
    .lvl = 66,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
    {
    .lvl = 66,
    .species = SPECIES_STARAPTOR,
    },
    {
    .lvl = 66,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
    {
    .lvl = 66,
    .species = SPECIES_STARAPTOR,
    },
    {
    .lvl = 66,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
    {
    .lvl = 66,
    .species = SPECIES_STARAPTOR,
    },
    {
    .lvl = 66,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_LisaAndRay[] = {
    {
    .lvl = 57,
    .species = SPECIES_HUNTAIL,
    },
    {
    .lvl = 57,
    .species = SPECIES_GOREBYSS,
    }
};

static const struct TrainerMon sParty_Chris[] = {
    {
    .lvl = 58,
    .species = SPECIES_MILOTIC,
    },
    {
    .lvl = 58,
    .species = SPECIES_ALOMOMOLA,
    }
};

static const struct TrainerMon sParty_Dawson[] = {
    {
    .lvl = 16,
    .species = SPECIES_NUZLEAF,
    .heldItem = ITEM_NONE
    },
    {
    .lvl = 16,
    .species = SPECIES_KADABRA,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Sarah[] = {
    {
    .lvl = 16,
    .species = SPECIES_LOMBRE,
    .heldItem = ITEM_NONE
    },
    {
    .lvl = 16,
    .species = SPECIES_LINOONE_GALAR,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Darian[] = {
    {
    .lvl = 9,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Hailey[] = {
    {
    .lvl = 22,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Chandler[] = {
    {
    .lvl = 20,
    .species = SPECIES_BASCULIN,
    },
    {
    .lvl = 20,
    .species = SPECIES_WIGLETT,
    }
};

static const struct TrainerMon sParty_Kaleb[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_MAGNET,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_GALVANIZE,
    .moves = {MOVE_BODY_SLAM, MOVE_FAKE_OUT, MOVE_GRASS_KNOT, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_RHYDON,
    .heldItem = ITEM_EVIOLITE,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_ROCK_TOMB, MOVE_BULLDOZE, MOVE_BRICK_BREAK, MOVE_CUT}
    },
};

static const struct TrainerMon sParty_Joseph[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_SLOWBRO_GALAR,
    .heldItem = ITEM_WISE_GLASSES,
    .nature = NATURE_MODEST,
    .ability = ABILITY_QUICK_DRAW,
    .moves = {MOVE_PSYBEAM, MOVE_FLASH, MOVE_GRASS_KNOT, MOVE_VENOSHOCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_CRABOMINABLE,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_ICE_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_SHARD, MOVE_DRAIN_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_FOCUS_SASH,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_WIND_RIDER,
    .moves = {MOVE_FAKE_OUT, MOVE_NIGHT_SLASH, MOVE_RAZOR_LEAF, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_LANTURN,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_SHUCA_BERRY,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_SHOCK_WAVE, MOVE_SCALD, MOVE_ICY_WIND, MOVE_SIGNAL_BEAM}
    },
};

static const struct TrainerMon sParty_Alyssa[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_EXEGGUTOR_ALOLA,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_HARVEST,
    .heldItem = ITEM_YACHE_BERRY,
    .moves = {MOVE_DRAGON_TAIL, MOVE_SEED_BOMB, MOVE_EGG_BOMB, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_HEATMOR,
    .nature = NATURE_TIMID,
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FLAME_BURST, MOVE_GIGA_DRAIN, MOVE_SCORCHING_SANDS, MOVE_WILL_O_WISP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_BELLIBOLT,
    .nature = NATURE_BOLD,
    .ability = ABILITY_ELECTROMORPHOSIS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DISCHARGE, MOVE_MUD_SHOT, MOVE_MUDDY_WATER, MOVE_SLACK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_MACHOKE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_BULK_UP, MOVE_ROCK_SLIDE}
    },
};

static const struct TrainerMon sParty_Marcos[] = {
    {
    .lvl = 24,
    .species = SPECIES_HAUNTER,
    },
    {
    .lvl = 24,
    .species = SPECIES_KLEFKI,
    }
};

static const struct TrainerMon sParty_Rhett[] = {
    {
    .lvl = 24,
    .species = SPECIES_SHIINOTIC,
    },
    {
    .lvl = 24,
    .species = SPECIES_MINIOR,
    }
};

static const struct TrainerMon sParty_Tyron[] = {
    {
    .lvl = 30,
    .species = SPECIES_CARBINK,
    },
    {
    .lvl = 30,
    .species = SPECIES_CARNIVINE,
    }
};

static const struct TrainerMon sParty_Celina[] = {
    {
    .lvl = 30,
    .species = SPECIES_MAUSHOLD,
    },
    {
    .lvl = 30,
    .species = SPECIES_BRAMBLEGHAST,
    }
};

static const struct TrainerMon sParty_Bianca[] = {
    {
    .lvl = 31,
    .species = SPECIES_AMBIPOM,
    },
    {
    .lvl = 32,
    .species = SPECIES_VESPIQUEN,
    },
};

static const struct TrainerMon sParty_Hayden[] = {
    {
    .lvl = 31,
    .species = SPECIES_YANMEGA,
    },
    {
    .lvl = 32,
    .species = SPECIES_ARBOK,
    },
};

static const struct TrainerMon sParty_Sophie[] = {
    {
    .lvl = 37,
    .species = SPECIES_VENOMOTH,
    },
    {
    .lvl = 37,
    .species = SPECIES_DUSCLOPS,
    }
};

static const struct TrainerMon sParty_Coby[] = {
    {
    .lvl = 37,
    .species = SPECIES_TROPIUS,
    },
    {
    .lvl = 37,
    .species = SPECIES_URSARING,
    }
};

static const struct TrainerMon sParty_Kai[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_SLOWKING,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_REGENERATOR,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_BLIZZARD, MOVE_SCALD, MOVE_PSYCHIC, MOVE_YAWN}
    },
    
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DEWGONG,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_ICE_BODY,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_REST, MOVE_SLEEP_TALK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_WEAVILE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INFILTRATOR,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FAKE_OUT, MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_AURORUS,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_REFRIGERATE,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .moves = {MOVE_HYPER_VOICE, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_PSYCHIC}
    }
};

static const struct TrainerMon sParty_Charlotte[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DARMANITAN_GALAR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_GORILLA_TACTICS,
    .heldItem = ITEM_CHOICE_SCARF,
    .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GOLEM,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_RINDO_BERRY,
    .moves = {MOVE_ROCK_POLISH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TATSUGIRI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_STORM_DRAIN,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_ICY_WIND, MOVE_NASTY_PLOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_FROSLASS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ICE_BODY,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_BLIZZARD, MOVE_BITTER_MALICE, MOVE_THUNDERBOLT, MOVE_DESTINY_BOND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GLALIE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_REFRIGERATE,
    .heldItem = ITEM_GLALITITE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Deandre[] = {
    {
    .lvl = 28,
    .species = SPECIES_SANDSLASH_ALOLA,
    },
    {
    .lvl = 28,
    .species = SPECIES_FLAREON,
    },
    {
    .lvl = 28,
    .species = SPECIES_MUSHARNA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    {
    .lvl = 70,
    .species = SPECIES_CROBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    {
    .lvl = 70,
    .species = SPECIES_SCOLIPEDE,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    {
    .lvl = 70,
    .species = SPECIES_PYROAR,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    {
    .lvl = 70,
    .species = SPECIES_CLAYDOL,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    {
    .lvl = 70,
    .species = SPECIES_TORKOAL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    {
    .lvl = 70,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    {
    .lvl = 70,
    .species = SPECIES_SANDACONDA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    {
    .lvl = 70,
    .species = SPECIES_MUDSDALE,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    {
    .lvl = 70,
    .species = SPECIES_SUDOWOODO,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    {
    .lvl = 70,
    .species = SPECIES_COALOSSAL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    {
    .lvl = 70,
    .species = SPECIES_HEATMOR,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    {
    .lvl = 70,
    .species = SPECIES_GRANBULL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    {
    .lvl = 70,
    .species = SPECIES_WEAVILE,
    }
};


static const struct TrainerMon sParty_Courtney[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_TALONFLAME,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_GALE_WINGS,
    .moves = {MOVE_TAILWIND, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_U_TURN}
    },
    //hp, atk, def, speed, spatk, spdef
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 31, 31),
    .lvl = 80,
    .species = SPECIES_SERPERIOR,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_LEAF_STORM, MOVE_DRAGON_PULSE, MOVE_HIDDEN_POWER, MOVE_GLARE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_KOMMO_O,
    .heldItem = ITEM_THROAT_SPRAY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_OVERCOAT,
    .moves = {MOVE_CLANGOROUS_SOUL, MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_CENTISKORCH,
    .heldItem = ITEM_CENTISKITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_FLASH_FIRE,
    .moves = {MOVE_FIRE_LASH, MOVE_LEECH_LIFE, MOVE_KNOCK_OFF, MOVE_POWER_WHIP}
    }
};

static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_PAWMOT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_EMBOAR,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_BULL_RUSH,
    .moves = {MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_HEAD_SMASH, MOVE_CLOSE_COMBAT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_HYDREIGON,
    .heldItem = ITEM_CHOICE_SPECS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_DARK_PULSE, MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_HOUNDOOMINITE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_FLASH_FIRE,
    .moves = {MOVE_FLAMETHROWER, MOVE_FIERY_WRATH, MOVE_SLUDGE_BOMB, MOVE_SCORCHING_SANDS}
    },
};

static const struct TrainerMon sParty_Darcy[] = {
    {
    .lvl = 70,
    .species = SPECIES_GREEDENT,
    },
    {
    .lvl = 70,
    .species = SPECIES_LIEPARD,
    }
};

static const struct TrainerMon sParty_MaxieMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 42,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 43,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Pete[] = {
    {
    .lvl = 50,
    .species = SPECIES_FERALIGATR,
    }
};

static const struct TrainerMon sParty_Isabelle[] = {
    {
    .lvl = 50,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Andres1[] = {
    {
    .lvl = 55,
    .species = SPECIES_GIGALITH,
    },
    {
    .lvl = 55,
    .species = SPECIES_EXCADRILL,
    }
};

static const struct TrainerMon sParty_Josue[] = {
    {
    .lvl = 55,
    .species = SPECIES_BRAVIARY,
    },
    {
    .lvl = 55,
    .species = SPECIES_SWANNA,
    }
};

static const struct TrainerMon sParty_Camron[] = {
    {
    .lvl = 56,
    .species = SPECIES_FLOATZEL,
    },
    {
    .lvl = 55,
    .species = SPECIES_PYUKUMUKU,
    }
};

static const struct TrainerMon sParty_Cory1[] = {
    {
    .lvl = 54,
    .species = SPECIES_OCTILLERY,
    },
    {
    .lvl = 54,
    .species = SPECIES_MALAMAR,
    },
};

static const struct TrainerMon sParty_Carolina[] = {
    {
    .lvl = 54,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 54,
    .species = SPECIES_CORVIKNIGHT,
    }
};

static const struct TrainerMon sParty_Elijah[] = {
    {
    .lvl = 55,
    .species = SPECIES_STARAPTOR,
    },
    {
    .lvl = 55,
    .species = SPECIES_SQUAWKABILLY,
    }
};

static const struct TrainerMon sParty_Celia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GASTRODON,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_SAND_FORCE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SCALD, MOVE_EARTH_POWER, MOVE_CLEAR_SMOG, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_WYRDEER,
    .nature = NATURE_HASTY,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
    .ability = ABILITY_SAP_SIPPER,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .moves = {MOVE_PSYCHIC, MOVE_LUNGE, MOVE_EARTHQUAKE, MOVE_HYPER_VOICE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DRACOZOLT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAND_RUSH,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_BOLT_BEAK, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_BODY_SLAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MAWILE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_MAWILITE,
    .moves = {MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE}
    }
};



static const struct TrainerMon sParty_Branden[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ROTOM_MOW,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_DISCHARGE, MOVE_GIGA_DRAIN, MOVE_HEX, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ARCANINE_HISUI,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_HEADLONG_RUSH, MOVE_EXTREME_SPEED}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MR_RIME,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SCREEN_CLEANER,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .moves = {MOVE_FREEZE_DRY, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_TEETER_DANCE}
    },
};

static const struct TrainerMon sParty_Bryant[] = {
    {
    .lvl = 34,
    .species = SPECIES_PROBOPASS,
    },
    {
    .lvl = 35,
    .species = SPECIES_MEOWSTIC,
    },
    {
    .lvl = 36,
    .species = SPECIES_PACHIRISU,
    },
};

static const struct TrainerMon sParty_Shayla[] = {
    {
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    },
    {
    .lvl = 35,
    .species = SPECIES_AUDINO,
    },
    {
    .lvl = 35,
    .species = SPECIES_PYROAR,
    }
};

static const struct TrainerMon sParty_Kyra[] = {
    {
    .lvl = 55,
    .species = SPECIES_DODRIO,
    },
    {
    .lvl = 55,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Jaiden[] = {
    {
    .lvl = 55,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 55,
    .species = SPECIES_SWALOT,
    }
};

static const struct TrainerMon sParty_Alix[] = {
    {
    .lvl = 54,
    .species = SPECIES_POLTEAGEIST,
    },
};

static const struct TrainerMon sParty_Helene[] = {
    {
    .lvl = 54,
    .species = SPECIES_ORBEETLE,
    }
};

static const struct TrainerMon sParty_Marlene[] = {
    {
    .lvl = 40,
    .species = SPECIES_SHELGON,
    },
    {
    .lvl = 40,
    .species = SPECIES_BOLTUND,
    }
};

static const struct TrainerMon sParty_Devan[] = {
    {
    .lvl = 9,
    .species = SPECIES_ROLYCOLY,
    },
    {
    .lvl = 10,
    .species = SPECIES_ROGGENROLA,
    }
};

static const struct TrainerMon sParty_Johnson[] = {
    {
    .lvl = 9,
    .species = SPECIES_SKIDDO,
    },
    {
    .lvl = 10,
    .species = SPECIES_PIDOVE,
    }
};

static const struct TrainerMon sParty_Melina[] = {
    {
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Brandi[] = {
    {
    .lvl = 26,
    .species = SPECIES_GRAVELER_ALOLA,
    },
    {
    .lvl = 26,
    .species = SPECIES_ARIADOS,
    }
};

static const struct TrainerMon sParty_Aisha[] = {
    {
    .lvl = 26,
    .species = SPECIES_LIEPARD,
    },
    {
    .lvl = 26,
    .species = SPECIES_ALOMOMOLA,
    }
};

static const struct TrainerMon sParty_Makayla[] = {
    {
    .lvl = 70,
    .species = SPECIES_KILOWATTREL,
    },
    {
    .lvl = 70,
    .species = SPECIES_STONJOURNER,
    }
};

static const struct TrainerMon sParty_Fabian[] = {
    {
    .lvl = 60,
    .species = SPECIES_ALCREMIE,
    }
};

static const struct TrainerMon sParty_Dayton[] = {
    {
    .lvl = 58,
    .species = SPECIES_MAGCARGO,
    },
    {
    .lvl = 58,
    .species = SPECIES_MABOSSTIFF,
    }
};

static const struct TrainerMon sParty_Raquel[] = {
    {
    .lvl = 60,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Leonel[] = {
    {
    .lvl = 64,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Callie[] = {
    {
    .lvl = 63,
    .species = SPECIES_HAWLUCHA,
    },
    {
    .lvl = 63,
    .species = SPECIES_MARACTUS,
    }
};

static const struct TrainerMon sParty_Cale[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GOLDUCK,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_AQUA_JET}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CLAWITZER,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_MEGA_LAUNCHER,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_AURA_SPHERE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_SHIINOTIC,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_RAIN_DISH,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SPORE, MOVE_MOONBLAST, MOVE_FLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ZEBSTRIKA,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SAP_SIPPER,
    .moves = {MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_FACADE, MOVE_ZIPPY_ZAP}
    },
};

static const struct TrainerMon sParty_Myles[] = {
    {
    .lvl = 65,
    .species = SPECIES_GUMSHOOS,
    },
    {
    .lvl = 65,
    .species = SPECIES_SEISMITOAD,
    }
};

static const struct TrainerMon sParty_Pat[] = {
    {
    .lvl = 65,
    .species = SPECIES_ACCELGOR,
    }
};

static const struct TrainerMon sParty_Cristin1[] = {
    {
    .lvl = 64,
    .species = SPECIES_EXPLOUD,
    },
    {
    .lvl = 64,
    .species = SPECIES_CINCCINO,
    }
};

static const struct TrainerMon sParty_MayAndBrendanRustboroTreecko[] = {
   {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GOLBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_WING_ATTACK, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HATTREM,
    .nature = NATURE_MODEST,
    .ability = ABILITY_MAGIC_BOUNCE,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DRAINING_KISS, MOVE_PSYBEAM, MOVE_THUNDER_WAVE, MOVE_LIFE_DEW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_ROCK_SMASH, MOVE_AERIAL_ACE, MOVE_HEADBUTT, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_STRIKER,
    .moves = {MOVE_DOUBLE_KICK, MOVE_ROCK_TOMB, MOVE_FLAME_CHARGE, MOVE_THUNDER_PUNCH}
    }
};

static const struct TrainerMon sParty_MayAndBrendanRustboroTorchic[] = {
  {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GOLBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_WING_ATTACK, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HATTREM,
    .nature = NATURE_MODEST,
    .ability = ABILITY_MAGIC_BOUNCE,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DRAINING_KISS, MOVE_PSYBEAM, MOVE_THUNDER_WAVE, MOVE_LIFE_DEW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_ROCK_SMASH, MOVE_AERIAL_ACE, MOVE_HEADBUTT, MOVE_FIRE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_QUIET,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_WATER_PULSE, MOVE_ROCK_TOMB, MOVE_MUD_SHOT, MOVE_ICE_PUNCH}
    }
};

static const struct TrainerMon sParty_Roxanne2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 14,
    .species = SPECIES_RHYHORN,
    .heldItem = ITEM_RINDO_BERRY,
    .nature = NATURE_ADAMANT,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 36, 0, 0, 0, 36 ),
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_ROCK_TOMB, MOVE_HORN_ATTACK, MOVE_BULLDOZE, MOVE_ROCK_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_WOOPER_PALDEA,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_MODEST,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 36, 0, 36 ),
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_MUD_SHOT, MOVE_ACID_SPRAY, MOVE_YAWN, MOVE_SANDSTORM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_GLIGAR,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_ADAMANT,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 36, 0, 0, 0, 36 ),
    .ability = ABILITY_SAND_VEIL,
    .moves = {MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_BULLDOZE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_BERRY_JUICE,
    .nature = NATURE_IMPISH,
    //custom impish
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 36, 36, 0, 0, 0 ),
    .ability = ABILITY_STURDY,
    .moves = {MOVE_ROCK_BLAST, MOVE_SPARK, MOVE_BULLDOZE, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMon sParty_Roxanne3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 14,
    .species = SPECIES_RHYHORN,
    .heldItem = ITEM_RINDO_BERRY,
    .nature = NATURE_ADAMANT,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 36, 0, 0, 0, 36 ),
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_ROCK_TOMB, MOVE_HORN_ATTACK, MOVE_BULLDOZE, MOVE_ROCK_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_WOOPER_PALDEA,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_MODEST,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 36, 0, 36 ),
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_MUD_SHOT, MOVE_ACID_SPRAY, MOVE_YAWN, MOVE_SANDSTORM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_GLIGAR,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_ADAMANT,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 36, 0, 0, 0, 36 ),
    .ability = ABILITY_SAND_VEIL,
    .moves = {MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_BULLDOZE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_BERRY_JUICE,
    .nature = NATURE_IMPISH,
    //custom impish
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 36, 36, 0, 0, 0 ),
    .ability = ABILITY_STURDY,
    .moves = {MOVE_ROCK_BLAST, MOVE_SPARK, MOVE_BULLDOZE, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMon sParty_Roxanne4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 14,
    .species = SPECIES_RHYHORN,
    .heldItem = ITEM_RINDO_BERRY,
    .nature = NATURE_ADAMANT,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 36, 0, 0, 0, 36 ),
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_ROCK_TOMB, MOVE_HORN_ATTACK, MOVE_BULLDOZE, MOVE_ROCK_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_WOOPER_PALDEA,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_MODEST,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 36, 0, 36 ),
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_MUD_SHOT, MOVE_ACID_SPRAY, MOVE_YAWN, MOVE_SANDSTORM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_GLIGAR,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_ADAMANT,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 36, 0, 0, 0, 36 ),
    .ability = ABILITY_SAND_VEIL,
    .moves = {MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_BULLDOZE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_BERRY_JUICE,
    .nature = NATURE_IMPISH,
    //custom impish
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 36, 36, 0, 0, 0 ),
    .ability = ABILITY_STURDY,
    .moves = {MOVE_ROCK_BLAST, MOVE_SPARK, MOVE_BULLDOZE, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMon sParty_Roxanne5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 14,
    .species = SPECIES_RHYHORN,
    .heldItem = ITEM_RINDO_BERRY,
    .nature = NATURE_ADAMANT,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 36, 0, 0, 0, 36 ),
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_ROCK_TOMB, MOVE_HORN_ATTACK, MOVE_BULLDOZE, MOVE_ROCK_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_WOOPER_PALDEA,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_MODEST,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 36, 0, 36 ),
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_MUD_SHOT, MOVE_ACID_SPRAY, MOVE_YAWN, MOVE_SANDSTORM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_GLIGAR,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_ADAMANT,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 36, 0, 0, 0, 36 ),
    .ability = ABILITY_SAND_VEIL,
    .moves = {MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_BULLDOZE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_BERRY_JUICE,
    .nature = NATURE_IMPISH,
    //custom impish
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 36, 36, 0, 0, 0 ),
    .ability = ABILITY_STURDY,
    .moves = {MOVE_ROCK_BLAST, MOVE_SPARK, MOVE_BULLDOZE, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMon sParty_Brawly2[] = {
    {
            //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 30, 30),
    .lvl = 23,
    .species = SPECIES_PIKACHU_LIBRE,
    .nature = NATURE_TIMID,
    //custom timid
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 120, 0, 120 ),
    .heldItem = ITEM_LIGHT_BALL,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_FAKE_OUT, MOVE_ELECTROWEB, MOVE_HIDDEN_POWER, MOVE_DRAINING_KISS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 24,
    .species = SPECIES_SANDSLASH_ALOLA,
    .nature = NATURE_JOLLY,
    //custom jolly
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 120, 0, 0, 0, 120 ),
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_ICE_SCALES,
    .moves = {MOVE_ICE_SHARD, MOVE_AERIAL_ACE, MOVE_BULLDOZE, MOVE_CUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_LYCANROC_DUSK,
    .nature = NATURE_JOLLY,
    //custom jolly
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 120, 0, 0, 0, 120 ),
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_TOUGH_CLAWS,
    .moves = {MOVE_LOW_SWEEP, MOVE_ACCELEROCK, MOVE_BULLDOZE, MOVE_ROCK_TOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_GURDURR,
    .nature = NATURE_ADAMANT,
    //custom adamant
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 120, 0, 0, 0, 120 ),
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_MACH_PUNCH, MOVE_FIRE_PUNCH, MOVE_LOW_SWEEP, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_ADAMANT,
    //custom adamant
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 120, 120, 0, 0, 0, 0 ),
    .ability = ABILITY_THICK_FAT,
    .moves = {MOVE_FAKE_OUT, MOVE_LOW_SWEEP, MOVE_BULLET_PUNCH, MOVE_BULK_UP}
    }
};

static const struct TrainerMon sParty_Brawly3[] = {
    {
            //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 30, 30),
    .lvl = 23,
    .species = SPECIES_PIKACHU_LIBRE,
    .nature = NATURE_TIMID,
    //custom timid
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 120, 0, 120 ),
    .heldItem = ITEM_LIGHT_BALL,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_FAKE_OUT, MOVE_ELECTROWEB, MOVE_HIDDEN_POWER, MOVE_DRAINING_KISS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 24,
    .species = SPECIES_SANDSLASH_ALOLA,
    .nature = NATURE_JOLLY,
    //custom jolly
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 120, 0, 0, 0, 120 ),
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_ICE_SCALES,
    .moves = {MOVE_ICE_SHARD, MOVE_AERIAL_ACE, MOVE_BULLDOZE, MOVE_CUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_LYCANROC_DUSK,
    .nature = NATURE_JOLLY,
    //custom jolly
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 120, 0, 0, 0, 120 ),
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_TOUGH_CLAWS,
    .moves = {MOVE_LOW_SWEEP, MOVE_ACCELEROCK, MOVE_BULLDOZE, MOVE_ROCK_TOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_GURDURR,
    .nature = NATURE_ADAMANT,
    //custom adamant
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 120, 0, 0, 0, 120 ),
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_MACH_PUNCH, MOVE_FIRE_PUNCH, MOVE_LOW_SWEEP, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_ADAMANT,
    //custom adamant
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 120, 120, 0, 0, 0, 0 ),
    .ability = ABILITY_THICK_FAT,
    .moves = {MOVE_FAKE_OUT, MOVE_LOW_SWEEP, MOVE_BULLET_PUNCH, MOVE_BULK_UP}
    }
};

static const struct TrainerMon sParty_Brawly4[] = {
    {
            //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 30, 30),
    .lvl = 23,
    .species = SPECIES_PIKACHU_LIBRE,
    .nature = NATURE_TIMID,
    //custom timid
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 120, 0, 120 ),
    .heldItem = ITEM_LIGHT_BALL,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_FAKE_OUT, MOVE_ELECTROWEB, MOVE_HIDDEN_POWER, MOVE_DRAINING_KISS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 24,
    .species = SPECIES_SANDSLASH_ALOLA,
    .nature = NATURE_JOLLY,
    //custom jolly
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 120, 0, 0, 0, 120 ),
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_ICE_SCALES,
    .moves = {MOVE_ICE_SHARD, MOVE_AERIAL_ACE, MOVE_BULLDOZE, MOVE_CUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_LYCANROC_DUSK,
    .nature = NATURE_JOLLY,
    //custom jolly
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 120, 0, 0, 0, 120 ),
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_TOUGH_CLAWS,
    .moves = {MOVE_LOW_SWEEP, MOVE_ACCELEROCK, MOVE_BULLDOZE, MOVE_ROCK_TOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_GURDURR,
    .nature = NATURE_ADAMANT,
    //custom adamant
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 120, 0, 0, 0, 120 ),
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_MACH_PUNCH, MOVE_FIRE_PUNCH, MOVE_LOW_SWEEP, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_ADAMANT,
    //custom adamant
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 120, 120, 0, 0, 0, 0 ),
    .ability = ABILITY_THICK_FAT,
    .moves = {MOVE_FAKE_OUT, MOVE_LOW_SWEEP, MOVE_BULLET_PUNCH, MOVE_BULK_UP}
    }
};

static const struct TrainerMon sParty_Brawly5[] = {
    {
            //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 30, 30),
    .lvl = 23,
    .species = SPECIES_PIKACHU_LIBRE,
    .nature = NATURE_TIMID,
    //custom timid
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 120, 0, 120 ),
    .heldItem = ITEM_LIGHT_BALL,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_FAKE_OUT, MOVE_ELECTROWEB, MOVE_HIDDEN_POWER, MOVE_DRAINING_KISS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 24,
    .species = SPECIES_SANDSLASH_ALOLA,
    .nature = NATURE_JOLLY,
    //custom jolly
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 120, 0, 0, 0, 120 ),
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_ICE_SCALES,
    .moves = {MOVE_ICE_SHARD, MOVE_AERIAL_ACE, MOVE_BULLDOZE, MOVE_CUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_LYCANROC_DUSK,
    .nature = NATURE_JOLLY,
    //custom jolly
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 120, 0, 0, 0, 120 ),
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_TOUGH_CLAWS,
    .moves = {MOVE_LOW_SWEEP, MOVE_ACCELEROCK, MOVE_BULLDOZE, MOVE_ROCK_TOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_GURDURR,
    .nature = NATURE_ADAMANT,
    //custom adamant
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 0, 120, 0, 0, 0, 120 ),
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_MACH_PUNCH, MOVE_FIRE_PUNCH, MOVE_LOW_SWEEP, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_ADAMANT,
    //custom adamant
            //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 120, 120, 0, 0, 0, 0 ),
    .ability = ABILITY_THICK_FAT,
    .moves = {MOVE_FAKE_OUT, MOVE_LOW_SWEEP, MOVE_BULLET_PUNCH, MOVE_BULK_UP}
    }
};

static const struct TrainerMon sParty_Wattson2[] = {
    //hp, atk, def, speed, spatk, spdef
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 31, 31),
    .lvl = 34,
    .species = SPECIES_DEDENNE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_ELECTRIC_SURGE,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_VOLT_SWITCH, MOVE_DRAINING_KISS, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_KILOWATTREL,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_AIR_SLASH, MOVE_ELECTROWEB, MOVE_VOLT_SWITCH, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_EVIOLITE,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_ANALYTIC,
    .moves = {MOVE_SHOCK_WAVE, MOVE_MIRROR_SHOT, MOVE_VOLT_SWITCH, MOVE_TRI_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_OCCA_BERRY,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_CHARGE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_LUXRITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_THUNDER_FANG, MOVE_BITE, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG}
    }
};

static const struct TrainerMon sParty_Wattson3[] = {
    //hp, atk, def, speed, spatk, spdef
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 31, 31),
    .lvl = 34,
    .species = SPECIES_DEDENNE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_ELECTRIC_SURGE,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_VOLT_SWITCH, MOVE_DRAINING_KISS, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_KILOWATTREL,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_AIR_SLASH, MOVE_ELECTROWEB, MOVE_VOLT_SWITCH, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_EVIOLITE,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_ANALYTIC,
    .moves = {MOVE_SHOCK_WAVE, MOVE_MIRROR_SHOT, MOVE_VOLT_SWITCH, MOVE_TRI_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_OCCA_BERRY,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_CHARGE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_LUXRITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_THUNDER_FANG, MOVE_BITE, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG}
    }
};

static const struct TrainerMon sParty_Wattson4[] = {
    //hp, atk, def, speed, spatk, spdef
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 31, 31),
    .lvl = 34,
    .species = SPECIES_DEDENNE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_ELECTRIC_SURGE,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_VOLT_SWITCH, MOVE_DRAINING_KISS, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_KILOWATTREL,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_AIR_SLASH, MOVE_ELECTROWEB, MOVE_VOLT_SWITCH, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_EVIOLITE,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_ANALYTIC,
    .moves = {MOVE_SHOCK_WAVE, MOVE_MIRROR_SHOT, MOVE_VOLT_SWITCH, MOVE_TRI_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_OCCA_BERRY,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_CHARGE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_LUXRITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_THUNDER_FANG, MOVE_BITE, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG}
    }
};

static const struct TrainerMon sParty_Wattson5[] = {
    //hp, atk, def, speed, spatk, spdef
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 31, 31),
    .lvl = 34,
    .species = SPECIES_DEDENNE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_ELECTRIC_SURGE,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_VOLT_SWITCH, MOVE_DRAINING_KISS, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_KILOWATTREL,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_AIR_SLASH, MOVE_ELECTROWEB, MOVE_VOLT_SWITCH, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_EVIOLITE,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_ANALYTIC,
    .moves = {MOVE_SHOCK_WAVE, MOVE_MIRROR_SHOT, MOVE_VOLT_SWITCH, MOVE_TRI_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_OCCA_BERRY,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_CHARGE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_LUXRITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_THUNDER_FANG, MOVE_BITE, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG}
    }
};

static const struct TrainerMon sParty_Flannery2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_NINETALES,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_DROUGHT,
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_FLAMETHROWER, MOVE_ENERGY_BALL, MOVE_ROAR, MOVE_SCORCHING_SANDS}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 30, 31, 30, 30),
    .lvl = 47,
    .species = SPECIES_WALKING_WAKE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_CHOICE_SCARF,
    .moves = {MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_SCOVILLAIN,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER, MOVE_SCORCHING_SANDS, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_ROTOM_HEAT,
    .nature = NATURE_BOLD,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 6, 0 ),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_TORKOAL,
    .nature = NATURE_QUIET,
    .ev = TRAINER_PARTY_EVS_QUIET(),
    .ability = ABILITY_DROUGHT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_INFERNAPITE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_BLAZE,
    .isShiny = TRUE,
    .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_THUNDER_PUNCH}
    }
};

static const struct TrainerMon sParty_Flannery3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_NINETALES,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_DROUGHT,
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_FLAMETHROWER, MOVE_ENERGY_BALL, MOVE_ROAR, MOVE_SCORCHING_SANDS}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 30, 31, 30, 30),
    .lvl = 47,
    .species = SPECIES_WALKING_WAKE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_CHOICE_SCARF,
    .moves = {MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_SCOVILLAIN,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER, MOVE_SCORCHING_SANDS, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_ROTOM_HEAT,
    .nature = NATURE_BOLD,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 6, 0 ),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_TORKOAL,
    .nature = NATURE_QUIET,
    .ev = TRAINER_PARTY_EVS_QUIET(),
    .ability = ABILITY_DROUGHT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_INFERNAPITE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_BLAZE,
    .isShiny = TRUE,
    .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_THUNDER_PUNCH}
    }
};

static const struct TrainerMon sParty_Flannery4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_NINETALES,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_DROUGHT,
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_FLAMETHROWER, MOVE_ENERGY_BALL, MOVE_ROAR, MOVE_SCORCHING_SANDS}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 30, 31, 30, 30),
    .lvl = 47,
    .species = SPECIES_WALKING_WAKE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_CHOICE_SCARF,
    .moves = {MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_SCOVILLAIN,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER, MOVE_SCORCHING_SANDS, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_ROTOM_HEAT,
    .nature = NATURE_BOLD,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 6, 0 ),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_TORKOAL,
    .nature = NATURE_QUIET,
    .ev = TRAINER_PARTY_EVS_QUIET(),
    .ability = ABILITY_DROUGHT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_INFERNAPITE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_BLAZE,
    .isShiny = TRUE,
    .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_THUNDER_PUNCH}
    }
};

static const struct TrainerMon sParty_Flannery5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_NINETALES,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_DROUGHT,
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_FLAMETHROWER, MOVE_ENERGY_BALL, MOVE_ROAR, MOVE_SCORCHING_SANDS}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 30, 31, 30, 30),
    .lvl = 47,
    .species = SPECIES_WALKING_WAKE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_CHOICE_SCARF,
    .moves = {MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_SCOVILLAIN,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER, MOVE_SCORCHING_SANDS, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_ROTOM_HEAT,
    .nature = NATURE_BOLD,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 6, 0 ),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_TORKOAL,
    .nature = NATURE_QUIET,
    .ev = TRAINER_PARTY_EVS_QUIET(),
    .ability = ABILITY_DROUGHT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_INFERNAPITE,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_BLAZE,
    .isShiny = TRUE,
    .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_THUNDER_PUNCH}
    }
};

static const struct TrainerMon sParty_Norman2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_ZOROARK_HISUI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ILLUSION,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_BITTER_MALICE, MOVE_AURA_SPHERE, MOVE_HYPER_VOICE, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_IRON_VALIANT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_SPIRIT_BREAK, MOVE_BULK_UP, MOVE_KNOCK_OFF}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 30, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_URSALUNA_BLOODMOON,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_MINDS_EYE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_EARTH_POWER, MOVE_BLOOD_MOON, MOVE_HYPER_VOICE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_CYCLIZAR,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_REGENERATOR,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_SHED_TAIL, MOVE_AQUA_TAIL, MOVE_DRAGON_CLAW, MOVE_RETURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_SLAKING,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TRUANT,
    .heldItem = ITEM_SLAKITE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_POWER_UP_PUNCH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_OBSTAGOON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_BRICK_BREAK, MOVE_OBSTRUCT}
    },
};

static const struct TrainerMon sParty_Norman3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_ZOROARK_HISUI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ILLUSION,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_BITTER_MALICE, MOVE_AURA_SPHERE, MOVE_HYPER_VOICE, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_IRON_VALIANT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_SPIRIT_BREAK, MOVE_BULK_UP, MOVE_KNOCK_OFF}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 30, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_URSALUNA_BLOODMOON,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_MINDS_EYE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_EARTH_POWER, MOVE_BLOOD_MOON, MOVE_HYPER_VOICE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_CYCLIZAR,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_REGENERATOR,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_SHED_TAIL, MOVE_AQUA_TAIL, MOVE_DRAGON_CLAW, MOVE_RETURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_SLAKING,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TRUANT,
    .heldItem = ITEM_SLAKITE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_POWER_UP_PUNCH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_OBSTAGOON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_BRICK_BREAK, MOVE_OBSTRUCT}
    },
};

static const struct TrainerMon sParty_Norman4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_ZOROARK_HISUI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ILLUSION,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_BITTER_MALICE, MOVE_AURA_SPHERE, MOVE_HYPER_VOICE, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_IRON_VALIANT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_SPIRIT_BREAK, MOVE_BULK_UP, MOVE_KNOCK_OFF}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 30, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_URSALUNA_BLOODMOON,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_MINDS_EYE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_EARTH_POWER, MOVE_BLOOD_MOON, MOVE_HYPER_VOICE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_CYCLIZAR,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_REGENERATOR,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_SHED_TAIL, MOVE_AQUA_TAIL, MOVE_DRAGON_CLAW, MOVE_RETURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_SLAKING,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TRUANT,
    .heldItem = ITEM_SLAKITE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_POWER_UP_PUNCH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_OBSTAGOON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_BRICK_BREAK, MOVE_OBSTRUCT}
    },
};

static const struct TrainerMon sParty_Norman5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_ZOROARK_HISUI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ILLUSION,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_BITTER_MALICE, MOVE_AURA_SPHERE, MOVE_HYPER_VOICE, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_IRON_VALIANT,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_SPIRIT_BREAK, MOVE_BULK_UP, MOVE_KNOCK_OFF}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 30, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_URSALUNA_BLOODMOON,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_MINDS_EYE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_EARTH_POWER, MOVE_BLOOD_MOON, MOVE_HYPER_VOICE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_CYCLIZAR,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_REGENERATOR,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_SHED_TAIL, MOVE_AQUA_TAIL, MOVE_DRAGON_CLAW, MOVE_RETURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_SLAKING,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TRUANT,
    .heldItem = ITEM_SLAKITE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_POWER_UP_PUNCH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_OBSTAGOON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_BRICK_BREAK, MOVE_OBSTRUCT}
    },
};

static const struct TrainerMon sParty_Winona2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_AGGRON,
    .nature = NATURE_ADAMANT,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 6, 252, 252, 0, 0, 0 ),
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_HEAVY_SLAM, MOVE_HEAD_SMASH, MOVE_FIRE_PUNCH, MOVE_BODY_PRESS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_FLYGON,
    .nature = NATURE_NAIVE,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
    .ability = ABILITY_TINTED_LENS,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_DRACO_METEOR, MOVE_HEADLONG_RUSH, MOVE_DUAL_WINGBEAT, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_FROSMOTH,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ICE_SCALES,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 30, 30),
    .lvl = 68,
    .species = SPECIES_THUNDURUS_THERIAN,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_SLUDGE_WAVE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ALTARIANITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_NATURAL_CURE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_RETURN}
    }
};

static const struct TrainerMon sParty_Winona3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_AGGRON,
    .nature = NATURE_ADAMANT,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 6, 252, 252, 0, 0, 0 ),
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_HEAVY_SLAM, MOVE_HEAD_SMASH, MOVE_FIRE_PUNCH, MOVE_BODY_PRESS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_FLYGON,
    .nature = NATURE_NAIVE,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
    .ability = ABILITY_TINTED_LENS,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_DRACO_METEOR, MOVE_HEADLONG_RUSH, MOVE_DUAL_WINGBEAT, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_FROSMOTH,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ICE_SCALES,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 30, 30),
    .lvl = 68,
    .species = SPECIES_THUNDURUS_THERIAN,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_SLUDGE_WAVE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ALTARIANITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_NATURAL_CURE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_RETURN}
    }
};

static const struct TrainerMon sParty_Winona4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_AGGRON,
    .nature = NATURE_ADAMANT,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 6, 252, 252, 0, 0, 0 ),
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_HEAVY_SLAM, MOVE_HEAD_SMASH, MOVE_FIRE_PUNCH, MOVE_BODY_PRESS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_FLYGON,
    .nature = NATURE_NAIVE,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
    .ability = ABILITY_TINTED_LENS,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_DRACO_METEOR, MOVE_HEADLONG_RUSH, MOVE_DUAL_WINGBEAT, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_FROSMOTH,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ICE_SCALES,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 30, 30),
    .lvl = 68,
    .species = SPECIES_THUNDURUS_THERIAN,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_SLUDGE_WAVE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ALTARIANITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_NATURAL_CURE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_RETURN}
    }
};

static const struct TrainerMon sParty_Winona5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_AGGRON,
    .nature = NATURE_ADAMANT,
    //custom adamant
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 6, 252, 252, 0, 0, 0 ),
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_HEAVY_SLAM, MOVE_HEAD_SMASH, MOVE_FIRE_PUNCH, MOVE_BODY_PRESS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_FLYGON,
    .nature = NATURE_NAIVE,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
    .ability = ABILITY_TINTED_LENS,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_DRACO_METEOR, MOVE_HEADLONG_RUSH, MOVE_DUAL_WINGBEAT, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_FROSMOTH,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ICE_SCALES,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 30, 30),
    .lvl = 68,
    .species = SPECIES_THUNDURUS_THERIAN,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_SLUDGE_WAVE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ALTARIANITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_NATURAL_CURE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_RETURN}
    }
};

static const struct TrainerMon sParty_TateAndLiza2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_DROWZEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 65,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 65,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_TAPU_FINI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MISTY_SURGE,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .moves = {MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_SURF, MOVE_FLIP_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_TINKATON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_OWN_TEMPO,
    .heldItem = ITEM_SHUCA_BERRY,
    .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_STONE_EDGE, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_RAPIDASH_GALAR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_URSALUNA,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_BULLETPROOF,
    .heldItem = ITEM_ASSAULT_VEST,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_FLUTTER_MANE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_ENERGY_BALL, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_PSYSHOCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_DIANCIE,
    .heldItem = ITEM_DIANCITE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_MOONBLAST, MOVE_DIAMOND_STORM, MOVE_CALM_MIND, MOVE_EARTH_POWER}
    }
};

static const struct TrainerMon sParty_Juan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_TAPU_FINI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MISTY_SURGE,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .moves = {MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_SURF, MOVE_FLIP_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_TINKATON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_OWN_TEMPO,
    .heldItem = ITEM_SHUCA_BERRY,
    .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_STONE_EDGE, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_RAPIDASH_GALAR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_URSALUNA,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_BULLETPROOF,
    .heldItem = ITEM_ASSAULT_VEST,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_FLUTTER_MANE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_ENERGY_BALL, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_PSYSHOCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_DIANCIE,
    .heldItem = ITEM_DIANCITE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_MOONBLAST, MOVE_DIAMOND_STORM, MOVE_CALM_MIND, MOVE_EARTH_POWER}
    }
};

static const struct TrainerMon sParty_Juan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_TAPU_FINI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MISTY_SURGE,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .moves = {MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_SURF, MOVE_FLIP_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_TINKATON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_OWN_TEMPO,
    .heldItem = ITEM_SHUCA_BERRY,
    .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_STONE_EDGE, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_RAPIDASH_GALAR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_URSALUNA,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_BULLETPROOF,
    .heldItem = ITEM_ASSAULT_VEST,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_FLUTTER_MANE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_ENERGY_BALL, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_PSYSHOCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_DIANCIE,
    .heldItem = ITEM_DIANCITE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_MOONBLAST, MOVE_DIAMOND_STORM, MOVE_CALM_MIND, MOVE_EARTH_POWER}
    }
};

static const struct TrainerMon sParty_Juan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_TAPU_FINI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_MISTY_SURGE,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .moves = {MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_SURF, MOVE_FLIP_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_TINKATON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_OWN_TEMPO,
    .heldItem = ITEM_SHUCA_BERRY,
    .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_STONE_EDGE, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_RAPIDASH_GALAR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_URSALUNA,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_BULLETPROOF,
    .heldItem = ITEM_ASSAULT_VEST,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_FLUTTER_MANE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_ENERGY_BALL, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_PSYSHOCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_DIANCIE,
    .heldItem = ITEM_DIANCITE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_MOONBLAST, MOVE_DIAMOND_STORM, MOVE_CALM_MIND, MOVE_EARTH_POWER}
    }
};

static const struct TrainerMon sParty_Angelo[] = {
    {
    .lvl = 28,
    .species = SPECIES_ILLUMISE,
    },
    {
    .lvl = 28,
    .species = SPECIES_VOLBEAT,
    }
};

static const struct TrainerMon sParty_Darius[] = {
    {
    .lvl = 62,
    .species = SPECIES_SIGILYPH,
    }
};

static const struct TrainerMon sParty_Steven[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 77,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 75,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 78,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Anabel[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Andres2[] = {
    {
    .lvl = 55,
    .species = SPECIES_GIGALITH,
    },
    {
    .lvl = 55,
    .species = SPECIES_EXCADRILL,
    }
};

static const struct TrainerMon sParty_Andres3[] = {
    {
    .lvl = 55,
    .species = SPECIES_GIGALITH,
    },
    {
    .lvl = 55,
    .species = SPECIES_EXCADRILL,
    }
};

static const struct TrainerMon sParty_Andres4[] = {
    {
    .lvl = 55,
    .species = SPECIES_GIGALITH,
    },
    {
    .lvl = 55,
    .species = SPECIES_EXCADRILL,
    }
};

static const struct TrainerMon sParty_Andres5[] = {
    {
    .lvl = 55,
    .species = SPECIES_GIGALITH,
    },
    {
    .lvl = 55,
    .species = SPECIES_EXCADRILL,
    }
};

static const struct TrainerMon sParty_Cory2[] = {
    {
    .lvl = 54,
    .species = SPECIES_OCTILLERY,
    },
    {
    .lvl = 54,
    .species = SPECIES_MALAMAR,
    },
};

static const struct TrainerMon sParty_Cory3[] = {
    {
    .lvl = 54,
    .species = SPECIES_OCTILLERY,
    },
    {
    .lvl = 54,
    .species = SPECIES_MALAMAR,
    },
};

static const struct TrainerMon sParty_Cory4[] = {
    {
    .lvl = 54,
    .species = SPECIES_OCTILLERY,
    },
    {
    .lvl = 54,
    .species = SPECIES_MALAMAR,
    },
};

static const struct TrainerMon sParty_Cory5[] = {
    {
    .lvl = 54,
    .species = SPECIES_OCTILLERY,
    },
    {
    .lvl = 54,
    .species = SPECIES_MALAMAR,
    },
};

static const struct TrainerMon sParty_Pablo2[] = {
    {
    .lvl = 62,
    .species = SPECIES_OCTILLERY,
    },
    {
    .lvl = 62,
    .species = SPECIES_GRENINJA,
    }
};

static const struct TrainerMon sParty_Pablo3[] = {
    {
    .lvl = 62,
    .species = SPECIES_OCTILLERY,
    },
    {
    .lvl = 62,
    .species = SPECIES_GRENINJA,
    }
};

static const struct TrainerMon sParty_Pablo4[] = {
    {
    .lvl = 62,
    .species = SPECIES_OCTILLERY,
    },
    {
    .lvl = 62,
    .species = SPECIES_GRENINJA,
    }
};

static const struct TrainerMon sParty_Pablo5[] = {
    {
    .lvl = 62,
    .species = SPECIES_OCTILLERY,
    },
    {
    .lvl = 62,
    .species = SPECIES_GRENINJA,
    }
};

static const struct TrainerMon sParty_Koji2[] = {
    {
    .lvl = 65,
    .species = SPECIES_CONKELDURR,
    }
};

static const struct TrainerMon sParty_Koji3[] = {
    {
    .lvl = 65,
    .species = SPECIES_CONKELDURR,
    }
};

static const struct TrainerMon sParty_Koji4[] = {
    {
    .lvl = 65,
    .species = SPECIES_CONKELDURR,
    }
};

static const struct TrainerMon sParty_Koji5[] = {
    {
    .lvl = 65,
    .species = SPECIES_CONKELDURR,
    }
};

static const struct TrainerMon sParty_Cristin2[] = {
    {
    .lvl = 64,
    .species = SPECIES_EXPLOUD,
    },
    {
    .lvl = 64,
    .species = SPECIES_CINCCINO,
    }
};

static const struct TrainerMon sParty_Cristin3[] = {
    {
    .lvl = 64,
    .species = SPECIES_EXPLOUD,
    },
    {
    .lvl = 64,
    .species = SPECIES_CINCCINO,
    }
};

static const struct TrainerMon sParty_Cristin4[] = {
    {
    .lvl = 64,
    .species = SPECIES_EXPLOUD,
    },
    {
    .lvl = 64,
    .species = SPECIES_CINCCINO,
    }
};

static const struct TrainerMon sParty_Cristin5[] = {
    {
    .lvl = 64,
    .species = SPECIES_EXPLOUD,
    },
    {
    .lvl = 64,
    .species = SPECIES_CINCCINO,
    }
};

static const struct TrainerMon sParty_Fernando2[] = {
    {
    .lvl = 56,
    .species = SPECIES_CARBINK,
    },
    {
    .lvl = 56,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_Fernando3[] = {
    {
    .lvl = 56,
    .species = SPECIES_CARBINK,
    },
    {
    .lvl = 56,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_Fernando4[] = {
    {
    .lvl = 56,
    .species = SPECIES_CARBINK,
    },
    {
    .lvl = 56,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_Fernando5[] = {
    {
    .lvl = 56,
    .species = SPECIES_CARBINK,
    },
    {
    .lvl = 56,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_Sawyer2[] = {
    {
    .lvl = 21,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Sawyer3[] = {
    {
    .lvl = 21,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Sawyer4[] = {
    {
    .lvl = 21,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Sawyer5[] = {
    {
    .lvl = 21,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Gabrielle2[] = {
    {
    .lvl = 64,
    .species = SPECIES_MAROWAK,
    },
    {
    .lvl = 64,
    .species = SPECIES_MAROWAK_ALOLA,
    },
};

static const struct TrainerMon sParty_Gabrielle3[] = {
    {
    .lvl = 64,
    .species = SPECIES_MAROWAK,
    },
    {
    .lvl = 64,
    .species = SPECIES_MAROWAK_ALOLA,
    },
};

static const struct TrainerMon sParty_Gabrielle4[] = {
    {
    .lvl = 64,
    .species = SPECIES_MAROWAK,
    },
    {
    .lvl = 64,
    .species = SPECIES_MAROWAK_ALOLA,
    },
};

static const struct TrainerMon sParty_Gabrielle5[] = {
    {
    .lvl = 64,
    .species = SPECIES_MAROWAK,
    },
    {
    .lvl = 64,
    .species = SPECIES_MAROWAK_ALOLA,
    },
};

static const struct TrainerMon sParty_Thalia2[] = {
    {
    .lvl = 56,
    .species = SPECIES_ALAKAZAM,
    },
    {
    .lvl = 56,
    .species = SPECIES_GRANBULL,
    }
};

static const struct TrainerMon sParty_Thalia3[] = {
    {
    .lvl = 56,
    .species = SPECIES_ALAKAZAM,
    },
    {
    .lvl = 56,
    .species = SPECIES_GRANBULL,
    }
};

static const struct TrainerMon sParty_Thalia4[] = {
    {
    .lvl = 56,
    .species = SPECIES_ALAKAZAM,
    },
    {
    .lvl = 56,
    .species = SPECIES_GRANBULL,
    }
};

static const struct TrainerMon sParty_Thalia5[] = {
    {
    .lvl = 56,
    .species = SPECIES_ALAKAZAM,
    },
    {
    .lvl = 56,
    .species = SPECIES_GRANBULL,
    }
};

static const struct TrainerMon sParty_Mariela[] = {
    {
    .lvl = 41,
    .species = SPECIES_CHIMECHO,
    }
};

static const struct TrainerMon sParty_Alvaro[] = {
    {
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 41,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Everett[] = {
    {
    .lvl = 41,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_Roark[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_SHIELDON,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_ROCK_TOMB, MOVE_METAL_BURST, MOVE_METAL_CLAW, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TYRUNT,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_STRONG_JAW,
    .moves = {MOVE_BITE, MOVE_THUNDER_FANG, MOVE_ROCK_TOMB, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CRANIDOS,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_ROCK_TOMB, MOVE_HEADBUTT, MOVE_ROCK_SMASH, MOVE_NONE}
    },
};

static const struct TrainerMon sParty_Gardenia[] = {
    {
         //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 30, 31),
    .lvl = 200,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_MIRACLE_SEED,
    .nature = NATURE_TIMID,
    .ability = ABILITY_NATURAL_CURE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE, MOVE_SLEEP_POWDER, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_DOLLIV,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_CALM,
    .ability = ABILITY_HARVEST,
    .moves = {MOVE_LEECH_SEED, MOVE_PROTECT, MOVE_MEGA_DRAIN, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_ROCK_TOMB, MOVE_BULLDOZE, MOVE_TRAILBLAZE, MOVE_POWER_UP_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GLOOM,
    .heldItem = ITEM_EVIOLITE,
    .nature = NATURE_BOLD,
    .ability = ABILITY_STENCH,
    .moves = {MOVE_MEGA_DRAIN, MOVE_STUN_SPORE, MOVE_LEECH_SEED, MOVE_SYNTHESIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GLOOM,
    .heldItem = ITEM_EVIOLITE,
    .nature = NATURE_BOLD,
    .ability = ABILITY_STENCH,
    .moves = {MOVE_SLUDGE, MOVE_POISON_POWDER, MOVE_LEECH_SEED, MOVE_SYNTHESIS}
    },
};

static const struct TrainerMon sParty_Gardenia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_VILEPLUME,
    .heldItem = ITEM_BLACK_SLUDGE,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_EFFECT_SPORE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ARBOLIVA,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_HARVEST,
    .moves = {MOVE_LEECH_SEED, MOVE_PROTECT, MOVE_GIGA_DRAIN, MOVE_HYPER_VOICE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_STURDY,
    .moves = {MOVE_ROCK_SLIDE, MOVE_HIGH_HORSEPOWER, MOVE_TRAILBLAZE, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LEFTOVERS,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_DAZZLING_GLEAM, MOVE_SYNTHESIS}
    },
    {
         //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 30, 31),
    .lvl = 200,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_ROSERADITE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_MEGA_DRAIN, MOVE_SLUDGE, MOVE_SLEEP_POWDER, MOVE_HIDDEN_POWER}
    },
};

static const struct TrainerMon sParty_Fantina[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MISMAGIUS,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_POWER_GEM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CURSOLA,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_UNBURDEN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_STRENGTH_SAP, MOVE_EARTH_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GALLADE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_JUSTIFIED,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_ZEN_HEADBUTT, MOVE_BRICK_BREAK, MOVE_BULK_UP, MOVE_SHADOW_SNEAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_ZOROARK,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ILLUSION,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_EXTRASENSORY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_BANETTITE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_PRANKSTER,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_KNOCK_OFF, MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK, MOVE_RETURN}
    }

};

//leftovers, life orb, drain punch, lucarionite, punch glove, HD boots
static const struct TrainerMon sParty_Maylene[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MELOETTA_PIROUETTE,
    .nature = NATURE_HASTY,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
    .ability = ABILITY_SERENE_GRACE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_RELIC_SONG, MOVE_DRAIN_PUNCH, MOVE_PSYCHIC, MOVE_AURA_SPHERE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_PANGORO,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_IRON_FIST,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GARGANACL,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_PURIFYING_SALT,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SALT_CURE, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_LILLIGANT_HISUI,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_HUSTLE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_LEAF_BLADE, MOVE_DRAIN_PUNCH, MOVE_FACADE, MOVE_VICTORY_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_LUCARIO,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_STEADFAST,
    .heldItem = ITEM_LUCARIONITE,
    .moves = {MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_VACUUM_WAVE, MOVE_DRAGON_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_KINGAMBIT,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_SUPREME_OVERLORD,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH}
    },
};

static const struct TrainerMon sParty_Wake[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_POLITOED,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_DRIZZLE,
    .heldItem = ITEM_DAMP_ROCK,
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_HAZE, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GYARADOS,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_MOXIE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_ICE_FANG, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_KINGDRA,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_HURRICANE, MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_TOEDSCRUEL,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_CLEAR_BODY,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_URSHIFU_RAPID_STRIKE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_SURGING_STRIKES, MOVE_BULK_UP, MOVE_POISON_JAB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_LAPRAS,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_WATER_ABSORB,
    .heldItem = ITEM_LAPRASITE,
    .moves = {MOVE_BOOMBURST, MOVE_DRAGON_PULSE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },
};

static const struct TrainerMon sParty_Byron[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SKARMORY,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_WHIRLWIND, MOVE_STEALTH_ROCK, MOVE_DRILL_PECK, MOVE_IRON_HEAD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_POLTEAGEIST,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_HEATPROOF,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_SHELL_SMASH, MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_STORED_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ORTHWORM,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_EARTH_EATER,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHED_TAIL, MOVE_BODY_PRESS, MOVE_IRON_HEAD, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SCIZOR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TECHNICIAN,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_BULLET_PUNCH, MOVE_BUG_BITE, MOVE_DUAL_WINGBEAT, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_MELMETAL,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_IRON_FIST,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_COPPERAJAH,
    .nature = NATURE_BRAVE,
           //hp,atk,def,spatk,spdef,speed
    .ev = TRAINER_PARTY_EVS( 252, 252, 6, 0, 0, 0 ),
    .ability = ABILITY_HEAVY_METAL,
    .heldItem = ITEM_COPPERAJITE,
    .moves = {MOVE_IRON_HEAD, MOVE_SUPERPOWER, MOVE_PLAY_ROUGH, MOVE_HIGH_HORSEPOWER}
    }
};

static const struct TrainerMon sParty_Candice[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_VANILLUXE,
    .nature = NATURE_HASTY,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
    .ability = ABILITY_SNOW_WARNING,
    .heldItem = ITEM_ICY_ROCK,
    .moves = {MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_FLASH_CANNON, MOVE_TAUNT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SLOWKING_GALAR,
    .nature = NATURE_CALM,
    .ev = TRAINER_PARTY_EVS_CALM(),
    .ability = ABILITY_REGENERATOR,
    .heldItem = ITEM_BLACK_SLUDGE,
    .moves = {MOVE_CHILLY_RECEPTION, MOVE_PSYSHOCK, MOVE_SLUDGE_WAVE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GLACEON,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SLUSH_RUSH,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FREEZE_DRY, MOVE_BLIZZARD, MOVE_EARTH_POWER, MOVE_HYPER_VOICE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_BAXCALIBUR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_THERMAL_EXCHANGE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_GLAIVE_RUSH, MOVE_ICICLE_CRASH, MOVE_IRON_HEAD, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_CHIEN_PAO,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SWORD_OF_RUIN,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_THROAT_CHOP, MOVE_SACRED_SWORD, MOVE_ICE_SPINNER, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GLALIE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_REFRIGERATE,
    .heldItem = ITEM_GLALITITE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Volkner[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_MIRAIDON,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_HADRON_ENGINE,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .moves = {MOVE_ELECTRO_DRIFT, MOVE_DRAGON_PULSE, MOVE_OVERHEAT, MOVE_TAUNT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_RAICHU_ALOLA,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_SURGE_SURFER,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_PSYCHIC, MOVE_RISING_VOLTAGE, MOVE_THUNDERBOLT, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_IRON_HANDS,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_FAKE_OUT, MOVE_SUPERCELL_SLAM, MOVE_CLOSE_COMBAT, MOVE_HEAVY_SLAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_DODRIO,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_QUICK_ATTACK, MOVE_JUMP_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ZERAORA,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_PLASMA_FISTS, MOVE_AERIAL_ACE, MOVE_FAKE_OUT, MOVE_FACADE}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
    .lvl = 200,
    .species = SPECIES_TOXTRICITY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PUNK_ROCK,
    .heldItem = ITEM_TOXTRICITITE,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_OVERDRIVE, MOVE_BOOMBURST, MOVE_HIDDEN_POWER}
    }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROUDON,
    }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_KYOGRE,
    }
};

static const struct TrainerMon sParty_DawnRoute104[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_BUNEARY,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_LIMBER,
    .moves = {MOVE_FAKE_OUT, MOVE_QUICK_ATTACK, MOVE_MACH_PUNCH, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_NOIBAT,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_TIMID,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_GUST, MOVE_ABSORB, MOVE_TWISTER, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_PIPLUP,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_SERIOUS,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_AQUA_JET, MOVE_BABY_DOLL_EYES, MOVE_PECK}
    },
};

static const struct TrainerMon sParty_DawnRoute111[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LOPUNNY,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_LIMBER,
    .heldItem = ITEM_SILK_SCARF,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_FAKE_OUT, MOVE_RETURN, MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_NOIVERN,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_INFILTRATOR,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_AEROBLAST, MOVE_DRAGON_PULSE, MOVE_BOOMBURST, MOVE_DARK_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TSAREENA,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_STRIKER,
    .heldItem = ITEM_MIRACLE_SEED,
    .moves = {MOVE_TROP_KICK, MOVE_TRIPLE_AXEL, MOVE_HIGH_JUMP_KICK, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CHANDELURE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_WILL_O_WISP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_EMPOLEON,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_EMPOLEONITE_D,
    .moves = {MOVE_SURF, MOVE_FLASH_CANNON, MOVE_TOXIC, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_DawnLilycove[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 71,
    .species = SPECIES_LOPUNNY,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_LIMBER,
    .heldItem = ITEM_LIFE_ORB,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_FAKE_OUT, MOVE_RETURN, MOVE_THUNDER_PUNCH, MOVE_CLOSE_COMBAT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 71,
    .species = SPECIES_NOIVERN,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_INFILTRATOR,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_AEROBLAST, MOVE_DRAGON_PULSE, MOVE_BOOMBURST, MOVE_DARK_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 71,
    .species = SPECIES_MEOWSCARADA,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_PROTEAN,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_KNOCK_OFF, MOVE_FLOWER_TRICK, MOVE_PLAY_ROUGH, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 71,
    .species = SPECIES_CHANDELURE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_WILL_O_WISP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 71,
    .species = SPECIES_IRON_BOULDER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_SACRED_SWORD, MOVE_MIGHTY_CLEAVE, MOVE_PSYCHO_CUT, MOVE_MEGAHORN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 71,
    .species = SPECIES_EMPOLEON,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_EMPOLEONITE_D,
    .moves = {MOVE_SURF, MOVE_FLASH_CANNON, MOVE_TOXIC, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_DawnEvergrande[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_PHEROMOSA,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_U_TURN, MOVE_TRIPLE_KICK, MOVE_POISON_JAB, MOVE_TRIPLE_AXEL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_NOIVERN,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_INFILTRATOR,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_AEROBLAST, MOVE_DRACO_METEOR, MOVE_BOOMBURST, MOVE_DARK_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_MEOWSCARADA,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_PROTEAN,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_KNOCK_OFF, MOVE_FLOWER_TRICK, MOVE_PLAY_ROUGH, MOVE_TRIPLE_AXEL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_BLACEPHALON,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_MIND_BLOWN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_IRON_BOULDER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_SACRED_SWORD, MOVE_MIGHTY_CLEAVE, MOVE_PSYCHO_CUT, MOVE_MEGAHORN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 84,
    .species = SPECIES_EMPOLEON,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_EMPOLEONITE_D,
    .moves = {MOVE_SURF, MOVE_FLASH_CANNON, MOVE_TOXIC, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_Ursula[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ORICORIO_BAILE,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_DANCER,
    .moves = {MOVE_REVELATION_DANCE, MOVE_QUIVER_DANCE, MOVE_AIR_CUTTER, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ORICORIO_PAU,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_DANCER,
    .moves = {MOVE_REVELATION_DANCE, MOVE_QUIVER_DANCE, MOVE_AIR_CUTTER, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ORICORIO_SENSU,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_DANCER,
    .moves = {MOVE_REVELATION_DANCE, MOVE_QUIVER_DANCE, MOVE_AIR_CUTTER, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ORICORIO_POM_POM,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_DANCER,
    .moves = {MOVE_REVELATION_DANCE, MOVE_QUIVER_DANCE, MOVE_AIR_CUTTER, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_X[] = {
   {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GALVANTULA,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_COMPOUND_EYES,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_STICKY_WEB, MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_MALAMAR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_CONTRARY,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SUPERPOWER, MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_PLUCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_DARMANITAN,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SHEER_FORCE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_MIMIKYU_DISGUISED,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_DISGUISE,
    .heldItem = ITEM_SPELL_TAG,
    .moves = {MOVE_SWORDS_DANCE, MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GRENINJA,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTEAN,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_WATER_SHURIKEN, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_TORTERRA,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_TORTERRITE,
    .moves = {MOVE_SEED_BOMB, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HEAVY_SLAM}
    },
};

static const struct TrainerMon sParty_Iriv24[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_RILLABOOM,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_GRASSY_SURGE,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_WOOD_HAMMER, MOVE_TAUNT, MOVE_DRAIN_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_ALAKAZAM,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_GRASS_KNOT, MOVE_FOCUS_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_TYRANITAR,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_SAND_STREAM,
    .heldItem = ITEM_CHOPLE_BERRY,
    .moves = {MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_HIGH_HORSEPOWER, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_AMPHAROS,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_STATIC,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_SIGNAL_BEAM, MOVE_AURA_SPHERE}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 30, 31),
    .lvl = 200,
    .species = SPECIES_FLORGES,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_NATURAL_CURE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_WISH, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_EMPOLEON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_EMPOLEONITE_O,
    .moves = {MOVE_IRON_HEAD, MOVE_LIQUIDATION, MOVE_DRILL_PECK, MOVE_BRICK_BREAK}
    },
};

static const struct TrainerMon sParty_Cap[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_MUK_ALOLA,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_ICE_PUNCH, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_CONKELDURR,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_IRON_FIST,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .gender = TRAINER_MON_FEMALE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_DONPHAN,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_CUSTAP_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_LANTURN,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SCALD, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_CELESTEELA,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_AIR_SLASH, MOVE_FLASH_CANNON, MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_CHARIZARD,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_BLAZE,
    .heldItem = ITEM_CHARIZARDITE_X,
    .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE}
    },
};

static const struct TrainerMon sParty_Sunbird[] = {
    {
    .nickname = COMPOUND_STRING("Jex"),
    .gender = TRAINER_MON_FEMALE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GLIMMORA,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_TOXIC_DEBRIS,
    .heldItem = ITEM_BLACK_SLUDGE,
    .moves = {MOVE_STEALTH_ROCK, MOVE_HIDDEN_POWER, MOVE_SLUDGE_WAVE, MOVE_POWER_GEM}
    },
    {
    .nickname = COMPOUND_STRING("Mr. Fish"),
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_DRACOVISH,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_STRONG_JAW,
    .heldItem = ITEM_QUICK_CLAW,
    .moves = {MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_FISHIOUS_REND, MOVE_ANCIENT_POWER}
    },
    {
    .nickname = COMPOUND_STRING("Noodle"),
    .gender = TRAINER_MON_FEMALE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_DRAGONITE,
    .nature = NATURE_GENTLE,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_MULTISCALE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_EXTREME_SPEED, MOVE_DRAGON_DANCE, MOVE_AQUA_TAIL, MOVE_OUTRAGE}
    },
    {
    .nickname = COMPOUND_STRING("Sylvain"),
    .gender = TRAINER_MON_MALE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_MEOWSCARADA,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_PROTEAN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_NIGHT_SLASH, MOVE_U_TURN, MOVE_PLAY_ROUGH, MOVE_ENERGY_BALL}
    },
    {
    .nickname = COMPOUND_STRING("OBC Andy"),
    .gender = TRAINER_MON_MALE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_SKELEDIRGE,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_UNAWARE,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_SNARL, MOVE_HEX, MOVE_HYPER_VOICE, MOVE_TORCH_SONG}
    },
    {
    .nickname = COMPOUND_STRING("Mochi"),
    .gender = TRAINER_MON_MALE,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_TYRANTRUM,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_STRONG_JAW,
    .heldItem = ITEM_METRONOME,
    .moves = {MOVE_POISON_FANG, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_DRAGON_CLAW},
    .isShiny = TRUE,
    },
};

static const struct TrainerMon sParty_Suneal[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_DRAGAPULT,
    .nature = NATURE_NAIVE,
    .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
    .ability = ABILITY_INFILTRATOR,
    .heldItem = ITEM_DRACO_PLATE,
    .moves = {MOVE_DRAGON_DARTS, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_BLAZIKEN,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_BLAZE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLAME_CHARGE, MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_SNEASLER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_CHOICE_SCARF,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_U_TURN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_BAXCALIBUR,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_THERMAL_EXCHANGE,
    .heldItem = ITEM_LOADED_DICE,
    .moves = {MOVE_ICICLE_SPEAR, MOVE_SCALE_SHOT, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GYARADOS,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_GYARADOSITE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_KINGAMBIT,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_SUPREME_OVERLORD,
    .heldItem = ITEM_BLACK_GLASSES,
    .moves = {MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_LOW_KICK, MOVE_KOWTOW_CLEAVE},
    },
};

static const struct TrainerMon sParty_DollaMike[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GENGAR,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_GENGARITE,
    .moves = {MOVE_HYPNOSIS, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_BLAZIKEN,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_STRIKER,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_FLAME_CHARGE, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE, MOVE_BLAZE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_NINETALES_ALOLA,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_SNOW_WARNING,
    .heldItem = ITEM_SHELL_BELL,
    .moves = {MOVE_BLIZZARD, MOVE_AURORA_VEIL, MOVE_DAZZLING_GLEAM, MOVE_FREEZE_DRY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_SWAMPERT,
    .nature = NATURE_IMPISH,
    .ev = TRAINER_PARTY_EVS_IMPISH(),
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_MUDDY_WATER, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_SYLVEON,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_PIXILATE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_CALM_MIND, MOVE_IRON_TAIL, MOVE_DAZZLING_GLEAM, MOVE_PSYSHOCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_SILVALLY_NORMAL,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_RKS_SYSTEM,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_THUNDER_FANG, MOVE_ROCK_SLIDE, MOVE_PARTING_SHOT, MOVE_MULTI_ATTACK},
    },
};

static const struct TrainerMon sParty_Danni[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .nickname = COMPOUND_STRING("Po"),
    .species = SPECIES_URSHIFU_RAPID_STRIKE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .nickname = COMPOUND_STRING("Freddy"),
    .species = SPECIES_DARKRAI,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_BAD_DREAMS,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DARK_PULSE, MOVE_FOCUS_BLAST, MOVE_DARK_VOID, MOVE_NASTY_PLOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .nickname = COMPOUND_STRING("Mettaton"),
    .species = SPECIES_DRAGAPULT,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_INFILTRATOR,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_DRAGON_PULSE, MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .nickname = COMPOUND_STRING("Scor"),
    .species = SPECIES_CINDERACE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_LIBERO,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_PYRO_BALL, MOVE_HIGH_JUMP_KICK, MOVE_SUCKER_PUNCH, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .nickname = COMPOUND_STRING("Spoopy"),
    .species = SPECIES_FLUTTER_MANE,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_POWER_GEM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .nickname = COMPOUND_STRING("Byron"),
    .species = SPECIES_MELMETAL,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_IRON_FIST,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
    },
};

static const struct TrainerMon sParty_MastaJanes[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 200,
        .species = SPECIES_IRON_BUNDLE,
        .nature = NATURE_HASTY,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .ability = ABILITY_QUARK_DRIVE,
        .heldItem = ITEM_BOOSTER_ENERGY,
        .moves = {MOVE_FREEZE_DRY, MOVE_FLIP_TURN, MOVE_ICE_BEAM, MOVE_DRILL_PECK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .nickname = COMPOUND_STRING("Kitty"),
    .species = SPECIES_MEOWSCARADA,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_PROTEAN,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_TRIPLE_AXEL, MOVE_PLAY_ROUGH, MOVE_FLOWER_TRICK, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_ALAKAZAM,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_MAGIC_GUARD,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_HIDDEN_POWER, MOVE_PSYCHIC, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_NINJASK,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_SPEED_BOOST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_SWORDS_DANCE, MOVE_X_SCISSOR, MOVE_DUAL_WINGBEAT, MOVE_FIRST_IMPRESSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_URSHIFU_RAPID_STRIKE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_COBA_BERRY,
    .moves = {MOVE_SURGING_STRIKES, MOVE_BULK_UP, MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_INFERNAPE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_IRON_FIST,
    .heldItem = ITEM_INFERNAPITE,
    .moves = {MOVE_POISON_JAB, MOVE_CLOSE_COMBAT, MOVE_PYRO_BALL, MOVE_ACROBATICS},
    },
};

static const struct TrainerMon sParty_Befools[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 200,
        .species = SPECIES_GENGAR,
        .nature = NATURE_TIMID,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .ability = ABILITY_LEVITATE,
        .heldItem = ITEM_GENGARITE,
        .moves = {MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_HEX, MOVE_SLUDGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_KARTANA,
    .nature = NATURE_BOLD,
    .ev = TRAINER_PARTY_EVS_BOLD(),
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_PSYCHO_CUT, MOVE_AIR_SLASH, MOVE_LEAF_BLADE, MOVE_X_SCISSOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_IRON_THORNS,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_HARD_STONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_ROCK_SLIDE, MOVE_FUSION_BOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_IRON_HANDS,
    .nature = NATURE_ADAMANT,
    .ev = TRAINER_PARTY_EVS_ADAMANT(),
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_MAGNET,
    .moves = {MOVE_FAKE_OUT, MOVE_PLASMA_FISTS, MOVE_ELECTRIC_TERRAIN, MOVE_FORCE_PALM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_CERULEDGE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_WEAK_ARMOR,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FLAMETHROWER, MOVE_BITTER_BLADE, MOVE_SHADOW_CLAW, MOVE_FLAME_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_TAPU_KOKO,
    .nature = NATURE_RASH,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_ELECTRIC_SURGE,
    .heldItem = ITEM_MAGNET,
    .moves = {MOVE_DISCHARGE, MOVE_AGILITY, MOVE_ELECTRO_BALL, MOVE_NATURES_MADNESS},
    },
};

static const struct TrainerMon sParty_Natn[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 200,
        .species = SPECIES_SALAMENCE,
        .nature = NATURE_JOLLY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .ability = ABILITY_INTIMIDATE,
        .heldItem = ITEM_SALAMENCITE,
        .friendship = MAX_FRIENDSHIP,
        .moves = {MOVE_RETURN, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_PRIMARINA,
    .nature = NATURE_MODEST,
    .ev = TRAINER_PARTY_EVS_MODEST(),
    .ability = ABILITY_LIQUID_VOICE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_FLIP_TURN, MOVE_ICY_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_TOXTRICITY_LOW_KEY,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PUNK_ROCK,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_WAVE, MOVE_NUZZLE, MOVE_VOLT_SWITCH}
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 200,
        .species = SPECIES_KINGAMBIT,
        .nature = NATURE_ADAMANT,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .ability = ABILITY_DEFIANT,
        .heldItem = ITEM_CHOICE_BAND,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_LOW_KICK},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GALLADE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SHARPNESS,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_CERULEDGE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_SHARPNESS,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_BITTER_BLADE, MOVE_SHADOW_CLAW, MOVE_WILL_O_WISP, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_MasterPoucine[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 200,
        .species = SPECIES_DRAGAPULT,
        .nature = NATURE_JOLLY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .ability = ABILITY_CLEAR_BODY,
        .heldItem = ITEM_DRAGON_FANG,
        .moves = {MOVE_DRAGON_DARTS, MOVE_U_TURN, MOVE_SHADOW_CLAW, MOVE_DRAGON_DANCE},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_SNEASLER,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_SHUCA_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_DRAIN_PUNCH, MOVE_DIRE_CLAW, MOVE_MACH_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_RAPIDASH_GALAR,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FIRE_LASH, MOVE_FLAME_CHARGE, MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE}
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 200,
        .species = SPECIES_MAMOSWINE,
        .nature = NATURE_ADAMANT,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .ability = ABILITY_THICK_FAT,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_STONE_EDGE},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_URSHIFU_SINGLE_STRIKE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_EMPOLEON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_EMPOLEONITE_O,
    .moves = {MOVE_SWORDS_DANCE, MOVE_AQUA_JET, MOVE_IRON_HEAD, MOVE_LIQUIDATION}
    }
};

static const struct TrainerMon sParty_OblivionWing[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 200,
        .species = SPECIES_GYARADOS,
        .nature = NATURE_JOLLY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .ability = ABILITY_INTIMIDATE,
        .heldItem = ITEM_MYSTIC_WATER,
        .moves = {MOVE_ICE_FANG, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_TWISTER},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GRENINJA,
    .nature = NATURE_TIMID,
    .ev = TRAINER_PARTY_EVS_TIMID(),
    .ability = ABILITY_PROTEAN,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_EXTRASENSORY, MOVE_WATER_PULSE}
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 200,
        .species = SPECIES_BLAZIKEN,
        .nature = NATURE_ADAMANT,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .ability = ABILITY_STRIKER,
        .heldItem = ITEM_EXPERT_BELT,
        .moves = {MOVE_TRIPLE_ARROWS, MOVE_BRAVE_BIRD, MOVE_BLAZE_KICK, MOVE_QUICK_ATTACK},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_ROARING_MOON,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .moves = {MOVE_NIGHT_SLASH, MOVE_DRAGON_CLAW, MOVE_ZEN_HEADBUTT, MOVE_HEADBUTT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_URSHIFU_SINGLE_STRIKE,
    .nature = NATURE_JOLLY,
    .ev = TRAINER_PARTY_EVS_JOLLY(),
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_DYNAMIC_PUNCH, MOVE_WICKED_BLOW, MOVE_IRON_HEAD, MOVE_DETECT}
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 200,
        .species = SPECIES_LUXRAY,
        .nature = NATURE_JOLLY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .ability = ABILITY_INTIMIDATE,
        .heldItem = ITEM_LUXRITE,
        .moves = {MOVE_CRUNCH, MOVE_ZING_ZAP, MOVE_THUNDER_FANG, MOVE_BABY_DOLL_EYES}
    },
};
