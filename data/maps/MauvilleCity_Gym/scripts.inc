# 1 "data/maps/MauvilleCity_Gym/scripts.pory"

# 2 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_MapScripts::
# 3 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
# 4 "data/maps/MauvilleCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/MauvilleCity_Gym/scripts.pory"

# 6 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad:
# 7 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_DeactivatePuzzle
# 8 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_MAUVILLE_GYM_STATE
# 9 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 0, MauvilleCity_Gym_EventScript_UpdateBarriers
# 10 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Switch1Pressed
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Switch2Pressed
# 12 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Switch3Pressed
# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Switch4Pressed
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"

# 16 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers::
# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"

# 20 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers::
# 21 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 22 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 23 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 24 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 26 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 27 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"

# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed::
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"

# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed::
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 60 "data/maps/MauvilleCity_Gym/scripts.pory"

# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed::
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"

# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed::
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"

# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle::
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"

# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_VOLT_SWITCH, MauvilleCity_Gym_EventScript_GiveVoltSwitch2
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"

# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_IV_PERFECTER_COUNTER, 5
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_BEAT_WATTSON, 1
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 7, Common_EventScript_ReadyPetalburgGymForBattle
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveVoltSwitch
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"

# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveVoltSwitch2::
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_VOLT_SWITCH
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_LUXRITE
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_MANECTITE
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_AMPHAROSITE
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainVoltSwitch, MSGBOX_DEFAULT
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_VOLT_SWITCH
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"

# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveVoltSwitch::
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_VOLT_SWITCH
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_LUXRITE
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_MANECTITE
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_AMPHAROSITE
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainVoltSwitch, MSGBOX_DEFAULT
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_VOLT_SWITCH
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"

# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"

# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"

# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"

# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"

# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"

# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"

# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"

# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"

# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"

# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"

# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"

# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"

# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"

# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"

# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"

# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"

# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"

# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"

# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"

# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"

# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"

# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Luxray::
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitse
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
	playmoncry SPECIES_LUXRAY, CRY_MODE_NORMAL
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_Luxray, MSGBOX_DEFAULT
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmoncry
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"

# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson, the LEADER of MAUVILLE\n"
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type Pokémon.\p"
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon, he'll zap them! Bzzt!\p"
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"

# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"

# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"

# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"

# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon and rock, it's all about heart,\n"
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"

# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under Wattson!\n"
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"

# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"

# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson, our GYM LEADER, has been\n"
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"

# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This GYM's got puzzles!\n"
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"

# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeat:
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"

# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson says he likes setting up\n"
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"

# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my Pokémon's moves,\n"
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"

# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"

# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that MAUVILLE was founded\n"
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by Wattson.\p"
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a TRAINER long before we\n"
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became TRAINERS.\l"
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"

# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"

# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"

# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mauville GYM's Wattson has a shiny\n"
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"

# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've given up on my plans to convert\n"
# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the city, I have.\p"
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And so, I put my time into making\n"
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "door traps in my Gym.\p"
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Now, what are you doing here?\p"
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's that? You say you've gotten\n"
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "past all my rigged doors?\p"
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now, that is amusing!\p"
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Then, I, Wattson, the Leader of\n"
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mauville Gym, shall electrify you!$"
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"

# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this Badge!$"
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"

# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the Dynamo Badge\n"
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from Wattson.$"
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"

# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the Dynamo Badge, Pokémon can\n"
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use Rock Smash out of battle.\p"
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"

# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainVoltSwitch:
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM92 there contains Volt Switch.\n"
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It will let you zap an opponent and\l"
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "then switch out immediately, pretty\l"
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "handy!\p"
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I also included some of my\n"
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "favorite Mega Stones, hopefully once\l"
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you get the Mega Ring they'll be of\l"
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "some use to you.\p"
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"

# 392 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered Gym Leader Wattson\n"
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"

# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I swell with optimism, seeing a promising\n"
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "young trainer like you!$"
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"

# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 403 "data/maps/MauvilleCity_Gym/scripts.pory"

# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mauville City Pokémon Gym$"
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"

# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mauville City Pokémon Gym\p"
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson'S Certified Trainers:\n"
# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"

# 412 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson: Ah-ha! Here at last!\n"
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my Pokémon!\p"
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"

# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 423 "data/maps/MauvilleCity_Gym/scripts.pory"

# 424 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 425 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson: We'll have to recharge our\n"
# 426 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 427 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 428 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 429 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 430 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 431 "data/maps/MauvilleCity_Gym/scripts.pory"

# 432 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 433 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson: Ah-ha! Here at last!\n"
# 434 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 435 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my Pokémon!\p"
# 436 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 437 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 438 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one Pokémon with you!\p"
# 439 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 440 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon, all right?$"
# 441 "data/maps/MauvilleCity_Gym/scripts.pory"

# 442 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_Luxray:
# 443 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Luxray: Raaaah ah raah!$"
