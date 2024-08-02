# 1 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_SCOTT, 4
# 4 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_EGG_TUTOR, 6
# 5 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_MapScripts::
# 7 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonCenter_1F_OnTransition
# 8 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 9 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 10 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_OnTransition:
# 12 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY
# 13 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_unset FLAG_MET_SCOTT_IN_EVERGRANDE, EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott
# 14 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott::
# 17 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Common_EventScript_NopReturn
# 18 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
# 19 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 20 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Nurse::
# 22 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 23 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 24 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 25 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 26 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
# 27 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Woman::
# 30 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad, MSGBOX_NPC
# 31 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM::
# 34 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon, MSGBOX_NPC
# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott::
# 38 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	lock
# 39 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 40 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou, MSGBOX_DEFAULT
# 41 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 42 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExitNorth
# 43 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit
# 44 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit
# 45 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 46 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 47 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 48 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitse
# 49 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_SCOTT
# 50 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
# 51 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 52 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ScottExitNorth::
# 54 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_SCOTT, EverGrandeCity_PokemonCenter_1F_Movement_ScottExitNorth
# 55 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 56 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 57 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit::
# 59 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_SCOTT, EverGrandeCity_PokemonCenter_1F_Movement_ScottExit
# 60 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 61 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 62 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 63 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Movement_ScottExitNorth:
# 64 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 65 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 66 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 67 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 68 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 69 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 70 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	step_end
# 71 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 72 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Movement_ScottExit:
# 73 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 74 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 75 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 76 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 77 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 78 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 79 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	step_end
# 80 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 81 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad:
# 82 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The Pokémon League is only a short\n"
# 83 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "distance after the Victory Road.\p"
# 84 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "If you've come this far, what choice\n"
# 85 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "do you have but to keep going?$"
# 86 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 87 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon:
# 88 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The long and harrowing Victory Road…\p"
# 89 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "It's like reliving the path one has\n"
# 90 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "traveled in life…\p"
# 91 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Believe in your Pokémon and give it\n"
# 92 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "your very best!$"
# 93 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 94 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou:
# 95 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Scott: {PLAYER}{KUN}, you've clawed your\n"
# 96 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "way up to face the Pokémon League!\p"
# 97 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'm happy for you!\n"
# 98 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "You made my cheering worthwhile!\p"
# 99 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER}{KUN}, if you were to become\n"
# 100 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "the Pokémon League Champion…\p"
# 101 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'll get in touch with you then.\p"
# 102 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Okay, {PLAYER}{KUN}.\n"
# 103 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Go for greatness!$"
