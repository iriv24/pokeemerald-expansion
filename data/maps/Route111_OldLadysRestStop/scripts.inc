# 1 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 2 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_MapScripts::
# 3 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OldLadysRestStop_OnTransition
# 4 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.byte 0
# 5 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 6 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_OnTransition:
# 7 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	setflag FLAG_LANDMARK_OLD_LADY_REST_SHOP
# 8 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 9 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 10 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_EggMan::
# 11 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	lock
# 12 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	faceplayer
# 13 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_set FLAG_RECEIVED_ROUTE_111_EGG, Route111_OldLadysRestStop_EventScript_ReceivedEgg
# 14 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 15 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route111_OldLadysRestStop_EventScript_DeclineEgg
# 16 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	getpartysize
# 17 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, Route111_OldLadysRestStop_EventScript_NoRoomForEgg
# 18 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 19 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	setflag FLAG_RECEIVED_ROUTE_111_EGG
# 20 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 21 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	message Route111_OldLadysRestStop_Text_ReceivedTheEgg
# 22 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	waitfanfare
# 23 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	giveegg SPECIES_RIOLU
# 24 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	release
# 25 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 26 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 27 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_ReceivedEgg::
# 28 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 29 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	release
# 30 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 31 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 32 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_DeclineEgg::
# 33 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_AsYouWishThen, MSGBOX_DEFAULT
# 34 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	release
# 35 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 36 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 37 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_NoRoomForEgg::
# 38 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 39 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	release
# 40 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 41 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 42 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_EverySoOftenEggFoundAtDayCare:
# 43 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "I truly have no idea what\n"
# 44 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "is inside that egg.$"
# 45 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 46 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_HaveEggWillYouTakeIt:
# 47 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "I have an Egg here, but I'm too old to be\n"
# 48 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "running around for long enough for it\l"
# 49 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "to hatch. Will you take it?$"
# 50 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 51 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_AsYouWishThen:
# 52 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "As you wish, then…\p"
# 53 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "If you have a change of heart about\n"
# 54 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "hatching this Egg, I will be here.$"
# 55 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 56 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_NoRoomForThisEgg:
# 57 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
# 58 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "There's no room for this Egg…$"
# 59 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 60 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_HopeYoullWalkPlentyWithEgg:
# 61 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 62 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "that there Egg!$"
# 63 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 64 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_ReceivedTheEgg:
# 65 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "{PLAYER} received the Egg.$"
