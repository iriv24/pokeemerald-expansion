NewBirchsLab_MapScripts::
# 2 "data/maps/NewBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewBirchsLab_EventScript_BallDefault
	.byte 0


NewBirchsLab_EventScript_BallDefault::
# 6 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
	return


NewBirchsLab_EventScript_Birch::
# 10 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 11 "data/maps/NewBirchsLab/scripts.pory"
	faceplayer
# 12 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_Birch_4
NewBirchsLab_EventScript_Birch_3:
# 28 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Birch_Text_2
NewBirchsLab_EventScript_Birch_1:
# 30 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 31 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_Birch_2:
# 13 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Birch_Text_0, MSGBOX_YESNO
# 14 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Birch_9
# 24 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Birch_Text_1
	goto NewBirchsLab_EventScript_Birch_1

NewBirchsLab_EventScript_Birch_4:
# 12 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_Birch_6
	goto NewBirchsLab_EventScript_Birch_3

NewBirchsLab_EventScript_Birch_6:
# 12 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_Birch_2
	goto NewBirchsLab_EventScript_Birch_3

NewBirchsLab_EventScript_Birch_9:
# 15 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 8
	goto_if_ne NewBirchsLab_EventScript_Birch_13
# 19 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
NewBirchsLab_EventScript_Birch_12:
# 21 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Birch_Text_1
	goto NewBirchsLab_EventScript_Birch_1

NewBirchsLab_EventScript_Birch_13:
# 16 "data/maps/NewBirchsLab/scripts.pory"
	addvar VAR_UNUSED_0x40F7, 1
	goto NewBirchsLab_EventScript_Birch_12


NewBirchsLab_EventScript_PokeballOne::
# 36 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 37 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballOne_2
# 40 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_PokeballOne_5
NewBirchsLab_EventScript_PokeballOne_4:
# 70 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
NewBirchsLab_EventScript_PokeballOne_1:
# 72 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 73 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballOne_2:
# 38 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_3:
# 41 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_11
# 44 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_12
# 47 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_13
# 50 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_14
# 53 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_15
# 56 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_16
# 59 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_17
# 62 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_18
# 65 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_19
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_5:
# 40 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_PokeballOne_7
	goto NewBirchsLab_EventScript_PokeballOne_4

NewBirchsLab_EventScript_PokeballOne_7:
# 40 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_PokeballOne_3
	goto NewBirchsLab_EventScript_PokeballOne_4

NewBirchsLab_EventScript_PokeballOne_11:
# 42 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Squirtle
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_12:
# 45 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Totodile
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_13:
# 48 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Mudkip
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_14:
# 51 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Piplup
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_15:
# 54 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Oshawott
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_16:
# 57 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Froakie
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_17:
# 60 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Popplio
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_18:
# 63 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Sobble
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_19:
# 66 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Quaxly
	goto NewBirchsLab_EventScript_PokeballOne_1


NewBirchsLab_EventScript_PokeballTwo::
# 78 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 79 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballTwo_2
# 82 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_PokeballTwo_5
NewBirchsLab_EventScript_PokeballTwo_4:
# 112 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
NewBirchsLab_EventScript_PokeballTwo_1:
# 114 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 115 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballTwo_2:
# 80 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_3:
# 83 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_11
# 86 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_12
# 89 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_13
# 92 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_14
# 95 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_15
# 98 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_16
# 101 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_17
# 104 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_18
# 107 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_19
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_5:
# 82 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_PokeballTwo_7
	goto NewBirchsLab_EventScript_PokeballTwo_4

NewBirchsLab_EventScript_PokeballTwo_7:
# 82 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_PokeballTwo_3
	goto NewBirchsLab_EventScript_PokeballTwo_4

NewBirchsLab_EventScript_PokeballTwo_11:
# 84 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Bulbasaur
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_12:
# 87 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chikorita
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_13:
# 90 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Treecko
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_14:
# 93 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Turtwig
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_15:
# 96 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Snivy
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_16:
# 99 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chespin
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_17:
# 102 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Rowlet
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_18:
# 105 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Grookey
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_19:
# 108 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Sprigatito
	goto NewBirchsLab_EventScript_PokeballTwo_1


NewBirchsLab_EventScript_PokeballThree::
# 120 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 121 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballThree_2
# 124 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_PokeballThree_5
NewBirchsLab_EventScript_PokeballThree_4:
# 154 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
NewBirchsLab_EventScript_PokeballThree_1:
# 156 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 157 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballThree_2:
# 122 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_3:
# 125 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_11
# 128 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_12
# 131 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_13
# 134 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_14
# 137 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_15
# 140 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_16
# 143 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_17
# 146 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_18
# 149 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_19
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_5:
# 124 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_PokeballThree_7
	goto NewBirchsLab_EventScript_PokeballThree_4

NewBirchsLab_EventScript_PokeballThree_7:
# 124 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_PokeballThree_3
	goto NewBirchsLab_EventScript_PokeballThree_4

NewBirchsLab_EventScript_PokeballThree_11:
# 126 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Charmander
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_12:
# 129 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Cyndaquil
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_13:
# 132 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Torchic
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_14:
# 135 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chimchar
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_15:
# 138 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Tepig
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_16:
# 141 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Fennekin
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_17:
# 144 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Litten
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_18:
# 147 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Scorbunny
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_19:
# 150 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Fuecoco
	goto NewBirchsLab_EventScript_PokeballThree_1


NewBirchsLab_EventScript_Squirtle::
# 163 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 164 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 165 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Squirtle_1
# 202 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 203 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Squirtle_1:
# 166 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 167 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Squirtle_5
# 174 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Squirtle_6
# 182 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 183 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Squirtle_4:
# 186 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 187 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 189 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 190 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 191 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 192 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 193 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 194 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 195 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 196 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 197 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 198 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 199 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Squirtle_5:
# 168 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 169 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_1
# 170 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 171 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 172 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Squirtle_4

NewBirchsLab_EventScript_Squirtle_6:
# 175 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 176 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_1
# 177 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 178 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 179 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Squirtle_4


NewBirchsLab_EventScript_Totodile::
# 210 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 211 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 212 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Totodile_1
# 249 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 250 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Totodile_1:
# 213 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 214 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Totodile_5
# 221 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Totodile_6
# 229 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 230 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Totodile_4:
# 233 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 234 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 236 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 237 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 238 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 239 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 240 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 241 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 242 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 243 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 244 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 245 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 246 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Totodile_5:
# 215 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 216 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_1
# 217 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 218 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 219 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Totodile_4

NewBirchsLab_EventScript_Totodile_6:
# 222 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 223 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_1
# 224 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 225 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 226 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Totodile_4


NewBirchsLab_EventScript_Mudkip::
# 257 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 258 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 259 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Mudkip_1
# 296 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 297 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Mudkip_1:
# 260 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 261 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Mudkip_5
# 268 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Mudkip_6
# 276 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 277 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Mudkip_4:
# 280 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 281 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 283 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 284 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 285 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 286 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 287 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 288 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 289 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 290 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 291 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 292 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 293 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Mudkip_5:
# 262 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 263 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_1
# 264 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 265 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 266 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Mudkip_4

NewBirchsLab_EventScript_Mudkip_6:
# 269 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 270 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_1
# 271 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 272 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 273 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Mudkip_4


NewBirchsLab_EventScript_Piplup::
# 304 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 305 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_0, MSGBOX_YESNO
# 306 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Piplup_1
# 343 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 344 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Piplup_1:
# 307 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 308 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Piplup_5
# 315 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Piplup_6
# 323 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 324 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Piplup_4:
# 327 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 328 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 330 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 331 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 332 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 333 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 334 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 335 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 336 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 337 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 338 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 339 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 340 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Piplup_5:
# 309 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 310 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_1
# 311 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 312 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 313 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Piplup_4

NewBirchsLab_EventScript_Piplup_6:
# 316 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 317 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_1
# 318 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 319 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 320 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Piplup_4


NewBirchsLab_EventScript_Oshawott::
# 351 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 352 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_0, MSGBOX_YESNO
# 353 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Oshawott_1
# 390 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 391 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Oshawott_1:
# 354 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 355 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Oshawott_5
# 362 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Oshawott_6
# 370 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 371 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Oshawott_4:
# 374 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 375 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 377 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 378 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 379 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 380 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 381 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 382 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 383 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 384 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 385 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 386 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 387 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Oshawott_5:
# 356 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 357 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_1
# 358 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 359 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 360 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Oshawott_4

NewBirchsLab_EventScript_Oshawott_6:
# 363 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 364 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_1
# 365 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 366 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 367 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Oshawott_4


NewBirchsLab_EventScript_Froakie::
# 398 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 399 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_0, MSGBOX_YESNO
# 400 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Froakie_1
# 437 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 438 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Froakie_1:
# 401 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 402 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Froakie_5
# 409 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Froakie_6
# 417 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 418 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Froakie_4:
# 421 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 422 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 424 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 425 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 426 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 427 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 428 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 429 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 430 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 431 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 432 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 433 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 434 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Froakie_5:
# 403 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 404 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_1
# 405 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 406 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 407 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Froakie_4

NewBirchsLab_EventScript_Froakie_6:
# 410 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 411 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_1
# 412 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 413 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 414 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Froakie_4


NewBirchsLab_EventScript_Popplio::
# 445 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 446 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_0, MSGBOX_YESNO
# 447 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Popplio_1
# 484 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 485 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Popplio_1:
# 448 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 449 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Popplio_5
# 456 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Popplio_6
# 464 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 465 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Popplio_4:
# 468 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 469 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 471 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 472 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 473 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 474 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 475 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 476 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 477 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 478 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 479 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 480 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 481 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Popplio_5:
# 450 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 451 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_1
# 452 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 453 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 454 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Popplio_4

NewBirchsLab_EventScript_Popplio_6:
# 457 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 458 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_1
# 459 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 460 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 461 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Popplio_4


NewBirchsLab_EventScript_Sobble::
# 492 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
# 493 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_0, MSGBOX_YESNO
# 494 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Sobble_1
# 531 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 532 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Sobble_1:
# 495 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SOBBLE, 5
# 496 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Sobble_5
# 503 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Sobble_6
# 511 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 512 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Sobble_4:
# 515 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 516 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 518 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 519 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 520 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 521 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 522 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 523 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 524 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 525 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 526 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 527 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 528 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Sobble_5:
# 497 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 498 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_1
# 499 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 500 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 501 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Sobble_4

NewBirchsLab_EventScript_Sobble_6:
# 504 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 505 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_1
# 506 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 507 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 508 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Sobble_4


NewBirchsLab_EventScript_Quaxly::
# 539 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 540 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Quaxly_Text_0, MSGBOX_YESNO
# 541 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Quaxly_1
# 578 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 579 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Quaxly_1:
# 542 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_QUAXLY, 5
# 543 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Quaxly_5
# 550 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Quaxly_6
# 558 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 559 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Quaxly_4:
# 562 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 563 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 565 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 566 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 567 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 568 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 569 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 570 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 571 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 572 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 573 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 574 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 575 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Quaxly_5:
# 544 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 545 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Quaxly_Text_1
# 546 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 547 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 548 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Quaxly_4

NewBirchsLab_EventScript_Quaxly_6:
# 551 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 552 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_1
# 553 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 554 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 555 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Quaxly_4


NewBirchsLab_EventScript_Bulbasaur::
# 586 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 587 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 588 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_1
# 625 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 626 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Bulbasaur_1:
# 589 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 590 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_5
# 597 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_6
# 605 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 606 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Bulbasaur_4:
# 609 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 610 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
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

NewBirchsLab_EventScript_Bulbasaur_5:
# 591 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 592 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_1
# 593 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 594 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 595 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Bulbasaur_4

NewBirchsLab_EventScript_Bulbasaur_6:
# 598 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 599 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_1
# 600 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 601 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 602 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Bulbasaur_4


NewBirchsLab_EventScript_Chikorita::
# 633 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 634 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 635 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chikorita_1
# 672 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 673 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chikorita_1:
# 636 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 637 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chikorita_5
# 644 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chikorita_6
# 652 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 653 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chikorita_4:
# 656 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 657 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 659 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 660 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 661 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 662 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 663 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 664 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 665 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 666 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 667 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 668 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 669 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Chikorita_5:
# 638 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 639 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_1
# 640 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 641 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 642 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chikorita_4

NewBirchsLab_EventScript_Chikorita_6:
# 645 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 646 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_1
# 647 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 648 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 649 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chikorita_4


NewBirchsLab_EventScript_Treecko::
# 680 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 681 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 682 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Treecko_1
# 719 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 720 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Treecko_1:
# 683 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 684 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Treecko_5
# 691 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Treecko_6
# 699 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 700 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Treecko_4:
# 703 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 704 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 706 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 707 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 708 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 709 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 710 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 711 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 712 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 713 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 714 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 715 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 716 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Treecko_5:
# 685 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 686 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_1
# 687 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 688 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 689 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Treecko_4

NewBirchsLab_EventScript_Treecko_6:
# 692 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 693 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_1
# 694 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 695 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 696 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Treecko_4


NewBirchsLab_EventScript_Turtwig::
# 727 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 728 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_0, MSGBOX_YESNO
# 729 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Turtwig_1
# 766 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 767 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Turtwig_1:
# 730 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 731 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Turtwig_5
# 738 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Turtwig_6
# 746 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 747 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Turtwig_4:
# 750 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 751 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 753 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 754 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 755 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 756 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 757 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 758 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 759 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 760 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 761 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 762 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 763 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Turtwig_5:
# 732 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 733 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_1
# 734 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 735 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 736 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Turtwig_4

NewBirchsLab_EventScript_Turtwig_6:
# 739 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 740 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_1
# 741 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 742 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 743 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Turtwig_4


NewBirchsLab_EventScript_Snivy::
# 774 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 775 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 776 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Snivy_1
# 813 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 814 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Snivy_1:
# 777 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SNIVY, 5
# 778 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Snivy_5
# 785 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Snivy_6
# 793 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 794 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Snivy_4:
# 797 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 798 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 800 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 801 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 802 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 803 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 804 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 805 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 806 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 807 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 808 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 809 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 810 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Snivy_5:
# 779 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 780 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_1
# 781 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 782 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 783 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Snivy_4

NewBirchsLab_EventScript_Snivy_6:
# 786 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 787 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_1
# 788 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 789 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 790 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Snivy_4


NewBirchsLab_EventScript_Chespin::
# 821 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 822 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_0, MSGBOX_YESNO
# 823 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chespin_1
# 860 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 861 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chespin_1:
# 824 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 825 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chespin_5
# 832 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chespin_6
# 840 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 841 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chespin_4:
# 844 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 845 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 847 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 848 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 849 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 850 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 851 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 852 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 853 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 854 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 855 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 856 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 857 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Chespin_5:
# 826 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 827 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_1
# 828 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 829 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 830 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chespin_4

NewBirchsLab_EventScript_Chespin_6:
# 833 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 834 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_1
# 835 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 836 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 837 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chespin_4


NewBirchsLab_EventScript_Rowlet::
# 868 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 869 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_0, MSGBOX_YESNO
# 870 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Rowlet_1
# 907 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 908 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Rowlet_1:
# 871 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 872 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Rowlet_5
# 879 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Rowlet_6
# 887 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 888 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Rowlet_4:
# 891 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 892 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 894 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 895 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 896 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 897 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 898 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 899 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 900 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 901 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 902 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 903 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 904 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Rowlet_5:
# 873 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 874 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_1
# 875 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 876 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 877 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Rowlet_4

NewBirchsLab_EventScript_Rowlet_6:
# 880 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 881 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_1
# 882 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 883 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 884 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Rowlet_4


NewBirchsLab_EventScript_Grookey::
# 915 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 916 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_0, MSGBOX_YESNO
# 917 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Grookey_1
# 954 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 955 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Grookey_1:
# 918 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 919 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Grookey_5
# 926 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Grookey_6
# 934 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 935 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Grookey_4:
# 938 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 939 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 941 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 942 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 943 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 944 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 945 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 946 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 947 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 948 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 949 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 950 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 951 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Grookey_5:
# 920 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 921 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_1
# 922 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 923 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 924 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Grookey_4

NewBirchsLab_EventScript_Grookey_6:
# 927 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 928 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_1
# 929 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 930 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 931 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Grookey_4


NewBirchsLab_EventScript_Sprigatito::
# 962 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 963 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_0, MSGBOX_YESNO
# 964 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_1
# 1001 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1002 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Sprigatito_1:
# 965 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
# 966 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_5
# 973 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_6
# 981 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 982 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Sprigatito_4:
# 985 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 986 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 988 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 989 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 990 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 991 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 992 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 993 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 994 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 995 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 996 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 997 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 998 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Sprigatito_5:
# 967 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 968 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_1
# 969 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 970 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 971 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Sprigatito_4

NewBirchsLab_EventScript_Sprigatito_6:
# 974 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 975 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_1
# 976 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 977 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 978 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Sprigatito_4


NewBirchsLab_EventScript_Charmander::
# 1009 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 1010 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 1011 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Charmander_1
# 1048 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1049 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Charmander_1:
# 1012 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 1013 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Charmander_5
# 1020 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Charmander_6
# 1028 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1029 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Charmander_4:
# 1032 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1033 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1035 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1036 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1037 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1038 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1039 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1040 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1041 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1042 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1043 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1044 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1045 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Charmander_5:
# 1014 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1015 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_1
# 1016 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1017 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1018 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Charmander_4

NewBirchsLab_EventScript_Charmander_6:
# 1021 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1022 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_1
# 1023 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1024 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1025 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Charmander_4


NewBirchsLab_EventScript_Cyndaquil::
# 1056 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 1057 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 1058 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_1
# 1095 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1096 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Cyndaquil_1:
# 1059 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 1060 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_5
# 1067 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_6
# 1075 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1076 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Cyndaquil_4:
# 1079 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1080 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1082 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1083 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1084 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1085 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1086 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1087 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1088 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1089 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1090 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1091 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1092 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Cyndaquil_5:
# 1061 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1062 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_1
# 1063 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1064 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1065 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Cyndaquil_4

NewBirchsLab_EventScript_Cyndaquil_6:
# 1068 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1069 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_1
# 1070 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1071 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1072 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Cyndaquil_4


NewBirchsLab_EventScript_Torchic::
# 1103 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 1104 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 1105 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Torchic_1
# 1142 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1143 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Torchic_1:
# 1106 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 1107 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Torchic_5
# 1114 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Torchic_6
# 1122 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1123 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Torchic_4:
# 1126 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1127 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1129 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1130 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1131 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1132 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1133 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1134 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1135 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1136 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1137 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1138 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1139 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Torchic_5:
# 1108 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1109 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_1
# 1110 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1111 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1112 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Torchic_4

NewBirchsLab_EventScript_Torchic_6:
# 1115 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1116 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_1
# 1117 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1118 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1119 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Torchic_4


NewBirchsLab_EventScript_Chimchar::
# 1150 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 1151 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_0, MSGBOX_YESNO
# 1152 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chimchar_1
# 1189 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1190 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chimchar_1:
# 1153 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5
# 1154 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chimchar_5
# 1161 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chimchar_6
# 1169 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1170 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chimchar_4:
# 1173 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1174 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1176 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1177 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1178 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1179 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1180 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1181 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1182 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1183 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1184 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1185 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1186 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Chimchar_5:
# 1155 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1156 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_1
# 1157 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1158 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1159 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chimchar_4

NewBirchsLab_EventScript_Chimchar_6:
# 1162 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1163 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_1
# 1164 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1165 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1166 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chimchar_4


NewBirchsLab_EventScript_Tepig::
# 1197 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 1198 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_0, MSGBOX_YESNO
# 1199 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Tepig_1
# 1236 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1237 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Tepig_1:
# 1200 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 1201 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Tepig_5
# 1208 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Tepig_6
# 1216 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1217 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Tepig_4:
# 1220 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1221 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1223 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1224 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1225 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1226 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1227 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1228 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1229 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1230 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1231 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1232 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1233 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Tepig_5:
# 1202 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1203 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_1
# 1204 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1205 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1206 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Tepig_4

NewBirchsLab_EventScript_Tepig_6:
# 1209 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1210 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_1
# 1211 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1212 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1213 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Tepig_4


NewBirchsLab_EventScript_Fennekin::
# 1244 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 1245 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_0, MSGBOX_YESNO
# 1246 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Fennekin_1
# 1283 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1284 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Fennekin_1:
# 1247 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 1248 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Fennekin_5
# 1255 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Fennekin_6
# 1263 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1264 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Fennekin_4:
# 1267 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1268 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1270 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1271 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1272 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1273 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1274 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1275 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1276 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1277 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1278 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1279 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1280 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Fennekin_5:
# 1249 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1250 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_1
# 1251 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1252 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1253 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Fennekin_4

NewBirchsLab_EventScript_Fennekin_6:
# 1256 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1257 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_1
# 1258 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1259 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1260 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Fennekin_4


NewBirchsLab_EventScript_Litten::
# 1291 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 1292 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_0, MSGBOX_YESNO
# 1293 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Litten_1
# 1330 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1331 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Litten_1:
# 1294 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 1295 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Litten_5
# 1302 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Litten_6
# 1310 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1311 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Litten_4:
# 1314 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1315 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1317 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1318 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1319 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1320 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1321 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1322 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1323 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1324 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1325 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1326 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1327 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Litten_5:
# 1296 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1297 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_1
# 1298 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1299 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1300 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Litten_4

NewBirchsLab_EventScript_Litten_6:
# 1303 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1304 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_1
# 1305 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1306 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1307 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Litten_4


NewBirchsLab_EventScript_Scorbunny::
# 1338 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 1339 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_0, MSGBOX_YESNO
# 1340 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_1
# 1377 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1378 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Scorbunny_1:
# 1341 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
# 1342 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_5
# 1349 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_6
# 1357 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1358 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Scorbunny_4:
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

NewBirchsLab_EventScript_Scorbunny_5:
# 1343 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1344 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_1
# 1345 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1346 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1347 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Scorbunny_4

NewBirchsLab_EventScript_Scorbunny_6:
# 1350 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1351 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_1
# 1352 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1353 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1354 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Scorbunny_4


NewBirchsLab_EventScript_Fuecoco::
# 1385 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 1386 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_0, MSGBOX_YESNO
# 1387 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_1
# 1424 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1425 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Fuecoco_1:
# 1388 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_FUECOCO, 5
# 1389 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_5
# 1396 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_6
# 1404 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1405 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Fuecoco_4:
# 1408 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1409 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1411 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1412 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1413 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1414 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 1415 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1416 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1417 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1418 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 1419 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 1420 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 1421 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_Fuecoco_5:
# 1390 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1391 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_1
# 1392 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1393 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1394 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Fuecoco_4

NewBirchsLab_EventScript_Fuecoco_6:
# 1397 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1398 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_1
# 1399 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1400 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1401 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Fuecoco_4


NicknamePartyMon::
# 1433 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1434 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1435 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 1436 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1437 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 1444 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1445 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1446 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 1449 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 1447 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewBirchsLab_EventScript_Birch_Text_0:
# 13 "data/maps/NewBirchsLab/scripts.pory"
	.string "Hello, would you like to see more?$"

NewBirchsLab_EventScript_Birch_Text_1:
# 21 "data/maps/NewBirchsLab/scripts.pory"
	.string "Choose your Pokemon wisely$"

NewBirchsLab_EventScript_Birch_Text_2:
# 28 "data/maps/NewBirchsLab/scripts.pory"
	.string "Take care of your Pokemon$"

NewBirchsLab_EventScript_PokeballOne_Text_0:
# 70 "data/maps/NewBirchsLab/scripts.pory"
	.string "Don't Take Another$"

NewBirchsLab_EventScript_Squirtle_Text_0:
# 164 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewBirchsLab_EventScript_Squirtle_Text_1:
# 169 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Squirtle$"

NewBirchsLab_EventScript_Squirtle_Text_2:
# 183 "data/maps/NewBirchsLab/scripts.pory"
	.string "No More Room$"

NewBirchsLab_EventScript_Totodile_Text_0:
# 211 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewBirchsLab_EventScript_Totodile_Text_1:
# 216 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Totodile$"

NewBirchsLab_EventScript_Mudkip_Text_0:
# 258 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

NewBirchsLab_EventScript_Mudkip_Text_1:
# 263 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Mudkip$"

NewBirchsLab_EventScript_Piplup_Text_0:
# 305 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

NewBirchsLab_EventScript_Piplup_Text_1:
# 310 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Piplup$"

NewBirchsLab_EventScript_Oshawott_Text_0:
# 352 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

NewBirchsLab_EventScript_Oshawott_Text_1:
# 357 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Oshawott$"

NewBirchsLab_EventScript_Froakie_Text_0:
# 399 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Froakie?$"

NewBirchsLab_EventScript_Froakie_Text_1:
# 404 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Froakie$"

NewBirchsLab_EventScript_Popplio_Text_0:
# 446 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

NewBirchsLab_EventScript_Popplio_Text_1:
# 451 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Popplio$"

NewBirchsLab_EventScript_Sobble_Text_0:
# 493 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Sobble?$"

NewBirchsLab_EventScript_Sobble_Text_1:
# 498 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Sobble$"

NewBirchsLab_EventScript_Quaxly_Text_0:
# 540 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Quaxly?$"

NewBirchsLab_EventScript_Quaxly_Text_1:
# 545 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Quaxly$"

NewBirchsLab_EventScript_Bulbasaur_Text_0:
# 587 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewBirchsLab_EventScript_Bulbasaur_Text_1:
# 592 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Bulbasaur$"

NewBirchsLab_EventScript_Chikorita_Text_0:
# 634 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewBirchsLab_EventScript_Chikorita_Text_1:
# 639 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Chikorita$"

NewBirchsLab_EventScript_Treecko_Text_0:
# 681 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

NewBirchsLab_EventScript_Treecko_Text_1:
# 686 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Treecko$"

NewBirchsLab_EventScript_Turtwig_Text_0:
# 728 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Turtwig?$"

NewBirchsLab_EventScript_Turtwig_Text_1:
# 733 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Turtwig$"

NewBirchsLab_EventScript_Snivy_Text_0:
# 775 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Snivy?$"

NewBirchsLab_EventScript_Snivy_Text_1:
# 780 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Snivy$"

NewBirchsLab_EventScript_Chespin_Text_0:
# 822 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chespin?$"

NewBirchsLab_EventScript_Chespin_Text_1:
# 827 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Chespin$"

NewBirchsLab_EventScript_Rowlet_Text_0:
# 869 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Rowlet?$"

NewBirchsLab_EventScript_Rowlet_Text_1:
# 874 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Rowlet$"

NewBirchsLab_EventScript_Grookey_Text_0:
# 916 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Grookey?$"

NewBirchsLab_EventScript_Grookey_Text_1:
# 921 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Grookey$"

NewBirchsLab_EventScript_Sprigatito_Text_0:
# 963 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

NewBirchsLab_EventScript_Sprigatito_Text_1:
# 968 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Sprigatito$"

NewBirchsLab_EventScript_Charmander_Text_0:
# 1010 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewBirchsLab_EventScript_Charmander_Text_1:
# 1015 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Charmander$"

NewBirchsLab_EventScript_Cyndaquil_Text_0:
# 1057 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewBirchsLab_EventScript_Cyndaquil_Text_1:
# 1062 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Cyndaquil$"

NewBirchsLab_EventScript_Torchic_Text_0:
# 1104 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

NewBirchsLab_EventScript_Torchic_Text_1:
# 1109 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Torchic$"

NewBirchsLab_EventScript_Chimchar_Text_0:
# 1151 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chimchar?$"

NewBirchsLab_EventScript_Chimchar_Text_1:
# 1156 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Chimchar$"

NewBirchsLab_EventScript_Tepig_Text_0:
# 1198 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Tepig?$"

NewBirchsLab_EventScript_Tepig_Text_1:
# 1203 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Tepig$"

NewBirchsLab_EventScript_Fennekin_Text_0:
# 1245 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Fennekin?$"

NewBirchsLab_EventScript_Fennekin_Text_1:
# 1250 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Fennekin$"

NewBirchsLab_EventScript_Litten_Text_0:
# 1292 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Litten?$"

NewBirchsLab_EventScript_Litten_Text_1:
# 1297 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Litten$"

NewBirchsLab_EventScript_Scorbunny_Text_0:
# 1339 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

NewBirchsLab_EventScript_Scorbunny_Text_1:
# 1344 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Scorbunny$"

NewBirchsLab_EventScript_Fuecoco_Text_0:
# 1386 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

NewBirchsLab_EventScript_Fuecoco_Text_1:
# 1391 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Fuecoco$"

NicknamePartyMon_Text_0:
# 1433 "data/maps/NewBirchsLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 1449 "data/maps/NewBirchsLab/scripts.pory"
	.string "Transferred to PC$"

NewBirchsLab_NotChosen::
# 1452 "data/maps/NewBirchsLab/scripts.pory"
	.string "You did not choose the Pokemon$"

NewBirchsLab_NotYet::
# 1456 "data/maps/NewBirchsLab/scripts.pory"
	.string "Better not touch these yet!\p"
	.string "Maybe you should talk to {RIVAL}.$"
