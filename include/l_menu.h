#ifndef GUARD_L_MENU_H
#define GUARD_L_MENU_H

extern bool8 (*gMenuCallback2)(void);

void ShowReturnToFieldLMenu(void);
void Task_ShowLMenu(u8 taskId);
void ShowLMenu(void);
void HideLMenu(void);
void HideLMenuAutoRun(void);
void HideLMenuFollowers(void);
void HideLMenuTimeChanger(void);
void HideLMenuInfiniteRepel(void);
void HideLMenuPokeVial(void);
void HideLMenuPokeVial2(void);
void HideLMenuNoWildMons(void);
void AppendToLList(u8 *list, u8 *pos, u8 newEntry);

#endif // GUARD_L_MENU_H
