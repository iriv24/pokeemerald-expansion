#ifndef GUARD_HEXORB_H
#define GUARD_HEXORB_H

#include "constants/hexorb.h"

#define HEXORB_BLOCK_STATUS       FALSE // When TRUE, a Pokémon that is afflicted by a non-volatile status decision cannot get a status condition from the Hexorb.

enum HexorbResultCodes Hexorb_TryInflictStatus(struct Pokemon*, u32);
u32 Hexorb_ConvertMenuPosToStatus(u32);
void Hexorb_ConstructStatusFailureMessage(struct Pokemon*);
void Hexorb_ConstructSuccessMessage(struct Pokemon*, u32);
void Hexorb_ConstructAbilityFailureMessage(struct Pokemon*, u32);
void Hexorb_ConstructTypeFailureMessage(struct Pokemon*, u32, enum HexorbResultCodes);
void Task_UseHexorbFromField(u8);

#endif // GUARD_HEXORB_H
