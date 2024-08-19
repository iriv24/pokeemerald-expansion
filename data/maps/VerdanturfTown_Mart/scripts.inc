# 1 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 2 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_MapScripts::
# 3 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 5 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Clerk::
# 6 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 7 "data/maps/VerdanturfTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_Mart_Pokemart
# 11 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
# 13 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 14 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 15 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Pokemart:
# 17 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 18 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 19 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 20 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 21 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 22 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 23 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 24 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 25 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 26 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 27 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 28 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 29 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 30 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 31 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 32 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 33 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 34 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
# 35 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 36 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 37 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Boy::
# 38 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
# 39 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 40 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 41 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_ExpertF::
# 42 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
# 43 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 44 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 45 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Lass::
# 46 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
# 47 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 48 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 49 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_XSpecialIsCrucial:
# 50 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "For any POKéMON match, X SPECIAL\n"
# 51 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "is crucial.\p"
# 52 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "It jacks up the power of some moves\n"
# 53 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "even though it's only for one battle.$"
# 54 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 55 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent:
# 56 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "They don't seem to sell any winning\n"
# 57 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "strategy guides for the BATTLE TENT…\p"
# 58 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "It seems one must rely on one's\n"
# 59 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "own wits after all…$"
# 60 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 61 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon:
# 62 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "The NEST BALL works better on\n"
# 63 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "weakened POKéMON.\p"
# 64 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "VERDANTURF is the only place you can\n"
# 65 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "buy it.$"
