# 1 "data/maps/Route112_CableCarStation/scripts.pory"

# 2 "data/maps/Route112_CableCarStation/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/Route112_CableCarStation/scripts.pory"

# 4 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_MapScripts::
# 5 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_CableCarStation_OnTransition
# 6 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route112_CableCarStation_OnFrame
# 7 "data/maps/Route112_CableCarStation/scripts.pory"
	.byte 0
# 8 "data/maps/Route112_CableCarStation/scripts.pory"

# 9 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_OnTransition:
# 10 "data/maps/Route112_CableCarStation/scripts.pory"
	setescapewarp MAP_ROUTE112, 28, 28
# 11 "data/maps/Route112_CableCarStation/scripts.pory"
	setflag FLAG_VISITED_MT_CHIMNEY
# 12 "data/maps/Route112_CableCarStation/scripts.pory"
	call_if_eq VAR_CABLE_CAR_STATION_STATE, 2, Route112_CableCarStation_EventScript_MoveAttendantAside
# 13 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 14 "data/maps/Route112_CableCarStation/scripts.pory"

# 15 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_MoveAttendantAside::
# 16 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ATTENDANT, 7, 4
# 17 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_LEFT
# 18 "data/maps/Route112_CableCarStation/scripts.pory"
	return
# 19 "data/maps/Route112_CableCarStation/scripts.pory"

# 20 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_OnFrame:
# 21 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 2, Route112_CableCarStation_EventScript_ExitCableCar
# 22 "data/maps/Route112_CableCarStation/scripts.pory"
	.2byte 0
# 23 "data/maps/Route112_CableCarStation/scripts.pory"

# 24 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_ExitCableCar::
# 25 "data/maps/Route112_CableCarStation/scripts.pory"
	lockall
# 26 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_CableCarStation_Movement_ExitCableCar
# 27 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_ATTENDANT, Route112_CableCarStation_Movement_FollowPlayerOutFromCableCar
# 28 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 0
# 30 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ATTENDANT, 6, 7
# 31 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
# 32 "data/maps/Route112_CableCarStation/scripts.pory"
	releaseall
# 33 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 34 "data/maps/Route112_CableCarStation/scripts.pory"

# 35 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_Attendant::
# 36 "data/maps/Route112_CableCarStation/scripts.pory"
	lock
# 37 "data/maps/Route112_CableCarStation/scripts.pory"
	faceplayer
# 38 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
# 39 "data/maps/Route112_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route112_CableCarStation_EventScript_RideCableCar
# 40 "data/maps/Route112_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route112_CableCarStation_EventScript_DeclineRide
# 41 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 42 "data/maps/Route112_CableCarStation/scripts.pory"

# 43 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_RideCableCar::
# 44 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_StepThisWay, MSGBOX_DEFAULT
# 45 "data/maps/Route112_CableCarStation/scripts.pory"
	closemessage
# 46 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_ATTENDANT, Route112_CableCarStation_Movement_LeadPlayerToCableCar
# 47 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_CableCarStation_Movement_BoardCableCar
# 48 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_0x8004, FALSE  @ Going up
# 50 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 1
# 51 "data/maps/Route112_CableCarStation/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 52 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCarWarp
# 53 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCar
# 54 "data/maps/Route112_CableCarStation/scripts.pory"
	waitstate
# 55 "data/maps/Route112_CableCarStation/scripts.pory"
	release
# 56 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 57 "data/maps/Route112_CableCarStation/scripts.pory"

# 58 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_DeclineRide::
# 59 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_RideAnotherTime, MSGBOX_DEFAULT
# 60 "data/maps/Route112_CableCarStation/scripts.pory"
	release
# 61 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 62 "data/maps/Route112_CableCarStation/scripts.pory"

# 63 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_LeadPlayerToCableCar:
# 64 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 65 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 66 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_right
# 67 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_in_place_faster_left
# 68 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 69 "data/maps/Route112_CableCarStation/scripts.pory"

# 70 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_FollowPlayerOutFromCableCar:
# 71 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 72 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_left
# 73 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 74 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 75 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 76 "data/maps/Route112_CableCarStation/scripts.pory"

# 77 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_BoardCableCar:
# 78 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 79 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 80 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 81 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 82 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 83 "data/maps/Route112_CableCarStation/scripts.pory"

# 84 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_ExitCableCar:
# 85 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 86 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 87 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 88 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 89 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 90 "data/maps/Route112_CableCarStation/scripts.pory"

# 91 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_CableCarReadyGetOn:
# 92 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "The Cable Car is ready to go up.\n"
# 93 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Would you like to be on it?$"
# 94 "data/maps/Route112_CableCarStation/scripts.pory"

# 95 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_StepThisWay:
# 96 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Please step this way.$"
# 97 "data/maps/Route112_CableCarStation/scripts.pory"

# 98 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_RideAnotherTime:
# 99 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Please ride with us another time.$"
