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
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"

# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_EXPANDING_FORCE
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_TRICK_ROOM
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"

# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_EXPANDING_FORCE
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_TRICK_ROOM
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"

# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"

# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below switch scripts are leftover from RS and are functionally unused
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1::
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"

# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"

# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1::
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"

# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2::
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"

# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2::
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"

# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3::
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"

# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3::
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"

# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4::
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"

# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4::
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"

# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"

# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"

# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"

# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"

# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"

# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"

# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"

# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"

# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"

# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"

# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"

# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"

# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"

# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"

# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"

# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymLeadersPostVictory::
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymLeadersPostVictory, MSGBOX_DEFAULT
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"

# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"

# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"

# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"

# 306 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"

# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"

# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"

# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"

# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"

# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"

# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"

# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Alakazam::
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
	playmoncry SPECIES_ALAKAZAM, CRY_MODE_NORMAL
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_Alakazam, MSGBOX_DEFAULT
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmoncry
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"

# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kangaskhan::
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
	playmoncry SPECIES_KANGASKHAN, CRY_MODE_NORMAL
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_Kangaskhan, MSGBOX_DEFAULT
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmoncry
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"

# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The Gym Leaders here use\n"
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "PSYCHIC-type Pokémon.\p"
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "FIGHTING- or POISON-type Pokémon,\l"
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon. Go for it!$"
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"

# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great TRAINER!$"
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"

# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"

# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"

# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"

# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"

# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"

# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "then our Gym Leaders are them!\p"
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "However, you may be even more talented\n"
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "than them…$"
# 437 "data/maps/MossdeepCity_Gym/scripts.pory"

# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "BALL telekinetically!\p"
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wrooooooooaaaar!\n"
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Sometimes, I'm out of sync…$"
# 444 "data/maps/MossdeepCity_Gym/scripts.pory"

# 445 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My Pokémon battling skills are out\n"
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of sync, too!$"
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"

# 449 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "psychically. But this dust bunny…\p"
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Whoooooooooooooooh!\n"
# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No, I'm not cheating!\n"
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I didn't blow on it! Honestly!$"
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"

# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "on yourself.\p"
# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's not that you're weak--I'm just\n"
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "too strong!$"
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"

# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"

# 466 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 467 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "losing. I just need to train harder.\p"
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positive thinking--that's my strong\n"
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "point!$"
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"

# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see your future…\p"
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you can beat me, I will tell you\n"
# 476 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your future!$"
# 477 "data/maps/MossdeepCity_Gym/scripts.pory"

# 478 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"

# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "battle with our Gym Leaders…\p"
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The result…\n"
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You won't hear it from me!$"
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"

# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 491 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 492 "data/maps/MossdeepCity_Gym/scripts.pory"

# 493 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"

# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 500 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"

# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 506 "data/maps/MossdeepCity_Gym/scripts.pory"

# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 510 "data/maps/MossdeepCity_Gym/scripts.pory"

# 511 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"

# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the PSYCHIC type can be.$"
# 520 "data/maps/MossdeepCity_Gym/scripts.pory"

# 521 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 522 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 523 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 524 "data/maps/MossdeepCity_Gym/scripts.pory"

# 525 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 526 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"

# 529 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 531 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 532 "data/maps/MossdeepCity_Gym/scripts.pory"

# 533 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 535 "data/maps/MossdeepCity_Gym/scripts.pory"

# 536 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 537 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 539 "data/maps/MossdeepCity_Gym/scripts.pory"

# 540 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
# 542 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"

# 544 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 546 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of youth!$"
# 547 "data/maps/MossdeepCity_Gym/scripts.pory"

# 548 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 549 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your youthful energy.$"
# 551 "data/maps/MossdeepCity_Gym/scripts.pory"

# 552 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 553 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 554 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 555 "data/maps/MossdeepCity_Gym/scripts.pory"

# 556 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 557 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 558 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 559 "data/maps/MossdeepCity_Gym/scripts.pory"

# 560 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 561 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 562 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the PSYCHIC type!\p"
# 563 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 564 "data/maps/MossdeepCity_Gym/scripts.pory"

# 565 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 566 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 567 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon hard-battling power!$"
# 568 "data/maps/MossdeepCity_Gym/scripts.pory"

# 569 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 571 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 572 "data/maps/MossdeepCity_Gym/scripts.pory"

# 573 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 574 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible Pokémon power next.$"
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"

# 577 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Hehehe… Were you surprised?\n"
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Fufufu… Were you surprised?\p"
# 580 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: That there are two Gym Leaders?\n"
# 581 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: That there are two Gym Leaders?\p"
# 582 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We're twins!\n"
# 583 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: We're twins!\p"
# 584 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We don't need to talk because…\n"
# 585 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: We can each determine what…\p"
# 586 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: The other is thinking…\n"
# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: All in our minds!\p"
# 588 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: This combination of ours…\n"
# 589 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Can you beat it?$"
# 590 "data/maps/MossdeepCity_Gym/scripts.pory"

# 591 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 592 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: What?! Our combination…\n"
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Was shattered!\p"
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: It can't be helped. You've won…\n"
# 595 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: So, in recognition, take this.$"
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"

# 597 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateDefeat:
# 598 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: What?! Our combination\n"
# 599 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Was shattered!$"
# 600 "data/maps/MossdeepCity_Gym/scripts.pory"

# 601 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_LizaDefeat:
# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: It can't be helped, you've won!\n"
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "So, in recognition, take this.$"
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"

# 605 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the Mind Badge\n"
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from Tate and Liza.$"
# 608 "data/maps/MossdeepCity_Gym/scripts.pory"

# 609 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 610 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: The Mind Badge lets you use the\n"
# 611 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "HM move Dive outside of battle.\p"
# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You should also take this, too.$"
# 613 "data/maps/MossdeepCity_Gym/scripts.pory"

# 614 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: That TM55 contains…\n"
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Expanding Force!\p"
# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: It does way more damage...\n"
# 618 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: In Psychic Terrain!\p"
# 619 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: And that TM106 contains...\n"
# 620 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Trick Room!\p"
# 621 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: They're both great TMs…\n"
# 622 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: For Psychic Pokémon!\p"
# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"

# 625 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered Gym Leaders Tate & Liza\n"
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 628 "data/maps/MossdeepCity_Gym/scripts.pory"

# 629 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 630 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Looks like the bond between you\n"
# 631 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your Pokémon is far stronger than\l"
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond that we share as twins.\p"
# 633 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: You will become even stronger!\n"
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We've battled you, so we know.$"
# 635 "data/maps/MossdeepCity_Gym/scripts.pory"

# 636 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Hehehe… Were you surprised?\p"
# 638 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: That there are two Gym Leaders?\p"
# 639 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Oops, you have only one…\n"
# 640 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Pokémon that can battle.\p"
# 641 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We can't battle that way!\p"
# 642 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: If you want to challenge us,\n"
# 643 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bring some more Pokémon.$"
# 644 "data/maps/MossdeepCity_Gym/scripts.pory"

# 645 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymLeadersPostVictory:
# 646 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Looks like we need...\n"
# 647 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: some more practice?\l"
# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Yea... that is what I was thinking..$"
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"

# 650 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 651 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"
# 652 "data/maps/MossdeepCity_Gym/scripts.pory"

# 653 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 654 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
# 655 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA AND TATE'S CERTIFIED TRAINERS:\n"
# 656 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 657 "data/maps/MossdeepCity_Gym/scripts.pory"

# 658 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 659 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Pokémon…\n"
# 660 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Pokémon…\p"
# 661 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: By changing the party's mix…\n"
# 662 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: The battle style changes.\p"
# 663 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: But me…\n"
# 664 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: But me…\p"
# 665 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: I'll always be with Tate!\n"
# 666 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: I'll always be with Tate!\p"
# 667 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Our combination…\n"
# 668 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: We'll show you again and again!$"
# 669 "data/maps/MossdeepCity_Gym/scripts.pory"

# 670 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 671 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You and your Pokémon…\n"
# 672 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: It's as if you were siblings!$"
# 673 "data/maps/MossdeepCity_Gym/scripts.pory"

# 674 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 675 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You can knock us down,\n"
# 676 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 677 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Because the two of us,\n"
# 678 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 679 "data/maps/MossdeepCity_Gym/scripts.pory"

# 680 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 681 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You're back again…\n"
# 682 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: You're back again…\p"
# 683 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: To give us a rematch.\n"
# 684 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: To give us a rematch.\p"
# 685 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: But…\n"
# 686 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: For our match…\p"
# 687 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You brought just one Pokémon!\n"
# 688 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: You brought just one Pokémon!\p"
# 689 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We need you to bring at least…\n"
# 690 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Two Pokémon when you come back.$"
# 691 "data/maps/MossdeepCity_Gym/scripts.pory"

# 692 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_Alakazam:
# 693 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Alakazam: Pishhhhhh bmmmmmm!$"
# 694 "data/maps/MossdeepCity_Gym/scripts.pory"

# 695 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_Kangaskhan:
# 696 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Kangaskhan: Berrrrr rerhhhh!$"
