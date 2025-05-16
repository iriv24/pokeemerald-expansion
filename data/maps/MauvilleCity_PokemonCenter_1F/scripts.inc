# 1 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 11 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman1::
# 23 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings, MSGBOX_NPC
# 24 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman2::
# 27 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner, MSGBOX_NPC
# 28 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Youngster::
# 31 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun, MSGBOX_NPC
# 32 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 33 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 34 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings:
# 35 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "That man over there, he has so many\n"
# 36 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Costume Pikachus!$"
# 37 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner:
# 39 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "When I accessed the RECORD CORNER,\n"
# 40 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the data for what's hot in DEWFORD\l"
# 41 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "got updated.\p"
# 42 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Now that bit of data is the same\n"
# 43 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "as my friend's!$"
# 44 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun:
# 46 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "A RECORD CORNER opened upstairs in\n"
# 47 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the Pokémon CENTER.\p"
# 48 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I don't know what it's about, but it\n"
# 49 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "sounds fun. I'll go check it out!$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive::
# 54 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	lock
# 55 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 56 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox PikachuManIntro
# 58 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_0, SPECIES_PIKACHU_COSPLAY
# 59 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_1, SPECIES_PIKACHU_ROCK_STAR
# 60 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_2, SPECIES_PIKACHU_BELLE
# 61 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_3, SPECIES_PIKACHU_POP_STAR
# 62 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_4, SPECIES_PIKACHU_PHD
# 63 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_5, SPECIES_PIKACHU_LIBRE
# 64 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_6, SPECIES_PIKACHU_SURFING
# 65 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_7, SPECIES_PIKACHU_FLYING
# 66 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_8, MULTI_B_PRESSED
# 69 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 71 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_2
MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_1:
# 76 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 77 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 78 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_ComeBackWithYellowShard
# 79 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	getpartysize
# 80 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, MauvilleCity_PokemonCenter_1F_EventScript_NoRoomForPikachu
# 81 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_9
# 82 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 83 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	message MauvilleCity_PokemonCenter_1F_Text_ReceivedThePikachu
# 84 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 85 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	givemonrandom VAR_0x8005, 25
# 86 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_YELLOW_SHARD
# 87 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_10
# 88 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_2:
# 73 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCenter_1F_EventScript_PikachuManNo
	goto MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_1


MauvilleCity_PokemonCenter_1F_EventScript_PikachuManNo::
# 94 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_EventScript_PikachuManNo_Text_0
# 95 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
	end


MauvilleCity_PokemonCenter_1F_EventScript_ComeBackWithYellowShard::
# 100 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_ComeBackWithYellowShard, MSGBOX_DEFAULT
# 101 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
	end


MauvilleCity_PokemonCenter_1F_EventScript_NoRoomForPikachu::
# 106 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_NoRoomForThisPikachu, MSGBOX_DEFAULT
# 107 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
	end


MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_0:
# 58 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Pikachu Cosplay$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_1:
# 59 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Pikachu Rock Star$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_2:
# 60 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Pikachu Belle$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_3:
# 61 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Pikachu Pop Star$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_4:
# 62 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Pikachu PhD$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_5:
# 63 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Pikachu Libre$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_6:
# 64 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Pikachu Surfing$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_7:
# 65 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Pikachu Flying$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_8:
# 66 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_9:
# 81 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "That's my favorite one, great choice!$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_10:
# 87 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Come back if you want more Pikachus!$"

MauvilleCity_PokemonCenter_1F_EventScript_PikachuManNo_Text_0:
# 94 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "More for me then!$"

PikachuManIntro::
# 111 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Hi, hi! I'm the number one Pikachu guy!\n"
	.string "For just one Yellow Shard, any Costume\l"
	.string "Pikachu can be yours, what do you say,\l"
	.string "do you want one of these Pikachus?$"

MauvilleCity_PokemonCenter_1F_Text_ComeBackWithYellowShard::
# 118 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "It doesn't look like you have a\n"
	.string "Yellow Shard. Come back when you do.$"

MauvilleCity_PokemonCenter_1F_Text_NoRoomForThisPikachu::
# 123 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
	.string "There's no room for this Pikachu.$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedThePikachu::
# 128 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} received the Pikachu!$"
