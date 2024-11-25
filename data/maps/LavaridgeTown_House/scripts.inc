# 1 "data/maps/LavaridgeTown_House/scripts.pory"

# 2 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_MapScripts::
# 3 "data/maps/LavaridgeTown_House/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_House/scripts.pory"

# 5 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_EventScript_OldMan::
# 6 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_Text_WifeWarmingEggInHotSprings, MSGBOX_NPC
# 7 "data/maps/LavaridgeTown_House/scripts.pory"
	end
# 8 "data/maps/LavaridgeTown_House/scripts.pory"

# 9 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_EventScript_Zigzagoon::
# 10 "data/maps/LavaridgeTown_House/scripts.pory"
	lock
# 11 "data/maps/LavaridgeTown_House/scripts.pory"
	faceplayer
# 12 "data/maps/LavaridgeTown_House/scripts.pory"
	waitse
# 13 "data/maps/LavaridgeTown_House/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 14 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_Text_Zigzagoon, MSGBOX_DEFAULT
# 15 "data/maps/LavaridgeTown_House/scripts.pory"
	waitmoncry
# 16 "data/maps/LavaridgeTown_House/scripts.pory"
	release
# 17 "data/maps/LavaridgeTown_House/scripts.pory"
	end
# 18 "data/maps/LavaridgeTown_House/scripts.pory"

# 19 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_EventScript_FormerMimicTutor::
# 20 "data/maps/LavaridgeTown_House/scripts.pory"
	lockall
# 21 "data/maps/LavaridgeTown_House/scripts.pory"
	faceplayer
# 22 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_Text_FormerMimicTutor, MSGBOX_DEFAULT
# 23 "data/maps/LavaridgeTown_House/scripts.pory"
	releaseall
# 24 "data/maps/LavaridgeTown_House/scripts.pory"
	end
# 25 "data/maps/LavaridgeTown_House/scripts.pory"

# 26 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_Text_WifeWarmingEggInHotSprings:
# 27 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "My wife's warming an EGG in the hot\n"
# 28 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "springs. This is what she told me.\p"
# 29 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "She left two Pokémon with the DAY CARE.\n"
# 30 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "And they discovered that EGG!$"
# 31 "data/maps/LavaridgeTown_House/scripts.pory"

# 32 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_Text_Zigzagoon:
# 33 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "ZIGZAGOON: Pshoo!$"
# 34 "data/maps/LavaridgeTown_House/scripts.pory"

# 35 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_Text_FormerMimicTutor:
# 36 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "I used to be able to mimic\n"
# 37 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "anything… Oh, what happened?$"
