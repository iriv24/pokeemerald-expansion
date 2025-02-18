# 1 "data/maps/GraniteCave_B2F/scripts.pory"

# 2 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_MapScripts::
# 3 "data/maps/GraniteCave_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B2F_OnResume
# 4 "data/maps/GraniteCave_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCave_B2F_OnTransition
# 5 "data/maps/GraniteCave_B2F/scripts.pory"
	.byte 0
# 6 "data/maps/GraniteCave_B2F/scripts.pory"

# 7 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_OnResume:
# 8 "data/maps/GraniteCave_B2F/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, GraniteCave_B2F_EventScript_TryRemoveMoltresGalar
# 9 "data/maps/GraniteCave_B2F/scripts.pory"
	end
# 10 "data/maps/GraniteCave_B2F/scripts.pory"

# 11 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_EventScript_TryRemoveMoltresGalar::
# 12 "data/maps/GraniteCave_B2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/GraniteCave_B2F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/GraniteCave_B2F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/GraniteCave_B2F/scripts.pory"
	return
# 16 "data/maps/GraniteCave_B2F/scripts.pory"

# 17 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_OnTransition:
# 18 "data/maps/GraniteCave_B2F/scripts.pory"
	call_if_unset FLAG_DEFEATED_MOLTRES_GALARIAN, GraniteCave_B2F_EventScript_ShowMoltresGalar
# 19 "data/maps/GraniteCave_B2F/scripts.pory"
	end
# 20 "data/maps/GraniteCave_B2F/scripts.pory"

# 21 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_EventScript_ShowMoltresGalar::
# 22 "data/maps/GraniteCave_B2F/scripts.pory"
	clearflag FLAG_HIDE_MOLTRES_GALARIAN
# 23 "data/maps/GraniteCave_B2F/scripts.pory"
	return
# 24 "data/maps/GraniteCave_B2F/scripts.pory"

# 25 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_EventScript_MoltresGalar::
# 26 "data/maps/GraniteCave_B2F/scripts.pory"
	lock
# 27 "data/maps/GraniteCave_B2F/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, GraniteCave_B2F_EventScript_NotStrongEnoughYet
# 28 "data/maps/GraniteCave_B2F/scripts.pory"
	faceplayer
# 29 "data/maps/GraniteCave_B2F/scripts.pory"
	waitse
# 30 "data/maps/GraniteCave_B2F/scripts.pory"
	playmoncry SPECIES_MOLTRES_GALAR, CRY_MODE_ENCOUNTER
# 31 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 40
# 32 "data/maps/GraniteCave_B2F/scripts.pory"
	waitmoncry
# 33 "data/maps/GraniteCave_B2F/scripts.pory"
	setwildbattle SPECIES_MOLTRES_GALAR, 70
# 34 "data/maps/GraniteCave_B2F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 35 "data/maps/GraniteCave_B2F/scripts.pory"
	special StartRegiBattle
# 36 "data/maps/GraniteCave_B2F/scripts.pory"
	waitstate
# 37 "data/maps/GraniteCave_B2F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 38 "data/maps/GraniteCave_B2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 39 "data/maps/GraniteCave_B2F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, GraniteCave_B2F_EventScript_DefeatedMoltresGalar
# 40 "data/maps/GraniteCave_B2F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, GraniteCave_B2F_EventScript_RanFromMoltresGalar
# 41 "data/maps/GraniteCave_B2F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, GraniteCave_B2F_EventScript_RanFromMoltresGalar
# 42 "data/maps/GraniteCave_B2F/scripts.pory"
	setflag FLAG_DEFEATED_MOLTRES_GALARIAN
# 43 "data/maps/GraniteCave_B2F/scripts.pory"
	release
# 44 "data/maps/GraniteCave_B2F/scripts.pory"
	end
# 45 "data/maps/GraniteCave_B2F/scripts.pory"

# 46 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_EventScript_NotStrongEnoughYet::
# 47 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_Text_NotStrongEnoughYet, MSGBOX_DEFAULT
# 48 "data/maps/GraniteCave_B2F/scripts.pory"
	release
# 49 "data/maps/GraniteCave_B2F/scripts.pory"
	end
# 50 "data/maps/GraniteCave_B2F/scripts.pory"

# 51 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_EventScript_DefeatedMoltresGalar::
# 52 "data/maps/GraniteCave_B2F/scripts.pory"
	setflag FLAG_DEFEATED_MOLTRES_GALARIAN
# 53 "data/maps/GraniteCave_B2F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 54 "data/maps/GraniteCave_B2F/scripts.pory"
	end
# 55 "data/maps/GraniteCave_B2F/scripts.pory"

# 56 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_EventScript_RanFromMoltresGalar::
# 57 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8004, SPECIES_MOLTRES_GALAR
# 58 "data/maps/GraniteCave_B2F/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 59 "data/maps/GraniteCave_B2F/scripts.pory"
	end
# 60 "data/maps/GraniteCave_B2F/scripts.pory"

# 61 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Text_NotStrongEnoughYet:
# 62 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "You sense you are not strong enough to\n"
# 63 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "take on this Pokémon yet.\p"
# 64 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "And you also shouldn't be here you\n"
# 65 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "little DexNav-abusing cheater.$"
