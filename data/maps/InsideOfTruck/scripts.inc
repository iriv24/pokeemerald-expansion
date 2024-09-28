# 1 "data/maps/InsideOfTruck/scripts.pory"

# 2 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_MapScripts::
# 3 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
# 4 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
# 5 "data/maps/InsideOfTruck/scripts.pory"
	.byte 0
# 6 "data/maps/InsideOfTruck/scripts.pory"

# 7 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnLoad:
# 8 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 9 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 10 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
# 11 "data/maps/InsideOfTruck/scripts.pory"
	end
# 12 "data/maps/InsideOfTruck/scripts.pory"

# 13 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnResume:
# 14 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
# 15 "data/maps/InsideOfTruck/scripts.pory"
	end
# 16 "data/maps/InsideOfTruck/scripts.pory"

# 17 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlags::
# 18 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 19 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 20 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 21 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, InsideOfTruck_EventScript_SetIntroFlagsMale
# 22 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, InsideOfTruck_EventScript_SetIntroFlagsFemale
# 23 "data/maps/InsideOfTruck/scripts.pory"
	end
# 24 "data/maps/InsideOfTruck/scripts.pory"

# 25 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsMale::
# 26 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 27 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 28 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 29 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 30 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 31 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 32 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 33 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 34 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
# 35 "data/maps/InsideOfTruck/scripts.pory"
	message InsideOfTruck_Text_ReadCarefully
# 36 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 37 "data/maps/InsideOfTruck/scripts.pory"
	delay 100
# 38 "data/maps/InsideOfTruck/scripts.pory"
	delay 100
# 39 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_WantToUseDefaultSettings, MSGBOX_YESNO
# 40 "data/maps/InsideOfTruck/scripts.pory"
	call_if_eq VAR_RESULT, YES, InsideOfTruck_EventScript_SetDefaultSettings
# 41 "data/maps/InsideOfTruck/scripts.pory"
	call_if_eq VAR_RESULT, NO, InsideOfTruck_EventScript_StartSettingsMenu
# 42 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 43 "data/maps/InsideOfTruck/scripts.pory"
	end
# 44 "data/maps/InsideOfTruck/scripts.pory"

# 45 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsFemale::
# 46 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 47 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 48 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 49 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 50 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 51 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 52 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 53 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
# 54 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
# 55 "data/maps/InsideOfTruck/scripts.pory"
	message InsideOfTruck_Text_ReadCarefully
# 56 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 57 "data/maps/InsideOfTruck/scripts.pory"
	delay 100
# 58 "data/maps/InsideOfTruck/scripts.pory"
	delay 100
# 59 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_WantToUseDefaultSettings, MSGBOX_YESNO
# 60 "data/maps/InsideOfTruck/scripts.pory"
	call_if_eq VAR_RESULT, YES, InsideOfTruck_EventScript_SetDefaultSettings
# 61 "data/maps/InsideOfTruck/scripts.pory"
	call_if_eq VAR_RESULT, NO, InsideOfTruck_EventScript_StartSettingsMenu
# 62 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 63 "data/maps/InsideOfTruck/scripts.pory"
	end
# 64 "data/maps/InsideOfTruck/scripts.pory"

# 65 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetDefaultSettings:
# 66 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_DefaultSettingsSaved, MSGBOX_DEFAULT
# 67 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_NORMAL_MODE
# 68 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_MIN_GRINDING_MODE
# 69 "data/maps/InsideOfTruck/scripts.pory"
	return
# 70 "data/maps/InsideOfTruck/scripts.pory"

# 71 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_MovingBox::
# 72 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
# 73 "data/maps/InsideOfTruck/scripts.pory"
	end
# 74 "data/maps/InsideOfTruck/scripts.pory"

# 75 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_BoxPrintedWithMonLogo:
# 76 "data/maps/InsideOfTruck/scripts.pory"
	.string "The box is printed with a POKéMON logo.\p"
# 77 "data/maps/InsideOfTruck/scripts.pory"
	.string "It's a POKéMON brand moving and\n"
# 78 "data/maps/InsideOfTruck/scripts.pory"
	.string "delivery service.$"
# 79 "data/maps/InsideOfTruck/scripts.pory"

# 80 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_ReadCarefully:
# 81 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Please take a moment to read the\n"
# 82 "data/maps/InsideOfTruck/scripts.pory"
	.string "following carefully.$"
# 83 "data/maps/InsideOfTruck/scripts.pory"

# 84 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_WantToUseDefaultSettings:
# 85 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Would you like to play Pokémon Emerald\n"
# 86 "data/maps/InsideOfTruck/scripts.pory"
	.string "Imperium with the default settings?\p"
# 87 "data/maps/InsideOfTruck/scripts.pory"
	.string "The default settings are as follows:\p"
# 88 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal difficulty{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} - challenging boss\n"
# 89 "data/maps/InsideOfTruck/scripts.pory"
	.string "battles with hard level caps enforced.\p"
# 90 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode is ON{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} - this\n"
# 91 "data/maps/InsideOfTruck/scripts.pory"
	.string "guarantees all Pokémon will have\l"
# 92 "data/maps/InsideOfTruck/scripts.pory"
	.string "perfect IVs, and EVs cannot be\l"
# 93 "data/maps/InsideOfTruck/scripts.pory"
	.string "obtained.  Boss Pokémon will not have\l"
# 94 "data/maps/InsideOfTruck/scripts.pory"
	.string "EVs either.\p"
# 95 "data/maps/InsideOfTruck/scripts.pory"
	.string "Randomizer {COLOR RED}{SHADOW LIGHT_RED}OFF{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} - no additional\n"
# 96 "data/maps/InsideOfTruck/scripts.pory"
	.string "randomization will be enabled.\p"
# 97 "data/maps/InsideOfTruck/scripts.pory"
	.string "With this information in mind:\n"
# 98 "data/maps/InsideOfTruck/scripts.pory"
	.string "Would you like to play Pokémon Emerald\l"
# 99 "data/maps/InsideOfTruck/scripts.pory"
	.string "Imperium with the default settings?$"
# 100 "data/maps/InsideOfTruck/scripts.pory"

# 101 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_DefaultSettingsSaved:
# 102 "data/maps/InsideOfTruck/scripts.pory"
	.string "Default settings saved.\n"
# 103 "data/maps/InsideOfTruck/scripts.pory"
	.string "Good luck!$"

InsideOfTruck_EventScript_StartSettingsMenu::
# 107 "data/maps/InsideOfTruck/scripts.pory"
	msgbox WhichOption
# 108 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_MIN_GRINDING_MODE, InsideOfTruck_EventScript_StartSettingsMenu_2
# 117 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_0, 0
# 118 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_4, 1
# 119 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_2, 2
# 120 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, 3
InsideOfTruck_EventScript_StartSettingsMenu_1:
# 125 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 127 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq InsideOfTruck_EventScript_StartSettingsMenu_6
InsideOfTruck_EventScript_StartSettingsMenu_5:
# 132 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq InsideOfTruck_EventScript_StartSettingsMenu_9
InsideOfTruck_EventScript_StartSettingsMenu_8:
# 137 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq InsideOfTruck_EventScript_StartSettingsMenu_12
InsideOfTruck_EventScript_StartSettingsMenu_11:
# 142 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq InsideOfTruck_EventScript_StartSettingsMenu_14
	return

InsideOfTruck_EventScript_StartSettingsMenu_2:
# 110 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_0, 0
# 111 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_1, 1
# 112 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_2, 2
# 113 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, 3
	goto InsideOfTruck_EventScript_StartSettingsMenu_1

InsideOfTruck_EventScript_StartSettingsMenu_6:
# 129 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_DifficultyOptions
	goto InsideOfTruck_EventScript_StartSettingsMenu_5

InsideOfTruck_EventScript_StartSettingsMenu_9:
# 134 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_MinGrindingMode
	goto InsideOfTruck_EventScript_StartSettingsMenu_8

InsideOfTruck_EventScript_StartSettingsMenu_12:
# 139 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_RandomzierOptions
	goto InsideOfTruck_EventScript_StartSettingsMenu_11

InsideOfTruck_EventScript_StartSettingsMenu_14:
# 144 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_SaveSettingsDone
	return


InsideOfTruck_EventScript_DifficultyOptions::
# 149 "data/maps/InsideOfTruck/scripts.pory"
	msgbox WhichDifficulty
# 150 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_GAME_SETTING_DIFFICULTY_MODE
# 152 "data/maps/InsideOfTruck/scripts.pory"
	case GAME_SETTING_DIFFICULTY_NORMAL_MODE, InsideOfTruck_EventScript_DifficultyOptions_3
# 157 "data/maps/InsideOfTruck/scripts.pory"
	case GAME_SETTING_DIFFICULTY_EASY_MODE, InsideOfTruck_EventScript_DifficultyOptions_4
# 163 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_DifficultyOptions_Text_0, GAME_SETTING_DIFFICULTY_NORMAL_MODE
# 164 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_DifficultyOptions_Text_1, GAME_SETTING_DIFFICULTY_EASY_MODE
# 165 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, MULTI_B_PRESSED
InsideOfTruck_EventScript_DifficultyOptions_1:
# 170 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 172 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq InsideOfTruck_EventScript_DifficultyOptions_7
InsideOfTruck_EventScript_DifficultyOptions_6:
# 177 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, GAME_SETTING_DIFFICULTY_NORMAL_MODE
	goto_if_eq InsideOfTruck_EventScript_DifficultyOptions_10
InsideOfTruck_EventScript_DifficultyOptions_9:
# 197 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, GAME_SETTING_DIFFICULTY_EASY_MODE
	goto_if_eq InsideOfTruck_EventScript_DifficultyOptions_12
	return

InsideOfTruck_EventScript_DifficultyOptions_3:
# 153 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_DifficultyOptions_Text_0, GAME_SETTING_DIFFICULTY_NORMAL_MODE
# 154 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_DifficultyOptions_Text_1, GAME_SETTING_DIFFICULTY_EASY_MODE
# 155 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, MULTI_B_PRESSED
	goto InsideOfTruck_EventScript_DifficultyOptions_1

InsideOfTruck_EventScript_DifficultyOptions_4:
# 158 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_DifficultyOptions_Text_2, GAME_SETTING_DIFFICULTY_NORMAL_MODE
# 159 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_DifficultyOptions_Text_3, GAME_SETTING_DIFFICULTY_EASY_MODE
# 160 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, MULTI_B_PRESSED
	goto InsideOfTruck_EventScript_DifficultyOptions_1

InsideOfTruck_EventScript_DifficultyOptions_7:
# 174 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_StartSettingsMenu
	goto InsideOfTruck_EventScript_DifficultyOptions_6

InsideOfTruck_EventScript_DifficultyOptions_10:
# 179 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_NORMAL_MODE
	goto_if_eq InsideOfTruck_EventScript_DifficultyOptions_14
# 186 "data/maps/InsideOfTruck/scripts.pory"
	msgbox NormalDifficultyYesNo, MSGBOX_YESNO
# 187 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_DifficultyOptions_21
InsideOfTruck_EventScript_DifficultyOptions_20:
# 192 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_DifficultyOptions
	goto InsideOfTruck_EventScript_DifficultyOptions_9

InsideOfTruck_EventScript_DifficultyOptions_12:
# 199 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_EASY_MODE
	goto_if_eq InsideOfTruck_EventScript_DifficultyOptions_17
# 206 "data/maps/InsideOfTruck/scripts.pory"
	msgbox EasyDifficultyYesNo, MSGBOX_YESNO
# 207 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_DifficultyOptions_24
InsideOfTruck_EventScript_DifficultyOptions_23:
# 212 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_DifficultyOptions
	return

InsideOfTruck_EventScript_DifficultyOptions_14:
# 181 "data/maps/InsideOfTruck/scripts.pory"
	msgbox NormalDifficultyCurrentlySelected
# 182 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_DifficultyOptions
	goto InsideOfTruck_EventScript_DifficultyOptions_9

InsideOfTruck_EventScript_DifficultyOptions_17:
# 201 "data/maps/InsideOfTruck/scripts.pory"
	msgbox EasyDifficultyCurrentlySelected
# 202 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_DifficultyOptions
	return

InsideOfTruck_EventScript_DifficultyOptions_21:
# 189 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_NORMAL_MODE
# 190 "data/maps/InsideOfTruck/scripts.pory"
	msgbox NormalDifficultyEnabled
	goto InsideOfTruck_EventScript_DifficultyOptions_20

InsideOfTruck_EventScript_DifficultyOptions_24:
# 209 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_EASY_MODE
# 210 "data/maps/InsideOfTruck/scripts.pory"
	msgbox EasyDifficultyEnabled
	goto InsideOfTruck_EventScript_DifficultyOptions_23


InsideOfTruck_EventScript_MinGrindingMode::
# 218 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_MIN_GRINDING_MODE, InsideOfTruck_EventScript_MinGrindingMode_2
# 229 "data/maps/InsideOfTruck/scripts.pory"
	msgbox MinGrindingAlreadyOffYesNo, MSGBOX_YESNO
# 230 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_MinGrindingMode_7
InsideOfTruck_EventScript_MinGrindingMode_1:
# 236 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_StartSettingsMenu
	return

InsideOfTruck_EventScript_MinGrindingMode_2:
# 220 "data/maps/InsideOfTruck/scripts.pory"
	msgbox MinGrindingAlreadyOnYesNo, MSGBOX_YESNO
# 221 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_MinGrindingMode_5
	goto InsideOfTruck_EventScript_MinGrindingMode_1

InsideOfTruck_EventScript_MinGrindingMode_5:
# 223 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_MIN_GRINDING_MODE
# 224 "data/maps/InsideOfTruck/scripts.pory"
	msgbox MinGrindingDisabled
	goto InsideOfTruck_EventScript_MinGrindingMode_1

InsideOfTruck_EventScript_MinGrindingMode_7:
# 232 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_MIN_GRINDING_MODE
# 233 "data/maps/InsideOfTruck/scripts.pory"
	msgbox MinGrindingEnabled
	goto InsideOfTruck_EventScript_MinGrindingMode_1


InsideOfTruck_EventScript_RandomzierOptions::
# 242 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_EventScript_RandomzierOptions_Text_0
# 243 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_StartSettingsMenu
	return


InsideOfTruck_EventScript_SaveSettingsDone::
# 248 "data/maps/InsideOfTruck/scripts.pory"
	msgbox CustomSettingsSaved
# 249 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
	end


InsideOfTruck_EventScript_StartSettingsMenu_Text_0:
# 110 "data/maps/InsideOfTruck/scripts.pory"
	.string "Difficulty Options$"

InsideOfTruck_EventScript_StartSettingsMenu_Text_1:
# 111 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode$"

InsideOfTruck_EventScript_StartSettingsMenu_Text_2:
# 112 "data/maps/InsideOfTruck/scripts.pory"
	.string "Randomizer Options$"

InsideOfTruck_EventScript_StartSettingsMenu_Text_3:
# 113 "data/maps/InsideOfTruck/scripts.pory"
	.string "Done$"

InsideOfTruck_EventScript_StartSettingsMenu_Text_4:
# 118 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Grinding Mode$"

InsideOfTruck_EventScript_DifficultyOptions_Text_0:
# 153 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal$"

InsideOfTruck_EventScript_DifficultyOptions_Text_1:
# 154 "data/maps/InsideOfTruck/scripts.pory"
	.string "Easy$"

InsideOfTruck_EventScript_DifficultyOptions_Text_2:
# 158 "data/maps/InsideOfTruck/scripts.pory"
	.string "Normal$"

InsideOfTruck_EventScript_DifficultyOptions_Text_3:
# 159 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Easy$"

InsideOfTruck_EventScript_RandomzierOptions_Text_0:
# 242 "data/maps/InsideOfTruck/scripts.pory"
	.string "todo$"

WhichOption::
# 254 "data/maps/InsideOfTruck/scripts.pory"
	.string "Which option would you like\n"
	.string "to customize?$"

WhichDifficulty::
# 260 "data/maps/InsideOfTruck/scripts.pory"
	.string "Which difficulty mode would you\n"
	.string "like to play on?$"

NormalDifficultyCurrentlySelected::
# 266 "data/maps/InsideOfTruck/scripts.pory"
	.string "This is the recommended difficulty\n"
	.string "mode and is what this game is primarily\l"
	.string "balanced around.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} has challenging boss\n"
	.string "battles with hard level caps enforced.\p"
	.string "The player cannot access the Bag\n"
	.string "during trainer battles, and the battle\l"
	.string "style is forced to Set.\p"
	.string "You currently have {COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.\n"
	.string "Please select a different difficulty\l"
	.string "mode if you wish to change it.$"

EasyDifficultyCurrentlySelected::
# 281 "data/maps/InsideOfTruck/scripts.pory"
	.string "There are still level caps in {COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode,{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
	.string "however, the Boss Pokémon will be 2\l"
	.string "levels lower than in Normal.\l"
	.string "Boss teams are otherwise unchanged.\p"
	.string "The player is allowed to access the\n"
	.string "Bag during any battle.\p"
	.string "Additionally, the player can change the\n"
	.string "battle style from Set to Shift.\p"
	.string "This will still be more difficult than a\n"
	.string "vanilla Pokémon game.\p"
	.string "You currently have {COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.\n"
	.string "Please select a different difficulty\l"
	.string "mode if you wish to change it.$"

NormalDifficultyYesNo::
# 298 "data/maps/InsideOfTruck/scripts.pory"
	.string "This is the recommended difficulty\n"
	.string "mode and is what this game is primarily\l"
	.string "balanced around.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} has challenging boss\n"
	.string "battles with hard level caps enforced.\p"
	.string "The player cannot access the Bag\n"
	.string "during trainer battles, and the battle\l"
	.string "style is forced to Set.\p"
	.string "Do you want to turn on\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode?$"

EasyDifficultyYesNo::
# 312 "data/maps/InsideOfTruck/scripts.pory"
	.string "There are still level caps in {COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode,{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
	.string "however, the Boss Pokémon will be 2\l"
	.string "levels lower than in Normal.\l"
	.string "Boss teams are otherwise unchanged.\p"
	.string "The player is allowed to access the\n"
	.string "Bag during any battle.\p"
	.string "Additionally, the player can change the\n"
	.string "battle style from Set to Shift.\p"
	.string "This will still be more difficult than a\n"
	.string "vanilla Pokémon game.\p"
	.string "Do you want to turn on\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode?$"

NormalDifficultyEnabled::
# 328 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

EasyDifficultyEnabled::
# 333 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

MinGrindingAlreadyOnYesNo::
# 338 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} guarantees all\n"
	.string "Pokémon to have perfect IVs,\l"
	.string "and EVs cannot be obtained.\l"
	.string "Boss Pokémon will not have EVs either.\p"
	.string "If this mode is disabled, obtainable\n"
	.string "Pokémon will have random IVs and can be\l"
	.string "EV trained.\p"
	.string "Boss Pokémon will still have perfect\n"
	.string "IVs and will be EV trained.\p"
	.string "Do you want to turn\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Grinding Mode off?$"

MinGrindingAlreadyOffYesNo::
# 353 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} guarantees all\n"
	.string "Pokémon to have perfect IVs,\l"
	.string "and EVs cannot be obtained.\l"
	.string "Boss Pokémon will not have EVs either.\p"
	.string "If this mode is disabled, obtainable\n"
	.string "Pokémon will have random IVs and can be\l"
	.string "EV trained.\p"
	.string "Boss Pokémon will still have perfect\n"
	.string "IVs and will be EV trained.\p"
	.string "Do you want to turn\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode on?$"

MinGrindingEnabled::
# 368 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode enabled.$"

MinGrindingDisabled::
# 373 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Grinding Mode disabled.$"

CustomSettingsSaved::
# 379 "data/maps/InsideOfTruck/scripts.pory"
	.string "Custom settings saved.\n"
	.string "Good luck!$"
