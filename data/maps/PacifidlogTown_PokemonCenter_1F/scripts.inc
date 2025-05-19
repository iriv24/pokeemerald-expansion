# 1 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
# 11 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Girl::
# 22 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard, MSGBOX_NPC
# 23 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Woman::
# 26 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola, MSGBOX_NPC
# 27 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_FormerExplosionTutor::
# 30 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	lockall
# 31 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 32 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_FormerExplosionTutor, MSGBOX_DEFAULT
# 33 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	releaseall
# 34 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 35 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_FormerExplosionTutor:
# 37 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "I used to be able to cause huge\n"
# 38 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "explosions… Oh, what happened?$"
# 39 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard:
# 41 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "What color is your TRAINER CARD?\n"
# 42 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Mine's copper!$"
# 43 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola:
# 45 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "PACIFIDLOG TOWN floats on top of\n"
# 46 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "a colony of CORSOLA.\p"
# 47 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "If I told you that, would you believe\n"
# 48 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "me?$"

PacifidlogTown_PokemonCenter_1F_EventScript_EggMan::
# 52 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	lock
# 53 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 54 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_PseudoManIntro, MSGBOX_YESNO
# 56 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PacifidlogTown_PokemonCenter_1F_EventScript_EggMan_2
PacifidlogTown_PokemonCenter_1F_EventScript_EggMan_1:
# 61 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 62 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PacifidlogTown_PokemonCenter_1F_EventScript_ComeBackWithYellowShard
# 63 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	getpartysize
# 64 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, PacifidlogTown_PokemonCenter_1F_EventScript_NoRoomForEgg
# 65 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 66 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 67 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	message PacifidlogTown_PokemonCenter_1F_Text_ReceivedTheEgg
# 68 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 69 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	giveegg SPECIES_DRATINI
# 70 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_YELLOW_SHARD
# 71 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_ComeBackWithMore, MSGBOX_DEFAULT
# 72 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_EggMan_2:
# 58 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	goto PacifidlogTown_PokemonCenter_1F_EventScript_PseudoEggManManNo
	goto PacifidlogTown_PokemonCenter_1F_EventScript_EggMan_1


PacifidlogTown_PokemonCenter_1F_EventScript_PseudoEggManManNo::
# 78 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_PseudoEggManDeclined, MSGBOX_DEFAULT
# 79 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
	end


PacifidlogTown_PokemonCenter_1F_EventScript_ComeBackWithYellowShard::
# 84 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_ComeBackWithYellowShard, MSGBOX_DEFAULT
# 85 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
	end


PacifidlogTown_PokemonCenter_1F_EventScript_NoRoomForEgg::
# 90 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 91 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
	end


PacifidlogTown_PokemonCenter_1F_PseudoManIntro::
# 95 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Hello, trainer. I have several rare Eggs\n"
	.string "here with me.\p"
	.string "I am currently seeking Yellow Shards,\n"
	.string "would you be willing to exchange a\l"
	.string "Yellow Shard in exchange for one of\l"
	.string "these Eggs?$"

PacifidlogTown_PokemonCenter_1F_PseudoEggManDeclined::
# 104 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "I see. Please come back if you change\n"
	.string "your mind.$"

PacifidlogTown_PokemonCenter_1F_Text_ComeBackWithYellowShard::
# 110 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "It doesn't look like you have a\n"
	.string "Yellow Shard. Come back when you do.$"

PacifidlogTown_PokemonCenter_1F_Text_NoRoomForThisEgg::
# 115 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
	.string "There's no room for this Egg…$"

PacifidlogTown_PokemonCenter_1F_Text_HopeYoullWalkPlentyWithEgg::
# 120 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
	.string "this here Egg!$"

PacifidlogTown_PokemonCenter_1F_Text_ReceivedTheEgg::
# 125 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} received the Egg.$"

PacifidlogTown_PokemonCenter_1F_ComeBackWithMore::
# 129 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Please come back if you have more\n"
	.string "Yellow Shards you'd like to exchange.$"
