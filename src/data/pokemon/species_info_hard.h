#ifndef GUARD_DATA_POKEMON_SPECIES_INFO_HARD_H
#define GUARD_DATA_POKEMON_SPECIES_INFO_HARD_H

// Compound-literal helper so hard entries can be written inline
// without naming each struct. Mirrors the EVOLUTION(...) pattern.
#define HARD_MODE(...) (&(const struct SpeciesInfoHard){ __VA_ARGS__ })

const struct SpeciesInfoHard *const gSpeciesInfoHardTable[NUM_SPECIES] =
{
    #include "species_info/gen_1_families_hard.h"
    #include "species_info/gen_2_families_hard.h"
    #include "species_info/gen_3_families_hard.h"
    #include "species_info/gen_4_families_hard.h"
    #include "species_info/gen_5_families_hard.h"
    #include "species_info/gen_6_families_hard.h"
    #include "species_info/gen_7_families_hard.h"
    #include "species_info/gen_8_families_hard.h"
    #include "species_info/gen_9_families_hard.h"
};

#endif // GUARD_DATA_POKEMON_SPECIES_INFO_HARD_H