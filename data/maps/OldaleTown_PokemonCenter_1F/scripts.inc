# 1 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
# 40 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_EggMan::
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_SYS_DEXNAV_GET, OldaleTown_PokemonCenter_1F_EventScript_NotReadyForEggYet
# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLDALE_EGG, OldaleTown_PokemonCenter_1F_EventScript_ReceivedEgg
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OldaleTown_PokemonCenter_1F_EventScript_DeclineEgg
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	getpartysize
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, OldaleTown_PokemonCenter_1F_EventScript_NoRoomForEgg
# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_OLDALE_EGG
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	message OldaleTown_PokemonCenter_1F_Text_ReceivedTheEgg
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	giveegg SPECIES_SENTRET
# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_NotReadyForEggYet::
# 62 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_NotReadyForEggYet, MSGBOX_DEFAULT
# 63 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 64 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 65 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 66 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_ReceivedEgg::
# 67 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 68 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 70 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 71 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_DeclineEgg::
# 72 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_AsYouWishThen, MSGBOX_DEFAULT
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 74 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 76 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_NoRoomForEgg::
# 77 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 81 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_NotReadyForEggYet:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I have an Egg here, and I am looking for\n"
# 83 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "a trainer with enough experience to\l"
# 84 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "take it from me to hatch it.\p"
# 85 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You don't seem like you have quite\n"
# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "enough experience yet; perhaps come\l"
# 87 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "back after you've received a Pokédex.$"
# 88 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 89 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_EverySoOftenEggFoundAtDayCare:
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I truly have no idea what\n"
# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "is inside that egg.$"
# 92 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 93 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_HaveEggWillYouTakeIt:
# 94 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I have an Egg here, but I'm too old to be\n"
# 95 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "running around for long enough for it\l"
# 96 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "to hatch.\p"
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I see you have a Pokédex, you must be a\n"
# 98 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "trustworthy trainer.\p"
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Will you take this Egg from me?$"
# 100 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 101 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_AsYouWishThen:
# 102 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "As you wish, then…\p"
# 103 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "If you have a change of heart about\n"
# 104 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "hatching this Egg, I will be here.$"
# 105 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_NoRoomForThisEgg:
# 107 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
# 108 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "There's no room for this Egg…$"
# 109 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 110 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_HopeYoullWalkPlentyWithEgg:
# 111 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 112 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "that there Egg!$"
# 113 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 114 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_ReceivedTheEgg:
# 115 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} received the Egg.$"
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 117 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is\n"
# 119 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "for any Pokémon TRAINER to use.\p"
# 120 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naturally, that means you're welcome\n"
# 121 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "to use it, too.$"
# 122 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 123 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 124 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Pokémon CENTERS are great!\p"
# 125 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can use their services as much\n"
# 126 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "as you like, and it's all for free.\l"
# 127 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You never have to worry!$"
# 128 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 129 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
# 130 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The Pokémon WIRELESS CLUB on\n"
# 131 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 132 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "But they say they're still making\n"
# 133 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "adjustments.$"
# 134 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 135 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
# 136 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The Pokémon WIRELESS CLUB on\n"
# 137 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 138 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I traded Pokémon right away.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse::
# 143 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 144 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 145 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox HelloHowCanIHelp
# 146 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_0, 0
# 147 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_1, 1
# 148 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, OldDaleTown_PokemonCenter_EventScript_SecondNurse_2
# 152 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_3, 2
OldDaleTown_PokemonCenter_EventScript_SecondNurse_1:
# 155 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, OldDaleTown_PokemonCenter_EventScript_SecondNurse_6
# 159 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_5, 3
OldDaleTown_PokemonCenter_EventScript_SecondNurse_5:
# 162 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_6, 4
# 163 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_7, 5
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_8, MULTI_B_PRESSED
# 167 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 169 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_10
OldDaleTown_PokemonCenter_EventScript_SecondNurse_9:
# 174 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_13
OldDaleTown_PokemonCenter_EventScript_SecondNurse_12:
# 179 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_16
OldDaleTown_PokemonCenter_EventScript_SecondNurse_15:
# 184 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_19
OldDaleTown_PokemonCenter_EventScript_SecondNurse_18:
# 189 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_22
OldDaleTown_PokemonCenter_EventScript_SecondNurse_21:
# 194 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_25
OldDaleTown_PokemonCenter_EventScript_SecondNurse_24:
# 199 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_27
	return

OldDaleTown_PokemonCenter_EventScript_SecondNurse_2:
# 149 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_2, 2
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_6:
# 156 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_4, 3
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_5

OldDaleTown_PokemonCenter_EventScript_SecondNurse_10:
# 171 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_9

OldDaleTown_PokemonCenter_EventScript_SecondNurse_13:
# 176 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_12

OldDaleTown_PokemonCenter_EventScript_SecondNurse_16:
# 181 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_15

OldDaleTown_PokemonCenter_EventScript_SecondNurse_19:
# 186 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_18

OldDaleTown_PokemonCenter_EventScript_SecondNurse_22:
# 191 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_21

OldDaleTown_PokemonCenter_EventScript_SecondNurse_25:
# 196 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_24

OldDaleTown_PokemonCenter_EventScript_SecondNurse_27:
# 201 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo
	return


OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature::
# 206 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_0
# 207 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 208 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 209 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_2
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_1:
# 213 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 214 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_5
# 219 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special BufferMonNickname
# 220 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_2
# 221 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_NATURE_ORDER, 1
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_8
# 260 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_NATURE_ORDER, 2
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_9
# 289 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_5, NATURE_ADAMANT
# 290 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_23, NATURE_BASHFUL
# 291 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_7, NATURE_BOLD
# 292 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_4, NATURE_BRAVE
# 293 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_19, NATURE_CALM
# 294 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_22, NATURE_CAREFUL
# 295 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_24, NATURE_DOCILE
# 296 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_20, NATURE_GENTLE
# 297 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_25, NATURE_HARDY
# 298 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_12, NATURE_HASTY
# 299 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_9, NATURE_IMPISH
# 300 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_13, NATURE_JOLLY
# 301 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_10, NATURE_LAX
# 302 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_3, NATURE_LONELY
# 303 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_16, NATURE_MILD
# 304 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_15, NATURE_MODEST
# 305 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_14, NATURE_NAIVE
# 306 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_6, NATURE_NAUGHTY
# 307 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_17, NATURE_QUIET
# 308 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_26, NATURE_QUIRKY
# 309 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_18, NATURE_RASH
# 310 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_8, NATURE_RELAXED
# 311 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_21, NATURE_SASSY
# 312 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_27, NATURE_SERIOUS
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_11, NATURE_TIMID
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_7:
# 315 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_8, MULTI_B_PRESSED
# 317 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 25, DYN_MULTICHOICE_CB_NONE
# 319 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_14
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_13:
# 324 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 325 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernaturename STR_VAR_2, VAR_RESULT
# 326 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox AreYouSureNatureChange, MSGBOX_YESNO
# 328 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_17
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_16:
# 333 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28
# 334 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 335 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChangeMonNature
# 336 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 337 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 338 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 339 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 340 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_29
# 341 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_2:
# 211 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_5:
# 215 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_1
# 216 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_8:
# 223 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_3, NATURE_LONELY
# 224 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_4, NATURE_BRAVE
# 225 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_5, NATURE_ADAMANT
# 226 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_6, NATURE_NAUGHTY
# 229 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_7, NATURE_BOLD
# 230 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_8, NATURE_RELAXED
# 231 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_9, NATURE_IMPISH
# 232 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_10, NATURE_LAX
# 235 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_11, NATURE_TIMID
# 236 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_12, NATURE_HASTY
# 237 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_13, NATURE_JOLLY
# 238 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_14, NATURE_NAIVE
# 241 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_15, NATURE_MODEST
# 242 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_16, NATURE_MILD
# 243 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_17, NATURE_QUIET
# 244 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_18, NATURE_RASH
# 247 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_19, NATURE_CALM
# 248 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_20, NATURE_GENTLE
# 249 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_21, NATURE_SASSY
# 250 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_22, NATURE_CAREFUL
# 253 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_23, NATURE_BASHFUL
# 254 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_24, NATURE_DOCILE
# 255 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_25, NATURE_HARDY
# 256 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_26, NATURE_QUIRKY
# 257 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_27, NATURE_SERIOUS
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_7

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_9:
# 262 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_5, NATURE_ADAMANT
# 263 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_15, NATURE_MODEST
# 264 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_11, NATURE_TIMID
# 265 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_13, NATURE_JOLLY
# 266 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_12, NATURE_HASTY
# 267 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_14, NATURE_NAIVE
# 268 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_16, NATURE_MILD
# 269 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_6, NATURE_NAUGHTY
# 270 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_18, NATURE_RASH
# 271 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_3, NATURE_LONELY
# 272 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_4, NATURE_BRAVE
# 273 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_17, NATURE_QUIET
# 274 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_19, NATURE_CALM
# 275 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_9, NATURE_IMPISH
# 276 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_21, NATURE_SASSY
# 277 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_22, NATURE_CAREFUL
# 278 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_8, NATURE_RELAXED
# 279 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_7, NATURE_BOLD
# 280 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_23, NATURE_BASHFUL
# 281 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_10, NATURE_LAX
# 282 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_20, NATURE_GENTLE
# 283 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_24, NATURE_DOCILE
# 284 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_25, NATURE_HARDY
# 285 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_26, NATURE_QUIRKY
# 286 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_27, NATURE_SERIOUS
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_7

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_14:
# 321 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_13

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_17:
# 330 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_16


OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender::
# 347 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GenderSwapInfo
# 348 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 349 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_2
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_1:
# 354 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 355 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_5
# 360 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsSelectedMonGenderless
# 361 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_8
# 365 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special BufferMonNickname
# 366 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox AreYouSureGenderSwap, MSGBOX_YESNO
# 367 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_12
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_11:
# 371 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28
# 372 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 373 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChangeMonGender
# 374 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 375 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 376 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 377 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 378 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_2
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_7:
# 380 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_2:
# 352 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_5:
# 356 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_0
# 357 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_8:
# 362 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_1
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_7

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_12:
# 369 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_11


OldDaleTown_PokemonCenter_EventScript_SecondNurseNo::
# 385 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurseNo_Text_0
# 386 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap::
# 391 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_2
# 397 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 398 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 399 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox TellLevelCapAndAsk, MSGBOX_YESNO
# 400 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_5
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_4:
# 404 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_0
# 405 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 406 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 407 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_8
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_7:
# 411 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 412 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_11
# 417 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_0x8007, ScriptGetPartyMonLevel
# 418 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8007, VAR_0x8006
# 419 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_MonAlreadyAtCap
# 420 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special BufferMonNickname
# 421 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox AreYouSureLevelCap, MSGBOX_YESNO
# 422 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_14
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_13:
# 426 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28
# 427 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 428 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special SetMonToLevelCap
# 429 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 430 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 431 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 432 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 433 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox MonHasBeenSetToLevelCap
# 434 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_2:
# 393 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox FeatureAvailableAfterMoveTutor
# 394 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_5:
# 402 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_4

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_8:
# 409 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_7

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_11:
# 413 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_Text_0
# 414 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_14:
# 424 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_13


OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap::
# 439 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_2
# 445 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 446 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 447 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox TellLevelCapAndAskBox, MSGBOX_YESNO
# 448 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_5
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_4:
# 452 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox AreYouSureLevelCapBox, MSGBOX_YESNO
# 453 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_8
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_7:
# 457 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28
# 458 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 459 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special LevelBoxesToCap
# 460 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 461 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 462 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 463 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 464 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox BoxHasBeenSetToLevelCap
# 465 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_2:
# 441 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox FeatureAvailableAfterMoveTutor
# 442 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_5:
# 450 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_4

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_8:
# 455 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_7


OldDaleTown_PokemonCenter_EventScript_SecondNurse_MonAlreadyAtCap::
# 470 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_MonAlreadyAtCap_Text_0
# 471 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount::
# 476 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWhiteOutCountForText
# 477 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_2
# 483 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 484 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_Text_1
OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_1:
# 486 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_2:
# 479 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_Text_0
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_1


OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo::
# 491 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox VersionNumber
# 493 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_GAME_SETTING_DIFFICULTY_MODE
# 495 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case GAME_SETTING_DIFFICULTY_VANILLA_MODE, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_3
# 497 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case GAME_SETTING_DIFFICULTY_EASY_MODE, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_4
# 499 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case GAME_SETTING_DIFFICULTY_NORMAL_MODE, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_5
# 501 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case GAME_SETTING_DIFFICULTY_HARD_MODE, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_6
# 503 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case GAME_SETTING_DIFFICULTY_HOF_MODE, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_7
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_1:
# 506 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_MIN_GRINDING_MODE, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_9
# 512 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox MinimalGrindingOff
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_8:
# 514 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_0
# 515 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RANDOMIZER_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_13
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_12:
# 529 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RANDOM_ABILITIES_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_16
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_15:
# 533 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RANDOM_LEARNSETS_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_24
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_23:
# 537 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_RANDOMIZER_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_29
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_26:
# 541 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_3:
# 496 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox VanillaMode
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_4:
# 498 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox EasyMode
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_5:
# 500 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox NormalMode
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_6:
# 502 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox HardMode
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_7:
# 504 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox HofMode
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_9:
# 508 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox MinimalGrindingOn
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_8

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_13:
# 517 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RANDOMIZER_MODE
# 519 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case MON_RANDOM, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_19
# 521 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case MON_RANDOM_BST, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_20
# 523 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case MON_RANDOM_LEGEND_AWARE, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_21
# 526 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_4
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_12

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_16:
# 531 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_5
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_15

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_19:
# 520 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_1
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_12

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_20:
# 522 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_2
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_12

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_21:
# 524 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_3
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_12

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_24:
# 535 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_6
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_23

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_27:
# 539 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_7
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_26

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_28:
# 537 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_RANDOM_LEARNSETS_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_27
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_26

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_29:
# 537 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_RANDOM_ABILITIES_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_28
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_26


OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_0:
# 146 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Nature Change$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_1:
# 147 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Gender Swap$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_2:
# 149 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Set Mon to Lvl Cap{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_3:
# 152 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Set Mon to Lvl Cap$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_4:
# 156 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Set Box to Lvl Cap{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_5:
# 159 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Set Box to Lvl Cap$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_6:
# 162 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "White Out Counter$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_7:
# 163 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Mode Info$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_8:
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_0:
# 206 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Which Pokémon?$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_1:
# 215 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I can't change the Nature of an Egg.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_2:
# 220 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Which new Nature suits {STR_VAR_1}\nbest?$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_3:
# 223 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Lonely         {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_4:
# 224 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Brave           {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_5:
# 225 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Adamant       {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_6:
# 226 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naughty      {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_7:
# 229 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Bold             {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk       $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_8:
# 230 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Relaxed       {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_9:
# 231 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Impish         {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_10:
# 232 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Lax              {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_11:
# 235 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Timid           {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_12:
# 236 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hasty          {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_13:
# 237 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Jolly           {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_14:
# 238 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naive          {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_15:
# 241 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Modest        {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_16:
# 242 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Mild             {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_17:
# 243 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Quiet          {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_18:
# 244 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Rash            {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_19:
# 247 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Calm             {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_20:
# 248 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Gentle         {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_21:
# 249 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Sassy          {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_22:
# 250 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Careful       {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_23:
# 253 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Bashful        Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_24:
# 254 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Docile          Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_25:
# 255 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hardy           Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_26:
# 256 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Quirky          Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_27:
# 257 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Serious       Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28:
# 333 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Excellent. We shall begin at once!$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_29:
# 340 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{STR_VAR_1}'s Nature has been\nchanged. Come again if you need\lsomething else.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_0:
# 356 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "This one is an Egg, no need to\nchange anything.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_1:
# 362 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Sorry, I can't swap the Gender of\nthat Pokémon.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_2:
# 378 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{STR_VAR_1}'s Gender has been\nswapped. Come again if you need\lsomething else.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurseNo_Text_0:
# 385 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I see. Come back if you need\nsomething else.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_Text_0:
# 413 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I can't level up an Egg.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_MonAlreadyAtCap_Text_0:
# 470 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That Pokémon is already level {STR_VAR_3}.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_Text_0:
# 479 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Current White Out Count: 0$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_Text_1:
# 484 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Current White Out Count: {STR_VAR_1}$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_0:
# 514 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Randomizer options:$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_1:
# 520 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Species$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_2:
# 522 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Scaled Species$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_3:
# 524 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Legendary-aware Species$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_4:
# 526 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Species not randomized$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_5:
# 531 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Abilities$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_6:
# 535 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Learnsets$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_7:
# 539 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}None$"

HelloHowCanIHelp::
# 545 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hello there, what can I help you\n"
	.string "with today?$"

AreYouSureNatureChange::
# 551 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I will now change\n"
	.string "{STR_VAR_1}'s Nature to {STR_VAR_2}.\p"
	.string "Is that okay?$"

GenderSwapInfo::
# 559 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I can change the Gender of any Pokémon\n"
	.string "you desire, be it for Gender-based\l"
	.string "evolutions or just any other reason,\l"
	.string "as long as it is from a gendered\l"
	.string "species.\p"
	.string "Which Pokémon do you want me to look at?$"

AreYouSureGenderSwap::
# 569 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I will now swap\n"
	.string "{STR_VAR_1}'s Gender.\p"
	.string "Is that okay?$"

TellLevelCapAndAsk::
# 576 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Current Level Cap: {STR_VAR_3}.\p"
	.string "Would you like to set a Pokémon\n"
	.string "to level {STR_VAR_3}?$"

AreYouSureLevelCap::
# 583 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I will now set {STR_VAR_1}\n"
	.string "to level {STR_VAR_3}.\p"
	.string "Is that okay?$"

MonHasBeenSetToLevelCap::
# 590 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{STR_VAR_1} has been set\n"
	.string "to level {STR_VAR_3}.\p"
	.string "Come again if you need something else.$"

TellLevelCapAndAskBox::
# 597 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Current Level Cap: {STR_VAR_3}.\p"
	.string "I can set all Unmarked Pokémon in your\n"
	.string "PC and Party to level {STR_VAR_3}.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}You can Mark Pokémon to NOT be leveled\n"
	.string "up using the “Mark” option in your PC.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Would you like me to set all Unmarked\n"
	.string "Pokémon to level {STR_VAR_3}?$"

AreYouSureLevelCapBox::
# 608 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I will now set all Unmarked Pokémon in\n"
	.string "your PC and Party to level {STR_VAR_3}.\p"
	.string "Is that okay?$"

BoxHasBeenSetToLevelCap::
# 615 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "All Unmarked Pokémon in your PC and\n"
	.string "Party have been set to level {STR_VAR_3}.\p"
	.string "Come again if you need something else.$"

FeatureAvailableAfterMoveTutor::
# 622 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "This feature will become available once\n"
	.string "you have met the Move Relearner in\l"
	.string "Dewford Town.$"

VersionNumber::
# 629 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Version: 2.0$"

VanillaMode::
# 634 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Difficulty: {COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla Mode$"

EasyMode::
# 639 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Difficulty: {COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode$"

NormalMode::
# 644 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Difficulty: {COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode$"

HardMode::
# 649 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Difficulty: {COLOR GREEN}{SHADOW LIGHT_GREEN}Hard Mode$"

HofMode::
# 654 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Difficulty: {COLOR GREEN}{SHADOW LIGHT_GREEN}Hall of Fame Mode$"

MinimalGrindingOn::
# 659 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Minimal Grinding Mode:\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Enabled$"

MinimalGrindingOff::
# 665 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Minimal Grinding Mode:\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Disabled$"

LevelCapIncreasedTo::
# 672 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Level Cap increased to: {STR_VAR_3}.$"
