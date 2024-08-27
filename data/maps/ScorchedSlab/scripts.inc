# 1 "data/maps/ScorchedSlab/scripts.pory"

# 2 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_MapScripts::
# 3 "data/maps/ScorchedSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ScorchedSlab_OnResume
# 4 "data/maps/ScorchedSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedSlab_OnTransition
# 5 "data/maps/ScorchedSlab/scripts.pory"
	.byte 0
# 6 "data/maps/ScorchedSlab/scripts.pory"

# 7 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_OnResume:
# 8 "data/maps/ScorchedSlab/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ScorchedSlab_EventScript_TryRemoveAzelf
# 9 "data/maps/ScorchedSlab/scripts.pory"
	end
# 10 "data/maps/ScorchedSlab/scripts.pory"

# 11 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_EventScript_TryRemoveAzelf::
# 12 "data/maps/ScorchedSlab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/ScorchedSlab/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/ScorchedSlab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/ScorchedSlab/scripts.pory"
	return
# 16 "data/maps/ScorchedSlab/scripts.pory"

# 17 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_OnTransition:
# 18 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_LANDMARK_SCORCHED_SLAB
# 19 "data/maps/ScorchedSlab/scripts.pory"
	call_if_unset FLAG_DEFEATED_AZELF, ScorchedSlab_EventScript_ShowAzelf
# 20 "data/maps/ScorchedSlab/scripts.pory"
	end
# 21 "data/maps/ScorchedSlab/scripts.pory"

# 22 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_EventScript_ShowAzelf::
# 23 "data/maps/ScorchedSlab/scripts.pory"
	clearflag FLAG_HIDE_AZELF
# 24 "data/maps/ScorchedSlab/scripts.pory"
	return
# 25 "data/maps/ScorchedSlab/scripts.pory"

# 26 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_EventScript_Azelf::
# 27 "data/maps/ScorchedSlab/scripts.pory"
	lock
# 28 "data/maps/ScorchedSlab/scripts.pory"
	faceplayer
# 29 "data/maps/ScorchedSlab/scripts.pory"
	waitse
# 30 "data/maps/ScorchedSlab/scripts.pory"
	playmoncry SPECIES_AZELF, CRY_MODE_ENCOUNTER
# 31 "data/maps/ScorchedSlab/scripts.pory"
	delay 40
# 32 "data/maps/ScorchedSlab/scripts.pory"
	waitmoncry
# 33 "data/maps/ScorchedSlab/scripts.pory"
	setwildbattle SPECIES_AZELF, 70
# 34 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 35 "data/maps/ScorchedSlab/scripts.pory"
	special StartRegiBattle
# 36 "data/maps/ScorchedSlab/scripts.pory"
	waitstate
# 37 "data/maps/ScorchedSlab/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 38 "data/maps/ScorchedSlab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 39 "data/maps/ScorchedSlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ScorchedSlab_EventScript_DefeatedAzelf
# 40 "data/maps/ScorchedSlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ScorchedSlab_EventScript_RanFromAzelf
# 41 "data/maps/ScorchedSlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ScorchedSlab_EventScript_RanFromAzelf
# 42 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_DEFEATED_AZELF
# 43 "data/maps/ScorchedSlab/scripts.pory"
	release
# 44 "data/maps/ScorchedSlab/scripts.pory"
	end
# 45 "data/maps/ScorchedSlab/scripts.pory"

# 46 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_EventScript_DefeatedAzelf::
# 47 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_DEFEATED_AZELF
# 48 "data/maps/ScorchedSlab/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 49 "data/maps/ScorchedSlab/scripts.pory"
	end
# 50 "data/maps/ScorchedSlab/scripts.pory"

# 51 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_EventScript_RanFromAzelf::
# 52 "data/maps/ScorchedSlab/scripts.pory"
	setvar VAR_0x8004, SPECIES_AZELF
# 53 "data/maps/ScorchedSlab/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 54 "data/maps/ScorchedSlab/scripts.pory"
	end
