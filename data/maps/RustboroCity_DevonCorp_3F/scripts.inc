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
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 73 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_Unused:
# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 80 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
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
	walk_right
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_down
# 104 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 105 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 106 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 109 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 111 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 116 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 117 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
# 118 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 119 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 120 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 123 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 127 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
# 129 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 130 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
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
	walk_right
# 140 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 141 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 142 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
# 145 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 146 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_right
# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 151 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 152 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 153 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_GiveExpShare
# 157 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
# 158 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 160 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 161 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 162 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 163 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 164 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_GiveExpShare::
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
# 166 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	@giveitem ITEM_EXP_SHARE
# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_WATER_STONE, 10
# 168 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_FIRE_STONE, 10
# 169 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_THUNDER_STONE, 10
# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_SUN_STONE, 10
# 171 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 172 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 175 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 177 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 178 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 179 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor::
# 180 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 183 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 184 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 185 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 187 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Employee::
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 189 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls
# 191 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
# 192 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 193 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 194 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 195 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls::
# 196 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 198 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 199 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 200 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 201 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
# 202 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 203 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 204 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor:
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'm MR. STONE, the PRESIDENT of\n"
# 206 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the DEVON CORPORATION.\p"
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'd just got word about you!\p"
# 208 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You saved our staff not just once,\n"
# 209 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "but twice!\p"
# 210 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I have a favor to ask of an amazing\n"
# 211 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "person like you.\p"
# 212 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I understand that you're delivering\n"
# 213 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a package to SLATEPORT's SHIPYARD.\p"
# 214 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Well, on the way, could you stop off in\n"
# 215 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEWFORD TOWN?\p"
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I was hoping that you'd deliver a\n"
# 217 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "LETTER to STEVEN in DEWFORD.$"
# 218 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 219 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis:
# 220 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Now, you should know that\n"
# 221 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I am a great PRESIDENT.\p"
# 222 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "So, I'd never be so cheap as to ask\n"
# 223 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a favor for nothing in return.\p"
# 224 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "That's why I want you to have this!$"
# 225 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 226 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ReceivedPokenav:
# 227 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} received a POKéNAV.$"
# 228 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 229 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp:
# 230 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: That device…\p"
# 231 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a POKéMON NAVIGATOR, or POKéNAV\n"
# 232 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for short.\p"
# 233 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's an indispensable tool for any\n"
# 234 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "TRAINER on an adventure.\p"
# 235 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It has a map of the HOENN region.\p"
# 236 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You can check the locations of\n"
# 237 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEWFORD and SLATEPORT easily!\p"
# 238 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "By the way, I've heard that sinister\n"
# 239 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "criminals--MAGMA and AQUA, I believe--\l"
# 240 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "have been making trouble far and wide.\p"
# 241 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I think it would be best if you rested\n"
# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "up before you go on your way.$"
# 243 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 244 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare:
# 245 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Well, then, {PLAYER}{KUN},\n"
# 246 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "go with caution and care!$"
# 247 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 248 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_CountingOnYou:
# 249 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: I'm counting on you!$"
# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 251 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter:
# 252 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: You delivered my LETTER?\n"
# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Thank you kindly!\p"
# 254 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is my way of thanking you.\n"
# 255 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "These should help you.$"
# 256 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 257 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ExplainExpShare:
# 258 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: A POKéMON holding that\n"
# 259 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "EXP. SHARE will be given some of the\l"
# 260 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "EXP Points from battle.\p"
# 261 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It will get EXP Points even if it didn't\n"
# 262 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "actually battle.\p"
# 263 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I would say EXP. SHARE is quite useful\n"
# 264 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for raising weak POKéMON.$"
# 265 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends:
# 266 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Since my youth, I've immersed\n"
# 267 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "myself in work.\p"
# 268 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Consequently, I'm not familiar with\n"
# 269 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "trends and that sort of thing.\p"
# 270 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "But do young people all want to be\n"
# 271 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "TRAINERS in the POKéMON LEAGUE?$"
# 272 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 273 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere:
# 274 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is the DEVON CORPORATION's\n"
# 275 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "third floor.\p"
# 276 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our PRESIDENT's OFFICE is on\n"
# 277 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "this floor.\p"
# 278 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Anyway, I can't tell you how much I'm\n"
# 279 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "grateful for what you've done.\p"
# 280 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Um… By the way, that parcel\n"
# 281 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you got back for us…\p"
# 282 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could I get you to deliver that to\n"
# 283 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the SHIPYARD in SLATEPORT?\p"
# 284 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It would be awful if those robbers\n"
# 285 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "tried to take it again.\p"
# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Uh… Hehehe, so, uh, could I count\n"
# 287 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "on you to do that for me?\p"
# 288 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Oh, that's right.\n"
# 289 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could you wait here a second?$"
# 290 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 291 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe:
# 292 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our PRESIDENT would like to have\n"
# 293 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a word with you.\p"
# 294 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please come with me.$"
# 295 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_PleaseGoAhead:
# 297 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please, go ahead.$"
# 298 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 299 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard:
# 300 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "If you visit the SHIPYARD in SLATEPORT,\n"
# 301 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you should go see CAPT. STERN.$"
# 302 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 303 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular:
# 304 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEVON's new products, the REPEAT BALL\n"
# 305 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "and TIMER BALL, have become hugely\l"
# 306 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "popular among TRAINERS.$"
# 307 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 308 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RareRocksDisplay:
# 309 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 310 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "stones assembled by the PRESIDENT.$"
