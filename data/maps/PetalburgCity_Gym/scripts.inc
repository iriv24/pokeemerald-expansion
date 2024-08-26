# 1 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_NORMAN, 1
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLY, 10
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLYS_DAD, 11
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_SLAKING, 12
# 6 "data/maps/PetalburgCity_Gym/scripts.pory"

# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 9 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 13 "data/maps/PetalburgCity_Gym/scripts.pory"

# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 11, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge VAR_PETALBURG_GYM_STATE, 11, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 18 "data/maps/PetalburgCity_Gym/scripts.pory"

# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"

# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 43 "data/maps/PetalburgCity_Gym/scripts.pory"

# 44 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_lt VAR_PETALBURG_GYM_STATE, 10, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"

# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 5, 108
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"

# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_SLAKING, 3, 107
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"

# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 9, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_SLAKING, 3, 107
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"

# 68 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 9
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"

# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"

# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"

# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"

# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"

# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"

# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanFourBadges
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanBattle
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanPostBattle
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 9, PetalburgCity_Gym_EventScript_NormanRematch
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"

# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"

# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"

# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"

# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"

# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"

# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"

# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"

# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"

# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"

# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"

# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"

# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"

# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"

# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"

# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"

# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"

# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"

# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"

# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"

# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"

# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"

# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"

# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"

# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"

# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"

# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"

# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFourBadges::
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToTrickHouse, MSGBOX_DEFAULT
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"

# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"

# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"

# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"

# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"

# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"

# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"

# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"

# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"

# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"

# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"

# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLYS_DAD
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_WallysDadArrivesSouth
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"

# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_RETURN
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_SWORDS_DANCE
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_NASTY_PLOT
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"

# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"

# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"

# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"

# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesSouth::
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 4
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"

# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 4, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerSouth
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 4, PetalburgCity_Gym_EventScript_WallysDadFaceNormanSouth
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 4, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadSouth
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"

# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"

# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"

# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"

# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanSouth::
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"

# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"

# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"

# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"

# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerSouth::
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerSouth
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"

# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"

# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"

# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"

# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadSouth::
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitSouth
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadSouth
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"

# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"

# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"

# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"

# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitSouth:
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"

# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"

# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"

# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"

# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadSouth:
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"

# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"

# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"

# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"

# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"

# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerSouth:
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"

# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"

# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"

# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"

# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"

# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"

# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"

# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"

# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"

# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"

# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"

# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"

# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"

# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"

# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"

# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"

# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"

# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"

# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"

# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"

# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"

# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"

# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"

# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"

# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"

# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"

# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"

# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"

# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"

# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"

# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"

# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"

# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"

# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"

# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"

# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"

# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"

# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"

# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"

# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"

# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"

# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"

# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"

# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Slaking::
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitse
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	playmoncry SPECIES_SLAKING, CRY_MODE_NORMAL
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_Slaking, MSGBOX_DEFAULT
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmoncry
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm?\p"
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your Pokémon.\p"
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a trainer like me, {PLAYER}.\p"
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a Pokémon, please…$"
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm? You're… Uh… Oh, right.\n"
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're Wally, right?$"
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: I'm going to go stay with my\n"
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in Verdanturf Town.\p"
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a Pokémon along.\p"
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a Pokémon before.\n"
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm. I see.$"
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, you heard that,\n"
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with Wally and make sure that he\n"
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a Pokémon.$"
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally, here, I'll loan you my Pokémon.\p"
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Zigzagoon!$"
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Oh, wow!\n"
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A Pokémon!\p"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm. I'll give you a Poké Ball, too.\n"
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!\p"
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Poké Ball!$"
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Oh, wow!\n"
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: So, did it work out?$"
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Thank you, yes, it did.\n"
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your Pokémon back.\p"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my Pokémon.\p"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Whew. He's got a lot to learn,\n"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "but when he opened his Bag earlier, I\l"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "swear I saw a Mega Stone of some kind.\p"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I wonder where he got that?\n" 
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Anyway…\p"
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong trainer, here's my advice.\p"
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for Rustboro City beyond this\n"
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader, Roxanne.\p"
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other Pokémon\n"
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gyms and defeat their leaders.\p"
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect badges from them,\n"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a Gym Leader, too.\n"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.$"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm? Aren't you going to the\n"
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon Gym in Rustboro City?\p"
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn trainer.\p"
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four Gym Badges, okay?$"
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: I see… So, you've beaten\n"
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader in Rustboro City.\p"
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more trainers\n"
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in Dewford Town is a\n"
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader named Brawly.\p"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm… {PLAYER}, you have gotten\n"
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of badges\n"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToTrickHouse:
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, {PLAYER}, it's great to see you.\n"
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can see you've got the 4 Badges\l"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "required to face me in a real Gym\l"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle, but there's one more thing\l"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you should do before\l"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenging me.\p"
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go check out the Trick\n"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "House on Route 110, I think those\l"
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "puzzles will give you a good chance to\l"
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "test that new Mega Ring.\p"
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, and just a heads up before you go.\n"
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally came through here a little while\l"
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ago, and I gave him a Mega Ring and the\l"
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "same advice.\p"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Who knows, maybe you'll run into him at\n"
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Trick House?$"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Alright!!!\p"
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It looks like you've got those first 4\n"
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Badges AND you've beaten the first few\l"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "puzzles at the Trick House!\p"
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "As promised, we can finally have\n"
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "an official Gym battle!\p"
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have a real\n"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with my own kid.\p"
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Gym Leader to win.\p"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it, {PLAYER}…\p"
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You've grown so much..\p"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, rules are rules!\n"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this!$"
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the Balance Badge\n"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from Dad!$"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "With that Balance Badge,\n"
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon that know the HM move Surf\l"
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be able to travel over water.\p"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is my gift to you. {PLAYER}, I'm\n"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sure you can use these correctly.$"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Unfortunately, I am in sole possession\n"
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "of the only Slakite in existence as it\l"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "currently stands.\p"
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I need to hold onto it to hold down the\n"
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "fort here at the Gym, but I promise as\l"
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "soon as I get my hands on a second one,\l"
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will send it your way with one of\l"
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your friends.$"
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "As the Gym Leader, I can't\n"
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as a father, it makes me both\n"
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…$"
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman, you don't mind, do you?\p"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, you should go visit\n"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a trainer to\n"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, how are things going?\p"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of Pokémon is deep.\p"
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this GYM open when you\n"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting TRAINERS.\p"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The TRAINERS of PETALBURG GYM\n"
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "use all kinds of items.\p"
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the SPEED ROOM.\p"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ACCURACY ROOM.\p"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father!\p"
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your Pokémon.\p"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your Pokémon!$"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What ATTACK power…$"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our LEADER's kid.\p"
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A TRAINER's abilities are\n"
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The ONE-HIT KO ROOM is next.$"
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at GYMS.\n"
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a LEADER.$"
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our LEADER's kid.\p"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Pokémon to take a critical hit!$"
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a TRAINER worth my respect.\p"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the LEADER,\n"
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the TRAINERS of PETALBURG CITY have\l"
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the ACCURACY ROOM.\p"
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TRAINERS waiting for you.\p"
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the DEFENSE ROOM, and\n"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the RECOVERY ROOM.\p"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your Pokémon's ATTACK power will be\n"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as TRAINERS?\p"
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our Pokémon.$"
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the STRENGTH ROOM.\p"
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ONE-HIT KO ROOM.\p"
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have TRAINERS who are\n"
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LEADER's kid!$"
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your Pokémon…\n"
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The GYM LEADER, your\n"
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your Pokémon\n"
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings TRAINERS have\n"
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their Pokémon.$"
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1606 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what Pokémon await\n"
# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY Pokémon GYM$"
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1617 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY Pokémon GYM\p"
# 1618 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN'S CERTIFIED TRAINERS:\n"
# 1619 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1620 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1621 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1622 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1623 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1625 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1626 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1627 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1628 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1629 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 1630 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 1631 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 1632 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1633 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1634 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 1635 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 1636 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1637 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1638 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 1640 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 1641 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1642 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1644 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1645 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1646 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1647 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1648 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1649 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1650 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1651 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1652 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 1653 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one Pokémon that is\n"
# 1654 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 1655 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two Pokémon.$"
# 1657 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1658 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_Slaking:
# 1659 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Slaking: Uuuuurrrrr!$"
