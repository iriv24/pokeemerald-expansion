# 1 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 2 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 4 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_MapScripts::
# 5 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentLobby_OnFrame
# 6 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, VerdanturfTown_BattleTentLobby_OnWarp
# 7 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.byte 0
# 8 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 9 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_OnWarp:
# 10 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, VerdanturfTown_BattleTentLobby_EventScript_TurnPlayerNorth
# 11 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.2byte 0
# 12 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 13 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TurnPlayerNorth::
# 14 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 16 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 17 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 18 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_OnFrame:
# 19 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, VerdanturfTown_BattleTentLobby_EventScript_GetChallengeStatus
# 20 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, VerdanturfTown_BattleTentLobby_EventScript_QuitWithoutSaving
# 21 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, VerdanturfTown_BattleTentLobby_EventScript_ResumeChallenge
# 22 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, VerdanturfTown_BattleTentLobby_EventScript_WonChallenge
# 23 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, VerdanturfTown_BattleTentLobby_EventScript_LostChallenge
# 24 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.2byte 0
# 25 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 26 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_GetChallengeStatus::
# 27 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_getstatus
# 28 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 29 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 30 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_QuitWithoutSaving::
# 31 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 32 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge, MSGBOX_DEFAULT
# 33 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 34 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 35 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 36 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 37 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 38 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 39 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 40 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_WonChallenge::
# 41 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 42 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak, MSGBOX_DEFAULT
# 43 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded
# 44 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 45 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_setrandomprize
# 46 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 47 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save 0
# 48 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 49 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
# 50 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 51 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_GivePrize::
# 52 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize, MSGBOX_DEFAULT
# 53 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_giveprize
# 54 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 55 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case FALSE, VerdanturfTown_BattleTentLobby_EventScript_NoRoomForPrize
# 56 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 57 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_ReceivedPrize  @ Odd that it used Dome's copy instead of Palace's
# 58 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 59 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 60 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitfanfare
# 61 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
# 62 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 63 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 64 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 65 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 66 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 67 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NoRoomForPrize::
# 68 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NoSpaceForPrize, MSGBOX_DEFAULT
# 69 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 70 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 71 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 72 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 73 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 74 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 75 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_PrizeWaiting::
# 76 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 77 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak, MSGBOX_DEFAULT
# 78 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_GivePrize
# 79 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 80 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 81 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_LostChallenge::
# 82 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 83 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_ResultsWillBeRecorded
# 84 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 85 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 86 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save 0
# 87 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 88 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
# 89 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
# 90 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 91 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 92 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 93 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 94 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 95 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ResumeChallenge::
# 96 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 97 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting, MSGBOX_DEFAULT
# 98 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge
# 99 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 100 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save CHALLENGE_STATUS_SAVING
# 101 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 102 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
# 103 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 104 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 105 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge
# 106 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 107 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Attendant::
# 108 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 109 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	faceplayer
# 110 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_getprize
# 111 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_ne VAR_RESULT, ITEM_NONE, VerdanturfTown_BattleTentLobby_EventScript_PrizeWaiting
# 112 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 113 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent, MSGBOX_DEFAULT
# 114 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge::
# 115 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_TakeChallenge
# 116 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 117 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 118 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 119 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 0, VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge
# 120 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 1, VerdanturfTown_BattleTentLobby_EventScript_ExplainChallenge
# 121 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 2, VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
# 122 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
# 123 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 124 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge::
# 125 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 126 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 127 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_RESULT, 2
# 128 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_checkineligible
# 129 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMons
# 130 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
# 131 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 132 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 133 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8004, 1
# 134 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 135 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 136 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitstate
# 137 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 138 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 139 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 140 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case NO, VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 141 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case YES, VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge
# 142 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 143 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 144 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge::
# 145 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 146 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 147 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_init
# 148 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 149 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 150 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 151 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 152 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	delay 2
# 153 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 154 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 155 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, VerdanturfTown_BattleTentLobby_EventScript_CancelChallengeSaveFailed
# 156 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge::
# 157 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 158 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 159 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NowFollowMe, MSGBOX_DEFAULT
# 160 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 161 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	call VerdanturfTown_BattleTentLobby_EventScript_WalkToDoor
# 162 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_CORRIDOR, 2, 7
# 163 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 164 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitstate
# 165 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 166 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 167 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ExplainChallenge::
# 168 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent, MSGBOX_DEFAULT
# 169 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge
# 170 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 171 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMons::
# 172 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 173 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_50, VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLv50
# 174 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLvOpen
# 175 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 176 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLv50::
# 177 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 178 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_EndCancelChallenge
# 179 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 180 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLvOpen::
# 181 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 182 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_EndCancelChallenge
# 183 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 184 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_CancelChallengeSaveFailed::
# 185 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 186 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
# 187 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 188 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge::
# 189 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 190 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge::
# 191 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
# 192 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_EndCancelChallenge::
# 193 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 194 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 195 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 196 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_WalkToDoor::
# 197 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, VerdanturfTown_BattleTentLobby_Movement_WalkToDoor
# 198 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VerdanturfTown_BattleTentLobby_Movement_WalkToDoor
# 199 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 200 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	opendoor 6, 1
# 201 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 202 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, VerdanturfTown_BattleTentLobby_Movement_AttendantEnterDoor
# 203 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VerdanturfTown_BattleTentLobby_Movement_PlayerEnterDoor
# 204 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 205 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closedoor 6, 1
# 206 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 207 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 208 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 209 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Movement_WalkToDoor:
# 210 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 211 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 212 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 213 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	step_end
# 214 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 215 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Movement_AttendantEnterDoor:
# 216 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 217 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	set_invisible
# 218 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	step_end
# 219 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 220 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Movement_PlayerEnterDoor:
# 221 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 222 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 223 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	set_invisible
# 224 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	step_end
# 225 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 226 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AttractGiver::
# 227 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 228 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	faceplayer
# 229 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_DRAIN_KISS, VerdanturfTown_BattleTentLobby_EventScript_ReceivedAttract
# 230 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionRunsDeep, MSGBOX_DEFAULT
# 231 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	giveitem ITEM_TM_DRAINING_KISS
# 232 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setflag FLAG_RECEIVED_TM_DRAIN_KISS
# 233 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionMutual, MSGBOX_DEFAULT
# 234 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 235 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 236 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 237 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReceivedAttract::
# 238 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionMutual, MSGBOX_DEFAULT
# 239 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 240 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 241 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 242 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Boy1::
# 243 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_TaughtWhatKindsOfMoves, MSGBOX_NPC
# 244 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 245 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 246 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Boy2::
# 247 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 248 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_MonsReluctantToUseDislikedMoves, MSGBOX_DEFAULT
# 249 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 250 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 251 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 252 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Scott::
# 253 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 254 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	faceplayer
# 255 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_VERDANTURF, VerdanturfTown_BattleTentLobby_EventScript_ScottAlreadySpokenTo
# 256 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ScottCanMeetToughTrainers, MSGBOX_DEFAULT
# 257 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 258 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_VERDANTURF
# 259 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 260 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 261 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 262 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ScottAlreadySpokenTo::
# 263 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ScottVisitRegularly, MSGBOX_DEFAULT
# 264 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 265 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 266 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 267 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_LittleBoy::
# 268 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 269 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_GentleMonsScaryIfAngry, MSGBOX_DEFAULT
# 270 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 271 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 272 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 273 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesBoard::
# 274 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 275 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 276 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 277 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 278 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 279 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard::
# 280 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading
# 281 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 282 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BATTLE_TENT_RULES
# 283 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special ShowScrollableMultichoice
# 284 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitstate
# 285 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 286 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 0, VerdanturfTown_BattleTentLobby_EventScript_RulesLevel
# 287 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 1, VerdanturfTown_BattleTentLobby_EventScript_RulesBasics
# 288 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 2, VerdanturfTown_BattleTentLobby_EventScript_RulesNature
# 289 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 3, VerdanturfTown_BattleTentLobby_EventScript_RulesMoves
# 290 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 4, VerdanturfTown_BattleTentLobby_EventScript_RulesUnderpowered
# 291 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 5, VerdanturfTown_BattleTentLobby_EventScript_RulesWhenInDanger
# 292 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 6, VerdanturfTown_BattleTentLobby_EventScript_ExitRules
# 293 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_ExitRules
# 294 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 295 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 296 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesLevel::
# 297 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleTentLobby_Text_ExplainLevelRules, MSGBOX_DEFAULT
# 298 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 299 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 300 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 301 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesBasics::
# 302 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics, MSGBOX_DEFAULT
# 303 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 304 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 305 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 306 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesNature::
# 307 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature, MSGBOX_DEFAULT
# 308 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 309 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 310 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 311 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesMoves::
# 312 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves, MSGBOX_DEFAULT
# 313 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 314 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 315 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 316 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesUnderpowered::
# 317 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered, MSGBOX_DEFAULT
# 318 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 319 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 320 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 321 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesWhenInDanger::
# 322 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger, MSGBOX_DEFAULT
# 323 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 324 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 325 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 326 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ExitRules::
# 327 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 328 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 329 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 330 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_MonsReluctantToUseDislikedMoves:
# 331 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "If it doesn't like a certain move,\n"
# 332 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "a POKéMON will be reluctant to use it.\p"
# 333 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "It doesn't matter how strong it is,\n"
# 334 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "either.\p"
# 335 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "For example, a POKéMON with a GENTLE\n"
# 336 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "nature probably won't enjoy hurting\l"
# 337 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "its opponents.\p"
# 338 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "If it can't seem to live up to its\n"
# 339 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "potential, it's probably failing at\l"
# 340 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "using a disliked move against its will.$"
# 341 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 342 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_GentleMonsScaryIfAngry:
# 343 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "My big sister is gentle usually.\n"
# 344 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "But when she gets angry,\l"
# 345 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "she's really, really scary!\p"
# 346 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "I bet a gentle POKéMON will be scary\n"
# 347 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "if it gets angry!$"
# 348 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 349 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_AttractionRunsDeep:
# 350 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "My feelings toward my POKéMON…\n"
# 351 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "The attraction runs deep…\p"
# 352 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "Oh, hi, you didn't see that, did you?\n"
# 353 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "Well, it doesn't matter.\p"
# 354 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "How would you like this TM for\n"
# 355 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "your POKéMON?$"
# 356 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 357 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_AttractionMutual:
# 358 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "Wait, but not in a weird way!$"
# 359 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 360 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_TaughtWhatKindsOfMoves:
# 361 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "What kind of moves have you taught\n"
# 362 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "your POKéMON?\p"
# 363 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "I think you would give yourself\n"
# 364 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "an advantage if they knew how to\l"
# 365 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "heal or protect themselves.$"
# 366 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 367 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_ScottCanMeetToughTrainers:
# 368 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "SCOTT: Hey there, {PLAYER}{KUN}!\n"
# 369 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "I thought I might see you here.\p"
# 370 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "A BATTLE TENT's a place where\n"
# 371 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "you can meet tough TRAINERS.\p"
# 372 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "It doesn't matter what the rules are,\n"
# 373 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "or how battles are waged, either.\p"
# 374 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "{PLAYER}{KUN}, I expect you to do\n"
# 375 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "the best you can!$"
# 376 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 377 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_ScottVisitRegularly:
# 378 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "SCOTT: I visit here regularly in hopes\n"
# 379 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "of seeing tough TRAINERS in action\l"
# 380 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "in whatever the situation.$"
