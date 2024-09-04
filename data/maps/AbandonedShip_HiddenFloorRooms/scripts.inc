# 1 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 2 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_MapScripts::
# 3 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_HiddenFloorRooms_OnResume
# 4 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AbandonedShip_HiddenFloorRooms_OnTransition
# 5 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AbandonedShip_HiddenFloorRooms_OnFrame
# 6 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.byte 0
# 7 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 8 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_OnResume:
# 9 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AbandonedShip_HiddenFloorRooms_EventScript_TryRemoveTapuFini
# 10 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 11 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 12 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_TryRemoveTapuFini::
# 13 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 15 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 17 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 18 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_OnTransition:
# 19 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_unset FLAG_DEFEATED_TAPU_FINI, AbandonedShip_HiddenFloorRooms_EventScript_ShowTapuFini
# 20 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 21 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 22 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_ShowTapuFini::
# 23 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	clearflag FLAG_HIDE_TAPU_FINI
# 24 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 25 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 26 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_TapuFini::
# 27 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	lock
# 28 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	faceplayer
# 29 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitse
# 30 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	playmoncry SPECIES_TAPU_FINI, CRY_MODE_ENCOUNTER
# 31 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 40
# 32 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitmoncry
# 33 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setwildbattle SPECIES_TAPU_FINI, 70
# 34 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 35 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	special StartRegiBattle
# 36 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitstate
# 37 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 38 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 39 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AbandonedShip_HiddenFloorRooms_EventScript_DefeatedTapuFini
# 40 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AbandonedShip_HiddenFloorRooms_EventScript_RanFromTapuFini
# 41 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AbandonedShip_HiddenFloorRooms_EventScript_RanFromTapuFini
# 42 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setflag FLAG_DEFEATED_TAPU_FINI
# 43 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	release
# 44 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 45 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 46 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DefeatedTapuFini::
# 47 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setflag FLAG_DEFEATED_TAPU_FINI
# 48 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 49 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 50 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 51 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_RanFromTapuFini::
# 52 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_0x8004, SPECIES_TAPU_FINI
# 53 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 54 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 55 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 56 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_OnFrame:
# 57 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle
# 58 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.2byte 0
# 59 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 60 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ After the below calculation, VAR_TEMP_4 is the room number of the door the player entered
# 61 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Bottom row, left column   (Rm 1)
# 62 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Bottom row, middle column (Rm 2)
# 63 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Bottom row, right column	(Rm 3)
# 64 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Upper row,  left column   (Rm 4)
# 65 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Upper row,  middle column (Rm 5)
# 66 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Upper row,  right column  (Rm 6)
# 67 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle::
# 68 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_TEMP_1, 1
# 69 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 70 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_TEMP_4, 1
# 71 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_TEMP_2, 21, AbandonedShip_HiddenFloorRooms_EventScript_InMiddleRoomColumn
# 72 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_TEMP_2, 36, AbandonedShip_HiddenFloorRooms_EventScript_InRightRoomColumn
# 73 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_TEMP_3, 2, AbandonedShip_HiddenFloorRooms_EventScript_InUpperRoomRow
# 74 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	switch VAR_TEMP_4
# 75 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 1, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1
# 76 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 2, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm2
# 77 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 3, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3
# 78 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 4, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4
# 79 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 5, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5
# 80 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 6, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm6
# 81 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 82 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 83 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InMiddleRoomColumn::
# 84 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 1
# 85 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 86 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 87 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InRightRoomColumn::
# 88 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 2
# 89 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 90 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 91 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InUpperRoomRow::
# 92 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 3
# 93 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 94 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 95 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1::
# 96 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 97 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 10, 10, 0
# 98 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom4Key
# 99 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorRooms_EventScript_Rm4KeySparkle
# 100 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 101 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 102 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 103 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 104 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm2::
# 105 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 106 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 107 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3::
# 108 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom1Key
# 109 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_HiddenFloorRooms_EventScript_Rm3NoSparkle
# 110 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 111 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorRooms_EventScript_Rm1KeySparkle
# 112 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 113 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 114 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 115 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 116 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm3NoSparkle::
# 117 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 118 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 119 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4::
# 120 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 121 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 8, 5, 0
# 122 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 11, 3, 0
# 123 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom6Key
# 124 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorRooms_EventScript_Rm6KeySparkle
# 125 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 126 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 127 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 128 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 129 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5::
# 130 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 131 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 16, 3, 0
# 132 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 25, 2, 0
# 133 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 24, 6, 0
# 134 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom2Key
# 135 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorRooms_EventScript_Rm2KeySparkle
# 136 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 137 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 138 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 139 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 140 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm6::
# 141 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 142 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 143 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm1KeySparkle::
# 144 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 42, 10, 0
# 145 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 146 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 147 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm2KeySparkle::
# 148 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 20, 5, 0
# 149 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 150 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 151 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm4KeySparkle::
# 152 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 1, 12, 0
# 153 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 154 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 155 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm6KeySparkle::
# 156 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 1, 2, 0
# 157 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 158 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 159 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Trash::
# 160 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	lockall
# 161 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash, MSGBOX_DEFAULT
# 162 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	releaseall
# 163 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 164 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 165 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash:
# 166 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "It's bright and shiny!\n"
# 167 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "But it's just trash…$"
