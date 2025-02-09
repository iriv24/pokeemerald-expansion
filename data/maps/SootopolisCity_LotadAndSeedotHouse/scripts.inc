# 1 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 2 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_MapScripts::
# 3 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 5 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SwordMaster::
# 6 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUSTED_SWORD, SootopolisCity_LotadAndSeedotHouse_EventScript_UseThatSword
# 9 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowZacian, MSGBOX_DEFAULT
# 10 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special ChoosePartyMon
# 11 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 12 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 13 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelZacian
# 14 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 15 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_ne VAR_RESULT, SPECIES_ZACIAN, SootopolisCity_LotadAndSeedotHouse_EventScript_NotZacian
# 16 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseTakeThisSword, MSGBOX_DEFAULT
# 17 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_RUSTED_SWORD
# 18 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	setflag FLAG_RECEIVED_RUSTED_SWORD
# 19 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_UseThatSword, MSGBOX_DEFAULT
# 20 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 21 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 22 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 23 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelZacian::
# 24 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontZacian, MSGBOX_DEFAULT
# 25 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 26 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 27 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 28 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotZacian::
# 29 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_NotZacian, MSGBOX_DEFAULT
# 30 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 31 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 32 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 33 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_UseThatSword::
# 34 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_UseThatSword, MSGBOX_DEFAULT
# 35 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 36 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 37 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 38 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_ShieldMaster::
# 39 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 40 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 41 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUSTED_SHIELD, SootopolisCity_LotadAndSeedotHouse_EventScript_UseThatShield
# 42 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowZamazenta, MSGBOX_DEFAULT
# 43 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special ChoosePartyMon
# 44 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 45 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 46 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelZamazenta
# 47 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 48 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_ne VAR_RESULT, SPECIES_ZAMAZENTA, SootopolisCity_LotadAndSeedotHouse_EventScript_NotZamazenta
# 49 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseTakeThisShield, MSGBOX_DEFAULT
# 50 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_RUSTED_SHIELD
# 51 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	setflag FLAG_RECEIVED_RUSTED_SHIELD
# 52 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_UseThatShield, MSGBOX_DEFAULT
# 53 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 54 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 55 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 56 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelZamazenta::
# 57 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontZamazenta, MSGBOX_DEFAULT
# 58 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 59 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 60 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 61 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotZamazenta::
# 62 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_NotZamazenta, MSGBOX_DEFAULT
# 63 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 64 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 65 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 66 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_UseThatShield::
# 67 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_UseThatShield, MSGBOX_DEFAULT
# 68 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 69 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 70 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 71 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowZacian:
# 72 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "I've been trained in the way of the\n"
# 73 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "sword, I'm all about offense.\p"
# 74 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "If you can show me a Pokémon that\n"
# 75 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "fits that philosophy, I'll give you a\l"
# 76 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "nice Item for it.$"
# 77 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 78 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseTakeThisSword:
# 79 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Excellent! That Pokémon definitely\n"
# 80 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "knows the way of the sword!\p"
# 81 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Here, please take this!$"
# 82 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 83 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 84 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_UseThatSword:
# 85 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "I hope you and your Pokémon use that\n"
# 86 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "sword for some high-powered offense!$"
# 87 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 88 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_DontZacian:
# 89 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "I see, you don't have a Pokémon that\n"
# 90 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "fits my philosophy.$"
# 91 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 92 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_NotZacian:
# 93 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "That Pokémon doesn't fit my philosophy.$"
# 94 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 95 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 96 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 97 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 98 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowZamazenta:
# 99 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "I've been trained in the way of the\n"
# 100 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "shield, I'm all about defense.\p"
# 101 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "If you can show me a Pokémon that\n"
# 102 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "fits that philosophy, I'll give you a\l"
# 103 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "nice Item for it.$"
# 104 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 105 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseTakeThisShield:
# 106 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Excellent! That Pokémon definitely\n"
# 107 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "knows the way of the shield!\p"
# 108 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Here, please take this!$"
# 109 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 110 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 111 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_UseThatShield:
# 112 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "I hope you and your Pokémon use that\n"
# 113 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "shield for some high-powered defense!$"
# 114 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 115 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_DontZamazenta:
# 116 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "I see, you don't have a Pokémon that\n"
# 117 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "fits my philosophy.$"
# 118 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 119 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_NotZamazenta:
# 120 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "That Pokémon doesn't fit my philosophy.$"
