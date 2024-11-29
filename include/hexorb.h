#ifndef GUARD_HEXORB_H
#define GUARD_HEXORB_H

#include "constants/hexorb.h"
#include "task.h"

void CursorCb_InflictSleep(u8);
void CursorCb_InflictPoison(u8);
void CursorCb_InflictBurn(u8);
void CursorCb_InflictFreeze(u8);
void CursorCb_InflictParlysis(u8);
u32 TryInflictStatusFromHexorb(struct Pokemon *mon, u32 status);
void TryHexorbAndPrintResult(u32 status, u8 taskId);

#endif // GUARD_HEXORB_H
