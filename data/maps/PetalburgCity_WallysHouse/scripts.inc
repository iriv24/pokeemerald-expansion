# 1 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 2 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
.set LOCALID_WALLYS_DAD, 1
# 3 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 4 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_MapScripts::
# 5 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_OnFrame
# 6 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
# 7 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 9 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnWarp:
# 10 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther
# 11 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 12 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 13 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
# 14 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 15 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_WALLYS_DAD, DIR_WEST
# 16 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 17 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 18 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnFrame:
# 19 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_GiveHMSurf
# 20 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 21 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 22 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_GiveHMSurf::
# 23 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lockall
# 24 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs, MSGBOX_DEFAULT
# 25 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_TM_METEOR_BEAM
# 26 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_TM_DRAGON_PULSE
# 27 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_TM_DUAL_CHOP
# 28 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_TM_FUTURE_SIGHT
# 29 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_TM_DUAL_WINGBEAT
# 30 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_HM_SURF
# 31 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 32 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces, MSGBOX_DEFAULT
# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	closemessage
# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	delay 30
# 36 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 37 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 39 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 40 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	waitfanfare
# 41 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	closemessage
# 42 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	delay 30
# 43 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	releaseall
# 44 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad::
# 47 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 48 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 49 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
# 50 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf
# 51 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_PlayedWithWally
# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
# 54 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 55 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 56 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 57 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf::
# 58 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
# 59 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 60 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 61 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 62 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
# 63 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
# 64 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 65 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 66 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 67 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayedWithWally::
# 68 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
# 69 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 70 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 71 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 72 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom::
# 73 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 74 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 75 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf
# 76 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
# 77 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 78 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 79 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 80 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf::
# 81 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
# 82 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 83 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 84 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 85 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally:
# 86 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You're…\n"
# 87 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ah, you must be {PLAYER}{KUN}, right?\p"
# 88 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Thank you for playing with Wally a\n"
# 89 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "little while ago.\p"
# 90 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He's been frail and sickly ever\n"
# 91 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "since he was a baby.\p"
# 92 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "We've sent him to stay with my relatives\n"
# 93 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "in Verdanturf Town for a while.\p"
# 94 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "The air is a lot cleaner there\n"
# 95 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "than it is here.\p"
# 96 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "What's that? Where's Wally?\n"
# 97 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He's already left, our Wally.\p"
# 98 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder where he could have\n"
# 99 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "gotten by now?$"
# 100 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 101 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
# 102 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder how our Wally is doing?$"
# 103 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 104 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_PleaseExcuseUs:
# 105 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "{PLAYER}{KUN}! Please excuse us for\n"
# 106 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "dragging you here this way.\p"
# 107 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "But our Wally's become very healthy\n"
# 108 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "since he went to Verdanturf Town.\p"
# 109 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "We owe it all to you!\p"
# 110 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "When Wally left town, you helped\n"
# 111 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "him catch a Pokémon, right?\p"
# 112 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I think that made Wally really\n"
# 113 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "happy.\p"
# 114 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Actually, not just Wally.\n"
# 115 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "It made me, his father, happy too.\p"
# 116 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Happy that he's gained such a great\n"
# 117 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "friend as you.\p"
# 118 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Now that you defeated Norman, your\n"
# 119 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "next stop should be Fortree City!\l"
# 120 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Which means you'll need to Surf to\l"
# 121 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "cross Route 118.\p"
# 122 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "To thank you, I'd like you to have\n"
# 123 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "this HM03 Surf as well as those TMs!$"
# 124 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 125 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces:
# 126 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Bit of an odd collection of TMs, I know,\n"
# 127 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "but I figured you'd know how to use them!$"
# 128 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 129 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
# 130 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm excited to see how far you will\n"
# 131 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "go {PLAYER}{KUN}!$"
# 132 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 133 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
# 134 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh? You met Wally in\n"
# 135 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Victory Road?\p"
# 136 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh, {PLAYER}{KUN}, don't be silly.\p"
# 137 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He may have gotten healthy, but he\n"
# 138 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "can't go somewhere far away like\l"
# 139 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "that all by himself.$"
# 140 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 141 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
# 142 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally was really happy when he told\n"
# 143 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "us that he caught a Pokémon.\p"
# 144 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "It's been ages since I've seen him\n"
# 145 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "smile like that.$"
# 146 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 147 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
# 148 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I want you to keep this a secret\n"
# 149 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "from my husband…\p"
# 150 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "But our Wally left Verdanturf Town\n"
# 151 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "without telling anyone.\p"
# 152 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You know, Wally is frail, but\n"
# 153 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "he's surprisingly strong-willed.\p"
# 154 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm sure that he'll come back safe\n"
# 155 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "and sound one day!$"
