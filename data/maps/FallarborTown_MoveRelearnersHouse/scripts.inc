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
	giveitem ITEM_TM_IRON_HEAD
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_LIQUIDATION
# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_HYDRO_PUMP
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_FIRE_BLAST
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_THUNDER
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_DRILL_RUN
# 19 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_BLAZE_KICK
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_PAIN_SPLIT
# 21 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_ZEN_HEADBUTT
# 22 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_WEATHER_BALL
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_AIR_SLASH
# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_HEX
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_MYSTICAL_FIRE
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_SEED_BOMB
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_LEAF_BLADE
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_KNOCK_OFF
# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_POWER_GEM
# 30 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_ROCK_BLAST
# 31 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_PIN_MISSILE
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_ICICLE_SPEAR
# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_TAIL_SLAP
# 34 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_ARM_THRUST
# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_PLAY_ROUGH
# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_BODY_SLAM
# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_FOUL_PLAY
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_TM_IRON_DEFENSE
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_RECEIVED_TMS_FROM_TUTOR
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ExplainTms, MSGBOX_DEFAULT
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ReceivedTms::
# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_NowYoureAMoveTutor, MSGBOX_DEFAULT
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 49 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ExplainTms:
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "That's all the moves that I knew how to\n"
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach. Now you can take them with you\p"
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "and teach them to your Pokémon\n"
# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "wherever you are!$"
# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_NowYoureAMoveTutor:
# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Now you're a Move Tutor! Hah!$"
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 63 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_RESULT
# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 68 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 69 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 70 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
# 75 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 78 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 81 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 82 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 83 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 84 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
# 85 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 86 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 87 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 88 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 89 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
# 90 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 91 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 93 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 94 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
# 95 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 96 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 97 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 98 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 99 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 100 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 101 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
# 102 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 103 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 104 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
# 105 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm the Move Tutor.\n"
# 106 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Or at least I used to be. I got tired of\p"
# 107 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "collecting Heart Scales and teaching\n"
# 108 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Pokémon the same moves over and over\p"
# 109 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "again, and trainers got tired of coming\n"
# 110 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "all the way out here just to have me\p"
# 111 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach them moves. So, I solved both\n"
# 112 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "problems by making these!$"
# 113 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 114 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
# 115 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh! That's it! That's an honest to\n"
# 116 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "goodness HEART SCALE!\p"
# 117 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Let me guess, you want me to teach\n"
# 118 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "a move?$"
# 119 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 120 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
# 121 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which POKéMON needs tutoring?$"
# 122 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 123 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
# 124 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move should I teach?$"
# 125 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 126 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
# 127 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Sorry…\p"
# 128 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't appear as if I have any move\n"
# 129 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach that POKéMON.$"
# 130 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 131 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
# 132 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} handed over one HEART SCALE\n"
# 133 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "in exchange.$"
# 134 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 135 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
# 136 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "If your POKéMON need to learn a move,\n"
# 137 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "come back with a HEART SCALE.$"
# 138 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 139 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
# 140 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hunh? There isn't a single move that\n"
# 141 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach an EGG.$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive::
# 146 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 147 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	faceplayer
# 148 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 149 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EggManIntro
# 151 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_0, ITEM_RED_SHARD
# 152 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_1, ITEM_BLUE_SHARD
# 153 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_2, ITEM_GREEN_SHARD
# 154 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_3, MULTI_B_PRESSED
# 157 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 159 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_2
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_1:
# 164 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_RED_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_5
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_4:
# 168 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_BLUE_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_8
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_7:
# 173 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_GREEN_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_11
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_10:
# 178 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_2:
# 161 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_EggManNo
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_1

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_5:
# 166 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_4

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_8:
# 170 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveWaterEgg
# 171 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_7

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_11:
# 175 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveGrassEgg
# 176 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_10


FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg::
# 184 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_RED_SHARD
# 185 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithRedShard
# 186 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 187 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 188 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 189 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 190 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 191 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 192 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_CHARMANDER
# 193 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_RED_SHARD
# 194 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 195 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_GiveWaterEgg::
# 200 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 201 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithBlueShard
# 202 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 203 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 204 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 205 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 206 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 207 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 208 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_SQUIRTLE
# 209 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_BLUE_SHARD
# 210 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 211 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_GiveGrassEgg::
# 216 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 217 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithGreenShard
# 218 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 219 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 220 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 221 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 222 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 223 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 224 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_BULBASAUR
# 225 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_GREEN_SHARD
# 226 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 227 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_EggManNo::
# 232 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_EggManNo_Text_0
# 233 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithRedShard::
# 238 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithRedShard, MSGBOX_DEFAULT
# 239 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithBlueShard::
# 244 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithBlueShard, MSGBOX_DEFAULT
# 245 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithGreenShard::
# 250 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithGreenShard, MSGBOX_DEFAULT
# 251 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg::
# 256 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 257 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_0:
# 151 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Fire$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_1:
# 152 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Water$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_2:
# 153 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Grass$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_3:
# 154 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Cancel$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4:
# 171 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Come back if you have more shards!$"

FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0:
# 188 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "A wise choice. Here you go.$"

FallarborTown_MoveRelearnersHouse_EventScript_EggManNo_Text_0:
# 232 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I see. Come back when you\nwant a starter egg.$"

EggManIntro::
# 264 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hello, I am a shard collector. If you\n"
	.string "give me a Red Shard, I can give you an\p"
	.string "Egg for a Fire-type Starter Pokémon. I\n"
	.string "can do the same with Blue Shards and\p"
	.string "Green Shards for the other types of\n"
	.string "starters.\l"
	.string "Which type of Egg do you want?$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithRedShard::
# 275 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't look like you have a Red\n"
	.string "Shard. Come back when you do.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithBlueShard::
# 280 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't look like you have a Blue\n"
	.string "Shard. Come back when you do.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithGreenShard::
# 285 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't look like you have a Green\n"
	.string "Shard. Come back when you do.$"

FallarborTown_MoveRelearnersHouse_Text_NoRoomForThisEgg::
# 290 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
	.string "There's no room for this Egg.$"

FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg::
# 295 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} received the Egg.$"
