# 1 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 2 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 4 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_MapScripts::
# 5 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_BattleTentLobby_OnFrame
# 6 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_BattleTentLobby_OnWarp
# 7 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.byte 0
# 8 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 9 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_OnWarp:
# 10 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SlateportCity_BattleTentLobby_EventScript_TurnPlayerNorth
# 11 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.2byte 0
# 12 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 13 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TurnPlayerNorth::
# 14 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 16 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 17 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 18 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_OnFrame:
# 19 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, SlateportCity_BattleTentLobby_EventScript_GetChallengeStatus
# 20 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, SlateportCity_BattleTentLobby_EventScript_QuitWithoutSaving
# 21 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, SlateportCity_BattleTentLobby_EventScript_ResumeChallenge
# 22 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, SlateportCity_BattleTentLobby_EventScript_WonChallenge
# 23 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, SlateportCity_BattleTentLobby_EventScript_LostChallenge
# 24 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.2byte 0
# 25 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 26 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_GetChallengeStatus::
# 27 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_getstatus
# 28 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 29 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 30 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_QuitWithoutSaving::
# 31 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 32 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 33 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 34 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 35 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 36 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 37 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	releaseall
# 38 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 39 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 40 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_WonChallenge::
# 41 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 42 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons
# 43 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 44 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_setrandomprize
# 45 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 46 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_save 0
# 47 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 48 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitse
# 49 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_GivePrize::
# 50 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_AwardYouThisPrize, MSGBOX_DEFAULT
# 51 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_giveprize
# 52 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 53 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case FALSE, SlateportCity_BattleTentLobby_EventScript_NoRoomForPrize
# 54 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 55 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ReceivedPrize  @ Odd that it uses Tower's instead of Factory's or its own
# 56 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 57 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 58 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitfanfare
# 59 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_EndGivePrize
# 60 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 61 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_NoRoomForPrize::
# 62 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom, MSGBOX_DEFAULT
# 63 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_EndGivePrize
# 64 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 65 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_LostChallenge::
# 66 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 67 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults
# 68 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 69 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 70 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_save 0
# 71 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 72 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitse
# 73 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 74 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_EndGivePrize::
# 75 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 76 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 77 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 78 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	releaseall
# 79 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 80 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 81 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ResumeChallenge::
# 82 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 83 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_BeenWaitingForYou
# 84 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 85 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_save CHALLENGE_STATUS_SAVING
# 86 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 87 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitse
# 88 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 89 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 90 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_0x8006, 2
# 91 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_EnterChallenge
# 92 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 93 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_Attendant::
# 94 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_UnderDevelopment, MSGBOX_NPC
# 95 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
    end
# 96 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 97 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_AttendantOriginal::
# 98 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lock
# 99 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	faceplayer
# 100 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_getprize
# 101 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto_if_ne VAR_RESULT, ITEM_NONE, SlateportCity_BattleTentLobby_EventScript_GivePrize
# 102 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 103 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent, MSGBOX_DEFAULT
# 104 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge::
# 105 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_TakeChallenge
# 106 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 107 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 108 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 109 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 0, SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge
# 110 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 1, SlateportCity_BattleTentLobby_EventScript_ExplainChallenge
# 111 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 2, SlateportCity_BattleTentLobby_EventScript_CancelChallenge
# 112 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_CancelChallenge
# 113 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 114 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge::
# 115 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 116 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 117 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
# 118 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 119 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 120 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case NO, SlateportCity_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 121 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case YES, SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge
# 122 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 123 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 124 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge::
# 125 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 126 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 127 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_init
# 128 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 129 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 130 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 131 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	delay 2
# 132 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 133 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 134 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SlateportCity_BattleTentLobby_EventScript_CancelChallengeSaveFailed
# 135 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_0x8006, 0
# 136 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_EnterChallenge::
# 137 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 138 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 139 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	call SlateportCity_BattleTentLobby_EventScript_WalkToDoor
# 140 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_CORRIDOR, 2, 7
# 141 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 142 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitstate
# 143 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 144 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 145 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_WalkToDoor::
# 146 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, SlateportCity_BattleTentLobby_Movement_AttendantWalkToDoor
# 147 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_BattleTentLobby_Movement_PlayerWalkToDoor
# 148 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmovement 0
# 149 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	opendoor 6, 1
# 150 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitdooranim
# 151 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, SlateportCity_BattleTentLobby_Movement_AttendantEnterDoor
# 152 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_BattleTentLobby_Movement_PlayerEnterDoor
# 153 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmovement 0
# 154 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closedoor 6, 1
# 155 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitdooranim
# 156 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 157 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 158 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_AttendantWalkToDoor:
# 159 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 160 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 161 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 162 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 163 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 164 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_AttendantEnterDoor:
# 165 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 166 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	set_invisible
# 167 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 168 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 169 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_PlayerWalkToDoor:
# 170 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 171 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 172 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 173 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 174 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 175 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_PlayerEnterDoor:
# 176 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 177 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 178 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	set_invisible
# 179 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 180 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 181 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ExplainChallenge::
# 182 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSlateportTent, MSGBOX_DEFAULT
# 183 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge
# 184 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 185 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_CancelChallengeSaveFailed::
# 186 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 187 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_CancelChallenge
# 188 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 189 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_LoadPartyCancelChallenge::
# 190 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 191 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_CancelChallenge::
# 192 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 193 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	release
# 194 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 195 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 196 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
@ Unused
# 197 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_UnusedEnterDoor::
# 198 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 199 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 200 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 201 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	set_invisible
# 202 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 203 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 204 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ThiefGiver::
# 205 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lock
# 206 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	faceplayer
# 207 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_THIEF, SlateportCity_BattleTentLobby_EventScript_ReceivedThief
# 208 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_CouldntFindMonForMe, MSGBOX_DEFAULT
# 209 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	giveitem ITEM_TM_THIEF
# 210 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setflag FLAG_RECEIVED_TM_THIEF
# 211 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainThief, MSGBOX_DEFAULT
# 212 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	release
# 213 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 214 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 215 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ReceivedThief::
# 216 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainThief, MSGBOX_DEFAULT
# 217 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	release
# 218 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 219 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 220 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_Man::
# 221 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_IllTryUsingBugMons, MSGBOX_NPC
# 222 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 223 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 224 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_Girl::
# 225 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_BattleEvenWithoutToughMons, MSGBOX_NPC
# 226 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 227 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 228 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_Woman::
# 229 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_NiceIfMoreSelection, MSGBOX_NPC
# 230 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 231 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 232 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesBoard::
# 233 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 234 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 235 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 236 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 237 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 238 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard::
# 239 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading
# 240 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 241 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	multichoice 17, 0, MULTI_SLATEPORT_TENT_RULES, FALSE
# 242 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 243 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 0, SlateportCity_BattleTentLobby_EventScript_RulesBasics
# 244 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 1, SlateportCity_BattleTentLobby_EventScript_RulesSwapPartner
# 245 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 2, SlateportCity_BattleTentLobby_EventScript_RulesSwapNumber
# 246 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 3, SlateportCity_BattleTentLobby_EventScript_RulesSwapNotes
# 247 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 4, SlateportCity_BattleTentLobby_EventScript_RulesMons
# 248 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 5, SlateportCity_BattleTentLobby_EventScript_ExitRules
# 249 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_ExitRules
# 250 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 251 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 252 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesBasics::
# 253 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainBasicRules, MSGBOX_DEFAULT
# 254 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 255 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 256 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 257 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesSwapPartner::
# 258 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapPartnerRules, MSGBOX_DEFAULT
# 259 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 260 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 261 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 262 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesSwapNumber::
# 263 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules, MSGBOX_DEFAULT
# 264 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 265 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 266 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 267 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesSwapNotes::
# 268 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapNotes, MSGBOX_DEFAULT
# 269 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 270 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 271 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 272 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesMons::
# 273 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
# 274 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 275 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 276 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 277 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ExitRules::
# 278 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	releaseall
# 279 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 280 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 281 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Text_CouldntFindMonForMe:
# 282 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "So, like, I couldn't find myself any\n"
# 283 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Pokémon that were, like, for me.\p"
# 284 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "So, I figured, like, hey, I should file\n"
# 285 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "a complaint to the guy there?\p"
# 286 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "And he wouldn't hear me out, like, hey!\n"
# 287 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "So, like, total bummer, man!\p"
# 288 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Hey, like, you! Zip it, you know?\n"
# 289 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Just, you know, take this!$"
# 290 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 291 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Text_ExplainThief:
# 292 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "That's, like, TM46, you know?\n"
# 293 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "I saw it fall out of one of those Team\p"
# 294 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Aqua member's pocket and snatched it\n"
# 295 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "up. I have no need for it, but maybe you\l"
# 296 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "can put it to good use.$"
# 297 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 298 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Text_IllTryUsingBugMons:
# 299 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "I don't really like BUG Pokémon,\n"
# 300 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "but maybe I'll try using some for\l"
# 301 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "a change of pace.\p"
# 302 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Who knows, I might even get to like\n"
# 303 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "them!$"
# 304 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 305 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Text_BattleEvenWithoutToughMons:
# 306 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "You can battle all you want here even\n"
# 307 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "if you don't have any tough Pokémon.$"
# 308 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 309 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Text_NiceIfMoreSelection:
# 310 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Wouldn't it be nice if they had more of\n"
# 311 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "a selection?$"
# 312 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 313 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Text_UnderDevelopment:
# 314 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "The Battle Tent is currently\n"
# 315 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "under development.$"
