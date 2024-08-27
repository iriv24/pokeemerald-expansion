# 1 "data/maps/FloatingSlab/scripts.pory"

# 2 "data/maps/FloatingSlab/scripts.pory"
FloatingSlab_MapScripts::
# 3 "data/maps/FloatingSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FloatingSlab_OnResume
# 4 "data/maps/FloatingSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FloatingSlab_OnTransition
# 5 "data/maps/FloatingSlab/scripts.pory"
	.byte 0
# 6 "data/maps/FloatingSlab/scripts.pory"

# 7 "data/maps/FloatingSlab/scripts.pory"
FloatingSlab_OnResume:
# 8 "data/maps/FloatingSlab/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, FloatingSlab_EventScript_TryRemoveMesprit
# 9 "data/maps/FloatingSlab/scripts.pory"
	end
# 10 "data/maps/FloatingSlab/scripts.pory"

# 11 "data/maps/FloatingSlab/scripts.pory"
FloatingSlab_EventScript_TryRemoveMesprit::
# 12 "data/maps/FloatingSlab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/FloatingSlab/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/FloatingSlab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/FloatingSlab/scripts.pory"
	return
# 16 "data/maps/FloatingSlab/scripts.pory"

# 17 "data/maps/FloatingSlab/scripts.pory"
FloatingSlab_OnTransition:
# 18 "data/maps/FloatingSlab/scripts.pory"
	setflag FLAG_LANDMARK_FLOATING_SLAB
# 19 "data/maps/FloatingSlab/scripts.pory"
	call_if_unset FLAG_DEFEATED_MESPRIT, FloatingSlab_EventScript_ShowMesprit
# 20 "data/maps/FloatingSlab/scripts.pory"
	end
# 21 "data/maps/FloatingSlab/scripts.pory"

# 22 "data/maps/FloatingSlab/scripts.pory"
FloatingSlab_EventScript_ShowMesprit::
# 23 "data/maps/FloatingSlab/scripts.pory"
	clearflag FLAG_HIDE_MESPRIT
# 24 "data/maps/FloatingSlab/scripts.pory"
	return
# 25 "data/maps/FloatingSlab/scripts.pory"

# 26 "data/maps/FloatingSlab/scripts.pory"
FloatingSlab_EventScript_Mesprit::
# 27 "data/maps/FloatingSlab/scripts.pory"
	lock
# 28 "data/maps/FloatingSlab/scripts.pory"
	faceplayer
# 29 "data/maps/FloatingSlab/scripts.pory"
	waitse
# 30 "data/maps/FloatingSlab/scripts.pory"
	playmoncry SPECIES_MESPRIT, CRY_MODE_ENCOUNTER
# 31 "data/maps/FloatingSlab/scripts.pory"
	delay 40
# 32 "data/maps/FloatingSlab/scripts.pory"
	waitmoncry
# 33 "data/maps/FloatingSlab/scripts.pory"
	setwildbattle SPECIES_MESPRIT, 70
# 34 "data/maps/FloatingSlab/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 35 "data/maps/FloatingSlab/scripts.pory"
	special StartRegiBattle
# 36 "data/maps/FloatingSlab/scripts.pory"
	waitstate
# 37 "data/maps/FloatingSlab/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 38 "data/maps/FloatingSlab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 39 "data/maps/FloatingSlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, FloatingSlab_EventScript_DefeatedMesprit
# 40 "data/maps/FloatingSlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, FloatingSlab_EventScript_RanFromMesprit
# 41 "data/maps/FloatingSlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, FloatingSlab_EventScript_RanFromMesprit
# 42 "data/maps/FloatingSlab/scripts.pory"
	setflag FLAG_DEFEATED_MESPRIT
# 43 "data/maps/FloatingSlab/scripts.pory"
	release
# 44 "data/maps/FloatingSlab/scripts.pory"
	end
# 45 "data/maps/FloatingSlab/scripts.pory"

# 46 "data/maps/FloatingSlab/scripts.pory"
FloatingSlab_EventScript_DefeatedMesprit::
# 47 "data/maps/FloatingSlab/scripts.pory"
	setflag FLAG_DEFEATED_MESPRIT
# 48 "data/maps/FloatingSlab/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 49 "data/maps/FloatingSlab/scripts.pory"
	end
# 50 "data/maps/FloatingSlab/scripts.pory"

# 51 "data/maps/FloatingSlab/scripts.pory"
FloatingSlab_EventScript_RanFromMesprit::
# 52 "data/maps/FloatingSlab/scripts.pory"
	setvar VAR_0x8004, SPECIES_MESPRIT
# 53 "data/maps/FloatingSlab/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 54 "data/maps/FloatingSlab/scripts.pory"
	end
