# 1 "data/maps/MossdeepCity_Gym/scripts.pory"

# 2 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_MapScripts::
# 3 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_OnTransition
# 4 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_Gym_OnLoad
# 5 "data/maps/MossdeepCity_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/MossdeepCity_Gym/scripts.pory"

# 7 "data/maps/MossdeepCity_Gym/scripts.pory"
@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below
# 8 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnTransition:
# 9 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower since it can collide with moving statues
# 10 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 11 "data/maps/MossdeepCity_Gym/scripts.pory"

# 12 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below checks are leftover from RS. FLAG_MOSSDEEP_GYM_SWITCH_X is never set
# 13 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnLoad:
# 14 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_SetSwitch1Metatiles
# 15 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 16 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 17 "data/maps/MossdeepCity_Gym/scripts.pory"

# 18 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch2::
# 19 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_SetSwitch2Metatiles
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 21 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 22 "data/maps/MossdeepCity_Gym/scripts.pory"

# 23 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch3::
# 24 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_SetSwitch3Metatiles
# 25 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 26 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"

# 28 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch4::
# 29 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_SetSwitch4Metatiles
# 30 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"

# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below set metatile scripts are leftover from RS and are functionally unused
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch1Metatiles::
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"

# 39 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch2Metatiles::
# 40 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"

# 45 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch3Metatiles::
# 46 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 47 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"

# 51 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch4Metatiles::
# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 55 "data/maps/MossdeepCity_Gym/scripts.pory"

# 56 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza::
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymLeadersPostVictory
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaIntro, MSGBOX_DEFAULT
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_TATE, MossdeepCity_Gym_Text_TateDefeat, TRAINER_LIZA, MossdeepCity_Gym_Text_LizaDefeat
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaDefeated
# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"

# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
	addvar VAR_IV_PERFECTER_COUNTER, 5
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"

# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_EXPANDING_FORCE
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_TRICK_ROOM
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"

# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_EXPANDING_FORCE
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_TRICK_ROOM
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"

# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"

# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below switch scripts are leftover from RS and are functionally unused
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1::
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"

# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"

# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1::
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"

# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2::
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"

# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2::
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"

# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3::
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"

# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3::
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"

# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4::
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"

# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4::
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"

# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"

# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"

# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"

# 221 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"

# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"

# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"

# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"

# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"

# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"

# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"

# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"

# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"

# 266 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"

# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"

# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"

# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymLeadersPostVictory::
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymLeadersPostVictory, MSGBOX_DEFAULT
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 288 "data/maps/MossdeepCity_Gym/scripts.pory"

# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"

# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"

# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"

# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"

# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"

# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"

# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"

# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"

# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"

# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"

# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Alakazam::
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
	playmoncry SPECIES_ALAKAZAM, CRY_MODE_NORMAL
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_Alakazam, MSGBOX_DEFAULT
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmoncry
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"

# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kangaskhan::
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
	playmoncry SPECIES_KANGASKHAN, CRY_MODE_NORMAL
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_Kangaskhan, MSGBOX_DEFAULT
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmoncry
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"

# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The Gym Leaders here use\n"
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "PSYCHIC-type Pokémon.\p"
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "FIGHTING- or POISON-type Pokémon,\l"
# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon. Go for it!$"
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"

# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great TRAINER!$"
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"

# 415 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 418 "data/maps/MossdeepCity_Gym/scripts.pory"

# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"

# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"

# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"

# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"

# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "then our Gym Leaders are them!\p"
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "However, you may be even more talented\n"
# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "than them…$"
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"

# 439 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "BALL telekinetically!\p"
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wrooooooooaaaar!\n"
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Sometimes, I'm out of sync…$"
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"

# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My Pokémon battling skills are out\n"
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of sync, too!$"
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"

# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "psychically. But this dust bunny…\p"
# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Whoooooooooooooooh!\n"
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No, I'm not cheating!\n"
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I didn't blow on it! Honestly!$"
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"

# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "on yourself.\p"
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's not that you're weak--I'm just\n"
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "too strong!$"
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"

# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"

# 467 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "losing. I just need to train harder.\p"
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positive thinking--that's my strong\n"
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "point!$"
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"

# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see your future…\p"
# 476 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you can beat me, I will tell you\n"
# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your future!$"
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"

# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"

# 482 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "battle with our Gym Leaders…\p"
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The result…\n"
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You won't hear it from me!$"
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"

# 488 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 491 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 493 "data/maps/MossdeepCity_Gym/scripts.pory"

# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 496 "data/maps/MossdeepCity_Gym/scripts.pory"

# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 500 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 503 "data/maps/MossdeepCity_Gym/scripts.pory"

# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"

# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 510 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 511 "data/maps/MossdeepCity_Gym/scripts.pory"

# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 516 "data/maps/MossdeepCity_Gym/scripts.pory"

# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 520 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the PSYCHIC type can be.$"
# 521 "data/maps/MossdeepCity_Gym/scripts.pory"

# 522 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 523 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 524 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 525 "data/maps/MossdeepCity_Gym/scripts.pory"

# 526 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 529 "data/maps/MossdeepCity_Gym/scripts.pory"

# 530 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 531 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 532 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 533 "data/maps/MossdeepCity_Gym/scripts.pory"

# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 535 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 536 "data/maps/MossdeepCity_Gym/scripts.pory"

# 537 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 539 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 540 "data/maps/MossdeepCity_Gym/scripts.pory"

# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 542 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 544 "data/maps/MossdeepCity_Gym/scripts.pory"

# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 546 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 547 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of youth!$"
# 548 "data/maps/MossdeepCity_Gym/scripts.pory"

# 549 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 551 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your youthful energy.$"
# 552 "data/maps/MossdeepCity_Gym/scripts.pory"

# 553 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 554 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 555 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 556 "data/maps/MossdeepCity_Gym/scripts.pory"

# 557 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 558 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 559 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 560 "data/maps/MossdeepCity_Gym/scripts.pory"

# 561 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 562 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 563 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the PSYCHIC type!\p"
# 564 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 565 "data/maps/MossdeepCity_Gym/scripts.pory"

# 566 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 567 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 568 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon hard-battling power!$"
# 569 "data/maps/MossdeepCity_Gym/scripts.pory"

# 570 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 571 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 572 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 573 "data/maps/MossdeepCity_Gym/scripts.pory"

# 574 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible Pokémon power next.$"
# 577 "data/maps/MossdeepCity_Gym/scripts.pory"

# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Hehehe… Were you surprised?\n"
# 580 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Fufufu… Were you surprised?\p"
# 581 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: That there are two Gym Leaders?\n"
# 582 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: That there are two Gym Leaders?\p"
# 583 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We're twins!\n"
# 584 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: We're twins!\p"
# 585 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We don't need to talk because…\n"
# 586 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: We can each determine what…\p"
# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: The other is thinking…\n"
# 588 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: All in our minds!\p"
# 589 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: This combination of ours…\n"
# 590 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Can you beat it?$"
# 591 "data/maps/MossdeepCity_Gym/scripts.pory"

# 592 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: What?! Our combination…\n"
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Was shattered!\p"
# 595 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: It can't be helped. You've won…\n"
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: So, in recognition, take this.$"
# 597 "data/maps/MossdeepCity_Gym/scripts.pory"

# 598 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateDefeat:
# 599 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: What?! Our combination\n"
# 600 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Was shattered!$"
# 601 "data/maps/MossdeepCity_Gym/scripts.pory"

# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_LizaDefeat:
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: It can't be helped, you've won!\n"
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "So, in recognition, take this.$"
# 605 "data/maps/MossdeepCity_Gym/scripts.pory"

# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the Mind Badge\n"
# 608 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from Tate and Liza.$"
# 609 "data/maps/MossdeepCity_Gym/scripts.pory"

# 610 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 611 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: The Mind Badge lets you use the\n"
# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "HM move Dive outside of battle.\p"
# 613 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You should also take this, too.$"
# 614 "data/maps/MossdeepCity_Gym/scripts.pory"

# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: That TM55 contains…\n"
# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Expanding Force!\p"
# 618 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: It does way more damage...\n"
# 619 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: In Psychic Terrain!\p"
# 620 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: And that TM106 contains...\n"
# 621 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Trick Room!\p"
# 622 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: They're both great TMs…\n"
# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: For Psychic Pokémon!\p"
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 625 "data/maps/MossdeepCity_Gym/scripts.pory"

# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered Gym Leaders Tate & Liza\n"
# 628 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 629 "data/maps/MossdeepCity_Gym/scripts.pory"

# 630 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 631 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Looks like the bond between you\n"
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your Pokémon is far stronger than\l"
# 633 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond that we share as twins.\p"
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: You will become even stronger!\n"
# 635 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We've battled you, so we know.$"
# 636 "data/maps/MossdeepCity_Gym/scripts.pory"

# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 638 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Hehehe… Were you surprised?\p"
# 639 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: That there are two Gym Leaders?\p"
# 640 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Oops, you have only one…\n"
# 641 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Pokémon that can battle.\p"
# 642 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We can't battle that way!\p"
# 643 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: If you want to challenge us,\n"
# 644 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bring some more Pokémon.$"
# 645 "data/maps/MossdeepCity_Gym/scripts.pory"

# 646 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymLeadersPostVictory:
# 647 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Looks like we need...\n"
# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: some more practice?\l"
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Yea... that is what I was thinking..$"
# 650 "data/maps/MossdeepCity_Gym/scripts.pory"

# 651 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 652 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Mossdeep City Pokémon Gym$"
# 653 "data/maps/MossdeepCity_Gym/scripts.pory"

# 654 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 655 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Mossdeep City Pokémon Gym\p"
# 656 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza and Tate's Certified Trainers:\n"
# 657 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 658 "data/maps/MossdeepCity_Gym/scripts.pory"

# 659 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 660 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Pokémon…\n"
# 661 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Pokémon…\p"
# 662 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: By changing the party's mix…\n"
# 663 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: The battle style changes.\p"
# 664 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: But me…\n"
# 665 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: But me…\p"
# 666 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: I'll always be with Tate!\n"
# 667 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: I'll always be with Tate!\p"
# 668 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Our combination…\n"
# 669 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: We'll show you again and again!$"
# 670 "data/maps/MossdeepCity_Gym/scripts.pory"

# 671 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 672 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You and your Pokémon…\n"
# 673 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: It's as if you were siblings!$"
# 674 "data/maps/MossdeepCity_Gym/scripts.pory"

# 675 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 676 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You can knock us down,\n"
# 677 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 678 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Because the two of us,\n"
# 679 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 680 "data/maps/MossdeepCity_Gym/scripts.pory"

# 681 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 682 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You're back again…\n"
# 683 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: You're back again…\p"
# 684 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: To give us a rematch.\n"
# 685 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: To give us a rematch.\p"
# 686 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: But…\n"
# 687 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: For our match…\p"
# 688 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You brought just one Pokémon!\n"
# 689 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: You brought just one Pokémon!\p"
# 690 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We need you to bring at least…\n"
# 691 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Two Pokémon when you come back.$"
# 692 "data/maps/MossdeepCity_Gym/scripts.pory"

# 693 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_Alakazam:
# 694 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Alakazam: Pishhhhhh bmmmmmm!$"
# 695 "data/maps/MossdeepCity_Gym/scripts.pory"

# 696 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_Kangaskhan:
# 697 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Kangaskhan: Berrrrr rerhhhh!$"
