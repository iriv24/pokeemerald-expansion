# 1 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_EGG_TUTOR, 6
# 4 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 5 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_MapScripts::
# 6 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_PokemonCenter_1F_OnTransition
# 7 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 8 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 9 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_OnTransition:
# 11 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
# 12 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Gentleman::
# 23 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 24 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 25 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
# 26 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
# 27 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge, MSGBOX_DEFAULT
# 28 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 29 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries::
# 32 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn, MSGBOX_DEFAULT
# 33 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 34 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 35 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Woman::
# 37 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 38 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 39 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
# 40 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
# 41 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends, MSGBOX_DEFAULT
# 42 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 43 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 44 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries::
# 46 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon, MSGBOX_DEFAULT
# 47 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 48 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 49 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 50 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_EventScript::
# 51 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lockall
# 52 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_EGG_MOVE_TUTOR
# 53 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_EGG_TUTOR, Common_Movement_FacePlayer
# 54 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 55 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_EggTutor_Text_ImTheEggTutor, MSGBOX_DEFAULT
# 56 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_AskTeachMove
# 57 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 58 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 59 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 60 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_AskTeachMove::
# 62 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_EggTutor_Text_WantMeToTeachMove, MSGBOX_YESNO
# 63 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 64 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	case NO, SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_ComeBackWithHeartScale
# 65 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon
# 66 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 67 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 68 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 69 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon::
# 70 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_EggTutor_Text_TutorWhichMon, MSGBOX_DEFAULT
# 71 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	special ChooseMonForMoveRelearner
# 72 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 73 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_ComeBackWithHeartScale
# 74 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 75 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_CantTeachEgg
# 76 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8005, 0, SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_NoMoveToTeachMon
# 77 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMove
# 78 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 79 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 80 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMove::
# 81 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_EggTutor_Text_TeachWhichMove, MSGBOX_DEFAULT
# 82 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	special TeachMoveRelearnerMove
# 83 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 84 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, 0, SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon
# 85 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_EggTutor_Text_ThereYouGo, MSGBOX_DEFAULT
# 86 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_ComeBackWithHeartScale
# 87 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 88 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 89 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_NoMoveToTeachMon::
# 90 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_EggTutor_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 91 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon
# 92 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 93 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 94 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_CantTeachEgg::
# 95 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_EggTutor_Text_CantTeachEgg, MSGBOX_DEFAULT
# 96 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_ChooseMon
# 97 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 98 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 99 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_EventScript_ComeBackWithHeartScale::
# 100 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_EggTutor_Text_ComeBack, MSGBOX_DEFAULT
# 101 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 102 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	releaseall
# 103 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 104 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	
# 105 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_FormerDoubleEdgeTutor::
# 106 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lockall
# 107 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 108 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_FormerDoubleEdgeTutor, MSGBOX_DEFAULT
# 109 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	releaseall
# 110 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 111 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 112 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_FormerDoubleEdgeTutor:
# 113 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "I used to have two great\n"
# 114 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "edges... Oh, what happened?$"
# 115 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 116 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_Text_ImTheEggTutor:
# 117 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Hello, I'm an Egg Move Tutor. I can\n"
# 118 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "teach your Pokémon any Egg Moves they\l"
# 119 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "could possibly learn.$"
# 120 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 121 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_Text_WantMeToTeachMove:
# 122 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Would you like me to teach one of your\n"
# 123 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Pokémon an Egg Move?$"
# 124 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 125 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_Text_TutorWhichMon:
# 126 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Which Pokémon?$"
# 127 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 128 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_Text_TeachWhichMove:
# 129 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Which move should I teach?$"
# 130 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 131 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_Text_DontHaveMoveToTeachPokemon:
# 132 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "That Pokémon doesn't have any  Egg\n"
# 133 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Moves.$"
# 134 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 135 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_Text_ThereYouGo:
# 136 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "There you go.$"
# 137 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 138 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_Text_ComeBack:
# 139 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Come back if you want your Pokémon to\n"
# 140 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "learn more Egg Moves.$"
# 141 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 142 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EggTutor_Text_CantTeachEgg:
# 143 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Just because I'm an Egg Move tutor\n"
# 144 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "doesn't mean I can teach moves to an\l"
# 145 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Egg!$"
# 146 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 147 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn:
# 148 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "WALLACE is rumored to be the toughest\n"
# 149 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "TRAINER in the whole HOENN region.\p"
# 150 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "This town's GYM is led by the TRAINER\n"
# 151 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "who taught WALLACE.\p"
# 152 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "But the ELITE FOUR… They're said to be\n"
# 153 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "even stronger than WALLACE's mentor.\p"
# 154 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "How strong could they be?$"
# 155 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 156 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge:
# 157 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Everyone in town has taken refuge\n"
# 158 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "and won't come out of their homes.\p"
# 159 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Even I would rather not venture\n"
# 160 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "outside.$"
# 161 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 162 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon:
# 163 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Whenever, wherever, and whatever\n"
# 164 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "happens, I will always be friends with\l"
# 165 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON.\p"
# 166 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Because it's fun to be with POKéMON!$"
# 167 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 168 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends:
# 169 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Aren't POKéMON our friends?\p"
# 170 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Why are they going wild this way?$"
