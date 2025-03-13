#ifndef GUARD_NUZLOCKE_ENFORCEMENT
#define GUARD_NUZLOCKE_ENFORCEMENT

#include "gba/types.h"
#include "global.h"
#include "constants/moves.h"

bool32 NuEn_IsMoveBanned(u32 move, u32 species, u32 item);
bool32 NuEn_IsMonDupe(u32 species);

#endif
