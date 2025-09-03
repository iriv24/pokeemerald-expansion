#include "nuzlocke_enforcement.h"
#include "gba/types.h"
#include "constants/moves.h"

#include "data/nuzlocke_enforcement_data.h"

bool32 NuEn_IsMoveComplexBanned(u32 move, u32 species, u32 item)
{
    if (move == MOVE_TOXIC || move == MOVE_LEECH_SEED)
    {
        if (sToxicLeechSeedAllowedMons[species])
            return FALSE;
        else if (gSpeciesInfo[species].evolutions != NULL && item != ITEM_EVIOLITE)
            return FALSE;
        else
            return TRUE;
    }
    return FALSE;
}

bool32 NuEn_IsMoveBanned(u32 move)
{
    if (sBannedMoves[move])
        return TRUE;
    return FALSE;
}

bool32 NuEn_IsMonDupe(u32 species)
{
    return FALSE;
}
