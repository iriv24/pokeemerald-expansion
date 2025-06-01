# 1 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 2 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
.set LOCALID_DANNI, 1
# 3 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
.set LOCALID_MASTA_JANES, 3
# 4 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
.set LOCALID_BEFOOLS, 5
# 5 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
.set LOCALID_BURAK, 7
# 6 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 7 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_MapScripts::
# 8 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.byte 0
# 9 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 10 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_EventScript_Urshifu::
# 11 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lock
# 12 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	faceplayer
# 13 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitse
# 14 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playmoncry SPECIES_URSHIFU_RAPID_STRIKE, CRY_MODE_NORMAL
# 15 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox SootopolisCity_ChampHouse_Text_Urshifu, MSGBOX_DEFAULT
# 16 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmoncry
# 17 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
# 18 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	end
# 19 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 20 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_Text_Urshifu:
# 21 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Urshifu: Huaaaaah!$"
# 22 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 23 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_EventScript_Meowscarada::
# 24 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lock
# 25 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	faceplayer
# 26 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitse
# 27 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playmoncry SPECIES_MEOWSCARADA, CRY_MODE_NORMAL
# 28 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox SootopolisCity_ChampHouse_Text_Meowscarada, MSGBOX_DEFAULT
# 29 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmoncry
# 30 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
# 31 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	end
# 32 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 33 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_Text_Meowscarada:
# 34 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Meowscarada: Tzchrowwwwww!$"
# 35 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 36 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_EventScript_Gengar::
# 37 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lock
# 38 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	faceplayer
# 39 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitse
# 40 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playmoncry SPECIES_GENGAR, CRY_MODE_NORMAL
# 41 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox SootopolisCity_ChampHouse_Text_Gengar, MSGBOX_DEFAULT
# 42 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmoncry
# 43 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
# 44 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	end
# 45 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 46 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_Text_Gengar:
# 47 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Gengar: Errrraaaaauhh!$"
# 48 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 49 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_EventScript_Spidops::
# 50 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lock
# 51 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	faceplayer
# 52 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitse
# 53 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playmoncry SPECIES_SPIDOPS, CRY_MODE_NORMAL
# 54 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox SootopolisCity_ChampHouse_Text_Spidops, MSGBOX_DEFAULT
# 55 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmoncry
# 56 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
# 57 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	end
# 58 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 59 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_Text_Spidops:
# 60 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Spidops: Ghhsghsghhhhh!$"

SootopolisCity_ChampHouse_EventScript_Danni::
# 65 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lockall
# 66 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	applymovement LOCALID_DANNI, Common_Movement_FacePlayer
# 67 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_defeated TRAINER_DANNI, SootopolisCity_ChampHouse_EventScript_DanniDefeated
# 68 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_set FLAG_TEMP_1, SootopolisCity_ChampHouse_EventScript_DanniRequestBattleAgain
# 69 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_Greeting, MSGBOX_YESNO
# 70 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleDanniPrompt
	end


SootopolisCity_ChampHouse_EventScript_DanniRequestBattleAgain::
# 75 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_ReadyYet, MSGBOX_YESNO
# 76 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleDanniPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleDanniPrompt::
# 81 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleDanni
# 82 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineDanniBattle
# 83 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineDanniBattle::
# 88 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 89 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_ComeBackWhenReady, MSGBOX_DEFAULT
# 90 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleDanni::
# 95 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_YoureOn, MSGBOX_DEFAULT
# 96 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_DANNI, Danni_Outro
# 97 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_DanniGiveGenesect
	return


SootopolisCity_ChampHouse_EventScript_DanniDefeated::
# 103 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_Danni, MSGBOX_DEFAULT
# 104 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_DanniGiveGenesect::
# 109 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GENESECT
# 110 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_GENESECT, 50
# 111 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveGenesectParty
# 112 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveGenesectPC
# 113 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 114 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveGenesectParty::
# 119 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedGenesectFanfare
# 120 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 121 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainGenesect
# 122 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 123 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 124 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainGenesect
	end


SootopolisCity_ChampHouse_EventScript_ReceiveGenesectPC::
# 130 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedGenesectFanfare
# 131 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 132 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendGenesectToPC
# 133 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 134 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendGenesectToPC
	end


SootopolisCity_ChampHouse_EventScript_SendGenesectToPC::
# 140 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 141 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainGenesect
	end


SootopolisCity_ChampHouse_EventScript_ReceivedGenesectFanfare::
# 147 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 148 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedGenesect
# 149 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 150 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 151 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GENESECT
	return


SootopolisCity_ChampHouse_EventScript_ExplainGenesect::
# 157 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_ExplainGenesect, MSGBOX_DEFAULT
# 158 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_MastaJanes::
# 203 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lockall
# 204 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	applymovement LOCALID_MASTA_JANES, Common_Movement_FacePlayer
# 205 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_defeated TRAINER_MASTA_JANES, SootopolisCity_ChampHouse_EventScript_MastaJanesDefeated
# 206 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, SootopolisCity_ChampHouse_EventScript_MastaJanesRequestBattleAgain
# 207 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_Greeting, MSGBOX_YESNO
# 208 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleMastaJanesPrompt
	end


SootopolisCity_ChampHouse_EventScript_MastaJanesRequestBattleAgain::
# 213 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_ReadyYet, MSGBOX_YESNO
# 214 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleMastaJanesPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleMastaJanesPrompt::
# 219 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleMastaJanes
# 220 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineMastaJanesBattle
# 221 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineMastaJanesBattle::
# 226 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 227 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_ComeBackWhenReady, MSGBOX_DEFAULT
# 228 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleMastaJanes::
# 233 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_YoureOn, MSGBOX_DEFAULT
# 234 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_MASTA_JANES, MastaJanes_Outro
# 235 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_MastaJanesGiveDitto
	return


SootopolisCity_ChampHouse_EventScript_MastaJanesDefeated::
# 240 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_MastaJanes, MSGBOX_DEFAULT
# 241 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_MastaJanesGiveDitto::
# 246 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DITTO
# 247 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_DITTO, 50, isShiny = TRUE
# 248 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveDittoParty
# 249 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveDittoPC
# 250 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 251 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveDittoParty::
# 256 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedDittoFanfare
# 257 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 258 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainDitto
# 259 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 260 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 261 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainDitto
	end


SootopolisCity_ChampHouse_EventScript_ReceiveDittoPC::
# 266 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedDittoFanfare
# 267 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 268 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendDittoToPC
# 269 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 270 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendDittoToPC
	end


SootopolisCity_ChampHouse_EventScript_SendDittoToPC::
# 275 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 276 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainDitto
	end


SootopolisCity_ChampHouse_EventScript_ReceivedDittoFanfare::
# 281 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 282 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedDitto
# 283 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 284 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 285 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
	return


SootopolisCity_ChampHouse_EventScript_ExplainDitto::
# 290 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_ExplainDitto, MSGBOX_DEFAULT
# 291 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_Befools::
# 343 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lockall
# 344 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	applymovement LOCALID_BEFOOLS, Common_Movement_FacePlayer
# 345 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_defeated TRAINER_BEFOOLS, SootopolisCity_ChampHouse_EventScript_BefoolsDefeated
# 346 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, SootopolisCity_ChampHouse_EventScript_BefoolsRequestBattleAgain
# 347 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_Greeting, MSGBOX_YESNO
# 348 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleBefoolsPrompt
	end


SootopolisCity_ChampHouse_EventScript_BefoolsRequestBattleAgain::
# 353 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_ReadyYet, MSGBOX_YESNO
# 354 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleBefoolsPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleBefoolsPrompt::
# 359 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleBefools
# 360 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineBefoolsBattle
# 361 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineBefoolsBattle::
# 366 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 367 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_ComeBackWhenReady, MSGBOX_DEFAULT
# 368 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleBefools::
# 373 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_YoureOn, MSGBOX_DEFAULT
# 374 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_BEFOOLS, Befools_Outro
# 375 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BefoolsGiveHoopa
	return


SootopolisCity_ChampHouse_EventScript_BefoolsDefeated::
# 380 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_Befools, MSGBOX_DEFAULT
# 381 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_BefoolsGiveHoopa::
# 386 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HOOPA_CONFINED
# 387 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_HOOPA_CONFINED, 50
# 388 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveHoopaParty
# 389 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveHoopaPC
# 390 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 391 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveHoopaParty::
# 396 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedHoopaFanfare
# 397 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 398 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainHoopa
# 399 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 400 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 401 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainHoopa
	end


SootopolisCity_ChampHouse_EventScript_ReceiveHoopaPC::
# 406 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedHoopaFanfare
# 407 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 408 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendHoopaToPC
# 409 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 410 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendHoopaToPC
	end


SootopolisCity_ChampHouse_EventScript_SendHoopaToPC::
# 415 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 416 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainHoopa
	end


SootopolisCity_ChampHouse_EventScript_ReceivedHoopaFanfare::
# 421 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 422 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedHoopa
# 423 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 424 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 425 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HOOPA_CONFINED
	return


SootopolisCity_ChampHouse_EventScript_ExplainHoopa::
# 430 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_ExplainHoopa, MSGBOX_DEFAULT
# 431 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_Burak::
# 481 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lockall
# 482 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	applymovement LOCALID_BURAK, Common_Movement_FacePlayer
# 483 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_defeated TRAINER_BURAK, SootopolisCity_ChampHouse_EventScript_BurakDefeated
# 484 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, SootopolisCity_ChampHouse_EventScript_BurakRequestBattleAgain
# 485 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_Greeting, MSGBOX_YESNO
# 486 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleBurakPrompt
	end


SootopolisCity_ChampHouse_EventScript_BurakRequestBattleAgain::
# 491 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_ReadyYet, MSGBOX_YESNO
# 492 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleBurakPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleBurakPrompt::
# 497 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleBurak
# 498 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineBurakBattle
# 499 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineBurakBattle::
# 504 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 505 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_ComeBackWhenReady, MSGBOX_DEFAULT
# 506 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleBurak::
# 511 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_YoureOn, MSGBOX_DEFAULT
# 512 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_BURAK, Burak_Outro
# 513 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BurakGiveVolcanion
	return


SootopolisCity_ChampHouse_EventScript_BurakDefeated::
# 519 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_Burak, MSGBOX_DEFAULT
# 520 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_BurakGiveVolcanion::
# 525 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_VOLCANION
# 526 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_VOLCANION, 50
# 527 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveVolcanionParty
# 528 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveVolcanionPC
# 529 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 530 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveVolcanionParty::
# 535 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedVolcanionFanfare
# 536 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 537 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainVolcanion
# 538 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 539 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 540 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainVolcanion
	end


SootopolisCity_ChampHouse_EventScript_ReceiveVolcanionPC::
# 546 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedVolcanionFanfare
# 547 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 548 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendVolcanionToPC
# 549 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 550 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendVolcanionToPC
	end


SootopolisCity_ChampHouse_EventScript_SendVolcanionToPC::
# 556 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 557 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainVolcanion
	end


SootopolisCity_ChampHouse_EventScript_ReceivedVolcanionFanfare::
# 563 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 564 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedVolcanion
# 565 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 566 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 567 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VOLCANION
	return


SootopolisCity_ChampHouse_EventScript_ExplainVolcanion::
# 573 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_ExplainVolcanion, MSGBOX_DEFAULT
# 574 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


Danni_Greeting::
# 162 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Ello ello, trainer. Nice to see you’ve\n"
	.string "gotten this far. How bout a battle with\l"
	.string "a nuzlocke legend?\p"
	.string "Win here and you get a rad Mythical\n"
	.string "from me. You in?$"

Danni_ReadyYet::
# 170 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Ready yet?$"

Danni_YoureOn::
# 174 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "You'll never beat this squad!$"

Danni_ComeBackWhenReady::
# 178 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Didn't think so!$"

Danni_Outro::
# 182 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Huh. You defeated me. Kudos and\n"
	.string "congrats.$"

SootopolisCity_ChampHouse_Text_PlayerReceivedGenesect::
# 187 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER} received Genesect!$"

Danni_ExplainGenesect::
# 191 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "As promised, there's your Mythical.\n"
	.string "That one is pretty strong too, I'd say.$"

PostBattle_Danni::
# 196 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "I was the first player ever to nuzlocke\n"
	.string "this game! And, I did it deathless!\l"
	.string "How do you like that?$"

MastaJanes_Greeting::
# 295 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Hi there trainer, my name is MastaJanes.\n"
	.string "I was the 5th person to beat this game,\l"
	.string "and most notably, I beat it on the\l"
	.string "MyBoy emulator.\p"
	.string "Even though there were several crashes\n"
	.string "in that version of the game at the time,\l"
	.string "and even though the creator told me\l"
	.string "not to use MyBoy, I persevered and\l"
	.string "finished the game anyway.\p"
	.string "Now, if you can beat me, I'll give you a\n"
	.string "shiny Ditto you can use to breed more\l"
	.string "shiny Pokémon.\p"
	.string "Do you want to battle?$"

MastaJanes_ReadyYet::
# 311 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Are you ready now?$"

MastaJanes_YoureOn::
# 315 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "You're going down!$"

MastaJanes_ComeBackWhenReady::
# 319 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "You know where to find me if you change\n"
	.string "your mind.$"

MastaJanes_Outro::
# 324 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Wow, I didn't think I could lose.\n$"

SootopolisCity_ChampHouse_Text_PlayerReceivedDitto::
# 328 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER} received Ditto!$"

MastaJanes_ExplainDitto::
# 332 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Here's your shiny Ditto!\n"
	.string "Hope you can use it to get many more\l"
	.string "shiny Pokémon.$"

PostBattle_MastaJanes::
# 338 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "I'm still playing on MyBoy to this day.$"

Befools_Greeting::
# 435 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "I'm Befools, and I used my trusty\n"
	.string "Gengar here to put every single\l"
	.string "Pokémon in this game to sleep, and then\l"
	.string "knocked them out.\p"
	.string "If the creator ends up nerfing sleep\n"
	.string "even more in a future update, it will\l"
	.string "probably be my fault, sorry about that!\p"
	.string "Anyway, just like everyone else, if you\n"
	.string "beat me, I'll give you a Mythical.\p"
	.string "So, do you want to battle?$"

Befools_ReadyYet::
# 448 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Ready for this snooze-fest?$"

Befools_YoureOn::
# 452 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "There is no escaping it. Give up.$"

Befools_ComeBackWhenReady::
# 456 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "You probably didn't have enough Chesto\n"
	.string "Berries equipped anyway.$"

Befools_Outro::
# 461 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Even through all my Hypnosis attempts!\n$"

SootopolisCity_ChampHouse_Text_PlayerReceivedHoopa::
# 465 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER} received Hoopa!$"

Befools_ExplainHoopa::
# 469 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "As promised, there's your Mythical!\n"
	.string "It's not as good a Ghost-type as\l"
	.string "Gengar, but I think it will do.$"

PostBattle_Befools::
# 475 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Gengar use Hypnosis!$"

Burak_Greeting::
# 578 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Come on Spidops, you're so close to\n"
	.string "OHKO-ing that Reshiram…\p"
	.string "Oh, hello, I was just preparing my\n"
	.string "strategy for the Elite 4.\p"
	.string "I think Spidops here is going to pick up\n"
	.string "double-digit frags for this run.\p"
	.string "Anyway, if you can beat me, I'll give you\n"
	.string "a gift Mythical, which is unfortunately\l"
	.string "not a Spidops, but it's still solid.\p"
	.string "What do you say?$"

Burak_ReadyYet::
# 591 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Are you ready?\n"
	.string "I'll tell Spidops to go easy on you.$"

Burak_YoureOn::
# 596 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "It was all a ploy, GO MEGA APE!!!$"

Burak_ComeBackWhenReady::
# 600 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "That's fine, I'll be here training\n"
	.string "Spidops.$"

Burak_Outro::
# 605 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Well at least I'm still first on\n"
	.string "THE SHEET.$"

SootopolisCity_ChampHouse_Text_PlayerReceivedVolcanion::
# 610 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER} received Volcanion!$"

Burak_ExplainVolcanion::
# 614 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "There you go! It's no Spidops, but I\n"
	.string "think it'll do just fine.$"

PostBattle_Burak::
# 619 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Good As Spidops.\n"
	.string "Stats irrelevant.$"
