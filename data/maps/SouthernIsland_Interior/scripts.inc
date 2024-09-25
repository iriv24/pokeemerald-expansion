# 1 "data/maps/SouthernIsland_Interior/scripts.pory"

# 2 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_MapScripts::
# 3 "data/maps/SouthernIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SouthernIsland_Interior_OnResume
# 4 "data/maps/SouthernIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Interior_OnTransition
# 5 "data/maps/SouthernIsland_Interior/scripts.pory"
	.byte 0
# 6 "data/maps/SouthernIsland_Interior/scripts.pory"

# 7 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnResume:
# 8 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SouthernIsland_Interior_EventScript_TryRemoveLatis
# 9 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 10 "data/maps/SouthernIsland_Interior/scripts.pory"

# 11 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_TryRemoveLatis::
# 12 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 16 "data/maps/SouthernIsland_Interior/scripts.pory"

# 17 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnTransition:
# 18 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_unset FLAG_DEFEATED_LATIOS, SouthernIsland_Interior_EventScript_ShowLatios
# 19 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_unset FLAG_DEFEATED_LATIAS, SouthernIsland_Interior_EventScript_ShowLatias
# 20 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 21 "data/maps/SouthernIsland_Interior/scripts.pory"

# 22 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_ShowLatios::
# 23 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_HIDE_LATIOS
# 24 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 25 "data/maps/SouthernIsland_Interior/scripts.pory"

# 26 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_ShowLatias::
# 27 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_HIDE_LATIAS
# 28 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 29 "data/maps/SouthernIsland_Interior/scripts.pory"

# 30 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Latios::
# 31 "data/maps/SouthernIsland_Interior/scripts.pory"
	lock
# 32 "data/maps/SouthernIsland_Interior/scripts.pory"
	faceplayer
# 33 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitse
# 34 "data/maps/SouthernIsland_Interior/scripts.pory"
	playmoncry SPECIES_LATIOS, CRY_MODE_ENCOUNTER
# 35 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 40
# 36 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmoncry
# 37 "data/maps/SouthernIsland_Interior/scripts.pory"
	seteventmon SPECIES_LATIOS, 70, ITEM_SOUL_DEW
# 38 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 39 "data/maps/SouthernIsland_Interior/scripts.pory"
	special BattleSetup_StartLatiBattle
# 40 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitstate
# 41 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 42 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 43 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SouthernIsland_Interior_EventScript_DefeatedLatios
# 44 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SouthernIsland_Interior_EventScript_RanFromLatios
# 45 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SouthernIsland_Interior_EventScript_RanFromLatios
# 46 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_LATIOS
# 47 "data/maps/SouthernIsland_Interior/scripts.pory"
	release
# 48 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 49 "data/maps/SouthernIsland_Interior/scripts.pory"

# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_DefeatedLatios::
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_LATIOS
# 52 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 53 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 54 "data/maps/SouthernIsland_Interior/scripts.pory"

# 55 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_RanFromLatios::
# 56 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIOS
# 57 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 58 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 59 "data/maps/SouthernIsland_Interior/scripts.pory"

# 60 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Latias::
# 61 "data/maps/SouthernIsland_Interior/scripts.pory"
	lock
# 62 "data/maps/SouthernIsland_Interior/scripts.pory"
	faceplayer
# 63 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitse
# 64 "data/maps/SouthernIsland_Interior/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_ENCOUNTER
# 65 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 40
# 66 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmoncry
# 67 "data/maps/SouthernIsland_Interior/scripts.pory"
	seteventmon SPECIES_LATIAS, 70, ITEM_SOUL_DEW
# 68 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 69 "data/maps/SouthernIsland_Interior/scripts.pory"
	special BattleSetup_StartLatiBattle
# 70 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitstate
# 71 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 72 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 73 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SouthernIsland_Interior_EventScript_DefeatedLatios
# 74 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SouthernIsland_Interior_EventScript_RanFromLatios
# 75 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SouthernIsland_Interior_EventScript_RanFromLatios
# 76 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_LATIAS
# 77 "data/maps/SouthernIsland_Interior/scripts.pory"
	release
# 78 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 79 "data/maps/SouthernIsland_Interior/scripts.pory"

# 80 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_DefeatedLatias::
# 81 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_LATIAS
# 82 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 83 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 84 "data/maps/SouthernIsland_Interior/scripts.pory"

# 85 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Sign::
# 86 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_Text_Sign, MSGBOX_DEFAULT
# 87 "data/maps/SouthernIsland_Interior/scripts.pory"
	releaseall
# 88 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
