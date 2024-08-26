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
	goto_if_unset FLAG_BADGE04_GET, FallarborTown_MoveRelearnersHouse_EventScript_NeedLavaBadge
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TMS_FROM_TUTOR, FallarborTown_MoveRelearnersHouse_EventScript_ReceivedTms
# 13 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_DRAGON_CLAW
# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_THUNDER
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_TELEPORT
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_FIRE_BLAST
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_POLTERGEIST
# 19 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_THUNDER_WAVE
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_IRON_HEAD
# 21 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_LIQUIDATION
# 22 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_HYDRO_PUMP
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_DRILL_RUN
# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_BLAZE_KICK
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_ZEN_HEADBUTT
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_WEATHER_BALL
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_AIR_SLASH
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_HEX
# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_MYSTICAL_FIRE
# 30 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_SEED_BOMB
# 31 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_LEAF_BLADE
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_KNOCK_OFF
# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_POWER_GEM
# 34 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_ROCK_BLAST
# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_PIN_MISSILE
# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_ICICLE_SPEAR
# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_TAIL_SLAP
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_ARM_THRUST
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_FOUL_PLAY
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_IRON_DEFENSE
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_BODY_SLAM
# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_PLAY_ROUGH
# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_RECEIVED_TMS_FROM_TUTOR
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ReceivedSeveralTMs, MSGBOX_DEFAULT
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ExplainTms, MSGBOX_DEFAULT
# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
# 49 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NeedLavaBadge::
# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutorPreLava, MSGBOX_DEFAULT
# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ReceivedTms::
# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_NowYoureAMoveTutor, MSGBOX_DEFAULT
# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ExplainTms:
# 63 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "That's all the moves that I knew how to\n"
# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach. Here, I'll even list them off, I\l"
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "just gave you the TMs for:\p"
# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Dragon Claw, Thunder, Teleport, Fire\n"
# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Blast, Poltergeist, Thunder Wave, Iron\l"
# 68 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Head, Liquidation, Hydro Pump, Drill Run,\l"
# 69 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Blaze Kick, Zen Headbutt, Weather Ball,\l"
# 70 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Air Slash, Hex, Mystical Fire, Seed Bomb,\l"
# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Leaf Blade, Knock Off, Power Gem, Rock\l"
# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Blast, Pin Missile, Icicle Spear, Tail\l"
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Slap, Arm Thrust, Foul Play, Iron\l"
# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Defense, Body Slam, and Play Rough.\p"
# 75 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Now you can take those moves with you\n"
# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "and teach them to your Pokémon\l"
# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "wherever you are!$"
# 78 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_NowYoureAMoveTutor:
# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Now YOU'RE a Move Tutor! Hah!$"
# 81 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 82 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ReceivedSeveralTMs::
# 83 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} received several TMs!$"
# 84 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 85 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 86 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearnerOriginal::
# 87 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 88 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
# 89 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 90 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 91 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 93 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 94 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
# 95 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 96 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_RESULT
# 97 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 98 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 99 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 100 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 101 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 102 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 103 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 104 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 105 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 106 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 107 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
# 108 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
# 109 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
# 110 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 111 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 112 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 113 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 114 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 115 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 116 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 117 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
# 118 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 119 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 120 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 121 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
# 122 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 123 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 124 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 125 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 126 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
# 127 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 128 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 129 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 130 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 131 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 132 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 133 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
# 134 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 135 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 136 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutorPreLava:
# 137 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm the Move Tutor.\n"
# 138 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Or at least I used to be. I got tired of\l"
# 139 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "collecting Heart Scales and teaching\l"
# 140 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Pokémon the same moves over and over\l"
# 141 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "again, and trainers got tired of coming\l"
# 142 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "all the way out here just to have me\l"
# 143 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach them moves. So, I solved both\l"
# 144 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "problems by making these!\p"
# 145 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hmm, on second thought, you don't even\n"
# 146 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "4 Badges yet.\p"
# 147 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm not sure you're ready for all of\n"
# 148 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "these TMs I've made.\p"
# 149 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Come back once you've got 4 Badges\n"
# 150 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "and we'll talk.$"
# 151 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 152 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
# 153 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Well, well, look at you!\n"
# 154 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I see you've got 4 Badges now, I think\l"
# 155 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "that means you're ready for these.$"
# 156 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 157 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
# 158 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh! That's it! That's an honest to\n"
# 159 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "goodness Heart Scale!\p"
# 160 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Let me guess, you want me to teach\n"
# 161 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "a move?$"
# 162 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 163 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
# 164 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which Pokémon needs tutoring?$"
# 165 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 166 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
# 167 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move should I teach?$"
# 168 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 169 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
# 170 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Sorry…\p"
# 171 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't appear as if I have any move\n"
# 172 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach that Pokémon.$"
# 173 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 174 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
# 175 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} handed over one Heart Scale\n"
# 176 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "in exchange.$"
# 177 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 178 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
# 179 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "If your Pokémon need to learn a move,\n"
# 180 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "come back with a Heart Scale.$"
# 181 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 182 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
# 183 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hunh? There isn't a single move that\n"
# 184 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach an Egg.$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive::
# 189 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 190 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	faceplayer
# 191 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
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
