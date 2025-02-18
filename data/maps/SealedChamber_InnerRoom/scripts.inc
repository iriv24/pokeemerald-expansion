# 1 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 2 "data/maps/SealedChamber_InnerRoom/scripts.pory"
.set LOCALID_LUGIA, 1
# 3 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 4 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_MapScripts::
# 5 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SealedChamber_InnerRoom_OnTransition
# 6 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SealedChamber_InnerRoom_OnResume
# 7 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.byte 0
# 8 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 9 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_OnTransition:
# 10 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	call_if_set FLAG_CAUGHT_LUGIA, SealedChamber_InnerRoom_EventScript_HideLugia
# 11 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	call_if_unset FLAG_CAUGHT_LUGIA, SealedChamber_InnerRoom_EventScript_TryShowLugia
# 12 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 13 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 14 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_HideLugia::
# 15 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_HIDE_LUGIA
# 16 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	return
# 17 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 18 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_TryShowLugia::
# 19 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_LUGIA, Common_EventScript_NopReturn
# 20 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	clearflag FLAG_HIDE_LUGIA
# 21 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	return
# 22 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 23 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_OnResume:
# 24 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SealedChamber_InnerRoom_EventScript_TryRemoveLugia
# 25 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 26 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 27 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_TryRemoveLugia::
# 28 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 29 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 30 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	removeobject LOCALID_LUGIA
# 31 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	return
# 32 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 33 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_Lugia::
# 34 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lock
# 35 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, SealedChamber_InnerRoom_EventScript_NotStrongEnoughYet
# 36 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	faceplayer
# 37 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitse
# 38 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 39 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitmoncry
# 40 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 20
# 41 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	seteventmon SPECIES_LUGIA, 70
# 42 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 43 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 44 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 45 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 46 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 47 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SealedChamber_InnerRoom_EventScript_DefeatedLugia
# 48 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SealedChamber_InnerRoom_EventScript_RanFromLugia
# 49 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SealedChamber_InnerRoom_EventScript_RanFromLugia
# 50 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_CAUGHT_LUGIA
# 51 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	release
# 52 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 53 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 54 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_NotStrongEnoughYet::
# 55 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox SealedChamber_InnerRoom_Text_NotStrongEnoughYet, MSGBOX_DEFAULT
# 56 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	release
# 57 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 58 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 59 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_DefeatedLugia::
# 60 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_DEFEATED_LUGIA
# 61 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setvar VAR_0x8004, SPECIES_LUGIA
# 62 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 63 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 64 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 65 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_RanFromLugia::
# 66 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setvar VAR_0x8004, SPECIES_LUGIA
# 67 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 68 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 69 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 70 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleBackWall::
# 71 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 72 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_FirstWailordLastRelicanth
# 73 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@goto_if_set FLAG_REGI_DOORS_OPENED, SealedChamber_InnerRoom_EventScript_NoEffect
# 74 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@specialvar VAR_RESULT, CheckRelicanthWailord
# 75 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@goto_if_eq VAR_RESULT, FALSE, SealedChamber_InnerRoom_EventScript_NoEffect
# 76 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@fadeoutbgm 0
# 77 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@playse SE_TRUCK_MOVE
# 78 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@special DoSealedChamberShakingEffect_Long
# 79 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@waitstate
# 80 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@delay 40
# 81 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@special DoSealedChamberShakingEffect_Short
# 82 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@waitstate
# 83 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@playse SE_DOOR
# 84 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@delay 40
# 85 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@special DoSealedChamberShakingEffect_Short
# 86 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@waitstate
# 87 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@playse SE_DOOR
# 88 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@delay 40
# 89 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@special DoSealedChamberShakingEffect_Short
# 90 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@waitstate
# 91 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@playse SE_DOOR
# 92 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@delay 40
# 93 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@msgbox gText_DoorOpenedFarAway, MSGBOX_DEFAULT
# 94 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@closemessage
# 95 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@fadeinbgm 0
# 96 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	@setflag FLAG_REGI_DOORS_OPENED
# 97 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 98 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 99 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 100 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_NoEffect::
# 101 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 102 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 103 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 104 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart1::
# 105 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 106 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_InThisCaveWeHaveLived
# 107 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 108 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 109 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 110 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart2::
# 111 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 112 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeOweAllToThePokemon
# 113 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 114 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 115 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 116 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart3::
# 117 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 118 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ButWeSealedThePokemonAway
# 119 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 120 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 121 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 122 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart4::
# 123 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 124 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeFearedIt
# 125 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 126 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 127 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 128 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart5::
# 129 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 130 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ThoseWithCourageHope
# 131 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 132 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 133 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 134 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart6::
# 135 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 136 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_OpenDoorEternalPokemonWaits
# 137 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 138 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 139 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 140 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_Text_NotStrongEnoughYet:
# 141 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "You sense you are not strong enough to\n"
# 142 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "take on this Pokémon yet.\p"
# 143 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "And you also shouldn't be here you\n"
# 144 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.string "little DexNav-abusing cheater.$"
