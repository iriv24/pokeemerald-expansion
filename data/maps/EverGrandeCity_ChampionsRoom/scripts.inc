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
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer1
# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_DAWN
# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 15
# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer2
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, EverGrandeCity_ChampionsRoom_Movement_DawnApproachPlayer
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, EverGrandeCity_ChampionsRoom_Movement_DawnLookBackAndForth
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer1:
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer2:
# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_DawnApproachPlayer:
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_DawnLookBackAndForth:
# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 259 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 260 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 261 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 262 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 263 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 264 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 265 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 266 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 267 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 268 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 269 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 270 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 271 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceIntroSpeech:
# 272 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: Welcome, {PLAYER}{KUN}!\p"
# 273 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That incident in Sootopolis City…\n"
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was superb work, putting an end\l"
# 275 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to that crisis all by yourself.\p"
# 276 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Oops!\p"
# 277 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It wouldn't be fair to say that you\n"
# 278 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "alone ended the crisis.\p"
# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You overcame that difficult situation\n"
# 280 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "by working as one with your Pokémon,\l"
# 281 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of course!\p"
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, I'm sure you're wondering why I'm\n"
# 283 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "not alone here… well…$"
# 284 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech:
# 286 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Steven: I just couldn't stand to be\n"
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "left out of all of the fun!\p"
# 288 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You see, I was the Champion here in\n"
# 289 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Hoenn before Wallace, but we've done\l"
# 290 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "some shifting around over the years.\p"
# 291 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Then everything happened with Drake\n"
# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "being evil, and we called in Cynthia, and\l"
# 293 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "it was starting to feel like everyone\l"
# 294 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "was going to get to face off against\l"
# 295 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you, the strongest upcoming trainer\l"
# 296 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "we'd seen in a long time, except me!\p"
# 297 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And I just couldn't sit back and stay\n"
# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "on the sidelines, so I asked Wallace if,\l"
# 299 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "just this once, we could be Co-\l"
# 300 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Champions to face off against you.$"
# 301 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceAndISaidYes:
# 303 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: And I said yes, so here we are!\n"
# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But enough talk for now…\p"
# 305 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's time for us to give you one final\n"
# 306 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "test, {PLAYER}…\p"
# 307 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's time for us to have one last battle\n"
# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to see if you really are the strongest\l"
# 309 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "trainer in the Hoenn region!$"
# 310 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 311 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceDefeat:
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was wonderful work.\n"
# 313 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You were elegant, infuriatingly so.\l"
# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And yet it was utterly glorious!\p"
# 315 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Kudos to you, {PLAYER}{KUN}!\p"
# 316 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are truly the strongest Pokémon\n"
# 317 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "trainer in the Hoenn region, and\l"
# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "certainly the strongest I've ever\l"
# 319 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "faced.$"
# 320 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 321 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenDefeat:
# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Haha! That was incredible, {PLAYER}.\n"
# 323 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm so glad Wallace let me tag along for\l"
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "this battle, so I could witness your\l"
# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "strength firsthand.\p"
# 326 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations, {PLAYER}, on becoming\n"
# 327 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the new Pokémon League Champion!$"
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 329 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech:
# 330 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: The Pokémon you sent into\n"
# 331 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "battle…\p"
# 332 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "At times they danced like a spring\n"
# 333 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "breeze, and at times they struck\l"
# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "like lightning.\p"
# 335 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It was with light, yet surefooted,\n"
# 336 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "elegance that you led your Pokémon.\p"
# 337 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Even I felt bedazzled by your\n"
# 338 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "masterful performance!\p"
# 339 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You now stand at the glorious peak\n"
# 340 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of the Pokémon League.\p"
# 341 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I now proclaim you to be the new\n"
# 342 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Hoenn region…$"
# 343 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 344 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayAdvice:
# 345 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "May: {PLAYER}{KUN}!\p"
# 346 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here's some advice before you challenge\n"
# 347 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the Champion…$"
# 348 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 349 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice:
# 350 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Brendan: {PLAYER}!\p"
# 351 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "How would you like some advice before\n"
# 352 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you challenge the Champion?…$"
# 353 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 354 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_DawnYouveWon:
# 355 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Dawn: Huh?\n"
# 356 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What, what, what?\p"
# 357 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 358 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Could it be that…\l"
# 359 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's already over?\p"
# 360 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I couldn't even believe you'd made it\n"
# 361 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "past Cynthia already, but this…$"
# 362 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 363 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex:
# 364 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Prof. Birch: See?\n"
# 365 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did I tell you two?\p"
# 366 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Didn't I tell you that you don't need\n"
# 367 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about {PLAYER}{KUN}?\p"
# 368 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 369 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
# 370 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "When I heard that you defeated your\n"
# 371 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "own father at the Petalburg Gym,\l"
# 372 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I thought perhaps you had a chance…\p"
# 373 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But to think you've actually become\n"
# 374 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the Champion!\p"
# 375 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Ah, yes!\p"
# 376 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What became of your Pokédex?\n"
# 377 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here, let me see.$"
# 378 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 379 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations:
# 380 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Prof. Birch: Anyways,\n"
# 381 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "congratulations!\p"
# 382 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, go proudly into the final room!$"
# 383 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 384 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe:
# 385 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: {PLAYER}{KUN}…\p"
# 386 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No, let me rephrase that properly.\p"
# 387 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The new Champion!\p"
# 388 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 389 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 390 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside:
# 391 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: I'm sorry, but…\p"
# 392 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those trainers who\n"
# 393 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become Champions may enter.\p"
# 394 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 395 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Prof. Birch.$"
# 396 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 397 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayCongratulations:
# 398 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "May: Groan…\p"
# 399 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 400 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 401 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm just joking! That's okay!\n"
# 402 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's the rule!\p"
# 403 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 404 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Honestly, congratulations!$"
# 405 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 406 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations:
# 407 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Brendan: Whaaaat?! … … … … …\n"
# 408 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 409 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It can't be helped if that's the rule.\p"
# 410 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, way to go!\n"
# 411 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations!$"
