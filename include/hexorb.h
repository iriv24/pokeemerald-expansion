#ifndef GUARD_HEXORB_H
#define GUARD_HEXORB_H

#include "constants/hexorb.h"
#include "task.h"

u32 TryInflictStatusFromHexorb(struct Pokemon *mon, u32 status);
u32 ConvertMenuPosToStatus(u32 pos);

#endif // GUARD_HEXORB_H
