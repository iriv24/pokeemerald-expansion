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
EverGrandeCity_PokemonCenter_1F_EventScript_Scott::
# 34 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	lock
# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 36 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou, MSGBOX_DEFAULT
# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 38 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExitNorth
# 39 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit
# 40 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit
# 41 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 42 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 43 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 44 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitse
# 45 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_SCOTT
# 46 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
# 47 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 48 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ScottExitNorth::
# 50 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_SCOTT, EverGrandeCity_PokemonCenter_1F_Movement_ScottExitNorth
# 51 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 52 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 53 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 54 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit::
# 55 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_SCOTT, EverGrandeCity_PokemonCenter_1F_Movement_ScottExit
# 56 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 57 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 58 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 59 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Movement_ScottExitNorth:
# 60 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 61 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 62 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 63 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 64 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 65 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 66 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	step_end
# 67 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 68 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Movement_ScottExit:
# 69 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 70 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 71 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 72 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 73 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 74 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 75 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	step_end
# 76 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 77 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad:
# 78 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The Pokémon League is only a short\n"
# 79 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "distance after the Victory Road.\p"
# 80 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "If you've come this far, what choice\n"
# 81 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "do you have but to keep going?$"
# 82 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 83 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou:
# 84 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Scott: {PLAYER}{KUN}, you've clawed your\n"
# 85 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "way up to face the Pokémon League!\p"
# 86 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'm happy for you!\n"
# 87 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "You made my cheering worthwhile!\p"
# 88 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER}{KUN}, if you were to become\n"
# 89 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "the Pokémon League Champion…\p"
# 90 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'll get in touch with you then.\p"
# 91 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Okay, {PLAYER}{KUN}.\n"
# 92 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Go for greatness!$"

EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM::
# 97 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	lock
# 98 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 100 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_ZYGARDE_CUBE, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_2
# 106 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_IHaveCube, MSGBOX_DEFAULT
# 107 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 108 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 109 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 110 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, EverGrandeCity_PokemonCenter_1F_EventScript_CancelLegend
# 111 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 112 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 113 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case SPECIES_ZYGARDE, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6
# 114 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case SPECIES_ZYGARDE_50, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6
# 115 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case SPECIES_ZYGARDE_10, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6
# 116 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case SPECIES_ZYGARDE_10_AURA_BREAK, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6
# 117 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case SPECIES_ZYGARDE_10_POWER_CONSTRUCT, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6
# 118 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case SPECIES_ZYGARDE_50_POWER_CONSTRUCT, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6
# 119 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case SPECIES_ZYGARDE_COMPLETE, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6
# 125 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_NotLegend, MSGBOX_DEFAULT
# 126 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
	end

EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_2:
# 101 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_UseThatCube, MSGBOX_DEFAULT
# 102 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
	end

EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_4:
# 130 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_UseThatCube, MSGBOX_DEFAULT
# 131 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
	end

EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6:
# 120 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_PleaseTakeThisCube, MSGBOX_DEFAULT
# 121 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_ZYGARDE_CUBE
# 122 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_ZYGARDE_CUBE
	goto EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_4


EverGrandeCity_PokemonCenter_1F_EventScript_CancelLegend::
# 136 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_DontHaveLegend, MSGBOX_DEFAULT
# 137 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
	end


EverGrandeCity_PokemonCenter_1F_Text_IHaveCube::
# 141 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "A promising trainer I see. I knew if I\n"
	.string "waited at this Pokémon Center,\l"
	.string "eventually a trainer of your caliber\l"
	.string "would arrive.\p"
	.string "I've spent a long time collecting cells\n"
	.string "to make a highly-advanced Cube to\l"
	.string "change the form of a certain Pokémon.\p"
	.string "If you show me you have this Pokémon, I\n"
	.string "can give you the Cube.$"

EverGrandeCity_PokemonCenter_1F_Text_PleaseTakeThisCube::
# 153 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "That's it! That's the Pokémon that this\n"
	.string "Cube will work on.\p"
	.string "Please, use this technology to the\n"
	.string "fullest extent.$"

EverGrandeCity_PokemonCenter_1F_Text_UseThatCube::
# 160 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "That Cube will bring out the true power\n"
	.string "of Zygarde.\p"
	.string "It took me many years to find the cells\n"
	.string "needed to make it, so please use it well.$"

EverGrandeCity_PokemonCenter_1F_Text_DontHaveLegend::
# 167 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I see, you don't have the Pokémon I am\n"
	.string "looking for.$"

EverGrandeCity_PokemonCenter_1F_Text_NotLegend::
# 171 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "That's not the Pokémon that can use\n"
	.string "this Cube.$"
