# 1 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_EGG_TUTOR, 5
# 4 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 5 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_MapScripts::
# 6 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_PokemonCenter_1F_OnTransition
# 7 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 8 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 9 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_OnTransition:
# 11 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MOSSDEEP_CITY
# 12 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Woman::
# 23 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable, MSGBOX_NPC
# 24 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Girl::
# 27 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves, MSGBOX_NPC
# 28 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_EventScript::
# 31 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	lockall
# 32 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_EGG_MOVE_TUTOR
# 33 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_EGG_TUTOR, Common_Movement_FacePlayer
# 34 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_EggTutor_Text_ImTheEggTutor, MSGBOX_DEFAULT
# 36 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_AskTeachMove
# 37 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 38 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 39 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_AskTeachMove::
# 42 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_EggTutor_Text_WantMeToTeachMove, MSGBOX_YESNO
# 43 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 44 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	case NO, MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_ComeBackWithHeartScale
# 45 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon
# 46 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 47 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 48 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon::
# 50 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_EggTutor_Text_TutorWhichMon, MSGBOX_DEFAULT
# 51 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	special ChooseMonForMoveRelearner
# 52 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 53 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_ComeBackWithHeartScale
# 54 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 55 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_CantTeachEgg
# 56 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8005, 0, MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_NoMoveToTeachMon
# 57 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMove
# 58 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 59 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 60 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMove::
# 61 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_EggTutor_Text_TeachWhichMove, MSGBOX_DEFAULT
# 62 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	special TeachMoveRelearnerMove
# 63 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 64 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, 0, MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon
# 65 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_EggTutor_Text_ThereYouGo, MSGBOX_DEFAULT
# 66 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_ComeBackWithHeartScale
# 67 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 68 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 69 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_NoMoveToTeachMon::
# 70 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_EggTutor_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 71 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon
# 72 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 73 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 74 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_CantTeachEgg::
# 75 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_EggTutor_Text_CantTeachEgg, MSGBOX_DEFAULT
# 76 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	goto MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon
# 77 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 78 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 79 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_EventScript_ComeBackWithHeartScale::
# 80 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_EggTutor_Text_ComeBack, MSGBOX_DEFAULT
# 81 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 82 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	releaseall
# 83 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 84 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 85 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_Text_ImTheEggTutor:
# 86 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Hello, I'm an Egg Move Tutor. I can\n"
# 87 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "teach your Pokémon any Egg Moves they\l"
# 88 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "could possibly learn.$"
# 89 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 90 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_Text_WantMeToTeachMove:
# 91 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Would you like me to teach one of your\n"
# 92 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Pokémon an Egg Move?$"
# 93 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 94 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_Text_TutorWhichMon:
# 95 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Which Pokémon?$"
# 96 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 97 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_Text_TeachWhichMove:
# 98 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Which move should I teach?$"
# 99 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 100 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_Text_DontHaveMoveToTeachPokemon:
# 101 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "That Pokémon doesn't have any  Egg\n"
# 102 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Moves.$"
# 103 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 104 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_Text_ThereYouGo:
# 105 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "There you go.$"
# 106 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 107 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_Text_ComeBack:
# 108 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Come back if you want your Pokémon to\n"
# 109 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "learn more Egg Moves.$"
# 110 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 111 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EggTutor_Text_CantTeachEgg:
# 112 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Just because I'm an Egg Move tutor\n"
# 113 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "doesn't mean I can teach moves to an\l"
# 114 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Egg!$"
# 115 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 116 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable:
# 117 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "The GYM LEADERS in this town are\n"
# 118 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "a formidable duo.\p"
# 119 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Their combination attacks are, like,\n"
# 120 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "excellent and wow!$"
# 121 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 122 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves:
# 123 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Depending on the special abilities of\n"
# 124 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON, some moves might change\l"
# 125 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "or not work at all.$"
