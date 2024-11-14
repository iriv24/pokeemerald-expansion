# 1 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 11 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Man::
# 23 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
# 24 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_EggMan::
# 27 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	lock
# 28 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 29 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUSTBORO_EGG, RustboroCity_PokemonCenter_1F_EventScript_ReceivedEgg
# 30 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 31 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_PokemonCenter_1F_EventScript_DeclineEgg
# 32 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	getpartysize
# 33 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, RustboroCity_PokemonCenter_1F_EventScript_NoRoomForEgg
# 34 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 35 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_RUSTBORO_EGG
# 36 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 37 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	message RustboroCity_PokemonCenter_1F_Text_ReceivedTheEgg
# 38 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 39 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	giveegg SPECIES_TOGEPI
# 40 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 41 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_ReceivedEgg::
# 44 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 45 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 46 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 47 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_DeclineEgg::
# 49 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_AsYouWishThen, MSGBOX_DEFAULT
# 50 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 51 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 52 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_NoRoomForEgg::
# 54 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 55 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 56 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 57 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Girl::
# 59 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
# 60 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 61 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 62 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
# 63 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "My Pokémon has a NAIVE nature, and my\n"
# 64 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "friend's has a JOLLY nature.\p"
# 65 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "It's fascinating how Pokémon have\n"
# 66 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "personalities!$"
# 67 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 68 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
# 69 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Just like people, there are male and\n"
# 70 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "female Pokémon.\p"
# 71 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "But no one seems to have any idea how\n"
# 72 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "they're different.$"
# 73 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 74 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
# 75 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "The man next door gave me an HM!\p"
# 76 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "I used it to teach my Pokémon how to\n"
# 77 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "CUT down skinny trees.$"
# 78 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 79 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_EverySoOftenEggFoundAtDayCare:
# 80 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "I truly have no idea what\n"
# 81 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "is inside that egg.$"
# 82 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 83 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_HaveEggWillYouTakeIt:
# 84 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "I have an Egg here, but I'm too old to be\n"
# 85 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "running around for long enough for it\l"
# 86 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "to hatch. Will you take it?$"
# 87 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 88 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_AsYouWishThen:
# 89 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "As you wish, then…\p"
# 90 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "If you have a change of heart about\n"
# 91 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "hatching this Egg, I will be here.$"
# 92 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 93 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_NoRoomForThisEgg:
# 94 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
# 95 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "There's no room for this Egg…$"
# 96 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 97 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_HopeYoullWalkPlentyWithEgg:
# 98 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 99 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "that there Egg!$"
# 100 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 101 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_ReceivedTheEgg:
# 102 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} received the Egg.$"
