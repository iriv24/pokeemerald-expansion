NewBirchsLab_MapScripts::
# 2 "data/maps/NewBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewBirchsLab_EventScript_BallDefault
# 3 "data/maps/NewBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, NewBirchsLab_OnWarp
# 4 "data/maps/NewBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
	.byte 0


NewBirchsLab_EventScript_BallDefault::
# 8 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
# 9 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_UNUSED_0x40F8, 1
	return


NewBirchsLab_EventScript_Birch::
# 13 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 14 "data/maps/NewBirchsLab/scripts.pory"
	faceplayer
# 15 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_Birch_2
NewBirchsLab_EventScript_Birch_1:
# 22 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_Birch_7
NewBirchsLab_EventScript_Birch_6:
# 46 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 47 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_GoodbyePlayerFemale
# 48 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_GoodbyePlayerMale
NewBirchsLab_EventScript_Birch_4:
# 50 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 51 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_Birch_2:
# 17 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 18 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_WelcomePlayerFemale
# 19 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_WelcomePlayerMale
# 20 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_TOUCHED_BALLS
	goto NewBirchsLab_EventScript_Birch_1

NewBirchsLab_EventScript_Birch_5:
# 23 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_ChangeStarters
# 24 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_0, 0
# 25 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_1, 1
# 26 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_2, 2
# 27 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_3, 3
# 28 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_4, 4
# 29 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_5, 5
# 30 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_6, 6
# 31 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_7, 7
# 32 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_8, 8
# 33 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_9, MULTI_B_PRESSED
# 36 "data/maps/NewBirchsLab/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 38 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq NewBirchsLab_EventScript_Birch_13
NewBirchsLab_EventScript_Birch_12:
# 42 "data/maps/NewBirchsLab/scripts.pory"
	copyvar VAR_UNUSED_0x40F7, VAR_RESULT
# 43 "data/maps/NewBirchsLab/scripts.pory"
	goto NewBirchsLab_EventScript_SayGenShowing
	goto NewBirchsLab_EventScript_Birch_4

NewBirchsLab_EventScript_Birch_7:
# 22 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_Birch_9
	goto NewBirchsLab_EventScript_Birch_6

NewBirchsLab_EventScript_Birch_9:
# 22 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_Birch_5
	goto NewBirchsLab_EventScript_Birch_6

NewBirchsLab_EventScript_Birch_13:
# 40 "data/maps/NewBirchsLab/scripts.pory"
	goto NewBirchsLab_EventScript_SayGenShowing
	goto NewBirchsLab_EventScript_Birch_12


NewBirchsLab_EventScript_SayGenShowing::
# 56 "data/maps/NewBirchsLab/scripts.pory"
	switch VAR_UNUSED_0x40F7
# 58 "data/maps/NewBirchsLab/scripts.pory"
	case 0, NewBirchsLab_EventScript_SayGenShowing_3
# 60 "data/maps/NewBirchsLab/scripts.pory"
	case 1, NewBirchsLab_EventScript_SayGenShowing_4
# 62 "data/maps/NewBirchsLab/scripts.pory"
	case 2, NewBirchsLab_EventScript_SayGenShowing_5
# 64 "data/maps/NewBirchsLab/scripts.pory"
	case 3, NewBirchsLab_EventScript_SayGenShowing_6
# 66 "data/maps/NewBirchsLab/scripts.pory"
	case 4, NewBirchsLab_EventScript_SayGenShowing_7
# 68 "data/maps/NewBirchsLab/scripts.pory"
	case 5, NewBirchsLab_EventScript_SayGenShowing_8
# 70 "data/maps/NewBirchsLab/scripts.pory"
	case 6, NewBirchsLab_EventScript_SayGenShowing_9
# 72 "data/maps/NewBirchsLab/scripts.pory"
	case 7, NewBirchsLab_EventScript_SayGenShowing_10
# 74 "data/maps/NewBirchsLab/scripts.pory"
	case 8, NewBirchsLab_EventScript_SayGenShowing_11
# 77 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_9
NewBirchsLab_EventScript_SayGenShowing_1:
# 79 "data/maps/NewBirchsLab/scripts.pory"
	release
	end

NewBirchsLab_EventScript_SayGenShowing_3:
# 59 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_0
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_4:
# 61 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_1
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_5:
# 63 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_2
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_6:
# 65 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_3
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_7:
# 67 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_4
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_8:
# 69 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_5
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_9:
# 71 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_6
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_10:
# 73 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_7
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_11:
# 75 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_8
	goto NewBirchsLab_EventScript_SayGenShowing_1


NewBirchsLab_EventScript_PokeballOne::
# 84 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 85 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballOne_2
# 88 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_PokeballOne_3
# 92 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_PokeballOne_6
NewBirchsLab_EventScript_PokeballOne_5:
# 129 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_1
NewBirchsLab_EventScript_PokeballOne_1:
# 131 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 132 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballOne_2:
# 86 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_3:
# 90 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_4:
# 93 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_14
# 96 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_15
# 99 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_16
# 102 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_17
# 105 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_18
# 108 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_19
# 111 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_20
# 114 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_21
# 117 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_22
NewBirchsLab_EventScript_PokeballOne_13:
# 120 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBirchsLab_EventScript_PokeballOne_32
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_6:
# 92 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_PokeballOne_8
	goto NewBirchsLab_EventScript_PokeballOne_5

NewBirchsLab_EventScript_PokeballOne_8:
# 92 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_PokeballOne_4
	goto NewBirchsLab_EventScript_PokeballOne_5

NewBirchsLab_EventScript_PokeballOne_14:
# 94 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Squirtle
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_15:
# 97 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Totodile
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_16:
# 100 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Mudkip
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_17:
# 103 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Piplup
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_18:
# 106 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Oshawott
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_19:
# 109 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Froakie
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_20:
# 112 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Popplio
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_21:
# 115 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Sobble
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_22:
# 118 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Quaxly
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_32:
# 123 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 124 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerFemale
# 125 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerMale
	goto NewBirchsLab_EventScript_PokeballOne_1


NewBirchsLab_EventScript_PokeballTwo::
# 137 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 138 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballTwo_2
# 141 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_PokeballTwo_3
# 145 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_PokeballTwo_6
NewBirchsLab_EventScript_PokeballTwo_5:
# 181 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_1
NewBirchsLab_EventScript_PokeballTwo_1:
# 183 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 184 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballTwo_2:
# 139 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_3:
# 143 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_4:
# 146 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_14
# 149 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_15
# 152 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_16
# 155 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_17
# 158 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_18
# 161 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_19
# 164 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_20
# 167 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_21
# 170 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_22
NewBirchsLab_EventScript_PokeballTwo_13:
# 173 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBirchsLab_EventScript_PokeballTwo_32
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_6:
# 145 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_PokeballTwo_8
	goto NewBirchsLab_EventScript_PokeballTwo_5

NewBirchsLab_EventScript_PokeballTwo_8:
# 145 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_PokeballTwo_4
	goto NewBirchsLab_EventScript_PokeballTwo_5

NewBirchsLab_EventScript_PokeballTwo_14:
# 147 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Bulbasaur
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_15:
# 150 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chikorita
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_16:
# 153 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Treecko
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_17:
# 156 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Turtwig
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_18:
# 159 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Snivy
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_19:
# 162 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chespin
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_20:
# 165 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Rowlet
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_21:
# 168 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Grookey
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_22:
# 171 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Sprigatito
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_32:
# 175 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 176 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerFemale
# 177 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerMale
	goto NewBirchsLab_EventScript_PokeballTwo_1


NewBirchsLab_EventScript_PokeballThree::
# 189 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 190 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballThree_2
# 193 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_PokeballThree_3
# 197 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_PokeballThree_6
NewBirchsLab_EventScript_PokeballThree_5:
# 233 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_1
NewBirchsLab_EventScript_PokeballThree_1:
# 235 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 236 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballThree_2:
# 191 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_3:
# 195 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_4:
# 198 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_14
# 201 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_15
# 204 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_16
# 207 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_17
# 210 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_18
# 213 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_19
# 216 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_20
# 219 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_21
# 222 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_22
NewBirchsLab_EventScript_PokeballThree_13:
# 225 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBirchsLab_EventScript_PokeballThree_32
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_6:
# 197 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_PokeballThree_8
	goto NewBirchsLab_EventScript_PokeballThree_5

NewBirchsLab_EventScript_PokeballThree_8:
# 197 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_PokeballThree_4
	goto NewBirchsLab_EventScript_PokeballThree_5

NewBirchsLab_EventScript_PokeballThree_14:
# 199 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Charmander
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_15:
# 202 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Cyndaquil
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_16:
# 205 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Torchic
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_17:
# 208 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chimchar
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_18:
# 211 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Tepig
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_19:
# 214 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Fennekin
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_20:
# 217 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Litten
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_21:
# 220 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Scorbunny
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_22:
# 223 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Fuecoco
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_32:
# 227 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 228 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerFemale
# 229 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerMale
	goto NewBirchsLab_EventScript_PokeballThree_1


NewBirchsLab_EventScript_Squirtle::
# 242 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 243 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 244 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Squirtle_1
# 283 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 284 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Squirtle_1:
# 245 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SQUIRTLE, 5
# 246 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Squirtle_5
# 254 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Squirtle_6
# 263 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 264 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Squirtle_4:
# 267 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 268 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 270 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 271 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 272 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 273 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 274 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 275 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 276 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 277 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 278 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 279 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 280 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Squirtle_5:
# 247 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 248 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_1
# 249 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 250 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 251 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 252 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Squirtle_4

NewBirchsLab_EventScript_Squirtle_6:
# 255 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 256 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_1
# 257 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 258 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 259 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 260 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Squirtle_4


NewBirchsLab_EventScript_Totodile::
# 291 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 292 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 293 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Totodile_1
# 332 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 333 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Totodile_1:
# 294 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TOTODILE, 5
# 295 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Totodile_5
# 303 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Totodile_6
# 312 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 313 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Totodile_4:
# 316 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 317 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 319 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 320 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 321 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 322 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 323 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 324 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 325 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 326 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 327 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 328 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 329 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Totodile_5:
# 296 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 297 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_1
# 298 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 299 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 300 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 301 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Totodile_4

NewBirchsLab_EventScript_Totodile_6:
# 304 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 305 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_1
# 306 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 307 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 308 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 309 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Totodile_4


NewBirchsLab_EventScript_Mudkip::
# 340 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 341 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 342 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Mudkip_1
# 381 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 382 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Mudkip_1:
# 343 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_MUDKIP, 5
# 344 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Mudkip_5
# 352 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Mudkip_6
# 361 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 362 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Mudkip_4:
# 365 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 366 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 368 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 369 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 370 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 371 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 372 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 373 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 374 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 375 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 376 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 377 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 378 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Mudkip_5:
# 345 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 346 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_1
# 347 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 348 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 349 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 350 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Mudkip_4

NewBirchsLab_EventScript_Mudkip_6:
# 353 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 354 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_1
# 355 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 356 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 357 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 358 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Mudkip_4


NewBirchsLab_EventScript_Piplup::
# 389 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 390 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_0, MSGBOX_YESNO
# 391 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Piplup_1
# 430 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 431 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Piplup_1:
# 392 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_PIPLUP, 5
# 393 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Piplup_5
# 401 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Piplup_6
# 410 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 411 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Piplup_4:
# 414 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 415 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 417 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 418 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 419 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 420 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 421 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 422 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 423 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 424 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 425 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 426 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 427 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Piplup_5:
# 394 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 395 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_1
# 396 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 397 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 398 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 399 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Piplup_4

NewBirchsLab_EventScript_Piplup_6:
# 402 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 403 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_1
# 404 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 405 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 406 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 407 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Piplup_4


NewBirchsLab_EventScript_Oshawott::
# 438 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 439 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_0, MSGBOX_YESNO
# 440 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Oshawott_1
# 479 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 480 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Oshawott_1:
# 441 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_OSHAWOTT, 5
# 442 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Oshawott_5
# 450 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Oshawott_6
# 459 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 460 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Oshawott_4:
# 463 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 464 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 466 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 467 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 468 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 469 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 470 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 471 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 472 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 473 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 474 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 475 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 476 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Oshawott_5:
# 443 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 444 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_1
# 445 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 446 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 447 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 448 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Oshawott_4

NewBirchsLab_EventScript_Oshawott_6:
# 451 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 452 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_1
# 453 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 454 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 455 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 456 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Oshawott_4


NewBirchsLab_EventScript_Froakie::
# 487 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 488 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_0, MSGBOX_YESNO
# 489 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Froakie_1
# 528 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 529 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Froakie_1:
# 490 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_FROAKIE, 5
# 491 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Froakie_5
# 499 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Froakie_6
# 508 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 509 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Froakie_4:
# 512 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 513 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 515 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 516 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 517 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 518 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 519 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 520 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 521 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 522 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 523 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 524 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 525 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Froakie_5:
# 492 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 493 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_1
# 494 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 495 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 496 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 497 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Froakie_4

NewBirchsLab_EventScript_Froakie_6:
# 500 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 501 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_1
# 502 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 503 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 504 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 505 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Froakie_4


NewBirchsLab_EventScript_Popplio::
# 536 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 537 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_0, MSGBOX_YESNO
# 538 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Popplio_1
# 577 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 578 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Popplio_1:
# 539 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_POPPLIO, 5
# 540 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Popplio_5
# 548 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Popplio_6
# 557 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 558 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Popplio_4:
# 561 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 562 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 564 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 565 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 566 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 567 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 568 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 569 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 570 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 571 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 572 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 573 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 574 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Popplio_5:
# 541 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 542 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_1
# 543 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 544 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 545 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 546 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Popplio_4

NewBirchsLab_EventScript_Popplio_6:
# 549 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 550 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_1
# 551 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 552 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 553 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 554 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Popplio_4


NewBirchsLab_EventScript_Sobble::
# 585 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
# 586 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_0, MSGBOX_YESNO
# 587 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Sobble_1
# 626 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 627 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Sobble_1:
# 588 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SOBBLE, 5
# 589 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Sobble_5
# 597 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Sobble_6
# 606 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 607 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Sobble_4:
# 610 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 611 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 613 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 614 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 615 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 616 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 617 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 618 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 619 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 620 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 621 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 622 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 623 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Sobble_5:
# 590 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 591 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_1
# 592 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 593 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 594 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 595 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Sobble_4

NewBirchsLab_EventScript_Sobble_6:
# 598 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 599 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_1
# 600 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 601 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 602 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 603 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Sobble_4


NewBirchsLab_EventScript_Quaxly::
# 634 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 635 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Quaxly_Text_0, MSGBOX_YESNO
# 636 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Quaxly_1
# 675 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 676 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Quaxly_1:
# 637 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_QUAXLY, 5
# 638 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Quaxly_5
# 646 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Quaxly_6
# 655 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 656 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Quaxly_4:
# 659 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 660 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 662 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 663 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 664 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 665 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 666 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 667 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 668 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 669 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 670 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 671 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 672 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Quaxly_5:
# 639 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 640 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Quaxly_Text_1
# 641 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 642 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 643 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 644 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Quaxly_4

NewBirchsLab_EventScript_Quaxly_6:
# 647 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 648 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Quaxly_Text_1
# 649 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 650 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 651 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 652 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Quaxly_4


NewBirchsLab_EventScript_Bulbasaur::
# 683 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 684 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 685 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_1
# 724 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 725 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Bulbasaur_1:
# 686 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_BULBASAUR, 5
# 687 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_5
# 695 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_6
# 704 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 705 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Bulbasaur_4:
# 708 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 709 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 711 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 712 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 713 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 714 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 715 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 716 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 717 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 718 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 719 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 720 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 721 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Bulbasaur_5:
# 688 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 689 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_1
# 690 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 691 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 692 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 693 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Bulbasaur_4

NewBirchsLab_EventScript_Bulbasaur_6:
# 696 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 697 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_1
# 698 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 699 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 700 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 701 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Bulbasaur_4


NewBirchsLab_EventScript_Chikorita::
# 732 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 733 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 734 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chikorita_1
# 773 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 774 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chikorita_1:
# 735 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CHIKORITA, 5
# 736 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chikorita_5
# 744 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chikorita_6
# 753 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 754 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chikorita_4:
# 757 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 758 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 760 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 761 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 762 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 763 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 764 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 765 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 766 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 767 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 768 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 769 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 770 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Chikorita_5:
# 737 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 738 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_1
# 739 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 740 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 741 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 742 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chikorita_4

NewBirchsLab_EventScript_Chikorita_6:
# 745 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 746 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_1
# 747 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 748 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 749 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 750 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chikorita_4


NewBirchsLab_EventScript_Treecko::
# 781 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 782 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 783 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Treecko_1
# 822 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 823 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Treecko_1:
# 784 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TREECKO, 5
# 785 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Treecko_5
# 793 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Treecko_6
# 802 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 803 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Treecko_4:
# 806 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 807 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 809 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 810 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 811 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 812 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 813 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 814 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 815 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 816 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 817 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 818 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 819 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Treecko_5:
# 786 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 787 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_1
# 788 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 789 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 790 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 791 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Treecko_4

NewBirchsLab_EventScript_Treecko_6:
# 794 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 795 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_1
# 796 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 797 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 798 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 799 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Treecko_4


NewBirchsLab_EventScript_Turtwig::
# 830 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 831 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_0, MSGBOX_YESNO
# 832 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Turtwig_1
# 871 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 872 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Turtwig_1:
# 833 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TURTWIG, 5
# 834 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Turtwig_5
# 842 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Turtwig_6
# 851 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 852 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Turtwig_4:
# 855 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 856 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 858 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 859 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 860 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 861 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 862 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 863 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 864 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 865 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 866 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 867 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 868 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Turtwig_5:
# 835 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 836 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_1
# 837 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 838 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 839 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 840 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Turtwig_4

NewBirchsLab_EventScript_Turtwig_6:
# 843 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 844 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_1
# 845 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 846 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 847 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 848 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Turtwig_4


NewBirchsLab_EventScript_Snivy::
# 879 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 880 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 881 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Snivy_1
# 920 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 921 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Snivy_1:
# 882 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SNIVY, 5
# 883 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Snivy_5
# 891 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Snivy_6
# 900 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 901 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Snivy_4:
# 904 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 905 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 907 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 908 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 909 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 910 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 911 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 912 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 913 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 914 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 915 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 916 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 917 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Snivy_5:
# 884 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 885 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_1
# 886 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 887 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 888 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 889 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Snivy_4

NewBirchsLab_EventScript_Snivy_6:
# 892 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 893 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_1
# 894 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 895 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 896 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 897 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Snivy_4


NewBirchsLab_EventScript_Chespin::
# 928 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 929 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_0, MSGBOX_YESNO
# 930 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chespin_1
# 969 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 970 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chespin_1:
# 931 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CHESPIN, 5
# 932 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chespin_5
# 940 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chespin_6
# 949 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 950 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chespin_4:
# 953 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 954 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 956 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 957 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 958 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 959 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 960 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 961 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 962 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 963 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 964 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 965 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 966 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Chespin_5:
# 933 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 934 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_1
# 935 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 936 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 937 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 938 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chespin_4

NewBirchsLab_EventScript_Chespin_6:
# 941 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 942 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_1
# 943 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 944 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 945 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 946 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chespin_4


NewBirchsLab_EventScript_Rowlet::
# 977 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 978 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_0, MSGBOX_YESNO
# 979 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Rowlet_1
# 1018 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1019 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Rowlet_1:
# 980 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_ROWLET, 5
# 981 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Rowlet_5
# 989 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Rowlet_6
# 998 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 999 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Rowlet_4:
# 1002 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1003 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1005 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1006 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1007 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1008 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1009 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1010 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1011 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1012 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1013 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1014 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1015 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Rowlet_5:
# 982 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 983 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_1
# 984 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 985 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 986 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 987 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Rowlet_4

NewBirchsLab_EventScript_Rowlet_6:
# 990 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 991 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_1
# 992 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 993 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 994 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 995 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Rowlet_4


NewBirchsLab_EventScript_Grookey::
# 1026 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 1027 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_0, MSGBOX_YESNO
# 1028 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Grookey_1
# 1067 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1068 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Grookey_1:
# 1029 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_GROOKEY, 5
# 1030 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Grookey_5
# 1038 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Grookey_6
# 1047 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1048 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Grookey_4:
# 1051 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1052 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1054 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1055 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1056 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1057 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1058 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1059 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1060 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1061 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1062 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1063 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1064 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Grookey_5:
# 1031 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1032 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_1
# 1033 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1034 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1035 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1036 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Grookey_4

NewBirchsLab_EventScript_Grookey_6:
# 1039 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1040 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_1
# 1041 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1042 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1043 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1044 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Grookey_4


NewBirchsLab_EventScript_Sprigatito::
# 1075 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 1076 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_0, MSGBOX_YESNO
# 1077 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_1
# 1116 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1117 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Sprigatito_1:
# 1078 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SPRIGATITO, 5
# 1079 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_5
# 1087 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_6
# 1096 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1097 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Sprigatito_4:
# 1100 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1101 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1103 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1104 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1105 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1106 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1107 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1108 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1109 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1110 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1111 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1112 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1113 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Sprigatito_5:
# 1080 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1081 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_1
# 1082 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1083 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1084 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1085 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Sprigatito_4

NewBirchsLab_EventScript_Sprigatito_6:
# 1088 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1089 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_1
# 1090 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1091 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1092 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1093 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Sprigatito_4


NewBirchsLab_EventScript_Charmander::
# 1124 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 1125 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 1126 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Charmander_1
# 1165 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1166 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Charmander_1:
# 1127 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CHARMANDER, 5
# 1128 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Charmander_5
# 1136 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Charmander_6
# 1145 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1146 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Charmander_4:
# 1149 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1150 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1152 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1153 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1154 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1155 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1156 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1157 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1158 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1159 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1160 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1161 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1162 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Charmander_5:
# 1129 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1130 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_1
# 1131 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1132 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1133 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1134 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Charmander_4

NewBirchsLab_EventScript_Charmander_6:
# 1137 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1138 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_1
# 1139 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1140 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1141 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1142 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Charmander_4


NewBirchsLab_EventScript_Cyndaquil::
# 1173 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 1174 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 1175 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_1
# 1214 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1215 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Cyndaquil_1:
# 1176 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CYNDAQUIL, 5
# 1177 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_5
# 1185 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_6
# 1194 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1195 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Cyndaquil_4:
# 1198 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1199 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1201 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1202 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1203 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1204 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1205 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1206 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1207 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1208 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1209 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1210 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1211 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Cyndaquil_5:
# 1178 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1179 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_1
# 1180 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1181 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1182 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1183 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Cyndaquil_4

NewBirchsLab_EventScript_Cyndaquil_6:
# 1186 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1187 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_1
# 1188 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1189 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1190 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1191 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Cyndaquil_4


NewBirchsLab_EventScript_Torchic::
# 1222 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 1223 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 1224 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Torchic_1
# 1263 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1264 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Torchic_1:
# 1225 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TORCHIC, 5
# 1226 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Torchic_5
# 1234 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Torchic_6
# 1243 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1244 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Torchic_4:
# 1247 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1248 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1250 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1251 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1252 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1253 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1254 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1255 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1256 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1257 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1258 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1259 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1260 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Torchic_5:
# 1227 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1228 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_1
# 1229 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1230 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1231 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1232 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Torchic_4

NewBirchsLab_EventScript_Torchic_6:
# 1235 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1236 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_1
# 1237 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1238 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1239 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1240 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Torchic_4


NewBirchsLab_EventScript_Chimchar::
# 1271 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 1272 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_0, MSGBOX_YESNO
# 1273 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chimchar_1
# 1312 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1313 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chimchar_1:
# 1274 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CHIMCHAR, 5
# 1275 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chimchar_5
# 1283 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chimchar_6
# 1292 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1293 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chimchar_4:
# 1296 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1297 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1299 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1300 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1301 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1302 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1303 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1304 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1305 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1306 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1307 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1308 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1309 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Chimchar_5:
# 1276 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1277 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_1
# 1278 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1279 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1280 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1281 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chimchar_4

NewBirchsLab_EventScript_Chimchar_6:
# 1284 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1285 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_1
# 1286 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1287 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1288 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1289 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chimchar_4


NewBirchsLab_EventScript_Tepig::
# 1320 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 1321 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_0, MSGBOX_YESNO
# 1322 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Tepig_1
# 1361 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1362 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Tepig_1:
# 1323 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TEPIG, 5
# 1324 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Tepig_5
# 1332 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Tepig_6
# 1341 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1342 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Tepig_4:
# 1345 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1346 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1348 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1349 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1350 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1351 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1352 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1353 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1354 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1355 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1356 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1357 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1358 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Tepig_5:
# 1325 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1326 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_1
# 1327 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1328 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1329 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1330 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Tepig_4

NewBirchsLab_EventScript_Tepig_6:
# 1333 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1334 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_1
# 1335 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1336 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1337 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1338 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Tepig_4


NewBirchsLab_EventScript_Fennekin::
# 1369 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 1370 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_0, MSGBOX_YESNO
# 1371 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Fennekin_1
# 1410 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1411 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Fennekin_1:
# 1372 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_FENNEKIN, 5
# 1373 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Fennekin_5
# 1381 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Fennekin_6
# 1390 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1391 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Fennekin_4:
# 1394 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1395 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1397 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1398 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1399 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1400 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1401 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1402 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1403 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1404 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1405 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1406 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1407 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Fennekin_5:
# 1374 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1375 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_1
# 1376 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1377 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1378 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1379 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Fennekin_4

NewBirchsLab_EventScript_Fennekin_6:
# 1382 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1383 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_1
# 1384 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1385 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1386 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1387 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Fennekin_4


NewBirchsLab_EventScript_Litten::
# 1418 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 1419 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_0, MSGBOX_YESNO
# 1420 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Litten_1
# 1459 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1460 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Litten_1:
# 1421 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_LITTEN, 5
# 1422 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Litten_5
# 1430 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Litten_6
# 1439 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1440 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Litten_4:
# 1443 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1444 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1446 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1447 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1448 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1449 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1450 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1451 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1452 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1453 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1454 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1455 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1456 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Litten_5:
# 1423 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1424 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_1
# 1425 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1426 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1427 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1428 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Litten_4

NewBirchsLab_EventScript_Litten_6:
# 1431 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1432 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_1
# 1433 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1434 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1435 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1436 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Litten_4


NewBirchsLab_EventScript_Scorbunny::
# 1467 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 1468 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_0, MSGBOX_YESNO
# 1469 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_1
# 1508 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1509 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Scorbunny_1:
# 1470 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SCORBUNNY, 5
# 1471 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_5
# 1479 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_6
# 1488 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1489 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Scorbunny_4:
# 1492 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1493 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1495 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1496 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1497 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1498 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1499 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1500 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1501 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1502 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1503 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1504 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1505 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Scorbunny_5:
# 1472 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1473 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_1
# 1474 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1475 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1476 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1477 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Scorbunny_4

NewBirchsLab_EventScript_Scorbunny_6:
# 1480 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1481 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_1
# 1482 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1483 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1484 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1485 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Scorbunny_4


NewBirchsLab_EventScript_Fuecoco::
# 1516 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 1517 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_0, MSGBOX_YESNO
# 1518 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_1
# 1557 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1558 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Fuecoco_1:
# 1519 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_FUECOCO, 5
# 1520 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_5
# 1528 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_6
# 1537 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1538 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Fuecoco_4:
# 1541 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1542 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1544 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1545 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1546 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1547 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1548 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1549 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1550 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1551 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1552 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1553 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1554 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Fuecoco_5:
# 1521 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1522 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_1
# 1523 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1524 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1525 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1526 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Fuecoco_4

NewBirchsLab_EventScript_Fuecoco_6:
# 1529 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1530 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_2
# 1531 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1532 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1533 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1534 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Fuecoco_4


NewBirchsLab_EventScript_WelcomePlayerMale::
# 1564 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_WelcomePlayerMale
	return


NewBirchsLab_EventScript_WelcomePlayerFemale::
# 1569 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_WelcomePlayerFemale
	return


NewBirchsLab_EventScript_GoodbyePlayerMale::
# 1574 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
	return


NewBirchsLab_EventScript_GoodbyePlayerFemale::
# 1579 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
	return


NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerMale::
# 1584 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTreeckoPlayerMale
# 1585 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
	return


NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerFemale::
# 1590 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTreeckoPlayerFemale
# 1591 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
	return


NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerMale::
# 1596 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterMudkipPlayerMale
# 1597 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
	return


NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerFemale::
# 1602 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterMudkipPlayerFemale
# 1603 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
	return


NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerMale::
# 1608 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTorchicPlayerMale
# 1609 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
	return


NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerFemale::
# 1614 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTorchicPlayerFemale
# 1615 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
	return


NicknamePartyMon::
# 1625 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1626 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1627 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 1628 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1629 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 1636 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1637 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1638 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 1641 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 1639 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewBirchsLab_EventScript_Birch_Text_0:
# 24 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 1$"

NewBirchsLab_EventScript_Birch_Text_1:
# 25 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 2$"

NewBirchsLab_EventScript_Birch_Text_2:
# 26 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 3$"

NewBirchsLab_EventScript_Birch_Text_3:
# 27 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 4$"

NewBirchsLab_EventScript_Birch_Text_4:
# 28 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 5$"

NewBirchsLab_EventScript_Birch_Text_5:
# 29 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 6$"

NewBirchsLab_EventScript_Birch_Text_6:
# 30 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 7$"

NewBirchsLab_EventScript_Birch_Text_7:
# 31 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 8$"

NewBirchsLab_EventScript_Birch_Text_8:
# 32 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 9$"

NewBirchsLab_EventScript_Birch_Text_9:
# 33 "data/maps/NewBirchsLab/scripts.pory"
	.string "Cancel$"

NewBirchsLab_EventScript_SayGenShowing_Text_0:
# 59 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 1.$"

NewBirchsLab_EventScript_SayGenShowing_Text_1:
# 61 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 2.$"

NewBirchsLab_EventScript_SayGenShowing_Text_2:
# 63 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 3.$"

NewBirchsLab_EventScript_SayGenShowing_Text_3:
# 65 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 4.$"

NewBirchsLab_EventScript_SayGenShowing_Text_4:
# 67 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 5.$"

NewBirchsLab_EventScript_SayGenShowing_Text_5:
# 69 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 6.$"

NewBirchsLab_EventScript_SayGenShowing_Text_6:
# 71 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 7.$"

NewBirchsLab_EventScript_SayGenShowing_Text_7:
# 73 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 8.$"

NewBirchsLab_EventScript_SayGenShowing_Text_8:
# 75 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 9.$"

NewBirchsLab_EventScript_SayGenShowing_Text_9:
# 77 "data/maps/NewBirchsLab/scripts.pory"
	.string "Now showing starters.$"

NewBirchsLab_EventScript_PokeballOne_Text_0:
# 90 "data/maps/NewBirchsLab/scripts.pory"
	.string "Ask Professor Birch about this!$"

NewBirchsLab_EventScript_PokeballOne_Text_1:
# 129 "data/maps/NewBirchsLab/scripts.pory"
	.string "Better not get greedy!$"

NewBirchsLab_EventScript_Squirtle_Text_0:
# 243 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewBirchsLab_EventScript_Squirtle_Text_1:
# 248 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Squirtle!$"

NewBirchsLab_EventScript_Squirtle_Text_2:
# 264 "data/maps/NewBirchsLab/scripts.pory"
	.string "No More Room$"

NewBirchsLab_EventScript_Totodile_Text_0:
# 292 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewBirchsLab_EventScript_Totodile_Text_1:
# 297 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Totodile!$"

NewBirchsLab_EventScript_Mudkip_Text_0:
# 341 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

NewBirchsLab_EventScript_Mudkip_Text_1:
# 346 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Mudkip!$"

NewBirchsLab_EventScript_Piplup_Text_0:
# 390 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

NewBirchsLab_EventScript_Piplup_Text_1:
# 395 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Piplup!$"

NewBirchsLab_EventScript_Oshawott_Text_0:
# 439 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

NewBirchsLab_EventScript_Oshawott_Text_1:
# 444 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Oshawott!$"

NewBirchsLab_EventScript_Froakie_Text_0:
# 488 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Froakie?$"

NewBirchsLab_EventScript_Froakie_Text_1:
# 493 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Froakie!$"

NewBirchsLab_EventScript_Popplio_Text_0:
# 537 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

NewBirchsLab_EventScript_Popplio_Text_1:
# 542 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Popplio!$"

NewBirchsLab_EventScript_Sobble_Text_0:
# 586 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Sobble?$"

NewBirchsLab_EventScript_Sobble_Text_1:
# 591 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Sobble!$"

NewBirchsLab_EventScript_Quaxly_Text_0:
# 635 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Quaxly?$"

NewBirchsLab_EventScript_Quaxly_Text_1:
# 640 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Quaxly!$"

NewBirchsLab_EventScript_Bulbasaur_Text_0:
# 684 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewBirchsLab_EventScript_Bulbasaur_Text_1:
# 689 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Bulbasaur!$"

NewBirchsLab_EventScript_Chikorita_Text_0:
# 733 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewBirchsLab_EventScript_Chikorita_Text_1:
# 738 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Chikorita!$"

NewBirchsLab_EventScript_Treecko_Text_0:
# 782 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

NewBirchsLab_EventScript_Treecko_Text_1:
# 787 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Treecko!$"

NewBirchsLab_EventScript_Turtwig_Text_0:
# 831 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Turtwig?$"

NewBirchsLab_EventScript_Turtwig_Text_1:
# 836 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Turtwig!$"

NewBirchsLab_EventScript_Snivy_Text_0:
# 880 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Snivy?$"

NewBirchsLab_EventScript_Snivy_Text_1:
# 885 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Snivy!$"

NewBirchsLab_EventScript_Chespin_Text_0:
# 929 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chespin?$"

NewBirchsLab_EventScript_Chespin_Text_1:
# 934 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Chespin!$"

NewBirchsLab_EventScript_Rowlet_Text_0:
# 978 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Rowlet?$"

NewBirchsLab_EventScript_Rowlet_Text_1:
# 983 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Rowlet!$"

NewBirchsLab_EventScript_Grookey_Text_0:
# 1027 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Grookey?$"

NewBirchsLab_EventScript_Grookey_Text_1:
# 1032 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Grookey!$"

NewBirchsLab_EventScript_Sprigatito_Text_0:
# 1076 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

NewBirchsLab_EventScript_Sprigatito_Text_1:
# 1081 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Sprigatito!$"

NewBirchsLab_EventScript_Charmander_Text_0:
# 1125 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewBirchsLab_EventScript_Charmander_Text_1:
# 1130 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Charmander!$"

NewBirchsLab_EventScript_Cyndaquil_Text_0:
# 1174 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewBirchsLab_EventScript_Cyndaquil_Text_1:
# 1179 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Cyndaquil!$"

NewBirchsLab_EventScript_Torchic_Text_0:
# 1223 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

NewBirchsLab_EventScript_Torchic_Text_1:
# 1228 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Torchic!$"

NewBirchsLab_EventScript_Chimchar_Text_0:
# 1272 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chimchar?$"

NewBirchsLab_EventScript_Chimchar_Text_1:
# 1277 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Chimchar!$"

NewBirchsLab_EventScript_Tepig_Text_0:
# 1321 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Tepig?$"

NewBirchsLab_EventScript_Tepig_Text_1:
# 1326 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Tepig!$"

NewBirchsLab_EventScript_Fennekin_Text_0:
# 1370 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Fennekin?$"

NewBirchsLab_EventScript_Fennekin_Text_1:
# 1375 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Fennekin!$"

NewBirchsLab_EventScript_Litten_Text_0:
# 1419 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Litten?$"

NewBirchsLab_EventScript_Litten_Text_1:
# 1424 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Litten!$"

NewBirchsLab_EventScript_Scorbunny_Text_0:
# 1468 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

NewBirchsLab_EventScript_Scorbunny_Text_1:
# 1473 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Scorbunny!$"

NewBirchsLab_EventScript_Fuecoco_Text_0:
# 1517 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

NewBirchsLab_EventScript_Fuecoco_Text_1:
# 1522 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Fuecoco!$"

NewBirchsLab_EventScript_Fuecoco_Text_2:
# 1530 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} {PLAYER} received the the Fuecoco!$"

NicknamePartyMon_Text_0:
# 1625 "data/maps/NewBirchsLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 1641 "data/maps/NewBirchsLab/scripts.pory"
	.string "Transferred to PC.$"

NewBirchsLab_NotChosen::
# 1644 "data/maps/NewBirchsLab/scripts.pory"
	.string "You did not choose this Pokemon.$"

NewBirchsLab_NotYet::
# 1648 "data/maps/NewBirchsLab/scripts.pory"
	.string "Better not touch these yet!\p"
	.string "Maybe you should talk to {RIVAL}.$"

NewBirchsLab_WelcomePlayerMale::
# 1653 "data/maps/NewBirchsLab/scripts.pory"
	.string "Hello there! I'm Prof. Birch, and you\n"
	.string "must be {PLAYER}. You just missed\l"
	.string "{RIVAL}, she stopped by and grabbed\l"
	.string "one of my Starter Pokémon and then\l"
	.string "rushed out of here.\p"
	.string "She said to be on the lookout for a\n"
	.string "trainer named {PLAYER}, who just moved\l"
	.string "into the house next door!\p"
	.string "I'm glad to see {RIVAL} has a friend\n"
	.string "to start a new Pokémon journey with.\p"
	.string "How about this, I'll give you one of\n"
	.string "these Starter Pokémon, and then if you\l"
	.string "can beat {RIVAL} with your Pokémon,\l"
	.string "come back and I'll give you a Pokédex!\p"
	.string "I'll tell you which Starter she chose\n"
	.string "after you pick yours, it wouldn't be\l"
	.string "fair if you knew before you picked!\p"
	.string "I can let you choose from any\n"
	.string "Generation of Starter Pokémon, just\l"
	.string "ask me if you want to change them.$"

NewBirchsLab_WelcomePlayerFemale::
# 1676 "data/maps/NewBirchsLab/scripts.pory"
	.string "Hello there! I'm Prof. Birch, and you\n"
	.string "must be {PLAYER}. You just missed\l"
	.string "{RIVAL}, he stopped by and grabbed\l"
	.string "one of my Starter Pokémon and then\l"
	.string "rushed out of here.\p"
	.string "He said to be on the lookout for a\n"
	.string "trainer named {PLAYER}, who just moved\l"
	.string "into the house next door!\p"
	.string "I'm glad to see {RIVAL} has a friend\n"
	.string "to start a new Pokémon journey with.\p"
	.string "How about this, I'll give you one of\n"
	.string "these Starter Pokémon, and then if you\l"
	.string "can beat {RIVAL} with your Pokémon,\l"
	.string "come back and I'll give you a Pokédex!\p"
	.string "I'll tell you which Starter he chose\n"
	.string "after you pick yours, it wouldn't be\l"
	.string "fair if you knew before you picked!\p"
	.string "I can let you choose from any\n"
	.string "Generation of Starter Pokémon, just\l"
	.string "ask me if you want to change them.$"

NewBirchsLab_Route103PlayerMale::
# 1699 "data/maps/NewBirchsLab/scripts.pory"
	.string "{RIVAL} yelled she was heading to\n"
	.string "Route 103 as she ran out the door,\l"
	.string "perhaps you should look for her there.$"

NewBirchsLab_Route103PlayerFemale::
# 1706 "data/maps/NewBirchsLab/scripts.pory"
	.string "{RIVAL} yelled he was heading to\n"
	.string "Route 103 as he ran out the door,\l"
	.string "perhaps you should look for him there.$"

NewBirchsLab_RivalStarterTreeckoPlayerMale::
# 1713 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Treecko as\l"
	.string "her Starter!$"

NewBirchsLab_RivalStarterTreeckoPlayerFemale::
# 1720 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Treecko as\l"
	.string "his Starter!$"

NewBirchsLab_RivalStarterMudkipPlayerMale::
# 1727 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Mudkip as\l"
	.string "her Starter!$"

NewBirchsLab_RivalStarterMudkipPlayerFemale::
# 1734 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Mudkip as\l"
	.string "his Starter!$"

NewBirchsLab_RivalStarterTorchicPlayerMale::
# 1741 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Torchic as\l"
	.string "her Starter!$"

NewBirchsLab_RivalStarterTorchicPlayerFemale::
# 1748 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Torchic as\l"
	.string "his Starter!$"

NewBirchsLab_ChangeStarters::
# 1755 "data/maps/NewBirchsLab/scripts.pory"
	.string "Which Generation of Starters would you\n"
	.string "like to see? You can change\l"
	.string "Generations as many times as you want.$"
