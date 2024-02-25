# 1 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 4 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_MapScripts::
# 5 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeLobby_OnFrame
# 6 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeLobby_OnWarp
# 7 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 9 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_OnFrame:
# 10 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePikeLobby_EventScript_GetChallengeStatus
# 11 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePikeLobby_EventScript_QuitWithoutSaving
# 12 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePikeLobby_EventScript_WonChallenge
# 13 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePikeLobby_EventScript_LostChallenge
# 14 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.2byte 0
# 15 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 16 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_OnWarp:
# 17 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePikeLobby_EventScript_TurnPlayerNorth
# 18 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.2byte 0
# 19 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 20 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TurnPlayerNorth::
# 21 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 22 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 23 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 24 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 25 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_GetChallengeStatus::
# 26 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_getstatus
# 27 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 28 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 29 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_QuitWithoutSaving::
# 30 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 31 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 32 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 33 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting, MSGBOX_DEFAULT
# 34 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 35 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK, 0
# 36 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, FALSE
# 37 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 38 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 39 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 40 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 41 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 42 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_WonChallenge::
# 43 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 44 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_isbrain
# 45 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePikeLobby_EventScript_DefeatedQueen
# 46 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance, MSGBOX_DEFAULT
# 47 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 48 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_GiveBattlePoints
# 49 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 50 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_DefeatedQueen::
# 51 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 53 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_GiveBattlePoints::
# 54 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints, MSGBOX_DEFAULT
# 55 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_givepoints
# 56 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 57 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkairshow
# 58 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_get PIKE_DATA_TOTAL_STREAKS
# 59 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	addvar VAR_RESULT, 1
# 60 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_TOTAL_STREAKS, VAR_RESULT
# 61 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 62 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 63 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 64 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ShallRecordResults
# 65 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 66 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_save 0
# 67 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_SAVE
# 68 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 69 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 70 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 71 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 72 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 73 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 74 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 75 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_LostChallenge::
# 76 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 77 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults
# 78 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 79 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkairshow
# 80 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, 0
# 81 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, FALSE
# 82 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 83 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 84 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 85 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_save 0
# 86 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_SAVE
# 87 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 88 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 89 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 90 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 91 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 92 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 93 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 94 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Attendant::
# 95 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lock
# 96 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	faceplayer
# 97 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PIKE
# 98 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 99 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special SavePlayerParty
# 100 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike, MSGBOX_DEFAULT
# 101 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge::
# 102 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_TakeChallenge
# 103 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 104 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 105 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 0, BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge
# 107 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 1, BattleFrontier_BattlePikeLobby_EventScript_ExplainChallenge
# 108 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 2, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 109 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 110 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 111 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge::
# 112 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode
# 113 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 114 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 115 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 117 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 118 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkineligible
# 119 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons
# 120 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 121 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons, MSGBOX_DEFAULT
# 122 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 123 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 124 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 125 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 126 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 127 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitstate
# 128 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 129 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 130 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 131 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case NO, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 132 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case YES, BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge
# 133 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 134 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 135 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge::
# 136 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 137 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_1, 0
# 138 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 139 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_init
# 140 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 141 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, TRUE
# 142 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_savehelditems
# 143 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 144 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 145 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 146 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	delay 2
# 147 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 148 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 149 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_savehelditems
# 150 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePikeLobby_EventScript_CancelChallengeSaveFailed
# 151 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special SavePlayerParty
# 152 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 153 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 154 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 155 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_settrainers
# 156 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_BattlePikeLobby_EventScript_WalkToCorridor
# 157 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 158 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_BattlePike_EventScript_CloseCurtain
# 159 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_CORRIDOR, 6, 7
# 160 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 161 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitstate
# 162 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 163 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 164 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ExplainChallenge::
# 165 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike, MSGBOX_DEFAULT
# 166 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge
# 167 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 168 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons::
# 169 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 170 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLv50
# 171 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLvOpen
# 172 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 173 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLv50::
# 174 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 175 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge
# 176 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 177 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLvOpen::
# 178 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 179 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge
# 180 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 181 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_CancelChallengeSaveFailed::
# 182 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 183 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 184 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 185 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge::
# 186 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 187 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge::
# 188 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 189 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge::
# 190 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	release
# 191 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 192 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 193 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ShowResults::
# 194 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 195 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PIKE
# 196 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitbuttonpress
# 197 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special RemoveRecordsWindow
# 198 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 199 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 200 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 201 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_WalkToCorridor::
# 202 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePikeLobby_Movement_AttendantWalkToCorridor
# 203 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattlePikeLobby_Movement_PlayerWalkToCorridor
# 204 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmovement 0
# 205 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 206 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 207 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Movement_PlayerWalkToCorridor:
# 208 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 209 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Movement_AttendantWalkToCorridor:
# 210 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 211 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 212 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	set_invisible
# 213 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	step_end
# 214 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 215 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Hiker::
# 216 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal, MSGBOX_NPC
# 217 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 218 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 219 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Twin::
# 220 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer, MSGBOX_NPC
# 221 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 222 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 223 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Beauty::
# 224 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere, MSGBOX_NPC
# 225 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 226 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 227 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesBoard::
# 228 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 229 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 230 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 231 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 232 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 233 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard::
# 234 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ReadWhichHeading
# 235 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 236 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 16, 4, MULTI_BATTLE_PIKE_RULES, FALSE
# 237 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 238 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 0, BattleFrontier_BattlePikeLobby_EventScript_RulesPokenavBag
# 239 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 1, BattleFrontier_BattlePikeLobby_EventScript_RulesHeldItems
# 240 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 2, BattleFrontier_BattlePikeLobby_EventScript_RulesMonOrder
# 241 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 3, BattleFrontier_BattlePikeLobby_EventScript_ExitRules
# 242 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_ExitRules
# 243 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 244 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 245 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesPokenavBag::
# 246 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules, MSGBOX_DEFAULT
# 247 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 248 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 249 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 250 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesHeldItems::
# 251 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules, MSGBOX_DEFAULT
# 252 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 253 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 254 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 255 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesMonOrder::
# 256 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules, MSGBOX_DEFAULT
# 257 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 258 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 259 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 260 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ExitRules::
# 261 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 262 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 263 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 264 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePike_EventScript_CloseCurtain::
# 265 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_PIKE_CURTAIN_CLOSE
# 266 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special CloseBattlePikeCurtain
# 267 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitstate
# 268 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 269 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 270 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 271 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike:
# 272 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Where the luck of TRAINERS\n"
# 273 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "is put to the test…\p"
# 274 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Welcome to the BATTLE PIKE…\p"
# 275 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I am your guide to the BATTLE PIKE…$"
# 276 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 277 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_TakeChallenge:
# 278 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Would you like to take the Battle\n"
# 279 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Choice challenge?$"
# 280 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 281 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike:
# 282 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Here we conduct an event we call\n"
# 283 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "the Battle Choice.\p"
# 284 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "The Battle Choice rules are very\n"
# 285 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "simple…\p"
# 286 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Choose one of three paths and make\n"
# 287 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "your way to the goal room at the end\l"
# 288 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "of the BATTLE PIKE. It's that simple.\p"
# 289 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "However, what happens on the chosen\n"
# 290 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "path depends entirely on the luck\l"
# 291 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "of the challenger…\p"
# 292 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "If you reach the goal, you will be\n"
# 293 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "rewarded with Battle Points.\p"
# 294 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 295 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "challenge, please have a word with\l"
# 296 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "our staff in the big rooms on the way.\p"
# 297 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 298 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "you will be disqualified.$"
# 299 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 300 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou:
# 301 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "We look forward to seeing you\n"
# 302 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "on another occasion…$"
# 303 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 304 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode:
# 305 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You have the choice of two courses,\n"
# 306 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Level 50 and Open Level.\l"
# 307 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Which will you challenge?$"
# 308 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 309 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLv50:
# 310 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I beg your pardon, but…\p"
# 311 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You do not have three eligible\n"
# 312 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "POKéMON for the Battle Choice event.\p"
# 313 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You must have three different POKéMON\n"
# 314 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 315 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "They also must be holding different\n"
# 316 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "kinds of items.\p"
# 317 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 318 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please come see me when\n"
# 319 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "you are ready…$"
# 320 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 321 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLvOpen:
# 322 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I beg your pardon, but…\p"
# 323 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You do not have three eligible\n"
# 324 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "POKéMON for the Battle Choice event.\p"
# 325 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You must have three different\n"
# 326 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "POKéMON to enter.\p"
# 327 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "They also must be holding different\n"
# 328 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "kinds of items.\p"
# 329 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 330 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please come see me when\n"
# 331 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "you are ready…$"
# 332 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 333 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons:
# 334 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please choose the three POKéMON\n"
# 335 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "you wish to enter in the challenge…$"
# 336 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 337 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge:
# 338 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Before starting your Battle Choice\n"
# 339 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "challenge, I must save the game.\l"
# 340 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Is that acceptable?$"
# 341 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 342 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_StepThisWay:
# 343 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please step this way…$"
# 344 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 345 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults:
# 346 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Your challenge has ended…\p"
# 347 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I shall record your results.\n"
# 348 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please wait…$"
# 349 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 350 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance:
# 351 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You have completed the challenge…\p"
# 352 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I must say… You seem to possess luck\n"
# 353 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "in abundance…$"
# 354 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 355 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ShallRecordResults:
# 356 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I shall record your results.\n"
# 357 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please wait…$"
# 358 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 359 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
@ Unused
# 360 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints2:
# 361 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "To commemorate your completion of\n"
# 362 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "the Battle Choice challenge, we award\l"
# 363 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "you these Battle Point(s)…$"
# 364 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 365 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
@ Unused
# 366 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ReachedBattlePointLimit:
# 367 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You appear to have reached the limit\n"
# 368 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "for Battle Points…\p"
# 369 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please exchange some Battle Points\n"
# 370 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "for prizes, then return…$"
# 371 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 372 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting:
# 373 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I beg your pardon, but…\p"
# 374 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You failed to save before you quit\n"
# 375 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "your challenge the last time.\p"
# 376 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Because of that, your challenge so far\n"
# 377 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "has been disqualified. I am sorry…$"
# 378 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 379 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen:
# 380 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Congratulations…\p"
# 381 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You have snatched victory from the\n"
# 382 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "PIKE QUEEN and cleared the event…$"
# 383 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 384 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints:
# 385 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "In recognition of your amazing luck,\n"
# 386 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "we award you these Battle Point(s)…$"
# 387 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 388 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal:
# 389 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Arrgh! I blew my chance!\n"
# 390 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I was one room away from the goal!\p"
# 391 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "In this place, you'd better watch out\n"
# 392 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "for poison, freezing, and so on.$"
# 393 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 394 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer:
# 395 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I've completed the challenge 10 times\n"
# 396 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "now, but I've never had to battle\l"
# 397 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "a TRAINER once.$"
# 398 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 399 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere:
# 400 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Listen! Listen!\p"
# 401 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Don't you think that the special\n"
# 402 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "abilities of POKéMON will be useful\l"
# 403 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "here?$"
# 404 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 405 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
@ Unused
# 406 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_TrainersWhicheverPathIChoose:
# 407 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "What is this weird place?\n"
# 408 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I can't figure it out at all!\p"
# 409 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I've taken the challenge a bunch\n"
# 410 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "of times, but all I ever do is run into\l"
# 411 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "TRAINERS whichever path I choose.$"
# 412 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 413 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_RulesAreListed:
# 414 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "The Battle Choice's rules are listed.$"
# 415 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 416 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ReadWhichHeading:
# 417 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 418 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 419 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules:
# 420 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "The BAG and POKéNAV may not be used\n"
# 421 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "during a Battle Choice challenge.$"
# 422 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 423 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules:
# 424 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "During a Battle Choice challenge,\n"
# 425 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "any BERRY or HERB held by POKéMON\l"
# 426 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "will be effective only once.$"
# 427 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 428 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules:
# 429 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "During a Battle Choice challenge,\n"
# 430 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "the sequence of POKéMON cannot be\l"
# 431 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "changed.\p"
# 432 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "The sequence must be set before\n"
# 433 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "starting your challenge.$"
