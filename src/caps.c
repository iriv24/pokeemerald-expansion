#include "global.h"
#include "battle.h"
#include "event_data.h"
#include "caps.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"


u32 GetCurrentLevelCap(void)
{
    static const u32 sLevelCapFlagMap[][2] =
    {
        {FLAG_BADGE01_GET, 15},
        {FLAG_DEFEATED_RIVAL_RUSTBORO, 20},
        {FLAG_BADGE02_GET, 25},
        {FLAG_HIDE_ROUTE_110_TEAM_AQUA, 30},
        {FLAG_RIVAL_110,   32},
        {FLAG_BADGE03_GET, 34},
        {FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, 44},
        {FLAG_BADGE04_GET, 47},
        {FLAG_BEAT_TRICK_HOUSE_3, 56},
        {FLAG_BADGE05_GET, 59},
        {FLAG_RECEIVED_HM_FLY, 64},
        {FLAG_BADGE06_GET, 68},
        {FLAG_DAWN_LILYCOVE, 71},
        {FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, 74},
        {FLAG_BADGE07_GET, 76},
        {FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, 80},
        {FLAG_BADGE08_GET, 82},
        {FLAG_DEFEATED_WALLY_VICTORY_ROAD, 84},
        {FLAG_IS_CHAMPION, 85},
    };

    u32 i;

    if (B_LEVEL_CAP_TYPE == LEVEL_CAP_FLAG_LIST)
    {
        for (i = 0; i < ARRAY_COUNT(sLevelCapFlagMap); i++)
        {
            if (!FlagGet(sLevelCapFlagMap[i][0]))
                return sLevelCapFlagMap[i][1];
        }
    }
    else if (B_LEVEL_CAP_TYPE == LEVEL_CAP_VARIABLE)
    {
        return VarGet(B_LEVEL_CAP_VARIABLE);
    }

    return MAX_LEVEL;
}

u32 GetSoftLevelCapExpValue(u32 level, u32 expValue)
{
    static const u32 sExpScalingDown[5] = { 4, 8, 16, 32, 64 };
    static const u32 sExpScalingUp[5]   = { 16, 8, 4, 2, 1 };

    u32 levelDifference;
    u32 currentLevelCap = GetCurrentLevelCap();

    if (B_EXP_CAP_TYPE == EXP_CAP_NONE)
        return expValue;

    if (level < currentLevelCap)
    {
        if (B_LEVEL_CAP_EXP_UP)
        {
            levelDifference = currentLevelCap - level;
            if (levelDifference > ARRAY_COUNT(sExpScalingUp))
                return expValue + (expValue / sExpScalingUp[ARRAY_COUNT(sExpScalingUp) - 1]);
            else
                return expValue + (expValue / sExpScalingUp[levelDifference]);
        }
        else
        {
            return expValue;
        }
    }
    else if (B_EXP_CAP_TYPE == EXP_CAP_HARD)
    {
        return 0;
    }
    else if (B_EXP_CAP_TYPE == EXP_CAP_SOFT)
    {
        levelDifference = level - currentLevelCap;
        if (levelDifference > ARRAY_COUNT(sExpScalingDown))
            return expValue / sExpScalingDown[ARRAY_COUNT(sExpScalingDown) - 1];
        else
            return expValue / sExpScalingDown[levelDifference];
    }
    else
    {
        return expValue;
    }
}

u32 GetCurrentEVCap(void)
{

    static const u16 sEvCapFlagMap[][2] = {
        // Define EV caps for each milestone
        {FLAG_BADGE01_GET, 30},
        {FLAG_BADGE02_GET, 90},
        {FLAG_BADGE03_GET, 150},
        {FLAG_BADGE04_GET, 210},
        {FLAG_BADGE05_GET, 270},
        {FLAG_BADGE06_GET, 330},
        {FLAG_BADGE07_GET, 390},
        {FLAG_BADGE08_GET, 450},
        {FLAG_IS_CHAMPION, MAX_TOTAL_EVS},
    };

    if (B_EV_CAP_TYPE == EV_CAP_FLAG_LIST)
    {
        for (u32 evCap = 0; evCap < ARRAY_COUNT(sEvCapFlagMap); evCap++)
        {
            if (!FlagGet(sEvCapFlagMap[evCap][0]))
                return sEvCapFlagMap[evCap][1];
        }
    }
    else if (B_EV_CAP_TYPE == EV_CAP_VARIABLE)
    {
        return VarGet(B_EV_CAP_VARIABLE);
    }
    else if (B_EV_CAP_TYPE == EV_CAP_NO_GAIN)
    {
        return 0;
    }

    return MAX_TOTAL_EVS;
}

void LevelBoxesToCap(void)
{
    u32 currentCap = GetCurrentLevelCap();
    u32 species = 0;
    u32 markings = 0;

    for (u32 partyIndex = 0; partyIndex < PARTY_SIZE; partyIndex++)
    {
        struct Pokemon *mon = &gPlayerParty[partyIndex];
        species = GetMonData(mon, MON_DATA_SPECIES, NULL);
        if (species != SPECIES_NONE && species != SPECIES_EGG)
        {
            u32 markings = GetMonData(mon, MON_DATA_MARKINGS);
            if (markings == 0)
            {
                SetMonData(&gPlayerParty[partyIndex], MON_DATA_LEVEL, &currentCap);
                SetMonData(&gPlayerParty[partyIndex], MON_DATA_EXP, &gExperienceTables[gSpeciesInfo[species].growthRate][currentCap]);
                CalculateMonStats(&gPlayerParty[partyIndex]);
            }
        }
    }
    
    for (u32 boxId = 0; boxId < TOTAL_BOXES_COUNT; boxId++)
    {
        for (u32 boxPosition = 0; boxPosition < IN_BOX_COUNT; boxPosition++)
        {
            struct BoxPokemon *boxMon = &gPokemonStoragePtr->boxes[boxId][boxPosition];
            species = GetBoxMonData(boxMon, MON_DATA_SPECIES);
            if (species != SPECIES_NONE && species != SPECIES_EGG)
            {
                markings = GetBoxMonData(boxMon, MON_DATA_MARKINGS);
                if (markings == 0)
                    SetBoxMonData(boxMon, MON_DATA_EXP, &gExperienceTables[gSpeciesInfo[species].growthRate][currentCap]);
            }
        }
    }
}
