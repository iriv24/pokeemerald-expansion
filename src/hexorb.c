#include "global.h"
#include "constants/item_effects.h"
#include "string_util.h"
#include "hexorb.h"
#include "constants/battle.h"

void BufferChosenStatusName(u32 statusCured)
{
    switch (statusCured)
    {
        case ITEM_EFFECT_CURE_POISON:
            StringCopy(gStringVar2, COMPOUND_STRING("poisoned"));
        case ITEM_EFFECT_CURE_SLEEP:
            StringCopy(gStringVar2, COMPOUND_STRING("asleep"));
        case ITEM_EFFECT_CURE_BURN:
            StringCopy(gStringVar2, COMPOUND_STRING("burned"));
        case ITEM_EFFECT_CURE_FREEZE_FROSTBITE:
            if (statusCured & STATUS1_FREEZE)
                StringCopy(gStringVar2, COMPOUND_STRING("frozen"));
            if (statusCured & STATUS1_FROSTBITE)
                StringCopy(gStringVar2, COMPOUND_STRING("frostbit"));
        case ITEM_EFFECT_CURE_PARALYSIS:
            StringCopy(gStringVar2, COMPOUND_STRING("paralyzed"));
    }
}
