# 1 "data/maps/MossdeepCity_Gym/scripts.pory"

# 2 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_MapScripts::
# 3 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_Gym_OnLoad
# 4 "data/maps/MossdeepCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/MossdeepCity_Gym/scripts.pory"

# 6 "data/maps/MossdeepCity_Gym/scripts.pory"
@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below
# 7 "data/maps/MossdeepCity_Gym/scripts.pory"

# 8 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below checks are leftover from RS. FLAG_MOSSDEEP_GYM_SWITCH_X is never set
# 9 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnLoad:
# 10 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_SetSwitch1Metatiles
# 11 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 12 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 13 "data/maps/MossdeepCity_Gym/scripts.pory"

# 14 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch2::
# 15 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_SetSwitch2Metatiles
# 16 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 17 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 18 "data/maps/MossdeepCity_Gym/scripts.pory"

# 19 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch3::
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_SetSwitch3Metatiles
# 21 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 22 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 23 "data/maps/MossdeepCity_Gym/scripts.pory"

# 24 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch4::
# 25 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_SetSwitch4Metatiles
# 26 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"

# 28 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below set metatile scripts are leftover from RS and are functionally unused
# 29 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch1Metatiles::
# 30 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"

# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch2Metatiles::
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 39 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 40 "data/maps/MossdeepCity_Gym/scripts.pory"

# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch3Metatiles::
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 45 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 46 "data/maps/MossdeepCity_Gym/scripts.pory"

# 47 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch4Metatiles::
# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 51 "data/maps/MossdeepCity_Gym/scripts.pory"

# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza::
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 55 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_Gym_EventScript_TateAndLizaRematch
# 56 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, MossdeepCity_Gym_EventScript_GiveCalmMind2
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"

# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"

# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"

# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"

# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"

# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below switch scripts are leftover from RS and are functionally unused
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1::
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"

# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"

# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1::
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"

# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2::
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"

# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2::
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"

# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3::
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"

# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3::
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"

# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4::
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"

# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4::
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"

# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"

# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"

# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"

# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"

# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"

# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"

# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"

# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"

# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"

# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"

# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"

# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"

# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"

# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"

# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"

# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"

# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"

# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"

# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"

# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"

# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"

# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"

# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"

# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"

# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"

# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The GYM LEADERS here use\n"
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "PSYCHIC-type POKéMON.\p"
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "FIGHTING- or POISON-type POKéMON,\l"
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON. Go for it!$"
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"

# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great TRAINER!$"
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"

# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"

# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"

# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"

# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"

# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"

# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "then our GYM LEADERS are them!\p"
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "However, you may be even more talented\n"
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "than them…$"
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"

# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "BALL telekinetically!\p"
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wrooooooooaaaar!\n"
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Sometimes, I'm out of sync…$"
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"

# 417 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My POKéMON battling skills are out\n"
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of sync, too!$"
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"

# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "psychically. But this dust bunny…\p"
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Whoooooooooooooooh!\n"
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No, I'm not cheating!\n"
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I didn't blow on it! Honestly!$"
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"

# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "on yourself.\p"
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's not that you're weak--I'm just\n"
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "too strong!$"
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"

# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 437 "data/maps/MossdeepCity_Gym/scripts.pory"

# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "losing. I just need to train harder.\p"
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positive thinking--that's my strong\n"
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "point!$"
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"

# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see your future…\p"
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you can beat me, I will tell you\n"
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your future!$"
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"

# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"

# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "battle with our GYM LEADERS…\p"
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The result…\n"
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You won't hear it from me!$"
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"

# 459 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"

# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 467 "data/maps/MossdeepCity_Gym/scripts.pory"

# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"

# 475 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 476 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"

# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"

# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"

# 488 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 491 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the PSYCHIC type can be.$"
# 492 "data/maps/MossdeepCity_Gym/scripts.pory"

# 493 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 496 "data/maps/MossdeepCity_Gym/scripts.pory"

# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 500 "data/maps/MossdeepCity_Gym/scripts.pory"

# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"

# 505 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"

# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 510 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 511 "data/maps/MossdeepCity_Gym/scripts.pory"

# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"

# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of youth!$"
# 519 "data/maps/MossdeepCity_Gym/scripts.pory"

# 520 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 521 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 522 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your youthful energy.$"
# 523 "data/maps/MossdeepCity_Gym/scripts.pory"

# 524 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 525 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 526 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 527 "data/maps/MossdeepCity_Gym/scripts.pory"

# 528 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 529 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 531 "data/maps/MossdeepCity_Gym/scripts.pory"

# 532 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 533 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the PSYCHIC type!\p"
# 535 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 536 "data/maps/MossdeepCity_Gym/scripts.pory"

# 537 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 539 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON hard-battling power!$"
# 540 "data/maps/MossdeepCity_Gym/scripts.pory"

# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 542 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 544 "data/maps/MossdeepCity_Gym/scripts.pory"

# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 546 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 547 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible POKéMON power next.$"
# 548 "data/maps/MossdeepCity_Gym/scripts.pory"

# 549 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 551 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Fufufu… Were you surprised?\p"
# 552 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That there are two GYM LEADERS?\n"
# 553 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 554 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We're twins!\n"
# 555 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We're twins!\p"
# 556 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We don't need to talk because…\n"
# 557 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We can each determine what…\p"
# 558 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The other is thinking…\n"
# 559 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: All in our minds!\p"
# 560 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: This combination of ours…\n"
# 561 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Can you beat it?$"
# 562 "data/maps/MossdeepCity_Gym/scripts.pory"

# 563 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 564 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: What?! Our combination…\n"
# 565 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Was shattered!\p"
# 566 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It can't be helped. You've won…\n"
# 567 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: So, in recognition, take this.$"
# 568 "data/maps/MossdeepCity_Gym/scripts.pory"

# 569 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\n"
# 571 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from TATE and LIZA.$"
# 572 "data/maps/MossdeepCity_Gym/scripts.pory"

# 573 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 574 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The MIND BADGE enhances the\n"
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "SP. ATK and SP. DEF of POKéMON.\p"
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It also lets you use the HM move\n"
# 577 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "DIVE outside of battle.\p"
# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You should also take this, too.$"
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"

# 580 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 581 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That TM04 contains…\n"
# 582 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: CALM MIND!\p"
# 583 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It raises SP. ATK and…\n"
# 584 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It raises SP. DEF!\p"
# 585 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It's a move that's perfect…\n"
# 586 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For PSYCHIC POKéMON!\p"
# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 588 "data/maps/MossdeepCity_Gym/scripts.pory"

# 589 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 590 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered GYM LEADERS TATE & LIZA\n"
# 591 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 592 "data/maps/MossdeepCity_Gym/scripts.pory"

# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Looks like the bond between you\n"
# 595 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your POKéMON is far stronger than\l"
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond that we share as twins.\p"
# 597 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You will become even stronger!\n"
# 598 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We've battled you, so we know.$"
# 599 "data/maps/MossdeepCity_Gym/scripts.pory"

# 600 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 601 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Oops, you have only one…\n"
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON that can battle.\p"
# 605 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We can't battle that way!\p"
# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: If you want to challenge us,\n"
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bring some more POKéMON.$"
# 608 "data/maps/MossdeepCity_Gym/scripts.pory"

# 609 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 610 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"
# 611 "data/maps/MossdeepCity_Gym/scripts.pory"

# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 613 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
# 614 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA AND TATE'S CERTIFIED TRAINERS:\n"
# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"

# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 618 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: POKéMON…\n"
# 619 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON…\p"
# 620 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: By changing the party's mix…\n"
# 621 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: The battle style changes.\p"
# 622 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But me…\n"
# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: But me…\p"
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: I'll always be with LIZA!\n"
# 625 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: I'll always be with TATE!\p"
# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Our combination…\n"
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We'll show you again and again!$"
# 628 "data/maps/MossdeepCity_Gym/scripts.pory"

# 629 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 630 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You and your POKéMON…\n"
# 631 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It's as if you were siblings!$"
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"

# 633 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You can knock us down,\n"
# 635 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 636 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Because the two of us,\n"
# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 638 "data/maps/MossdeepCity_Gym/scripts.pory"

# 639 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 640 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You're back again…\n"
# 641 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You're back again…\p"
# 642 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: To give us a rematch.\n"
# 643 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: To give us a rematch.\p"
# 644 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But…\n"
# 645 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For our match…\p"
# 646 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You brought just one POKéMON!\n"
# 647 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You brought just one POKéMON!\p"
# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We need you to bring at least…\n"
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Two POKéMON when you come back.$"
