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
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"

# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"

# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_lt VAR_PETALBURG_GYM_STATE, 10, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"

# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 5, 108
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"

# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_SLAKING, 3, 107
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"

# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 9, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_SLAKING, 3, 107
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"

# 64 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 9
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"

# 68 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"

# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"

# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"

# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"

# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"

# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanFourBadges
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanBattle
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanPostBattle
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 9, PetalburgCity_Gym_EventScript_NormanRematch
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"

# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"

# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"

# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"

# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"

# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	// Removed all flag/var changes that are only relevant for the duration of the tutorial
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"

# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	fadeoutbgm 1
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"

# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	// Emulate catching a pokémon off-screen
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 50
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_BALL
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitse
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 50
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_BALL
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitse
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 50
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_BALL
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitse
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 50
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_RG_BALL_CLICK
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitse
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse MUS_RG_CAUGHT_INTRO
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_PlayerHelpedWally
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitse
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 50
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"

# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	// Put player and Wally into a position they would normally be after the tutorial
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 4, 108
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxy LOCALID_WALLY, 5, 108
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_WALLY, DIR_NORTH
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"

# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	fadeinbgm 1
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"

# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	// Manually set VAR_PETALBURG_CITY_STATE to 3; this was previously done in
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	// in PetalburgCity_EventScript_WallyTutorial, but we have removed it
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	// (it also set VAR_PETALBURG_GYM_STATE to 1 but I don't think that's important,
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	// as it gets set to 2 in PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial shortly)
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"

# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"

# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"

# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"

# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"

# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"

# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"

# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"

# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"

# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"

# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"

# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"

# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"

# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"

# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"

# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"

# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"

# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"

# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"

# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"

# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"

# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"

# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"

# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFourBadges::
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToTrickHouse, MSGBOX_DEFAULT
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"

# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"

# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"

# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"

# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"

# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"

# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"

# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"

# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"

# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"

# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"

# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLYS_DAD
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_WallysDadArrivesSouth
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"

# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_RETURN
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_SWORDS_DANCE
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_NASTY_PLOT
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"

# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"

# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"

# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"

# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesSouth::
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 4
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"

# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 4, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerSouth
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 4, PetalburgCity_Gym_EventScript_WallysDadFaceNormanSouth
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 4, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadSouth
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"

# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"

# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"

# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"

# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanSouth::
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"

# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
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
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"

# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"

# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerSouth::
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerSouth
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"

# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"

# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"

# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"

# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadSouth::
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitSouth
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadSouth
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"

# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"

# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"

# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"

# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitSouth:
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"

# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"

# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"

# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"

# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadSouth:
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"

# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"

# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"

# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"

# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"

# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerSouth:
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"

# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"

# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"

# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"

# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"

# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"

# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"

# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"

# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"

# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"

# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"

# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"

# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"

# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"

# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"

# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"

# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"

# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"

# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"

# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"

# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"

# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"

# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"

# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"

# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"

# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"

# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"

# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_NPC
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"

# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"

# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"

# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_NPC
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"

# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"

# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"

# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"

# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_NPC
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"

# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"

# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"

# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"

# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"

# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"

# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"

# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"

# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"

# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"

# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"

# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"

# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"

# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"

# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Slaking::
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitse
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	playmoncry SPECIES_SLAKING, CRY_MODE_NORMAL
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_Slaking, MSGBOX_DEFAULT
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmoncry
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm?\p"
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your Pokémon.\p"
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a trainer like me, {PLAYER}.\p"
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a Pokémon, please…$"
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm? You're… Uh… Oh, right.\n"
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're Wally, right?$"
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: I'm going to go stay with my\n"
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in Verdanturf Town.\p"
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a Pokémon along.\p"
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a Pokémon before.\n"
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm. I see.$"
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, you heard that,\n"
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with Wally and make sure that he\n"
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a Pokémon.$"
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally, here, I'll loan you my Pokémon.\p"
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Zigzagoon!$"
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Oh, wow!\n"
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A Pokémon!\p"
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm. I'll give you a Poké Ball, too.\n"
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!\p"
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Poké Ball!$"
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Oh, wow!\n"
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: So, did it work out?$"
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Thank you, yes, it did.\n"
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your Pokémon back.\p"
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my Pokémon.\p"
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Whew. He's got a lot to learn,\n"
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "but when he opened his Bag earlier, I\l"
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "swear I saw a Mega Stone of some kind.\p"
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I wonder where he got that?\n" 
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Anyway…\p"
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong trainer, here's my advice.\p"
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for Rustboro City beyond this\n"
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader, Roxanne.\p"
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other Pokémon\n"
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gyms and defeat their leaders.\p"
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect Badges from them,\n"
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a Gym Leader, too.\n"
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.$"
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm? Aren't you going to the\n"
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon Gym in Rustboro City?\p"
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn trainer.\p"
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four Gym Badges, okay?$"
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: I see… So, you've beaten\n"
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader in Rustboro City.\p"
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more trainers\n"
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in Dewford Town is a\n"
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader named Brawly.\p"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm… {PLAYER}, you have gotten\n"
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of Badges\n"
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToTrickHouse:
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, {PLAYER}, it's great to see you.\n"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can see you've got the 4 Badges\l"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "required to face me in a real Gym\l"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle, but there's one more thing\l"
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you should do before\l"
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenging me.\p"
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}You should go check out the Trick\n"
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "House on Route 110, I think completing\l"
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "3 of those puzzles will give you a good\l"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "chance to test that new Mega Ring.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, and just a heads up before you go.\n"
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally came through here a little while\l"
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ago, and I gave him a Mega Ring and the\l"
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "same advice.\p"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Who knows, maybe you'll run into him at\n"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Trick House?$"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Alright!!!\p"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It looks like you've got those first 4\n"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Badges AND you've beaten the first few\l"
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "puzzles at the Trick House!\p"
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "As promised, we can finally have\n"
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "an official Gym battle!\p"
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have a real\n"
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with my own kid.\p"
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Gym Leader to win.\p"
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it, {PLAYER}…\p"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You've grown so much..\p"
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, rules are rules!\n"
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this!$"
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the Balance Badge\n"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from Dad!$"
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "With that Balance Badge,\n"
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon that know the HM move Surf\l"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be able to travel over water.\p"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is my gift to you. {PLAYER}, I'm\n"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sure you can use these correctly.$"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Unfortunately, I am in sole possession\n"
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "of the only Slakite in existence as it\l"
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "currently stands.\p"
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I need to hold onto it to hold down the\n"
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "fort here at the Gym, but I promise as\l"
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "soon as I get my hands on a second one,\l"
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will send it your way with one of\l"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your friends.$"
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "As the Gym Leader, I can't\n"
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as a father, it makes me both\n"
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…$"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman, you don't mind, do you?\p"
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, you should go visit\n"
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a trainer to\n"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, how are things going?\p"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of Pokémon is deep.\p"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this Gym open when you\n"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting trainers.\p"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The trainers of Petalburg Gym\n"
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "use all kinds of items.\p"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Speed Room.\p"
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Accuracy Room.\p"
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father!\p"
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your Pokémon.\p"
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your Pokémon!$"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the ACCURACY ROOM.\p"
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TRAINERS waiting for you.\p"
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the DEFENSE ROOM, and\n"
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the RECOVERY ROOM.\p"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your Pokémon's ATTACK power will be\n"
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as TRAINERS?\p"
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our Pokémon.$"
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the STRENGTH ROOM.\p"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ONE-HIT KO ROOM.\p"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have TRAINERS who are\n"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LEADER's kid!$"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your Pokémon…\n"
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The GYM LEADER, your\n"
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your Pokémon\n"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings TRAINERS have\n"
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their Pokémon.$"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what Pokémon await\n"
# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Petalburg City Pokémon Gym$"
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Petalburg City Pokémon Gym\p"
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman's Certified Trainers:\n"
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a Gym, it doesn't matter that\n"
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a Gym, it doesn't matter that\n"
# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one Pokémon that is\n"
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two Pokémon.$"
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_Slaking:
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Slaking: Uuuuurrrrr!$"
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PlayerHelpedWally:
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} helped Wally catch a Ralts!$"
