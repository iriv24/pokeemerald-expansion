#include "global.h"
#include "battle.h"
#include "battle_pike.h"
#include "hexorb.h"
#include "main.h"
#include "menu.h"
#include "party_menu.h"
#include "sound.h"
#include "string_util.h"
#include "constants/battle.h"
#include "constants/item_effects.h"
#include "constants/songs.h"

static const void Hexorb_BufferBlockedStatusMessage(u32 status)
{
    switch (status)
    {
        case STATUS1_SLEEP:
            StringCopy(gStringVar3,COMPOUND_STRING("asleep"));
            break;
        case STATUS1_TOXIC_POISON:
            StringCopy(gStringVar3,COMPOUND_STRING("poisoned"));
            break;
        case STATUS1_BURN:
            StringCopy(gStringVar3,COMPOUND_STRING("burned"));
            break;
        case STATUS1_FROSTBITE:
            StringCopy(gStringVar3,COMPOUND_STRING("frostbit"));
            break;
        case STATUS1_FREEZE:
            StringCopy(gStringVar3,COMPOUND_STRING("frozen"));
            break;
        case STATUS1_PARALYSIS:
            StringCopy(gStringVar3,COMPOUND_STRING("paralyzed"));
            break;
        default:
            StringCopy(gStringVar3,COMPOUND_STRING("new status!"));
            break;
    }
}
static const void Hexorb_BufferStatusFailureText(u32 status)
{
    switch (status)
    {
        case STATUS1_SLEEP:
            StringCopy(gStringVar3,COMPOUND_STRING("falling asleep"));
            break;
        case STATUS1_TOXIC_POISON:
            StringCopy(gStringVar3,COMPOUND_STRING("being poisoned"));
            break;
        case STATUS1_BURN:
            StringCopy(gStringVar3,COMPOUND_STRING("being burned"));
            break;
        case STATUS1_FROSTBITE:
            StringCopy(gStringVar3,COMPOUND_STRING("getting frostbite"));
            break;
        case STATUS1_FREEZE:
            StringCopy(gStringVar3,COMPOUND_STRING("being frozen"));
            break;
        case STATUS1_PARALYSIS:
            StringCopy(gStringVar3,COMPOUND_STRING("being paralyzed"));
            break;
        default:
            StringCopy(gStringVar3,COMPOUND_STRING("new status!"));
            break;
    }
}

static void Hexorb_BufferStatusAfflictionText(u32 status)
{
    switch (status)
    {
        case STATUS1_SLEEP:
            StringCopy(gStringVar2, COMPOUND_STRING("fell asleep"));
            break;
        case STATUS1_TOXIC_POISON:
            StringCopy(gStringVar2, COMPOUND_STRING("was poisoned"));
            break;
        case STATUS1_BURN:
            StringCopy(gStringVar2, COMPOUND_STRING("was burned"));
            break;
        case STATUS1_FROSTBITE:
            StringCopy(gStringVar2, COMPOUND_STRING("got frostbite"));
            break;
        case STATUS1_FREEZE:
            StringCopy(gStringVar2, COMPOUND_STRING("was frozen solid"));
            break;
        case STATUS1_PARALYSIS:
            StringCopy(gStringVar2, COMPOUND_STRING("is paralyzed"));
            break;
        default:
            StringCopy(gStringVar2, COMPOUND_STRING("new status!"));
    }
}

static bool32 Hexorb_DoesTypeBlockStatus(u32 species, u32 typeIndex, u32 status)
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
            return (B_PARALYZE_ELECTRIC >= GEN_6 && type == TYPE_ELECTRIC);
        case STATUS1_BURN:
            return (type == TYPE_FIRE);
        default:
            return FALSE;
    }
}

static bool32 Hexorb_ShouldExistingStatusBlock(struct Pokemon *mon)
{
    return HEXORB_BLOCK_STATUS && (GetMonData(mon, MON_DATA_STATUS) & STATUS1_ANY);
}

enum HexorbResultCodes Hexorb_TryInflictStatus(struct Pokemon *mon, u32 status)
{
    u32 clearStatus;
    u32 species = GetMonData(mon,MON_DATA_SPECIES);

    if (Hexorb_ShouldExistingStatusBlock(mon))
        return HEXORB_RESULT_FAIL_HAS_STATUS;

    if (DoesAbilityPreventStatus(mon, status))
        return HEXORB_RESULT_FAIL_ABILITY;

    if (Hexorb_DoesTypeBlockStatus(species, 0, status))
        return HEXORB_RESULT_FAIL_TYPE_0;

    if (Hexorb_DoesTypeBlockStatus(species, 1, status))
        return HEXORB_RESULT_FAIL_TYPE_1;

    clearStatus = STATUS1_NONE;
    SetMonData(mon, MON_DATA_STATUS, &clearStatus);
    SetMonData(mon, MON_DATA_STATUS, &status);

    return HEXORB_RESULT_SUCCESS;
}

u32 Hexorb_ConvertMenuPosToStatus(u32 pos)
{
    static const u32 statusMap[] = {
        STATUS1_SLEEP,
        STATUS1_TOXIC_POISON,
        STATUS1_BURN,
#if B_USE_FROSTBITE == TRUE
        STATUS1_FROSTBITE,
#else
        STATUS1_FREEZE,
#endif
        STATUS1_PARALYSIS
    };

    return statusMap[pos];
}

void Hexorb_ConstructSuccessMessage(struct Pokemon* mon, u32 status)
{
    GetMonNickname(mon, gStringVar1);
    Hexorb_BufferStatusAfflictionText(status);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1} {STR_VAR_2}!{PAUSE_UNTIL_PRESS}"));
}

void Hexorb_ConstructTypeFailureMessage(struct Pokemon *mon, u32 status, enum HexorbResultCodes result)
{
    u32 type = gSpeciesInfo[GetMonData(mon, MON_DATA_SPECIES)].types[result];
    GetMonNickname(mon, gStringVar1);
    StringCopy(gStringVar2, gTypesInfo[type].name);
    Hexorb_BufferStatusFailureText(status);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1}'s {STR_VAR_2}-type prevents it from\n{STR_VAR_3}!{PAUSE_UNTIL_PRESS}"));
}

void Hexorb_ConstructAbilityFailureMessage(struct Pokemon* mon, u32 status)
{
    u32 ability = GetAbilityBySpecies(GetMonData(mon, MON_DATA_SPECIES), GetMonData(mon, MON_DATA_ABILITY_NUM), FALSE);

    GetMonNickname(mon, gStringVar1);
    StringCopy(gStringVar2, gAbilitiesInfo[ability].name);
    Hexorb_BufferStatusFailureText(status);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1}'s {STR_VAR_2}\nprevents it from {STR_VAR_3}!{PAUSE_UNTIL_PRESS}"));
}

void Hexorb_ConstructStatusFailureMessage(struct Pokemon* mon)
{
    u32 status = GetMonData(mon, MON_DATA_STATUS);
    GetMonNickname(mon, gStringVar1);
    Hexorb_BufferBlockedStatusMessage(status);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1} is already {STR_VAR_3}!{PAUSE_UNTIL_PRESS}"));
}

void Task_UseHexorbFromField(u8 taskId)
{
    ItemUseCB_UseHexorb(taskId,NULL);
}

