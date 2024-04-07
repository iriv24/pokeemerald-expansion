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

# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm the Move Tutor.\n"
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Or at least I used to be. I got tired of\p"
# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "collecting Heart Scales and teaching\n"
# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Pokémon the same moves over and over\p"
# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "again, and trainers got tired of coming\n"
# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "all the way out here just to have me\p"
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach them moves. So, I solved both\n"
# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "problems by making these!$"
# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ExplainTms:
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "That's all the moves that I knew how to\n"
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach. Now you can take them with you\p"
# 63 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "and teach them to your Pokémon\n"
# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "wherever you are!$"
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_NowYoureAMoveTutor:
# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Now you're a Move Tutor! Hah!$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive::
# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	faceplayer
# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 75 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EggManIntro
# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_0, ITEM_RED_SHARD
# 78 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_1, ITEM_BLUE_SHARD
# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_2, ITEM_GREEN_SHARD
# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_3, MULTI_B_PRESSED
# 83 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 85 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_2
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_1:
# 90 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_RED_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_5
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_4:
# 94 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_BLUE_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_8
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_7:
# 99 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_GREEN_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_11
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_10:
# 104 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_2:
# 87 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_EggManNo
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_1

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_5:
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_4

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_8:
# 96 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveWaterEgg
# 97 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_7

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_11:
# 101 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveGrassEgg
# 102 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_10


FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg::
# 110 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_RED_SHARD
# 111 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithRedShard
# 112 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 113 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 114 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 115 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 116 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 117 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 118 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_CHARMANDER
# 119 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_RED_SHARD
# 120 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 121 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_GiveWaterEgg::
# 126 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 127 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithBlueShard
# 128 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 129 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 130 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 131 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 132 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 133 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 134 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_SQUIRTLE
# 135 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_BLUE_SHARD
# 136 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 137 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_GiveGrassEgg::
# 142 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 143 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithGreenShard
# 144 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 145 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 146 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 147 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 148 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 149 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 150 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_BULBASAUR
# 151 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_GREEN_SHARD
# 152 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 153 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_EggManNo::
# 158 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_EggManNo_Text_0
# 159 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithRedShard::
# 164 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithRedShard, MSGBOX_DEFAULT
# 165 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithBlueShard::
# 170 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithBlueShard, MSGBOX_DEFAULT
# 171 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithGreenShard::
# 176 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithGreenShard, MSGBOX_DEFAULT
# 177 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg::
# 182 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 183 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_0:
# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Fire$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_1:
# 78 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Water$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_2:
# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Grass$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_3:
# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Cancel$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4:
# 97 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Come back if you have more shards!$"

FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0:
# 114 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "A wise choice. Here you go.$"

FallarborTown_MoveRelearnersHouse_EventScript_EggManNo_Text_0:
# 158 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I see. Come back when you\nwant a starter egg.$"

EggManIntro::
# 190 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hello, I am a shard collector. If you\n"
	.string "give me a Red Shard, I can give you an\p"
	.string "Egg for a Fire-type Starter Pokémon. I\n"
	.string "can do the same with Blue Shards and\p"
	.string "Green Shards for the other types of\n"
	.string "starters.\l"
	.string "Which type of Egg do you want?$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithRedShard::
# 201 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't look like you have a Red\n"
	.string "Shard. Come back when you do.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithBlueShard::
# 206 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't look like you have a Blue\n"
	.string "Shard. Come back when you do.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithGreenShard::
# 211 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't look like you have a Green\n"
	.string "Shard. Come back when you do.$"

FallarborTown_MoveRelearnersHouse_Text_NoRoomForThisEgg::
# 216 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
	.string "There's no room for this Egg.$"

FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg::
# 221 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} received the Egg.$"
