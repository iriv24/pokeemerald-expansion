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
	playfanfare MUS_LEVEL_UP
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"

# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_EXPANDING_FORCE
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_TRICK_ROOM
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"

# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_EXPANDING_FORCE
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_TRICK_ROOM
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"

# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"

# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below switch scripts are leftover from RS and are functionally unused
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1::
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"

# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"

# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1::
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"

# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2::
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"

# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2::
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"

# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3::
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"

# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3::
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"

# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4::
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"

# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4::
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"

# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"

# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 222 "data/maps/MossdeepCity_Gym/scripts.pory"

# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"

# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"

# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"

# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"

# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"

# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"

# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"

# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"

# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"

# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"

# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"

# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"

# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"

# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymLeadersPostVictory::
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymLeadersPostVictory, MSGBOX_DEFAULT
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"

# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"

# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"

# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"

# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"

# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"

# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"

# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"

# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"

# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"

# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"

# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Alakazam::
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
	playmoncry SPECIES_ALAKAZAM, CRY_MODE_NORMAL
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_Alakazam, MSGBOX_DEFAULT
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmoncry
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"

# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kangaskhan::
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
	playmoncry SPECIES_KANGASKHAN, CRY_MODE_NORMAL
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_Kangaskhan, MSGBOX_DEFAULT
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmoncry
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"

# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The Gym Leaders here use\n"
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "PSYCHIC-type Pokémon.\p"
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "FIGHTING- or POISON-type Pokémon,\l"
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon. Go for it!$"
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"

# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great TRAINER!$"
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"

# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"

# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"

# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"

# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"

# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"

# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "then our Gym Leaders are them!\p"
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "However, you may be even more talented\n"
# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "than them…$"
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"

# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "BALL telekinetically!\p"
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wrooooooooaaaar!\n"
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Sometimes, I'm out of sync…$"
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"

# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My Pokémon battling skills are out\n"
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of sync, too!$"
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"

# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "psychically. But this dust bunny…\p"
# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Whoooooooooooooooh!\n"
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No, I'm not cheating!\n"
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I didn't blow on it! Honestly!$"
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"

# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
# 467 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "on yourself.\p"
# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's not that you're weak--I'm just\n"
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "too strong!$"
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"

# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"

# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
# 476 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "losing. I just need to train harder.\p"
# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positive thinking--that's my strong\n"
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "point!$"
# 479 "data/maps/MossdeepCity_Gym/scripts.pory"

# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see your future…\p"
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you can beat me, I will tell you\n"
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your future!$"
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"

# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"

# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
# 491 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "battle with our Gym Leaders…\p"
# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The result…\n"
# 493 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You won't hear it from me!$"
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"

# 495 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 500 "data/maps/MossdeepCity_Gym/scripts.pory"

# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 503 "data/maps/MossdeepCity_Gym/scripts.pory"

# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 510 "data/maps/MossdeepCity_Gym/scripts.pory"

# 511 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 514 "data/maps/MossdeepCity_Gym/scripts.pory"

# 515 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"

# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 520 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 521 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 522 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 523 "data/maps/MossdeepCity_Gym/scripts.pory"

# 524 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 525 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 526 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the PSYCHIC type can be.$"
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"

# 529 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 531 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 532 "data/maps/MossdeepCity_Gym/scripts.pory"

# 533 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 535 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 536 "data/maps/MossdeepCity_Gym/scripts.pory"

# 537 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 539 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 540 "data/maps/MossdeepCity_Gym/scripts.pory"

# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 542 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"

# 544 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 546 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 547 "data/maps/MossdeepCity_Gym/scripts.pory"

# 548 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 549 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 551 "data/maps/MossdeepCity_Gym/scripts.pory"

# 552 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 553 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 554 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of youth!$"
# 555 "data/maps/MossdeepCity_Gym/scripts.pory"

# 556 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 557 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 558 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your youthful energy.$"
# 559 "data/maps/MossdeepCity_Gym/scripts.pory"

# 560 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 561 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 562 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 563 "data/maps/MossdeepCity_Gym/scripts.pory"

# 564 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 565 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 566 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 567 "data/maps/MossdeepCity_Gym/scripts.pory"

# 568 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 569 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the PSYCHIC type!\p"
# 571 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 572 "data/maps/MossdeepCity_Gym/scripts.pory"

# 573 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 574 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon hard-battling power!$"
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"

# 577 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 580 "data/maps/MossdeepCity_Gym/scripts.pory"

# 581 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 582 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 583 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible Pokémon power next.$"
# 584 "data/maps/MossdeepCity_Gym/scripts.pory"

# 585 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 586 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Hehehe… Were you surprised?\n"
# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Fufufu… Were you surprised?\p"
# 588 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: That there are two Gym Leaders?\n"
# 589 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: That there are two Gym Leaders?\p"
# 590 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We're twins!\n"
# 591 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: We're twins!\p"
# 592 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We don't need to talk because…\n"
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: We can each determine what…\p"
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: The other is thinking…\n"
# 595 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: All in our minds!\p"
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: This combination of ours…\n"
# 597 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Can you beat it?$"
# 598 "data/maps/MossdeepCity_Gym/scripts.pory"

# 599 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 600 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: What?! Our combination…\n"
# 601 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Was shattered!\p"
# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: It can't be helped. You've won…\n"
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: So, in recognition, take this.$"
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"

# 605 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateDefeat:
# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: What?! Our combination\n"
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Was shattered!$"
# 608 "data/maps/MossdeepCity_Gym/scripts.pory"

# 609 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_LizaDefeat:
# 610 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: It can't be helped, you've won!\n"
# 611 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "So, in recognition, take this.$"
# 612 "data/maps/MossdeepCity_Gym/scripts.pory"

# 613 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 614 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the Mind Badge\n"
# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from Tate and Liza.$"
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"

# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 618 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: The Mind Badge lets you use the\n"
# 619 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "HM move Dive outside of battle.\p"
# 620 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You should also take this, too.$"
# 621 "data/maps/MossdeepCity_Gym/scripts.pory"

# 622 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: That TM55 contains…\n"
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Expanding Force!\p"
# 625 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: It does way more damage...\n"
# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: In Psychic Terrain!\p"
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: And that TM106 contains...\n"
# 628 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Trick Room!\p"
# 629 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: They're both great TMs…\n"
# 630 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: For Psychic Pokémon!\p"
# 631 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"

# 633 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered Gym Leaders Tate & Liza\n"
# 635 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 636 "data/maps/MossdeepCity_Gym/scripts.pory"

# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 638 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Looks like the bond between you\n"
# 639 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your Pokémon is far stronger than\l"
# 640 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond that we share as twins.\p"
# 641 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: You will become even stronger!\n"
# 642 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We've battled you, so we know.$"
# 643 "data/maps/MossdeepCity_Gym/scripts.pory"

# 644 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 645 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Hehehe… Were you surprised?\p"
# 646 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: That there are two Gym Leaders?\p"
# 647 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Oops, you have only one…\n"
# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Pokémon that can battle.\p"
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We can't battle that way!\p"
# 650 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: If you want to challenge us,\n"
# 651 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bring some more Pokémon.$"
# 652 "data/maps/MossdeepCity_Gym/scripts.pory"

# 653 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymLeadersPostVictory:
# 654 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Looks like we need...\n"
# 655 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: some more practice?\l"
# 656 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Yea... that is what I was thinking..$"
# 657 "data/maps/MossdeepCity_Gym/scripts.pory"

# 658 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 659 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Mossdeep City Pokémon Gym$"
# 660 "data/maps/MossdeepCity_Gym/scripts.pory"

# 661 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 662 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Mossdeep City Pokémon Gym\p"
# 663 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza and Tate's Certified Trainers:\n"
# 664 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 665 "data/maps/MossdeepCity_Gym/scripts.pory"

# 666 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 667 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Pokémon…\n"
# 668 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Pokémon…\p"
# 669 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: By changing the party's mix…\n"
# 670 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: The battle style changes.\p"
# 671 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: But me…\n"
# 672 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: But me…\p"
# 673 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: I'll always be with Tate!\n"
# 674 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: I'll always be with Tate!\p"
# 675 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Our combination…\n"
# 676 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: We'll show you again and again!$"
# 677 "data/maps/MossdeepCity_Gym/scripts.pory"

# 678 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 679 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You and your Pokémon…\n"
# 680 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: It's as if you were siblings!$"
# 681 "data/maps/MossdeepCity_Gym/scripts.pory"

# 682 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 683 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You can knock us down,\n"
# 684 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 685 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Because the two of us,\n"
# 686 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 687 "data/maps/MossdeepCity_Gym/scripts.pory"

# 688 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 689 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You're back again…\n"
# 690 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: You're back again…\p"
# 691 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: To give us a rematch.\n"
# 692 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: To give us a rematch.\p"
# 693 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: But…\n"
# 694 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: For our match…\p"
# 695 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You brought just one Pokémon!\n"
# 696 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: You brought just one Pokémon!\p"
# 697 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We need you to bring at least…\n"
# 698 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Two Pokémon when you come back.$"
# 699 "data/maps/MossdeepCity_Gym/scripts.pory"

# 700 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_Alakazam:
# 701 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Alakazam: Pishhhhhh bmmmmmm!$"
# 702 "data/maps/MossdeepCity_Gym/scripts.pory"

# 703 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_Kangaskhan:
# 704 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Kangaskhan: Berrrrr rerhhhh!$"
