# 1 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
.set LOCALID_ATTENDANT_SINGLES, 1
# 3 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
.set LOCALID_ATTENDANT_DOUBLES, 6
# 4 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 5 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_MapScripts::
# 6 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleDomeLobby_OnResume
# 7 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeLobby_OnFrame
# 8 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_OnWarp
# 9 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.byte 0
# 10 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 11 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnResume:
# 12 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_initresultstree
# 13 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 14 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 15 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnWarp:
# 16 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomeLobby_EventScript_TurnPlayerNorth
# 17 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.2byte 0
# 18 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 19 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TurnPlayerNorth::
# 20 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 22 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 23 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 24 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnFrame:
# 25 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleDomeLobby_EventScript_GetChallengeStatus
# 26 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving
# 27 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge
# 28 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleDomeLobby_EventScript_WonChallenge
# 29 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleDomeLobby_EventScript_LostChallenge
# 30 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.2byte 0
# 31 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 32 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_GetChallengeStatus::
# 33 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_getstatus
# 34 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 35 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 36 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving::
# 37 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 38 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 39 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 40 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK, 0
# 41 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
# 42 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 43 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 44 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 45 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 46 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 47 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 48 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WonChallenge::
# 49 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 50 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 51 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_isbrain
# 52 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleDomeLobby_EventScript_DefeatedAce
# 53 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney, MSGBOX_DEFAULT
# 54 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints
# 55 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 56 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DefeatedAce::
# 57 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker, MSGBOX_DEFAULT
# 58 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints::
# 59 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints, MSGBOX_DEFAULT
# 60 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_givepoints
# 61 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 62 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved
# 63 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 64 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 65 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 66 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkairshow
# 67 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 68 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_HAS_WON_CHALLENGE, TRUE
# 69 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, TRUE
# 70 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 71 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 72 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle
# 73 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 74 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_LostChallenge::
# 75 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 76 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 77 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved
# 78 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 79 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 80 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 81 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkairshow
# 82 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
# 83 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 84 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 85 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 86 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle::
# 87 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_save 0
# 88 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	playse SE_SAVE
# 89 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitse
# 90 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 91 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 92 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordLastMatch
# 93 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 94 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 95 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 96 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 97 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_RecordBattle
# 98 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 99 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 100 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RecordBattle::
# 101 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 102 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EndChallenge::
# 103 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain, MSGBOX_DEFAULT
# 104 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 105 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 106 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 107 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 108 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 109 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge::
# 110 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 111 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou, MSGBOX_DEFAULT
# 112 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge2
# 113 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 114 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_save CHALLENGE_STATUS_SAVING
# 115 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	playse SE_SAVE
# 116 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitse
# 117 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 118 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 119 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge
# 120 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 121 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendant::
# 122 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lock
# 123 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	faceplayer
# 124 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 125 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 126 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome
# 127 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 128 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 129 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendant::
# 130 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lock
# 131 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	faceplayer
# 132 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 133 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 134 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome
# 135 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 136 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 137 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome::
# 138 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special SavePlayerParty
# 139 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_WelcomeSingles
# 140 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_WelcomeDoubles
# 141 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge::
# 142 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_TakeSinglesChallenge
# 143 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_TakeDoublesChallenge
# 144 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 145 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 146 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 147 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge
# 148 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge
# 149 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 2, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 150 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 151 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 152 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge::
# 153 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_WhichLevelMode
# 154 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 155 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 156 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 157 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 158 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 159 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkineligible
# 160 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons
# 161 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 162 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 163 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 164 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 165 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 166 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 167 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 168 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
# 169 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 170 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 171 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 172 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case NO, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 173 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case YES, BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge
# 174 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 175 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 176 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge::
# 177 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 178 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 179 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_init
# 180 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 181 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 182 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 183 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 184 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	delay 2
# 185 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 186 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 187 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_CancelChallengeSaveFailed
# 188 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_inittrainers
# 189 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge::
# 190 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special SavePlayerParty
# 191 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 192 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_settrainers
# 193 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome, MSGBOX_DEFAULT
# 194 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 195 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor
# 196 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 197 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR, 23, 6
# 198 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 199 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
# 200 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 201 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 202 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge::
# 203 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_ExplainSinglesChallenge
# 204 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_ExplainDoublesChallenge
# 205 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge
# 206 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 207 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons::
# 208 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 209 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLv50
# 210 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLvOpen
# 211 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 212 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLv50::
# 213 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 214 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge
# 215 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 216 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLvOpen::
# 217 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 218 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge
# 219 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 220 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CancelChallengeSaveFailed::
# 221 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 222 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 223 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 224 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge::
# 225 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 226 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge::
# 227 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain, MSGBOX_DEFAULT
# 228 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge::
# 229 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	release
# 230 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 231 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 232 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor::
# 233 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantWalkToDoor
# 234 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantWalkToDoor
# 235 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 236 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmovement 0
# 237 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_OpenSinglesDoor
# 238 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_OpenDoublesDoor
# 239 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitdooranim
# 240 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantEnterDoor
# 241 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantEnterDoor
# 242 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_PlayerEnterDoor
# 243 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmovement 0
# 244 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_CloseSinglesDoor
# 245 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_CloseDoublesDoor
# 246 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitdooranim
# 247 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 248 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 249 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantWalkToDoor::
# 250 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 252 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 253 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantWalkToDoor::
# 254 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 255 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 256 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 257 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantEnterDoor::
# 258 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor
# 259 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 260 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 261 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantEnterDoor::
# 262 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor
# 263 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 264 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 265 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WelcomeSingles::
# 266 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle, MSGBOX_DEFAULT
# 267 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 268 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 269 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WelcomeDoubles::
# 270 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle, MSGBOX_DEFAULT
# 271 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 272 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 273 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TakeSinglesChallenge::
# 274 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge
# 275 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 276 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 277 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TakeDoublesChallenge::
# 278 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge
# 279 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 280 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 281 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainSinglesChallenge::
# 282 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 283 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 284 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainDoublesChallenge::
# 286 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 287 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 288 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 289 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_OpenSinglesDoor::
# 290 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	opendoor 5, 4
# 291 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 292 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 293 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_OpenDoublesDoor::
# 294 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	opendoor 17, 4
# 295 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 296 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 297 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CloseSinglesDoor::
# 298 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closedoor 5, 4
# 299 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 300 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 301 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CloseDoublesDoor::
# 302 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closedoor 17, 4
# 303 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 304 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 305 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_WalkToDoor:
# 306 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 307 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 308 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 309 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 310 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 311 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 312 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 313 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor:
# 314 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 315 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	set_invisible
# 316 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 317 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 318 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_PlayerEnterDoor:
# 319 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 320 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 321 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	set_invisible
# 322 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 323 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 324 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowSinglesResults::
# 325 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 326 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_SINGLES
# 327 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitbuttonpress
# 328 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special RemoveRecordsWindow
# 329 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 330 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 331 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 332 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowDoublesResults::
# 333 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 334 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_DOUBLES
# 335 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitbuttonpress
# 336 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special RemoveRecordsWindow
# 337 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 338 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 339 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 340 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree::
# 341 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_get DOME_DATA_PREV_TOURNEY_TYPE
# 342 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLv50
# 343 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 1, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLv50
# 344 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 2, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLvOpen
# 345 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 3, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLvOpen
# 346 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 347 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_showprevtourneytree
# 348 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
# 349 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 350 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 351 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLv50::
# 352 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50, MSGBOX_SIGN
# 353 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 354 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 355 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLv50::
# 356 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50, MSGBOX_SIGN
# 357 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 358 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 359 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLvOpen::
# 360 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen, MSGBOX_SIGN
# 361 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 362 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 363 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLvOpen::
# 364 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen, MSGBOX_SIGN
# 365 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 366 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 367 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Maniac::
# 368 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_getwinnersname
# 369 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough, MSGBOX_NPC
# 370 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 371 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 372 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Lass::
# 373 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation, MSGBOX_NPC
# 374 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 375 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 376 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_FatMan::
# 377 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound, MSGBOX_NPC
# 378 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 379 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 380 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Man::
# 381 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully, MSGBOX_NPC
# 382 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 383 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 384 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ A few OutsideWest event scripts are inserted here instead, two of which are unused
# 385 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man3::
# 386 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier, MSGBOX_NPC
# 387 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 388 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 389 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 390 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign2::
# 391 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign2, MSGBOX_NPC
# 392 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 393 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 394 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 395 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnderConstructionSign::
# 396 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction, MSGBOX_NPC
# 397 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 398 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 399 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesBoard::
# 400 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 401 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 402 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 403 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 404 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 405 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard::
# 406 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading
# 407 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 408 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 4, MULTI_BATTLE_DOME_RULES, FALSE
# 409 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 410 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_RulesMatchup
# 411 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_RulesTourneyTree
# 412 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 2, BattleFrontier_BattleDomeLobby_EventScript_RulesDoubleKO
# 413 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 3, BattleFrontier_BattleDomeLobby_EventScript_ExitRules
# 414 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_ExitRules
# 415 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 416 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 417 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesMatchup::
# 418 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules, MSGBOX_DEFAULT
# 419 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 420 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 421 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 422 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesTourneyTree::
# 423 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree, MSGBOX_DEFAULT
# 424 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 425 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 426 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 427 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesDoubleKO::
# 428 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules, MSGBOX_DEFAULT
# 429 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 430 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 431 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 432 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExitRules::
# 433 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 434 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 435 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 436 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle:
# 437 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Where the strategies of TRAINERS\n"
# 438 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "are put to the test!\p"
# 439 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Welcome to the BATTLE DOME!\p"
# 440 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I am your guide to the SINGLE BATTLE\n"
# 441 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Tournament.$"
# 442 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 443 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge:
# 444 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to challenge\n"
# 445 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the SINGLE BATTLE Tournament?$"
# 446 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 447 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain:
# 448 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "We hope to see you again.$"
# 449 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 450 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge:
# 451 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The SINGLE BATTLE Tournament\n"
# 452 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "is exactly as the name suggests--\l"
# 453 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "a tournament of SINGLE BATTLES.\p"
# 454 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "All participating TRAINERS must\n"
# 455 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "enter three POKéMON each.\p"
# 456 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "In each battle, one of the three\n"
# 457 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "POKéMON must be held in reserve.\p"
# 458 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The other two POKéMON can battle\n"
# 459 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "one at a time.\p"
# 460 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Choose the two battling POKéMON after\n"
# 461 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "examining the opponent's trio.\p"
# 462 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You win the tournament by defeating\n"
# 463 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "four TRAINERS.\p"
# 464 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Battle Points are awarded to\n"
# 465 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the tournament winner.\p"
# 466 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 467 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "tournament, please save the game.\p"
# 468 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 469 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "you will be disqualified.$"
# 470 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 471 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge:
# 472 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Before I show you to the BATTLE DOME,\n"
# 473 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I must save the data. Is that okay?$"
# 474 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 475 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WhichLevelMode:
# 476 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament offers two levels\n"
# 477 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "of challenge, Level 50 and Open Level.\l"
# 478 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Which is your choice?$"
# 479 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 480 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_SelectThreeMons:
# 481 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Now select the three POKéMON that\n"
# 482 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "you wish to enter, please.$"
# 483 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 484 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen:
# 485 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
# 486 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You don't have three eligible POKéMON.\p"
# 487 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Also, the POKéMON must be holding\n"
# 488 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "different kinds of items.\p"
# 489 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 490 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 491 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 492 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50:
# 493 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
# 494 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You don't have three eligible POKéMON.\p"
# 495 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You must have three different POKéMON\n"
# 496 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 497 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They also must be holding different\n"
# 498 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "kinds of items.\p"
# 499 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 500 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 501 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 502 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome:
# 503 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I will now show you to\n"
# 504 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the BATTLE DOME.$"
# 505 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 506 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting:
# 507 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
# 508 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You didn't save before you quit your\n"
# 509 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "challenge last time.\p"
# 510 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Because of that, your challenge so far\n"
# 511 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "has been disqualified. Sorry!$"
# 512 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 513 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney:
# 514 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Congratulations for winning\n"
# 515 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "your Battle Tournament!$"
# 516 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 517 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 518 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize:
# 519 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Here is your prize for your Battle\n"
# 520 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Tournament victory.$"
# 521 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 522 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Used by Verdanturf Tent
# 523 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ReceivedPrize:
# 524 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 525 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 526 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 527 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 528 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_BagFullMakeRoom:
# 529 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Oh, your BAG appears to be full.\p"
# 530 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Please make room in your BAG, then come\n"
# 531 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "see me.$"
# 532 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 533 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying:
# 534 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Thank you for playing!$"
# 535 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 536 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved:
# 537 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Your record will be saved.\n"
# 538 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Please wait.$"
# 539 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 540 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou:
# 541 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "We've been waiting for you!$"
# 542 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 543 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge2:
# 544 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Before I show you to the BATTLE DOME,\n"
# 545 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I must save the data. Is that okay?$"
# 546 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 547 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle:
# 548 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Where the strategies of TRAINERS\n"
# 549 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "are put to the test!\p"
# 550 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Welcome to the BATTLE DOME!\p"
# 551 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I am your guide to the DOUBLE BATTLE\n"
# 552 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Tournament.$"
# 553 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 554 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge:
# 555 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to challenge\n"
# 556 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the DOUBLE BATTLE Tournament?$"
# 557 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 558 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge:
# 559 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The DOUBLE BATTLE Tournament\n"
# 560 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "is exactly as the name suggests--\l"
# 561 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "a tournament of DOUBLE BATTLES.\p"
# 562 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "All participating TRAINERS must\n"
# 563 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "enter three POKéMON each.\p"
# 564 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "In each battle, one of the three\n"
# 565 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "POKéMON must be held in reserve.\p"
# 566 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The remaining two POKéMON must take\n"
# 567 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "part in a DOUBLE BATTLE.\p"
# 568 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Choose the two battling POKéMON after\n"
# 569 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "examining the opponent's trio.\p"
# 570 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You win the tournament by defeating\n"
# 571 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "four TRAINERS.\p"
# 572 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Battle Points are awarded to\n"
# 573 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the tournament winner.\p"
# 574 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 575 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "tournament, please save the game.\p"
# 576 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 577 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "you will be disqualified.$"
# 578 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 579 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50:
# 580 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
# 581 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Level 50 SINGLE BATTLE Tournament.$"
# 582 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 583 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50:
# 584 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
# 585 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Level 50 DOUBLE BATTLE Tournament.$"
# 586 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 587 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen:
# 588 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
# 589 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Open Level SINGLE BATTLE Tournament.$"
# 590 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 591 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen:
# 592 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
# 593 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Open Level DOUBLE BATTLE Tournament.$"
# 594 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 595 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough:
# 596 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Did you see it?\n"
# 597 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The last Battle Tournament?\p"
# 598 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The winner, {STR_VAR_1}, was seriously\n"
# 599 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "tough.\p"
# 600 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You should check out the results\n"
# 601 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "on the monitor beside the PC.$"
# 602 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 603 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier:
# 604 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The BATTLE FRONTIER…\n"
# 605 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I've long dreamed about a place like it.$"
# 606 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 607 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Functionally unused
# 608 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign2:
# 609 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The BATTLE DOME\n"
# 610 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Become the Unbeatable Superstar!$"
# 611 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 612 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Functionally unused
# 613 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction:
# 614 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The ??????\n"
# 615 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Under Construction!$"
# 616 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 617 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation:
# 618 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "When a TRAINER chains tournament\n"
# 619 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "wins at the BATTLE DOME, he or she\l"
# 620 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "gains a reputation as a star.\p"
# 621 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Tough TRAINERS are drawn by that\n"
# 622 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "reputation to the BATTLE DOME.\p"
# 623 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "A true superstar is a TRAINER who\n"
# 624 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "can keep winning tournaments.$"
# 625 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 626 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound:
# 627 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I ran into one of the tournament\n"
# 628 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "favorites in the very first round.\p"
# 629 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Of course I got trashed…$"
# 630 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 631 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully:
# 632 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I would've won if I'd kept this POKéMON\n"
# 633 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "held in reserve.\p"
# 634 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You need to check your opponent's\n"
# 635 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "POKéMON carefully before choosing\l"
# 636 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "your battling POKéMON.$"
# 637 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 638 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker:
# 639 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Congratulations!\p"
# 640 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You defeated the DOME ACE and won\n"
# 641 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the Battle Tournament!$"
# 642 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 643 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints:
# 644 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "In recognition of your strategy--\n"
# 645 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "a thing of beauty it was, too--\l"
# 646 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "we award you these Battle Point(s)!$"
# 647 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 648 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RecordLastMatch:
# 649 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to record your\n"
# 650 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "last BATTLE DOME match on your\l"
# 651 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "FRONTIER PASS?$"
# 652 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 653 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RulesAreListed:
# 654 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The Battle Tournament rules\n"
# 655 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "are listed.$"
# 656 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 657 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading:
# 658 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 659 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 660 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules:
# 661 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament matchups are drawn up\n"
# 662 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "based on the toughness of POKéMON\l"
# 663 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "held by TRAINERS.\p"
# 664 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The matchups avoid having tough\n"
# 665 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "TRAINERS face each other right away.$"
# 666 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 667 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree:
# 668 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament chart, or as we call it,\n"
# 669 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the “Tree,” is available for viewing\l"
# 670 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "in the Waiting Room from any guide.\p"
# 671 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The Tournament Tree will provide\n"
# 672 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "several kinds of data.\p"
# 673 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The data on view includes the previous\n"
# 674 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "tournament's results, the POKéMON held\l"
# 675 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "by TRAINERS, and the battle styles of\l"
# 676 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "TRAINERS.$"
# 677 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 678 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules:
# 679 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If battling POKéMON faint at the same\n"
# 680 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "time--a double KO--in a tournament\l"
# 681 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "match, the REFEREES will review\l"
# 682 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the match and declare the winner.$"
