#ifndef GUARD_RANDOMIZER_H
#define GUARD_RANDOMIZER_H

#include "config/randomizer.h"
#if RANDOMIZER_AVAILABLE == TRUE


#include "global.h"
#include "random.h"
#include "script.h"
#include "wild_encounter.h"
//#include "constants/moves.h"

#define RANDOMIZER_STREAM 17
#define MY_STARTER_AND_GIFT_MON_COUNT 72
#define MY_EGG_MON_COUNT 56



extern const u16 gStarterAndGiftMonTable[];
extern const u16 gEggMonTable[];

// This object can be passed to IsRandomizationPossible to speed up queries.
struct RandomizerGroupSet {
    u16 species;
    u16 minGroup;
    u16 maxGroup;
};


u32 GetRandomizerSeed(void);
bool32 RandomizerFeatureEnabled(enum RandomizerFeature feature);

struct Sfc32State RandomizerRandSeed(enum RandomizerReason reason, u32 data1, u32 data2);

// Returns the next number from a randomizer seed.
static inline u16 RandomizerNext(struct Sfc32State* state)
{
    return _SFC32_Next_Stream(state, RANDOMIZER_STREAM) >> 16;
}
u32 RandomizerNextRange(struct Sfc32State* state, u32 range);

u16 RandomizerRand(enum RandomizerReason reason, u32 data1, u32 data2);
u16 RandomizerRandRange(enum RandomizerReason reason, u32 data1, u32 data2, u16 range);

static inline u8 RandomizeMonType(u16 species, u8 typeNum)
{
    return (u8)RandomizerRandRange(RANDOMIZER_REASON_SPECIES_TYPE, species, typeNum, NUMBER_OF_MON_TYPES);
}

u16 RandomizeFoundItem(u16 itemId, u8 mapNum, u8 mapGroup, u8 localId);
void FindItemRandomize_NativeCall(struct ScriptContext *ctx);
void FindHiddenItemRandomize_NativeCall(struct ScriptContext *ctx);

u16 RandomizeMon(enum RandomizerReason reason, enum RandomizerSpeciesMode mode, u32 seed, u16 species);
u16 RandomizeMonBaseForm(enum RandomizerReason reason, enum RandomizerSpeciesMode mode, u32 seed, u16 species);

u16 RandomizeWildEncounter(u16 species, u8 mapNum, u8 mapGroup, enum WildArea area, u8 slot);

// Returns TRUE if it is possible for the species tableSpecies to randomize into the species matchSpecies.
// This does not mean that it actually did, though.
bool32 IsRandomizationPossible(u16 tableSpecies, u16 matchSpecies);

u16 RandomizeTrainerMon(u16 trainerId, u8 slot, u8 totalMons, u16 species);

u16 RandomizeFixedEncounterMon(u16 species, u8 mapNum, u8 mapGroup, u8 localId);

// Given a starter slot and the list of original starters, returns the starter in that slot.
//u16 RandomizeStarter(u16 starterSlot, const u16* originalStarters);

// Given a slot and the list of my original gifts/starters, returns the random mon in that slot.
u16 RandomizeStarterAndGiftMon(u16 originalSlot, const u16* originalGiftMonsAndStarters);

// Given a slot and the list of my original egg mons, returns the random mon in that slot.
u16 RandomizeEggMon(u16 originalSlot, const u16* originalEggMons);

// Given a species and an abilityNum, returns a replacement for that ability.
u16 RandomizeAbility(u16 species, u8 abilityNum, u16 originalAbility);

static inline bool32 GroupSetsIntersect(struct RandomizerGroupSet* originalCache, struct RandomizerGroupSet* targetCache)
{
    return originalCache->maxGroup >= targetCache->minGroup
        && originalCache->minGroup <= targetCache->maxGroup;
}

#if RANDOMIZER_DYNAMIC_SPECIES == TRUE
// Once the randomizer is set up, in RAM mode, you can call this to preload the tables.
// This avoids a short hitch the first time the randomizer is used.
// It's also a good idea to call this function if the randomizer mode changes.
void PreloadRandomizationTables(void);
#endif

#endif // RANDOMIZER_AVAILABLE

#endif // GUARD_RANDOMIZER_H