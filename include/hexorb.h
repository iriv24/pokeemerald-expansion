#ifndef GUARD_HEXORB_H
#define GUARD_HEXORB_H

#include "constants/hexorb.h"

#define HEXORB_BLOCK_STATUS       TRUE // When TRUE, a Pokémon that is afflicted by a non-volatile status decision cannot get a status condition from the Hexorb.

u32 Hexorb_TryInflictStatus(struct Pokemon *mon, u32 status);
u32 Hexorb_ConvertMenuPosToStatus(u32 pos);
void Hexorb_ConstructStatusFailureMessage(struct Pokemon* mon);
void Hexorb_ConstructSuccessMessage(struct Pokemon*, u32);
void Hexorb_ConstructAbilityFailureMessage(struct Pokemon*, u32);
void Hexorb_ConstructTypeFailureMessage(struct Pokemon*, u32, u32);
void Task_UseHexorbFromField(u8 taskId);

#endif // GUARD_HEXORB_H
