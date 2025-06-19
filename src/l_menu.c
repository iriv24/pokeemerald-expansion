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
#include "fake_rtc.h"
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
#include "item_use.h"
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
#include "rtc.h"
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
#include "ui_stat_editor.h"


// Menu actions
enum
{
    MENU_ACTION_POKEVIAL,
    MENU_ACTION_PC,
    MENU_ACTION_DEXNAV,
    MENU_ACTION_TIME_CHANGER,
    MENU_ACTION_INFINITE_REPEL_ON,
    MENU_ACTION_INFINITE_REPEL_OFF,
    MENU_ACTION_AUTO_RUN_ON,
    MENU_ACTION_AUTO_RUN_OFF,
    MENU_ACTION_FOLLOWERS_ON,
    MENU_ACTION_FOLLOWERS_OFF,
    MENU_ACTION_STAT_EDITOR,
    MENU_ACTION_POKEVIAL2,
};

// IWRAM common
bool8 (*gMenuCallback2)(void);

// EWRAM
EWRAM_DATA static u8 sLMenuCursorPos = 0;
EWRAM_DATA static u8 sStartClockWindowId2 = 0;
EWRAM_DATA static u8 sNumLMenuActions = 0;
EWRAM_DATA static u8 sCurrentLMenuActions[9] = {0};
EWRAM_DATA static s8 sInitLMenuData[2] = {0};

static bool8 ShouldCallbackFadeToBlack(void);

// Menu action callbacks
static bool8 LMenuPCCallback(void);
static bool8 LMenuPlayerNameCallback(void);
static bool8 LMenuDexNavCallback(void);
static bool8 LMenuAutoRunCallback(void);
static bool8 LMenuFollowersCallback(void);
static bool8 LMenuTimeChangerCallback(void);
static bool8 LMenuInfiniteRepelCallback(void);
static bool8 LMenuPokeVialCallback(void);
static bool8 StartMenuStatEditorCallback(void);
static bool8 LMenuPokeVial2Callback(void);

// Menu callbacks
static bool8 HandleLMenuInput(void);

// Task callbacks
static void LMenuTask(u8 taskId);
static bool8 FieldCB_ReturnToFieldLMenu(void);

static const struct WindowTemplate sWindowTemplate_StartClock = {
    .bg = 0, 
    .tilemapLeft = 243, 
    .tilemapTop = 1, 
    .width = 10, // If you want to shorten the dates to Sat., Sun., etc., change this to 9
    .height = 2, 
    .paletteNum = 15,
    .baseBlock = 0x30
};

static const struct MenuAction sLMenuItems[] =
{
    [MENU_ACTION_POKEVIAL]              = {gText_MenuPokeVial, {.u8_void = LMenuPokeVialCallback}},
    [MENU_ACTION_PC]                    = {gText_MenuPC, {.u8_void = LMenuPCCallback}},
    [MENU_ACTION_DEXNAV]                = {gText_MenuDexNav,  {.u8_void = LMenuDexNavCallback}},
    [MENU_ACTION_TIME_CHANGER]          = {gText_TimeChanger,  {.u8_void = LMenuTimeChangerCallback}},
    [MENU_ACTION_INFINITE_REPEL_ON]     = {gText_InfiniteRepelOn,  {.u8_void = LMenuInfiniteRepelCallback}},
    [MENU_ACTION_INFINITE_REPEL_OFF]    = {gText_InfiniteRepelOff,  {.u8_void = LMenuInfiniteRepelCallback}},
    [MENU_ACTION_AUTO_RUN_ON]           = {gText_AutoRunOn,  {.u8_void = LMenuAutoRunCallback}},
    [MENU_ACTION_AUTO_RUN_OFF]          = {gText_AutoRunOff,  {.u8_void = LMenuAutoRunCallback}},
    [MENU_ACTION_FOLLOWERS_ON]          = {gText_FollowersOn,  {.u8_void = LMenuFollowersCallback}},
    [MENU_ACTION_FOLLOWERS_OFF]         = {gText_FollowersOff,  {.u8_void = LMenuFollowersCallback}},
    [MENU_ACTION_STAT_EDITOR]           = {gText_StatEditor, {.u8_void = StartMenuStatEditorCallback}},
    [MENU_ACTION_POKEVIAL2]             = {gText_MenuPokeVial2, {.u8_void = LMenuPokeVial2Callback}},
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
static void HideLMenuWindowAutoRun(void);
static void HideLMenuWindowFollowers(void);
static void HideLMenuWindowTimeChanger(void);
static void HideLMenuWindowInfiniteRepel(void);
static void HideLMenuWindowPokeVial(void);
static void HideLMenuWindowPokeVial2(void);
static void HideLMenuWindowNoWildMons(void);
static void ShowTimeWindow(void);
static void RemoveLMenuTimeWindow(void);


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
    bool8 hasDexNav = FlagGet(FLAG_SYS_DEXNAV_GET);
    
    if(FlagGet(FLAG_SYS_POKEMON_GET))
    {
        if (hasDexNav)
        {
            AddLMenuAction(MENU_ACTION_POKEVIAL);
        }
        if(!FlagGet(FLAG_ENTERED_ELITE_4) && VarGet(VAR_HOT_HOUSE_STATE) == 0)
        {
            AddLMenuAction(MENU_ACTION_PC);
        }
        if(FlagGet(FLAG_ENTERED_ELITE_4) || VarGet(VAR_HOT_HOUSE_STATE) != 0)
        {
            AddLMenuAction(MENU_ACTION_POKEVIAL2);
        }
    }

    if (hasDexNav)
    {
        AddLMenuAction(MENU_ACTION_DEXNAV);
        AddLMenuAction(MENU_ACTION_TIME_CHANGER);
    }

    if(FlagGet(FLAG_SYS_STAT_EDITOR_GET) && !FlagGet(FLAG_ENTERED_ELITE_4) && VarGet(VAR_HOT_HOUSE_STATE) == 0)
        AddLMenuAction(MENU_ACTION_STAT_EDITOR);
        
    if (hasDexNav)
    {
        if(FlagGet(OW_FLAG_NO_ENCOUNTER))
        {
            AddLMenuAction(MENU_ACTION_INFINITE_REPEL_ON);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_INFINITE_REPEL_OFF);   
        }
    }

    if (OW_FOLLOWERS_ENABLED && !FlagGet(FLAG_TEMP_HIDE_FOLLOWER) && FlagGet(FLAG_SYS_POKEMON_GET))
    {
        if (FlagGet(FLAG_DISABLE_FOLLOWERS))
        {
            AddLMenuAction(MENU_ACTION_FOLLOWERS_OFF);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_FOLLOWERS_ON);
        }
    }
    
    if (FlagGet(FLAG_SYS_B_DASH))
    {
        if (gSaveBlock2Ptr->autoRun)
        {
            AddLMenuAction(MENU_ACTION_AUTO_RUN_ON);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_AUTO_RUN_OFF);
        }
    }
}

static void BuildSafariZoneLMenu(void)
{
    if (FlagGet(FLAG_SYS_DEXNAV_GET))
    {
        AddLMenuAction(MENU_ACTION_DEXNAV);
        AddLMenuAction(MENU_ACTION_TIME_CHANGER);
        if(FlagGet(OW_FLAG_NO_ENCOUNTER))
        {
            AddLMenuAction(MENU_ACTION_INFINITE_REPEL_ON);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_INFINITE_REPEL_OFF);   
        }
    }

    if (OW_FOLLOWERS_ENABLED && !FlagGet(FLAG_TEMP_HIDE_FOLLOWER) && FlagGet(FLAG_SYS_POKEMON_GET))
    {
        if (FlagGet(FLAG_DISABLE_FOLLOWERS))
        {
            AddLMenuAction(MENU_ACTION_FOLLOWERS_OFF);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_FOLLOWERS_ON);
        }
    }

    if (FlagGet(FLAG_SYS_B_DASH))
    {
        if (gSaveBlock2Ptr->autoRun)
        {
            AddLMenuAction(MENU_ACTION_AUTO_RUN_ON);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_AUTO_RUN_OFF);
        }
    }
}

static void BuildLinkModeLMenu(void)
{
    bool8 hasDexNav = FlagGet(FLAG_SYS_DEXNAV_GET);
    
    if(FlagGet(FLAG_SYS_POKEMON_GET))
    {
        if (hasDexNav)
        {
            AddLMenuAction(MENU_ACTION_POKEVIAL);
        }
        if(!FlagGet(FLAG_ENTERED_ELITE_4) && VarGet(VAR_HOT_HOUSE_STATE) == 0)
        {
            AddLMenuAction(MENU_ACTION_PC);
        }
        if(FlagGet(FLAG_ENTERED_ELITE_4) || VarGet(VAR_HOT_HOUSE_STATE) != 0)
        {
            AddLMenuAction(MENU_ACTION_POKEVIAL2);
        }
    }

    if (hasDexNav)
    {
        AddLMenuAction(MENU_ACTION_DEXNAV);
        AddLMenuAction(MENU_ACTION_TIME_CHANGER);
    }

    if(FlagGet(FLAG_SYS_STAT_EDITOR_GET) && !FlagGet(FLAG_ENTERED_ELITE_4) && VarGet(VAR_HOT_HOUSE_STATE) == 0)
        AddLMenuAction(MENU_ACTION_STAT_EDITOR);
        
    if (hasDexNav)
    {
        if(FlagGet(OW_FLAG_NO_ENCOUNTER))
        {
            AddLMenuAction(MENU_ACTION_INFINITE_REPEL_ON);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_INFINITE_REPEL_OFF);   
        }
    }

    if (OW_FOLLOWERS_ENABLED && !FlagGet(FLAG_TEMP_HIDE_FOLLOWER) && FlagGet(FLAG_SYS_POKEMON_GET))
    {
        if (FlagGet(FLAG_DISABLE_FOLLOWERS))
        {
            AddLMenuAction(MENU_ACTION_FOLLOWERS_OFF);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_FOLLOWERS_ON);
        }
    }
    
    if (FlagGet(FLAG_SYS_B_DASH))
    {
        if (gSaveBlock2Ptr->autoRun)
        {
            AddLMenuAction(MENU_ACTION_AUTO_RUN_ON);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_AUTO_RUN_OFF);
        }
    }
}

static void BuildUnionRoomLMenu(void)
{
    bool8 hasDexNav = FlagGet(FLAG_SYS_DEXNAV_GET);
    
    if(FlagGet(FLAG_SYS_POKEMON_GET))
    {
        if (hasDexNav)
        {
            AddLMenuAction(MENU_ACTION_POKEVIAL);
        }
        if(!FlagGet(FLAG_ENTERED_ELITE_4) && VarGet(VAR_HOT_HOUSE_STATE) == 0)
        {
            AddLMenuAction(MENU_ACTION_PC);
        }
        if(FlagGet(FLAG_ENTERED_ELITE_4) || VarGet(VAR_HOT_HOUSE_STATE) != 0)
        {
            AddLMenuAction(MENU_ACTION_POKEVIAL2);
        }
    }

    if (hasDexNav)
    {
        AddLMenuAction(MENU_ACTION_DEXNAV);
        AddLMenuAction(MENU_ACTION_TIME_CHANGER);
    }

    if(FlagGet(FLAG_SYS_STAT_EDITOR_GET) && !FlagGet(FLAG_ENTERED_ELITE_4) && VarGet(VAR_HOT_HOUSE_STATE) == 0)
        AddLMenuAction(MENU_ACTION_STAT_EDITOR);
        
    if (hasDexNav)
    {
        if(FlagGet(OW_FLAG_NO_ENCOUNTER))
        {
            AddLMenuAction(MENU_ACTION_INFINITE_REPEL_ON);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_INFINITE_REPEL_OFF);   
        }
    }

    if (OW_FOLLOWERS_ENABLED && !FlagGet(FLAG_TEMP_HIDE_FOLLOWER) && FlagGet(FLAG_SYS_POKEMON_GET))
    {
        if (FlagGet(FLAG_DISABLE_FOLLOWERS))
        {
            AddLMenuAction(MENU_ACTION_FOLLOWERS_OFF);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_FOLLOWERS_ON);
        }
    }
    
    if (FlagGet(FLAG_SYS_B_DASH))
    {
        if (gSaveBlock2Ptr->autoRun)
        {
            AddLMenuAction(MENU_ACTION_AUTO_RUN_ON);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_AUTO_RUN_OFF);
        }
    }
}

static void BuildBattlePikeLMenu(void)
{
    if (FlagGet(FLAG_SYS_DEXNAV_GET))
    {
        AddLMenuAction(MENU_ACTION_DEXNAV);
        AddLMenuAction(MENU_ACTION_TIME_CHANGER);
        if(FlagGet(OW_FLAG_NO_ENCOUNTER))
        {
            AddLMenuAction(MENU_ACTION_INFINITE_REPEL_ON);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_INFINITE_REPEL_OFF);   
        }
    }

    if (OW_FOLLOWERS_ENABLED && !FlagGet(FLAG_TEMP_HIDE_FOLLOWER) && FlagGet(FLAG_SYS_POKEMON_GET))
    {
        if (FlagGet(FLAG_DISABLE_FOLLOWERS))
        {
            AddLMenuAction(MENU_ACTION_FOLLOWERS_OFF);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_FOLLOWERS_ON);
        }
    }

    if (FlagGet(FLAG_SYS_B_DASH))
    {
        if (gSaveBlock2Ptr->autoRun)
        {
            AddLMenuAction(MENU_ACTION_AUTO_RUN_ON);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_AUTO_RUN_OFF);
        }
    }
}

static void BuildBattlePyramidLMenu(void)
{
    if (FlagGet(FLAG_SYS_DEXNAV_GET))
    {
        AddLMenuAction(MENU_ACTION_DEXNAV);
        AddLMenuAction(MENU_ACTION_TIME_CHANGER);
        if(FlagGet(OW_FLAG_NO_ENCOUNTER))
        {
            AddLMenuAction(MENU_ACTION_INFINITE_REPEL_ON);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_INFINITE_REPEL_OFF);   
        }
    }

    if (OW_FOLLOWERS_ENABLED && !FlagGet(FLAG_TEMP_HIDE_FOLLOWER) && FlagGet(FLAG_SYS_POKEMON_GET))
    {
        if (FlagGet(FLAG_DISABLE_FOLLOWERS))
        {
            AddLMenuAction(MENU_ACTION_FOLLOWERS_OFF);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_FOLLOWERS_ON);
        }
    }

    if (FlagGet(FLAG_SYS_B_DASH))
    {
        if (gSaveBlock2Ptr->autoRun)
        {
            AddLMenuAction(MENU_ACTION_AUTO_RUN_ON);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_AUTO_RUN_OFF);
        }
    }
}

static void BuildMultiPartnerRoomLMenu(void)
{
    if (FlagGet(FLAG_SYS_DEXNAV_GET))
    {
        AddLMenuAction(MENU_ACTION_DEXNAV);
        AddLMenuAction(MENU_ACTION_TIME_CHANGER);
        if(FlagGet(OW_FLAG_NO_ENCOUNTER))
        {
            AddLMenuAction(MENU_ACTION_INFINITE_REPEL_ON);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_INFINITE_REPEL_OFF);   
        }
    }

    if (OW_FOLLOWERS_ENABLED && !FlagGet(FLAG_TEMP_HIDE_FOLLOWER) && FlagGet(FLAG_SYS_POKEMON_GET))
    {
        if (FlagGet(FLAG_DISABLE_FOLLOWERS))
        {
            AddLMenuAction(MENU_ACTION_FOLLOWERS_OFF);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_FOLLOWERS_ON);
        }
    }

    if (FlagGet(FLAG_SYS_B_DASH))
    {
        if (gSaveBlock2Ptr->autoRun)
        {
            AddLMenuAction(MENU_ACTION_AUTO_RUN_ON);
        }
        else
        {
            AddLMenuAction(MENU_ACTION_AUTO_RUN_OFF);
        }
    }
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
        ShowTimeWindow();
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
        
        if (sCurrentLMenuActions[sLMenuCursorPos] == MENU_ACTION_DEXNAV && MapHasNoEncounterData())
        {
            HideLMenuNoWildMons();
            return TRUE;
        }
            
        gMenuCallback2 = sLMenuItems[sCurrentLMenuActions[sLMenuCursorPos]].func.u8_void;

        if (ShouldCallbackFadeToBlack())
        {
           FadeScreen(FADE_TO_BLACK, 0);
        }

        RemoveLMenuTimeWindow();
        ShowTimeWindow();
        return FALSE;
    }

    if (JOY_NEW(L_BUTTON | B_BUTTON | START_BUTTON))
    {
        HideLMenu();
        return TRUE;
    }

    return FALSE;
}

static bool8 ShouldCallbackFadeToBlack(void)
{
    if(gMenuCallback2 == LMenuAutoRunCallback)
        return FALSE;
    if(gMenuCallback2 == LMenuFollowersCallback)
        return FALSE;
    if(gMenuCallback2 == LMenuTimeChangerCallback)
        return FALSE;
    if(gMenuCallback2 == LMenuInfiniteRepelCallback)
        return FALSE;
    if(gMenuCallback2 == LMenuPokeVialCallback)
        return FALSE;
    if(gMenuCallback2 == LMenuPokeVial2Callback)
        return FALSE;
    
    return TRUE;
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


extern const u8 EventScript_DisableAutoRun[];
extern const u8 EventScript_EnableAutoRun[];
static bool8 LMenuAutoRunCallback(void)
{
    HideLMenuAutoRun(); // Hide start menu
    return TRUE;
}

void HideLMenuAutoRun(void)
{
    PlaySE(SE_SELECT);
    HideLMenuWindowAutoRun();
}

static void HideLMenuWindowAutoRun(void)
{
    ClearStdWindowAndFrame(GetLMenuWindowId(), TRUE);
    RemoveLMenuWindow();
    RemoveLMenuTimeWindow();
    ScriptUnfreezeObjectEvents();
    UnlockPlayerFieldControls();
    if (FlagGet(FLAG_SYS_B_DASH))
    {
        PlaySE(SE_SELECT);
        if (gSaveBlock2Ptr->autoRun)
        {
            gSaveBlock2Ptr->autoRun = FALSE;
            ScriptContext_SetupScript(EventScript_DisableAutoRun);
        }
        else
        {
            gSaveBlock2Ptr->autoRun = TRUE;
            ScriptContext_SetupScript(EventScript_EnableAutoRun);
        }
    }
}

extern const u8 EventScript_TimeChanger[];
static bool8 LMenuTimeChangerCallback(void)
{
    HideLMenuTimeChanger(); // Hide start menu
    return TRUE;
}

void HideLMenuTimeChanger(void)
{
    PlaySE(SE_SELECT);
    HideLMenuWindowTimeChanger();
}

static void HideLMenuWindowTimeChanger(void)
{
    ClearStdWindowAndFrame(GetLMenuWindowId(), TRUE);
    RemoveLMenuWindow();
    RemoveLMenuTimeWindow();
    ScriptUnfreezeObjectEvents();
    UnlockPlayerFieldControls();
    PlaySE(SE_SELECT);
    ScriptContext_SetupScript(EventScript_TimeChanger);
}


extern const u8 EventScript_DisableFollowers[];
extern const u8 EventScript_EnableFollowers[];
static bool8 LMenuFollowersCallback(void)
{
    HideLMenuFollowers(); // Hide start menu
    return TRUE;
}

void HideLMenuFollowers(void)
{
    PlaySE(SE_SELECT);
    HideLMenuWindowFollowers();
}

static void HideLMenuWindowFollowers(void)
{
    ClearStdWindowAndFrame(GetLMenuWindowId(), TRUE);
    RemoveLMenuWindow();
    RemoveLMenuTimeWindow();
    ScriptUnfreezeObjectEvents();
    UnlockPlayerFieldControls();
    PlaySE(SE_BALL_TRADE);
    if (FlagGet(FLAG_DISABLE_FOLLOWERS))
    {
        FlagClear(FLAG_DISABLE_FOLLOWERS);
        ScriptContext_SetupScript(EventScript_EnableFollowers);
    }
    else
    {
        FlagSet(FLAG_DISABLE_FOLLOWERS);
        ScriptContext_SetupScript(EventScript_DisableFollowers);
    }
}


extern const u8 EventScript_DisableInfiniteRepel[];
extern const u8 EventScript_EnableInfiniteRepel[];
static bool8 LMenuInfiniteRepelCallback(void)
{
    HideLMenuInfiniteRepel(); // Hide start menu
    return TRUE;
}

void HideLMenuInfiniteRepel(void)
{
    PlaySE(SE_SELECT);
    HideLMenuWindowInfiniteRepel();
}

static void HideLMenuWindowInfiniteRepel(void)
{
    ClearStdWindowAndFrame(GetLMenuWindowId(), TRUE);
    RemoveLMenuWindow();
    RemoveLMenuTimeWindow();
    ScriptUnfreezeObjectEvents();
    UnlockPlayerFieldControls();
    if (FlagGet(FLAG_SYS_DEXNAV_GET))
    {
        PlaySE(SE_SELECT);
        if (FlagGet(OW_FLAG_NO_ENCOUNTER))
        {
            FlagClear(OW_FLAG_NO_ENCOUNTER);
            ScriptContext_SetupScript(EventScript_DisableInfiniteRepel);
        }
        else
        {
            FlagSet(OW_FLAG_NO_ENCOUNTER);
            ScriptContext_SetupScript(EventScript_EnableInfiniteRepel);
        }
    }
}

static bool8 LMenuPokeVialCallback(void)
{
    HideLMenuPokeVial(); // Hide start menu
    return TRUE;
}

void HideLMenuPokeVial(void)
{
    PlaySE(SE_SELECT);
    HideLMenuWindowPokeVial();
}

static void HideLMenuWindowPokeVial(void)
{
    ClearStdWindowAndFrame(GetLMenuWindowId(), TRUE);
    RemoveLMenuWindow();
    RemoveLMenuTimeWindow();
    ScriptUnfreezeObjectEvents();
    UnlockPlayerFieldControls();
    ScriptContext_SetupScript(PokeVialHealScript);
}

static bool8 LMenuPokeVial2Callback(void)
{
    HideLMenuPokeVial2(); // Hide start menu
    return TRUE;
}

void HideLMenuPokeVial2(void)
{
    PlaySE(SE_SELECT);
    HideLMenuWindowPokeVial2();
}

static void HideLMenuWindowPokeVial2(void)
{
    ClearStdWindowAndFrame(GetLMenuWindowId(), TRUE);
    RemoveLMenuWindow();
    RemoveLMenuTimeWindow();
    ScriptUnfreezeObjectEvents();
    UnlockPlayerFieldControls();
    ScriptContext_SetupScript(PokeVialHealScript2);
}

extern const u8 EventScript_NoWildMonsFound[];

void HideLMenuNoWildMons(void)
{
    PlaySE(SE_SELECT);
    HideLMenuWindowNoWildMons();
}

static void HideLMenuWindowNoWildMons(void)
{
    ClearStdWindowAndFrame(GetLMenuWindowId(), TRUE);
    RemoveLMenuWindow();
    RemoveLMenuTimeWindow();
    ScriptUnfreezeObjectEvents();
    UnlockPlayerFieldControls();
    ScriptContext_SetupScript(EventScript_NoWildMonsFound);
}

static void HideLMenuWindow(void)
{
    ClearStdWindowAndFrame(GetLMenuWindowId(), TRUE);
    RemoveLMenuWindow();
    RemoveLMenuTimeWindow();
    ScriptUnfreezeObjectEvents();
    UnlockPlayerFieldControls();
}

void HideLMenu(void)
{
    PlaySE(SE_SELECT);
    HideLMenuWindow();
}

static void RemoveLMenuTimeWindow(void)
{
    ClearStdWindowAndFrameToTransparent(sStartClockWindowId2, FALSE);
    RemoveWindow(sStartClockWindowId2);
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

// If you want to shorten the dates to Sat., Sun., etc., change this to 70
#define CLOCK_WINDOW_WIDTH2 75

static void ShowTimeWindow(void)
{
    const u8 *suffix;
    u8* ptr;
    u8 convertedHours;
    RtcCalcLocalTime();
    s8 hours = gLocalTime.hours;
    s8 minutes = gLocalTime.minutes;

    // print window
    sStartClockWindowId2 = AddWindow(&sWindowTemplate_StartClock);
    PutWindowTilemap(sStartClockWindowId2);
    DrawStdWindowFrame(sStartClockWindowId2, FALSE);

    if (hours < 12)
    {
        if (hours == 0)
            convertedHours = 12;
        else
            convertedHours = hours;
        suffix = gText_AM;
    }
    else if (hours == 12)
    {
        convertedHours = 12;
        if (suffix == gText_AM);
            suffix = gText_PM;
    }
    else
    {
        convertedHours = hours - 12;
        suffix = gText_PM;
    }

    StringExpandPlaceholders(gStringVar4, gText_ContinueMenuTime); // prints "time" word, from version before weekday was added and leaving it here in case anyone would prefer to use it
    AddTextPrinterParameterized(sStartClockWindowId2, 1, gStringVar4, 0, 1, 0xFF, NULL); 

    ptr = ConvertIntToDecimalStringN(gStringVar4, convertedHours, STR_CONV_MODE_LEFT_ALIGN, 3);
    *ptr = 0xF0;

    ConvertIntToDecimalStringN(ptr + 1, minutes, STR_CONV_MODE_LEADING_ZEROS, 2);
    AddTextPrinterParameterized(sStartClockWindowId2, 1, gStringVar4, GetStringRightAlignXOffset(1, suffix, CLOCK_WINDOW_WIDTH2) - (CLOCK_WINDOW_WIDTH2 - GetStringRightAlignXOffset(1, gStringVar4, CLOCK_WINDOW_WIDTH2) + 3), 1, 0xFF, NULL); // print time

    AddTextPrinterParameterized(sStartClockWindowId2, 1, suffix, GetStringRightAlignXOffset(1, suffix, CLOCK_WINDOW_WIDTH2), 1, 0xFF, NULL); // print am/pm

    CopyWindowToVram(sStartClockWindowId2, COPYWIN_GFX);
}

static bool8 StartMenuStatEditorCallback(void)
{
    gSpecialVar_0x8004 = 0;
    CreateTask(Task_OpenStatEditorFromLMenu, 0);
    return TRUE;
}
