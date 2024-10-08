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
	goto_if_set FLAG_IS_CHAMPION, Route111_WinstrateFamilysHouse_GiveMysticTicket
# 15 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
# 16 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 17 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 18 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 19 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_GiveMysticTicket::
# 20 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_ENABLE_SHIP_NAVEL_ROCK, Route111_WinstrateFamilysHouse_AlreadyGaveMysticTicket
# 21 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_TakeMysticTicket, MSGBOX_DEFAULT
# 22 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
# 23 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
# 24 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_BeSafeTicket, MSGBOX_DEFAULT
# 25 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 26 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 27 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 28 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_AlreadyGaveMysticTicket::
# 29 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_BeSafeTicket, MSGBOX_DEFAULT
# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 32 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 33 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria::
# 34 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 35 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTORIA
# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_MEGA_STONES, Route111_WinstrateFamilysHouse_EventScript_ReceivedMegaStones
# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMegaStones, MSGBOX_DEFAULT
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ALAKAZITE
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_KANGASKHANITE
# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_AUDINITE
# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_GARDEVOIRITE
# 43 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ABSOLITE
# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SHARPEDONITE
# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_HERACRONITE
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_LOPUNNITE
# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_PIDGEOTITE
# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_BEEDRILLITE
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_GLALITITE
# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ABOMASITE
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_MEDICHAMITE
# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_AGGRONITE
# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_CAMERUPTITE
# 54 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_MAWILITE
# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_HOUNDOOMINITE
# 56 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_PINSIRITE
# 57 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_COALOSSITE
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SLOWBRONITE
# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ORBEETLITE
# 60 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SCIZORITE
# 61 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_AERODACTYLITE
# 62 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_GALLADITE
# 63 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_CENTISKITE
# 64 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SANDACONDITE
# 65 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_APPLITE
# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MEGA_STONES
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 68 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_ReceivedSeveralMegaStones, MSGBOX_DEFAULT
# 69 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitfanfare
# 70 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_ExplainMegaStones, MSGBOX_DEFAULT
# 71 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 72 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 73 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 74 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_ReceivedMegaStones::
# 75 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
# 76 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 77 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 78 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 79 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 80 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 81 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 82 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VIVI
# 83 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 84 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 85 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 86 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 87 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 88 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 89 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 90 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICKY
# 91 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
# 92 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 93 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 94 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 95 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 96 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 97 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
# 98 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
# 99 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 100 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 101 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 102 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
# 103 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 104 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
# 105 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	release
# 107 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 108 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 109 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
# 110 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "You're the first trainer I've seen who\n"
# 111 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "deploys Pokémon so masterfully.\p"
# 112 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But, I should tell you--my son is\n"
# 113 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "stronger than you.\p"
# 114 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He even took the Pokémon League\n"
# 115 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "challenge, I'll have you know.$"
# 116 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 117 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_TakeMysticTicket:
# 118 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Oh my, you took on the Pokémon League?\n"
# 119 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "And you won?!\p"
# 120 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Not even my son was strong enough to\n"
# 121 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "do that…\p"
# 122 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I was going to give this to my son once\n"
# 123 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "he became the Champion, but since you\l"
# 124 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "beat him to it…\p"
# 125 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Here, take this, I've been holding onto\n"
# 126 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "it for too long, and I'm afraid it will\l"
# 127 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "never get used at this rate.$"
# 128 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 129 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_BeSafeTicket:
# 130 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I've always wondered where that\n"
# 131 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "ticket leads.\p"
# 132 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Be safe out there, new Champion.$"
# 133 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 134 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMegaStones:
# 135 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "We've got a nice collection of Mega\n"
# 136 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Stones amassed here.\p"
# 137 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "We gave one set to my son when he went\n"
# 138 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "to go take on the Elite 4.\p"
# 139 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I'm not sure I believe you're as strong\n"
# 140 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "as he is, but they may prove helpful to\l"
# 141 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "you anyway.$"
# 142 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 143 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
# 144 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "When it comes to Pokémon battles,\n"
# 145 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "we tend to be pretty passionate.$"
# 146 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 147 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
# 148 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mommy is stronger than Daddy.\p"
# 149 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I'm stronger than Mommy.\p"
# 150 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "And Grandma's stronger than me!\p"
# 151 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But my big brother is even stronger\n"
# 152 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "than Grandma.$"
# 153 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 154 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
# 155 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "There's no question that you're strong.\p"
# 156 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But if you were to battle my grandson,\n"
# 157 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "you'd end up crying in frustration.\p"
# 158 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He's much stronger than any trainer\n"
# 159 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "our family knows.\p"
# 160 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He must be challenging the Pokémon\n"
# 161 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "League Champion by now.\p"
# 162 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 163 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Champion already!$"
# 164 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 165 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
# 166 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "My grandson must be challenging the\n"
# 167 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Pokémon League Champion by now.\p"
# 168 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 169 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Champion already!$"
# 170 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 171 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_ReceivedSeveralMegaStones::
# 172 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "{PLAYER} received several Mega Stones!$"
# 173 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 174 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_ExplainMegaStones:
# 175 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Those are all the Mega Stones that we\n"
# 176 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "have collected, which included the:\p"
# 177 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Alakazite, Kangaskhanite, Audinite,\n"
# 178 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Gardevoirite, Absolite, Sharpedonite,\l"
# 179 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Heracronite, Lopunnite, Pidgeotite,\l"
# 180 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Beedrillite, Glalite, Abomasite,\l"
# 181 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Medichamite, Aggronite, Cameruptite,\l"
# 182 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mawilite, Houndoominite, Pinsirite,\l"
# 183 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Coalossite, Slowbronite, Orbeetlite,\l"
# 184 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Scizorite, Aerodactylite, Galladite,\l"
# 185 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Centiskite, Sandacondite, and Applite.\p"
# 186 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Surely, those will make you a more\n"
# 187 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "powerful trainer.$"
