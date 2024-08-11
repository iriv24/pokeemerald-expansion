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
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is\n"
# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "for any POKéMON TRAINER to use.\p"
# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naturally, that means you're welcome\n"
# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "to use it, too.$"
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON CENTERS are great!\p"
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can use their services as much\n"
# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "as you like, and it's all for free.\l"
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You never have to worry!$"
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "But they say they're still making\n"
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "adjustments.$"
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
# 62 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 63 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 64 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I traded POKéMON right away.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse::
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 70 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 72 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox HelloHowCanIHelp
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_0, 0
# 74 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_1, 1
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_2, MULTI_B_PRESSED
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_2
OldDaleTown_PokemonCenter_EventScript_SecondNurse_1:
# 85 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_5
OldDaleTown_PokemonCenter_EventScript_SecondNurse_4:
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_7
	return

OldDaleTown_PokemonCenter_EventScript_SecondNurse_2:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_5:
# 87 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_4

OldDaleTown_PokemonCenter_EventScript_SecondNurse_7:
# 92 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetLevelCap
	return


OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature::
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_0
# 98 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 100 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_2
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_1:
# 104 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 105 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_5
# 110 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special BufferMonNickname
# 111 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_2
# 112 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_3, NATURE_ADAMANT
# 113 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_4, NATURE_BASHFUL
# 114 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_5, NATURE_BOLD
# 115 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_6, NATURE_BRAVE
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_7, NATURE_CALM
# 117 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_8, NATURE_CAREFUL
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_9, NATURE_DOCILE
# 119 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_10, NATURE_GENTLE
# 120 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_11, NATURE_HARDY
# 121 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_12, NATURE_HASTY
# 122 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_13, NATURE_IMPISH
# 123 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_14, NATURE_JOLLY
# 124 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_15, NATURE_LAX
# 125 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_16, NATURE_LONELY
# 126 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_17, NATURE_MILD
# 127 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_18, NATURE_MODEST
# 128 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_19, NATURE_NAIVE
# 129 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_20, NATURE_NAUGHTY
# 130 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_21, NATURE_QUIET
# 131 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_22, NATURE_QUIRKY
# 132 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_23, NATURE_RASH
# 133 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_24, NATURE_RELAXED
# 134 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_25, NATURE_SASSY
# 135 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_26, NATURE_SERIOUS
# 136 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_27, NATURE_TIMID
# 137 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_2, MULTI_B_PRESSED
# 139 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 141 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_8
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_7:
# 146 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 147 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernaturename STR_VAR_2, VAR_RESULT
# 148 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28, MSGBOX_YESNO
# 150 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_11
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_10:
# 155 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_29
# 156 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 157 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChangeMonNature
# 158 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 159 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 160 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 161 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 162 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_30
# 163 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_2:
# 102 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_5:
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_1
# 107 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_8:
# 143 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_7

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_11:
# 152 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_10


OldDaleTown_PokemonCenter_EventScript_SecondNurseNo::
# 168 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurseNo_Text_0
# 169 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetLevelCap::
# 174 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetLevelCapForText
# 175 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 176 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetLevelCap_Text_0
# 177 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_0:
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Nature Change$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_1:
# 74 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Level Cap$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_2:
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_0:
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Which Pokémon?$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_1:
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I can't change the Nature of an egg.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_2:
# 111 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Which new Nature suits {STR_VAR_1}\nbest?$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_3:
# 112 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Adamant       {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_4:
# 113 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Bashful        Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_5:
# 114 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Bold             {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk       $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_6:
# 115 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Brave           {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_7:
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Calm             {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_8:
# 117 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Careful       {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_9:
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Docile          Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_10:
# 119 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Gentle         {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_11:
# 120 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hardy           Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_12:
# 121 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hasty          {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_13:
# 122 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Impish         {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_14:
# 123 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Jolly           {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_15:
# 124 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Lax              {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_16:
# 125 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Lonely         {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_17:
# 126 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Mild             {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_18:
# 127 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Modest        {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_19:
# 128 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naive          {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_20:
# 129 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naughty      {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_21:
# 130 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Quiet          {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_22:
# 131 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Quirky          Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_23:
# 132 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Rash            {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_24:
# 133 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Relaxed       {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_25:
# 134 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Sassy          {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_26:
# 135 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Serious       Neutral         $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_27:
# 136 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Timid           {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28:
# 148 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "So {STR_VAR_1} should acquire the\n{STR_VAR_2} Nature?$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_29:
# 155 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Excellent. We shall begin at once!$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_30:
# 162 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{STR_VAR_1}'s nature has been\nchanged. Come again if you need\lsomething else.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurseNo_Text_0:
# 168 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I see. Come back if you need\nsomething else.$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetLevelCap_Text_0:
# 176 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Current Level Cap: {STR_VAR_1}$"

HelloHowCanIHelp::
# 181 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hello there, what can I help you\n"
	.string "with today?$"
