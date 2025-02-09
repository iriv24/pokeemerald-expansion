# 1 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 2 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
.set LOCALID_MOVE_DELETER, 1
# 3 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 4 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_MapScripts::
# 5 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 7 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_EggMoveTutor::
# 8 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	lock
# 9 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	faceplayer
# 10 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, LilycoveCity_MoveDeletersHouse_EventScript_CantTeachYet
# 11 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	call_if_unset FLAG_MET_EGG_MOVE_TUTOR, LilycoveCity_MoveDeletersHouse_EventScript_SetEggMoveFlag
# 12 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_HowToUseEggMoves, MSGBOX_DEFAULT
# 13 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	release
# 14 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 15 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 16 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_SetEggMoveFlag::
# 17 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	setflag FLAG_MET_EGG_MOVE_TUTOR
# 18 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ImEggMoveTutor, MSGBOX_DEFAULT
# 19 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ObtainedEggMoveTutorOption, MSGBOX_DEFAULT
# 21 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitfanfare
# 22 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	return
# 23 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 24 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_CantTeachYet::
# 25 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_CantTeachYet, MSGBOX_DEFAULT
# 26 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	release
# 27 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 28 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 29 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 30 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 31 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_CantTeachYet:
# 32 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Hm, what's this?\n"
# 33 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "It doesn't look like you know anything\l"
# 34 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "about relearning moves, so I have\l"
# 35 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "nothing to show you.\p"
# 36 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "I heard there's a man in Dewford Town\n"
# 37 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "who knows a thing or two about this.$"
# 38 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 39 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ImEggMoveTutor:
# 40 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Oh, hello there young trainer.\n"
# 41 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "I've recently undergone a career\l"
# 42 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "change.\p"
# 43 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "I used to be known as the Move Deleter,\n"
# 44 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "but everyone can do that themselves\l"
# 45 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "nowadays, so I had to learn a new skill.\p"
# 46 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Now, I can teach you to teach your\n"
# 47 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Pokémon their Egg Moves.\l"
# 48 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Check this out!$"
# 49 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 50 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ObtainedEggMoveTutorOption:
# 51 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Obtained the option to relearn\n"
# 52 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Egg Moves!$"
# 53 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 54 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_HowToUseEggMoves:
# 55 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "If you go to your party menu, select a\n"
# 56 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Pokémon, then select “Relearn”, you\l"
# 57 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "will have a new option: “Egg Moves”,\l"
# 58 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "assuming your Pokémon actually has Egg\l"
# 59 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Moves to learn!\p"
# 60 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Isn't that handy?$"
