# 1 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
# 6 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
# 7 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 8 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 9 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Woman::
# 10 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
# 11 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 12 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 13 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
# 14 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
# 15 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 17 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
# 18 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 19 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 20 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 22 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
# 23 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 24 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 25 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 26 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 27 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.align 2
# 28 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
# 29 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 30 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_NET_BALL
# 31 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_NEST_BALL
# 32 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 33 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 34 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 35 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 36 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 37 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 38 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 39 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LURE_BALL
# 40 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_MOON_BALL
# 41 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 42 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 43 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_FAST_BALL
# 44 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 45 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 46 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_CHERISH_BALL
# 47 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_BEAST_BALL
# 48 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_NONE
# 49 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 50 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 51 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 52 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
# 53 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 54 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 55 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 56 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 57 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
# 58 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 59 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 60 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 61 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 62 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.align 2
# 63 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs:
# 64 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 65 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 66 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 67 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_WATER_STONE
# 68 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_ICE_STONE
# 69 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_SUN_STONE
# 70 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_MOON_STONE
# 71 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 72 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 73 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 74 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 75 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 76 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 77 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_METAL_COAT
# 78 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_UPGRADE
# 79 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 80 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_NONE
# 81 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 82 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 83 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 84 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
# 85 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Hmm…\p"
# 86 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "An attacking move…\n"
# 87 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Or a defensive move…\p"
# 88 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "It's no easy matter to decide which TM\n"
# 89 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "moves should be taught to Pokémon…$"
# 90 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 91 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
# 92 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "There are so many different kinds of\n"
# 93 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "TM moves.\p"
# 94 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "A catalog I read said there are fifty\n"
# 95 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "different kinds.$"
# 96 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 97 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
# 98 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "I'd like to get all the different TMs,\n"
# 99 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "but a Pokémon learns only four moves.$"
