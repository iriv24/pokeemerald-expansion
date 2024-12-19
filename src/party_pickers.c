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


// ADD MORE CUSTOM FUNCTION DEFINITIONS HERE!