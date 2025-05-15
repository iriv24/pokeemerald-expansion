#include "global.h"
#include "data.h"
#include "event_data.h"
#include "starter_choose.h"


// This enum is not really necessary, i am just including it to help visualize what the return values
// of the example function mean.
enum RivalParty {
    PARTY_RIVAL_HAS_TREECKO,
    PARTY_RIVAL_HAS_TORCHIC,
    PARTY_RIVAL_HAS_MUDKIP,
};

// This is an example function that could be used to consolidate 
// a given rival battle (say, May Route 103 for example) into one trainer
u32 RivalPartyPicker(const struct Trainer *trainer)
{
    u16 playerStarter = GetStarterPokemon(VarGet(VAR_STARTER_MON));

    // if the player chose mudkip as their starter, return the index of the party
    // that contains treecko for the rival
    // important to note, YOU have to make sure the return value of your custom function matches the order that you define the parties
    // see the notes next to the return values
    if(playerStarter == SPECIES_MUDKIP)
        return PARTY_RIVAL_HAS_TREECKO; // PARTY_RIVAL_HAS_TREECKO == 0, and 0 corresponds to the normal party of the trainer

    else if(playerStarter == SPECIES_TREECKO)
        return PARTY_RIVAL_HAS_TORCHIC; // PARTY_RIVAL_HAS_TORCHIC == 1, and 1 corresponds to the first additionalParty of the trainer

    else
        return PARTY_RIVAL_HAS_MUDKIP; // PARTY_RIVAL_HAS_MUDKIP == 2, and 2 corresponds to the 2nd additionalParty of the trainer
}


enum HotHouseParties {
    BADGE_2_PARTY,
    BADGE_3_PARTY,
    BADGE_4_PARTY,
    BADGE_5_PARTY,
    BADGE_6_PARTY,
    BADGE_7_PARTY,
};


u32 HotHousePartyPicker(const struct Trainer *trainer)
{
    u16 hotHouseState = VarGet(VAR_HOT_HOUSE_STATE);
    switch (hotHouseState)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        return BADGE_2_PARTY;
    case 5:
    case 6:
    case 7:
    case 8:
        return BADGE_3_PARTY;
    case 9:
    case 10:
    case 11:
    case 12:
        return BADGE_4_PARTY;
    case 13:
    case 14:
        return BADGE_5_PARTY;
    case 15:
        return BADGE_6_PARTY;
    case 16:
        return BADGE_7_PARTY;
    }
    return BADGE_2_PARTY;
}


// ADD MORE CUSTOM FUNCTION DEFINITIONS HERE!