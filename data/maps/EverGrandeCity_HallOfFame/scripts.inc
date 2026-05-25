# 1 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 2 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
.set LOCALID_WALLACE, 1
# 3 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 4 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_MapScripts::
# 5 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_HallOfFame_OnFrame
# 6 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_HallOfFame_OnWarp
# 7 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 9 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_OnWarp:
# 10 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_TurnPlayerNorth
# 11 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.2byte 0
# 12 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 13 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_TurnPlayerNorth::
# 14 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 15 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 17 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_OnFrame:
# 18 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame
# 19 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.2byte 0
# 20 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 21 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame::
# 22 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	lockall
# 23 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1
# 24 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1
# 25 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 26 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 27 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 28 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 29 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions, MSGBOX_DEFAULT
# 30 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	closemessage
# 31 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2
# 32 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2
# 33 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 34 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 20
# 35 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 36 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 37 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 38 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames, MSGBOX_DEFAULT
# 39 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	closemessage
# 40 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 41 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 42 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 43 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 20
# 44 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 45 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 46 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 40
# 47 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setvar VAR_TEMP_1, 1
# 48 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 49 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
# 50 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_ge EverGrandeCity_HallOfFame_EventScript_ClearFlagsHard
# 51 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 52 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
# 53 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	checkplayergender
# 54 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_HallOfFame_EventScript_GameClearMale
# 55 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_HallOfFame_EventScript_GameClearFemale
# 56 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 57 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 58 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_ClearFlagsHard::
# 59 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlagsHard
# 60 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	checkplayergender
# 61 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_HallOfFame_EventScript_GameClearMale
# 62 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_HallOfFame_EventScript_GameClearFemale
# 63 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 64 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 65 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_GameClearMale::
# 66 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 67 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 68 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	special GameClear
# 69 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitstate
# 70 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	releaseall
# 71 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 72 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 73 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_GameClearFemale::
# 74 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 75 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 76 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	special GameClear
# 77 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitstate
# 78 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	releaseall
# 79 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 80 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 81 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1:
# 82 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 83 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 84 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 85 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 86 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 87 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 88 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	step_end
# 89 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 90 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2:
# 91 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 92 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 93 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 94 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 95 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 96 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	step_end
# 97 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 98 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions:
# 99 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Wallace: This room…\p"
# 100 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "This is where we keep records of\n"
# 101 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Pokémon that prevailed through\l"
# 102 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "harsh battles.\p"
# 103 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "It is here that the League Champions\n"
# 104 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "are honored.$"
# 105 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 106 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames:
# 107 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Wallace: Come on, let's record your\n"
# 108 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "name as a trainer who triumphed over\l"
# 109 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "the Pokémon League, and the names of\l"
# 110 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "the partners who battled with you.$"
