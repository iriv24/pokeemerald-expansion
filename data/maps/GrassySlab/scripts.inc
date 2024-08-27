# 1 "data/maps/GrassySlab/scripts.pory"

# 2 "data/maps/GrassySlab/scripts.pory"
GrassySlab_MapScripts::
# 3 "data/maps/GrassySlab/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GrassySlab_OnResume
# 4 "data/maps/GrassySlab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GrassySlab_OnTransition
# 5 "data/maps/GrassySlab/scripts.pory"
	.byte 0
# 6 "data/maps/GrassySlab/scripts.pory"

# 7 "data/maps/GrassySlab/scripts.pory"
GrassySlab_OnResume:
# 8 "data/maps/GrassySlab/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, GrassySlab_EventScript_TryRemoveRegidrago
# 9 "data/maps/GrassySlab/scripts.pory"
	end
# 10 "data/maps/GrassySlab/scripts.pory"

# 11 "data/maps/GrassySlab/scripts.pory"
GrassySlab_EventScript_TryRemoveRegidrago::
# 12 "data/maps/GrassySlab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/GrassySlab/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/GrassySlab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/GrassySlab/scripts.pory"
	return
# 16 "data/maps/GrassySlab/scripts.pory"

# 17 "data/maps/GrassySlab/scripts.pory"
GrassySlab_OnTransition:
# 18 "data/maps/GrassySlab/scripts.pory"
	setflag FLAG_LANDMARK_GRASSY_SLAB
# 19 "data/maps/GrassySlab/scripts.pory"
	call_if_unset FLAG_DEFEATED_REGIDRAGO, GrassySlab_EventScript_ShowRegidrago
# 20 "data/maps/GrassySlab/scripts.pory"
	end
# 21 "data/maps/GrassySlab/scripts.pory"

# 22 "data/maps/GrassySlab/scripts.pory"
GrassySlab_EventScript_ShowRegidrago::
# 23 "data/maps/GrassySlab/scripts.pory"
	clearflag FLAG_HIDE_REGIDRAGO
# 24 "data/maps/GrassySlab/scripts.pory"
	return
# 25 "data/maps/GrassySlab/scripts.pory"

# 26 "data/maps/GrassySlab/scripts.pory"
GrassySlab_EventScript_Regidrago::
# 27 "data/maps/GrassySlab/scripts.pory"
	lock
# 28 "data/maps/GrassySlab/scripts.pory"
	faceplayer
# 29 "data/maps/GrassySlab/scripts.pory"
	waitse
# 30 "data/maps/GrassySlab/scripts.pory"
	playmoncry SPECIES_REGIDRAGO, CRY_MODE_ENCOUNTER
# 31 "data/maps/GrassySlab/scripts.pory"
	delay 40
# 32 "data/maps/GrassySlab/scripts.pory"
	waitmoncry
# 33 "data/maps/GrassySlab/scripts.pory"
	setwildbattle SPECIES_REGIDRAGO, 70
# 34 "data/maps/GrassySlab/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 35 "data/maps/GrassySlab/scripts.pory"
	special StartRegiBattle
# 36 "data/maps/GrassySlab/scripts.pory"
	waitstate
# 37 "data/maps/GrassySlab/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 38 "data/maps/GrassySlab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 39 "data/maps/GrassySlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, GrassySlab_EventScript_DefeatedRegidrago
# 40 "data/maps/GrassySlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, GrassySlab_EventScript_RanFromRegidrago
# 41 "data/maps/GrassySlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, GrassySlab_EventScript_RanFromRegidrago
# 42 "data/maps/GrassySlab/scripts.pory"
	setflag FLAG_DEFEATED_REGIDRAGO
# 43 "data/maps/GrassySlab/scripts.pory"
	release
# 44 "data/maps/GrassySlab/scripts.pory"
	end
# 45 "data/maps/GrassySlab/scripts.pory"

# 46 "data/maps/GrassySlab/scripts.pory"
GrassySlab_EventScript_DefeatedRegidrago::
# 47 "data/maps/GrassySlab/scripts.pory"
	setflag FLAG_DEFEATED_REGIDRAGO
# 48 "data/maps/GrassySlab/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 49 "data/maps/GrassySlab/scripts.pory"
	end
# 50 "data/maps/GrassySlab/scripts.pory"

# 51 "data/maps/GrassySlab/scripts.pory"
GrassySlab_EventScript_RanFromRegidrago::
# 52 "data/maps/GrassySlab/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGIDRAGO
# 53 "data/maps/GrassySlab/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 54 "data/maps/GrassySlab/scripts.pory"
	end
