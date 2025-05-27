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
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_3, NATURE_ADAMANT
# 222 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_4, NATURE_BASHFUL
# 223 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_5, NATURE_BOLD
# 224 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_6, NATURE_BRAVE
# 225 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_7, NATURE_CALM
# 226 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_8, NATURE_CAREFUL
# 227 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_9, NATURE_DOCILE
# 228 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_10, NATURE_GENTLE
# 229 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_11, NATURE_HARDY
# 230 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_12, NATURE_HASTY
# 231 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_13, NATURE_IMPISH
# 232 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_14, NATURE_JOLLY
# 233 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_15, NATURE_LAX
# 234 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_16, NATURE_LONELY
# 235 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_17, NATURE_MILD
# 236 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_18, NATURE_MODEST
# 237 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_19, NATURE_NAIVE
# 238 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_20, NATURE_NAUGHTY
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_21, NATURE_QUIET
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_22, NATURE_QUIRKY
# 241 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_23, NATURE_RASH
# 242 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_24, NATURE_RELAXED
# 243 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_25, NATURE_SASSY
# 244 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_26, NATURE_SERIOUS
# 245 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_27, NATURE_TIMID
# 246 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_8, MULTI_B_PRESSED
# 248 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 250 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_8
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_7:
# 255 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 256 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernaturename STR_VAR_2, VAR_RESULT
# 257 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox AreYouSureNatureChange, MSGBOX_YESNO
# 259 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_11
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_10:
# 264 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28
# 265 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 266 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChangeMonNature
# 267 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 268 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 269 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 270 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 271 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_29
# 272 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
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
# 252 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_7

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_11:
# 261 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_10


OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender::
# 278 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GenderSwapInfo
# 279 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 280 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 281 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_2
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_1:
# 285 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 286 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 287 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_SNORUNT, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 288 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_RALTS, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 289 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_KIRLIA, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 290 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_SALANDIT, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 291 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_BURMY_PLANT, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 292 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_BURMY_SANDY, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 293 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_BURMY_TRASH, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 294 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_COMBEE, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 295 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_ESPURR, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 296 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_BASCULIN_RED_STRIPED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 297 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_BASCULIN_BLUE_STRIPED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 298 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_BASCULIN_WHITE_STRIPED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 299 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_LECHONK, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 315 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_EGG, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_7
# 319 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_2
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_4:
# 321 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_2:
# 283 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6:
# 300 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special BufferMonNickname
# 301 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox AreYouSureGenderSwap, MSGBOX_YESNO
# 302 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_10
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_9:
# 306 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28
# 307 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 308 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChangeMonGender
# 309 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 310 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 311 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 312 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_0
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_4

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_7:
# 316 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_1
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_4

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_10:
# 304 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_9


OldDaleTown_PokemonCenter_EventScript_SecondNurseNo::
# 326 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurseNo_Text_0
# 327 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap::
# 332 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_2
# 338 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 339 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 340 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox TellLevelCapAndAsk, MSGBOX_YESNO
# 341 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_5
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_4:
# 345 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_0
# 346 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 347 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 348 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_8
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_7:
# 352 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 353 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_11
# 358 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_0x8007, ScriptGetPartyMonLevel
# 359 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8007, VAR_0x8006
# 360 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_MonAlreadyAtCap
# 361 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special BufferMonNickname
# 362 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox AreYouSureLevelCap, MSGBOX_YESNO
# 363 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_14
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_13:
# 367 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28
# 368 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 369 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special SetMonToLevelCap
# 370 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 371 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 372 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 373 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 374 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox MonHasBeenSetToLevelCap
# 375 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_2:
# 334 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox FeatureAvailableAfterMoveTutor
# 335 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_5:
# 343 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_4

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_8:
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_7

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_11:
# 354 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_Text_0
# 355 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_14:
# 365 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_13


OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap::
# 380 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_2
# 386 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 388 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox TellLevelCapAndAskBox, MSGBOX_YESNO
# 389 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_5
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_4:
# 393 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox AreYouSureLevelCapBox, MSGBOX_YESNO
# 394 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_8
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_7:
# 398 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28
# 399 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 400 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special LevelBoxesToCap
# 401 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 402 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 403 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 404 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 405 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox BoxHasBeenSetToLevelCap
# 406 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_2:
# 382 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox FeatureAvailableAfterMoveTutor
# 383 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_5:
# 391 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_4

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_8:
# 396 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_7


OldDaleTown_PokemonCenter_EventScript_SecondNurse_MonAlreadyAtCap::
# 411 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_MonAlreadyAtCap_Text_0
# 412 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount::
# 417 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWhiteOutCountForText
# 418 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_2
# 424 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 425 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_Text_1
OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_1:
# 427 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_2:
# 420 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_Text_0
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_1


OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo::
# 432 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox VersionNumber
# 434 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_MIN_GRINDING_MODE, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_2
# 447 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_EASY_MODE
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_11
# 453 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox NormalMode
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_1:
# 456 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_0
# 457 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RANDOMIZER_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_6
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_5:
# 471 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RANDOM_ABILITIES_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_15
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_14:
# 475 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RANDOM_LEARNSETS_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_23
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_22:
# 479 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_RANDOMIZER_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_28
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_25:
# 483 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_2:
# 436 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_EASY_MODE
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_8
# 442 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox NormalModeWithMgm
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_6:
# 459 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RANDOMIZER_MODE
# 461 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case MON_RANDOM, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_18
# 463 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case MON_RANDOM_BST, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_19
# 465 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case MON_RANDOM_LEGEND_AWARE, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_20
# 468 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_4
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_5

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_8:
# 438 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox EasyModeWithMgm
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_11:
# 449 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox EasyMode
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_15:
# 473 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_5
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_14

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_18:
# 462 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_1
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_5

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_19:
# 464 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_2
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_5

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_20:
# 466 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_3
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_5

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_23:
# 477 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_6
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_22

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_26:
# 481 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_7
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_25

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_27:
# 479 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_RANDOM_LEARNSETS_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_26
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_25

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_28:
# 479 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_RANDOM_ABILITIES_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_27
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_25


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
# 221 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Adamant       {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_4:
# 222 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Bashful        Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_5:
# 223 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Bold             {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk       $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_6:
# 224 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Brave           {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_7:
# 225 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Calm             {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_8:
# 226 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Careful       {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_9:
# 227 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Docile          Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_10:
# 228 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Gentle         {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_11:
# 229 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hardy           Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_12:
# 230 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hasty          {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_13:
# 231 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Impish         {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_14:
# 232 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Jolly           {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_15:
# 233 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Lax              {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_16:
# 234 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Lonely         {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_17:
# 235 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Mild             {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_18:
# 236 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Modest        {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_19:
# 237 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naive          {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_20:
# 238 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naughty      {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_21:
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Quiet          {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_22:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Quirky          Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_23:
# 241 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Rash            {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_24:
# 242 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Relaxed       {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_25:
# 243 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Sassy          {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_26:
# 244 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Serious       Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_27:
# 245 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Timid           {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28:
# 264 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Excellent. We shall begin at once!$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_29:
# 271 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{STR_VAR_1}'s Nature has been\nchanged. Come again if you need\lsomething else.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_0:
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{STR_VAR_1}'s Gender has been\nswapped. Come again if you need\lsomething else.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_1:
# 316 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I can't swap the Gender of an Egg.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_2:
# 319 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Sorry, I can't swap the Gender of\nthat Pokémon.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurseNo_Text_0:
# 326 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I see. Come back if you need\nsomething else.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_Text_0:
# 354 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I can't level up an Egg.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_MonAlreadyAtCap_Text_0:
# 411 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That Pokémon is already level {STR_VAR_3}.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_Text_0:
# 420 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Current White Out Count: 0$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_Text_1:
# 425 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Current White Out Count: {STR_VAR_1}$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_0:
# 456 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Randomizer options:$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_1:
# 462 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Species$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_2:
# 464 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Scaled Species$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_3:
# 466 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Legendary-aware Species$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_4:
# 468 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Species not randomized$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_5:
# 473 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Abilities$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_6:
# 477 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Learnsets$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_7:
# 481 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}None$"

HelloHowCanIHelp::
# 487 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hello there, what can I help you\n"
	.string "with today?$"

AreYouSureNatureChange::
# 493 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I will now change\n"
	.string "{STR_VAR_1}'s Nature to {STR_VAR_2}.\p"
	.string "Is that okay?$"

GenderSwapInfo::
# 501 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I can swap the Gender of the\n"
	.string "following Pokémon:\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Snorunt, Ralts, Kirlia, Salandit, Burmy,\n"
	.string "Combee, Espurr, Basculin, and Lechonk.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}This is because these Pokémon have\n"
	.string "Gender-based evolutions.\p"
	.string "Which Pokémon's Gender should I swap?$"

AreYouSureGenderSwap::
# 512 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I will now swap\n"
	.string "{STR_VAR_1}'s Gender.\p"
	.string "Is that okay?$"

TellLevelCapAndAsk::
# 519 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Current Level Cap: {STR_VAR_3}.\p"
	.string "Would you like to set a Pokémon\n"
	.string "to level {STR_VAR_3}?$"

AreYouSureLevelCap::
# 526 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I will now set {STR_VAR_1}\n"
	.string "to level {STR_VAR_3}.\p"
	.string "Is that okay?$"

MonHasBeenSetToLevelCap::
# 533 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{STR_VAR_1} has been set\n"
	.string "to level {STR_VAR_3}.\p"
	.string "Come again if you need something else.$"

TellLevelCapAndAskBox::
# 540 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Current Level Cap: {STR_VAR_3}.\p"
	.string "I can set all Unmarked Pokémon in your\n"
	.string "PC and Party to level {STR_VAR_3}.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}You can Mark Pokémon to NOT be leveled\n"
	.string "up using the “Mark” option in your PC.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Would you like me to set all Unmarked\n"
	.string "Pokémon to level {STR_VAR_3}?$"

AreYouSureLevelCapBox::
# 551 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I will now set all Unmarked Pokémon in\n"
	.string "your PC and Party to level {STR_VAR_3}.\p"
	.string "Is that okay?$"

BoxHasBeenSetToLevelCap::
# 558 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "All Unmarked Pokémon in your PC and\n"
	.string "Party have been set to level {STR_VAR_3}.\p"
	.string "Come again if you need something else.$"

FeatureAvailableAfterMoveTutor::
# 565 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "This feature will become available once\n"
	.string "you have met the Move Relearner in\l"
	.string "Dewford Town.$"

VersionNumber::
# 572 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Version: 1.2$"

EasyMode::
# 577 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Difficulty: {COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode$"

EasyModeWithMgm::
# 582 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Difficulty: {COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}with {COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode$"

NormalMode::
# 588 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Difficulty: {COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode$"

NormalModeWithMgm::
# 593 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Difficulty: {COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}with {COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode$"

LevelCapIncreasedTo::
# 599 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Level Cap increased to: {STR_VAR_3}.$"
