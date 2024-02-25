# 1 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 4 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_MapScripts::
# 5 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaLobby_OnFrame
# 6 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleArenaLobby_OnWarp
# 7 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_OnWarp:
# 10 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth
# 11 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.2byte 0
# 12 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth::
# 14 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 16 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 17 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 18 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_OnFrame:
# 19 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus
# 20 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving
# 21 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge
# 22 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleArenaLobby_EventScript_WonChallenge
# 23 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleArenaLobby_EventScript_LostChallenge
# 24 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.2byte 0
# 25 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 26 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus::
# 27 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_getstatus
# 28 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 29 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 30 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving::
# 31 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 32 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 34 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK, 0
# 35 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 36 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 37 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 38 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 39 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 40 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 41 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WonChallenge::
# 42 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 43 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_isbrain
# 44 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon
# 45 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins, MSGBOX_DEFAULT
# 46 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints
# 47 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 48 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon::
# 49 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon, MSGBOX_DEFAULT
# 50 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints::
# 51 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_givepoints
# 53 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 54 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordAchievement
# 55 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 56 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 57 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 58 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 59 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 60 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 61 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 62 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 63 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_LostChallenge::
# 64 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 65 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
# 66 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 67 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 68 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 69 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 70 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 71 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 72 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 73 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 74 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 75 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge::
# 76 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkairshow
# 77 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 78 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special HealPlayerParty
# 79 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save 0
# 80 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 81 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 82 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 83 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 84 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
# 85 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 86 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 87 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 89 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_RecordMatch
# 90 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 91 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 92 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_RecordMatch::
# 93 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 94 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge::
# 95 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 96 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 97 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge::
# 98 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 99 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
# 100 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 101 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save CHALLENGE_STATUS_SAVING
# 102 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 103 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 104 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 105 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 106 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge
# 107 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 108 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Attendant::
# 109 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lock
# 110 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	faceplayer
# 111 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
# 112 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 113 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 114 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena, MSGBOX_DEFAULT
# 115 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge::
# 116 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
# 117 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 118 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 119 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 120 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge
# 121 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge
# 122 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 2, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 123 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 124 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 125 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge::
# 126 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
# 127 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 128 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 129 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 130 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 131 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 132 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkineligible
# 133 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons
# 134 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 135 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 136 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 137 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 138 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 139 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 140 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 141 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitstate
# 142 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 143 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OkayToSave, MSGBOX_YESNO
# 144 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 145 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case NO, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 146 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case YES, BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge
# 147 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 148 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 149 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge::
# 150 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 151 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 152 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_init
# 153 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, TRUE
# 154 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 155 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 156 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 157 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 158 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	delay 2
# 159 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 160 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 161 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed
# 162 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge::
# 163 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 164 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 165 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_GuideYouToArena, MSGBOX_DEFAULT
# 166 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 167 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 168 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call_if_eq VAR_RESULT, FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50
# 169 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call_if_eq VAR_RESULT, FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen
# 170 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_CORRIDOR, 9, 13
# 171 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 172 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitstate
# 173 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 174 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 175 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge::
# 176 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainChallenge, MSGBOX_DEFAULT
# 177 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge
# 178 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 179 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons::
# 180 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50
# 182 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen
# 183 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 184 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50::
# 185 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 186 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge
# 187 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 188 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen::
# 189 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 190 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge
# 191 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 192 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed::
# 193 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 194 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 195 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 196 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge::
# 197 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge::
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
# 200 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge::
# 201 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	release
# 202 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50::
# 205 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor
# 206 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor
# 207 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 208 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 2, 2
# 209 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 210 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
# 211 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
# 212 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 213 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 2, 2
# 214 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 215 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 216 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 217 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor:
# 218 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 219 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 220 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 221 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 222 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 223 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 224 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 225 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 226 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 227 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 228 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 229 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor:
# 230 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 231 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
# 232 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 233 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 234 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor:
# 235 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 236 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 237 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 238 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 239 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 240 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 241 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 242 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 243 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 244 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_in_place_faster_up
# 245 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 246 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 247 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor:
# 248 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 249 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 250 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
# 251 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 252 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 253 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen::
# 254 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor
# 255 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor
# 256 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 257 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 11, 2
# 258 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 259 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
# 260 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
# 261 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 262 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 11, 2
# 263 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 264 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 265 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 266 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor:
# 267 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 268 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 269 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 270 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 271 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 272 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 273 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 274 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 275 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 276 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 277 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor:
# 278 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 279 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 280 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 281 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 282 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 283 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 284 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 285 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 286 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_in_place_faster_up
# 287 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 288 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 289 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ShowResults::
# 290 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 291 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_ARENA
# 292 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitbuttonpress
# 293 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special RemoveRecordsWindow
# 294 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 295 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 296 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 297 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Youngster::
# 298 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack, MSGBOX_NPC
# 299 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 300 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 301 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Man::
# 302 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked, MSGBOX_NPC
# 303 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 304 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 305 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Camper::
# 306 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw, MSGBOX_NPC
# 307 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 308 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 309 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Woman::
# 310 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant, MSGBOX_NPC
# 311 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 312 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 313 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_RulesBoard::
# 314 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 315 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 316 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 317 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 318 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 319 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard::
# 320 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
# 321 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 322 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_ARENA_RULES, FALSE
# 323 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 324 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_BattleRules
# 325 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_MindRules
# 326 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 2, BattleFrontier_BattleArenaLobby_EventScript_SkillRules
# 327 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 3, BattleFrontier_BattleArenaLobby_EventScript_BodyRules
# 328 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 4, BattleFrontier_BattleArenaLobby_EventScript_ExitRules
# 329 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_ExitRules
# 330 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 331 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 332 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_BattleRules::
# 333 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules, MSGBOX_DEFAULT
# 334 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 335 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 336 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 337 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_MindRules::
# 338 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules, MSGBOX_DEFAULT
# 339 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 340 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 341 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 342 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SkillRules::
# 343 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules, MSGBOX_DEFAULT
# 344 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 345 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 346 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 347 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_BodyRules::
# 348 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules, MSGBOX_DEFAULT
# 349 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 350 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 351 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 352 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ExitRules::
# 353 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 354 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 355 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 356 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena:
# 357 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Where the battling spirit of TRAINERS\n"
# 358 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "is put to the test!\p"
# 359 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I welcome you to the BATTLE ARENA!\p"
# 360 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I am your guide to the Set KO Tourney!$"
# 361 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 362 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge:
# 363 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Now, do you wish to take\n"
# 364 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the BATTLE ARENA challenge?$"
# 365 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 366 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge:
# 367 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We await your challenge on\n"
# 368 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "another occasion!$"
# 369 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 370 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainChallenge:
# 371 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In the BATTLE ARENA, we undertake\n"
# 372 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the Set KO Tourney.\p"
# 373 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "All participants enter with a team of\n"
# 374 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three POKéMON.\p"
# 375 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The three POKéMON must be lined up in\n"
# 376 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the order in which they are to appear.\p"
# 377 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "During battle, the POKéMON will appear\n"
# 378 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "one at a time in the preset order.\p"
# 379 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Once a POKéMON enters battle, it must\n"
# 380 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "remain out until the match is decided.\p"
# 381 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If a match remains undecided in\n"
# 382 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three turns, it goes to judging.\p"
# 383 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If you wish to interrupt your challenge,\n"
# 384 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "please save the game.\p"
# 385 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If you don't save, you will not be able\n"
# 386 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "to continue with your challenge.\p"
# 387 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If you pull off the feat of beating\n"
# 388 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "seven TRAINERS in succession,\l"
# 389 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "we will present you with Battle Points.$"
# 390 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 391 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_OkayToSave:
# 392 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Before showing you to the BATTLE\n"
# 393 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "ARENA, you must save. Is that okay?$"
# 394 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 395 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WhichLevelMode:
# 396 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The BATTLE ARENA offers two levels\n"
# 397 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "of challenge, Level 50 and Open Level.\l"
# 398 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Which is your choice?$"
# 399 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 400 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_SelectThreeMons:
# 401 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Very well, now select your\n"
# 402 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three POKéMON, please.$"
# 403 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 404 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen:
# 405 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
# 406 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "You do not have the three POKéMON\n"
# 407 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "required for entry.\p"
# 408 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "To qualify, you must bring three\n"
# 409 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "different kinds of POKéMON.\p"
# 410 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "They also must not hold the same\n"
# 411 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "kinds of items.\p"
# 412 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 413 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "When you have made your preparations,\n"
# 414 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "please do return.$"
# 415 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 416 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50:
# 417 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
# 418 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "You do not have the three POKéMON\n"
# 419 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "required for entry.\p"
# 420 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "To qualify, you must bring three\n"
# 421 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "different kinds of POKéMON.\p"
# 422 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The three different POKéMON\n"
# 423 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "must all be Level 50 or lower.\p"
# 424 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "They also must not hold the same\n"
# 425 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "kinds of items.\p"
# 426 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 427 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "When you have made your preparations,\n"
# 428 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "please do return.$"
# 429 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 430 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_GuideYouToArena:
# 431 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I shall now guide you to\n"
# 432 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the BATTLE ARENA.$"
# 433 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 434 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown:
# 435 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
# 436 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "You did not save the game before\n"
# 437 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "shutting down, did you?\p"
# 438 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "It is unfortunate, but that has\n"
# 439 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "resulted in your disqualification\l"
# 440 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "from your challenge.\p"
# 441 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "You may, of course, start with a fresh\n"
# 442 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "challenge.$"
# 443 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 444 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins:
# 445 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We congratulate you for your splendid\n"
# 446 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "string of wins over seven TRAINERS!$"
# 447 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 448 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RecordAchievement:
# 449 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Your achievement will be recorded.\n"
# 450 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Please wait while I save the game.$"
# 451 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 452 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 453 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize:
# 454 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In commemoration of your 7-win streak,\n"
# 455 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "we present you with this prize.$"
# 456 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 457 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 458 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ReceivedPrize:
# 459 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 460 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 461 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 462 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 463 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize:
# 464 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Oh?\n"
# 465 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Your BAG seems to be full.\p"
# 466 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I urge you to clear space and\n"
# 467 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "return for your prize.$"
# 468 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 469 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave:
# 470 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Thank you so much for participating!\p"
# 471 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Please wait while I save the game.$"
# 472 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 473 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2:
# 474 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We await your challenge on\n"
# 475 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "another occasion!$"
# 476 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 477 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame:
# 478 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We have been looking forward to\n"
# 479 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "your arrival.\p"
# 480 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Before I show you to the BATTLE\n"
# 481 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "ARENA, I must save the game.\l"
# 482 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Please wait.$"
# 483 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 484 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RecordLastMatch:
# 485 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Shall I record your last BATTLE ARENA\n"
# 486 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "match on your FRONTIER PASS?$"
# 487 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 488 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack:
# 489 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I lost on the REFEREE's decision…\p"
# 490 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I don't think it was a good idea to only\n"
# 491 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "use defensive moves and not attack…$"
# 492 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 493 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked:
# 494 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I won in judging!\p"
# 495 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Landing hits consistently on\n"
# 496 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the opponent's POKéMON worked!$"
# 497 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 498 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw:
# 499 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Our match was declared a draw.\p"
# 500 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "When we ran out of time, both my\n"
# 501 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "POKéMON and the opponent's had about\l"
# 502 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the same amount of HP left.$"
# 503 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 504 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant:
# 505 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In the BATTLE ARENA, the order of\n"
# 506 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "POKéMON is totally important.\p"
# 507 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "For example, if your first POKéMON\n"
# 508 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "has certain type disadvantages,\l"
# 509 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "try making your second POKéMON one\l"
# 510 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "with moves that are super effective\l"
# 511 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "against the first one.\p"
# 512 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I think that will be a good way of\n"
# 513 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "making an effective team.$"
# 514 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 515 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RulesAreListed:
# 516 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Set KO Tourney's rules are listed.$"
# 517 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 518 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading:
# 519 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 520 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 521 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules:
# 522 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Set KO Tourney has special rules,\n"
# 523 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "unlike standard battles.\p"
# 524 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "First, one battle lasts only\n"
# 525 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three turns.\p"
# 526 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If the outcome is not decided after\n"
# 527 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three turns, it goes to judging.\p"
# 528 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The REFEREE will choose the winner\n"
# 529 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "based on how the POKéMON battled.\p"
# 530 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Also, a POKéMON cannot be switched out\n"
# 531 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "until its battle's outcome is decided.$"
# 532 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 533 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainMindRules:
# 534 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The first judging factor is “Mind.”\n"
# 535 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "This factor evaluates how aggressive\l"
# 536 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the battlers were.\p"
# 537 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The judging is based on how often\n"
# 538 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the TRAINERS ordered the use of\l"
# 539 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "offensive moves.$"
# 540 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 541 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules:
# 542 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The second judging factor is “Skill.”\n"
# 543 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "This factor evaluates how effectively\l"
# 544 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "POKéMON moves were used.\p"
# 545 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If a move worked successfully,\n"
# 546 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the Skill rating goes up.\p"
# 547 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If a move failed, the Skill rating\n"
# 548 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "is lowered.\p"
# 549 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If it was an offensive move, the Skill\n"
# 550 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "rating goes up if the move was “super\l"
# 551 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "effective” and goes down if it was\l"
# 552 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "“not very effective.”\p"
# 553 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Skill rating will not go up for\n"
# 554 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "moves such as PROTECT and DETECT.\p"
# 555 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If the opponent used PROTECT or\n"
# 556 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "DETECT, and your POKéMON failed to\l"
# 557 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "hit with a move, its Skill rating will not\l"
# 558 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "go down.$"
# 559 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 560 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules:
# 561 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The third judging factor is “Body.”\n"
# 562 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "This factor is based on how much HP\l"
# 563 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "remained at the end of a battle.\p"
# 564 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The rating takes into account how much\n"
# 565 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "HP a POKéMON had at the start of\l"
# 566 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "battle, and what remained at the end.$"
# 567 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 568 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon:
# 569 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "A victory snatched from the ARENA\n"
# 570 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "TYCOON, and a seven-TRAINER sweep!\p"
# 571 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We congratulate you on your most\n"
# 572 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "splendid challenge!$"
# 573 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 574 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints:
# 575 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger, in recognition of\n"
# 576 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "your indefatigable spirit, please\l"
# 577 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "accept these Battle Point(s).$"
