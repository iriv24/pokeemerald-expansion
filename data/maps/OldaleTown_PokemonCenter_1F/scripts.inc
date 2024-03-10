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

OldDaleTown_PokemonCenter_EventScript_NatureMaster::
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 70 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 71 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_0, MSGBOX_YESNO
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_NatureMaster_2
OldDaleTown_PokemonCenter_EventScript_NatureMaster_1:
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_1
# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_NatureMaster_5
OldDaleTown_PokemonCenter_EventScript_NatureMaster_4:
# 87 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 89 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_NatureMaster_8
# 95 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special BufferMonNickname
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_3
# 98 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_4, NATURE_ADAMANT
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_5, NATURE_BASHFUL
# 100 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_6, NATURE_BOLD
# 101 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_7, NATURE_BRAVE
# 102 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_8, NATURE_CALM
# 103 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_9, NATURE_CAREFUL
# 104 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_10, NATURE_DOCILE
# 105 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_11, NATURE_GENTLE
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_12, NATURE_HARDY
# 107 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_13, NATURE_HASTY
# 108 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_14, NATURE_IMPISH
# 109 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_15, NATURE_JOLLY
# 110 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_16, NATURE_LAX
# 111 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_17, NATURE_LONELY
# 112 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_18, NATURE_MILD
# 113 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_19, NATURE_MODEST
# 114 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_20, NATURE_NAIVE
# 115 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_21, NATURE_NAUGHTY
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_22, NATURE_QUIET
# 117 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_23, NATURE_QUIRKY
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_24, NATURE_RASH
# 119 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_25, NATURE_RELAXED
# 120 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_26, NATURE_SASSY
# 121 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_27, NATURE_SERIOUS
# 122 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_28, NATURE_TIMID
# 123 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_29, MULTI_B_PRESSED
# 126 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 128 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_NatureMaster_11
OldDaleTown_PokemonCenter_EventScript_NatureMaster_10:
# 133 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 134 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernaturename STR_VAR_2, VAR_RESULT
# 136 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_30, MSGBOX_YESNO
# 138 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_NatureMaster_14
OldDaleTown_PokemonCenter_EventScript_NatureMaster_13:
# 143 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_31
# 145 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 146 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChangeMonNature
# 147 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 148 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 149 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 150 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 152 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_32
# 153 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_NatureMaster_2:
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_NatureMasterNo
	goto OldDaleTown_PokemonCenter_EventScript_NatureMaster_1

OldDaleTown_PokemonCenter_EventScript_NatureMaster_5:
# 84 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_NatureMasterNo
	goto OldDaleTown_PokemonCenter_EventScript_NatureMaster_4

OldDaleTown_PokemonCenter_EventScript_NatureMaster_8:
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_2
# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_NatureMaster_11:
# 130 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_NatureMasterNo
	goto OldDaleTown_PokemonCenter_EventScript_NatureMaster_10

OldDaleTown_PokemonCenter_EventScript_NatureMaster_14:
# 140 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_NatureMasterNo
	goto OldDaleTown_PokemonCenter_EventScript_NatureMaster_13


OldDaleTown_PokemonCenter_EventScript_NatureMasterNo::
# 158 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_NatureMasterNo_Text_0
# 159 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_0:
# 71 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hello, would you like one of your\nPokémon to change their Nature?$"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_1:
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Which Pokémon?$"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_2:
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I can't change the Nature of an egg.$"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_3:
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Which new Nature suits {STR_VAR_1}\nbest?$"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_4:
# 98 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Adamant       {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk$"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_5:
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Bashful        Neutral         $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_6:
# 100 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Bold             {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk       $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_7:
# 101 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Brave           {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed     $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_8:
# 102 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Calm             {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk     $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_9:
# 103 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Careful       {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk   $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_10:
# 104 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Docile          Neutral         $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_11:
# 105 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Gentle         {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def     $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_12:
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hardy           Neutral         $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_13:
# 107 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hasty          {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def     $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_14:
# 108 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Impish         {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk   $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_15:
# 109 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Jolly           {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpAtk   $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_16:
# 110 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Lax              {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef   $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_17:
# 111 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Lonely         {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def     $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_18:
# 112 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Mild             {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Def   $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_19:
# 113 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Modest        {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk   $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_20:
# 114 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naive          {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_21:
# 115 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naughty      {COLOR RED}{SHADOW LIGHT_RED}+Atk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef   $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_22:
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Quiet          {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_23:
# 117 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Quirky          Neutral         $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_24:
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Rash            {COLOR RED}{SHADOW LIGHT_RED}+SpAtk{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-SpDef $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_25:
# 119 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Relaxed       {COLOR RED}{SHADOW LIGHT_RED}+Def{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed   $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_26:
# 120 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Sassy          {COLOR RED}{SHADOW LIGHT_RED}+SpDef{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Speed $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_27:
# 121 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Serious       Neutral         $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_28:
# 122 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Timid           {COLOR RED}{SHADOW LIGHT_RED}+Speed{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-Atk   $"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_29:
# 123 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Cancel$"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_30:
# 136 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "So {STR_VAR_1} should acquire the\n{STR_VAR_2} Nature?$"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_31:
# 143 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Excellent. We shall begin at once!$"

OldDaleTown_PokemonCenter_EventScript_NatureMaster_Text_32:
# 152 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{STR_VAR_1}'s nature has been\nchanged. Come again if you need to\pchange another Pokémon's nature.$"

OldDaleTown_PokemonCenter_EventScript_NatureMasterNo_Text_0:
# 158 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I see. Come back when one of your\nPokémon needs to acquire a new Nature.$"
