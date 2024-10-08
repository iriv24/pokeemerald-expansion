# 1 "data/maps/Route130/scripts.pory"

# 2 "data/maps/Route130/scripts.pory"
.set LOCALID_HO_OH, 5
# 3 "data/maps/Route130/scripts.pory"

# 4 "data/maps/Route130/scripts.pory"
Route130_MapScripts::
# 5 "data/maps/Route130/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route130_OnTransition
# 6 "data/maps/Route130/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route130_OnResume
# 7 "data/maps/Route130/scripts.pory"
	.byte 0
# 8 "data/maps/Route130/scripts.pory"

# 9 "data/maps/Route130/scripts.pory"
Route130_OnTransition:
# 10 "data/maps/Route130/scripts.pory"
	call_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, Route130_EventScript_CheckSetAbnormalWeather
# 11 "data/maps/Route130/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, Route130_EventScript_SetMirageIslandLayout
# 12 "data/maps/Route130/scripts.pory"
@ Mirage Island isn't currently visible, hide any objects on the island. Only the first flag is actually associated with anything.
# 13 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_HIDE_MIRAGE_ISLAND_BERRY_TREE
# 14 "data/maps/Route130/scripts.pory"
	setflag FLAG_HIDE_HO_OH
# 15 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_12
# 16 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_13
# 17 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_14
# 18 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_15
# 19 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_16
# 20 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_17
# 21 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_18
# 22 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_19
# 23 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1A
# 24 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1B
# 25 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1C
# 26 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1D
# 27 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1E
# 28 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1F
# 29 "data/maps/Route130/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE130
# 30 "data/maps/Route130/scripts.pory"
	end
# 31 "data/maps/Route130/scripts.pory"

# 32 "data/maps/Route130/scripts.pory"
Route130_EventScript_SetMirageIslandLayout::
# 33 "data/maps/Route130/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE130_MIRAGE_ISLAND
# 34 "data/maps/Route130/scripts.pory"
	call_if_set FLAG_CAUGHT_HO_OH, Route130_EventScript_HideHo_Oh
# 35 "data/maps/Route130/scripts.pory"
	call_if_unset FLAG_CAUGHT_HO_OH, Route130_EventScript_TryShowHo_Oh
# 36 "data/maps/Route130/scripts.pory"
	end
# 37 "data/maps/Route130/scripts.pory"

# 38 "data/maps/Route130/scripts.pory"
Route130_EventScript_HideHo_Oh::
# 39 "data/maps/Route130/scripts.pory"
	setflag FLAG_HIDE_HO_OH
# 40 "data/maps/Route130/scripts.pory"
	return
# 41 "data/maps/Route130/scripts.pory"

# 42 "data/maps/Route130/scripts.pory"
Route130_EventScript_TryShowHo_Oh::
# 43 "data/maps/Route130/scripts.pory"
	goto_if_set FLAG_DEFEATED_HO_OH, Common_EventScript_NopReturn
# 44 "data/maps/Route130/scripts.pory"
	clearflag FLAG_HIDE_HO_OH
# 45 "data/maps/Route130/scripts.pory"
	return
# 46 "data/maps/Route130/scripts.pory"

# 47 "data/maps/Route130/scripts.pory"
Route130_OnResume:
# 48 "data/maps/Route130/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route130_EventScript_TryRemoveHo_Oh
# 49 "data/maps/Route130/scripts.pory"
	end
# 50 "data/maps/Route130/scripts.pory"

# 51 "data/maps/Route130/scripts.pory"
Route130_EventScript_TryRemoveHo_Oh::
# 52 "data/maps/Route130/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 53 "data/maps/Route130/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 54 "data/maps/Route130/scripts.pory"
	removeobject LOCALID_HO_OH
# 55 "data/maps/Route130/scripts.pory"
	return
# 56 "data/maps/Route130/scripts.pory"

# 57 "data/maps/Route130/scripts.pory"
Route130_EventScript_Ho_Oh::
# 58 "data/maps/Route130/scripts.pory"
	lock
# 59 "data/maps/Route130/scripts.pory"
	faceplayer
# 60 "data/maps/Route130/scripts.pory"
	waitse
# 61 "data/maps/Route130/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 62 "data/maps/Route130/scripts.pory"
	waitmoncry
# 63 "data/maps/Route130/scripts.pory"
	delay 20
# 64 "data/maps/Route130/scripts.pory"
	seteventmon SPECIES_HO_OH, 70
# 65 "data/maps/Route130/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 66 "data/maps/Route130/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 67 "data/maps/Route130/scripts.pory"
	waitstate
# 68 "data/maps/Route130/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 69 "data/maps/Route130/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 70 "data/maps/Route130/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route130_EventScript_DefeatedHo_Oh
# 71 "data/maps/Route130/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route130_EventScript_RanFromHo_Oh
# 72 "data/maps/Route130/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route130_EventScript_RanFromHo_Oh
# 73 "data/maps/Route130/scripts.pory"
	setflag FLAG_CAUGHT_HO_OH
# 74 "data/maps/Route130/scripts.pory"
	release
# 75 "data/maps/Route130/scripts.pory"
	end
# 76 "data/maps/Route130/scripts.pory"

# 77 "data/maps/Route130/scripts.pory"
Route130_EventScript_DefeatedHo_Oh::
# 78 "data/maps/Route130/scripts.pory"
	setflag FLAG_DEFEATED_HO_OH
# 79 "data/maps/Route130/scripts.pory"
	setvar VAR_0x8004, SPECIES_HO_OH
# 80 "data/maps/Route130/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 81 "data/maps/Route130/scripts.pory"
	end
# 82 "data/maps/Route130/scripts.pory"

# 83 "data/maps/Route130/scripts.pory"
Route130_EventScript_RanFromHo_Oh::
# 84 "data/maps/Route130/scripts.pory"
	setvar VAR_0x8004, SPECIES_HO_OH
# 85 "data/maps/Route130/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 86 "data/maps/Route130/scripts.pory"
	end
# 87 "data/maps/Route130/scripts.pory"

# 88 "data/maps/Route130/scripts.pory"
Route130_EventScript_CheckSetAbnormalWeather::
# 89 "data/maps/Route130/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 90 "data/maps/Route130/scripts.pory"
	return
# 91 "data/maps/Route130/scripts.pory"

# 92 "data/maps/Route130/scripts.pory"
Route130_EventScript_Rodney::
# 93 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_RODNEY, Route130_Text_RodneyIntro, Route130_Text_RodneyDefeat
# 94 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route130/scripts.pory"
	end
# 96 "data/maps/Route130/scripts.pory"

# 97 "data/maps/Route130/scripts.pory"
Route130_EventScript_Katie::
# 98 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_KATIE, Route130_Text_KatieIntro, Route130_Text_KatieDefeat
# 99 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_KatiePostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route130/scripts.pory"
	end
# 101 "data/maps/Route130/scripts.pory"

# 102 "data/maps/Route130/scripts.pory"
Route130_EventScript_Santiago::
# 103 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_SANTIAGO, Route130_Text_SantiagoIntro, Route130_Text_SantiagoDefeat
# 104 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_SantiagoPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route130/scripts.pory"
	end
