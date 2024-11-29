#include "global.h"
#include "main.h"
#include "hexorb.h"
#include "constants/item_effects.h"
#include "string_util.h"
#include "battle_pike.h"
#include "menu.h"
#include "constants/battle.h"
#include "constants/songs.h"
#include "sound.h"

static bool32 DoesTypeBlockStatus(u32 species, u32 typeIndex, u32 status)
{
    u32 type = gSpeciesInfo[species].types[typeIndex];
    switch (status)
    {
        case STATUS1_TOXIC_POISON:
            return (type == TYPE_STEEL || type == TYPE_POISON);
        case STATUS1_FREEZE:
        case STATUS1_FROSTBITE:
            return (type == TYPE_ICE);
        case STATUS1_PARALYSIS:
            if (B_PARALYZE_ELECTRIC < GEN_6)
                return FALSE;
            return (type == TYPE_ELECTRIC);
        case STATUS1_BURN:
            return (type == TYPE_FIRE);
        default:
            return FALSE;
    }
}

u32 TryInflictStatusFromHexorb(struct Pokemon *mon, u32 status)
{
    if (!GetMonData(mon,MON_DATA_SANITY_HAS_SPECIES))
        return HEXORB_RESULT_FAINTED_OR_NO_MON;

    if (!GetMonData(mon, MON_DATA_HP))
        return HEXORB_RESULT_FAINTED_OR_NO_MON;

    if (DoesAbilityPreventStatus(mon, status))
        return HEXORB_RESULT_ABILITY;

    if (DoesTypeBlockStatus(GetMonData(mon,MON_DATA_SPECIES), 0, status))
        return HEXORB_RESULT_TYPE_0;

    if (DoesTypeBlockStatus(GetMonData(mon,MON_DATA_SPECIES), 1, status))
        return HEXORB_RESULT_TYPE_1;

    SetMonData(mon, MON_DATA_STATUS, &status);
    return HEXORB_RESULT_SUCCESS;
}

u32 ConvertMenuPosToStatus(u32 pos)
{
    switch (pos)
    {
        case 0: return STATUS1_SLEEP;
        case 1: return STATUS1_TOXIC_POISON;
        case 2: return STATUS1_BURN;
#ifdef B_USE_FROSTBITE
        case 3: return STATUS1_FROSTBITE;
#else
        case 3: return STATUS1_FREEZE;
#endif
        default:
        case 4: return STATUS1_PARALYSIS;
    }
}

