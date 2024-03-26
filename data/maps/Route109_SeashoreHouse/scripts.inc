# 1 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 2 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_MapScripts::
# 3 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_SeashoreHouse_OnTransition
# 4 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 6 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_OnTransition:
# 7 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
# 8 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 9 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 10 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Owner::
# 11 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lock
# 12 "data/maps/Route109_SeashoreHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHARCADET, Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop
# 14 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_SEASHORE_HOUSE, Route109_SeashoreHouse_EventScript_DefeatedTrainers
# 15 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction
# 16 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SeashoreHouseIntro, MSGBOX_DEFAULT
# 17 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 18 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 19 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 20 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 21 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction::
# 22 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ShowMeSomeHotMatches, MSGBOX_DEFAULT
# 23 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 24 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 25 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 26 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_DefeatedTrainers::
# 27 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles, MSGBOX_DEFAULT
# 28 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHARCADET
# 29 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemon SPECIES_CHARCADET, 25
# 30 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route109_SeashoreHouse_EventScript_ReceiveCharcadetParty
# 31 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route109_SeashoreHouse_EventScript_ReceiveCharcadetPC
# 32 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 33 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 34 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 35 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 36 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_ReceiveCharcadetParty::
# 37 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Route109_SeashoreHouse_EventScript_ReceivedCharcadetFanfare
# 38 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 39 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_SeashoreHouse_EventScript_ExplainCharcadet
# 40 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 41 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 42 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_ExplainCharcadet
# 43 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 44 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 45 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_ReceiveCharcadetPC::
# 46 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Route109_SeashoreHouse_EventScript_ReceivedCharcadetFanfare
# 47 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 48 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_SeashoreHouse_EventScript_SendCharcadetToPC
# 49 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 50 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_SendCharcadetToPC
# 51 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 52 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 53 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_SendCharcadetToPC::
# 54 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 55 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_ExplainCharcadet
# 56 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 57 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 58 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_ReceivedCharcadetFanfare::
# 59 "data/maps/Route109_SeashoreHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 60 "data/maps/Route109_SeashoreHouse/scripts.pory"
	message Route109_SeashoreHouse_Text_PlayerReceivedCharcadet
# 61 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitmessage
# 62 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitfanfare
# 63 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARCADET
# 64 "data/maps/Route109_SeashoreHouse/scripts.pory"
	return
# 65 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 66 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_ExplainCharcadet::
# 67 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_PokemonChangesWithStone, MSGBOX_DEFAULT
# 68 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_RECEIVED_CHARCADET
# 69 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 70 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 71 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 72 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BagFull::
# 73 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_BagFull, MSGBOX_DEFAULT
# 74 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 75 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 76 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 77 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop::
# 78 "data/maps/Route109_SeashoreHouse/scripts.pory"
	showmoneybox 0, 0
# 79 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_WantToBuySodaPop, MSGBOX_YESNO
# 80 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route109_SeashoreHouse_EventScript_BuySodaPop
# 81 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ThatsTooBad, MSGBOX_DEFAULT
# 82 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 83 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 84 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 85 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 86 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BuySodaPop::
# 87 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkmoney 300
# 88 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughMoney
# 89 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkitemspace ITEM_SODA_POP
# 90 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughSpace
# 91 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_HereYouGo, MSGBOX_DEFAULT
# 92 "data/maps/Route109_SeashoreHouse/scripts.pory"
	removemoney 300
# 93 "data/maps/Route109_SeashoreHouse/scripts.pory"
	updatemoneybox
# 94 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP
# 95 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 96 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 97 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 98 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 99 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_NotEnoughMoney::
# 100 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 101 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 102 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 103 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 104 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 105 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_NotEnoughSpace::
# 106 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 107 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 108 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 109 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 110 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 111 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Dwayne::
# 112 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 113 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 115 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 116 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Johanna::
# 117 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 118 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 120 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 121 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Simon::
# 122 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_SIMON, Route109_SeashoreHouse_Text_SimonIntro, Route109_SeashoreHouse_Text_SimonDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 123 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 125 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 126 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
# 127 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_DWAYNE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 128 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_JOHANNA, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 129 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_SIMON, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 130 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_DEFEATED_SEASHORE_HOUSE
# 131 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 132 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 133 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 134 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_TrainersNotCompleted::
# 135 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 136 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 137 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 138 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SeashoreHouseIntro:
# 139 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm the owner of the SEASHORE HOUSE.\n"
# 140 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "But you can call me MR. SEA!\p"
# 141 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "What I love above all is to see hot\n"
# 142 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "POKéMON battles.\p"
# 143 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Let me see that your heart burns hot!\p"
# 144 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If you can defeat all the TRAINERS\n"
# 145 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "here, I'll reward your efforts.$"
# 146 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 147 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_ShowMeSomeHotMatches:
# 148 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Show me some hot matches!\p"
# 149 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I run this SEASHORE HOUSE just for\n"
# 150 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "that reason alone!$"
# 151 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 152 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles:
# 153 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You're scorching hot!\n"
# 154 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Those battles blazed!\l"
# 155 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm more than just satisfied!\p"
# 156 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "As thanks for showing me your hot\n"
# 157 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "streak, I want you to take this\p"
# 158 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Pokémon. It's a scorching hot battler,\n"
# 159 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm sure you'll put it to good use!$"
# 160 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 161 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_BagFull:
# 162 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Oh, but hey, your BAG's jammed full.\n"
# 163 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'll hang on to these for you.$"
# 164 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 165 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_WantToBuySodaPop:
# 166 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Want to buy some SODA POP?\n"
# 167 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "POKéMON love it!\p"
# 168 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Just ¥300 a bottle!\n"
# 169 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Buy some!$"
# 170 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 171 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_HereYouGo:
# 172 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Here you go!$"
# 173 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 174 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_NotEnoughMoney:
# 175 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You don't have the money.$"
# 176 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 177 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_ThatsTooBad:
# 178 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "No?\n"
# 179 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That's too bad.$"
# 180 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 181 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneIntro:
# 182 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If you're looking for a battle in the\n"
# 183 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "SEASHORE HOUSE, you'll find no\l"
# 184 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "hotter TRAINER than me, matey!$"
# 185 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 186 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneDefeated:
# 187 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That was a hot battle!\n"
# 188 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I can accept that loss, matey!$"
# 189 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 190 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwaynePostBattle:
# 191 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Whenever I'm in SLATEPORT, I enjoy\n"
# 192 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "hot battles and ice-cold SODA POP!$"
# 193 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 194 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaIntro:
# 195 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Boring battles aren't worth the effort.\p"
# 196 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Fiery hot battles are what toughen up\n"
# 197 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "TRAINERS and POKéMON!$"
# 198 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 199 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaDefeated:
# 200 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That's hot!$"
# 201 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 202 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaPostBattle:
# 203 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Whew, I'm all thirsty.\n"
# 204 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Maybe I'll have a SODA POP.$"
# 205 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 206 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonIntro:
# 207 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm going to show you how great\n"
# 208 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "my POKéMON are, but don't cry!$"
# 209 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 210 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonDefeated:
# 211 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "…I lost, but I won't cry…$"
# 212 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 213 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonPostBattle:
# 214 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If one of my POKéMON knew the move\n"
# 215 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "for carrying me across water on its\l"
# 216 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "back, I could get rid of this inner tube.$"
# 217 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 218 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_PlayerReceivedCharcadet:
# 219 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "{PLAYER} received Charcadet!$"
# 220 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 221 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_PokemonChangesWithStone:
# 222 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That Pokémon can evolve into two\n"
# 223 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "different forms. You can use a Sun\p"
# 224 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Stone to turn it into an Armarouge or a\n"
# 225 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Moon Stone to turn it into a Ceruledge.\p"
# 226 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I think both are great options, so you\n"
# 227 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "can't go wrong!$"
