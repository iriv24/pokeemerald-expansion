# 1 "data/maps/TrainerHill_Entrance/scripts.pory"

# 2 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_NURSE, 2
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_GIRL, 4
# 5 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_MAN, 5
# 6 "data/maps/TrainerHill_Entrance/scripts.pory"

# 7 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_MapScripts::
# 8 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_OnResume
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_OnReturn
# 10 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_OnTransition
# 11 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_OnLoad
# 12 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_OnFrame
# 13 "data/maps/TrainerHill_Entrance/scripts.pory"
	.byte 0
# 14 "data/maps/TrainerHill_Entrance/scripts.pory"

# 15 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnTransition:
# 16 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 17 "data/maps/TrainerHill_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 18 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 19 "data/maps/TrainerHill_Entrance/scripts.pory"

# 20 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 21 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnWarp:
# 22 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 23 "data/maps/TrainerHill_Entrance/scripts.pory"

# 24 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnResume:
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_resumetimer
# 26 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 0
# 27 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getusingereader
# 28 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_TryFaceAttendant  @ VAR_RESULT always FALSE here
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 9, 6
# 30 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 32 "data/maps/TrainerHill_Entrance/scripts.pory"

# 33 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_TryFaceAttendant::
# 34 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getwon
# 35 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant
# 36 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 37 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 38 "data/maps/TrainerHill_Entrance/scripts.pory"

# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant::
# 40 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 41 "data/maps/TrainerHill_Entrance/scripts.pory"

# 42 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnReturn:
# 43 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_NURSE
# 44 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_ATTENDANT
# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_MAN
# 46 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_GIRL
# 47 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 48 "data/maps/TrainerHill_Entrance/scripts.pory"

# 49 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnLoad:
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_OpenCounterDoor
# 51 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 52 "data/maps/TrainerHill_Entrance/scripts.pory"

# 53 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_OpenCounterDoor::
# 54 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
# 55 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 56 "data/maps/TrainerHill_Entrance/scripts.pory"

# 57 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnFrame:
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_EventScript_ExitChallenge
# 59 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_ExitElevator
# 60 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_EventScript_EntryTrigger
# 61 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
# 62 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte 0
# 63 "data/maps/TrainerHill_Entrance/scripts.pory"

# 64 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitElevator::
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 66 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
# 67 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 68 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
# 69 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 71 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"

# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge::
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 1
# 78 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 79 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallengeLost
# 81 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallengeECard
# 82 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_EndExitChallenge
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"

# 84 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeLost::
# 85 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 86 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 87 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"

# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeECard::
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 92 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 93 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
# 94 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerExitChallenge::
# 95 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 100 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 101 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EndExitChallenge::
# 102 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"

# 104 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Nurse::
# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 106 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 107 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 108 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"

# 112 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant::
# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 116 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_ThanksForPlaying
# 117 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
# 118 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AttendantEnd
# 119 "data/maps/TrainerHill_Entrance/scripts.pory"

# 120 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ThanksForPlaying::
# 121 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 122 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AttendantEnd::
# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"

# 126 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger::
# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 128 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 129 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Closed
# 130 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 131 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getsaved
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveGame
# 133 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_allfloorsused
# 134 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_AllFloorsUsed
# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 137 "data/maps/TrainerHill_Entrance/scripts.pory"

# 138 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AllFloorsUsed::
# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
# 140 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers::
# 141 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 142 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
# 144 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 145 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_ChooseChallenge
# 146 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_CancelEntry
# 147 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_Info
# 148 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 149 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 150 "data/maps/TrainerHill_Entrance/scripts.pory"

# 151 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Info::
# 152 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"

# 156 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge::
# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_Entrance_EventScript_CancelEntry
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 161 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setmode VAR_RESULT
# 162 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 163 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 165 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 167 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 168 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 169 "data/maps/TrainerHill_Entrance/scripts.pory"

# 170 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_CancelEntry::
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 172 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 173 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 174 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 176 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 177 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"

# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame::
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveFailed
# 185 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 187 "data/maps/TrainerHill_Entrance/scripts.pory"

# 188 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveFailed::
# 189 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 190 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 191 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"

# 193 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Closed::
# 194 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 195 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 196 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 197 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 198 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 199 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"

# 201 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerFaceAttendant:
# 202 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 204 "data/maps/TrainerHill_Entrance/scripts.pory"

# 205 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PushPlayerBackFromCounter:
# 206 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 207 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 208 "data/maps/TrainerHill_Entrance/scripts.pory"

# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp:
# 211 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 213 "data/maps/TrainerHill_Entrance/scripts.pory"

# 214 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitElevator:
# 215 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 216 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"

# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Records::
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 223 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitstate
# 224 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 225 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 226 "data/maps/TrainerHill_Entrance/scripts.pory"

# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man::
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ManTrainerHillClosed
# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"

# 232 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
# 233 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 235 "data/maps/TrainerHill_Entrance/scripts.pory"

# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl::
# 237 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
# 238 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"

# 241 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
# 242 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
# 243 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 244 "data/maps/TrainerHill_Entrance/scripts.pory"

# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Clerk::
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 247 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ExpandedPokemart
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Basic
# 252 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 253 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 254 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 255 "data/maps/TrainerHill_Entrance/scripts.pory"

# 256 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 257 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Basic:
# 258 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 261 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_AWAKENING
# 262 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 266 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 267 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 270 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 272 "data/maps/TrainerHill_Entrance/scripts.pory"

# 273 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExpandedPokemart::
# 274 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Expanded
# 275 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"

# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Expanded:
# 281 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 282 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MAX_POTION
# 283 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 284 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_REVIVE
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 287 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 289 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 290 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 291 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 292 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 294 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 295 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 296 "data/maps/TrainerHill_Entrance/scripts.pory"

# 297 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_StillGettingReady:
# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 300 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINERS.\p"
# 301 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Unfortunately, we're still getting\n"
# 302 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "things ready. Please come back later!$"
# 303 "data/maps/TrainerHill_Entrance/scripts.pory"

# 304 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WelcomeToTrainerHill:
# 305 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome!\p"
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
# 307 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 308 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINERS!$"
# 309 "data/maps/TrainerHill_Entrance/scripts.pory"

# 310 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_SaveGameBeforeEnter:
# 311 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Is this your first visit here?\p"
# 312 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Before you enter, please save\n"
# 313 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your game.$"
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"

# 315 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersUpToFloorX:
# 316 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 317 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The TRAINERS here now are…\p"
# 318 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Up to floor no. {STR_VAR_1}.$"
# 319 "data/maps/TrainerHill_Entrance/scripts.pory"

# 320 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersInEveryRoom:
# 321 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 322 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The TRAINERS here now are…\p"
# 323 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "There appear to be TRAINERS gathered\n"
# 324 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in every room.$"
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"

# 326 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_LikeToChallengeTrainers:
# 327 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to challenge the\n"
# 328 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "waiting TRAINERS?$"
# 329 "data/maps/TrainerHill_Entrance/scripts.pory"

# 330 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TimeProgessGetSetGo:
# 331 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I will time your progress.\n"
# 332 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Best of luck!\p"
# 333 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "On your marks…\p"
# 334 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Get set…\p"
# 335 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Go!$"
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"

# 337 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_PleaseVisitUsAgain:
# 338 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please do visit us again!$"
# 339 "data/maps/TrainerHill_Entrance/scripts.pory"

# 340 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TooBadTremendousEffort:
# 341 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That was too bad.\p"
# 342 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I think you put in a tremendous\n"
# 343 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "effort in your battling.\p"
# 344 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please come back and try again!$"
# 345 "data/maps/TrainerHill_Entrance/scripts.pory"

# 346 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_HopeYouGiveItYourBest:
# 347 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I hope you give it your best.$"
# 348 "data/maps/TrainerHill_Entrance/scripts.pory"

# 349 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch:
# 350 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "When the TRAINERS switch places,\n"
# 351 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the movement can be hectic.\p"
# 352 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To avoid the stampede, we moved\n"
# 353 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter here.\p"
# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm sorry for the inconvenience.$"
# 355 "data/maps/TrainerHill_Entrance/scripts.pory"

# 356 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ThankYouForPlaying:
# 357 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Thank you for playing!$"
# 358 "data/maps/TrainerHill_Entrance/scripts.pory"

# 359 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ExplainTrainerHill:
# 360 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Here at the TRAINER HILL, we conduct\n"
# 361 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "an event called the Time Attack.\p"
# 362 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "It is a race that measures how long\n"
# 363 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you take to reach our owner on\l"
# 364 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the rooftop from this counter.\p"
# 365 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The fastest times are posted on\n"
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the Time Board--try competing with\l"
# 367 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your friends.\p"
# 368 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "In TRAINER battles along the way,\n"
# 369 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "neither Exp. Points nor money will\l"
# 370 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "be awarded.$"
# 371 "data/maps/TrainerHill_Entrance/scripts.pory"

# 372 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 373 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon:
# 374 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, I'm sorry, but you appear to have\n"
# 375 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "only one POKéMON with you.\p"
# 376 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You will need at least two POKéMON\n"
# 377 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "to enter this event.$"
# 378 "data/maps/TrainerHill_Entrance/scripts.pory"

# 379 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouFinallyCameBravo:
# 380 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hm! Hm!\p"
# 381 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You finally came!\n"
# 382 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Yes, you have arrived!\p"
# 383 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wait! Don't say it!\n"
# 384 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I know why you came all the way\l"
# 385 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here by yourself!\p"
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You wanted to see me, the owner\n"
# 387 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "of the TRAINER HILL, because…\p"
# 388 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You want to form a tag team with me!\n"
# 389 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wa-hoo!\p"
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "…Uh?\n"
# 391 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That's not it?\p"
# 392 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Anyway, I watched you on your way up.\n"
# 393 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Marvelous battling! Bravo, indeed!$"
# 394 "data/maps/TrainerHill_Entrance/scripts.pory"

# 395 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_HaveTheMostMarvelousGift:
# 396 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "For a marvelous someone like you,\n"
# 397 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I have the most marvelous gift!$"
# 398 "data/maps/TrainerHill_Entrance/scripts.pory"

# 399 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_FullUpBeBackLaterForThis:
# 400 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, no, full up with things!\n"
# 401 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You'll be back later for this!$"
# 402 "data/maps/TrainerHill_Entrance/scripts.pory"

# 403 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_GotHereMarvelouslyQuickly:
# 404 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, hold on here! Did you possibly get\n"
# 405 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here marvelously quickly?\p"
# 406 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "How splendid! You needn't have\n"
# 407 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "hurried so to see me!\p"
# 408 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That is so delightful. I'll have the Time\n"
# 409 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Board at the reception updated!$"
# 410 "data/maps/TrainerHill_Entrance/scripts.pory"

# 411 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouWerentVeryQuick:
# 412 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "But, oh…\n"
# 413 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You weren't very quick getting here.$"
# 414 "data/maps/TrainerHill_Entrance/scripts.pory"

# 415 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_ArriveZippierNextTime:
# 416 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Perhaps it would please me more if you\n"
# 417 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "arrived zippier next time.\p"
# 418 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Then, I should be pleased to form\n"
# 419 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "a tag team with you!\p"
# 420 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Until we meet again, amigo!$"
# 421 "data/maps/TrainerHill_Entrance/scripts.pory"

# 422 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 423 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner:
# 424 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I had the TRAINER HILL built for but\n"
# 425 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "one reason and one only!\p"
# 426 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To find the most suitable partner\n"
# 427 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "with whom I may form a tag team!$"
# 428 "data/maps/TrainerHill_Entrance/scripts.pory"

# 429 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ChallengeTime:
# 430 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"
# 431 "data/maps/TrainerHill_Entrance/scripts.pory"

# 432 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead:
# 433 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Who knows what sort of TRAINERS\n"
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "and POKéMON combos are ahead?\p"
# 435 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "All I know is that I'll knock aside\n"
# 436 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "anyone that stands in my way!$"
# 437 "data/maps/TrainerHill_Entrance/scripts.pory"

# 438 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_CantWaitToTestTheWaters:
# 439 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I heard tough TRAINERS come to this\n"
# 440 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINER HILL from all over.\p"
# 441 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I can't wait to test the waters!\p"
# 442 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'll knock aside anyone that stands\n"
# 443 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in my way!$"
# 444 "data/maps/TrainerHill_Entrance/scripts.pory"

# 445 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop:
# 446 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you see the Time Board over there?\p"
# 447 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "My friends and I are trying to see who\n"
# 448 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "can reach the top in the least time.$"
# 449 "data/maps/TrainerHill_Entrance/scripts.pory"

# 450 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen:
# 451 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you know when they're opening\n"
# 452 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "this place up?\p"
# 453 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm waiting here to be the first\n"
# 454 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "challenger ever!$"
# 455 "data/maps/TrainerHill_Entrance/scripts.pory"

# 456 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Elevator_Text_ReturnToReception:
# 457 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to return to\n"
# 458 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter?$"
