#ifndef GUARD_CONFIG_RANDOMIZER_H
#define GUARD_CONFIG_RANDOMIZER_H
#include "item.h"

// Global control. If FALSE, no randomizer functionality will be enabled.
// If this is TRUE, that doesn't necessarily mean that a particular part of the randomizer
// will be enabled.
#define RANDOMIZER_AVAILABLE                   TRUE

// If TRUE, the trainer ID (including secret ID) will be the randomizer seed.
#define RANDOMIZER_SEED_IS_TRAINER_ID          TRUE

#if RANDOMIZER_AVAILABLE == TRUE

// If TRUE, dynamically generated randomization tables stored in EWRAM are used.
// This consumes 6 bytes for each species present.
#define RANDOMIZER_DYNAMIC_SPECIES    TRUE

#if RANDOMIZER_DYNAMIC_SPECIES == TRUE

// If the longest evolutionary chain (excluding babies) is longer than this,
// the dynamic evolutionary stage randomization table will be generated
// incorrectly.
#define RANDOMIZER_MAX_EVO_STAGES   5

#endif // RANDOMIZER_DYNAMIC_SPECIES

#define RANDOMIZER_MAX_TM           ITEM_TM50

// Vars and features

// These features allow you to force enable or disable individual randomization
// features.
// If undefined, the feature will be enabled if one of the flags below is set.
// If defined and set to TRUE, the feature will always be enabled.
// If defined and set to FALSE, the feature will always be disabled.
//#define FORCE_RANDOMIZE_WILD_MON      TRUE
#define FORCE_RANDOMIZE_FIELD_ITEMS   FALSE
//#define FORCE_RANDOMIZE_TRAINER_MON   TRUE
//#define FORCE_RANDOMIZE_FIXED_MON     TRUE
//#define FORCE_RANDOMIZE_STARTER_AND_GIFT_MON      TRUE
//#define FORCE_RANDOMIZE_EGG_MON      TRUE
//#define FORCE_RANDOMIZE_ABILITIES     TRUE
//#define FORCE_RANDOMIZE_LEARNSETS     TRUE

// These flags control whether a particular randomization feature is active.
// They are ignored and disabled if the flags above are set.
#ifndef FORCE_RANDOMIZE_WILD_MON
#define RANDOMIZER_FLAG_WILD_MON            FLAG_RANDOMIZER_ENABLED
#endif

#ifndef FORCE_RANDOMIZE_FIELD_ITEMS
#define RANDOMIZER_FLAG_FIELD_ITEMS         FALSE
#endif

#ifndef FORCE_RANDOMIZE_TRAINER_MON
#define RANDOMIZER_FLAG_TRAINER_MON         FLAG_RANDOMIZER_ENABLED
#endif

#ifndef FORCE_RANDOMIZE_FIXED_MON
#define RANDOMIZER_FLAG_FIXED_MON           FLAG_RANDOMIZER_ENABLED
#endif

#ifndef FORCE_RANDOMIZE_STARTER_AND_GIFT_MON
#define RANDOMIZER_FLAG_STARTER_AND_GIFT_MON            FLAG_RANDOMIZER_ENABLED
#endif

#ifndef FORCE_RANDOMIZE_EGG_MON
#define RANDOMIZER_FLAG_EGG_MON            FLAG_RANDOMIZER_ENABLED
#endif

#ifndef FORCE_RANDOMIZE_ABILITIES
#define RANDOMIZER_FLAG_ABILITIES           FLAG_RANDOM_ABILITIES_ENABLED
#endif

#ifndef FORCE_RANDOMIZE_LEARNSETS
#define RANDOMIZER_FLAG_LEARNSETS           FLAG_RANDOM_LEARNSETS_ENABLED
#endif

#define RANDOMIZER_VAR_SPECIES_MODE         VAR_RANDOMIZER_MODE

#if RANDOMIZER_SEED_IS_TRAINER_ID == FALSE
#define RANDOMIZER_VAR_SEED_L               VAR_RANDOMIZER_SEED_L
#define RANDOMIZER_VAR_SEED_H               VAR_RANDOMIZER_SEED_H
#endif

#define RANDOMIZER_MAX_MON  (SPECIES_DECIDUEYE_HISUI-1)
#define RANDOMIZER_SPECIES_COUNT (RANDOMIZER_MAX_MON+1)

enum RandomizerFeature
{
    // Wild encounter randomization.
    RANDOMIZE_WILD_MON,
    // Trainer party randomization.
    RANDOMIZE_TRAINER_MON,
    // Item ball and hidden item randomization.
    RANDOMIZE_FIELD_ITEMS,
    // Randomization of species base stats. Not yet implemented.
    RANDOMIZE_BASE_STATS,
    // Randomization of species types. Not yet implemented.
    RANDOMIZE_MON_TYPES,
    // Randomization of species learnset. Not yet implemented.
    RANDOMIZE_LEARNSET,
    // Randomization of fixed encounters.
    RANDOMIZE_FIXED_MON,
    // Randomization of starter Pokémon species.
    RANDOMIZE_STARTERS_AND_GIFTS,
    // Randomization of given egg Pokémon species.
    RANDOMIZE_EGG_MON,
    // Randomization of Pokémon abilities.
    RANDOMIZE_ABILITIES,
};

enum RandomizerReason
{
    RANDOMIZER_REASON_WILD_ENCOUNTER,
    RANDOMIZER_REASON_FIXED_ENCOUNTER,
    RANDOMIZER_REASON_TRAINER_PARTY,
    RANDOMIZER_REASON_BASE_STATS,
    RANDOMIZER_REASON_SPECIES_TYPE,
    RANDOMIZER_REASON_LEARNSET,
    RANDOMIZER_REASON_FIELD_ITEM,
    RANDOMIZER_REASON_STARTER_AND_GIFT,
    RANDOMIZER_REASON_EGG,
    RANDOMIZER_REASON_ABILITIES,
};

enum RandomizerOption {
    // Controls how a species is randomized.
    RANDOMIZER_OPTION_SPECIES_MODE,
};

enum RandomizerSpeciesMode {
    // Any valid species can be randomized to any other valid species.
    MON_RANDOM,
    MON_RANDOM_LEGEND_AWARE,
    MON_RANDOM_BST,
    MON_EVOLUTION,
    // Other modes here.

    // A dummy mode to end the list.
    MAX_MON_MODE
};

#endif // RANDOMIZER_AVAILABLE

#endif // GUARD_CONFIG_RANDOMIZER_H