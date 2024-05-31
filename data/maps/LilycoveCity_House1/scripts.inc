# 1 "data/maps/LilycoveCity_House1/scripts.pory"

# 2 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_MapScripts::
# 3 "data/maps/LilycoveCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_House1/scripts.pory"

# 5 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_EventScript_EggMan::
# 6 "data/maps/LilycoveCity_House1/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_LILYCOVE_EGG, LilycoveCity_House1_EventScript_ReceivedEgg
# 9 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 10 "data/maps/LilycoveCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_House1_EventScript_DeclineEgg
# 11 "data/maps/LilycoveCity_House1/scripts.pory"
	getpartysize
# 12 "data/maps/LilycoveCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, LilycoveCity_House1_EventScript_NoRoomForEgg
# 13 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 14 "data/maps/LilycoveCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_LILYCOVE_EGG
# 15 "data/maps/LilycoveCity_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 16 "data/maps/LilycoveCity_House1/scripts.pory"
	message LilycoveCity_House1_Text_ReceivedTheEgg
# 17 "data/maps/LilycoveCity_House1/scripts.pory"
	waitfanfare
# 18 "data/maps/LilycoveCity_House1/scripts.pory"
	giveegg SPECIES_TYPE_NULL
# 19 "data/maps/LilycoveCity_House1/scripts.pory"
	release
# 20 "data/maps/LilycoveCity_House1/scripts.pory"
	end
# 21 "data/maps/LilycoveCity_House1/scripts.pory"

# 22 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_EventScript_ReceivedEgg::
# 23 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 24 "data/maps/LilycoveCity_House1/scripts.pory"
	release
# 25 "data/maps/LilycoveCity_House1/scripts.pory"
	end
# 26 "data/maps/LilycoveCity_House1/scripts.pory"

# 27 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_EventScript_DeclineEgg::
# 28 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_Text_AsYouWishThen, MSGBOX_DEFAULT
# 29 "data/maps/LilycoveCity_House1/scripts.pory"
	release
# 30 "data/maps/LilycoveCity_House1/scripts.pory"
	end
# 31 "data/maps/LilycoveCity_House1/scripts.pory"

# 32 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_EventScript_NoRoomForEgg::
# 33 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 34 "data/maps/LilycoveCity_House1/scripts.pory"
	release
# 35 "data/maps/LilycoveCity_House1/scripts.pory"
	end
# 36 "data/maps/LilycoveCity_House1/scripts.pory"

# 37 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_EventScript_Kecleon::
# 38 "data/maps/LilycoveCity_House1/scripts.pory"
	lock
# 39 "data/maps/LilycoveCity_House1/scripts.pory"
	faceplayer
# 40 "data/maps/LilycoveCity_House1/scripts.pory"
	waitse
# 41 "data/maps/LilycoveCity_House1/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 42 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_Text_Kecleon, MSGBOX_DEFAULT
# 43 "data/maps/LilycoveCity_House1/scripts.pory"
	waitmoncry
# 44 "data/maps/LilycoveCity_House1/scripts.pory"
	release
# 45 "data/maps/LilycoveCity_House1/scripts.pory"
	end
# 46 "data/maps/LilycoveCity_House1/scripts.pory"

# 47 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_Text_EverySoOftenEggFoundAtDayCare:
# 48 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "I truly have no idea what\n"
# 49 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "is inside that egg.$"
# 50 "data/maps/LilycoveCity_House1/scripts.pory"

# 51 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_Text_HaveEggWillYouTakeIt:
# 52 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "I have an Egg here, but I'm too old to be\n"
# 53 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "running around for long enough for it\p"
# 54 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "to hatch. Will you take it?$"
# 55 "data/maps/LilycoveCity_House1/scripts.pory"

# 56 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_Text_AsYouWishThen:
# 57 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "As you wish, then…\p"
# 58 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "If you have a change of heart about\n"
# 59 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "hatching this Egg, I will be here.$"
# 60 "data/maps/LilycoveCity_House1/scripts.pory"

# 61 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_Text_NoRoomForThisEgg:
# 62 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
# 63 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "There's no room for this Egg…$"
# 64 "data/maps/LilycoveCity_House1/scripts.pory"

# 65 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_Text_HopeYoullWalkPlentyWithEgg:
# 66 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 67 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "that there Egg!$"
# 68 "data/maps/LilycoveCity_House1/scripts.pory"

# 69 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_Text_ReceivedTheEgg:
# 70 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "{PLAYER} received the Egg.$"
# 71 "data/maps/LilycoveCity_House1/scripts.pory"

# 72 "data/maps/LilycoveCity_House1/scripts.pory"

# 73 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_Text_Kecleon:
# 74 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "KECLEON: Ruroro?$"
