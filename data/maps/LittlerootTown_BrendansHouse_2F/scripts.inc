# 1 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_MapScripts::
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition:
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 0, 2
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox EnterCheatCode_EnterCheatCodeText, MSGBOX_YESNO
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq CheatCodeExit
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special EnterCheatCode
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special GetCheatCodeFeedback
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, CheatCodeFailed
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, CheatCodeDexAll
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 2, CheatCodeCaughtEmAll
# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 3, CheatCodeEzCatch
# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 4, CheatCodeMegaStones
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 5, CheatCodeShinyStarters
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 6, CheatCodeMaxMoney
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 7, CheatCodeShinyRoamers
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 8, CheatCodeMonoStarters
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@goto_if_eq VAR_RESULT, 7, CheatCodeGiveMenu
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 291 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeFailed::
# 292 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox EnterCheatCode_FailedText, MSGBOX_DEFAULT
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 296 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeDexAll::
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox EnterCheatCode_SucceededText, MSGBOX_DEFAULT
# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_DEXALL, CheatCodeDexAllOff
# 299 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_DEXALL, CheatCodeDexAllOn
# 300 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 301 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 302 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeDexAllOn::
# 303 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeDexAllOn_Text, MSGBOX_DEFAULT
# 304 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 307 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeDexAllOff::
# 308 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeDexAllOff_Text, MSGBOX_DEFAULT
# 309 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 312 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeCaughtEmAll::
# 313 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox EnterCheatCode_SucceededText, MSGBOX_DEFAULT
# 314 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeCaughtEmAll_Text, MSGBOX_DEFAULT
# 315 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 316 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 317 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 318 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeEzCatch::
# 319 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox EnterCheatCode_SucceededText, MSGBOX_DEFAULT
# 320 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_EZ_CATCH, CheatCodeEzCatchOff
# 321 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_EZ_CATCH, CheatCodeEzCatchOn
# 322 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 323 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 324 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeEzCatchOn::
# 325 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeEzCatchOn_Text, MSGBOX_DEFAULT
# 326 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 327 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 329 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeEzCatchOff::
# 330 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeEzCatchOff_Text, MSGBOX_DEFAULT
# 331 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 332 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 333 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 334 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeMegaStones::
# 335 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox EnterCheatCode_SucceededText, MSGBOX_DEFAULT
# 336 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_VENUSAURITE
# 337 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_CHARIZARDITE_X
# 338 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_CHARIZARDITE_Y
# 339 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_BLASTOISINITE 
# 340 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_BEEDRILLITE
# 341 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_PIDGEOTITE
# 342 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ALAKAZITE
# 343 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SLOWBRONITE
# 344 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GENGARITE
# 345 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_KANGASKHANITE
# 346 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_PINSIRITE
# 347 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GYARADOSITE
# 348 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_AERODACTYLITE
# 349 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MEWTWONITE_X
# 350 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MEWTWONITE_Y
# 351 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_AMPHAROSITE
# 352 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_STEELIXITE
# 353 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SCIZORITE
# 354 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_HERACRONITE
# 355 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_HOUNDOOMINITE
# 356 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_TYRANITARITE
# 357 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SCEPTILITE
# 358 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_BLAZIKENITE
# 359 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SWAMPERTITE
# 360 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GARDEVOIRITE
# 361 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SABLENITE
# 362 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MAWILITE
# 363 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_AGGRONITE
# 364 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MEDICHAMITE
# 365 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MANECTITE
# 366 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SHARPEDONITE
# 367 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_CAMERUPTITE
# 368 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ALTARIANITE
# 369 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_BANETTITE
# 370 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ABSOLITE
# 371 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GLALITITE
# 372 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SALAMENCITE
# 373 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_METAGROSSITE
# 374 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_LATIASITE
# 375 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_LATIOSITE
# 376 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_LOPUNNITE
# 377 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GARCHOMPITE
# 378 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_LUCARIONITE
# 379 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ABOMASITE
# 380 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GALLADITE
# 381 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_AUDINITE
# 382 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_DIANCITE
# 383 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_LUXRITE
# 384 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_TORTERRITE
# 385 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_EMPOLEONITE_O
# 386 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_EMPOLEONITE_D
# 387 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_INFERNAPITE
# 388 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_KINGLERITE
# 389 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_BUTTERFRITE
# 390 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MACHAMPITE
# 391 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_LAPRASITE
# 392 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SNORLAXITE
# 393 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GARBODORITE
# 394 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ORBEETLITE
# 395 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_DREDNAWITE
# 396 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_COALOSSITE
# 397 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_APPLITE
# 398 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SANDACONDITE
# 399 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_TOXTRICITITE
# 400 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_CENTISKITE
# 401 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GRIMMITE
# 402 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_COPPERAJITE
# 403 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SLAKITE
# 404 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ROSERADITE
# 405 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_DUSKNOIRITE
# 406 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeMegaStonesGiven_Text, MSGBOX_DEFAULT
# 407 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 408 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 409 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 410 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeShinyStarters::
# 411 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox EnterCheatCode_SucceededText, MSGBOX_DEFAULT
# 412 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_SHINY_STARTERS, CheatCodeShinyStartersOff
# 413 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, CheatCodeShinyStartersOn
# 414 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 415 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 416 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeShinyStartersOn::
# 417 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeShinyStartersOn_Text, MSGBOX_DEFAULT
# 418 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 419 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 420 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 421 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeShinyStartersOff::
# 422 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeShinyStartersOff_Text, MSGBOX_DEFAULT
# 423 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 424 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 425 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 426 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeShinyRoamers::
# 427 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox EnterCheatCode_SucceededText, MSGBOX_DEFAULT
# 428 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_SHINY_ROAMERS, CheatCodeShinyRoamersOff
# 429 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_SHINY_ROAMERS, CheatCodeShinyRoamersOn
# 430 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 431 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 432 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeShinyRoamersOn::
# 433 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeShinyRoamersOn_Text, MSGBOX_DEFAULT
# 434 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 435 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 436 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 437 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeShinyRoamersOff::
# 438 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeShinyRoamersOff_Text, MSGBOX_DEFAULT
# 439 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 440 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 441 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 442 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeMaxMoney::
# 443 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox EnterCheatCode_SucceededText, MSGBOX_DEFAULT
# 444 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeMaxMoney_Text, MSGBOX_DEFAULT
# 445 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 446 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 447 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 448 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeMonoStarters::
# 449 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox EnterCheatCode_SucceededText, MSGBOX_DEFAULT
# 450 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_USE_MONOTYPE_STARTERS, CheatCodeMonoStartersOff
# 451 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_USE_MONOTYPE_STARTERS, CheatCodeMonoStartersOn
# 452 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 453 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 454 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeMonoStartersOn::
# 455 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeMonoStartersOn_Text, MSGBOX_DEFAULT
# 456 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 457 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 458 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 459 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeMonoStartersOff::
# 460 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeMonoStartersOff_Text, MSGBOX_DEFAULT
# 461 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 462 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 463 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 464 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeGiveMenu::
# 465 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox EnterCheatCode_SucceededText, MSGBOX_DEFAULT
# 466 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_GIVE_MENU, CheatCodeGiveMenuOff
# 467 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_GIVE_MENU, CheatCodeGiveMenuOn
# 468 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 469 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 470 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeGiveMenuOn::
# 471 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeGiveMenuOn_Text, MSGBOX_DEFAULT
# 472 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 473 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 474 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 475 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeGiveMenuOff::
# 476 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox CheatCodeGiveMenuOff_Text, MSGBOX_DEFAULT
# 477 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 478 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 479 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 480 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeExit::
# 481 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 482 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 483 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 484 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
EnterCheatCode_EnterCheatCodeText:
# 485 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 486 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Enter a cheat code?$"
# 487 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 488 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
EnterCheatCode_FailedText:
# 489 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheat code failed.$"
# 490 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	
# 491 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
EnterCheatCode_SucceededText:
# 492 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheat code succeeded.$"
# 493 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 494 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeDexAllOn_Text:
# 495 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "DexAll cheat enabled.$"
# 496 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 497 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeDexAllOff_Text:
# 498 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "DexAll cheat disabled.$"
# 499 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 500 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeCaughtEmAll_Text:
# 501 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "CaughtAll cheat enabled.$"
# 502 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 503 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeMaxMoney_Text:
# 504 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Money set to max amount.$"
# 505 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 506 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeEzCatchOn_Text:
# 507 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "EZCatch cheat enabled.$"
# 508 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 509 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeEzCatchOff_Text:
# 510 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "EZCatch cheat disabled.$"
# 511 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 512 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeMegaStonesGiven_Text:
# 513 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "All Mega Stones given.$"
# 514 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 515 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeShinyStartersOn_Text:
# 516 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ShinyStarters cheat enabled.$"
# 517 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 518 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeShinyStartersOff_Text:
# 519 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ShinyStarters cheat disabled.$"
# 520 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 521 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeShinyRoamersOn_Text:
# 522 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ShinyRoamers cheat enabled.$"
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 524 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeShinyRoamersOff_Text:
# 525 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ShinyRoamers cheat disabled.$"
# 526 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 527 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeMonoStartersOn_Text:
# 528 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Monotype Starters cheat enabled.$"
# 529 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 530 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeMonoStartersOff_Text:
# 531 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Monotype Starters cheat disabled.$"
# 532 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 533 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeGiveMenuOn_Text:
# 534 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Give Menu enabled:\n"
# 535 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Hold “A” and press “Start” to open.$"
# 536 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 537 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
CheatCodeGiveMenuOff_Text:
# 538 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Give Menu disabled.$"
# 539 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 540 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 543 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 544 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
# 545 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER}, how do you like your\n"
# 546 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "new room?\p"
# 547 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Good! Everything's put away neatly!\p"
# 548 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They finished moving everything in\n"
# 549 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "downstairs, too.\p"
# 550 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Pokémon movers are so convenient!\p"
# 551 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, you should make sure that\n"
# 552 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "everything's all there on your desk.$"
# 553 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 554 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 555 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 556 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 557 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the Start Menu with START.\p"
# 558 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 559 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the L Menu with L.\p"
# 560 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 561 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 562 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 563 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 564 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Hoenn region map.$"
