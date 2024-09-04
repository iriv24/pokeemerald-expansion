# 1 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"

# 2 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_MapScripts::
# 3 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ShoalCave_LowTideIceRoom_OnResume
# 4 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideIceRoom_OnTransition
# 5 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.byte 0
# 6 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"

# 7 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_OnResume:
# 8 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ShoalCave_LowTideIceRoom_EventScript_TryRemoveKyurem
# 9 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	end
# 10 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"

# 11 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_EventScript_TryRemoveKyurem::
# 12 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	return
# 16 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"

# 17 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_OnTransition:
# 18 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	call_if_unset FLAG_DEFEATED_KYUREM, ShoalCave_LowTideIceRoom_EventScript_ShowKyurem
# 19 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	end
# 20 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"

# 21 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_EventScript_ShowKyurem::
# 22 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	clearflag FLAG_HIDE_KYUREM
# 23 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	return
# 24 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"

# 25 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_EventScript_Kyurem::
# 26 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock
# 27 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	faceplayer
# 28 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitse
# 29 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
# 30 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 40
# 31 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmoncry
# 32 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setwildbattle SPECIES_KYUREM, 70
# 33 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 34 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	special StartRegiBattle
# 35 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitstate
# 36 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 37 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 38 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ShoalCave_LowTideIceRoom_EventScript_DefeatedKyurem
# 39 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ShoalCave_LowTideIceRoom_EventScript_RanFromKyurem
# 40 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ShoalCave_LowTideIceRoom_EventScript_RanFromKyurem
# 41 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_DEFEATED_KYUREM
# 42 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
# 43 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	end
# 44 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"

# 45 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_EventScript_DefeatedKyurem::
# 46 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_DEFEATED_KYUREM
# 47 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 48 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	end
# 49 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"

# 50 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_EventScript_RanFromKyurem::
# 51 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_0x8004, SPECIES_KYUREM
# 52 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 53 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	end
