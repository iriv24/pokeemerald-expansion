# 1 "data/maps/SootopolisCity_House4/scripts.pory"

# 2 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_MapScripts::
# 3 "data/maps/SootopolisCity_House4/scripts.pory"
	.byte 0

SootopolisCity_House4_EventScript_RelicsMan::
# 8 "data/maps/SootopolisCity_House4/scripts.pory"
	lock
# 9 "data/maps/SootopolisCity_House4/scripts.pory"
	faceplayer
# 11 "data/maps/SootopolisCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_ADAMANT_ORB, SootopolisCity_House4_EventScript_RelicsMan_4
SootopolisCity_House4_EventScript_RelicsMan_1:
# 17 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_PleaseShowLegend, MSGBOX_DEFAULT
# 18 "data/maps/SootopolisCity_House4/scripts.pory"
	special ChoosePartyMon
# 19 "data/maps/SootopolisCity_House4/scripts.pory"
	waitstate
# 20 "data/maps/SootopolisCity_House4/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 21 "data/maps/SootopolisCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_House4_EventScript_CancelLegend
# 22 "data/maps/SootopolisCity_House4/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 23 "data/maps/SootopolisCity_House4/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/SootopolisCity_House4/scripts.pory"
	case SPECIES_DIALGA, SootopolisCity_House4_EventScript_RelicsMan_10
# 37 "data/maps/SootopolisCity_House4/scripts.pory"
	case SPECIES_PALKIA, SootopolisCity_House4_EventScript_RelicsMan_11
# 50 "data/maps/SootopolisCity_House4/scripts.pory"
	case SPECIES_GIRATINA, SootopolisCity_House4_EventScript_RelicsMan_12
# 64 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_NotLegend, MSGBOX_DEFAULT
# 65 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end

SootopolisCity_House4_EventScript_RelicsMan_2:
# 12 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_UseThoseRelics, MSGBOX_DEFAULT
# 13 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end

SootopolisCity_House4_EventScript_RelicsMan_3:
# 11 "data/maps/SootopolisCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_GRISEOUS_ORB, SootopolisCity_House4_EventScript_RelicsMan_2
	goto SootopolisCity_House4_EventScript_RelicsMan_1

SootopolisCity_House4_EventScript_RelicsMan_4:
# 11 "data/maps/SootopolisCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_LUSTROUS_ORB, SootopolisCity_House4_EventScript_RelicsMan_3
	goto SootopolisCity_House4_EventScript_RelicsMan_1

SootopolisCity_House4_EventScript_RelicsMan_8:
# 69 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_UseThatRelic, MSGBOX_DEFAULT
# 70 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end

SootopolisCity_House4_EventScript_RelicsMan_10:
# 25 "data/maps/SootopolisCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_ADAMANT_ORB, SootopolisCity_House4_EventScript_RelicsMan_14
# 32 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_PleaseTakeThisRelic, MSGBOX_DEFAULT
# 33 "data/maps/SootopolisCity_House4/scripts.pory"
	giveitem ITEM_ADAMANT_ORB
# 34 "data/maps/SootopolisCity_House4/scripts.pory"
	setflag FLAG_RECEIVED_ADAMANT_ORB
	goto SootopolisCity_House4_EventScript_RelicsMan_8

SootopolisCity_House4_EventScript_RelicsMan_11:
# 38 "data/maps/SootopolisCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_LUSTROUS_ORB, SootopolisCity_House4_EventScript_RelicsMan_17
# 45 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_PleaseTakeThisRelic, MSGBOX_DEFAULT
# 46 "data/maps/SootopolisCity_House4/scripts.pory"
	giveitem ITEM_LUSTROUS_ORB
# 47 "data/maps/SootopolisCity_House4/scripts.pory"
	setflag FLAG_RECEIVED_LUSTROUS_ORB
	goto SootopolisCity_House4_EventScript_RelicsMan_8

SootopolisCity_House4_EventScript_RelicsMan_12:
# 51 "data/maps/SootopolisCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_GRISEOUS_ORB, SootopolisCity_House4_EventScript_RelicsMan_20
# 58 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_PleaseTakeThisRelic, MSGBOX_DEFAULT
# 59 "data/maps/SootopolisCity_House4/scripts.pory"
	giveitem ITEM_GRISEOUS_ORB
# 60 "data/maps/SootopolisCity_House4/scripts.pory"
	setflag FLAG_RECEIVED_GRISEOUS_ORB
	goto SootopolisCity_House4_EventScript_RelicsMan_8

SootopolisCity_House4_EventScript_RelicsMan_14:
# 27 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_AlreadyGaveRelic, MSGBOX_DEFAULT
# 28 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end

SootopolisCity_House4_EventScript_RelicsMan_17:
# 40 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_AlreadyGaveRelic, MSGBOX_DEFAULT
# 41 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end

SootopolisCity_House4_EventScript_RelicsMan_20:
# 53 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_AlreadyGaveRelic, MSGBOX_DEFAULT
# 54 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end


SootopolisCity_House4_EventScript_CancelLegend::
# 75 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_DontHaveLegend, MSGBOX_DEFAULT
# 76 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end


SootopolisCity_House4_Text_PleaseShowLegend::
# 80 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Well now, don't you look like the\n"
	.string "promising young trainer.\p"
	.string "I've traveled far and wide in my\n"
	.string "lifetime, and I have here 3 very\l"
	.string "powerful relics from another region\l"
	.string "that I am looking to give to a\l"
	.string "trustworthy trainer.\p"
	.string "If you can show me one of the Pokémon\n"
	.string "that uses these relics, I'll know you\l"
	.string "are worth possessing one.$"

SootopolisCity_House4_Text_PleaseTakeThisRelic::
# 93 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Oh my! That is one of the of the\n"
	.string "Pokémon that can use this relic.\p"
	.string "Here, you are clearly a trainer worthy\n"
	.string "of wielding its power.$"

SootopolisCity_House4_Text_UseThatRelic::
# 100 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "I believe you can harness the full\n"
	.string "power of that relic.$"

SootopolisCity_House4_Text_UseThoseRelics::
# 105 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "That's all the relics I'd collected over\n"
	.string "the years.\p"
	.string "I hope you use them wisely.$"

SootopolisCity_House4_Text_AlreadyGaveRelic::
# 111 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "I already gave you the relic for that\n"
	.string "Pokémon.$"

SootopolisCity_House4_Text_DontHaveLegend::
# 116 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "I see, you don't have one of the\n"
	.string "Pokémon that can use these relics.$"

SootopolisCity_House4_Text_NotLegend::
# 120 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "That's not one of the Pokémon that can\n"
	.string "use these relics.$"
