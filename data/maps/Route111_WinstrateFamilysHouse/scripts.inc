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
	giveitem ITEM_STEELIXITE
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_CAMERUPTITE
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_MAWILITE
# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_HOUNDOOMINITE
# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_PINSIRITE
# 43 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_SLOWBRONITE
# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_SCIZORITE
# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_AERODACTYLITE
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_MANECTITE
# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_GALLADITE
# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MEGA_STONES
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_ReceivedMegaStones::
# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
# 54 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 56 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 57 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 60 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VIVI
# 61 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 62 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 63 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 64 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 65 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 68 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICKY
# 69 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
# 70 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 71 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 72 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 73 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 74 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 75 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
# 76 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
# 77 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 78 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 79 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 80 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
# 81 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 82 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
# 83 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	release
# 85 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 86 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 87 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
# 88 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "You're the first TRAINER I've seen who\n"
# 89 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "deploys POKéMON so masterfully.\p"
# 90 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But, I should tell you--my son is\n"
# 91 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "stronger than you.\p"
# 92 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He even took the POKéMON LEAGUE\n"
# 93 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "challenge, I'll have you know.$"
# 94 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 95 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMegaStones:
# 96 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "We've got a nice collection of Mega\n"
# 97 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Stones amassed here. We gave one set\p"
# 98 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "to my son when he went to go take on\n"
# 99 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "the Elite 4. I'm not sure I believe\p"
# 100 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "you're as strong as he is, but they may\n"
# 101 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "prove helpful to you anyway.$"
# 102 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 103 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
# 104 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "When it comes to POKéMON battles,\n"
# 105 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "we tend to be pretty passionate.$"
# 106 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 107 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
# 108 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mommy is stronger than Daddy.\p"
# 109 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I'm stronger than Mommy.\p"
# 110 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "And Grandma's stronger than me!\p"
# 111 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But my big brother is even stronger\n"
# 112 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "than Grandma.$"
# 113 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 114 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
# 115 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "There's no question that you're strong.\p"
# 116 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But if you were to battle my grandson,\n"
# 117 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "you'd end up crying in frustration.\p"
# 118 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He's much stronger than any TRAINER\n"
# 119 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "our family knows.\p"
# 120 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He must be challenging the POKéMON\n"
# 121 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "LEAGUE CHAMPION by now.\p"
# 122 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 123 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CHAMPION already!$"
# 124 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 125 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
# 126 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "My grandson must be challenging the\n"
# 127 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "POKéMON LEAGUE CHAMPION by now.\p"
# 128 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 129 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CHAMPION already!$"
