# 1 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FORTREE_CITY
# 11 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Gentleman::
# 22 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_GoToSafariZone, MSGBOX_NPC
# 23 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Man::
# 26 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat, MSGBOX_NPC
# 27 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Boy::
# 30 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav, MSGBOX_NPC
# 31 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_GoToSafariZone:
# 34 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Listen, kid, are you working\n"
# 35 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "on a Pokédex?\p"
# 36 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Hmm… Go to the SAFARI ZONE.\n"
# 37 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "That's my suggestion.$"
# 38 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat:
# 40 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Have you done anything at\n"
# 41 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "the RECORD CORNER?\p"
# 42 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It's pretty neat. It mixes and matches\n"
# 43 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "the records of TRAINERS.\p"
# 44 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "I don't know quite how it works,\n"
# 45 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "but it's cool. It's exciting, even!$"
# 46 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 47 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav:
# 48 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Oh, wow, you have a PokéNav!\n"
# 49 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "And it's just like mine!\p"
# 50 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Do you know about PokéNav's\n"
# 51 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "MATCH CALL system?\p"
# 52 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Access it, and you can chat with\n"
# 53 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "registered TRAINERS anytime.\p"
# 54 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It also shows you which TRAINERS\n"
# 55 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "want a rematch with you.\p"
# 56 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It's really nifty! Those DEVON guys\n"
# 57 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "sure know what they're doing!$"

FortreeCity_PokemonCenter_1F_EventScript_EggMan::
# 62 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	lock
# 63 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 64 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_PseudoManIntro, MSGBOX_YESNO
# 66 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_PokemonCenter_1F_EventScript_EggMan_2
FortreeCity_PokemonCenter_1F_EventScript_EggMan_1:
# 71 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 72 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FortreeCity_PokemonCenter_1F_EventScript_ComeBackWithYellowShard
# 73 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	getpartysize
# 74 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FortreeCity_PokemonCenter_1F_EventScript_NoRoomForEgg
# 75 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 76 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 77 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	message FortreeCity_PokemonCenter_1F_Text_ReceivedTheEgg
# 78 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 79 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	giveegg SPECIES_DRATINI
# 80 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_YELLOW_SHARD
# 81 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_ComeBackWithMore, MSGBOX_DEFAULT
# 82 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
	end

FortreeCity_PokemonCenter_1F_EventScript_EggMan_2:
# 68 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCenter_1F_EventScript_PseudoEggManManNo
	goto FortreeCity_PokemonCenter_1F_EventScript_EggMan_1


FortreeCity_PokemonCenter_1F_EventScript_PseudoEggManManNo::
# 88 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_PseudoEggManDeclined, MSGBOX_DEFAULT
# 89 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
	end


FortreeCity_PokemonCenter_1F_EventScript_ComeBackWithYellowShard::
# 94 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_ComeBackWithYellowShard, MSGBOX_DEFAULT
# 95 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
	end


FortreeCity_PokemonCenter_1F_EventScript_NoRoomForEgg::
# 100 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 101 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
	end


FortreeCity_PokemonCenter_1F_PseudoManIntro::
# 105 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Hello, trainer. I have several rare Eggs\n"
	.string "here with me.\p"
	.string "I am currently seeking Yellow Shards,\n"
	.string "would you be willing to exchange a\l"
	.string "Yellow Shard in exchange for one of\l"
	.string "these Eggs?$"

FortreeCity_PokemonCenter_1F_PseudoEggManDeclined::
# 114 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "I see. Please come back if you change\n"
	.string "your mind.$"

FortreeCity_PokemonCenter_1F_Text_ComeBackWithYellowShard::
# 120 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It doesn't look like you have a\n"
	.string "Yellow Shard. Come back when you do.$"

FortreeCity_PokemonCenter_1F_Text_NoRoomForThisEgg::
# 125 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
	.string "There's no room for this Egg…$"

FortreeCity_PokemonCenter_1F_Text_HopeYoullWalkPlentyWithEgg::
# 130 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
	.string "this here Egg!$"

FortreeCity_PokemonCenter_1F_Text_ReceivedTheEgg::
# 135 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} received the Egg.$"

FortreeCity_PokemonCenter_1F_ComeBackWithMore::
# 139 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Please come back if you have more\n"
	.string "Yellow Shards you'd like to exchange.$"
