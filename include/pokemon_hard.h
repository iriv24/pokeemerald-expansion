#ifndef GUARD_POKEMON_HARD_H
#define GUARD_POKEMON_HARD_H

#include "constants/pokemon.h"   // NUM_ABILITY_SLOTS
#include "constants/species.h"   // NUM_SPECIES
#include "pokemon.h"             // struct LevelUpMove, struct Evolution

struct SpeciesInfoHard
{
    u16 abilities[NUM_ABILITY_SLOTS];
    const struct LevelUpMove *levelUpLearnset;
    const u16 *teachableLearnset;
    const u16 *eggMoveLearnset;
    const struct Evolution *evolutions;
};

extern const struct SpeciesInfoHard *const gSpeciesInfoHardTable[NUM_SPECIES];

u16 GetSpeciesAbility(u16 species, u8 slot);

#endif // GUARD_POKEMON_HARD_H