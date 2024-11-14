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
	setflag FLAG_RECEIVED_HM_SURF
# 31 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces, MSGBOX_DEFAULT
# 32 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	releaseall
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 36 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad::
# 37 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 39 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
# 40 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf
# 41 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_PlayedWithWally
# 42 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
# 43 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
# 44 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 47 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf::
# 48 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
# 49 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 50 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 51 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
# 53 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
# 54 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 55 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 56 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 57 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayedWithWally::
# 58 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
# 59 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 60 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 61 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 62 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom::
# 63 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 64 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 65 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf
# 66 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
# 67 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 68 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 69 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 70 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf::
# 71 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
# 72 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 73 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 74 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 75 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally:
# 76 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You're…\n"
# 77 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ah, you must be {PLAYER}{KUN}, right?\p"
# 78 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Thank you for playing with WALLY a\n"
# 79 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "little while ago.\p"
# 80 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He's been frail and sickly ever\n"
# 81 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "since he was a baby.\p"
# 82 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "We've sent him to stay with my relatives\n"
# 83 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "in VERDANTURF TOWN for a while.\p"
# 84 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "The air is a lot cleaner there\n"
# 85 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "than it is here.\p"
# 86 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "What's that? Where's WALLY?\n"
# 87 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He's already left, our WALLY.\p"
# 88 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder where he could have\n"
# 89 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "gotten by now?$"
# 90 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 91 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
# 92 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder how our WALLY is doing?$"
# 93 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 94 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_PleaseExcuseUs:
# 95 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "{PLAYER}{KUN}! Please excuse us for\n"
# 96 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "dragging you here this way.\p"
# 97 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "But our WALLY's become very healthy\n"
# 98 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "since he went to VERDANTURF TOWN.\p"
# 99 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "We owe it all to you!\p"
# 100 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "When WALLY left town, you helped\n"
# 101 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "him catch a Pokémon, right?\p"
# 102 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I think that made WALLY really\n"
# 103 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "happy.\p"
# 104 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Actually, not just WALLY.\n"
# 105 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "It made me, his father, happy too.\p"
# 106 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Happy that he's gained such a great\n"
# 107 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "friend as you.\p"
# 108 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Now, I feel terrible that I dropped the\n"
# 109 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "HM03 Surf that I was going to give to\l"
# 110 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "you out in the desert on Route 111.\p"
# 111 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I told some nice trainers to protect it\n"
# 112 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "as I scampered out of there, though, so\l"
# 113 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm sure it's safe and they'll let you\l"
# 114 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "right through!\p"
# 115 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "To make it up to you, please take these!$"
# 116 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 117 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 118 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces:
# 119 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Bit of an odd collection of TMs, I know,\n"
# 120 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "but I figured it's better than nothing!$"
# 121 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 122 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
# 123 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "WALLY's coming home soon.\n"
# 124 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm looking forward to that.$"
# 125 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 126 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
# 127 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh? You met WALLY in\n"
# 128 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "EVER GRANDE CITY?\p"
# 129 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh, {PLAYER}{KUN}, don't be silly.\p"
# 130 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He may have gotten healthy, but he\n"
# 131 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "can't go somewhere far away like\l"
# 132 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "that all by himself.$"
# 133 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 134 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
# 135 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "WALLY was really happy when he told\n"
# 136 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "us that he caught a Pokémon.\p"
# 137 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "It's been ages since I've seen him\n"
# 138 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "smile like that.$"
# 139 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 140 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
# 141 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I want you to keep this a secret\n"
# 142 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "from my husband…\p"
# 143 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "But our WALLY left VERDANTURF TOWN\n"
# 144 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "without telling anyone.\p"
# 145 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You know, WALLY is frail, but\n"
# 146 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "he's surprisingly strong-willed.\p"
# 147 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm sure that he'll come back safe\n"
# 148 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "and sound one day!$"
