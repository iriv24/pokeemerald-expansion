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
	goto_if_set FLAG_ENABLE_SHIP_BIRTH_ISLAND, Route111_WinstrateFamilysHouse_AlreadyGaveMysticTicket
# 21 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_TakeMysticTicket, MSGBOX_DEFAULT
# 22 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
# 23 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_AURORA_TICKET
# 24 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_EON_TICKET
# 25 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
# 26 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_ENABLE_SHIP_SOUTHERN_ISLAND
# 27 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
# 28 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_BeSafeTicket, MSGBOX_DEFAULT
# 29 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 32 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_AlreadyGaveMysticTicket::
# 33 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_BeSafeTicket, MSGBOX_DEFAULT
# 34 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 35 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_ReceivedMegaStones::
# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 43 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VIVI
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICKY
# 54 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 56 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 57 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 60 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
# 61 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
# 62 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 63 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 64 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 65 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
# 68 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	release
# 70 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 71 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 72 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
# 73 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "You're the first trainer I've seen who\n"
# 74 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "deploys Pokémon so masterfully.\p"
# 75 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But, I should tell you--my son is\n"
# 76 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "stronger than you.\p"
# 77 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He even took the Pokémon League\n"
# 78 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "challenge, I'll have you know.$"
# 79 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 80 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_TakeMysticTicket:
# 81 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Oh my, you took on the Pokémon League?\n"
# 82 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "And you won?!\p"
# 83 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Not even my son was strong enough to\n"
# 84 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "do that…\p"
# 85 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I was going to give this to my son once\n"
# 86 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "he became the Champion, but since you\l"
# 87 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "beat him to it…\p"
# 88 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Here, take this, I've been holding onto\n"
# 89 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "it for too long, and I'm afraid it will\l"
# 90 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "never get used at this rate.$"
# 91 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 92 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_BeSafeTicket:
# 93 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I've always wondered where that\n"
# 94 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "ticket leads.\p"
# 95 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Be safe out there, new Champion.$"
# 96 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 97 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMegaStones:
# 98 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "We've got a nice collection of Mega\n"
# 99 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Stones amassed here.\p"
# 100 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "We gave one set to my son when he went\n"
# 101 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "to go take on the Elite 4.\p"
# 102 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I'm not sure I believe you're as strong\n"
# 103 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "as he is, but they may prove helpful to\l"
# 104 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "you anyway.$"
# 105 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 106 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
# 107 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "When it comes to Pokémon battles,\n"
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
	.string "He's much stronger than any trainer\n"
# 122 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "our family knows.\p"
# 123 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He must be challenging the Pokémon\n"
# 124 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "League Champion by now.\p"
# 125 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 126 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Champion already!$"
# 127 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 128 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
# 129 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "My grandson must be challenging the\n"
# 130 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Pokémon League Champion by now.\p"
# 131 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 132 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Champion already!$"
# 133 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 134 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_ReceivedSeveralMegaStones::
# 135 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "{PLAYER} received several Mega Stones!$"
# 136 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 137 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_ExplainMegaStones:
# 138 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Those are some of the Mega Stones that\n"
# 139 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "we have collected over the years.\p"
# 140 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Surely, those will make you a more\n"
# 141 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "powerful trainer…\p"
# 142 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Oh that's not what you came here for?!\n"
# 143 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Goggles? Of course! You're the second\l"
# 144 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "promising kid to ask for some today.\l"
# 145 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Here you go!$"

Route111_WinstrateFamilysHouse_EventScript_Victoria::
# 149 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 150 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 151 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTORIA
# 152 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_MEGA_STONES, Route111_WinstrateFamilysHouse_EventScript_ReceivedMegaStones
# 153 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMegaStones, MSGBOX_DEFAULT
# 154 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_lt Route111_WinstrateFamilysHouse_EventScript_Victoria_2
Route111_WinstrateFamilysHouse_EventScript_Victoria_1:
# 172 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_AUDINITE
# 173 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SHARPEDONITE
# 174 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_PIDGEOTITE
# 175 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_GLALITITE
# 176 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ABOMASITE
# 177 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_CAMERUPTITE
# 178 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ORBEETLITE
# 179 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_COALOSSITE
# 180 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_CENTISKITE
# 181 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SANDACONDITE
# 182 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_APPLITE
# 183 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MEGA_STONES
# 184 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 185 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_ReceivedSeveralMegaStones, MSGBOX_DEFAULT
# 186 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitfanfare
# 187 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_ExplainMegaStones, MSGBOX_DEFAULT
# 188 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 189 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES
# 190 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 191 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_ExplainGoggles, MSGBOX_DEFAULT
# 192 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_Victoria_2:
# 155 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ALAKAZITE
# 156 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_KANGASKHANITE
# 157 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_GARDEVOIRITE
# 158 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ABSOLITE
# 159 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_HERACRONITE
# 160 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_LOPUNNITE
# 161 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_BEEDRILLITE
# 162 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_MEDICHAMITE
# 163 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_AGGRONITE
# 164 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_MAWILITE
# 165 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_HOUNDOOMINITE
# 166 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_PINSIRITE
# 167 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SLOWBRONITE
# 168 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SCIZORITE
# 169 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_AERODACTYLITE
# 170 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_GALLADITE
	goto Route111_WinstrateFamilysHouse_EventScript_Victoria_1


Route111_WinstrateFamilysHouse_Text_ExplainGoggles::
# 196 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Those Go-Goggles will let you get\n"
	.string "through the desert.\p"
	.string "I threw in some Safety Goggles as well,\n"
	.string "can never have too many goggles,\l"
	.string "you know?\p"
	.string "Good luck out there, those trainers\n"
	.string "are as vicious as the weather!$"
