NewBirchsLab_MapScripts::
# 2 "data/maps/NewBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewBirchsLab_EventScript_BallDefault
# 3 "data/maps/NewBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
	.byte 0


NewBirchsLab_EventScript_BallDefault::
# 7 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
# 8 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_UNUSED_0x40F8, 1
	return


NewBirchsLab_EventScript_Birch::
# 12 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 13 "data/maps/NewBirchsLab/scripts.pory"
	faceplayer
# 14 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_Birch_2
NewBirchsLab_EventScript_Birch_1:
# 21 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_Birch_7
NewBirchsLab_EventScript_Birch_6:
# 45 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 46 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_GoodbyePlayerFemale
# 47 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_GoodbyePlayerMale
NewBirchsLab_EventScript_Birch_4:
# 49 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 50 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_Birch_2:
# 16 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 17 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_WelcomePlayerFemale
# 18 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_WelcomePlayerMale
# 19 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_TOUCHED_BALLS
	goto NewBirchsLab_EventScript_Birch_1

NewBirchsLab_EventScript_Birch_5:
# 22 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_ChangeStarters
# 23 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_0, 0
# 24 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_1, 1
# 25 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_2, 2
# 26 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_3, 3
# 27 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_4, 4
# 28 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_5, 5
# 29 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_6, 6
# 30 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_7, 7
# 31 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_8, 8
# 32 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_9, MULTI_B_PRESSED
# 35 "data/maps/NewBirchsLab/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 37 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq NewBirchsLab_EventScript_Birch_13
NewBirchsLab_EventScript_Birch_12:
# 41 "data/maps/NewBirchsLab/scripts.pory"
	copyvar VAR_UNUSED_0x40F7, VAR_RESULT
# 42 "data/maps/NewBirchsLab/scripts.pory"
	goto NewBirchsLab_EventScript_SayGenShowing
	goto NewBirchsLab_EventScript_Birch_4

NewBirchsLab_EventScript_Birch_7:
# 21 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_Birch_9
	goto NewBirchsLab_EventScript_Birch_6

NewBirchsLab_EventScript_Birch_9:
# 21 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_Birch_5
	goto NewBirchsLab_EventScript_Birch_6

NewBirchsLab_EventScript_Birch_13:
# 39 "data/maps/NewBirchsLab/scripts.pory"
	goto NewBirchsLab_EventScript_SayGenShowing
	goto NewBirchsLab_EventScript_Birch_12


NewBirchsLab_EventScript_SayGenShowing::
# 55 "data/maps/NewBirchsLab/scripts.pory"
	switch VAR_UNUSED_0x40F7
# 57 "data/maps/NewBirchsLab/scripts.pory"
	case 0, NewBirchsLab_EventScript_SayGenShowing_3
# 59 "data/maps/NewBirchsLab/scripts.pory"
	case 1, NewBirchsLab_EventScript_SayGenShowing_4
# 61 "data/maps/NewBirchsLab/scripts.pory"
	case 2, NewBirchsLab_EventScript_SayGenShowing_5
# 63 "data/maps/NewBirchsLab/scripts.pory"
	case 3, NewBirchsLab_EventScript_SayGenShowing_6
# 65 "data/maps/NewBirchsLab/scripts.pory"
	case 4, NewBirchsLab_EventScript_SayGenShowing_7
# 67 "data/maps/NewBirchsLab/scripts.pory"
	case 5, NewBirchsLab_EventScript_SayGenShowing_8
# 69 "data/maps/NewBirchsLab/scripts.pory"
	case 6, NewBirchsLab_EventScript_SayGenShowing_9
# 71 "data/maps/NewBirchsLab/scripts.pory"
	case 7, NewBirchsLab_EventScript_SayGenShowing_10
# 73 "data/maps/NewBirchsLab/scripts.pory"
	case 8, NewBirchsLab_EventScript_SayGenShowing_11
# 76 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_9
NewBirchsLab_EventScript_SayGenShowing_1:
# 78 "data/maps/NewBirchsLab/scripts.pory"
	release
	end

NewBirchsLab_EventScript_SayGenShowing_3:
# 58 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_0
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_4:
# 60 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_1
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_5:
# 62 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_2
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_6:
# 64 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_3
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_7:
# 66 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_4
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_8:
# 68 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_5
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_9:
# 70 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_6
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_10:
# 72 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_7
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_11:
# 74 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_8
	goto NewBirchsLab_EventScript_SayGenShowing_1


NewBirchsLab_EventScript_PokeballOne::
# 83 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 84 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballOne_2
# 87 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_PokeballOne_3
# 91 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_PokeballOne_6
NewBirchsLab_EventScript_PokeballOne_5:
# 128 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_1
NewBirchsLab_EventScript_PokeballOne_1:
# 130 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 131 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballOne_2:
# 85 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_3:
# 89 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_4:
# 92 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_14
# 95 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_15
# 98 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_16
# 101 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_17
# 104 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_18
# 107 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_19
# 110 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_20
# 113 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_21
# 116 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_22
NewBirchsLab_EventScript_PokeballOne_13:
# 119 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBirchsLab_EventScript_PokeballOne_32
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_6:
# 91 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_PokeballOne_8
	goto NewBirchsLab_EventScript_PokeballOne_5

NewBirchsLab_EventScript_PokeballOne_8:
# 91 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_PokeballOne_4
	goto NewBirchsLab_EventScript_PokeballOne_5

NewBirchsLab_EventScript_PokeballOne_14:
# 93 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Squirtle
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_15:
# 96 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Totodile
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_16:
# 99 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Mudkip
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_17:
# 102 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Piplup
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_18:
# 105 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Oshawott
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_19:
# 108 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Froakie
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_20:
# 111 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Popplio
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_21:
# 114 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Sobble
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_22:
# 117 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Quaxly
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_32:
# 122 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 123 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerFemale
# 124 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerMale
	goto NewBirchsLab_EventScript_PokeballOne_1


NewBirchsLab_EventScript_PokeballTwo::
# 136 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 137 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballTwo_2
# 140 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_PokeballTwo_3
# 144 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_PokeballTwo_6
NewBirchsLab_EventScript_PokeballTwo_5:
# 180 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_1
NewBirchsLab_EventScript_PokeballTwo_1:
# 182 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 183 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballTwo_2:
# 138 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_3:
# 142 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_4:
# 145 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_14
# 148 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_15
# 151 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_16
# 154 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_17
# 157 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_18
# 160 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_19
# 163 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_20
# 166 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_21
# 169 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_22
NewBirchsLab_EventScript_PokeballTwo_13:
# 172 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBirchsLab_EventScript_PokeballTwo_32
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_6:
# 144 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_PokeballTwo_8
	goto NewBirchsLab_EventScript_PokeballTwo_5

NewBirchsLab_EventScript_PokeballTwo_8:
# 144 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_PokeballTwo_4
	goto NewBirchsLab_EventScript_PokeballTwo_5

NewBirchsLab_EventScript_PokeballTwo_14:
# 146 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Bulbasaur
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_15:
# 149 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chikorita
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_16:
# 152 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Treecko
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_17:
# 155 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Turtwig
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_18:
# 158 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Snivy
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_19:
# 161 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chespin
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_20:
# 164 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Rowlet
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_21:
# 167 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Grookey
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_22:
# 170 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Sprigatito
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_32:
# 174 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 175 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerFemale
# 176 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerMale
	goto NewBirchsLab_EventScript_PokeballTwo_1


NewBirchsLab_EventScript_PokeballThree::
# 188 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 189 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballThree_2
# 192 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_PokeballThree_3
# 196 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_PokeballThree_6
NewBirchsLab_EventScript_PokeballThree_5:
# 232 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_1
NewBirchsLab_EventScript_PokeballThree_1:
# 234 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 235 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballThree_2:
# 190 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_3:
# 194 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_4:
# 197 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_14
# 200 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_15
# 203 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_16
# 206 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_17
# 209 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_18
# 212 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_19
# 215 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_20
# 218 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_21
# 221 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_22
NewBirchsLab_EventScript_PokeballThree_13:
# 224 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBirchsLab_EventScript_PokeballThree_32
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_6:
# 196 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_PokeballThree_8
	goto NewBirchsLab_EventScript_PokeballThree_5

NewBirchsLab_EventScript_PokeballThree_8:
# 196 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_PokeballThree_4
	goto NewBirchsLab_EventScript_PokeballThree_5

NewBirchsLab_EventScript_PokeballThree_14:
# 198 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Charmander
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_15:
# 201 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Cyndaquil
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_16:
# 204 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Torchic
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_17:
# 207 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chimchar
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_18:
# 210 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Tepig
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_19:
# 213 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Fennekin
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_20:
# 216 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Litten
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_21:
# 219 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Scorbunny
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_22:
# 222 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Fuecoco
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_32:
# 226 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 227 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerFemale
# 228 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerMale
	goto NewBirchsLab_EventScript_PokeballThree_1


NewBirchsLab_EventScript_Squirtle::
# 241 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 242 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 243 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Squirtle_1
# 282 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 283 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Squirtle_1:
# 244 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 245 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Squirtle_5
# 253 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Squirtle_6
# 262 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 263 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Squirtle_4:
# 266 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 267 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 269 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 270 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 271 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 272 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 273 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 274 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 275 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 276 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 277 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 278 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 279 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Squirtle_5:
# 246 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 247 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_1
# 248 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 249 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 250 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 251 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Squirtle_4

NewBirchsLab_EventScript_Squirtle_6:
# 254 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 255 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_1
# 256 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 257 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 258 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 259 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Squirtle_4


NewBirchsLab_EventScript_Totodile::
# 290 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 291 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 292 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Totodile_1
# 331 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 332 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Totodile_1:
# 293 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 294 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Totodile_5
# 302 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Totodile_6
# 311 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 312 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Totodile_4:
# 315 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 316 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 318 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 319 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 320 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 321 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 322 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 323 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 324 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 325 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 326 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 327 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 328 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Totodile_5:
# 295 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 296 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_1
# 297 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 298 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 299 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 300 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Totodile_4

NewBirchsLab_EventScript_Totodile_6:
# 303 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 304 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_1
# 305 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 306 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 307 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 308 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Totodile_4


NewBirchsLab_EventScript_Mudkip::
# 339 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 340 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 341 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Mudkip_1
# 380 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 381 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Mudkip_1:
# 342 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 343 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Mudkip_5
# 351 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Mudkip_6
# 360 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 361 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Mudkip_4:
# 364 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 365 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 367 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 368 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 369 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 370 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 371 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 372 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 373 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 374 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 375 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 376 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 377 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Mudkip_5:
# 344 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 345 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_1
# 346 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 347 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 348 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 349 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Mudkip_4

NewBirchsLab_EventScript_Mudkip_6:
# 352 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 353 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_1
# 354 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 355 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 356 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 357 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Mudkip_4


NewBirchsLab_EventScript_Piplup::
# 388 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 389 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_0, MSGBOX_YESNO
# 390 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Piplup_1
# 429 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 430 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Piplup_1:
# 391 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 392 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Piplup_5
# 400 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Piplup_6
# 409 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 410 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Piplup_4:
# 413 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 414 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 416 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 417 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 418 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 419 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 420 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 421 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 422 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 423 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 424 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 425 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 426 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Piplup_5:
# 393 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 394 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_1
# 395 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 396 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 397 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 398 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Piplup_4

NewBirchsLab_EventScript_Piplup_6:
# 401 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 402 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_1
# 403 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 404 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 405 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 406 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Piplup_4


NewBirchsLab_EventScript_Oshawott::
# 437 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 438 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_0, MSGBOX_YESNO
# 439 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Oshawott_1
# 478 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 479 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Oshawott_1:
# 440 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 441 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Oshawott_5
# 449 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Oshawott_6
# 458 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 459 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Oshawott_4:
# 462 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 463 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 465 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 466 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 467 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 468 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 469 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 470 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 471 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 472 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 473 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 474 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 475 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Oshawott_5:
# 442 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 443 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_1
# 444 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 445 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 446 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 447 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Oshawott_4

NewBirchsLab_EventScript_Oshawott_6:
# 450 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 451 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_1
# 452 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 453 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 454 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 455 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Oshawott_4


NewBirchsLab_EventScript_Froakie::
# 486 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 487 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_0, MSGBOX_YESNO
# 488 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Froakie_1
# 527 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 528 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Froakie_1:
# 489 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 490 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Froakie_5
# 498 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Froakie_6
# 507 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 508 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Froakie_4:
# 511 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 512 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 514 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 515 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 516 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 517 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 518 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 519 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 520 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 521 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 522 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 523 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 524 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Froakie_5:
# 491 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 492 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_1
# 493 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 494 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 495 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 496 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Froakie_4

NewBirchsLab_EventScript_Froakie_6:
# 499 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 500 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_1
# 501 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 502 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 503 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 504 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Froakie_4


NewBirchsLab_EventScript_Popplio::
# 535 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 536 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_0, MSGBOX_YESNO
# 537 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Popplio_1
# 576 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 577 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Popplio_1:
# 538 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 539 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Popplio_5
# 547 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Popplio_6
# 556 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 557 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Popplio_4:
# 560 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 561 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 563 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 564 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 565 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 566 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 567 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 568 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 569 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 570 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 571 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 572 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 573 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Popplio_5:
# 540 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 541 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_1
# 542 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 543 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 544 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 545 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Popplio_4

NewBirchsLab_EventScript_Popplio_6:
# 548 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 549 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_1
# 550 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 551 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 552 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 553 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Popplio_4


NewBirchsLab_EventScript_Sobble::
# 584 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
# 585 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_0, MSGBOX_YESNO
# 586 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Sobble_1
# 625 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 626 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Sobble_1:
# 587 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SOBBLE, 5
# 588 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Sobble_5
# 596 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Sobble_6
# 605 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 606 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Sobble_4:
# 609 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 610 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 612 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 613 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 614 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 615 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 616 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 617 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 618 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 619 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 620 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 621 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 622 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Sobble_5:
# 589 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 590 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_1
# 591 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 592 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 593 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 594 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Sobble_4

NewBirchsLab_EventScript_Sobble_6:
# 597 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 598 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_1
# 599 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 600 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 601 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 602 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Sobble_4


NewBirchsLab_EventScript_Quaxly::
# 633 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 634 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Quaxly_Text_0, MSGBOX_YESNO
# 635 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Quaxly_1
# 674 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 675 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Quaxly_1:
# 636 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_QUAXLY, 5
# 637 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Quaxly_5
# 645 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Quaxly_6
# 654 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 655 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Quaxly_4:
# 658 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 659 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 661 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 662 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 663 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 664 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 665 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 666 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 667 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 668 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 669 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 670 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 671 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Quaxly_5:
# 638 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 639 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Quaxly_Text_1
# 640 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 641 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 642 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 643 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Quaxly_4

NewBirchsLab_EventScript_Quaxly_6:
# 646 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 647 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Quaxly_Text_1
# 648 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 649 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 650 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 651 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Quaxly_4


NewBirchsLab_EventScript_Bulbasaur::
# 682 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 683 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 684 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_1
# 723 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 724 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Bulbasaur_1:
# 685 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 686 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_5
# 694 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_6
# 703 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 704 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Bulbasaur_4:
# 707 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 708 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 710 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 711 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 712 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 713 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 714 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 715 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 716 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 717 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 718 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 719 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 720 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Bulbasaur_5:
# 687 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 688 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_1
# 689 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 690 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 691 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 692 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Bulbasaur_4

NewBirchsLab_EventScript_Bulbasaur_6:
# 695 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 696 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_1
# 697 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 698 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 699 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 700 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Bulbasaur_4


NewBirchsLab_EventScript_Chikorita::
# 731 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 732 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 733 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chikorita_1
# 772 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 773 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chikorita_1:
# 734 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 735 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chikorita_5
# 743 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chikorita_6
# 752 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 753 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chikorita_4:
# 756 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 757 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 759 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 760 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 761 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 762 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 763 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 764 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 765 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 766 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 767 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 768 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 769 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Chikorita_5:
# 736 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 737 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_1
# 738 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 739 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 740 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 741 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chikorita_4

NewBirchsLab_EventScript_Chikorita_6:
# 744 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 745 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_1
# 746 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 747 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 748 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 749 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chikorita_4


NewBirchsLab_EventScript_Treecko::
# 780 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 781 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 782 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Treecko_1
# 821 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 822 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Treecko_1:
# 783 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 784 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Treecko_5
# 792 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Treecko_6
# 801 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 802 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Treecko_4:
# 805 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 806 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 808 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 809 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 810 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 811 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 812 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 813 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 814 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 815 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 816 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 817 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 818 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Treecko_5:
# 785 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 786 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_1
# 787 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 788 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 789 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 790 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Treecko_4

NewBirchsLab_EventScript_Treecko_6:
# 793 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 794 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_1
# 795 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 796 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 797 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 798 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Treecko_4


NewBirchsLab_EventScript_Turtwig::
# 829 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 830 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_0, MSGBOX_YESNO
# 831 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Turtwig_1
# 870 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 871 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Turtwig_1:
# 832 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 833 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Turtwig_5
# 841 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Turtwig_6
# 850 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 851 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Turtwig_4:
# 854 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 855 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 857 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 858 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 859 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 860 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 861 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 862 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 863 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 864 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 865 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 866 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 867 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Turtwig_5:
# 834 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 835 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_1
# 836 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 837 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 838 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 839 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Turtwig_4

NewBirchsLab_EventScript_Turtwig_6:
# 842 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 843 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_1
# 844 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 845 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 846 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 847 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Turtwig_4


NewBirchsLab_EventScript_Snivy::
# 878 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 879 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 880 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Snivy_1
# 919 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 920 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Snivy_1:
# 881 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SNIVY, 5
# 882 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Snivy_5
# 890 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Snivy_6
# 899 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 900 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Snivy_4:
# 903 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 904 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 906 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 907 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 908 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 909 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 910 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 911 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 912 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 913 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 914 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 915 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 916 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Snivy_5:
# 883 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 884 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_1
# 885 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 886 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 887 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 888 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Snivy_4

NewBirchsLab_EventScript_Snivy_6:
# 891 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 892 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_1
# 893 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 894 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 895 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 896 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Snivy_4


NewBirchsLab_EventScript_Chespin::
# 927 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 928 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_0, MSGBOX_YESNO
# 929 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chespin_1
# 968 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 969 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chespin_1:
# 930 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 931 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chespin_5
# 939 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chespin_6
# 948 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 949 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chespin_4:
# 952 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 953 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 955 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 956 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 957 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 958 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 959 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 960 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 961 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 962 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 963 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 964 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 965 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Chespin_5:
# 932 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 933 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_1
# 934 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 935 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 936 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 937 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chespin_4

NewBirchsLab_EventScript_Chespin_6:
# 940 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 941 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_1
# 942 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 943 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 944 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 945 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chespin_4


NewBirchsLab_EventScript_Rowlet::
# 976 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 977 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_0, MSGBOX_YESNO
# 978 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Rowlet_1
# 1017 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1018 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Rowlet_1:
# 979 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 980 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Rowlet_5
# 988 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Rowlet_6
# 997 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 998 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Rowlet_4:
# 1001 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1002 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1004 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1005 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1006 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1007 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1008 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1009 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1010 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1011 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1012 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1013 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1014 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Rowlet_5:
# 981 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 982 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_1
# 983 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 984 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 985 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 986 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Rowlet_4

NewBirchsLab_EventScript_Rowlet_6:
# 989 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 990 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_1
# 991 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 992 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 993 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 994 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Rowlet_4


NewBirchsLab_EventScript_Grookey::
# 1025 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 1026 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_0, MSGBOX_YESNO
# 1027 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Grookey_1
# 1066 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1067 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Grookey_1:
# 1028 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 1029 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Grookey_5
# 1037 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Grookey_6
# 1046 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1047 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Grookey_4:
# 1050 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1051 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1053 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1054 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1055 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1056 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1057 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1058 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1059 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1060 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1061 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1062 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1063 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Grookey_5:
# 1030 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1031 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_1
# 1032 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1033 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1034 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1035 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Grookey_4

NewBirchsLab_EventScript_Grookey_6:
# 1038 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1039 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_1
# 1040 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1041 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1042 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1043 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Grookey_4


NewBirchsLab_EventScript_Sprigatito::
# 1074 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 1075 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_0, MSGBOX_YESNO
# 1076 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_1
# 1115 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1116 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Sprigatito_1:
# 1077 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
# 1078 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_5
# 1086 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_6
# 1095 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1096 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Sprigatito_4:
# 1099 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1100 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1102 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1103 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1104 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1105 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1106 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1107 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1108 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1109 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1110 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1111 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1112 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Sprigatito_5:
# 1079 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1080 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_1
# 1081 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1082 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1083 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1084 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Sprigatito_4

NewBirchsLab_EventScript_Sprigatito_6:
# 1087 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1088 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_1
# 1089 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1090 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1091 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1092 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Sprigatito_4


NewBirchsLab_EventScript_Charmander::
# 1123 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 1124 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 1125 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Charmander_1
# 1164 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1165 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Charmander_1:
# 1126 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 1127 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Charmander_5
# 1135 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Charmander_6
# 1144 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1145 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Charmander_4:
# 1148 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1149 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1151 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1152 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1153 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1154 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1155 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1156 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1157 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1158 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1159 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1160 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1161 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Charmander_5:
# 1128 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1129 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_1
# 1130 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1131 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1132 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1133 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Charmander_4

NewBirchsLab_EventScript_Charmander_6:
# 1136 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1137 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_1
# 1138 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1139 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1140 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1141 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Charmander_4


NewBirchsLab_EventScript_Cyndaquil::
# 1172 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 1173 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 1174 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_1
# 1213 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1214 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Cyndaquil_1:
# 1175 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 1176 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_5
# 1184 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_6
# 1193 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1194 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Cyndaquil_4:
# 1197 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1198 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1200 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1201 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1202 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1203 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1204 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1205 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1206 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1207 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1208 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1209 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1210 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Cyndaquil_5:
# 1177 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1178 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_1
# 1179 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1180 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1181 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1182 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Cyndaquil_4

NewBirchsLab_EventScript_Cyndaquil_6:
# 1185 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1186 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_1
# 1187 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1188 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1189 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1190 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Cyndaquil_4


NewBirchsLab_EventScript_Torchic::
# 1221 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 1222 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 1223 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Torchic_1
# 1262 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1263 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Torchic_1:
# 1224 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 1225 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Torchic_5
# 1233 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Torchic_6
# 1242 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1243 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Torchic_4:
# 1246 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1247 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1249 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1250 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1251 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1252 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1253 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1254 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1255 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1256 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1257 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1258 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1259 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Torchic_5:
# 1226 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1227 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_1
# 1228 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1229 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1230 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1231 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Torchic_4

NewBirchsLab_EventScript_Torchic_6:
# 1234 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1235 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_1
# 1236 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1237 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1238 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1239 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Torchic_4


NewBirchsLab_EventScript_Chimchar::
# 1270 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 1271 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_0, MSGBOX_YESNO
# 1272 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chimchar_1
# 1311 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1312 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chimchar_1:
# 1273 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5
# 1274 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chimchar_5
# 1282 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chimchar_6
# 1291 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1292 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chimchar_4:
# 1295 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1296 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1298 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1299 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1300 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1301 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1302 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1303 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1304 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1305 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1306 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1307 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1308 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Chimchar_5:
# 1275 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1276 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_1
# 1277 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1278 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1279 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1280 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chimchar_4

NewBirchsLab_EventScript_Chimchar_6:
# 1283 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1284 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_1
# 1285 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1286 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1287 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1288 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chimchar_4


NewBirchsLab_EventScript_Tepig::
# 1319 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 1320 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_0, MSGBOX_YESNO
# 1321 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Tepig_1
# 1360 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1361 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Tepig_1:
# 1322 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 1323 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Tepig_5
# 1331 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Tepig_6
# 1340 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1341 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Tepig_4:
# 1344 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1345 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1347 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1348 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1349 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1350 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1351 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1352 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1353 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1354 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1355 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1356 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1357 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Tepig_5:
# 1324 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1325 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_1
# 1326 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1327 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1328 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1329 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Tepig_4

NewBirchsLab_EventScript_Tepig_6:
# 1332 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1333 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_1
# 1334 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1335 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1336 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1337 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Tepig_4


NewBirchsLab_EventScript_Fennekin::
# 1368 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 1369 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_0, MSGBOX_YESNO
# 1370 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Fennekin_1
# 1409 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1410 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Fennekin_1:
# 1371 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 1372 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Fennekin_5
# 1380 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Fennekin_6
# 1389 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1390 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Fennekin_4:
# 1393 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1394 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1396 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1397 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1398 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1399 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1400 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1401 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1402 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1403 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1404 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1405 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1406 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Fennekin_5:
# 1373 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1374 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_1
# 1375 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1376 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1377 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1378 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Fennekin_4

NewBirchsLab_EventScript_Fennekin_6:
# 1381 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1382 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_1
# 1383 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1384 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1385 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1386 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Fennekin_4


NewBirchsLab_EventScript_Litten::
# 1417 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 1418 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_0, MSGBOX_YESNO
# 1419 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Litten_1
# 1458 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1459 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Litten_1:
# 1420 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 1421 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Litten_5
# 1429 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Litten_6
# 1438 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1439 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Litten_4:
# 1442 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1443 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1445 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1446 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1447 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1448 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1449 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1450 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1451 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1452 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1453 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1454 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1455 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Litten_5:
# 1422 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1423 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_1
# 1424 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1425 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1426 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1427 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Litten_4

NewBirchsLab_EventScript_Litten_6:
# 1430 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1431 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_1
# 1432 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1433 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1434 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1435 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Litten_4


NewBirchsLab_EventScript_Scorbunny::
# 1466 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 1467 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_0, MSGBOX_YESNO
# 1468 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_1
# 1507 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1508 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Scorbunny_1:
# 1469 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
# 1470 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_5
# 1478 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_6
# 1487 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1488 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Scorbunny_4:
# 1491 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1492 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1494 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1495 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1496 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1497 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1498 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1499 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1500 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1501 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1502 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1503 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1504 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Scorbunny_5:
# 1471 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1472 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_1
# 1473 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1474 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1475 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1476 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Scorbunny_4

NewBirchsLab_EventScript_Scorbunny_6:
# 1479 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1480 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_1
# 1481 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1482 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1483 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1484 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Scorbunny_4


NewBirchsLab_EventScript_Fuecoco::
# 1515 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 1516 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_0, MSGBOX_YESNO
# 1517 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_1
# 1556 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1557 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Fuecoco_1:
# 1518 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_FUECOCO, 5
# 1519 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_5
# 1527 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_6
# 1536 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1537 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Fuecoco_4:
# 1540 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1541 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1543 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1544 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1545 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1546 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1547 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1548 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1549 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1550 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1551 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1552 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1553 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Fuecoco_5:
# 1520 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1521 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_1
# 1522 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1523 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1524 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1525 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Fuecoco_4

NewBirchsLab_EventScript_Fuecoco_6:
# 1528 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1529 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_2
# 1530 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1531 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1532 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1533 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Fuecoco_4


NewBirchsLab_EventScript_WelcomePlayerMale::
# 1563 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_WelcomePlayerMale
	return


NewBirchsLab_EventScript_WelcomePlayerFemale::
# 1568 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_WelcomePlayerFemale
	return


NewBirchsLab_EventScript_GoodbyePlayerMale::
# 1573 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
	return


NewBirchsLab_EventScript_GoodbyePlayerFemale::
# 1578 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
	return


NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerMale::
# 1583 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTreeckoPlayerMale
# 1584 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
	return


NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerFemale::
# 1589 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTreeckoPlayerFemale
# 1590 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
	return


NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerMale::
# 1595 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterMudkipPlayerMale
# 1596 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
	return


NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerFemale::
# 1601 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterMudkipPlayerFemale
# 1602 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
	return


NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerMale::
# 1607 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTorchicPlayerMale
# 1608 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
	return


NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerFemale::
# 1613 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTorchicPlayerFemale
# 1614 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
	return


NicknamePartyMon::
# 1624 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1625 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1626 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 1627 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1628 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 1635 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1636 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1637 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 1640 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 1638 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewBirchsLab_EventScript_Birch_Text_0:
# 23 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 1$"

NewBirchsLab_EventScript_Birch_Text_1:
# 24 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 2$"

NewBirchsLab_EventScript_Birch_Text_2:
# 25 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 3$"

NewBirchsLab_EventScript_Birch_Text_3:
# 26 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 4$"

NewBirchsLab_EventScript_Birch_Text_4:
# 27 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 5$"

NewBirchsLab_EventScript_Birch_Text_5:
# 28 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 6$"

NewBirchsLab_EventScript_Birch_Text_6:
# 29 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 7$"

NewBirchsLab_EventScript_Birch_Text_7:
# 30 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 8$"

NewBirchsLab_EventScript_Birch_Text_8:
# 31 "data/maps/NewBirchsLab/scripts.pory"
	.string "Gen 9$"

NewBirchsLab_EventScript_Birch_Text_9:
# 32 "data/maps/NewBirchsLab/scripts.pory"
	.string "Cancel$"

NewBirchsLab_EventScript_SayGenShowing_Text_0:
# 58 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 1.$"

NewBirchsLab_EventScript_SayGenShowing_Text_1:
# 60 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 2.$"

NewBirchsLab_EventScript_SayGenShowing_Text_2:
# 62 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 3.$"

NewBirchsLab_EventScript_SayGenShowing_Text_3:
# 64 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 4.$"

NewBirchsLab_EventScript_SayGenShowing_Text_4:
# 66 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 5.$"

NewBirchsLab_EventScript_SayGenShowing_Text_5:
# 68 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 6.$"

NewBirchsLab_EventScript_SayGenShowing_Text_6:
# 70 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 7.$"

NewBirchsLab_EventScript_SayGenShowing_Text_7:
# 72 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 8.$"

NewBirchsLab_EventScript_SayGenShowing_Text_8:
# 74 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 9.$"

NewBirchsLab_EventScript_SayGenShowing_Text_9:
# 76 "data/maps/NewBirchsLab/scripts.pory"
	.string "Now showing starters.$"

NewBirchsLab_EventScript_PokeballOne_Text_0:
# 89 "data/maps/NewBirchsLab/scripts.pory"
	.string "Ask Professor Birch about this!$"

NewBirchsLab_EventScript_PokeballOne_Text_1:
# 128 "data/maps/NewBirchsLab/scripts.pory"
	.string "Better not get greedy!$"

NewBirchsLab_EventScript_Squirtle_Text_0:
# 242 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewBirchsLab_EventScript_Squirtle_Text_1:
# 247 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Squirtle!$"

NewBirchsLab_EventScript_Squirtle_Text_2:
# 263 "data/maps/NewBirchsLab/scripts.pory"
	.string "No More Room$"

NewBirchsLab_EventScript_Totodile_Text_0:
# 291 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewBirchsLab_EventScript_Totodile_Text_1:
# 296 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Totodile!$"

NewBirchsLab_EventScript_Mudkip_Text_0:
# 340 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

NewBirchsLab_EventScript_Mudkip_Text_1:
# 345 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Mudkip!$"

NewBirchsLab_EventScript_Piplup_Text_0:
# 389 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

NewBirchsLab_EventScript_Piplup_Text_1:
# 394 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Piplup!$"

NewBirchsLab_EventScript_Oshawott_Text_0:
# 438 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

NewBirchsLab_EventScript_Oshawott_Text_1:
# 443 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Oshawott!$"

NewBirchsLab_EventScript_Froakie_Text_0:
# 487 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Froakie?$"

NewBirchsLab_EventScript_Froakie_Text_1:
# 492 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Froakie!$"

NewBirchsLab_EventScript_Popplio_Text_0:
# 536 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

NewBirchsLab_EventScript_Popplio_Text_1:
# 541 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Popplio!$"

NewBirchsLab_EventScript_Sobble_Text_0:
# 585 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Sobble?$"

NewBirchsLab_EventScript_Sobble_Text_1:
# 590 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Sobble!$"

NewBirchsLab_EventScript_Quaxly_Text_0:
# 634 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Quaxly?$"

NewBirchsLab_EventScript_Quaxly_Text_1:
# 639 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Quaxly!$"

NewBirchsLab_EventScript_Bulbasaur_Text_0:
# 683 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewBirchsLab_EventScript_Bulbasaur_Text_1:
# 688 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Bulbasaur!$"

NewBirchsLab_EventScript_Chikorita_Text_0:
# 732 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewBirchsLab_EventScript_Chikorita_Text_1:
# 737 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Chikorita!$"

NewBirchsLab_EventScript_Treecko_Text_0:
# 781 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

NewBirchsLab_EventScript_Treecko_Text_1:
# 786 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Treecko!$"

NewBirchsLab_EventScript_Turtwig_Text_0:
# 830 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Turtwig?$"

NewBirchsLab_EventScript_Turtwig_Text_1:
# 835 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Turtwig!$"

NewBirchsLab_EventScript_Snivy_Text_0:
# 879 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Snivy?$"

NewBirchsLab_EventScript_Snivy_Text_1:
# 884 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Snivy!$"

NewBirchsLab_EventScript_Chespin_Text_0:
# 928 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chespin?$"

NewBirchsLab_EventScript_Chespin_Text_1:
# 933 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Chespin!$"

NewBirchsLab_EventScript_Rowlet_Text_0:
# 977 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Rowlet?$"

NewBirchsLab_EventScript_Rowlet_Text_1:
# 982 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Rowlet!$"

NewBirchsLab_EventScript_Grookey_Text_0:
# 1026 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Grookey?$"

NewBirchsLab_EventScript_Grookey_Text_1:
# 1031 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Grookey!$"

NewBirchsLab_EventScript_Sprigatito_Text_0:
# 1075 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

NewBirchsLab_EventScript_Sprigatito_Text_1:
# 1080 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Sprigatito!$"

NewBirchsLab_EventScript_Charmander_Text_0:
# 1124 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewBirchsLab_EventScript_Charmander_Text_1:
# 1129 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Charmander!$"

NewBirchsLab_EventScript_Cyndaquil_Text_0:
# 1173 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewBirchsLab_EventScript_Cyndaquil_Text_1:
# 1178 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Cyndaquil!$"

NewBirchsLab_EventScript_Torchic_Text_0:
# 1222 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

NewBirchsLab_EventScript_Torchic_Text_1:
# 1227 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Torchic!$"

NewBirchsLab_EventScript_Chimchar_Text_0:
# 1271 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chimchar?$"

NewBirchsLab_EventScript_Chimchar_Text_1:
# 1276 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Chimchar!$"

NewBirchsLab_EventScript_Tepig_Text_0:
# 1320 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Tepig?$"

NewBirchsLab_EventScript_Tepig_Text_1:
# 1325 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Tepig!$"

NewBirchsLab_EventScript_Fennekin_Text_0:
# 1369 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Fennekin?$"

NewBirchsLab_EventScript_Fennekin_Text_1:
# 1374 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Fennekin!$"

NewBirchsLab_EventScript_Litten_Text_0:
# 1418 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Litten?$"

NewBirchsLab_EventScript_Litten_Text_1:
# 1423 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Litten!$"

NewBirchsLab_EventScript_Scorbunny_Text_0:
# 1467 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

NewBirchsLab_EventScript_Scorbunny_Text_1:
# 1472 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Scorbunny!$"

NewBirchsLab_EventScript_Fuecoco_Text_0:
# 1516 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

NewBirchsLab_EventScript_Fuecoco_Text_1:
# 1521 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Fuecoco!$"

NewBirchsLab_EventScript_Fuecoco_Text_2:
# 1529 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} {PLAYER} received the the Fuecoco!$"

NicknamePartyMon_Text_0:
# 1624 "data/maps/NewBirchsLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 1640 "data/maps/NewBirchsLab/scripts.pory"
	.string "Transferred to PC.$"

NewBirchsLab_NotChosen::
# 1643 "data/maps/NewBirchsLab/scripts.pory"
	.string "You did not choose this Pokemon.$"

NewBirchsLab_NotYet::
# 1647 "data/maps/NewBirchsLab/scripts.pory"
	.string "Better not touch these yet!\p"
	.string "Maybe you should talk to {RIVAL}.$"

NewBirchsLab_WelcomePlayerMale::
# 1652 "data/maps/NewBirchsLab/scripts.pory"
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
# 1675 "data/maps/NewBirchsLab/scripts.pory"
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
# 1698 "data/maps/NewBirchsLab/scripts.pory"
	.string "{RIVAL} yelled she was heading to\n"
	.string "Route 103 as she ran out the door,\l"
	.string "perhaps you should look for her there.$"

NewBirchsLab_Route103PlayerFemale::
# 1705 "data/maps/NewBirchsLab/scripts.pory"
	.string "{RIVAL} yelled he was heading to\n"
	.string "Route 103 as he ran out the door,\l"
	.string "perhaps you should look for him there.$"

NewBirchsLab_RivalStarterTreeckoPlayerMale::
# 1712 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Treecko as\l"
	.string "her Starter!$"

NewBirchsLab_RivalStarterTreeckoPlayerFemale::
# 1719 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Treecko as\l"
	.string "his Starter!$"

NewBirchsLab_RivalStarterMudkipPlayerMale::
# 1726 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Mudkip as\l"
	.string "her Starter!$"

NewBirchsLab_RivalStarterMudkipPlayerFemale::
# 1733 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Mudkip as\l"
	.string "his Starter!$"

NewBirchsLab_RivalStarterTorchicPlayerMale::
# 1740 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Torchic as\l"
	.string "her Starter!$"

NewBirchsLab_RivalStarterTorchicPlayerFemale::
# 1747 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Torchic as\l"
	.string "his Starter!$"

NewBirchsLab_ChangeStarters::
# 1754 "data/maps/NewBirchsLab/scripts.pory"
	.string "Which Generation of Starters would you\n"
	.string "like to see? You can change\l"
	.string "Generations as many times as you want.$"
