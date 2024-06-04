#include "global.h"
#include "battle_pike.h"
#include "battle_pyramid.h"
#include "battle_pyramid_bag.h"
#include "bg.h"
#include "debug.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_object_lock.h"
#include "event_scripts.h"
#include "fieldmap.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "field_specials.h"
#include "field_weather.h"
#include "field_screen_effect.h"
#include "frontier_pass.h"
#include "frontier_util.h"
#include "gpu_regs.h"
#include "international_string_util.h"
#include "item_menu.h"
#include "l_menu.h"
#include "link.h"
#include "load_save.h"
#include "main.h"
#include "menu.h"
#include "new_game.h"
#include "option_menu.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "pokedex.h"
#include "pokenav.h"
#include "safari_zone.h"
#include "save.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "strings.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "trainer_card.h"
#include "window.h"
#include "union_room.h"
#include "dexnav.h"
#include "wild_encounter.h"
#include "constants/battle_frontier.h"
#include "constants/rgb.h"
#include "constants/songs.h"

#if (DECAP_ENABLED) && (DECAP_MIRRORING) && !(DECAP_L_MENU)
#define AddTextPrinterParameterized (AddTextPrinterFixedCaseParameterized)
#endif

// Menu actions
enum
{
    MENU_ACTION_PC,
    MENU_ACTION_DEXNAV,
    MENU_ACTION_EXIT,
};

// IWRAM common
bool8 (*gMenuCallback2)(void);

// EWRAM
EWRAM_DATA static u8 sLMenuCursorPos = 0;
EWRAM_DATA static u8 sNumLMenuActions = 0;
EWRAM_DATA static u8 sCurrentLMenuActions[9] = {0};
EWRAM_DATA static s8 sInitLMenuData[2] = {0};

// Menu action callbacks
static bool8 LMenuPCCallback(void);
static bool8 LMenuPlayerNameCallback(void);
static bool8 LMenuExitCallback(void);
static bool8 LMenuDexNavCallback(void);

// Menu callbacks
static bool8 HandleLMenuInput(void);

// Task callbacks
static void LMenuTask(u8 taskId);
static bool8 FieldCB_ReturnToFieldLMenu(void);

static const struct MenuAction sLMenuItems[] =
{
    [MENU_ACTION_PC]              = {gText_MenuPC, {.u8_void = LMenuPCCallback}},
    [MENU_ACTION_DEXNAV]          = {gText_MenuDexNav,  {.u8_void = LMenuDexNavCallback}},
    [MENU_ACTION_EXIT]            = {gText_MenuExit,    {.u8_void = LMenuExitCallback}},
};

// Local functions
static void BuildLMenuActions(void);
static void AddLMenuAction(u8 action);
static void BuildNormalLMenu(void);
static void BuildSafariZoneLMenu(void);
static void BuildLinkModeLMenu(void);
static void BuildUnionRoomLMenu(void);
static void BuildBattlePikeLMenu(void);
static void BuildBattlePyramidLMenu(void);
static void BuildMultiPartnerRoomLMenu(void);
static bool32 PrintLMenuActions(s8 *pIndex, u32 count);
static bool32 InitLMenuStep(void);
static void CreateLMenuTask(TaskFunc followupFunc);
static void HideLMenuWindow(void);


static void BuildLMenuActions(void)
{
    sNumLMenuActions = 0;

    if (IsOverworldLinkActive() == TRUE)
    {
        BuildLinkModeLMenu();
    }
    else if (InUnionRoom() == TRUE)
    {
        BuildUnionRoomLMenu();
    }
    else if (GetSafariZoneFlag() == TRUE)
    {
        BuildSafariZoneLMenu();
    }
    else if (InBattlePike())
    {
        BuildBattlePikeLMenu();
    }
    else if (InBattlePyramid())
    {
        BuildBattlePyramidLMenu();
    }
    else if (InMultiPartnerRoom())
    {
        BuildMultiPartnerRoomLMenu();
    }
    else
    {
        BuildNormalLMenu();
    }
}

static void AddLMenuAction(u8 action)
{
    AppendToLList(sCurrentLMenuActions, &sNumLMenuActions, action);
}

static void BuildNormalLMenu(void)
{
    if(FlagGet(FLAG_SYS_POKEMON_GET) && !FlagGet(FLAG_ENTERED_ELITE_4))
    {
        AddLMenuAction(MENU_ACTION_PC);
    }
    if (FlagGet(FLAG_SYS_DEXNAV_GET))
    {
        AddLMenuAction(MENU_ACTION_DEXNAV);
    }
    AddLMenuAction(MENU_ACTION_EXIT);
}

static void BuildSafariZoneLMenu(void)
{
    if (FlagGet(FLAG_SYS_DEXNAV_GET))
    {
        AddLMenuAction(MENU_ACTION_DEXNAV);
    }
    AddLMenuAction(MENU_ACTION_EXIT);
}

static void BuildLinkModeLMenu(void)
{
    if(FlagGet(FLAG_SYS_POKEMON_GET))
    {
        AddLMenuAction(MENU_ACTION_PC);
    }
    if (FlagGet(FLAG_SYS_DEXNAV_GET))
    {
        AddLMenuAction(MENU_ACTION_DEXNAV);
    }
    AddLMenuAction(MENU_ACTION_EXIT);
}

static void BuildUnionRoomLMenu(void)
{
    if(FlagGet(FLAG_SYS_POKEMON_GET))
    {
        AddLMenuAction(MENU_ACTION_PC);
    }
    if (FlagGet(FLAG_SYS_DEXNAV_GET))
    {
        AddLMenuAction(MENU_ACTION_DEXNAV);
    }
    AddLMenuAction(MENU_ACTION_EXIT);
}

static void BuildBattlePikeLMenu(void)
{
    if (FlagGet(FLAG_SYS_DEXNAV_GET))
    {
        AddLMenuAction(MENU_ACTION_DEXNAV);
    }
    AddLMenuAction(MENU_ACTION_EXIT);
}

static void BuildBattlePyramidLMenu(void)
{
    if (FlagGet(FLAG_SYS_DEXNAV_GET))
    {
        AddLMenuAction(MENU_ACTION_DEXNAV);
    }
    AddLMenuAction(MENU_ACTION_EXIT);
}

static void BuildMultiPartnerRoomLMenu(void)
{
    if (FlagGet(FLAG_SYS_DEXNAV_GET))
    {
        AddLMenuAction(MENU_ACTION_DEXNAV);
    }
    AddLMenuAction(MENU_ACTION_EXIT);
}


static bool32 PrintLMenuActions(s8 *pIndex, u32 count)
{
    s8 index = *pIndex;

    do
    {
        if (sLMenuItems[sCurrentLMenuActions[index]].func.u8_void == LMenuPlayerNameCallback)
        {
            PrintPlayerNameOnWindow(GetLMenuWindowId(), sLMenuItems[sCurrentLMenuActions[index]].text, 8, (index << 4) + 9);
        }
        else
        {
            StringExpandPlaceholders(gStringVar4, sLMenuItems[sCurrentLMenuActions[index]].text);
            AddTextPrinterParameterized(GetLMenuWindowId(), FONT_NORMAL, gStringVar4, 8, (index << 4) + 9, TEXT_SKIP_DRAW, NULL);
        }

        index++;
        if (index >= sNumLMenuActions)
        {
            *pIndex = index;
            return TRUE;
        }

        count--;
    }
    while (count != 0);

    *pIndex = index;
    return FALSE;
}

static bool32 InitLMenuStep(void)
{
    s8 state = sInitLMenuData[0];

    switch (state)
    {
    case 0:
        sInitLMenuData[0]++;
        break;
    case 1:
        BuildLMenuActions();
        sInitLMenuData[0]++;
        break;
    case 2:
        LoadMessageBoxAndBorderGfx();
        DrawStdWindowFrame(AddLMenuWindow(sNumLMenuActions), FALSE);
        sInitLMenuData[1] = 0;
        sInitLMenuData[0]++;
        break;
    case 3:
        sInitLMenuData[0]++;
        break;
    case 4:
        if (PrintLMenuActions(&sInitLMenuData[1], 2))
            sInitLMenuData[0]++;
        break;
    case 5:
        sLMenuCursorPos = InitMenuNormal(GetLMenuWindowId(), FONT_NORMAL, 0, 9, 16, sNumLMenuActions, sLMenuCursorPos);
        CopyWindowToVram(GetLMenuWindowId(), COPYWIN_MAP);
        return TRUE;
    }

    return FALSE;
}

static void LMenuTask(u8 taskId)
{
    if (InitLMenuStep() == TRUE)
        SwitchTaskToFollowupFunc(taskId);
}

static void CreateLMenuTask(TaskFunc followupFunc)
{
    u8 taskId;

    sInitLMenuData[0] = 0;
    sInitLMenuData[1] = 0;
    taskId = CreateTask(LMenuTask, 0x50);
    SetTaskFuncWithFollowupFunc(taskId, LMenuTask, followupFunc);
}

static bool8 FieldCB_ReturnToFieldLMenu(void)
{
    if (InitLMenuStep() == FALSE)
    {
        return FALSE;
    }

    ReturnToFieldOpenLMenu();
    return TRUE;
}

void ShowReturnToFieldLMenu(void)
{
    sInitLMenuData[0] = 0;
    sInitLMenuData[1] = 0;
    gFieldCallback2 = FieldCB_ReturnToFieldLMenu;
}

void Task_ShowLMenu(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch(task->data[0])
    {
    case 0:
        if (InUnionRoom() == TRUE)
            SetUsingUnionRoomLMenu();

        gMenuCallback2 = HandleLMenuInput;
        task->data[0]++;
        break;
    case 1:
        if (gMenuCallback2() == TRUE)
            DestroyTask(taskId);
        break;
    }
}

void ShowLMenu(void)
{
    if (!IsOverworldLinkActive())
    {
        FreezeObjectEvents();
        PlayerFreeze();
        StopPlayerAvatar();
    }
    CreateLMenuTask(Task_ShowLMenu);
    LockPlayerFieldControls();
}

static bool8 HandleLMenuInput(void)
{
    if (JOY_NEW(DPAD_UP))
    {
        PlaySE(SE_SELECT);
        sLMenuCursorPos = Menu_MoveCursor(-1);
    }

    if (JOY_NEW(DPAD_DOWN))
    {
        PlaySE(SE_SELECT);
        sLMenuCursorPos = Menu_MoveCursor(1);
    }

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        
        gMenuCallback2 = sLMenuItems[sCurrentLMenuActions[sLMenuCursorPos]].func.u8_void;

        if (gMenuCallback2 != LMenuExitCallback)
        {
           FadeScreen(FADE_TO_BLACK, 0);
        }

        return FALSE;
    }

    if (JOY_NEW(L_BUTTON | B_BUTTON))
    {
        HideLMenu();
        return TRUE;
    }

    return FALSE;
}



static bool8 LMenuPCCallback(void)
{
    if (!gPaletteFade.active)
    {
        PlayRainStoppingSoundEffect();
		EnterPokeStorage(2);
        return TRUE;
    }

    return FALSE;
}


static bool8 LMenuPlayerNameCallback(void)
{
    if (!gPaletteFade.active)
    {
        PlayRainStoppingSoundEffect();
        CleanupOverworldWindowsAndTilemaps();

        if (IsOverworldLinkActive() || InUnionRoom())
            ShowPlayerTrainerCard(CB2_ReturnToFieldWithOpenMenu); // Display trainer card
        else if (FlagGet(FLAG_SYS_FRONTIER_PASS))
            ShowFrontierPass(CB2_ReturnToFieldWithOpenMenu); // Display frontier pass
        else
            ShowPlayerTrainerCard(CB2_ReturnToFieldWithOpenMenu); // Display trainer card

        return TRUE;
    }

    return FALSE;
}

static bool8 LMenuExitCallback(void)
{
    HideLMenu(); // Hide start menu

    return TRUE;
}

static void HideLMenuWindow(void)
{
    ClearStdWindowAndFrame(GetLMenuWindowId(), TRUE);
    RemoveLMenuWindow();
    ScriptUnfreezeObjectEvents();
    UnlockPlayerFieldControls();
}

void HideLMenu(void)
{
    PlaySE(SE_SELECT);
    HideLMenuWindow();
}

void AppendToLList(u8 *list, u8 *pos, u8 newEntry)
{
    list[*pos] = newEntry;
    (*pos)++;
}

static bool8 LMenuDexNavCallback(void)
{
    CreateTask(Task_OpenDexNavFromLMenu, 0);
    return TRUE;
}
