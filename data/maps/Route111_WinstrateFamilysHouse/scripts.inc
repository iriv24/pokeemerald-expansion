# 1 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 2 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VIVI, 1
# 3 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICTOR, 2
# 4 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICTORIA, 3
# 5 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICKY, 4
# 6 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 7 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_MapScripts::
# 8 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.byte 0
# 9 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 10 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victor::
# 11 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 12 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTOR
# 14 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
# 15 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 16 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 17 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 18 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria::
# 19 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 20 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 21 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTORIA
# 22 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_MEGA_STONES, Route111_WinstrateFamilysHouse_EventScript_ReceivedMegaStones
# 23 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMegaStones, MSGBOX_DEFAULT
# 24 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_ALAKAZITE
# 25 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_KANGASKHANITE
# 26 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_AUDINITE
# 27 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_GARDEVOIRITE
# 28 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_ABSOLITE
# 29 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_SHARPEDONITE
# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_HERACRONITE
# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_LOPUNNITE
# 32 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_PIDGEOTITE
# 33 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_BEEDRILLITE
# 34 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_GLALITITE
# 35 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_ABOMASITE
# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_MEDICHAMITE
# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_AGGRONITE
# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_CAMERUPTITE
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_MAWILITE
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_HOUNDOOMINITE
# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_PINSIRITE
# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_COALOSSITE
# 43 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_SLOWBRONITE
# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_ORBEETLITE
# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_SCIZORITE
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_AERODACTYLITE
# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_GALLADITE
# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_CENTISKITE
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_SANDACONDITE
# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_APPLITE
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MEGA_STONES
# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 54 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_ReceivedMegaStones::
# 56 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
# 57 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 60 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 61 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 62 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 63 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VIVI
# 64 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 65 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 68 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 69 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 70 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 71 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICKY
# 72 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
# 73 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 74 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 75 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 76 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 77 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 78 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
# 79 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
# 80 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 81 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 82 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 83 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
# 84 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 85 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
# 86 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	release
# 88 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 89 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 90 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
# 91 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "You're the first TRAINER I've seen who\n"
# 92 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "deploys POKéMON so masterfully.\p"
# 93 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But, I should tell you--my son is\n"
# 94 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "stronger than you.\p"
# 95 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He even took the POKéMON LEAGUE\n"
# 96 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "challenge, I'll have you know.$"
# 97 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 98 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMegaStones:
# 99 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "We've got a nice collection of Mega\n"
# 100 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Stones amassed here. We gave one set\p"
# 101 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "to my son when he went to go take on\n"
# 102 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "the Elite 4. I'm not sure I believe\p"
# 103 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "you're as strong as he is, but they may\n"
# 104 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "prove helpful to you anyway.$"
# 105 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 106 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
# 107 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "When it comes to POKéMON battles,\n"
# 108 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "we tend to be pretty passionate.$"
# 109 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 110 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
# 111 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mommy is stronger than Daddy.\p"
# 112 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I'm stronger than Mommy.\p"
# 113 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "And Grandma's stronger than me!\p"
# 114 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But my big brother is even stronger\n"
# 115 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "than Grandma.$"
# 116 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 117 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
# 118 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "There's no question that you're strong.\p"
# 119 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But if you were to battle my grandson,\n"
# 120 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "you'd end up crying in frustration.\p"
# 121 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He's much stronger than any TRAINER\n"
# 122 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "our family knows.\p"
# 123 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He must be challenging the POKéMON\n"
# 124 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "LEAGUE CHAMPION by now.\p"
# 125 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 126 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CHAMPION already!$"
# 127 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 128 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
# 129 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "My grandson must be challenging the\n"
# 130 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "POKéMON LEAGUE CHAMPION by now.\p"
# 131 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 132 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CHAMPION already!$"
