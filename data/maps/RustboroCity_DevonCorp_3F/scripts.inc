# 1 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 2
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_MapScripts::
# 5 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_OnWarp
# 7 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_OnFrame
# 8 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.byte 0
# 9 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 10 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnTransition:
# 11 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call_if_eq VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos
# 12 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 13 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 14 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos::
# 15 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 3, 2
# 16 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
# 17 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	return
# 18 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 19 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnWarp:
# 20 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast
# 21 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 22 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 23 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast::
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 25 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnFrame:
# 28 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 40 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_LETTER
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis, MSGBOX_DEFAULT
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 61 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 63 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare, MSGBOX_DEFAULT
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 68 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 73 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_Unused:
# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 80 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 92 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 95 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_down
# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
# 104 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 105 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 106 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 109 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 111 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 116 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 117 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 118 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 119 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 120 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 123 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 127 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 129 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 130 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 134 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 138 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 139 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 140 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 141 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
# 142 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 145 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 146 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_right
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 151 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 152 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
# 153 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_GiveExpShare
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 157 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 158 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 160 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 161 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_GiveExpShare::
# 162 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
# 163 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_ge RustboroCity_DevonCorp_3F_EventScript_GiveDiscount
# 164 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_WATER_STONE, 10
# 166 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_FIRE_STONE, 10
# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_THUNDER_STONE, 10
# 168 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_SUN_STONE, 10
# 169 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
# 171 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 172 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 175 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 177 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor::
# 178 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
# 179 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 180 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 183 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 184 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 185 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Employee::
# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 187 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls
# 189 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 191 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 192 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 193 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls::
# 194 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
# 195 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 196 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 198 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 199 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
# 200 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 201 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 202 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor:
# 203 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'm Mr. Stone, the President of\n"
# 204 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the Devon Corporation.\p"
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'd just got word about you!\p"
# 206 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You saved our staff not just once,\n"
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "but twice!\p"
# 208 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I have a favor to ask of an amazing\n"
# 209 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "person like you.\p"
# 210 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I understand that you're delivering\n"
# 211 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a package to Slateport's Shipyard.\p"
# 212 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Well, on the way, could you stop off in\n"
# 213 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Dewford Town?\p"
# 214 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I was hoping that you'd deliver a\n"
# 215 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Letter to Steven in Dewford.$"
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 217 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis:
# 218 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: Now, you should know that\n"
# 219 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I am a great President.\p"
# 220 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "So, I'd never be so cheap as to ask\n"
# 221 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a favor for nothing in return.\p"
# 222 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "That's why I want you to have this!$"
# 223 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 224 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ReceivedPokenav:
# 225 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} received a PokéNav.$"
# 226 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 227 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp:
# 228 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: That device…\p"
# 229 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a Pokémon Navigator, or PokéNav\n"
# 230 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for short.\p"
# 231 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's an indispensable tool for any\n"
# 232 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "trainer on an adventure.\p"
# 233 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It has a map of the Hoenn region.\p"
# 234 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You can check the locations of\n"
# 235 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Dewford and Slateport easily!\p"
# 236 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "By the way, I've heard that sinister\n"
# 237 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "criminals--Magma and Aqua, I believe--\l"
# 238 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "have been making trouble far and wide.\p"
# 239 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I think it would be best if you rested\n"
# 240 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "up before you go on your way.$"
# 241 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare:
# 243 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: Well, then, {PLAYER}{KUN},\n"
# 244 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "go with caution and care!$"
# 245 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 246 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_CountingOnYou:
# 247 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: I'm counting on you!$"
# 248 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 249 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter:
# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: You delivered my Letter?\n"
# 251 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Thank you kindly!\p"
# 252 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is my way of thanking you.\n"
# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "These should help you.$"
# 254 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 255 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ExplainExpShare:
# 256 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: If you can believe it, I love\n"
# 257 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "collecting stones of any kind!\p"
# 258 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Evolution stones, stones from rivers,\n"
# 259 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "even stones I find on the ground!\p"
# 260 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I figured you would like those a little\n"
# 261 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "better than the rock I found on my walk\l"
# 262 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "to work this morning though, ha-ha!$"
# 263 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends:
# 264 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: Since my youth, I've immersed\n"
# 265 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "myself in work and collecting.\p"
# 266 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Consequently, I'm not familiar with\n"
# 267 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "trends and that sort of thing.\p"
# 268 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "But do young people all want to be\n"
# 269 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "trainers in the Pokémon League?$"
# 270 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 271 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere:
# 272 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is the Devon Corporation's\n"
# 273 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "third floor.\p"
# 274 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our President's office is on\n"
# 275 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "this floor.\p"
# 276 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Anyway, I can't tell you how much I'm\n"
# 277 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "grateful for what you've done.\p"
# 278 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Um… By the way, that parcel\n"
# 279 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you got back for us…\p"
# 280 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could I get you to deliver that to\n"
# 281 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the Shipyard in Slateport?\p"
# 282 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It would be awful if those robbers\n"
# 283 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "tried to take it again.\p"
# 284 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Uh… Hehehe, so, uh, could I count\n"
# 285 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "on you to do that for me?\p"
# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Oh, that's right.\n"
# 287 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could you wait here a second?$"
# 288 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 289 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe:
# 290 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our President would like to have\n"
# 291 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a word with you.\p"
# 292 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please come with me.$"
# 293 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 294 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_PleaseGoAhead:
# 295 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please, go ahead.$"
# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 297 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard:
# 298 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "If you visit the Shipyard in Slateport,\n"
# 299 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you should go see Capt. Stern.$"
# 300 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 301 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular:
# 302 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Devon's new products, the Repeat Ball\n"
# 303 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "and Timer Ball, have become hugely\l"
# 304 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "popular among trainers.$"
# 305 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 306 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RareRocksDisplay:
# 307 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 308 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "stones assembled by the President.$"

RustboroCity_DevonCorp_3F_EventScript_GiveDiscount::
# 313 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetterHard, MSGBOX_DEFAULT
# 314 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 315 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 316 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 317 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_3F_EventScript_StoneShop::
# 322 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 323 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 324 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_StoneShop_2
# 330 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox StoneShop
# 331 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_0, ITEM_FIRE_STONE
# 332 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_1, ITEM_WATER_STONE
# 333 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_2, ITEM_THUNDER_STONE
# 334 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_3, ITEM_LEAF_STONE
# 335 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_4, ITEM_MOON_STONE
# 336 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_5, ITEM_SUN_STONE
# 337 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_6, ITEM_SHINY_STONE
# 338 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_7, ITEM_DUSK_STONE
# 339 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_8, ITEM_DAWN_STONE
# 340 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_9, ITEM_ICE_STONE
# 341 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_10, MULTI_B_PRESSED
# 343 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 344 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 345 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_StoneShop_5
# 351 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto RustboroCity_DevonCorp_3F_EventScript_StoneShop_BuyStone
RustboroCity_DevonCorp_3F_EventScript_StoneShop_1:
# 354 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_3F_EventScript_StoneShop_2:
# 326 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox ExpensiveShop
	goto RustboroCity_DevonCorp_3F_EventScript_StoneShop_1

RustboroCity_DevonCorp_3F_EventScript_StoneShop_5:
# 347 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto RustboroCity_DevonCorp_3F_EventScript_StoneShop_No
	goto RustboroCity_DevonCorp_3F_EventScript_StoneShop_1


RustboroCity_DevonCorp_3F_EventScript_StoneShop_BuyStone::
# 359 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 360 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_DevonCorp_3F_EventScript_StoneShop_ComeBackWithBottleCap
# 361 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_EventScript_StoneShop_BuyStone_Text_0
# 362 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 363 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem VAR_0x8005
# 364 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 365 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP
# 366 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_EventScript_StoneShop_BuyStone_Text_1
# 367 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_3F_EventScript_StoneShop_No::
# 372 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_EventScript_StoneShop_No_Text_0
# 374 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_3F_EventScript_StoneShop_ComeBackWithBottleCap::
# 379 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_EventScript_StoneShop_ComeBackWithBottleCap_Text_0
# 382 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_0:
# 331 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Fire Stone$"

RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_1:
# 332 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Water Stone$"

RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_2:
# 333 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Thunder Stone$"

RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_3:
# 334 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Leaf Stone$"

RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_4:
# 335 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Moon Stone$"

RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_5:
# 336 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Sun Stone$"

RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_6:
# 337 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Shiny Stone$"

RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_7:
# 338 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Dusk Stone$"

RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_8:
# 339 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Dawn Stone$"

RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_9:
# 340 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Ice Stone$"

RustboroCity_DevonCorp_3F_EventScript_StoneShop_Text_10:
# 341 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Cancel$"

RustboroCity_DevonCorp_3F_EventScript_StoneShop_BuyStone_Text_0:
# 361 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Excellent choice.$"

RustboroCity_DevonCorp_3F_EventScript_StoneShop_BuyStone_Text_1:
# 366 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Come back anytime.$"

RustboroCity_DevonCorp_3F_EventScript_StoneShop_No_Text_0:
# 372 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please come back if you want\n"
	.string "to buy anything.$"

RustboroCity_DevonCorp_3F_EventScript_StoneShop_ComeBackWithBottleCap_Text_0:
# 379 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Estimed customer, it looks like you\n"
	.string "don't have a Bottle Cap.\p"
	.string "Please come back when you do.$"

ExpensiveShop::
# 386 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Esteemed customer, you do not have the\n"
	.string "status for this shop.$"

StoneShop::
# 391 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Estimed customer, you've been granted\n"
	.string "full access by Mr.Stone to his shop of\l"
	.string "rare Stones. You may exchange a Bottle\l"
	.string "Cap for a Stone of your choosing.\p"
	.string "Which one would you be interested in?$"

RustboroCity_DevonCorp_3F_Text_ReceivedTheStone::
# 399 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} received the Stone.$"

RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetterHard::
# 403 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: You delivered my Letter?\n"
	.string "Thank you kindly!\p"
	.string "As a reward for your efforts, I will give\n"
	.string "you permanent access to our Stone\l"
	.string "shop. My personal assistant here\l"
	.string "will take care of things.\p"
	.string "No need to thank me, I've always had\n"
	.string "a heart of gold!$"
