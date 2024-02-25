# 1 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
.set LOCALID_HINT_GIVER, 2
# 4 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 5 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_MapScripts::
# 6 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidLobby_OnFrame
# 7 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_OnWarp
# 8 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.byte 0
# 9 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 10 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused. Pyramid uses Dome's OnWarp (presumably by mistake). Their effects are identical
# 11 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_OnWarp:
# 12 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidLobby_EventScript_TurnPlayerNorth
# 13 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.2byte 0
# 14 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 15 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TurnPlayerNorth:
# 16 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 17 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 18 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 20 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_OnFrame:
# 21 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePyramidLobby_EventScript_GetChallengeStatus
# 22 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramidLobby_EventScript_QuitWithoutSaving
# 23 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidLobby_EventScript_ResumeChallenge
# 24 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge
# 25 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePyramidLobby_EventScript_LostChallenge
# 26 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.2byte 0
# 27 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 28 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GetChallengeStatus::
# 29 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_getstatus
# 30 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 31 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 32 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_QuitWithoutSaving::
# 33 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 34 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag
# 35 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 36 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 37 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 38 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 39 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK, 0
# 40 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, FALSE
# 41 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 42 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 43 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 44 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 45 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 46 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge::
# 47 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 48 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_isbrain
# 49 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_DefeatedKing
# 50 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid, MSGBOX_DEFAULT
# 51 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints
# 52 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 53 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DefeatedKing::
# 54 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing, MSGBOX_DEFAULT
# 55 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints::
# 56 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special DoBattlePyramidMonsHaveHeldItem
# 57 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag
# 58 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	clearflag FLAG_STORING_ITEMS_IN_PYRAMID_BAG
# 59 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkairshow
# 60 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 61 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_clearhelditems
# 62 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 63 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept
# 64 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 65 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 66 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 67 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints, MSGBOX_DEFAULT
# 68 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_givepoints
# 69 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 70 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait
# 71 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 72 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_setprize
# 73 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_save 0
# 74 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_SAVE
# 75 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 76 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge, MSGBOX_DEFAULT
# 77 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 78 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 79 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 80 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 81 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 82 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_LostChallenge::
# 83 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkairshow
# 84 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 85 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_clearhelditems
# 86 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 87 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 88 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag
# 89 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 90 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 91 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 92 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait
# 93 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 94 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, FALSE
# 95 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_save 0
# 96 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_SAVE
# 97 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 98 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge, MSGBOX_DEFAULT
# 99 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 100 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 101 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 102 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 103 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 104 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ResumeChallenge::
# 105 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge
# 106 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 107 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_Attendant::
# 108 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lock
# 109 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	faceplayer
# 110 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PYRAMID
# 111 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 112 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special SavePlayerParty
# 113 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid, MSGBOX_DEFAULT
# 114 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge::
# 115 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge
# 116 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 117 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 118 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 119 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge
# 120 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_ExplainChallenge
# 121 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 122 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 123 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 124 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge::
# 125 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode
# 126 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 127 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 128 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 129 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 130 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 131 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkineligible
# 132 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons
# 133 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 134 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 136 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 137 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 138 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 139 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 140 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitstate
# 141 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge
# 142 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 143 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case NO, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge
# 145 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case YES, BattleFrontier_BattlePyramidLobby_EventScript_SaveBeforeChallenge
# 146 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge
# 147 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 148 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_SaveBeforeChallenge::
# 149 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 150 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 151 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_init
# 152 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, TRUE
# 153 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 154 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 155 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_seedfloor
# 156 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_settrainers
# 157 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 158 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 159 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	delay 2
# 160 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 161 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 162 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallengeSaveFailed
# 163 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge::
# 164 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special SavePlayerParty
# 165 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 166 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid, MSGBOX_DEFAULT
# 167 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 168 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag
# 169 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 170 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 171 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 172 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
# 173 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 174 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitstate
# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 177 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ExplainChallenge::
# 178 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid, MSGBOX_DEFAULT
# 179 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge
# 180 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 181 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons::
# 182 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 183 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLv50
# 184 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLvOpen
# 185 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 186 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLv50::
# 187 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 188 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge
# 189 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 190 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLvOpen::
# 191 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 192 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge
# 193 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 194 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_CancelChallengeSaveFailed::
# 195 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 196 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 197 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 198 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge::
# 199 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 200 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge::
# 201 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_AwaitFutureChallenge, MSGBOX_DEFAULT
# 202 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge::
# 203 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	release
# 204 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 205 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 206 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintGiver::
# 207 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 208 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_HINT_GIVER, Common_Movement_FacePlayer
# 209 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 210 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait, MSGBOX_DEFAULT
# 211 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_BattlePyramidLobby_EventScript_GiveHint
# 212 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot, MSGBOX_DEFAULT
# 213 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 214 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 215 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 216 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHint::
# 217 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 218 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 219 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50
# 220 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen
# 221 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePyramidLobby_EventScript_NoHint
# 222 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_NoHint
# 223 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 224 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 225 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Shouldnt occur
# 226 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NoHint::
# 227 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 228 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 229 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50::
# 230 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_Aah, MSGBOX_DEFAULT
# 231 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_ACTIVE_50
# 232 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLv50Streak
# 233 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 234 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 235 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 236 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 237 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLv50Streak::
# 238 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_50
# 239 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 240 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 241 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 242 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen::
# 243 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_Aah, MSGBOX_DEFAULT
# 244 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_ACTIVE_OPEN
# 245 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLvOpenStreak
# 246 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 247 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 248 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 249 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 250 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLvOpenStreak::
# 251 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_OPEN
# 252 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 253 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 254 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 255 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment::
# 256 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 257 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special GetBattlePyramidHint
# 258 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 259 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_HintParalysis
# 260 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_HintPoison
# 261 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_HintBurn
# 262 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_HintPPWaste
# 263 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_HintLevitate
# 264 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 5, BattleFrontier_BattlePyramidLobby_EventScript_HintTrapAbility
# 265 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 6, BattleFrontier_BattlePyramidLobby_EventScript_HintIce
# 266 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 7, BattleFrontier_BattlePyramidLobby_EventScript_HintExplosion
# 267 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 8, BattleFrontier_BattlePyramidLobby_EventScript_HintPsychic
# 268 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 9, BattleFrontier_BattlePyramidLobby_EventScript_HintRock
# 269 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 10, BattleFrontier_BattlePyramidLobby_EventScript_HintFighting
# 270 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 11, BattleFrontier_BattlePyramidLobby_EventScript_HintWeather
# 271 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 12, BattleFrontier_BattlePyramidLobby_EventScript_HintBug
# 272 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 13, BattleFrontier_BattlePyramidLobby_EventScript_HintDark
# 273 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 14, BattleFrontier_BattlePyramidLobby_EventScript_HintWater
# 274 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 15, BattleFrontier_BattlePyramidLobby_EventScript_HintGhost
# 275 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 16, BattleFrontier_BattlePyramidLobby_EventScript_HintSteel
# 276 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 17, BattleFrontier_BattlePyramidLobby_EventScript_HintFlyingDragon
# 277 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 18, BattleFrontier_BattlePyramidLobby_EventScript_HintStoneEvolve
# 278 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 19, BattleFrontier_BattlePyramidLobby_EventScript_HintNormal
# 279 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 280 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 281 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintParalysis::
# 282 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintParalysis, MSGBOX_DEFAULT
# 283 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 284 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintPoison::
# 286 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPoison, MSGBOX_DEFAULT
# 287 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 288 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 289 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintBurn::
# 290 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintBurn, MSGBOX_DEFAULT
# 291 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 292 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 293 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintPPWaste::
# 294 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPPWaste, MSGBOX_DEFAULT
# 295 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 296 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 297 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintLevitate::
# 298 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintLevitate, MSGBOX_DEFAULT
# 299 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 300 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 301 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintTrapAbility::
# 302 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility, MSGBOX_DEFAULT
# 303 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 304 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 305 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintIce::
# 306 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintIce, MSGBOX_DEFAULT
# 307 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 308 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 309 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintExplosion::
# 310 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintExplosion, MSGBOX_DEFAULT
# 311 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 312 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 313 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintPsychic::
# 314 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPsychic, MSGBOX_DEFAULT
# 315 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 316 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 317 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintRock::
# 318 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintRock, MSGBOX_DEFAULT
# 319 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 320 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 321 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintFighting::
# 322 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintFighting, MSGBOX_DEFAULT
# 323 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 324 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 325 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintWeather::
# 326 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintWeather, MSGBOX_DEFAULT
# 327 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 328 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 329 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintBug::
# 330 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintBug, MSGBOX_DEFAULT
# 331 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 332 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 333 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintDark::
# 334 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintDark, MSGBOX_DEFAULT
# 335 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 336 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 337 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintWater::
# 338 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintWater, MSGBOX_DEFAULT
# 339 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 340 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 341 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintGhost::
# 342 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintGhost, MSGBOX_DEFAULT
# 343 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 344 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 345 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintSteel::
# 346 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintSteel, MSGBOX_DEFAULT
# 347 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 348 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 349 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintFlyingDragon::
# 350 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon, MSGBOX_DEFAULT
# 351 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 352 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 353 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintStoneEvolve::
# 354 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve, MSGBOX_DEFAULT
# 355 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 356 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 357 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintNormal::
# 358 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintNormal, MSGBOX_DEFAULT
# 359 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 360 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 361 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ShowResults::
# 362 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 363 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PYRAMID
# 364 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitbuttonpress
# 365 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special RemoveRecordsWindow
# 366 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 367 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 368 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 369 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag::
# 370 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePyramidLobby_Movement_AttendantWalkToPanel
# 371 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattlePyramidLobby_Movement_PlayerWalkToPanel
# 372 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 373 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping, MSGBOX_DEFAULT
# 374 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK
# 375 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_ReceiveNewBattleBag
# 376 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag, MSGBOX_DEFAULT
# 377 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReceiveBattleBag
# 378 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 379 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReceiveNewBattleBag::
# 380 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag, MSGBOX_DEFAULT
# 381 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReceiveBattleBag::
# 382 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag
# 383 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 384 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 385 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 386 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel, MSGBOX_DEFAULT
# 387 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 388 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePyramidLobby_Movement_AttendantMoveAside
# 389 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 390 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattlePyramidLobby_Movement_PlayerStepOnPanel
# 391 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 392 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 393 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 394 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_AttendantWalkToPanel:
# 395 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 396 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 397 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 398 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 399 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 400 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 401 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 402 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	face_down
# 403 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 404 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 405 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_PlayerWalkToPanel:
# 406 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 407 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 408 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 409 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 410 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 411 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 412 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 413 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 414 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 415 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_AttendantMoveAside:
# 416 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_right
# 417 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	face_left
# 418 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 419 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 420 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_PlayerStepOnPanel:
# 421 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 422 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 423 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 424 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 425 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag::
# 426 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake, MSGBOX_DEFAULT
# 427 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setflag FLAG_STORING_ITEMS_IN_PYRAMID_BAG
# 428 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special TryStoreHeldItemsInPyramidBag
# 429 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_HeldItemsStoredInPyramidBag
# 430 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep
# 431 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 432 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 433 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 434 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 435 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HeldItemsStoredInPyramidBag::
# 436 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag, MSGBOX_DEFAULT
# 437 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 438 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 439 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ When exiting Battle Pyramid with a full pyramid bag and held items the player must select to keep/toss party held items and make room for any kept items by tossing from the pyramid bag
# 440 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep::
# 441 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_FRONTIER_ITEM_CHOOSE, FALSE
# 442 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 443 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromBag
# 444 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromParty
# 445 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems
# 446 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems
# 447 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 448 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 449 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromBag::
# 450 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special ChooseItemsToTossFromPyramidBag
# 451 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitstate
# 452 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 453 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 454 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 455 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 456 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 457 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromParty::
# 458 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special BattlePyramidChooseMonHeldItems
# 459 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitstate
# 460 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 461 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 462 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 463 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 464 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 465 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems::
# 466 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special DoBattlePyramidMonsHaveHeldItem
# 467 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_PartyStillHasHeldItems
# 468 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 469 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 470 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PartyStillHasHeldItems::
# 471 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem, MSGBOX_DEFAULT
# 472 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 473 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 474 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 475 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 476 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 477 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_Woman::
# 478 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning, MSGBOX_NPC
# 479 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 480 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 481 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_FatMan::
# 482 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems, MSGBOX_NPC
# 483 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 484 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 485 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesBoard::
# 486 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 487 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 488 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 489 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 490 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 491 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard::
# 492 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_ReadWhichHeading
# 493 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 494 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 15, 2, MULTI_BATTLE_PYRAMID_RULES, FALSE
# 495 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 496 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_RulesPokemon
# 497 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_RulesTrainers
# 498 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_RulesMaze
# 499 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_RulesBag
# 500 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_ExitRules
# 501 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_ExitRules
# 502 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 503 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 504 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesPokemon::
# 505 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
# 506 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 507 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 508 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 509 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesTrainers::
# 510 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules, MSGBOX_DEFAULT
# 511 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 512 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 513 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 514 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesMaze::
# 515 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules, MSGBOX_DEFAULT
# 516 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 517 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 518 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 519 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesBag::
# 520 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules, MSGBOX_DEFAULT
# 521 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 522 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 523 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 524 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ExitRules::
# 525 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 526 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 527 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 528 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid:
# 529 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Where the courage of TRAINERS\n"
# 530 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "is put to the test!\p"
# 531 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Welcome to the BATTLE PYRAMID!\p"
# 532 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I am your guide to\n"
# 533 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the Battle Quest.$"
# 534 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 535 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge:
# 536 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Have you the courage to embark on\n"
# 537 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the Battle Quest challenge?$"
# 538 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 539 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_AwaitFutureChallenge:
# 540 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "We await your challenge in the future!$"
# 541 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 542 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid:
# 543 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The Battle Quest is a battling\n"
# 544 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "event in which you must explore\l"
# 545 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the PYRAMID and try to reach the top.\p"
# 546 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "In the PYRAMID are seven floors of\n"
# 547 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "mazes, all of them filled with not only\l"
# 548 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "skilled TRAINERS but also wild POKéMON.\p"
# 549 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You must enter with three POKéMON,\n"
# 550 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "none of them holding an item.\p"
# 551 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "On your ascent, you will be provided\n"
# 552 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "with a BATTLE BAG for items.\p"
# 553 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "If you fail in your challenge, any item\n"
# 554 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "placed in the BATTLE BAG disappears.\p"
# 555 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 556 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "challenge, you must select “REST”\l"
# 557 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "and save the game.\p"
# 558 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 559 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "you will be disqualified.$"
# 560 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 561 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode:
# 562 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The PYRAMID offers two courses,\n"
# 563 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Level 50 and Open Level.\l"
# 564 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Which will you enter?$"
# 565 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 566 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons:
# 567 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Very good. Now, please select the three\n"
# 568 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "POKéMON you wish to accompany you.$"
# 569 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 570 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLvOpen:
# 571 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "A slight problem, adventurer!\p"
# 572 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You seem to not have the three\n"
# 573 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "POKéMON qualified for the challenge.\p"
# 574 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Please also remember to take all\n"
# 575 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "items from your POKéMON.\p"
# 576 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 577 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "When you are ready, please have\n"
# 578 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "a word with me.$"
# 579 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 580 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLv50:
# 581 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "A slight problem, adventurer!\p"
# 582 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You seem to not have the three\n"
# 583 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "POKéMON qualified for the challenge.\p"
# 584 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The three POKéMON must be different\n"
# 585 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "and each no higher than Level 50.\p"
# 586 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Please also remember to take all\n"
# 587 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "items from your POKéMON.\p"
# 588 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 589 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "When you are ready, please have\n"
# 590 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "a word with me.$"
# 591 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 592 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge:
# 593 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Before you enter the BATTLE PYRAMID,\n"
# 594 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the game must be saved. Is that okay?$"
# 595 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 596 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid:
# 597 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Very good. I will now show you into\n"
# 598 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the BATTLE PYRAMID.$"
# 599 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 600 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping:
# 601 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "We will hold your BAG for safekeeping,\n"
# 602 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER}, while you are exploring.$"
# 603 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 604 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag:
# 605 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "In exchange, please take this BATTLE\n"
# 606 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "BAG, the one you used previously.$"
# 607 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 608 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag:
# 609 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "In exchange, please take this\n"
# 610 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "BATTLE BAG.$"
# 611 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 612 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag:
# 613 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} exchanged the BAG for\n"
# 614 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the BATTLE BAG.$"
# 615 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 616 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel:
# 617 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "When you step on this floor panel,\n"
# 618 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "you will be transported to a higher\l"
# 619 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "floor in the PYRAMID.\p"
# 620 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I hope for your sake that your\n"
# 621 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "quest goes safely!$"
# 622 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 623 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag:
# 624 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "A major problem, explorer!\p"
# 625 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You did not save before ending\n"
# 626 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "your challenge the last time.\p"
# 627 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Consequently, your challenge has\n"
# 628 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "been disqualified, I'm sorry to say.\p"
# 629 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Here is the BAG we've been holding\n"
# 630 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "for you.\p"
# 631 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} got the BAG back.$"
# 632 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 633 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid:
# 634 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Excellent to see you back!\p"
# 635 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You've conquered the PYRAMID!\n"
# 636 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "How splendid!$"
# 637 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 638 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake:
# 639 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ah, a slight problem.\p"
# 640 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "At least one POKéMON is holding\n"
# 641 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "an item.\p"
# 642 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I'm sorry to say, items obtained in\n"
# 643 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the PYRAMID cannot be taken away.$"
# 644 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 645 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag:
# 646 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "All items held by your POKéMON will be\n"
# 647 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "moved to your BATTLE BAG, {PLAYER}.$"
# 648 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 649 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep:
# 650 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The BATTLE BAG cannot hold all your\n"
# 651 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "items, I'm sorry to say.\p"
# 652 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Please pick the items you'll keep in the\n"
# 653 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "BATTLE BAG, and with your POKéMON.$"
# 654 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 655 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem:
# 656 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "At least one POKéMON is still\n"
# 657 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "holding an item.$"
# 658 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 659 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep:
# 660 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Please pick the items you'll keep in the\n"
# 661 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "BATTLE BAG, and with your POKéMON.$"
# 662 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 663 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 664 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld:
# 665 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} returned everything that\n"
# 666 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the POKéMON held.$"
# 667 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 668 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept:
# 669 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The BATTLE BAG you used will be kept\n"
# 670 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "in readiness for your next challenge.\p"
# 671 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} turned the BATTLE BAG over\n"
# 672 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "for the BAG's return.$"
# 673 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 674 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait:
# 675 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I must record your results.\n"
# 676 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Please wait.$"
# 677 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 678 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 679 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis:
# 680 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "As a memento for conquering\n"
# 681 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the BATTLE PYRAMID, please take this.$"
# 682 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 683 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 684 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ReceivedPrizeItem:
# 685 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 686 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 687 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 688 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 689 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_BagIsFull:
# 690 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…Ah…\n"
# 691 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Your BAG appears to be filled.\p"
# 692 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Please return after you've organized\n"
# 693 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "your BAG's contents.$"
# 694 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 695 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag:
# 696 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "How disappointing for you…\p"
# 697 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Here is the BAG we've been holding\n"
# 698 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "for you.\p"
# 699 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} got the BAG back.$"
# 700 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 701 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge:
# 702 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "We look forward to your\n"
# 703 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "next challenge!$"
# 704 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 705 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 706 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HereIsPrize:
# 707 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "We have been looking forward to\n"
# 708 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "your arrival!\p"
# 709 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Here is your prize for conquering\n"
# 710 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the PYRAMID.$"
# 711 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 712 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait:
# 713 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Welcome…\p"
# 714 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I shall be pleased to tell you what\n"
# 715 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "misfortunes await in the PYRAMID…$"
# 716 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 717 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_Aah:
# 718 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "… … … … … …\n"
# 719 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "… … … … … …\p"
# 720 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "… … … … … …\n"
# 721 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Aah!$"
# 722 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 723 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintParalysis:
# 724 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see a shower of sparks…\p"
# 725 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And in it, I see your POKéMON\n"
# 726 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "struggling with paralysis…$"
# 727 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 728 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintPoison:
# 729 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see poison…\p"
# 730 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 731 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from the effects of poison…$"
# 732 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 733 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintBurn:
# 734 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see bright red flames…\p"
# 735 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 736 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from burns…$"
# 737 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 738 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintPPWaste:
# 739 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I sense the tremendous pressure of\n"
# 740 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "unrequited anger…\p"
# 741 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "It is a curse…\p"
# 742 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON drained of\n"
# 743 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Power Points and having no recourse\l"
# 744 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "but to use STRUGGLE…$"
# 745 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 746 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintLevitate:
# 747 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see POKéMON loftily airborne…\p"
# 748 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON frustrated\n"
# 749 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "by powerless GROUND-type moves…$"
# 750 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 751 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility:
# 752 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I sense terrific energy rising from\n"
# 753 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the ground below…\p"
# 754 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON unable to\n"
# 755 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "escape the power's clutches…$"
# 756 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 757 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintIce:
# 758 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see ICE-type POKéMON…\p"
# 759 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON fighting\n"
# 760 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the freezing effects of ice…$"
# 761 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 762 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintExplosion:
# 763 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see a flurry of moves that imperil\n"
# 764 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the user…\p"
# 765 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON falling\n"
# 766 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "to them…$"
# 767 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 768 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintPsychic:
# 769 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see PSYCHIC-type POKéMON…\p"
# 770 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON in torment\n"
# 771 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from PSYCHIC moves…$"
# 772 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 773 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintRock:
# 774 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see ROCK-type POKéMON…\p"
# 775 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 776 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from ROCK moves…$"
# 777 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 778 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintFighting:
# 779 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see FIGHTING-type POKéMON…\p"
# 780 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON pummeled\n"
# 781 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "by FIGHTING moves…$"
# 782 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 783 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintWeather:
# 784 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "RAIN DANCE… SUNNY DAY…\n"
# 785 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "SANDSTORM… HAIL…\p"
# 786 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see POKéMON that become stronger\n"
# 787 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "with the weather…\p"
# 788 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON confounded\n"
# 789 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "by different types of moves…$"
# 790 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 791 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintBug:
# 792 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see BUG-type POKéMON…\p"
# 793 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 794 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from different kinds of attacks…$"
# 795 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 796 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintDark:
# 797 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see DARK-type POKéMON…\p"
# 798 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 799 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from DARK-type moves…$"
# 800 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 801 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintWater:
# 802 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see WATER-type POKéMON…\p"
# 803 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 804 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from WATER-type moves…$"
# 805 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 806 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintGhost:
# 807 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see GHOST-type POKéMON…\p"
# 808 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 809 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from GHOST-type moves…$"
# 810 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 811 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintSteel:
# 812 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see STEEL-type POKéMON…\p"
# 813 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 814 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from enormously powerful moves…$"
# 815 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 816 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon:
# 817 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see flying POKéMON…\p"
# 818 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 819 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from enormously powerful moves…$"
# 820 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 821 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve:
# 822 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see those that have evolved from\n"
# 823 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the power of stones…\p"
# 824 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I also sense fire, water,\n"
# 825 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "and electricity…\p"
# 826 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 827 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from those three powers…$"
# 828 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 829 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintNormal:
# 830 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see NORMAL-type POKéMON…\p"
# 831 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 832 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from enormously powerful moves…$"
# 833 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 834 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot:
# 835 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Whether you believe my fortunes\n"
# 836 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "or not, the choice is yours…\p"
# 837 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The future can be changed anytime…\n"
# 838 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I wish you safe passage…$"
# 839 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 840 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning:
# 841 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Did you know?\p"
# 842 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "If you run fast, TRAINERS may notice\n"
# 843 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "and come after you for a battle.\p"
# 844 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "So, if you want to avoid TRAINERS,\n"
# 845 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "don't catch their eyes, but sneak\l"
# 846 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "cautiously and quietly past them.$"
# 847 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 848 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems:
# 849 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Awaaaaaaarrrrgh!\p"
# 850 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I had a whole lot of items, but I lost\n"
# 851 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "them all when I lost!\p"
# 852 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Awaaaaaaarrrrgh!$"
# 853 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 854 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing:
# 855 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Welcome back!\n"
# 856 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You've done the unthinkable!\p"
# 857 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You've defeated the PYRAMID KING\n"
# 858 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "and conquered the BATTLE PYRAMID!$"
# 859 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 860 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints:
# 861 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Young explorer!\n"
# 862 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "In commendation of your courage,\l"
# 863 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "we give you these Battle Point(s)!$"
# 864 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 865 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_RulesAreListed:
# 866 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The Battle Quest rules are listed.$"
# 867 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 868 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ReadWhichHeading:
# 869 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 870 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 871 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules:
# 872 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "When the PYRAMID is conquered,\n"
# 873 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the wild POKéMON that appear in it\l"
# 874 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "are replaced by different kinds.\p"
# 875 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Explore, observe, and learn what kinds\n"
# 876 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "of wild POKéMON you may encounter.$"
# 877 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 878 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules:
# 879 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "TRAINERS are lying in wait for you\n"
# 880 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "inside the PYRAMID.\p"
# 881 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "On each floor, there are up to\n"
# 882 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "eight TRAINERS.\p"
# 883 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "When you defeat a TRAINER, you will\n"
# 884 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "get a helpful hint for your adventure.$"
# 885 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 886 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules:
# 887 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The mazes in the PYRAMID rearrange\n"
# 888 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "themselves every time you enter it.\p"
# 889 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The mazes are poorly lit.\n"
# 890 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You must advance with caution.\p"
# 891 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The light grows brighter whenever you\n"
# 892 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "defeat a wild POKéMON or a TRAINER.$"
# 893 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 894 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules:
# 895 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The BATTLE BAG serves as your BAG\n"
# 896 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "while in the PYRAMID.\p"
# 897 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "There are two separate BATTLE BAGS--\n"
# 898 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "one each for the Level 50 and\l"
# 899 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Open Level adventures.\p"
# 900 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "They each can hold up to 99 pieces\n"
# 901 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "of ten kinds of items.\p"
# 902 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The contents of the BATTLE BAG are\n"
# 903 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "lost if you fail in your quest.$"
