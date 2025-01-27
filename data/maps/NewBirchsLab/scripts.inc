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
	setvar VAR_STARTER_GEN, 0
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
	goto_if_set FLAG_SYS_POKEDEX_GET, NewBirchsLab_EventScript_Birch_15
# 52 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 53 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_GoodbyePlayerFemale
# 54 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_GoodbyePlayerMale
NewBirchsLab_EventScript_Birch_4:
# 58 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 59 "data/maps/NewBirchsLab/scripts.pory"
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
	copyvar VAR_STARTER_GEN, VAR_RESULT
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

NewBirchsLab_EventScript_Birch_15:
# 48 "data/maps/NewBirchsLab/scripts.pory"
	goto ProfBirch_EventScript_AskRatePokedex
	goto NewBirchsLab_EventScript_Birch_4


NewBirchsLab_EventScript_SayGenShowing::
# 64 "data/maps/NewBirchsLab/scripts.pory"
	switch VAR_STARTER_GEN
# 66 "data/maps/NewBirchsLab/scripts.pory"
	case 0, NewBirchsLab_EventScript_SayGenShowing_3
# 68 "data/maps/NewBirchsLab/scripts.pory"
	case 1, NewBirchsLab_EventScript_SayGenShowing_4
# 70 "data/maps/NewBirchsLab/scripts.pory"
	case 2, NewBirchsLab_EventScript_SayGenShowing_5
# 72 "data/maps/NewBirchsLab/scripts.pory"
	case 3, NewBirchsLab_EventScript_SayGenShowing_6
# 74 "data/maps/NewBirchsLab/scripts.pory"
	case 4, NewBirchsLab_EventScript_SayGenShowing_7
# 76 "data/maps/NewBirchsLab/scripts.pory"
	case 5, NewBirchsLab_EventScript_SayGenShowing_8
# 78 "data/maps/NewBirchsLab/scripts.pory"
	case 6, NewBirchsLab_EventScript_SayGenShowing_9
# 80 "data/maps/NewBirchsLab/scripts.pory"
	case 7, NewBirchsLab_EventScript_SayGenShowing_10
# 82 "data/maps/NewBirchsLab/scripts.pory"
	case 8, NewBirchsLab_EventScript_SayGenShowing_11
# 85 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_9
NewBirchsLab_EventScript_SayGenShowing_1:
# 87 "data/maps/NewBirchsLab/scripts.pory"
	release
	end

NewBirchsLab_EventScript_SayGenShowing_3:
# 67 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_0
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_4:
# 69 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_1
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_5:
# 71 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_2
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_6:
# 73 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_3
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_7:
# 75 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_4
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_8:
# 77 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_5
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_9:
# 79 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_6
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_10:
# 81 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_7
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_11:
# 83 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_8
	goto NewBirchsLab_EventScript_SayGenShowing_1


NewBirchsLab_EventScript_PokeballOne::
# 92 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 93 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballOne_2
# 96 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_PokeballOne_3
# 100 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_PokeballOne_6
NewBirchsLab_EventScript_PokeballOne_5:
# 137 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_1
NewBirchsLab_EventScript_PokeballOne_1:
# 139 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 140 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballOne_2:
# 94 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_3:
# 98 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_4:
# 101 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_14
# 104 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_15
# 107 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_16
# 110 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_17
# 113 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_18
# 116 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_19
# 119 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_20
# 122 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_21
# 125 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_22
NewBirchsLab_EventScript_PokeballOne_13:
# 128 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBirchsLab_EventScript_PokeballOne_32
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_6:
# 100 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_PokeballOne_8
	goto NewBirchsLab_EventScript_PokeballOne_5

NewBirchsLab_EventScript_PokeballOne_8:
# 100 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_PokeballOne_4
	goto NewBirchsLab_EventScript_PokeballOne_5

NewBirchsLab_EventScript_PokeballOne_14:
# 102 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Squirtle
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_15:
# 105 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Totodile
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_16:
# 108 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Mudkip
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_17:
# 111 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Piplup
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_18:
# 114 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Oshawott
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_19:
# 117 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Froakie
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_20:
# 120 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Popplio
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_21:
# 123 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Sobble
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_22:
# 126 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Quaxly
	goto NewBirchsLab_EventScript_PokeballOne_13

NewBirchsLab_EventScript_PokeballOne_32:
# 131 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 132 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerFemale
# 133 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerMale
	goto NewBirchsLab_EventScript_PokeballOne_1


NewBirchsLab_EventScript_PokeballTwo::
# 145 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 146 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballTwo_2
# 149 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_PokeballTwo_3
# 153 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_PokeballTwo_6
NewBirchsLab_EventScript_PokeballTwo_5:
# 189 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_1
NewBirchsLab_EventScript_PokeballTwo_1:
# 191 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 192 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballTwo_2:
# 147 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_3:
# 151 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_4:
# 154 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_14
# 157 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_15
# 160 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_16
# 163 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_17
# 166 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_18
# 169 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_19
# 172 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_20
# 175 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_21
# 178 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_22
NewBirchsLab_EventScript_PokeballTwo_13:
# 181 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBirchsLab_EventScript_PokeballTwo_32
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_6:
# 153 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_PokeballTwo_8
	goto NewBirchsLab_EventScript_PokeballTwo_5

NewBirchsLab_EventScript_PokeballTwo_8:
# 153 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_PokeballTwo_4
	goto NewBirchsLab_EventScript_PokeballTwo_5

NewBirchsLab_EventScript_PokeballTwo_14:
# 155 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Bulbasaur
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_15:
# 158 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chikorita
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_16:
# 161 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Treecko
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_17:
# 164 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Turtwig
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_18:
# 167 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Snivy
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_19:
# 170 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chespin
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_20:
# 173 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Rowlet
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_21:
# 176 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Grookey
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_22:
# 179 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Sprigatito
	goto NewBirchsLab_EventScript_PokeballTwo_13

NewBirchsLab_EventScript_PokeballTwo_32:
# 183 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 184 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerFemale
# 185 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerMale
	goto NewBirchsLab_EventScript_PokeballTwo_1


NewBirchsLab_EventScript_PokeballThree::
# 197 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 198 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballThree_2
# 201 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_PokeballThree_3
# 205 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_PokeballThree_6
NewBirchsLab_EventScript_PokeballThree_5:
# 241 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_1
NewBirchsLab_EventScript_PokeballThree_1:
# 243 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 244 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballThree_2:
# 199 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_3:
# 203 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_4:
# 206 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_14
# 209 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_15
# 212 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_16
# 215 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_17
# 218 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_18
# 221 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_19
# 224 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_20
# 227 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_21
# 230 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_STARTER_GEN, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_22
NewBirchsLab_EventScript_PokeballThree_13:
# 233 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBirchsLab_EventScript_PokeballThree_32
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_6:
# 205 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_PokeballThree_8
	goto NewBirchsLab_EventScript_PokeballThree_5

NewBirchsLab_EventScript_PokeballThree_8:
# 205 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_PokeballThree_4
	goto NewBirchsLab_EventScript_PokeballThree_5

NewBirchsLab_EventScript_PokeballThree_14:
# 207 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Charmander
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_15:
# 210 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Cyndaquil
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_16:
# 213 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Torchic
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_17:
# 216 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chimchar
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_18:
# 219 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Tepig
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_19:
# 222 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Fennekin
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_20:
# 225 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Litten
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_21:
# 228 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Scorbunny
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_22:
# 231 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Fuecoco
	goto NewBirchsLab_EventScript_PokeballThree_13

NewBirchsLab_EventScript_PokeballThree_32:
# 235 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 236 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerFemale
# 237 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerMale
	goto NewBirchsLab_EventScript_PokeballThree_1


NewBirchsLab_EventScript_Squirtle::
# 250 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 251 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 252 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Squirtle_1
# 297 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 298 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Squirtle_1:
# 253 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Squirtle_5
# 257 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SQUIRTLE, 5
NewBirchsLab_EventScript_Squirtle_4:
# 260 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Squirtle_9
# 268 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Squirtle_10
# 277 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 278 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Squirtle_8:
# 281 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 282 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 284 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 285 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 286 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 287 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 288 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 289 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 290 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 291 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 292 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 293 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 294 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Squirtle_5:
# 254 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SQUIRTLE, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Squirtle_4

NewBirchsLab_EventScript_Squirtle_9:
# 261 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 262 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_1
# 263 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 264 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 265 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 266 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Squirtle_8

NewBirchsLab_EventScript_Squirtle_10:
# 269 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 270 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_1
# 271 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 272 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 273 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 274 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Squirtle_8


NewBirchsLab_EventScript_Totodile::
# 305 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 306 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 307 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Totodile_1
# 351 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 352 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Totodile_1:
# 308 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Totodile_5
# 312 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TOTODILE, 5
NewBirchsLab_EventScript_Totodile_4:
# 314 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Totodile_9
# 322 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Totodile_10
# 331 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 332 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Totodile_8:
# 335 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 336 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 338 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 339 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 340 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 341 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 342 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 343 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 344 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 345 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 346 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 347 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 348 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Totodile_5:
# 309 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TOTODILE, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Totodile_4

NewBirchsLab_EventScript_Totodile_9:
# 315 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 316 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_1
# 317 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 318 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 319 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 320 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Totodile_8

NewBirchsLab_EventScript_Totodile_10:
# 323 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 324 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_1
# 325 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 326 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 327 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 328 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Totodile_8


NewBirchsLab_EventScript_Mudkip::
# 359 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 360 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 361 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Mudkip_1
# 405 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 406 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Mudkip_1:
# 362 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Mudkip_5
# 366 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_MUDKIP, 5
NewBirchsLab_EventScript_Mudkip_4:
# 368 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Mudkip_9
# 376 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Mudkip_10
# 385 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 386 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Mudkip_8:
# 389 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 390 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 392 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 393 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 394 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 395 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 396 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 397 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 398 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 399 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 400 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 401 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 402 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Mudkip_5:
# 363 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_MUDKIP, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Mudkip_4

NewBirchsLab_EventScript_Mudkip_9:
# 369 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 370 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_1
# 371 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 372 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 373 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 374 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Mudkip_8

NewBirchsLab_EventScript_Mudkip_10:
# 377 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 378 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_1
# 379 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 380 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 381 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 382 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Mudkip_8


NewBirchsLab_EventScript_Piplup::
# 413 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 414 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_0, MSGBOX_YESNO
# 415 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Piplup_1
# 459 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 460 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Piplup_1:
# 416 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Piplup_5
# 420 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_PIPLUP, 5
NewBirchsLab_EventScript_Piplup_4:
# 422 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Piplup_9
# 430 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Piplup_10
# 439 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 440 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Piplup_8:
# 443 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 444 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 446 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 447 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 448 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 449 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 450 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 451 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 452 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 453 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 454 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 455 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 456 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Piplup_5:
# 417 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_PIPLUP, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Piplup_4

NewBirchsLab_EventScript_Piplup_9:
# 423 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 424 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_1
# 425 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 426 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 427 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 428 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Piplup_8

NewBirchsLab_EventScript_Piplup_10:
# 431 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 432 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_1
# 433 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 434 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 435 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 436 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Piplup_8


NewBirchsLab_EventScript_Oshawott::
# 467 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 468 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_0, MSGBOX_YESNO
# 469 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Oshawott_1
# 513 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 514 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Oshawott_1:
# 470 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Oshawott_5
# 474 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_OSHAWOTT, 5
NewBirchsLab_EventScript_Oshawott_4:
# 476 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Oshawott_9
# 484 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Oshawott_10
# 493 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 494 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Oshawott_8:
# 497 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 498 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 500 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 501 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 502 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 503 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 504 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 505 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 506 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 507 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 508 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 509 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 510 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Oshawott_5:
# 471 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_OSHAWOTT, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Oshawott_4

NewBirchsLab_EventScript_Oshawott_9:
# 477 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 478 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_1
# 479 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 480 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 481 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 482 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Oshawott_8

NewBirchsLab_EventScript_Oshawott_10:
# 485 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 486 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_1
# 487 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 488 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 489 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 490 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Oshawott_8


NewBirchsLab_EventScript_Froakie::
# 521 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 522 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_0, MSGBOX_YESNO
# 523 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Froakie_1
# 567 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 568 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Froakie_1:
# 524 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Froakie_5
# 528 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_FROAKIE, 5
NewBirchsLab_EventScript_Froakie_4:
# 530 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Froakie_9
# 538 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Froakie_10
# 547 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 548 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Froakie_8:
# 551 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 552 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 554 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 555 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 556 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 557 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 558 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 559 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 560 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 561 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 562 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 563 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 564 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Froakie_5:
# 525 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_FROAKIE, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Froakie_4

NewBirchsLab_EventScript_Froakie_9:
# 531 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 532 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_1
# 533 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 534 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 535 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 536 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Froakie_8

NewBirchsLab_EventScript_Froakie_10:
# 539 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 540 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_1
# 541 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 542 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 543 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 544 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Froakie_8


NewBirchsLab_EventScript_Popplio::
# 575 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 576 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_0, MSGBOX_YESNO
# 577 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Popplio_1
# 621 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 622 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Popplio_1:
# 578 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Popplio_5
# 582 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_POPPLIO, 5
NewBirchsLab_EventScript_Popplio_4:
# 584 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Popplio_9
# 592 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Popplio_10
# 601 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 602 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Popplio_8:
# 605 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 606 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 608 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 609 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 610 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 611 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 612 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 613 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 614 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 615 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 616 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 617 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 618 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Popplio_5:
# 579 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_POPPLIO, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Popplio_4

NewBirchsLab_EventScript_Popplio_9:
# 585 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 586 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_1
# 587 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 588 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 589 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 590 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Popplio_8

NewBirchsLab_EventScript_Popplio_10:
# 593 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 594 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_1
# 595 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 596 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 597 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 598 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Popplio_8


NewBirchsLab_EventScript_Sobble::
# 629 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
# 630 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_0, MSGBOX_YESNO
# 631 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Sobble_1
# 675 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 676 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Sobble_1:
# 632 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Sobble_5
# 636 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SOBBLE, 5
NewBirchsLab_EventScript_Sobble_4:
# 638 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Sobble_9
# 646 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Sobble_10
# 655 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 656 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Sobble_8:
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

NewBirchsLab_EventScript_Sobble_5:
# 633 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SOBBLE, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Sobble_4

NewBirchsLab_EventScript_Sobble_9:
# 639 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 640 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_1
# 641 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 642 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 643 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 644 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Sobble_8

NewBirchsLab_EventScript_Sobble_10:
# 647 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 648 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_1
# 649 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 650 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 651 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 652 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Sobble_8


NewBirchsLab_EventScript_Quaxly::
# 683 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 684 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Quaxly_Text_0, MSGBOX_YESNO
# 685 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Quaxly_1
# 729 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 730 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Quaxly_1:
# 686 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Quaxly_5
# 690 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_QUAXLY, 5
NewBirchsLab_EventScript_Quaxly_4:
# 692 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Quaxly_9
# 700 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Quaxly_10
# 709 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 710 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Quaxly_8:
# 713 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 714 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 716 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 717 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 718 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 719 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 720 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 721 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 722 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 723 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 724 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 725 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 726 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Quaxly_5:
# 687 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_QUAXLY, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Quaxly_4

NewBirchsLab_EventScript_Quaxly_9:
# 693 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 694 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Quaxly_Text_1
# 695 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 696 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 697 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 698 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Quaxly_8

NewBirchsLab_EventScript_Quaxly_10:
# 701 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 702 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Quaxly_Text_1
# 703 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 704 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 705 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 706 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Quaxly_8


NewBirchsLab_EventScript_Bulbasaur::
# 737 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 738 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 739 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_1
# 783 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 784 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Bulbasaur_1:
# 740 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Bulbasaur_5
# 744 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_BULBASAUR, 5
NewBirchsLab_EventScript_Bulbasaur_4:
# 746 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_9
# 754 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_10
# 763 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 764 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Bulbasaur_8:
# 767 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 768 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 770 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 771 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 772 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 773 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 774 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 775 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 776 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 777 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 778 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 779 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 780 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Bulbasaur_5:
# 741 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_BULBASAUR, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Bulbasaur_4

NewBirchsLab_EventScript_Bulbasaur_9:
# 747 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 748 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_1
# 749 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 750 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 751 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 752 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Bulbasaur_8

NewBirchsLab_EventScript_Bulbasaur_10:
# 755 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 756 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_1
# 757 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 758 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 759 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 760 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Bulbasaur_8


NewBirchsLab_EventScript_Chikorita::
# 791 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 792 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 793 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chikorita_1
# 837 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 838 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chikorita_1:
# 794 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Chikorita_5
# 798 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CHIKORITA, 5
NewBirchsLab_EventScript_Chikorita_4:
# 800 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chikorita_9
# 808 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chikorita_10
# 817 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 818 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chikorita_8:
# 821 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 822 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 824 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 825 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 826 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 827 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 828 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 829 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 830 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 831 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 832 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 833 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 834 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Chikorita_5:
# 795 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CHIKORITA, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Chikorita_4

NewBirchsLab_EventScript_Chikorita_9:
# 801 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 802 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_1
# 803 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 804 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 805 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 806 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chikorita_8

NewBirchsLab_EventScript_Chikorita_10:
# 809 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 810 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_1
# 811 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 812 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 813 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 814 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chikorita_8


NewBirchsLab_EventScript_Treecko::
# 845 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 846 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 847 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Treecko_1
# 891 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 892 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Treecko_1:
# 848 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Treecko_5
# 852 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TREECKO, 5
NewBirchsLab_EventScript_Treecko_4:
# 854 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Treecko_9
# 862 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Treecko_10
# 871 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 872 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Treecko_8:
# 875 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 876 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 878 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 879 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 880 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 881 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 882 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 883 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 884 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 885 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 886 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 887 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 888 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Treecko_5:
# 849 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TREECKO, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Treecko_4

NewBirchsLab_EventScript_Treecko_9:
# 855 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 856 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_1
# 857 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 858 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 859 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 860 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Treecko_8

NewBirchsLab_EventScript_Treecko_10:
# 863 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 864 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_1
# 865 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 866 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 867 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 868 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Treecko_8


NewBirchsLab_EventScript_Turtwig::
# 899 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 900 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_0, MSGBOX_YESNO
# 901 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Turtwig_1
# 945 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 946 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Turtwig_1:
# 902 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Turtwig_5
# 906 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TURTWIG, 5
NewBirchsLab_EventScript_Turtwig_4:
# 908 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Turtwig_9
# 916 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Turtwig_10
# 925 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 926 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Turtwig_8:
# 929 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 930 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 932 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 933 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 934 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 935 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 936 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 937 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 938 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 939 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 940 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 941 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 942 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Turtwig_5:
# 903 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TURTWIG, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Turtwig_4

NewBirchsLab_EventScript_Turtwig_9:
# 909 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 910 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_1
# 911 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 912 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 913 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 914 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Turtwig_8

NewBirchsLab_EventScript_Turtwig_10:
# 917 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 918 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_1
# 919 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 920 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 921 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 922 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Turtwig_8


NewBirchsLab_EventScript_Snivy::
# 953 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 954 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 955 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Snivy_1
# 999 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1000 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Snivy_1:
# 956 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Snivy_5
# 960 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SNIVY, 5
NewBirchsLab_EventScript_Snivy_4:
# 962 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Snivy_9
# 970 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Snivy_10
# 979 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 980 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Snivy_8:
# 983 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 984 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 986 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 987 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 988 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 989 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 990 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 991 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 992 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 993 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 994 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 995 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 996 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Snivy_5:
# 957 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SNIVY, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Snivy_4

NewBirchsLab_EventScript_Snivy_9:
# 963 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 964 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_1
# 965 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 966 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 967 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 968 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Snivy_8

NewBirchsLab_EventScript_Snivy_10:
# 971 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 972 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_1
# 973 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 974 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 975 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 976 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Snivy_8


NewBirchsLab_EventScript_Chespin::
# 1007 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 1008 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_0, MSGBOX_YESNO
# 1009 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chespin_1
# 1053 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1054 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chespin_1:
# 1010 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Chespin_5
# 1014 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CHESPIN, 5
NewBirchsLab_EventScript_Chespin_4:
# 1016 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chespin_9
# 1024 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chespin_10
# 1033 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1034 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chespin_8:
# 1037 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1038 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1040 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1041 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1042 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1043 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1044 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1045 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1046 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1047 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1048 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1049 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1050 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Chespin_5:
# 1011 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CHESPIN, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Chespin_4

NewBirchsLab_EventScript_Chespin_9:
# 1017 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1018 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_1
# 1019 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1020 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1021 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1022 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chespin_8

NewBirchsLab_EventScript_Chespin_10:
# 1025 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1026 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_1
# 1027 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1028 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1029 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1030 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chespin_8


NewBirchsLab_EventScript_Rowlet::
# 1061 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 1062 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_0, MSGBOX_YESNO
# 1063 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Rowlet_1
# 1107 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1108 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Rowlet_1:
# 1064 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Rowlet_5
# 1068 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_ROWLET, 5
NewBirchsLab_EventScript_Rowlet_4:
# 1070 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Rowlet_9
# 1078 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Rowlet_10
# 1087 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1088 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Rowlet_8:
# 1091 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1092 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1094 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1095 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1096 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1097 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1098 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1099 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1100 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1101 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1102 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1103 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1104 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Rowlet_5:
# 1065 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_ROWLET, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Rowlet_4

NewBirchsLab_EventScript_Rowlet_9:
# 1071 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1072 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_1
# 1073 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1074 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1075 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1076 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Rowlet_8

NewBirchsLab_EventScript_Rowlet_10:
# 1079 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1080 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_1
# 1081 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1082 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1083 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1084 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Rowlet_8


NewBirchsLab_EventScript_Grookey::
# 1115 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 1116 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_0, MSGBOX_YESNO
# 1117 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Grookey_1
# 1161 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1162 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Grookey_1:
# 1118 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Grookey_5
# 1122 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_GROOKEY, 5
NewBirchsLab_EventScript_Grookey_4:
# 1124 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Grookey_9
# 1132 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Grookey_10
# 1141 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1142 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Grookey_8:
# 1145 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1146 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1148 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1149 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1150 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1151 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1152 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1153 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1154 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1155 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1156 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1157 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1158 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Grookey_5:
# 1119 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_GROOKEY, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Grookey_4

NewBirchsLab_EventScript_Grookey_9:
# 1125 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1126 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_1
# 1127 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1128 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1129 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1130 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Grookey_8

NewBirchsLab_EventScript_Grookey_10:
# 1133 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1134 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_1
# 1135 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1136 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1137 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1138 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Grookey_8


NewBirchsLab_EventScript_Sprigatito::
# 1169 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 1170 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_0, MSGBOX_YESNO
# 1171 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_1
# 1215 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1216 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Sprigatito_1:
# 1172 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Sprigatito_5
# 1176 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SPRIGATITO, 5
NewBirchsLab_EventScript_Sprigatito_4:
# 1178 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_9
# 1186 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_10
# 1195 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1196 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Sprigatito_8:
# 1199 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1200 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1202 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1203 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1204 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1205 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1206 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1207 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1208 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1209 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1210 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1211 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1212 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Sprigatito_5:
# 1173 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SPRIGATITO, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Sprigatito_4

NewBirchsLab_EventScript_Sprigatito_9:
# 1179 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1180 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_1
# 1181 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1182 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1183 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1184 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Sprigatito_8

NewBirchsLab_EventScript_Sprigatito_10:
# 1187 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1188 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_1
# 1189 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1190 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 1191 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 1192 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Sprigatito_8


NewBirchsLab_EventScript_Charmander::
# 1223 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 1224 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 1225 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Charmander_1
# 1269 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1270 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Charmander_1:
# 1226 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Charmander_5
# 1230 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CHARMANDER, 5
NewBirchsLab_EventScript_Charmander_4:
# 1232 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Charmander_9
# 1240 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Charmander_10
# 1249 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1250 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Charmander_8:
# 1253 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1254 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1256 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1257 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1258 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1259 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1260 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1261 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1262 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1263 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1264 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1265 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1266 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Charmander_5:
# 1227 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CHARMANDER, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Charmander_4

NewBirchsLab_EventScript_Charmander_9:
# 1233 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1234 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_1
# 1235 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1236 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1237 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1238 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Charmander_8

NewBirchsLab_EventScript_Charmander_10:
# 1241 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1242 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_1
# 1243 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1244 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1245 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1246 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Charmander_8


NewBirchsLab_EventScript_Cyndaquil::
# 1277 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 1278 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 1279 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_1
# 1323 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1324 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Cyndaquil_1:
# 1280 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Cyndaquil_5
# 1284 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CYNDAQUIL, 5
NewBirchsLab_EventScript_Cyndaquil_4:
# 1286 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_9
# 1294 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_10
# 1303 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1304 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Cyndaquil_8:
# 1307 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1308 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1310 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1311 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1312 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1313 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1314 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1315 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1316 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1317 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1318 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1319 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1320 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Cyndaquil_5:
# 1281 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CYNDAQUIL, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Cyndaquil_4

NewBirchsLab_EventScript_Cyndaquil_9:
# 1287 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1288 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_1
# 1289 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1290 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1291 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1292 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Cyndaquil_8

NewBirchsLab_EventScript_Cyndaquil_10:
# 1295 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1296 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_1
# 1297 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1298 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1299 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1300 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Cyndaquil_8


NewBirchsLab_EventScript_Torchic::
# 1331 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 1332 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 1333 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Torchic_1
# 1377 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1378 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Torchic_1:
# 1334 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Torchic_5
# 1338 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TORCHIC, 5
NewBirchsLab_EventScript_Torchic_4:
# 1340 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Torchic_9
# 1348 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Torchic_10
# 1357 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1358 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Torchic_8:
# 1361 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1362 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1364 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1365 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1366 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1367 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1368 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1369 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1370 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1371 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1372 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1373 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1374 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Torchic_5:
# 1335 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TORCHIC, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Torchic_4

NewBirchsLab_EventScript_Torchic_9:
# 1341 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1342 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_1
# 1343 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1344 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1345 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1346 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Torchic_8

NewBirchsLab_EventScript_Torchic_10:
# 1349 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1350 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_1
# 1351 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1352 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1353 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1354 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Torchic_8


NewBirchsLab_EventScript_Chimchar::
# 1385 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 1386 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_0, MSGBOX_YESNO
# 1387 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chimchar_1
# 1431 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1432 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chimchar_1:
# 1388 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Chimchar_5
# 1392 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CHIMCHAR, 5
NewBirchsLab_EventScript_Chimchar_4:
# 1394 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chimchar_9
# 1402 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chimchar_10
# 1411 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1412 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chimchar_8:
# 1415 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1416 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1418 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1419 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1420 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1421 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1422 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1423 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1424 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1425 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1426 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1427 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1428 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Chimchar_5:
# 1389 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_CHIMCHAR, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Chimchar_4

NewBirchsLab_EventScript_Chimchar_9:
# 1395 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1396 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_1
# 1397 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1398 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1399 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1400 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chimchar_8

NewBirchsLab_EventScript_Chimchar_10:
# 1403 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1404 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_1
# 1405 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1406 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1407 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1408 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chimchar_8


NewBirchsLab_EventScript_Tepig::
# 1439 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 1440 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_0, MSGBOX_YESNO
# 1441 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Tepig_1
# 1485 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1486 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Tepig_1:
# 1442 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Tepig_5
# 1446 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TEPIG, 5
NewBirchsLab_EventScript_Tepig_4:
# 1448 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Tepig_9
# 1456 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Tepig_10
# 1465 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1466 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Tepig_8:
# 1469 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1470 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1472 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1473 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1474 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1475 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1476 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1477 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1478 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1479 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1480 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1481 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1482 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Tepig_5:
# 1443 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_TEPIG, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Tepig_4

NewBirchsLab_EventScript_Tepig_9:
# 1449 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1450 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_1
# 1451 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1452 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1453 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1454 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Tepig_8

NewBirchsLab_EventScript_Tepig_10:
# 1457 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1458 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_1
# 1459 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1460 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1461 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1462 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Tepig_8


NewBirchsLab_EventScript_Fennekin::
# 1493 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 1494 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_0, MSGBOX_YESNO
# 1495 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Fennekin_1
# 1539 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1540 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Fennekin_1:
# 1496 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Fennekin_5
# 1500 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_FENNEKIN, 5
NewBirchsLab_EventScript_Fennekin_4:
# 1502 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Fennekin_9
# 1510 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Fennekin_10
# 1519 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1520 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Fennekin_8:
# 1523 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1524 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1526 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1527 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1528 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1529 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1530 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1531 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1532 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1533 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1534 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1535 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1536 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Fennekin_5:
# 1497 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_FENNEKIN, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Fennekin_4

NewBirchsLab_EventScript_Fennekin_9:
# 1503 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1504 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_1
# 1505 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1506 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1507 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1508 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Fennekin_8

NewBirchsLab_EventScript_Fennekin_10:
# 1511 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1512 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_1
# 1513 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1514 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1515 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1516 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Fennekin_8


NewBirchsLab_EventScript_Litten::
# 1547 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 1548 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_0, MSGBOX_YESNO
# 1549 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Litten_1
# 1593 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1594 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Litten_1:
# 1550 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Litten_5
# 1554 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_LITTEN, 5
NewBirchsLab_EventScript_Litten_4:
# 1556 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Litten_9
# 1564 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Litten_10
# 1573 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1574 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Litten_8:
# 1577 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1578 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1580 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1581 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1582 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1583 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1584 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1585 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1586 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1587 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1588 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1589 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1590 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Litten_5:
# 1551 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_LITTEN, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Litten_4

NewBirchsLab_EventScript_Litten_9:
# 1557 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1558 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_1
# 1559 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1560 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1561 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1562 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Litten_8

NewBirchsLab_EventScript_Litten_10:
# 1565 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1566 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_1
# 1567 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1568 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1569 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1570 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Litten_8


NewBirchsLab_EventScript_Scorbunny::
# 1601 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 1602 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_0, MSGBOX_YESNO
# 1603 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_1
# 1647 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1648 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Scorbunny_1:
# 1604 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Scorbunny_5
# 1608 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SCORBUNNY, 5
NewBirchsLab_EventScript_Scorbunny_4:
# 1610 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_9
# 1618 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_10
# 1627 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1628 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Scorbunny_8:
# 1631 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1632 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1634 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1635 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1636 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1637 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1638 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1639 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1640 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1641 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1642 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1643 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1644 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Scorbunny_5:
# 1605 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_SCORBUNNY, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Scorbunny_4

NewBirchsLab_EventScript_Scorbunny_9:
# 1611 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1612 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_1
# 1613 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1614 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1615 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1616 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Scorbunny_8

NewBirchsLab_EventScript_Scorbunny_10:
# 1619 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1620 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_1
# 1621 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1622 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1623 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1624 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Scorbunny_8


NewBirchsLab_EventScript_Fuecoco::
# 1655 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 1656 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_0, MSGBOX_YESNO
# 1657 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_1
# 1701 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1702 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Fuecoco_1:
# 1658 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_EventScript_Fuecoco_5
# 1662 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_FUECOCO, 5
NewBirchsLab_EventScript_Fuecoco_4:
# 1664 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_9
# 1672 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_10
# 1681 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1682 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Fuecoco_8:
# 1685 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1686 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1688 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1689 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1690 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1691 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1692 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1693 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1694 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1695 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1696 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1697 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1698 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Fuecoco_5:
# 1659 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom SPECIES_FUECOCO, 5, isShiny = TRUE
	goto NewBirchsLab_EventScript_Fuecoco_4

NewBirchsLab_EventScript_Fuecoco_9:
# 1665 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1666 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_1
# 1667 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1668 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1669 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1670 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Fuecoco_8

NewBirchsLab_EventScript_Fuecoco_10:
# 1673 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1674 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_2
# 1675 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 1676 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1677 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 1678 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Fuecoco_8


NewBirchsLab_EventScript_WelcomePlayerMale::
# 1708 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_WelcomePlayerMale
	return


NewBirchsLab_EventScript_WelcomePlayerFemale::
# 1713 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_WelcomePlayerFemale
	return


NewBirchsLab_EventScript_GoodbyePlayerMale::
# 1718 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
	return


NewBirchsLab_EventScript_GoodbyePlayerFemale::
# 1723 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
	return


NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerMale::
# 1728 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTreeckoPlayerMale
# 1729 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
# 1730 "data/maps/NewBirchsLab/scripts.pory"
	callnative UpdateFollowingPokemon
	return


NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerFemale::
# 1735 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTreeckoPlayerFemale
# 1736 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
# 1737 "data/maps/NewBirchsLab/scripts.pory"
	callnative UpdateFollowingPokemon
	return


NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerMale::
# 1742 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterMudkipPlayerMale
# 1743 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
# 1744 "data/maps/NewBirchsLab/scripts.pory"
	callnative UpdateFollowingPokemon
	return


NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerFemale::
# 1749 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterMudkipPlayerFemale
# 1750 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
# 1751 "data/maps/NewBirchsLab/scripts.pory"
	callnative UpdateFollowingPokemon
	return


NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerMale::
# 1756 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTorchicPlayerMale
# 1757 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
# 1758 "data/maps/NewBirchsLab/scripts.pory"
	callnative UpdateFollowingPokemon
	return


NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerFemale::
# 1763 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTorchicPlayerFemale
# 1764 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
# 1765 "data/maps/NewBirchsLab/scripts.pory"
	callnative UpdateFollowingPokemon
	return


NicknamePartyMon::
# 1775 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1776 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1777 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 1778 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1779 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 1786 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1787 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1788 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 1791 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 1789 "data/maps/NewBirchsLab/scripts.pory"
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
# 67 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 1.$"

NewBirchsLab_EventScript_SayGenShowing_Text_1:
# 69 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 2.$"

NewBirchsLab_EventScript_SayGenShowing_Text_2:
# 71 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 3.$"

NewBirchsLab_EventScript_SayGenShowing_Text_3:
# 73 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 4.$"

NewBirchsLab_EventScript_SayGenShowing_Text_4:
# 75 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 5.$"

NewBirchsLab_EventScript_SayGenShowing_Text_5:
# 77 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 6.$"

NewBirchsLab_EventScript_SayGenShowing_Text_6:
# 79 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 7.$"

NewBirchsLab_EventScript_SayGenShowing_Text_7:
# 81 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 8.$"

NewBirchsLab_EventScript_SayGenShowing_Text_8:
# 83 "data/maps/NewBirchsLab/scripts.pory"
	.string "Showing starters for Gen 9.$"

NewBirchsLab_EventScript_SayGenShowing_Text_9:
# 85 "data/maps/NewBirchsLab/scripts.pory"
	.string "Now showing starters.$"

NewBirchsLab_EventScript_PokeballOne_Text_0:
# 98 "data/maps/NewBirchsLab/scripts.pory"
	.string "Ask Professor Birch about this!$"

NewBirchsLab_EventScript_PokeballOne_Text_1:
# 137 "data/maps/NewBirchsLab/scripts.pory"
	.string "Better not get greedy!$"

NewBirchsLab_EventScript_Squirtle_Text_0:
# 251 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewBirchsLab_EventScript_Squirtle_Text_1:
# 262 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Squirtle!$"

NewBirchsLab_EventScript_Squirtle_Text_2:
# 278 "data/maps/NewBirchsLab/scripts.pory"
	.string "No More Room$"

NewBirchsLab_EventScript_Totodile_Text_0:
# 306 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewBirchsLab_EventScript_Totodile_Text_1:
# 316 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Totodile!$"

NewBirchsLab_EventScript_Mudkip_Text_0:
# 360 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

NewBirchsLab_EventScript_Mudkip_Text_1:
# 370 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Mudkip!$"

NewBirchsLab_EventScript_Piplup_Text_0:
# 414 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

NewBirchsLab_EventScript_Piplup_Text_1:
# 424 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Piplup!$"

NewBirchsLab_EventScript_Oshawott_Text_0:
# 468 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

NewBirchsLab_EventScript_Oshawott_Text_1:
# 478 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Oshawott!$"

NewBirchsLab_EventScript_Froakie_Text_0:
# 522 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Froakie?$"

NewBirchsLab_EventScript_Froakie_Text_1:
# 532 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Froakie!$"

NewBirchsLab_EventScript_Popplio_Text_0:
# 576 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

NewBirchsLab_EventScript_Popplio_Text_1:
# 586 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Popplio!$"

NewBirchsLab_EventScript_Sobble_Text_0:
# 630 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Sobble?$"

NewBirchsLab_EventScript_Sobble_Text_1:
# 640 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Sobble!$"

NewBirchsLab_EventScript_Quaxly_Text_0:
# 684 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Quaxly?$"

NewBirchsLab_EventScript_Quaxly_Text_1:
# 694 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Quaxly!$"

NewBirchsLab_EventScript_Bulbasaur_Text_0:
# 738 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewBirchsLab_EventScript_Bulbasaur_Text_1:
# 748 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Bulbasaur!$"

NewBirchsLab_EventScript_Chikorita_Text_0:
# 792 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewBirchsLab_EventScript_Chikorita_Text_1:
# 802 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Chikorita!$"

NewBirchsLab_EventScript_Treecko_Text_0:
# 846 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

NewBirchsLab_EventScript_Treecko_Text_1:
# 856 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Treecko!$"

NewBirchsLab_EventScript_Turtwig_Text_0:
# 900 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Turtwig?$"

NewBirchsLab_EventScript_Turtwig_Text_1:
# 910 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Turtwig!$"

NewBirchsLab_EventScript_Snivy_Text_0:
# 954 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Snivy?$"

NewBirchsLab_EventScript_Snivy_Text_1:
# 964 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Snivy!$"

NewBirchsLab_EventScript_Chespin_Text_0:
# 1008 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chespin?$"

NewBirchsLab_EventScript_Chespin_Text_1:
# 1018 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Chespin!$"

NewBirchsLab_EventScript_Rowlet_Text_0:
# 1062 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Rowlet?$"

NewBirchsLab_EventScript_Rowlet_Text_1:
# 1072 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Rowlet!$"

NewBirchsLab_EventScript_Grookey_Text_0:
# 1116 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Grookey?$"

NewBirchsLab_EventScript_Grookey_Text_1:
# 1126 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Grookey!$"

NewBirchsLab_EventScript_Sprigatito_Text_0:
# 1170 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

NewBirchsLab_EventScript_Sprigatito_Text_1:
# 1180 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Sprigatito!$"

NewBirchsLab_EventScript_Charmander_Text_0:
# 1224 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewBirchsLab_EventScript_Charmander_Text_1:
# 1234 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Charmander!$"

NewBirchsLab_EventScript_Cyndaquil_Text_0:
# 1278 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewBirchsLab_EventScript_Cyndaquil_Text_1:
# 1288 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Cyndaquil!$"

NewBirchsLab_EventScript_Torchic_Text_0:
# 1332 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

NewBirchsLab_EventScript_Torchic_Text_1:
# 1342 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Torchic!$"

NewBirchsLab_EventScript_Chimchar_Text_0:
# 1386 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chimchar?$"

NewBirchsLab_EventScript_Chimchar_Text_1:
# 1396 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Chimchar!$"

NewBirchsLab_EventScript_Tepig_Text_0:
# 1440 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Tepig?$"

NewBirchsLab_EventScript_Tepig_Text_1:
# 1450 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Tepig!$"

NewBirchsLab_EventScript_Fennekin_Text_0:
# 1494 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Fennekin?$"

NewBirchsLab_EventScript_Fennekin_Text_1:
# 1504 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Fennekin!$"

NewBirchsLab_EventScript_Litten_Text_0:
# 1548 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Litten?$"

NewBirchsLab_EventScript_Litten_Text_1:
# 1558 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Litten!$"

NewBirchsLab_EventScript_Scorbunny_Text_0:
# 1602 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

NewBirchsLab_EventScript_Scorbunny_Text_1:
# 1612 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Scorbunny!$"

NewBirchsLab_EventScript_Fuecoco_Text_0:
# 1656 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

NewBirchsLab_EventScript_Fuecoco_Text_1:
# 1666 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} received the Fuecoco!$"

NewBirchsLab_EventScript_Fuecoco_Text_2:
# 1674 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER} {PLAYER} received the the Fuecoco!$"

NicknamePartyMon_Text_0:
# 1775 "data/maps/NewBirchsLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 1791 "data/maps/NewBirchsLab/scripts.pory"
	.string "Transferred to PC.$"

NewBirchsLab_NotChosen::
# 1794 "data/maps/NewBirchsLab/scripts.pory"
	.string "You did not choose this Pokemon.$"

NewBirchsLab_NotYet::
# 1798 "data/maps/NewBirchsLab/scripts.pory"
	.string "Better not touch these yet!\p"
	.string "Maybe you should talk to {RIVAL}.$"

NewBirchsLab_WelcomePlayerMale::
# 1803 "data/maps/NewBirchsLab/scripts.pory"
	.string "Hello there! I'm Prof. Birch, and you\n"
	.string "must be {PLAYER}. You just missed\l"
	.string "{RIVAL}, she stopped by and grabbed\l"
	.string "one of my Starter Pokémon and then\l"
	.string "rushed out of here.\p"
	.string "I told her to be on the lookout for a\n"
	.string "trainer named {PLAYER}, who just moved\l"
	.string "into the house next door!\p"
	.string "I hope the two of you can be friends\n"
	.string "who can start a new Pokémon journey\l"
	.string "together.\p"
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
# 1827 "data/maps/NewBirchsLab/scripts.pory"
	.string "Hello there! I'm Prof. Birch, and you\n"
	.string "must be {PLAYER}. You just missed\l"
	.string "{RIVAL}, he stopped by and grabbed\l"
	.string "one of my Starter Pokémon and then\l"
	.string "rushed out of here.\p"
	.string "I told him to be on the lookout for a\n"
	.string "trainer named {PLAYER}, who just moved\l"
	.string "into the house next door!\p"
	.string "I hope the two of you can be friends\n"
	.string "who can start a new Pokémon journey\l"
	.string "together.\p"
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
# 1851 "data/maps/NewBirchsLab/scripts.pory"
	.string "{RIVAL} yelled she was heading to\n"
	.string "Route 103 as she ran out the door,\l"
	.string "perhaps you should look for her there.$"

NewBirchsLab_Route103PlayerFemale::
# 1858 "data/maps/NewBirchsLab/scripts.pory"
	.string "{RIVAL} yelled he was heading to\n"
	.string "Route 103 as he ran out the door,\l"
	.string "perhaps you should look for him there.$"

NewBirchsLab_RivalStarterTreeckoPlayerMale::
# 1865 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Treecko as\l"
	.string "her Starter!$"

NewBirchsLab_RivalStarterTreeckoPlayerFemale::
# 1872 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Treecko as\l"
	.string "his Starter!$"

NewBirchsLab_RivalStarterMudkipPlayerMale::
# 1879 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Mudkip as\l"
	.string "her Starter!$"

NewBirchsLab_RivalStarterMudkipPlayerFemale::
# 1886 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Mudkip as\l"
	.string "his Starter!$"

NewBirchsLab_RivalStarterTorchicPlayerMale::
# 1893 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Torchic as\l"
	.string "her Starter!$"

NewBirchsLab_RivalStarterTorchicPlayerFemale::
# 1900 "data/maps/NewBirchsLab/scripts.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Torchic as\l"
	.string "his Starter!$"

NewBirchsLab_ChangeStarters::
# 1907 "data/maps/NewBirchsLab/scripts.pory"
	.string "Which Generation of Starters would you\n"
	.string "like to see? You can change\l"
	.string "Generations as many times as you want.$"
