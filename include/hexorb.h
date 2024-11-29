#ifndef GUARD_HEXORB_H
#define GUARD_HEXORB_H

#include "constants/hexorb.h"

u32 Hexorb_TryInflictStatus(struct Pokemon *mon, u32 status);
u32 Hexorb_ConvertMenuPosToStatus(u32 pos);
void Hexorb_ConstructSuccessMessage(struct Pokemon*, u32);
void Hexorb_ConstructAbilityFailureMessage(struct Pokemon*, u32);
void Hexorb_ConstructTypeFailureMessage(struct Pokemon*, u32, u32);

#endif // GUARD_HEXORB_H
