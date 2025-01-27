# 1 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 2 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
.set LOCALID_MOVE_RELEARNER, 1
# 3 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
.set LOCALID_EGG_MAN, 2
# 4 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 5 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 6 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_MapScripts::
# 7 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.byte 0
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 9 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
# 10 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lock
# 11 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	faceplayer
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, FallarborTown_MoveRelearnersHouse_EventScript_NeedLavaBadge
# 13 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TMS_FROM_TUTOR, FallarborTown_MoveRelearnersHouse_EventScript_ReceivedTms
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_DRAGON_CLAW
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_THUNDER
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_TELEPORT
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_FIRE_BLAST
# 19 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_POLTERGEIST
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_THUNDER_WAVE
# 21 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_IRON_HEAD
# 22 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_LIQUIDATION
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_HYDRO_PUMP
# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_DRILL_RUN
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_BLAZE_KICK
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_ZEN_HEADBUTT
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_WEATHER_BALL
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_AIR_SLASH
# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_HEX
# 30 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_MYSTICAL_FIRE
# 31 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_SEED_BOMB
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_LEAF_BLADE
# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_KNOCK_OFF
# 34 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_POWER_GEM
# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_ROCK_BLAST
# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_PIN_MISSILE
# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_ICICLE_SPEAR
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_TAIL_SLAP
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_ARM_THRUST
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_FOUL_PLAY
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_IRON_DEFENSE
# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_BODY_SLAM
# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_PLAY_ROUGH
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_RECEIVED_TMS_FROM_TUTOR
# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ReceivedSeveralTMs, MSGBOX_DEFAULT
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ExplainTms, MSGBOX_DEFAULT
# 49 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NeedLavaBadge::
# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutorPreLava, MSGBOX_DEFAULT
# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ReceivedTms::
# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_NowYoureAMoveTutor, MSGBOX_DEFAULT
# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 63 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ExplainTms:
# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "That's all the moves that I knew how to\n"
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach. Here, I'll even list them off, I\l"
# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "just gave you the TMs for:\p"
# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Dragon Claw, Thunder, Teleport, Fire\n"
# 68 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Blast, Poltergeist, Thunder Wave, Iron\l"
# 69 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Head, Liquidation, Hydro Pump, Drill Run,\l"
# 70 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Blaze Kick, Zen Headbutt, Weather Ball,\l"
# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Air Slash, Hex, Mystical Fire, Seed Bomb,\l"
# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Leaf Blade, Knock Off, Power Gem, Rock\l"
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Blast, Pin Missile, Icicle Spear, Tail\l"
# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Slap, Arm Thrust, Foul Play, Iron\l"
# 75 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Defense, Body Slam, and Play Rough.\p"
# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Now you can take those moves with you\n"
# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "and teach them to your Pokémon\l"
# 78 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "wherever you are!$"
# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_NowYoureAMoveTutor:
# 81 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Now YOU'RE a Move Tutor! Hah!$"
# 82 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 83 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ReceivedSeveralTMs::
# 84 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} received several TMs!$"
# 85 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 86 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 87 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearnerOriginal::
# 88 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 89 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
# 90 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 91 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
# 93 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 94 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 95 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
# 96 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 97 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 99 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 100 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 101 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 102 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 103 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 104 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 105 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 106 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 107 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 108 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
# 109 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
# 110 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
# 111 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 112 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 113 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 114 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 115 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 116 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 117 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 118 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
# 119 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 120 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 121 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 122 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
# 123 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 124 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 125 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 126 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 127 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
# 128 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 129 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 130 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 131 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 132 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 133 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 134 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
# 135 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 136 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 137 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutorPreLava:
# 138 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm the Move Tutor.\n"
# 139 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Or at least I used to be. I got tired of\l"
# 140 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "collecting Heart Scales and teaching\l"
# 141 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Pokémon the same moves over and over\l"
# 142 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "again, and trainers got tired of coming\l"
# 143 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "all the way out here just to have me\l"
# 144 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach them moves. So, I solved both\l"
# 145 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "problems by making these!\p"
# 146 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hmm, on second thought, you don't even\n"
# 147 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "4 Badges yet.\p"
# 148 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm not sure you're ready for all of\n"
# 149 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "these TMs I've made.\p"
# 150 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Come back once you've got 4 Badges\n"
# 151 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "and we'll talk.$"
# 152 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 153 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
# 154 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Well, well, look at you!\n"
# 155 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I see you've got 4 Badges now, I think\l"
# 156 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "that means you're ready for these.$"
# 157 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 158 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
# 159 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh! That's it! That's an honest to\n"
# 160 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "goodness Heart Scale!\p"
# 161 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Let me guess, you want me to teach\n"
# 162 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "a move?$"
# 163 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 164 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
# 165 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which Pokémon needs tutoring?$"
# 166 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 167 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
# 168 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move should I teach?$"
# 169 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 170 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
# 171 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Sorry…\p"
# 172 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't appear as if I have any move\n"
# 173 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach that Pokémon.$"
# 174 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 175 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
# 176 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} handed over one Heart Scale\n"
# 177 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "in exchange.$"
# 178 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 179 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
# 180 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "If your Pokémon need to learn a move,\n"
# 181 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "come back with a Heart Scale.$"
# 182 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 183 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
# 184 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hunh? There isn't a single move that\n"
# 185 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach an Egg.$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive::
# 190 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lock
# 191 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	faceplayer
# 192 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EggManIntro
# 194 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_0, ITEM_RED_SHARD
# 195 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_1, ITEM_BLUE_SHARD
# 196 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_2, ITEM_GREEN_SHARD
# 197 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_3, MULTI_B_PRESSED
# 200 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 202 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_2
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_1:
# 207 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_RED_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_5
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_4:
# 211 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_BLUE_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_8
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_7:
# 216 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_GREEN_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_11
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_10:
# 221 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_2:
# 204 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_EggManNo
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_1

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_5:
# 209 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_4

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_8:
# 213 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveWaterEgg
# 214 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_7

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_11:
# 218 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveGrassEgg
# 219 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_10


FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg::
# 227 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_RED_SHARD
# 228 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithRedShard
# 229 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 230 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 231 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 232 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 233 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 234 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 235 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_CHARMANDER
# 236 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_RED_SHARD
# 237 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 238 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_GiveWaterEgg::
# 243 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 244 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithBlueShard
# 245 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 246 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 247 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 248 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 249 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 250 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 251 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_SQUIRTLE
# 252 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_BLUE_SHARD
# 253 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 254 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_GiveGrassEgg::
# 259 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 260 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithGreenShard
# 261 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 262 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 263 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 264 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 265 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 266 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 267 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_BULBASAUR
# 268 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_GREEN_SHARD
# 269 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 270 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_EggManNo::
# 275 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_EggManNo_Text_0
# 276 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithRedShard::
# 281 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithRedShard, MSGBOX_DEFAULT
# 282 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithBlueShard::
# 287 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithBlueShard, MSGBOX_DEFAULT
# 288 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithGreenShard::
# 293 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithGreenShard, MSGBOX_DEFAULT
# 294 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg::
# 299 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 300 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_0:
# 194 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Fire$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_1:
# 195 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Water$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_2:
# 196 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Grass$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_3:
# 197 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Cancel$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4:
# 214 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Come back if you have more shards!$"

FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0:
# 231 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "A wise choice. Here you go.$"

FallarborTown_MoveRelearnersHouse_EventScript_EggManNo_Text_0:
# 275 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I see. Come back when you\nwant a starter egg.$"

EggManIntro::
# 307 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hello, I am a shard collector. If you\n"
	.string "give me a Red Shard, I can give you an\l"
	.string "Egg for a Fire-type starter Pokémon.\p"
	.string "I can do the same with Blue Shards and\n"
	.string "Green Shards for the other types of\l"
	.string "starters.\p"
	.string "Which type of Egg do you want?$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithRedShard::
# 318 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't look like you have a Red\n"
	.string "Shard. Come back when you do.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithBlueShard::
# 323 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't look like you have a Blue\n"
	.string "Shard. Come back when you do.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithGreenShard::
# 328 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't look like you have a Green\n"
	.string "Shard. Come back when you do.$"

FallarborTown_MoveRelearnersHouse_Text_NoRoomForThisEgg::
# 333 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
	.string "There's no room for this Egg.$"

FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg::
# 338 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} received the Egg.$"
