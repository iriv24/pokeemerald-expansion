# 1 "data/maps/DewfordTown_House2/scripts.pory"

# 2 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_MapScripts::
# 3 "data/maps/DewfordTown_House2/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_House2/scripts.pory"

# 5 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Man::
# 6 "data/maps/DewfordTown_House2/scripts.pory"
	lock
# 7 "data/maps/DewfordTown_House2/scripts.pory"
	faceplayer
# 8 "data/maps/DewfordTown_House2/scripts.pory"
	call_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, DewfordTown_House2_EventScript_SetEggMoveFlag
# 9 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_HowToUseRelearnMoves, MSGBOX_DEFAULT
# 10 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 11 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 12 "data/maps/DewfordTown_House2/scripts.pory"

# 13 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_SetEggMoveFlag::
# 14 "data/maps/DewfordTown_House2/scripts.pory"
	setflag FLAG_MET_REGULAR_MOVE_TUTOR
# 15 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_ImEggMoveTutor, MSGBOX_DEFAULT
# 16 "data/maps/DewfordTown_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 17 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_ObtainedMoveTutorOption, MSGBOX_DEFAULT
# 18 "data/maps/DewfordTown_House2/scripts.pory"
	waitfanfare
# 19 "data/maps/DewfordTown_House2/scripts.pory"
	return
# 20 "data/maps/DewfordTown_House2/scripts.pory"

# 21 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Boy::
# 22 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_BrawlySoCool, MSGBOX_NPC
# 23 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 24 "data/maps/DewfordTown_House2/scripts.pory"

# 25 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_ImEggMoveTutor:
# 26 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Yo!\p"
# 27 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Everyone always tells me that I have\n"
# 28 "data/maps/DewfordTown_House2/scripts.pory"
	.string "such a great memory, and it even rubs\l"
# 29 "data/maps/DewfordTown_House2/scripts.pory"
	.string "off on my Pokémon!\p"
# 30 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Here, I'll teach you the secret to\n"
# 31 "data/maps/DewfordTown_House2/scripts.pory"
	.string "having a great memory too.$"
# 32 "data/maps/DewfordTown_House2/scripts.pory"

# 33 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_ObtainedMoveTutorOption:
# 34 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Obtained the option to relearn\n"
# 35 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Level-Up Moves!$"
# 36 "data/maps/DewfordTown_House2/scripts.pory"

# 37 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_HowToUseRelearnMoves:
# 38 "data/maps/DewfordTown_House2/scripts.pory"
	.string "If you go to your party menu and select\n"
# 39 "data/maps/DewfordTown_House2/scripts.pory"
	.string "a Pokémon, you should have a new option\l"
# 40 "data/maps/DewfordTown_House2/scripts.pory"
	.string "called “Relearn”.\p"
# 41 "data/maps/DewfordTown_House2/scripts.pory"
	.string "I've heard there are other people out\n"
# 42 "data/maps/DewfordTown_House2/scripts.pory"
	.string "there who know how to relearn other\l"
# 43 "data/maps/DewfordTown_House2/scripts.pory"
	.string "types of moves, but I only know how to\l"
# 44 "data/maps/DewfordTown_House2/scripts.pory"
	.string "relearn moves that a  Pokémon gets by\l"
# 45 "data/maps/DewfordTown_House2/scripts.pory"
	.string "leveling up.\p"
# 46 "data/maps/DewfordTown_House2/scripts.pory"
	.string "If you don't see the new option, that\n"
# 47 "data/maps/DewfordTown_House2/scripts.pory"
	.string "means your Pokémon doesn't have any\l"
# 48 "data/maps/DewfordTown_House2/scripts.pory"
	.string "moves to relearn, what a bummer!\p"
# 49 "data/maps/DewfordTown_House2/scripts.pory"
	.string "I hope you remember me when you\n"
# 50 "data/maps/DewfordTown_House2/scripts.pory"
	.string "make it  big!$"
# 51 "data/maps/DewfordTown_House2/scripts.pory"

# 52 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_BrawlySoCool:
# 53 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Wow, you bothered to cross the sea\n"
# 54 "data/maps/DewfordTown_House2/scripts.pory"
	.string "to visit Dewford?\p"
# 55 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Did you maybe come here because you\n"
# 56 "data/maps/DewfordTown_House2/scripts.pory"
	.string "heard about Brawly?\p"
# 57 "data/maps/DewfordTown_House2/scripts.pory"
	.string "He's so cool…\n"
# 58 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Everyone idolizes him.$"
