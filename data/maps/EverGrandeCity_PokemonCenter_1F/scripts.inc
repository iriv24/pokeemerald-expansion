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
EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript::
# 82 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	lockall
# 83 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_EGG_MOVE_TUTOR
# 84 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_EGG_TUTOR, Common_Movement_FacePlayer
# 85 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 86 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_EggTutor_Text_ImTheEggTutor, MSGBOX_DEFAULT
# 87 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_AskTeachMove
# 88 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 89 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 90 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 91 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 92 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_AskTeachMove::
# 93 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_EggTutor_Text_WantMeToTeachMove, MSGBOX_YESNO
# 94 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case NO, EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_ComeBackWithHeartScale
# 96 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon
# 97 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 98 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 99 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 100 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon::
# 101 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_EggTutor_Text_TutorWhichMon, MSGBOX_DEFAULT
# 102 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	special ChooseMonForMoveRelearner
# 103 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 104 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_ComeBackWithHeartScale
# 105 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 106 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_CantTeachEgg
# 107 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8005, 0, EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_NoMoveToTeachMon
# 108 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMove
# 109 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 110 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 111 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMove::
# 112 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_EggTutor_Text_TeachWhichMove, MSGBOX_DEFAULT
# 113 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	special TeachMoveRelearnerMove
# 114 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 115 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, 0, EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon
# 116 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_EggTutor_Text_ThereYouGo, MSGBOX_DEFAULT
# 117 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_ComeBackWithHeartScale
# 118 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 119 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 120 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_NoMoveToTeachMon::
# 121 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_EggTutor_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 122 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon
# 123 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 124 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 125 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_CantTeachEgg::
# 126 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_EggTutor_Text_CantTeachEgg, MSGBOX_DEFAULT
# 127 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon
# 128 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 129 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 130 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EggTutor_EventScript_ComeBackWithHeartScale::
# 131 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_EggTutor_Text_ComeBack, MSGBOX_DEFAULT
# 132 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 133 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	releaseall
# 134 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 135 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 136 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EggTutor_Text_ImTheEggTutor:
# 137 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Hello, I'm an Egg Move Tutor. I can\n"
# 138 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "teach your Pokémon any Egg Moves they\l"
# 139 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "could possibly learn.$"
# 140 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 141 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EggTutor_Text_WantMeToTeachMove:
# 142 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Would you like me to teach one of your\n"
# 143 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Pokémon an Egg Move?$"
# 144 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 145 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EggTutor_Text_TutorWhichMon:
# 146 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Which Pokémon?$"
# 147 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 148 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EggTutor_Text_TeachWhichMove:
# 149 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Which move should I teach?$"
# 150 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 151 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EggTutor_Text_DontHaveMoveToTeachPokemon:
# 152 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "That Pokémon doesn't have any  Egg\n"
# 153 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Moves.$"
# 154 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 155 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EggTutor_Text_ThereYouGo:
# 156 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "There you go.$"
# 157 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 158 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EggTutor_Text_ComeBack:
# 159 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Come back if you want your Pokémon to\n"
# 160 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "learn more Egg Moves.$"
# 161 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 162 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EggTutor_Text_CantTeachEgg:
# 163 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Just because I'm an Egg Move tutor\n"
# 164 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "doesn't mean I can teach moves to an\l"
# 165 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Egg!$"
# 166 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 167 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad:
# 168 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The Pokémon League is only a short\n"
# 169 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "distance after the Victory Road.\p"
# 170 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "If you've come this far, what choice\n"
# 171 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "do you have but to keep going?$"
# 172 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 173 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon:
# 174 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The long and harrowing Victory Road…\p"
# 175 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "It's like reliving the path one has\n"
# 176 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "traveled in life…\p"
# 177 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Believe in your Pokémon and give it\n"
# 178 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "your very best!$"
# 179 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 180 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou:
# 181 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Scott: {PLAYER}{KUN}, you've clawed your\n"
# 182 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "way up to face the Pokémon League!\p"
# 183 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'm happy for you!\n"
# 184 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "You made my cheering worthwhile!\p"
# 185 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER}{KUN}, if you were to become\n"
# 186 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "the Pokémon League Champion…\p"
# 187 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "I'll get in touch with you then.\p"
# 188 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Okay, {PLAYER}{KUN}.\n"
# 189 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "Go for greatness!$"
