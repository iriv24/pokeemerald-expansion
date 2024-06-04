# 1 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_WALLACE, 1
# 3 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_RIVAL, 2
# 4 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_BIRCH, 3
# 5 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_STEVEN, 4
# 6 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 7 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts::
# 8 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 9 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 10 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
# 11 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 12 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 13 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition:
# 14 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 15 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp:
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnFrame:
# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Wallace::
# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceIntroSpeech, MSGBOX_DEFAULT
# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech, MSGBOX_DEFAULT
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceAndISaidYes, MSGBOX_DEFAULT
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	multi_player_vs_2 TRAINER_STEVEN_WITH_WALLACE, EverGrandeCity_ChampionsRoom_Text_StevenDefeat, TRAINER_WALLACE_WITH_STEVEN, EverGrandeCity_ChampionsRoom_Text_WallaceDefeat
# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special SetCB2WhiteOut
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	release
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated::
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_RIVAL
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_BIRCH
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call ProfBirch_EventScript_RatePokedex
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterUp
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceIntroSpeech:
# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: Welcome, {PLAYER}{KUN}!\p"
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That incident in Sootopolis City…\n"
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was superb work, putting an end\l"
# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to that crisis all by yourself.\p"
# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Oops!\p"
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It wouldn't be fair to say that you\n"
# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "alone ended the crisis.\p"
# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You overcame that difficult situation\n"
# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "by working as one with your Pokémon,\l"
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of course!\p"
# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, I'm sure you're wondering why I'm\n"
# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "not alone here… well…$"
# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech:
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Steven: I just couldn't stand to be\n"
# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "left out of all of the fun!\p"
# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You see, I was the Champion here in\n"
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Hoenn before Wallace, but we've done\l"
# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "some shifting around over the years.\p"
# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Then everything happened with Drake\n"
# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "being evil, and we called in Cynthia, and\l"
# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "it was starting to feel like everyone\l"
# 259 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "was going to get to face off against\l"
# 260 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you, the strongest upcoming trainer\l"
# 261 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "we'd seen in a long time, except me!\p"
# 262 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And I just couldn't sit back and stay\n"
# 263 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "on the sidelines, so I asked Wallace if,\l"
# 264 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "just this once, we could be Co-\l"
# 265 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Champions to face off against you.$"
# 266 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 267 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceAndISaidYes:
# 268 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: And I said yes, so here we are!\n"
# 269 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But enough talk for now…\p"
# 270 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's time for us to give you one final\n"
# 271 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "test, {PLAYER}…\p"
# 272 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's time for us to have one last battle\n"
# 273 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to see if you really are the strongest\l"
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "trainer in the Hoenn region!$"
# 275 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 276 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceDefeat:
# 277 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was wonderful work.\n"
# 278 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You were elegant, infuriatingly so.\l"
# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And yet it was utterly glorious!\p"
# 280 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Kudos to you, {PLAYER}{KUN}!\p"
# 281 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are truly the strongest Pokémon\n"
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "trainer in the region, and certainly\l"
# 283 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the strongest I've ever faced.$"
# 284 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenDefeat:
# 286 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Haha! That was incredible, {PLAYER}.\n"
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm so glad Wallace let me tag along for\l"
# 288 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "this battle, so I could witness your\l"
# 289 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "strength firsthand.\p"
# 290 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations, {PLAYER}, on becoming\n"
# 291 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the new Pokémon League Champion!$"
# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 293 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech:
# 294 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: The Pokémon you sent into\n"
# 295 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "battle…\p"
# 296 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "At times they danced like a spring\n"
# 297 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "breeze, and at times they struck\l"
# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "like lightning.\p"
# 299 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It was with light, yet surefooted,\n"
# 300 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "elegance that you led your Pokémon.\p"
# 301 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Even I felt bedazzled by your\n"
# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "masterful performance!\p"
# 303 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You now stand at the glorious peak\n"
# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of the Pokémon League.\p"
# 305 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I now proclaim you to be the new\n"
# 306 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Hoenn region…$"
# 307 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayAdvice:
# 309 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "May: {PLAYER}{KUN}!\p"
# 310 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here's some advice before you challenge\n"
# 311 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the Champion…$"
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 313 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver:
# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "May: Huh?\n"
# 315 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What, what, what?\p"
# 316 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 317 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Could it be that…\l"
# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's already over?$"
# 319 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 320 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice:
# 321 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Brendan: {PLAYER}!\p"
# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "How would you like some advice before\n"
# 323 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you challenge the Champion?…$"
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon:
# 326 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Brendan: {PLAYER}…\p"
# 327 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Are you trying to tell me…\n"
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You've beaten the Champion?$"
# 329 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 330 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex:
# 331 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Prof. Birch: See?\n"
# 332 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did I tell you, {RIVAL}?\p"
# 333 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Didn't I tell you that you don't need\n"
# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about {PLAYER}{KUN}?\p"
# 335 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 336 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
# 337 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "When I heard that you defeated your\n"
# 338 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "own father at the Petalburg Gym,\l"
# 339 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I thought perhaps you had a chance…\p"
# 340 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But to think you've actually become\n"
# 341 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the Champion!\p"
# 342 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Ah, yes!\p"
# 343 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What became of your POKéDEX?\n"
# 344 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here, let me see.$"
# 345 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 346 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations:
# 347 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Prof. Birch: Anyways,\n"
# 348 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "congratulations!\p"
# 349 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, go proudly into the final room!$"
# 350 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 351 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe:
# 352 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: {PLAYER}{KUN}…\p"
# 353 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No, let me rephrase that properly.\p"
# 354 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The new Champion!\p"
# 355 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 356 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 357 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside:
# 358 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: I'm sorry, but…\p"
# 359 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those trainers who\n"
# 360 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become Champions may enter.\p"
# 361 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 362 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Prof. Birch.$"
# 363 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 364 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayCongratulations:
# 365 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "May: Groan…\p"
# 366 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 367 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 368 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm just joking! That's okay!\n"
# 369 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's the rule!\p"
# 370 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 371 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Honestly, congratulations!$"
# 372 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 373 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations:
# 374 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Brendan: Whaaaat?! … … … … …\n"
# 375 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 376 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It can't be helped if that's the rule.\p"
# 377 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, way to go!\n"
# 378 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations!$"
