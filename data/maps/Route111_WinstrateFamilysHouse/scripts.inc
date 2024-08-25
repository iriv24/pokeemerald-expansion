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
	giveitemfast ITEM_ALAKAZITE
# 25 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_KANGASKHANITE
# 26 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_AUDINITE
# 27 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_GARDEVOIRITE
# 28 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ABSOLITE
# 29 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SHARPEDONITE
# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_HERACRONITE
# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_LOPUNNITE
# 32 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_PIDGEOTITE
# 33 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_BEEDRILLITE
# 34 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_GLALITITE
# 35 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ABOMASITE
# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_MEDICHAMITE
# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_AGGRONITE
# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_CAMERUPTITE
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_MAWILITE
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_HOUNDOOMINITE
# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_PINSIRITE
# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_COALOSSITE
# 43 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SLOWBRONITE
# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ORBEETLITE
# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SCIZORITE
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_AERODACTYLITE
# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_GALLADITE
# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_CENTISKITE
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SANDACONDITE
# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_APPLITE
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MEGA_STONES
# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_ReceivedSeveralMegaStones, MSGBOX_DEFAULT
# 54 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitfanfare
# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_ExplainMegaStones, MSGBOX_DEFAULT
# 56 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 57 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_ReceivedMegaStones::
# 60 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
# 61 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 62 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 63 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 64 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 65 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VIVI
# 68 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 69 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 70 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 71 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 72 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 73 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 74 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 75 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICKY
# 76 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
# 77 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 78 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 79 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 80 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 81 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 82 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
# 83 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
# 84 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 85 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 86 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 87 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
# 88 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 89 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
# 90 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	release
# 92 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 93 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 94 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
# 95 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "You're the first trainer I've seen who\n"
# 96 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "deploys Pokémon so masterfully.\p"
# 97 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But, I should tell you--my son is\n"
# 98 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "stronger than you.\p"
# 99 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He even took the Pokémon League\n"
# 100 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "challenge, I'll have you know.$"
# 101 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 102 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMegaStones:
# 103 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "We've got a nice collection of Mega\n"
# 104 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Stones amassed here.\p"
# 105 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "We gave one set to my son when he went\n"
# 106 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "to go take on the Elite 4.\p"
# 107 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I'm not sure I believe you're as strong\n"
# 108 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "as he is, but they may prove helpful to\l"
# 109 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "you anyway.$"
# 110 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 111 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
# 112 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "When it comes to Pokémon battles,\n"
# 113 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "we tend to be pretty passionate.$"
# 114 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 115 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
# 116 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mommy is stronger than Daddy.\p"
# 117 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I'm stronger than Mommy.\p"
# 118 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "And Grandma's stronger than me!\p"
# 119 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But my big brother is even stronger\n"
# 120 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "than Grandma.$"
# 121 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 122 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
# 123 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "There's no question that you're strong.\p"
# 124 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But if you were to battle my grandson,\n"
# 125 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "you'd end up crying in frustration.\p"
# 126 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He's much stronger than any trainer\n"
# 127 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "our family knows.\p"
# 128 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He must be challenging the Pokémon\n"
# 129 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "League Champion by now.\p"
# 130 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 131 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Champion already!$"
# 132 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 133 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
# 134 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "My grandson must be challenging the\n"
# 135 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Pokémon League Champion by now.\p"
# 136 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 137 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Champion already!$"
# 138 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 139 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_ReceivedSeveralMegaStones::
# 140 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "{PLAYER} received several Mega Stones!$"
# 141 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 142 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_ExplainMegaStones:
# 143 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Those are all the Mega Stones that we\n"
# 144 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "have collected, which included the:\p"
# 145 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Alakazite, Kangaskhanite, Audinite,\n"
# 146 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Gardevoirite, Absolite, Sharpedonite,\l"
# 147 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Heracronite, Lopunnite, Pidgeotite,\l"
# 148 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Beedrillite, Glalite, Abomasite,\l"
# 149 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Medichamite, Aggronite, Cameruptite,\l"
# 150 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mawilite, Houndoominite, Pinsirite,\l"
# 151 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Coalossite, Slowbronite, Orbeetlite,\l"
# 152 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Scizorite, Aerodactylite, Galladite,\l"
# 153 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Centiskite, Sandacondite, and Applite.\p"
# 154 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Surely, those will make you a more\n"
# 155 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "powerful trainer.$"
