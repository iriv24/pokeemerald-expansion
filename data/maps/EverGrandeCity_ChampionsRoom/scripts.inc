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
.set LOCALID_DAWN, 5
# 7 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 8 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts::
# 9 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 10 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 11 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
# 12 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 13 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 14 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition:
# 15 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp:
# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnFrame:
# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Wallace::
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceIntroSpeech, MSGBOX_DEFAULT
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech, MSGBOX_DEFAULT
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceAndISaidYes, MSGBOX_DEFAULT
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_two_trainers TRAINER_STEVEN_WITH_WALLACE, EverGrandeCity_ChampionsRoom_Text_StevenDefeat, TRAINER_WALLACE_WITH_STEVEN, EverGrandeCity_ChampionsRoom_Text_WallaceDefeat
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	release
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated::
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_RIVAL
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_ExclamationMark
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_Delay48
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_DawnYouveWon, MSGBOX_DEFAULT
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_ExclamationMark
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_Delay48
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_DawnYouveWon, MSGBOX_DEFAULT
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_BIRCH
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call ProfBirch_EventScript_RatePokedex
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterUp
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_WalkInPlaceFasterUp
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer1
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_DAWN
# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 15
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer2
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, EverGrandeCity_ChampionsRoom_Movement_DawnApproachPlayer
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, EverGrandeCity_ChampionsRoom_Movement_DawnLookBackAndForth
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer1:
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer2:
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_DawnApproachPlayer:
# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_DawnLookBackAndForth:
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 259 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 260 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 261 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 262 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 263 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 264 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 265 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 266 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 267 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 268 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 269 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 270 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 271 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 272 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceIntroSpeech:
# 273 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: Welcome, {PLAYER}{KUN}!\p"
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That incident in Sootopolis City…\n"
# 275 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was superb work, putting an end\l"
# 276 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to that crisis all by yourself.\p"
# 277 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Oops!\p"
# 278 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It wouldn't be fair to say that you\n"
# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "alone ended the crisis.\p"
# 280 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You overcame that difficult situation\n"
# 281 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "by working as one with your Pokémon,\l"
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of course!\p"
# 283 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, I'm sure you're wondering why I'm\n"
# 284 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "not alone here… well…$"
# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 286 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech:
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Steven: I just couldn't stand to be\n"
# 288 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "left out of all of the fun!\p"
# 289 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You see, I was the Champion here in\n"
# 290 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Hoenn before Wallace, but we've done\l"
# 291 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "some shifting around over the years.\p"
# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Then everything happened with Drake\n"
# 293 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "being evil, and we called in Cynthia, and\l"
# 294 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "it was starting to feel like everyone\l"
# 295 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "was going to get to face off against\l"
# 296 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you, the strongest upcoming trainer\l"
# 297 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "we'd seen in a long time, except me!\p"
# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And I just couldn't sit back and stay\n"
# 299 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "on the sidelines, so I asked Wallace if,\l"
# 300 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "just this once, we could be Co-\l"
# 301 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Champions to face off against you.$"
# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 303 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceAndISaidYes:
# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: And I said yes, so here we are!\n"
# 305 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But enough talk for now…\p"
# 306 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's time for us to give you one final\n"
# 307 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "test, {PLAYER}…\p"
# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's time for us to have one last battle\n"
# 309 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to see if you really are the strongest\l"
# 310 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "trainer in the Hoenn region!$"
# 311 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceDefeat:
# 313 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was wonderful work.\n"
# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You were elegant, infuriatingly so.\l"
# 315 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And yet it was utterly glorious!\p"
# 316 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Kudos to you, {PLAYER}{KUN}!\p"
# 317 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are truly the strongest Pokémon\n"
# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "trainer in the Hoenn region, and\l"
# 319 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "certainly the strongest I've ever\l"
# 320 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "faced.$"
# 321 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenDefeat:
# 323 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Haha! That was incredible, {PLAYER}.\n"
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm so glad Wallace let me tag along for\l"
# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "this battle, so I could witness your\l"
# 326 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "strength firsthand.\p"
# 327 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations, {PLAYER}, on becoming\n"
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the new Pokémon League Champion!$"
# 329 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 330 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech:
# 331 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: The Pokémon you sent into\n"
# 332 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "battle…\p"
# 333 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "At times they danced like a spring\n"
# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "breeze, and at times they struck\l"
# 335 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "like lightning.\p"
# 336 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It was with light, yet surefooted,\n"
# 337 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "elegance that you led your Pokémon.\p"
# 338 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Even I felt bedazzled by your\n"
# 339 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "masterful performance!\p"
# 340 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You now stand at the glorious peak\n"
# 341 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of the Pokémon League.\p"
# 342 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I now proclaim you to be the new\n"
# 343 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Hoenn region…$"
# 344 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 345 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayAdvice:
# 346 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "May: {PLAYER}{KUN}!\p"
# 347 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here's some advice before you challenge\n"
# 348 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the Champion…$"
# 349 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 350 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice:
# 351 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Brendan: {PLAYER}!\p"
# 352 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "How would you like some advice before\n"
# 353 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you challenge the Champion?…$"
# 354 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 355 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_DawnYouveWon:
# 356 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Dawn: Huh?\n"
# 357 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What, what, what?\p"
# 358 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 359 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Could it be that…\l"
# 360 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's already over?\p"
# 361 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I couldn't even believe you'd made it\n"
# 362 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "past Cynthia already, but this…$"
# 363 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 364 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex:
# 365 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Prof. Birch: See?\n"
# 366 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did I tell you two?\p"
# 367 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Didn't I tell you that you don't need\n"
# 368 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about {PLAYER}{KUN}?\p"
# 369 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 370 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
# 371 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "When I heard that you defeated your\n"
# 372 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "own father at the Petalburg Gym,\l"
# 373 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I thought perhaps you had a chance…\p"
# 374 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But to think you've actually become\n"
# 375 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the Champion!\p"
# 376 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Ah, yes!\p"
# 377 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What became of your POKéDEX?\n"
# 378 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here, let me see.$"
# 379 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 380 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations:
# 381 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Prof. Birch: Anyways,\n"
# 382 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "congratulations!\p"
# 383 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, go proudly into the final room!$"
# 384 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 385 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe:
# 386 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: {PLAYER}{KUN}…\p"
# 387 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No, let me rephrase that properly.\p"
# 388 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The new Champion!\p"
# 389 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 390 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 391 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside:
# 392 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: I'm sorry, but…\p"
# 393 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those trainers who\n"
# 394 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become Champions may enter.\p"
# 395 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 396 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Prof. Birch.$"
# 397 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 398 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayCongratulations:
# 399 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "May: Groan…\p"
# 400 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 401 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 402 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm just joking! That's okay!\n"
# 403 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's the rule!\p"
# 404 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 405 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Honestly, congratulations!$"
# 406 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 407 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations:
# 408 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Brendan: Whaaaat?! … … … … …\n"
# 409 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 410 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It can't be helped if that's the rule.\p"
# 411 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, way to go!\n"
# 412 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations!$"
