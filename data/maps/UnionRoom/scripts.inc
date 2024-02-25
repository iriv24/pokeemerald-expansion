# 1 "data/maps/UnionRoom/scripts.pory"

# 2 "data/maps/UnionRoom/scripts.pory"
@ Note: LOCALID_UNION_ROOM_PLAYER_# are local ids for this map used elsewhere. They're defined in event_objects.h
# 3 "data/maps/UnionRoom/scripts.pory"

# 4 "data/maps/UnionRoom/scripts.pory"
UnionRoom_MapScripts::
# 5 "data/maps/UnionRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, UnionRoom_OnResume
# 6 "data/maps/UnionRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UnionRoom_OnTransition
# 7 "data/maps/UnionRoom/scripts.pory"
	.byte 0
# 8 "data/maps/UnionRoom/scripts.pory"

# 9 "data/maps/UnionRoom/scripts.pory"
UnionRoom_OnResume:
# 10 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
# 11 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
# 12 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
# 13 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
# 14 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
# 15 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
# 16 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
# 17 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
# 18 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_1
# 19 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_2
# 20 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_3
# 21 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_4
# 22 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_5
# 23 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_6
# 24 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_7
# 25 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_8
# 26 "data/maps/UnionRoom/scripts.pory"
	special RunUnionRoom
# 27 "data/maps/UnionRoom/scripts.pory"
	end
# 28 "data/maps/UnionRoom/scripts.pory"

# 29 "data/maps/UnionRoom/scripts.pory"
UnionRoom_OnTransition:
# 30 "data/maps/UnionRoom/scripts.pory"
	end
# 31 "data/maps/UnionRoom/scripts.pory"

# 32 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player1::
# 33 "data/maps/UnionRoom/scripts.pory"
	lock
# 34 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 35 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_1
# 36 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 37 "data/maps/UnionRoom/scripts.pory"
	release
# 38 "data/maps/UnionRoom/scripts.pory"
	end
# 39 "data/maps/UnionRoom/scripts.pory"

# 40 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player2::
# 41 "data/maps/UnionRoom/scripts.pory"
	lock
# 42 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 43 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_2
# 44 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 45 "data/maps/UnionRoom/scripts.pory"
	release
# 46 "data/maps/UnionRoom/scripts.pory"
	end
# 47 "data/maps/UnionRoom/scripts.pory"

# 48 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player3::
# 49 "data/maps/UnionRoom/scripts.pory"
	lock
# 50 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 51 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_3
# 52 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 53 "data/maps/UnionRoom/scripts.pory"
	release
# 54 "data/maps/UnionRoom/scripts.pory"
	end
# 55 "data/maps/UnionRoom/scripts.pory"

# 56 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player4::
# 57 "data/maps/UnionRoom/scripts.pory"
	lock
# 58 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 59 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_4
# 60 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 61 "data/maps/UnionRoom/scripts.pory"
	release
# 62 "data/maps/UnionRoom/scripts.pory"
	end
# 63 "data/maps/UnionRoom/scripts.pory"

# 64 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player5::
# 65 "data/maps/UnionRoom/scripts.pory"
	lock
# 66 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 67 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_5
# 68 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 69 "data/maps/UnionRoom/scripts.pory"
	release
# 70 "data/maps/UnionRoom/scripts.pory"
	end
# 71 "data/maps/UnionRoom/scripts.pory"

# 72 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player6::
# 73 "data/maps/UnionRoom/scripts.pory"
	lock
# 74 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 75 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_6
# 76 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 77 "data/maps/UnionRoom/scripts.pory"
	release
# 78 "data/maps/UnionRoom/scripts.pory"
	end
# 79 "data/maps/UnionRoom/scripts.pory"

# 80 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player7::
# 81 "data/maps/UnionRoom/scripts.pory"
	lock
# 82 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 83 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_7
# 84 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 85 "data/maps/UnionRoom/scripts.pory"
	release
# 86 "data/maps/UnionRoom/scripts.pory"
	end
# 87 "data/maps/UnionRoom/scripts.pory"

# 88 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player8::
# 89 "data/maps/UnionRoom/scripts.pory"
	lock
# 90 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 91 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_8
# 92 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 93 "data/maps/UnionRoom/scripts.pory"
	release
# 94 "data/maps/UnionRoom/scripts.pory"
	end
# 95 "data/maps/UnionRoom/scripts.pory"

# 96 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Attendant::
# 97 "data/maps/UnionRoom/scripts.pory"
	lock
# 98 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 99 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_ATTENDANT
# 100 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 101 "data/maps/UnionRoom/scripts.pory"
	release
# 102 "data/maps/UnionRoom/scripts.pory"
	end
# 103 "data/maps/UnionRoom/scripts.pory"

# 104 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Unused::
# 105 "data/maps/UnionRoom/scripts.pory"
	lockall
# 106 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_UNUSED
# 107 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 108 "data/maps/UnionRoom/scripts.pory"
	releaseall
# 109 "data/maps/UnionRoom/scripts.pory"
	end
