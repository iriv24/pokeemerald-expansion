# 1 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 2 "data/maps/MeteorFalls_StevensCave/scripts.pory"
.set LOCALID_MEWTWO, 1
# 3 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 4 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_MapScripts::
# 5 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MeteorFalls_StevensCave_OnTransition
# 6 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MeteorFalls_StevensCave_OnResume
# 7 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.byte 0
# 8 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 9 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_OnTransition:
# 10 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	call_if_set FLAG_CAUGHT_MEWTWO, MeteorFalls_StevensCave_EventScript_HideMewtwo
# 11 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	call_if_unset FLAG_CAUGHT_MEWTWO, MeteorFalls_StevensCave_EventScript_TryShowMewtwo
# 12 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 13 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 14 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_HideMewtwo::
# 15 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_HIDE_MEWTWO
# 16 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	return
# 17 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 18 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_TryShowMewtwo::
# 19 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_set FLAG_DEFEATED_MEWTWO, Common_EventScript_NopReturn
# 20 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	clearflag FLAG_HIDE_MEWTWO
# 21 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	return
# 22 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 23 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_OnResume:
# 24 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, MeteorFalls_StevensCave_EventScript_TryRemoveMewtwo
# 25 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 26 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 27 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_TryRemoveMewtwo::
# 28 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 29 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 30 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	removeobject LOCALID_MEWTWO
# 31 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	return
# 32 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 33 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_Mewtwo::
# 34 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	lock
# 35 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	faceplayer
# 36 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitse
# 37 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
# 38 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmoncry
# 39 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	delay 20
# 40 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	seteventmon SPECIES_MEWTWO, 70
# 41 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 42 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 43 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitstate
# 44 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 45 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 46 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, MeteorFalls_StevensCave_EventScript_DefeatedMewtwo
# 47 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MeteorFalls_StevensCave_EventScript_RanFromMewtwo
# 48 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MeteorFalls_StevensCave_EventScript_RanFromMewtwo
# 49 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_CAUGHT_MEWTWO
# 50 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 51 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 52 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 53 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_DefeatedMewtwo::
# 54 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_DEFEATED_MEWTWO
# 55 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEWTWO
# 56 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 57 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 58 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 59 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_RanFromMewtwo::
# 60 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEWTWO
# 61 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 62 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
