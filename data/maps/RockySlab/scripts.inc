# 1 "data/maps/RockySlab/scripts.pory"

# 2 "data/maps/RockySlab/scripts.pory"
RockySlab_MapScripts::
# 3 "data/maps/RockySlab/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RockySlab_OnResume
# 4 "data/maps/RockySlab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RockySlab_OnTransition
# 5 "data/maps/RockySlab/scripts.pory"
	.byte 0
# 6 "data/maps/RockySlab/scripts.pory"

# 7 "data/maps/RockySlab/scripts.pory"
RockySlab_OnResume:
# 8 "data/maps/RockySlab/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, RockySlab_EventScript_TryRemoveUxie
# 9 "data/maps/RockySlab/scripts.pory"
	end
# 10 "data/maps/RockySlab/scripts.pory"

# 11 "data/maps/RockySlab/scripts.pory"
RockySlab_EventScript_TryRemoveUxie::
# 12 "data/maps/RockySlab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/RockySlab/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/RockySlab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/RockySlab/scripts.pory"
	return
# 16 "data/maps/RockySlab/scripts.pory"

# 17 "data/maps/RockySlab/scripts.pory"
RockySlab_OnTransition:
# 18 "data/maps/RockySlab/scripts.pory"
	setflag FLAG_LANDMARK_ROCKY_SLAB
# 19 "data/maps/RockySlab/scripts.pory"
	call_if_unset FLAG_DEFEATED_UXIE, RockySlab_EventScript_ShowUxie
# 20 "data/maps/RockySlab/scripts.pory"
	end
# 21 "data/maps/RockySlab/scripts.pory"

# 22 "data/maps/RockySlab/scripts.pory"
RockySlab_EventScript_ShowUxie::
# 23 "data/maps/RockySlab/scripts.pory"
	clearflag FLAG_HIDE_UXIE
# 24 "data/maps/RockySlab/scripts.pory"
	return
# 25 "data/maps/RockySlab/scripts.pory"

# 26 "data/maps/RockySlab/scripts.pory"
RockySlab_EventScript_Uxie::
# 27 "data/maps/RockySlab/scripts.pory"
	lock
# 28 "data/maps/RockySlab/scripts.pory"
	faceplayer
# 29 "data/maps/RockySlab/scripts.pory"
	waitse
# 30 "data/maps/RockySlab/scripts.pory"
	playmoncry SPECIES_UXIE, CRY_MODE_ENCOUNTER
# 31 "data/maps/RockySlab/scripts.pory"
	delay 40
# 32 "data/maps/RockySlab/scripts.pory"
	waitmoncry
# 33 "data/maps/RockySlab/scripts.pory"
	setwildbattle SPECIES_UXIE, 70
# 34 "data/maps/RockySlab/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 35 "data/maps/RockySlab/scripts.pory"
	special StartRegiBattle
# 36 "data/maps/RockySlab/scripts.pory"
	waitstate
# 37 "data/maps/RockySlab/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 38 "data/maps/RockySlab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 39 "data/maps/RockySlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, RockySlab_EventScript_DefeatedUxie
# 40 "data/maps/RockySlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, RockySlab_EventScript_RanFromUxie
# 41 "data/maps/RockySlab/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, RockySlab_EventScript_RanFromUxie
# 42 "data/maps/RockySlab/scripts.pory"
	setflag FLAG_DEFEATED_UXIE
# 43 "data/maps/RockySlab/scripts.pory"
	release
# 44 "data/maps/RockySlab/scripts.pory"
	end
# 45 "data/maps/RockySlab/scripts.pory"

# 46 "data/maps/RockySlab/scripts.pory"
RockySlab_EventScript_DefeatedUxie::
# 47 "data/maps/RockySlab/scripts.pory"
	setflag FLAG_DEFEATED_UXIE
# 48 "data/maps/RockySlab/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 49 "data/maps/RockySlab/scripts.pory"
	end
# 50 "data/maps/RockySlab/scripts.pory"

# 51 "data/maps/RockySlab/scripts.pory"
RockySlab_EventScript_RanFromUxie::
# 52 "data/maps/RockySlab/scripts.pory"
	setvar VAR_0x8004, SPECIES_UXIE
# 53 "data/maps/RockySlab/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 54 "data/maps/RockySlab/scripts.pory"
	end
