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
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_PokeballOne_4
NewBirchsLab_EventScript_PokeballOne_3:
# 67 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
NewBirchsLab_EventScript_PokeballOne_1:
# 69 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 70 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballOne_2:
# 38 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_9
# 41 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_10
# 44 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_11
# 47 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_12
# 50 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_13
# 53 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_14
# 56 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_15
# 59 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_16
# 62 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_17
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_4:
# 37 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_PokeballOne_6
	goto NewBirchsLab_EventScript_PokeballOne_3

NewBirchsLab_EventScript_PokeballOne_6:
# 37 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_PokeballOne_2
	goto NewBirchsLab_EventScript_PokeballOne_3

NewBirchsLab_EventScript_PokeballOne_9:
# 39 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Squirtle
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_10:
# 42 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Totodile
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_11:
# 45 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Mudkip
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_12:
# 48 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Piplup
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_13:
# 51 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Oshawott
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_14:
# 54 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Froakie
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_15:
# 57 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Popplio
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_16:
# 60 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Sobble
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_17:
# 63 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Quaxly
	goto NewBirchsLab_EventScript_PokeballOne_1


NewBirchsLab_EventScript_PokeballTwo::
# 75 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 76 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_PokeballTwo_4
NewBirchsLab_EventScript_PokeballTwo_3:
# 106 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
NewBirchsLab_EventScript_PokeballTwo_1:
# 108 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 109 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballTwo_2:
# 77 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_9
# 80 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_10
# 83 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_11
# 86 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_12
# 89 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_13
# 92 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_14
# 95 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_15
# 98 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_16
# 101 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_17
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_4:
# 76 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_PokeballTwo_6
	goto NewBirchsLab_EventScript_PokeballTwo_3

NewBirchsLab_EventScript_PokeballTwo_6:
# 76 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_PokeballTwo_2
	goto NewBirchsLab_EventScript_PokeballTwo_3

NewBirchsLab_EventScript_PokeballTwo_9:
# 78 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Bulbasaur
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_10:
# 81 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chikorita
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_11:
# 84 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Treecko
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_12:
# 87 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Turtwig
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_13:
# 90 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Snivy
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_14:
# 93 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chespin
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_15:
# 96 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Rowlet
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_16:
# 99 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Grookey
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_17:
# 102 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Sprigatito
	goto NewBirchsLab_EventScript_PokeballTwo_1


NewBirchsLab_EventScript_PokeballThree::
# 114 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 115 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_PokeballThree_4
NewBirchsLab_EventScript_PokeballThree_3:
# 145 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
NewBirchsLab_EventScript_PokeballThree_1:
# 147 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 148 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballThree_2:
# 116 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_9
# 119 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_10
# 122 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_11
# 125 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 3
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_12
# 128 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 4
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_13
# 131 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 5
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_14
# 134 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 6
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_15
# 137 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 7
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_16
# 140 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_UNUSED_0x40F7, 8
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_17
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_4:
# 115 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_PokeballThree_6
	goto NewBirchsLab_EventScript_PokeballThree_3

NewBirchsLab_EventScript_PokeballThree_6:
# 115 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_PokeballThree_2
	goto NewBirchsLab_EventScript_PokeballThree_3

NewBirchsLab_EventScript_PokeballThree_9:
# 117 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Charmander
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_10:
# 120 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Cyndaquil
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_11:
# 123 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Torchic
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_12:
# 126 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Chimchar
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_13:
# 129 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Tepig
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_14:
# 132 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Fennekin
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_15:
# 135 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Litten
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_16:
# 138 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Scorbunny
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_17:
# 141 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_Fuecoco
	goto NewBirchsLab_EventScript_PokeballThree_1


NewBirchsLab_EventScript_Squirtle::
# 154 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 155 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 156 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Squirtle_1
# 181 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 182 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Squirtle_1:
# 157 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 158 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Squirtle_5
# 165 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Squirtle_6
# 173 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 174 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Squirtle_4:
# 177 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 178 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
	return

NewBirchsLab_EventScript_Squirtle_5:
# 159 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 160 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_1
# 161 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 162 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 163 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Squirtle_4

NewBirchsLab_EventScript_Squirtle_6:
# 166 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 167 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_1
# 168 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 169 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 170 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Squirtle_4


NewBirchsLab_EventScript_Totodile::
# 189 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 190 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 191 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Totodile_1
# 216 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 217 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Totodile_1:
# 192 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 193 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Totodile_5
# 200 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Totodile_6
# 208 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 209 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Totodile_4:
# 212 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 213 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
	return

NewBirchsLab_EventScript_Totodile_5:
# 194 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 195 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_1
# 196 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 197 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 198 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Totodile_4

NewBirchsLab_EventScript_Totodile_6:
# 201 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 202 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Totodile_Text_1
# 203 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 204 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 205 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Totodile_4


NewBirchsLab_EventScript_Mudkip::
# 224 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 225 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 226 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Mudkip_1
# 251 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 252 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Mudkip_1:
# 227 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 228 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Mudkip_5
# 235 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Mudkip_6
# 243 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 244 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Mudkip_4:
# 247 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 248 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
	return

NewBirchsLab_EventScript_Mudkip_5:
# 229 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 230 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_1
# 231 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 232 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 233 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Mudkip_4

NewBirchsLab_EventScript_Mudkip_6:
# 236 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 237 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Mudkip_Text_1
# 238 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 239 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 240 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Mudkip_4


NewBirchsLab_EventScript_Piplup::
# 259 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 260 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_0, MSGBOX_YESNO
# 261 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Piplup_1
# 286 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 287 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Piplup_1:
# 262 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 263 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Piplup_5
# 270 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Piplup_6
# 278 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 279 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Piplup_4:
# 282 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 283 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
	return

NewBirchsLab_EventScript_Piplup_5:
# 264 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 265 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_1
# 266 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 267 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 268 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Piplup_4

NewBirchsLab_EventScript_Piplup_6:
# 271 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 272 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Piplup_Text_1
# 273 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 274 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 275 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Piplup_4


NewBirchsLab_EventScript_Oshawott::
# 294 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 295 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_0, MSGBOX_YESNO
# 296 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Oshawott_1
# 321 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 322 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Oshawott_1:
# 297 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 298 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Oshawott_5
# 305 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Oshawott_6
# 313 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 314 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Oshawott_4:
# 317 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 318 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
	return

NewBirchsLab_EventScript_Oshawott_5:
# 299 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 300 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_1
# 301 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 302 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 303 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Oshawott_4

NewBirchsLab_EventScript_Oshawott_6:
# 306 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 307 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Oshawott_Text_1
# 308 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 309 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 310 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Oshawott_4


NewBirchsLab_EventScript_Froakie::
# 329 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 330 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_0, MSGBOX_YESNO
# 331 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Froakie_1
# 356 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 357 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Froakie_1:
# 332 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 333 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Froakie_5
# 340 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Froakie_6
# 348 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 349 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Froakie_4:
# 352 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 353 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
	return

NewBirchsLab_EventScript_Froakie_5:
# 334 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 335 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_1
# 336 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 337 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 338 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Froakie_4

NewBirchsLab_EventScript_Froakie_6:
# 341 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 342 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Froakie_Text_1
# 343 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 344 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 345 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Froakie_4


NewBirchsLab_EventScript_Popplio::
# 364 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 365 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_0, MSGBOX_YESNO
# 366 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Popplio_1
# 391 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 392 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Popplio_1:
# 367 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 368 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Popplio_5
# 375 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Popplio_6
# 383 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 384 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Popplio_4:
# 387 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 388 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
	return

NewBirchsLab_EventScript_Popplio_5:
# 369 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 370 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_1
# 371 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 372 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 373 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Popplio_4

NewBirchsLab_EventScript_Popplio_6:
# 376 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 377 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Popplio_Text_1
# 378 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 379 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 380 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Popplio_4


NewBirchsLab_EventScript_Sobble::
# 399 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
# 400 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_0, MSGBOX_YESNO
# 401 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Sobble_1
# 426 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 427 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Sobble_1:
# 402 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SOBBLE, 5
# 403 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Sobble_5
# 410 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Sobble_6
# 418 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 419 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Sobble_4:
# 422 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 423 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
	return

NewBirchsLab_EventScript_Sobble_5:
# 404 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 405 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_1
# 406 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 407 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 408 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Sobble_4

NewBirchsLab_EventScript_Sobble_6:
# 411 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 412 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_1
# 413 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 414 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 415 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Sobble_4


NewBirchsLab_EventScript_Quaxly::
# 434 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 435 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Quaxly_Text_0, MSGBOX_YESNO
# 436 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Quaxly_1
# 461 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 462 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Quaxly_1:
# 437 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_QUAXLY, 5
# 438 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Quaxly_5
# 445 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Quaxly_6
# 453 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 454 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Quaxly_4:
# 457 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 458 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
	return

NewBirchsLab_EventScript_Quaxly_5:
# 439 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 440 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Quaxly_Text_1
# 441 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 442 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 443 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Quaxly_4

NewBirchsLab_EventScript_Quaxly_6:
# 446 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 447 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sobble_Text_1
# 448 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 449 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 450 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Quaxly_4


NewBirchsLab_EventScript_Bulbasaur::
# 469 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 470 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 471 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_1
# 496 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 497 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Bulbasaur_1:
# 472 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 473 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_5
# 480 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_6
# 488 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 489 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Bulbasaur_4:
# 492 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 493 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
	return

NewBirchsLab_EventScript_Bulbasaur_5:
# 474 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 475 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_1
# 476 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 477 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 478 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Bulbasaur_4

NewBirchsLab_EventScript_Bulbasaur_6:
# 481 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 482 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_1
# 483 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 484 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 485 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Bulbasaur_4


NewBirchsLab_EventScript_Chikorita::
# 504 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 505 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 506 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chikorita_1
# 531 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 532 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chikorita_1:
# 507 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 508 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chikorita_5
# 515 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chikorita_6
# 523 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 524 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chikorita_4:
# 527 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 528 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
	return

NewBirchsLab_EventScript_Chikorita_5:
# 509 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 510 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_1
# 511 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 512 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 513 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chikorita_4

NewBirchsLab_EventScript_Chikorita_6:
# 516 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 517 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chikorita_Text_1
# 518 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 519 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 520 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chikorita_4


NewBirchsLab_EventScript_Treecko::
# 539 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 540 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 541 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Treecko_1
# 566 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 567 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Treecko_1:
# 542 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 543 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Treecko_5
# 550 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Treecko_6
# 558 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 559 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Treecko_4:
# 562 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 563 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
	return

NewBirchsLab_EventScript_Treecko_5:
# 544 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 545 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_1
# 546 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 547 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 548 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Treecko_4

NewBirchsLab_EventScript_Treecko_6:
# 551 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 552 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Treecko_Text_1
# 553 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 554 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 555 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Treecko_4


NewBirchsLab_EventScript_Turtwig::
# 574 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 575 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_0, MSGBOX_YESNO
# 576 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Turtwig_1
# 601 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 602 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Turtwig_1:
# 577 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 578 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Turtwig_5
# 585 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Turtwig_6
# 593 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 594 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Turtwig_4:
# 597 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 598 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
	return

NewBirchsLab_EventScript_Turtwig_5:
# 579 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 580 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_1
# 581 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 582 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 583 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Turtwig_4

NewBirchsLab_EventScript_Turtwig_6:
# 586 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 587 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Turtwig_Text_1
# 588 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 589 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 590 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Turtwig_4


NewBirchsLab_EventScript_Snivy::
# 609 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 610 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 611 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Snivy_1
# 636 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 637 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Snivy_1:
# 612 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SNIVY, 5
# 613 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Snivy_5
# 620 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Snivy_6
# 628 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 629 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Snivy_4:
# 632 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 633 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
	return

NewBirchsLab_EventScript_Snivy_5:
# 614 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 615 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_1
# 616 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 617 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 618 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Snivy_4

NewBirchsLab_EventScript_Snivy_6:
# 621 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 622 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Snivy_Text_1
# 623 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 624 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 625 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Snivy_4


NewBirchsLab_EventScript_Chespin::
# 644 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 645 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_0, MSGBOX_YESNO
# 646 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chespin_1
# 671 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 672 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chespin_1:
# 647 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 648 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chespin_5
# 655 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chespin_6
# 663 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 664 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chespin_4:
# 667 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 668 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
	return

NewBirchsLab_EventScript_Chespin_5:
# 649 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 650 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_1
# 651 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 652 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 653 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chespin_4

NewBirchsLab_EventScript_Chespin_6:
# 656 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 657 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chespin_Text_1
# 658 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 659 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 660 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chespin_4


NewBirchsLab_EventScript_Rowlet::
# 679 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 680 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_0, MSGBOX_YESNO
# 681 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Rowlet_1
# 706 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 707 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Rowlet_1:
# 682 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 683 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Rowlet_5
# 690 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Rowlet_6
# 698 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 699 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Rowlet_4:
# 702 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 703 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
	return

NewBirchsLab_EventScript_Rowlet_5:
# 684 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 685 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_1
# 686 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 687 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 688 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Rowlet_4

NewBirchsLab_EventScript_Rowlet_6:
# 691 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 692 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Rowlet_Text_1
# 693 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 694 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 695 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Rowlet_4


NewBirchsLab_EventScript_Grookey::
# 714 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 715 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_0, MSGBOX_YESNO
# 716 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Grookey_1
# 741 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 742 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Grookey_1:
# 717 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 718 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Grookey_5
# 725 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Grookey_6
# 733 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 734 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Grookey_4:
# 737 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 738 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
	return

NewBirchsLab_EventScript_Grookey_5:
# 719 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 720 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_1
# 721 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 722 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 723 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Grookey_4

NewBirchsLab_EventScript_Grookey_6:
# 726 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 727 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Grookey_Text_1
# 728 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 729 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 730 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Grookey_4


NewBirchsLab_EventScript_Sprigatito::
# 749 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 750 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_0, MSGBOX_YESNO
# 751 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_1
# 776 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 777 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Sprigatito_1:
# 752 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
# 753 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_5
# 760 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Sprigatito_6
# 768 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 769 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Sprigatito_4:
# 772 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 773 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
	return

NewBirchsLab_EventScript_Sprigatito_5:
# 754 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 755 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_1
# 756 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 757 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 758 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Sprigatito_4

NewBirchsLab_EventScript_Sprigatito_6:
# 761 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 762 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Sprigatito_Text_1
# 763 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 764 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 765 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Sprigatito_4


NewBirchsLab_EventScript_Charmander::
# 784 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 785 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 786 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Charmander_1
# 811 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 812 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Charmander_1:
# 787 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 788 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Charmander_5
# 795 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Charmander_6
# 803 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 804 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Charmander_4:
# 807 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 808 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
	return

NewBirchsLab_EventScript_Charmander_5:
# 789 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 790 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_1
# 791 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 792 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 793 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Charmander_4

NewBirchsLab_EventScript_Charmander_6:
# 796 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 797 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Charmander_Text_1
# 798 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 799 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 800 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Charmander_4


NewBirchsLab_EventScript_Cyndaquil::
# 819 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 820 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 821 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_1
# 846 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 847 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Cyndaquil_1:
# 822 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 823 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_5
# 830 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_6
# 838 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 839 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Cyndaquil_4:
# 842 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 843 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
	return

NewBirchsLab_EventScript_Cyndaquil_5:
# 824 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 825 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_1
# 826 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 827 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 828 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Cyndaquil_4

NewBirchsLab_EventScript_Cyndaquil_6:
# 831 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 832 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_1
# 833 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 834 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 835 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Cyndaquil_4


NewBirchsLab_EventScript_Torchic::
# 854 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 855 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 856 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Torchic_1
# 881 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 882 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Torchic_1:
# 857 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 858 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Torchic_5
# 865 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Torchic_6
# 873 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 874 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Torchic_4:
# 877 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 878 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
	return

NewBirchsLab_EventScript_Torchic_5:
# 859 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 860 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_1
# 861 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 862 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 863 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Torchic_4

NewBirchsLab_EventScript_Torchic_6:
# 866 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 867 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Torchic_Text_1
# 868 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 869 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 870 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Torchic_4


NewBirchsLab_EventScript_Chimchar::
# 889 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 890 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_0, MSGBOX_YESNO
# 891 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chimchar_1
# 916 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 917 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chimchar_1:
# 892 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5
# 893 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chimchar_5
# 900 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chimchar_6
# 908 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 909 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Chimchar_4:
# 912 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 913 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
	return

NewBirchsLab_EventScript_Chimchar_5:
# 894 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 895 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_1
# 896 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 897 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 898 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Chimchar_4

NewBirchsLab_EventScript_Chimchar_6:
# 901 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 902 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Chimchar_Text_1
# 903 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 904 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 905 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Chimchar_4


NewBirchsLab_EventScript_Tepig::
# 924 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 925 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_0, MSGBOX_YESNO
# 926 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Tepig_1
# 951 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 952 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Tepig_1:
# 927 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 928 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Tepig_5
# 935 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Tepig_6
# 943 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 944 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Tepig_4:
# 947 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 948 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
	return

NewBirchsLab_EventScript_Tepig_5:
# 929 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 930 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_1
# 931 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 932 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 933 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Tepig_4

NewBirchsLab_EventScript_Tepig_6:
# 936 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 937 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Tepig_Text_1
# 938 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 939 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 940 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Tepig_4


NewBirchsLab_EventScript_Fennekin::
# 959 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 960 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_0, MSGBOX_YESNO
# 961 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Fennekin_1
# 986 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 987 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Fennekin_1:
# 962 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 963 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Fennekin_5
# 970 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Fennekin_6
# 978 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 979 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Fennekin_4:
# 982 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 983 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
	return

NewBirchsLab_EventScript_Fennekin_5:
# 964 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 965 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_1
# 966 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 967 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 968 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Fennekin_4

NewBirchsLab_EventScript_Fennekin_6:
# 971 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 972 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fennekin_Text_1
# 973 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 974 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 975 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Fennekin_4


NewBirchsLab_EventScript_Litten::
# 994 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 995 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_0, MSGBOX_YESNO
# 996 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Litten_1
# 1021 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1022 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Litten_1:
# 997 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 998 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Litten_5
# 1005 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Litten_6
# 1013 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1014 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Litten_4:
# 1017 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1018 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
	return

NewBirchsLab_EventScript_Litten_5:
# 999 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1000 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_1
# 1001 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1002 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1003 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Litten_4

NewBirchsLab_EventScript_Litten_6:
# 1006 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1007 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Litten_Text_1
# 1008 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1009 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1010 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Litten_4


NewBirchsLab_EventScript_Scorbunny::
# 1029 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 1030 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_0, MSGBOX_YESNO
# 1031 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_1
# 1056 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1057 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Scorbunny_1:
# 1032 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
# 1033 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_5
# 1040 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Scorbunny_6
# 1048 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1049 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Scorbunny_4:
# 1052 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1053 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
	return

NewBirchsLab_EventScript_Scorbunny_5:
# 1034 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1035 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_1
# 1036 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1037 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1038 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Scorbunny_4

NewBirchsLab_EventScript_Scorbunny_6:
# 1041 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1042 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Scorbunny_Text_1
# 1043 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1044 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1045 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Scorbunny_4


NewBirchsLab_EventScript_Fuecoco::
# 1064 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 1065 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_0, MSGBOX_YESNO
# 1066 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_1
# 1091 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1092 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Fuecoco_1:
# 1067 "data/maps/NewBirchsLab/scripts.pory"
	givemon SPECIES_FUECOCO, 5
# 1068 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_5
# 1075 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Fuecoco_6
# 1083 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1084 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Squirtle_Text_2
NewBirchsLab_EventScript_Fuecoco_4:
# 1087 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1088 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
	return

NewBirchsLab_EventScript_Fuecoco_5:
# 1069 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1070 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_1
# 1071 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1072 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1073 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_Fuecoco_4

NewBirchsLab_EventScript_Fuecoco_6:
# 1076 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1077 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Fuecoco_Text_1
# 1078 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 1079 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1080 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_Fuecoco_4


NicknamePartyMon::
# 1100 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1101 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1102 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 1103 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1104 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 1111 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1112 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 1113 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 1116 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 1114 "data/maps/NewBirchsLab/scripts.pory"
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
# 67 "data/maps/NewBirchsLab/scripts.pory"
	.string "Don't Take Another$"

NewBirchsLab_EventScript_Squirtle_Text_0:
# 155 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewBirchsLab_EventScript_Squirtle_Text_1:
# 160 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Squirtle$"

NewBirchsLab_EventScript_Squirtle_Text_2:
# 174 "data/maps/NewBirchsLab/scripts.pory"
	.string "No More Room$"

NewBirchsLab_EventScript_Totodile_Text_0:
# 190 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewBirchsLab_EventScript_Totodile_Text_1:
# 195 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Totodile$"

NewBirchsLab_EventScript_Mudkip_Text_0:
# 225 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

NewBirchsLab_EventScript_Mudkip_Text_1:
# 230 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Mudkip$"

NewBirchsLab_EventScript_Piplup_Text_0:
# 260 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

NewBirchsLab_EventScript_Piplup_Text_1:
# 265 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Piplup$"

NewBirchsLab_EventScript_Oshawott_Text_0:
# 295 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

NewBirchsLab_EventScript_Oshawott_Text_1:
# 300 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Oshawott$"

NewBirchsLab_EventScript_Froakie_Text_0:
# 330 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Froakie?$"

NewBirchsLab_EventScript_Froakie_Text_1:
# 335 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Froakie$"

NewBirchsLab_EventScript_Popplio_Text_0:
# 365 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

NewBirchsLab_EventScript_Popplio_Text_1:
# 370 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Popplio$"

NewBirchsLab_EventScript_Sobble_Text_0:
# 400 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Sobble?$"

NewBirchsLab_EventScript_Sobble_Text_1:
# 405 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Sobble$"

NewBirchsLab_EventScript_Quaxly_Text_0:
# 435 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Quaxly?$"

NewBirchsLab_EventScript_Quaxly_Text_1:
# 440 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Quaxly$"

NewBirchsLab_EventScript_Bulbasaur_Text_0:
# 470 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewBirchsLab_EventScript_Bulbasaur_Text_1:
# 475 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Bulbasaur$"

NewBirchsLab_EventScript_Chikorita_Text_0:
# 505 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewBirchsLab_EventScript_Chikorita_Text_1:
# 510 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Chikorita$"

NewBirchsLab_EventScript_Treecko_Text_0:
# 540 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

NewBirchsLab_EventScript_Treecko_Text_1:
# 545 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Treecko$"

NewBirchsLab_EventScript_Turtwig_Text_0:
# 575 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Turtwig?$"

NewBirchsLab_EventScript_Turtwig_Text_1:
# 580 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Turtwig$"

NewBirchsLab_EventScript_Snivy_Text_0:
# 610 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Snivy?$"

NewBirchsLab_EventScript_Snivy_Text_1:
# 615 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Snivy$"

NewBirchsLab_EventScript_Chespin_Text_0:
# 645 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chespin?$"

NewBirchsLab_EventScript_Chespin_Text_1:
# 650 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Chespin$"

NewBirchsLab_EventScript_Rowlet_Text_0:
# 680 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Rowlet?$"

NewBirchsLab_EventScript_Rowlet_Text_1:
# 685 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Rowlet$"

NewBirchsLab_EventScript_Grookey_Text_0:
# 715 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Grookey?$"

NewBirchsLab_EventScript_Grookey_Text_1:
# 720 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Grookey$"

NewBirchsLab_EventScript_Sprigatito_Text_0:
# 750 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

NewBirchsLab_EventScript_Sprigatito_Text_1:
# 755 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Sprigatito$"

NewBirchsLab_EventScript_Charmander_Text_0:
# 785 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewBirchsLab_EventScript_Charmander_Text_1:
# 790 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Charmander$"

NewBirchsLab_EventScript_Cyndaquil_Text_0:
# 820 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewBirchsLab_EventScript_Cyndaquil_Text_1:
# 825 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Cyndaquil$"

NewBirchsLab_EventScript_Torchic_Text_0:
# 855 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

NewBirchsLab_EventScript_Torchic_Text_1:
# 860 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Torchic$"

NewBirchsLab_EventScript_Chimchar_Text_0:
# 890 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chimchar?$"

NewBirchsLab_EventScript_Chimchar_Text_1:
# 895 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Chimchar$"

NewBirchsLab_EventScript_Tepig_Text_0:
# 925 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Tepig?$"

NewBirchsLab_EventScript_Tepig_Text_1:
# 930 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Tepig$"

NewBirchsLab_EventScript_Fennekin_Text_0:
# 960 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Fennekin?$"

NewBirchsLab_EventScript_Fennekin_Text_1:
# 965 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Fennekin$"

NewBirchsLab_EventScript_Litten_Text_0:
# 995 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Litten?$"

NewBirchsLab_EventScript_Litten_Text_1:
# 1000 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Litten$"

NewBirchsLab_EventScript_Scorbunny_Text_0:
# 1030 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

NewBirchsLab_EventScript_Scorbunny_Text_1:
# 1035 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Scorbunny$"

NewBirchsLab_EventScript_Fuecoco_Text_0:
# 1065 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

NewBirchsLab_EventScript_Fuecoco_Text_1:
# 1070 "data/maps/NewBirchsLab/scripts.pory"
	.string "Recieved Fuecoco$"

NicknamePartyMon_Text_0:
# 1100 "data/maps/NewBirchsLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 1116 "data/maps/NewBirchsLab/scripts.pory"
	.string "Transferred to PC$"

NewBirchsLab_NotChosen::
# 1119 "data/maps/NewBirchsLab/scripts.pory"
	.string "You did not choose the Pokemon$"
