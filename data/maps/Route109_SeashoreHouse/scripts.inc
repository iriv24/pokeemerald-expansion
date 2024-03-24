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
	givemon SPECIES_CHARCADET, 25
# 29 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route109_SeashoreHouse_EventScript_ReceiveCharcadetParty
# 30 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route109_SeashoreHouse_EventScript_ReceiveCharcadetPC
# 31 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 32 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 33 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 34 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 35 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_ReceiveCharcadetParty::
# 36 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Route109_SeashoreHouse_EventScript_ReceivedCharcadetFanfare
# 37 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 38 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_SeashoreHouse_EventScript_ExplainCharcadet
# 39 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 40 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 41 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_ExplainCharcadet
# 42 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 43 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 44 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_ReceiveCharcadetPC::
# 45 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Route109_SeashoreHouse_EventScript_ReceivedCharcadetFanfare
# 46 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 47 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_SeashoreHouse_EventScript_SendCharcadetToPC
# 48 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 49 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_SendCharcadetToPC
# 50 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 51 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 52 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_SendCharcadetToPC::
# 53 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 54 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_ExplainCharcadet
# 55 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 56 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 57 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_ReceivedCharcadetFanfare::
# 58 "data/maps/Route109_SeashoreHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 59 "data/maps/Route109_SeashoreHouse/scripts.pory"
	message Route109_SeashoreHouse_Text_PlayerReceivedCharcadet
# 60 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitmessage
# 61 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitfanfare
# 62 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARCADET
# 63 "data/maps/Route109_SeashoreHouse/scripts.pory"
	return
# 64 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 65 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_ExplainCharcadet::
# 66 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_PokemonChangesWithStone, MSGBOX_DEFAULT
# 67 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_RECEIVED_CHARCADET
# 68 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 69 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 70 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 71 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BagFull::
# 72 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_BagFull, MSGBOX_DEFAULT
# 73 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 74 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 75 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 76 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop::
# 77 "data/maps/Route109_SeashoreHouse/scripts.pory"
	showmoneybox 0, 0
# 78 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_WantToBuySodaPop, MSGBOX_YESNO
# 79 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route109_SeashoreHouse_EventScript_BuySodaPop
# 80 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ThatsTooBad, MSGBOX_DEFAULT
# 81 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 82 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 83 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 84 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 85 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BuySodaPop::
# 86 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkmoney 300
# 87 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughMoney
# 88 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkitemspace ITEM_SODA_POP
# 89 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughSpace
# 90 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_HereYouGo, MSGBOX_DEFAULT
# 91 "data/maps/Route109_SeashoreHouse/scripts.pory"
	removemoney 300
# 92 "data/maps/Route109_SeashoreHouse/scripts.pory"
	updatemoneybox
# 93 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP
# 94 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 95 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 96 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 97 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 98 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_NotEnoughMoney::
# 99 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 100 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 101 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 102 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 103 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 104 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_NotEnoughSpace::
# 105 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 106 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 107 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 108 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 109 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 110 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Dwayne::
# 111 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 112 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 114 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 115 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Johanna::
# 116 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 117 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 119 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 120 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Simon::
# 121 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_SIMON, Route109_SeashoreHouse_Text_SimonIntro, Route109_SeashoreHouse_Text_SimonDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 122 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 124 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 125 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
# 126 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_DWAYNE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 127 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_JOHANNA, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 128 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_SIMON, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 129 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_DEFEATED_SEASHORE_HOUSE
# 130 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 131 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 132 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 133 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_TrainersNotCompleted::
# 134 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 135 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 136 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 137 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SeashoreHouseIntro:
# 138 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm the owner of the SEASHORE HOUSE.\n"
# 139 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "But you can call me MR. SEA!\p"
# 140 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "What I love above all is to see hot\n"
# 141 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "POKéMON battles.\p"
# 142 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Let me see that your heart burns hot!\p"
# 143 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If you can defeat all the TRAINERS\n"
# 144 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "here, I'll reward your efforts.$"
# 145 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 146 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_ShowMeSomeHotMatches:
# 147 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Show me some hot matches!\p"
# 148 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I run this SEASHORE HOUSE just for\n"
# 149 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "that reason alone!$"
# 150 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 151 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles:
# 152 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You're scorching hot!\n"
# 153 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Those battles blazed!\l"
# 154 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm more than just satisfied!\p"
# 155 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "As thanks for showing me your hot\n"
# 156 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "streak, I want you to take this\p"
# 157 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Pokémon. It's a scorching hot battler,\n"
# 158 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm sure you'll put it to good use!$"
# 159 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 160 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_BagFull:
# 161 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Oh, but hey, your BAG's jammed full.\n"
# 162 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'll hang on to these for you.$"
# 163 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 164 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_WantToBuySodaPop:
# 165 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Want to buy some SODA POP?\n"
# 166 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "POKéMON love it!\p"
# 167 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Just ¥300 a bottle!\n"
# 168 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Buy some!$"
# 169 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 170 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_HereYouGo:
# 171 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Here you go!$"
# 172 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 173 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_NotEnoughMoney:
# 174 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You don't have the money.$"
# 175 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 176 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_ThatsTooBad:
# 177 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "No?\n"
# 178 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That's too bad.$"
# 179 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 180 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneIntro:
# 181 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If you're looking for a battle in the\n"
# 182 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "SEASHORE HOUSE, you'll find no\l"
# 183 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "hotter TRAINER than me, matey!$"
# 184 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 185 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneDefeated:
# 186 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That was a hot battle!\n"
# 187 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I can accept that loss, matey!$"
# 188 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 189 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwaynePostBattle:
# 190 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Whenever I'm in SLATEPORT, I enjoy\n"
# 191 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "hot battles and ice-cold SODA POP!$"
# 192 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 193 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaIntro:
# 194 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Boring battles aren't worth the effort.\p"
# 195 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Fiery hot battles are what toughen up\n"
# 196 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "TRAINERS and POKéMON!$"
# 197 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 198 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaDefeated:
# 199 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That's hot!$"
# 200 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 201 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaPostBattle:
# 202 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Whew, I'm all thirsty.\n"
# 203 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Maybe I'll have a SODA POP.$"
# 204 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 205 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonIntro:
# 206 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm going to show you how great\n"
# 207 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "my POKéMON are, but don't cry!$"
# 208 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 209 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonDefeated:
# 210 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "…I lost, but I won't cry…$"
# 211 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 212 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonPostBattle:
# 213 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If one of my POKéMON knew the move\n"
# 214 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "for carrying me across water on its\l"
# 215 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "back, I could get rid of this inner tube.$"
# 216 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 217 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_PlayerReceivedCharcadet:
# 218 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "{PLAYER} received Charcadet!$"
# 219 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 220 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_PokemonChangesWithStone:
# 221 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That Pokémon can evolve into two\n"
# 222 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "different forms. You can use a Sun\p"
# 223 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Stone to turn it into an Armarouge or a\n"
# 224 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Moon Stone to turn it into a Ceruledge.\p"
# 225 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I think both are great options, so you\n"
# 226 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "can't go wrong!$"
