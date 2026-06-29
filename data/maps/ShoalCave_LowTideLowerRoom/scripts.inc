# 1 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 2 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_MapScripts::
# 3 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideLowerRoom_OnLoad
# 4 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.byte 0
# 5 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 6 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_OnLoad:
# 7 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	call ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatiles
# 8 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 9 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 10 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatiles::
# 11 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_4, ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatilesEnd
# 12 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setmetatile 18, 2, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
# 13 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	return
# 14 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 15 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatilesEnd::
# 16 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	return
# 17 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 18 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4::
# 19 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	lockall
# 20 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_4, ShoalCave_LowTideLowerRoom_EventScript_ReceivedShoalSalt
# 21 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 22 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 23 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setmetatile 18, 2, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 24 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	special DrawWholeMapView
# 25 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_4
# 26 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	releaseall
# 27 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 28 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 29 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ReceivedShoalSalt::
# 30 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
# 31 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	releaseall
# 32 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	end

ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner::
# 37 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	lock
# 38 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	faceplayer
# 39 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_2
# 45 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_SummonerIntro, MSGBOX_YESNO
ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_1:
# 48 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 50 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_6
ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_5:
# 55 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType
# 56 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_2:
# 41 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_SummonerIntroQuick, MSGBOX_YESNO
	goto ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_1

ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_6:
# 52 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_SummonWomanManNo
	goto ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_5


ShoalCave_LowTideLowerRoom_EventScript_ChooseType::
# 61 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_WhichType, MSGBOX_DEFAULT
# 64 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge ShoalCave_LowTideLowerRoom_EventScript_ChooseType_2
# 72 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseType_Text_3, 0
# 73 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseType_Text_4, 1
# 74 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseType_Text_1, 2
# 75 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseType_Text_2, MULTI_B_PRESSED
ShoalCave_LowTideLowerRoom_EventScript_ChooseType_1:
# 80 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 82 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseType_6
ShoalCave_LowTideLowerRoom_EventScript_ChooseType_5:
# 87 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseType_9
ShoalCave_LowTideLowerRoom_EventScript_ChooseType_8:
# 91 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseType_12
ShoalCave_LowTideLowerRoom_EventScript_ChooseType_11:
# 95 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseType_15
ShoalCave_LowTideLowerRoom_EventScript_ChooseType_14:
# 99 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseType_18
ShoalCave_LowTideLowerRoom_EventScript_ChooseType_17:
# 108 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseType_21
ShoalCave_LowTideLowerRoom_EventScript_ChooseType_20:
# 118 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_ChooseType_2:
# 66 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseType_Text_0, 3
# 67 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseType_Text_1, 4
# 68 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseType_Text_2, MULTI_B_PRESSED
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType_1

ShoalCave_LowTideLowerRoom_EventScript_ChooseType_6:
# 84 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_SummonWomanManNo
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType_5

ShoalCave_LowTideLowerRoom_EventScript_ChooseType_9:
# 89 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_PastParadox
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType_8

ShoalCave_LowTideLowerRoom_EventScript_ChooseType_12:
# 93 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_FutureParadox
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType_11

ShoalCave_LowTideLowerRoom_EventScript_ChooseType_15:
# 97 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_UltraBeast
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType_14

ShoalCave_LowTideLowerRoom_EventScript_ChooseType_18:
# 101 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_ConfirmSummonParadoxHard, MSGBOX_YESNO
# 102 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseType_24
ShoalCave_LowTideLowerRoom_EventScript_ChooseType_23:
# 106 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ParadoxHard
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType_17

ShoalCave_LowTideLowerRoom_EventScript_ChooseType_21:
# 110 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_ConfirmSummonUltraBeastHard, MSGBOX_YESNO
# 111 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseType_27
ShoalCave_LowTideLowerRoom_EventScript_ChooseType_26:
# 115 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_UltraBeastHard
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType_20

ShoalCave_LowTideLowerRoom_EventScript_ChooseType_24:
# 104 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType_23

ShoalCave_LowTideLowerRoom_EventScript_ChooseType_27:
# 113 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType_26


ShoalCave_LowTideLowerRoom_EventScript_PastParadox::
# 123 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_WhichPokemon, MSGBOX_DEFAULT
# 125 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_0, SPECIES_GREAT_TUSK
# 126 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_1, SPECIES_SCREAM_TAIL
# 127 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_2, SPECIES_BRUTE_BONNET
# 128 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_3, SPECIES_FLUTTER_MANE
# 129 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_4, SPECIES_SLITHER_WING
# 130 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_5, SPECIES_SANDY_SHOCKS
# 131 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_6, SPECIES_ROARING_MOON
# 132 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_7, SPECIES_WALKING_WAKE
# 133 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_8, SPECIES_GOUGING_FIRE
# 134 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_9, SPECIES_RAGING_BOLT
# 135 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_10, MULTI_B_PRESSED
# 139 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, SPECIES_GREAT_TUSK, DYN_MULTICHOICE_CB_NONE
# 141 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_PastParadox_2
ShoalCave_LowTideLowerRoom_EventScript_PastParadox_1:
# 146 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon
# 148 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_PastParadox_2:
# 143 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType
	goto ShoalCave_LowTideLowerRoom_EventScript_PastParadox_1


ShoalCave_LowTideLowerRoom_EventScript_FutureParadox::
# 154 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_WhichPokemon, MSGBOX_DEFAULT
# 156 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_0, SPECIES_IRON_TREADS
# 157 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_1, SPECIES_IRON_BUNDLE
# 158 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_2, SPECIES_IRON_HANDS
# 159 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_3, SPECIES_IRON_JUGULIS
# 160 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_4, SPECIES_IRON_MOTH
# 161 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_5, SPECIES_IRON_THORNS
# 162 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_6, SPECIES_IRON_VALIANT
# 163 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_7, SPECIES_IRON_LEAVES
# 164 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_8, SPECIES_IRON_BOULDER
# 165 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_9, SPECIES_IRON_CROWN
# 166 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_10, MULTI_B_PRESSED
# 170 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, SPECIES_IRON_TREADS, DYN_MULTICHOICE_CB_NONE
# 172 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_2
ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_1:
# 177 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon
# 179 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_2:
# 174 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType
	goto ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_1


ShoalCave_LowTideLowerRoom_EventScript_UltraBeast::
# 185 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_WhichPokemon, MSGBOX_DEFAULT
# 187 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_0, SPECIES_NIHILEGO
# 188 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_1, SPECIES_GUZZLORD
# 189 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_2, SPECIES_XURKITREE
# 190 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_3, SPECIES_BUZZWOLE
# 191 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_4, SPECIES_BLACEPHALON
# 192 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_5, SPECIES_STAKATAKA
# 193 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_6, SPECIES_POIPOLE
# 194 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_7, SPECIES_PHEROMOSA
# 195 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_8, SPECIES_CELESTEELA
# 196 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_9, SPECIES_KARTANA
# 197 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_10, MULTI_B_PRESSED
# 201 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, SPECIES_NIHILEGO, DYN_MULTICHOICE_CB_NONE
# 203 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_2
ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_1:
# 208 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon
# 210 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_2:
# 205 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseType
	goto ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_1


ShoalCave_LowTideLowerRoom_EventScript_ParadoxHard::
# 216 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	randomelement SPECIES_IRON_TREADS, SPECIES_IRON_BUNDLE, SPECIES_IRON_HANDS, SPECIES_IRON_JUGULIS, SPECIES_IRON_MOTH, SPECIES_IRON_THORNS, SPECIES_IRON_VALIANT, SPECIES_IRON_LEAVES, SPECIES_IRON_BOULDER, SPECIES_IRON_CROWN, SPECIES_GREAT_TUSK, SPECIES_SCREAM_TAIL, SPECIES_BRUTE_BONNET, SPECIES_FLUTTER_MANE, SPECIES_SLITHER_WING, SPECIES_SANDY_SHOCKS, SPECIES_ROARING_MOON, SPECIES_WALKING_WAKE, SPECIES_GOUGING_FIRE, SPECIES_RAGING_BOLT
# 218 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 219 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_VeryWell, MSGBOX_DEFAULT
# 220 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	delay 30
# 222 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setwildbattle VAR_0x8005, 80
# 223 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	waitse
# 224 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_ENCOUNTER
# 225 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	delay 40
# 226 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	waitmoncry
# 227 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dowildbattle
# 228 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end


ShoalCave_LowTideLowerRoom_EventScript_UltraBeastHard::
# 233 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	randomelement SPECIES_NIHILEGO, SPECIES_GUZZLORD, SPECIES_XURKITREE, SPECIES_BUZZWOLE, SPECIES_BLACEPHALON, SPECIES_BLACEPHALON, SPECIES_STAKATAKA, SPECIES_POIPOLE, SPECIES_PHEROMOSA, SPECIES_CELESTEELA, SPECIES_KARTANA
# 235 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 236 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_VeryWell, MSGBOX_DEFAULT
# 237 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	delay 30
# 239 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setwildbattle VAR_0x8005, 80
# 240 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	waitse
# 241 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_ENCOUNTER
# 242 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	delay 40
# 243 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	waitmoncry
# 244 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dowildbattle
# 245 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end


ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon::
# 250 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 251 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8005
# 252 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_ConfirmSummon, MSGBOX_YESNO
# 254 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon_2
ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon_1:
# 259 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_VeryWell, MSGBOX_DEFAULT
# 260 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	delay 30
# 262 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setwildbattle VAR_0x8005, 50
# 263 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	waitse
# 264 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_ENCOUNTER
# 265 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	delay 40
# 266 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	waitmoncry
# 267 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dowildbattle
# 268 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon_2:
# 256 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_SummonWomanManNo
	goto ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon_1


ShoalCave_LowTideLowerRoom_EventScript_SummonWomanManNo::
# 274 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_SummonWomanDeclined, MSGBOX_DEFAULT
# 275 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end


ShoalCave_LowTideLowerRoom_EventScript_ChooseType_Text_0:
# 66 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Paradox$"

ShoalCave_LowTideLowerRoom_EventScript_ChooseType_Text_1:
# 67 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Ultra Beast$"

ShoalCave_LowTideLowerRoom_EventScript_ChooseType_Text_2:
# 68 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Cancel$"

ShoalCave_LowTideLowerRoom_EventScript_ChooseType_Text_3:
# 72 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Past Paradox$"

ShoalCave_LowTideLowerRoom_EventScript_ChooseType_Text_4:
# 73 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Future Paradox$"

ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_0:
# 125 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Great Tusk$"

ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_1:
# 126 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Scream Tail$"

ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_2:
# 127 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Brute Bonnet$"

ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_3:
# 128 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Flutter Mane$"

ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_4:
# 129 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Slither Wing$"

ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_5:
# 130 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Sandy Shocks$"

ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_6:
# 131 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Roaring Moon$"

ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_7:
# 132 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Walking Wake$"

ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_8:
# 133 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Gouging Fire$"

ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_9:
# 134 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Raging Bolt$"

ShoalCave_LowTideLowerRoom_EventScript_PastParadox_Text_10:
# 135 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Back$"

ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_0:
# 156 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Treads$"

ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_1:
# 157 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Bundle$"

ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_2:
# 158 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Hands$"

ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_3:
# 159 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Jugulis$"

ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_4:
# 160 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Moth$"

ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_5:
# 161 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Thorns$"

ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_6:
# 162 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Valiant$"

ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_7:
# 163 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Leaves$"

ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_8:
# 164 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Boulder$"

ShoalCave_LowTideLowerRoom_EventScript_FutureParadox_Text_9:
# 165 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Crown$"

ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_0:
# 187 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Nihilego$"

ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_1:
# 188 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Guzzlord$"

ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_2:
# 189 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Xurkitree$"

ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_3:
# 190 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Buzzwole$"

ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_4:
# 191 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Blacephalon$"

ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_5:
# 192 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Stakataka$"

ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_6:
# 193 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Poipole$"

ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_7:
# 194 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Pheromosa$"

ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_8:
# 195 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Celesteela$"

ShoalCave_LowTideLowerRoom_EventScript_UltraBeast_Text_9:
# 196 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Kartana$"

ShoalCave_LowTideLowerRoom_Text_SummonerIntro::
# 280 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Hello, young trainer.\p"
	.string "I've come to this remote location\n"
	.string "because I have learned a powerful\l"
	.string "technique that allows me to summon one\l"
	.string "Pokémon from almost anywhere in this\l"
	.string "cave.\p"
	.string "Would you like me to summon a Pokémon\n"
	.string "here so you can battle it?$"

ShoalCave_LowTideLowerRoom_Text_SummonerIntroQuick::
# 291 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Would you like me to summon a Pokémon\n"
	.string "here so you can battle it?$"

ShoalCave_LowTideLowerRoom_Text_WhichType::
# 296 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Which room would you like me to summon a\n"
	.string "Pokémon from?$"

ShoalCave_LowTideLowerRoom_Text_WhichPokemon::
# 301 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Which Pokémon would you like me to\n"
	.string "summon so you can battle?$"

ShoalCave_LowTideLowerRoom_Text_ConfirmSummon::
# 306 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "So you want me to summon a\n"
	.string "{STR_VAR_1} for you to battle?$"

ShoalCave_LowTideLowerRoom_Text_ConfirmSummonParadoxHard::
# 311 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "So you want me to summon a\n"
	.string "Paradox Pokémon for you to battle?$"

ShoalCave_LowTideLowerRoom_Text_ConfirmSummonUltraBeastHard::
# 316 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "So you want me to summon an\n"
	.string "Ultra Beast for you to battle?$"

ShoalCave_LowTideLowerRoom_Text_VeryWell::
# 321 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Very well, prepare yourself for battle.$"

ShoalCave_LowTideLowerRoom_SummonWomanDeclined::
# 325 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "I see. Let me know if you change\n"
	.string "your mind.$"
