# 1 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 2 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
.set LOCALID_MOVE_RELEARNER, 1
# 3 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 4 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_MapScripts::
# 5 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.byte 0
# 6 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 7 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 9 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
# 10 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 11 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TMS_FROM_TUTOR, FallarborTown_MoveRelearnersHouse_EventScript_ReceivedTms
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 13 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_DRAGON_CLAW
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_IRON_TAIL
# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_THUNDER
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_TELEPORT
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_FIRE_BLAST
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_THUNDER_WAVE
# 19 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_X_SCISSOR
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_IRON_HEAD
# 21 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_LIQUIDATION
# 22 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_HYDRO_PUMP
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_DRILL_RUN
# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_BLAZE_KICK
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_PAIN_SPLIT
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_ZEN_HEADBUTT
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_WEATHER_BALL
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_AIR_SLASH
# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_HEX
# 30 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_MYSTICAL_FIRE
# 31 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_SEED_BOMB
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_LEAF_BLADE
# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_KNOCK_OFF
# 34 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_POWER_GEM
# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_ROCK_BLAST
# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_PIN_MISSILE
# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_ICICLE_SPEAR
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_TAIL_SLAP
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_ARM_THRUST
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_FOUL_PLAY
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_IRON_DEFENSE
# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_BODY_SLAM
# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_PLAY_ROUGH
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_RECEIVED_TMS_FROM_TUTOR
# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ExplainTms, MSGBOX_DEFAULT
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	
# 49 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ReceivedTms::
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_NowYoureAMoveTutor, MSGBOX_DEFAULT
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ExplainTms:
# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "That's all the moves that I knew how to\n"
# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach. Now you can take them with you\p"
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "and teach them to your Pokémon\n"
# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "wherever you are!$"
# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_NowYoureAMoveTutor:
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Now you're a Move Tutor! Hah!$"
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 63 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearnerOriginal::
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 68 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 69 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
# 70 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_RESULT
# 75 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 78 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 81 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 82 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 83 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 84 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 85 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
# 86 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
# 87 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
# 88 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 89 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 90 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 91 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 93 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 94 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 95 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
# 96 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 97 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 98 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 99 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
# 100 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 101 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 102 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 103 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 104 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
# 105 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 106 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 107 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 108 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 109 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 110 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 111 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
# 112 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 113 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 114 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
# 115 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm the Move Tutor.\n"
# 116 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Or at least I used to be. I got tired of\p"
# 117 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "collecting Heart Scales and teaching\n"
# 118 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Pokémon the same moves over and over\p"
# 119 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "again, and trainers got tired of coming\n"
# 120 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "all the way out here just to have me\p"
# 121 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach them moves. So, I solved both\n"
# 122 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "problems by making these!$"
# 123 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 124 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
# 125 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh! That's it! That's an honest to\n"
# 126 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "goodness HEART SCALE!\p"
# 127 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Let me guess, you want me to teach\n"
# 128 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "a move?$"
# 129 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 130 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
# 131 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which POKéMON needs tutoring?$"
# 132 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 133 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
# 134 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move should I teach?$"
# 135 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 136 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
# 137 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Sorry…\p"
# 138 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't appear as if I have any move\n"
# 139 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach that POKéMON.$"
# 140 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 141 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
# 142 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} handed over one HEART SCALE\n"
# 143 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "in exchange.$"
# 144 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 145 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
# 146 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "If your POKéMON need to learn a move,\n"
# 147 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "come back with a HEART SCALE.$"
# 148 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 149 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
# 150 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hunh? There isn't a single move that\n"
# 151 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach an EGG.$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive::
# 156 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 157 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	faceplayer
# 158 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 159 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EggManIntro
# 161 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_0, ITEM_RED_SHARD
# 162 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_1, ITEM_BLUE_SHARD
# 163 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_2, ITEM_GREEN_SHARD
# 164 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_3, MULTI_B_PRESSED
# 167 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 169 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_2
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_1:
# 174 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_RED_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_5
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_4:
# 178 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_BLUE_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_8
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_7:
# 183 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_GREEN_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_11
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_10:
# 188 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_2:
# 171 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_EggManNo
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_1

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_5:
# 176 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_4

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_8:
# 180 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveWaterEgg
# 181 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_7

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_11:
# 185 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveGrassEgg
# 186 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_10


FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg::
# 194 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_RED_SHARD
# 195 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithRedShard
# 196 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 197 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 198 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 199 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 200 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 201 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 202 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_CHARMANDER
# 203 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_RED_SHARD
# 204 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 205 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_GiveWaterEgg::
# 210 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 211 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithBlueShard
# 212 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 213 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 214 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 215 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 216 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 217 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 218 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_SQUIRTLE
# 219 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_BLUE_SHARD
# 220 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 221 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_GiveGrassEgg::
# 226 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 227 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithGreenShard
# 228 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 229 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 230 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 231 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 232 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 233 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 234 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_BULBASAUR
# 235 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_GREEN_SHARD
# 236 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 237 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_EggManNo::
# 242 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_EggManNo_Text_0
# 243 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithRedShard::
# 248 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithRedShard, MSGBOX_DEFAULT
# 249 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithBlueShard::
# 254 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithBlueShard, MSGBOX_DEFAULT
# 255 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithGreenShard::
# 260 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithGreenShard, MSGBOX_DEFAULT
# 261 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg::
# 266 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 267 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_0:
# 161 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Fire$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_1:
# 162 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Water$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_2:
# 163 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Grass$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_3:
# 164 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Cancel$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4:
# 181 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Come back if you have more shards!$"

FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0:
# 198 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "A wise choice. Here you go.$"

FallarborTown_MoveRelearnersHouse_EventScript_EggManNo_Text_0:
# 242 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I see. Come back when you\nwant a starter egg.$"

EggManIntro::
# 274 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hello, I am a shard collector. If you\n"
	.string "give me a Red Shard, I can give you an\p"
	.string "Egg for a Fire-type Starter Pokémon. I\n"
	.string "can do the same with Blue Shards and\p"
	.string "Green Shards for the other types of\n"
	.string "starters.\l"
	.string "Which type of Egg do you want?$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithRedShard::
# 285 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't look like you have a Red\n"
	.string "Shard. Come back when you do.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithBlueShard::
# 290 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't look like you have a Blue\n"
	.string "Shard. Come back when you do.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithGreenShard::
# 295 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't look like you have a Green\n"
	.string "Shard. Come back when you do.$"

FallarborTown_MoveRelearnersHouse_Text_NoRoomForThisEgg::
# 300 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
	.string "There's no room for this Egg.$"

FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg::
# 305 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} received the Egg.$"
