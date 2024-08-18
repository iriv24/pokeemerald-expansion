# 1 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 2 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_MapScripts::
# 3 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 5 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Cutter::
# 6 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, RustboroCity_CuttersHouse_EventScript_ExplainCut
# 9 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, RustboroCity_CuttersHouse_NoBadgeYet
# 10 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse, MSGBOX_DEFAULT
# 11 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	giveitem ITEM_HM_CUT
# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 13 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 14 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 15 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 16 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 17 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_ExplainCut::
# 18 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 19 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 20 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 21 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 22 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_NoBadgeYet::
# 23 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_NoBadge, MSGBOX_DEFAULT
# 24 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 25 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 26 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 27 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Lass::
# 28 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
# 29 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 30 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 31 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse:
# 32 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Hey, that's the Stone Badge! Nicely\n"
# 33 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "done, take this!\p"
# 34 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "I'm sure that you can put this\n"
# 35 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Hidden Machine to good use.\p"
# 36 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "No need to be modest or shy.\n"
# 37 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Go on, take it!$"
# 38 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 39 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_ExplainCut:
# 40 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That Hidden Machine, or HM for\n"
# 41 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "short, is Cut.\p"
# 42 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "An HM move is one that can be used\n"
# 43 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "by Pokémon outside of battle.\p"
# 44 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "However, now, you don't have to\n"
# 45 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "teach a Pokémon an HM to be able to use\l"
# 46 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "it outside of battle. As long as you\l"
# 47 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "have it in your Bag and you have the\l"
# 48 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "required Badge, you are good to use it!\p"
# 49 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Also, HMs can be forgotten at any time,\n"
# 50 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "just like normal moves!\l"
# 51 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Isn't that wonderful?$"
# 52 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 53 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	RustboroCity_CuttersHouse_Text_NoBadge:
# 54 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Come back after you get your first Gym\n"
# 55 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Badge and I'll give you a reward.$"
# 56 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 57 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees:
# 58 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "When they were expanding the city of\n"
# 59 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Rustboro, my dad helped out.\p"
# 60 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "He made his Pokémon use Cut to clear\n"
# 61 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "the land of trees.$"
