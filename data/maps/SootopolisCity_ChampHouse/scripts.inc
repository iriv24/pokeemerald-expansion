# 1 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 2 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
.set LOCALID_DANNI, 1
# 3 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
.set LOCALID_MASTA_JANES, 3
# 4 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
.set LOCALID_BEFOOLS, 5
# 5 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 6 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_MapScripts::
# 7 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.byte 0
# 8 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 9 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_EventScript_Urshifu::
# 10 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lock
# 11 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	faceplayer
# 12 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitse
# 13 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playmoncry SPECIES_URSHIFU_RAPID_STRIKE, CRY_MODE_NORMAL
# 14 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox SootopolisCity_ChampHouse_Text_Urshifu, MSGBOX_DEFAULT
# 15 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmoncry
# 16 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
# 17 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	end
# 18 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 19 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_Text_Urshifu:
# 20 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Urshifu: Huaaaaah!$"
# 21 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 22 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_EventScript_Meowscarada::
# 23 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lock
# 24 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	faceplayer
# 25 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitse
# 26 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playmoncry SPECIES_MEOWSCARADA, CRY_MODE_NORMAL
# 27 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox SootopolisCity_ChampHouse_Text_Meowscarada, MSGBOX_DEFAULT
# 28 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmoncry
# 29 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
# 30 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	end
# 31 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 32 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_Text_Meowscarada:
# 33 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Meowscarada: Tzchrowwwwww!$"
# 34 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 35 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_EventScript_Gengar::
# 36 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lock
# 37 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	faceplayer
# 38 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitse
# 39 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playmoncry SPECIES_GENGAR, CRY_MODE_NORMAL
# 40 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox SootopolisCity_ChampHouse_Text_Gengar, MSGBOX_DEFAULT
# 41 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmoncry
# 42 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
# 43 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	end
# 44 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 45 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_Text_Gengar:
# 46 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Gengar: Errrraaaaauhh!$"

SootopolisCity_ChampHouse_EventScript_Danni::
# 51 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lockall
# 52 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	applymovement LOCALID_DANNI, Common_Movement_FacePlayer
# 53 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_defeated TRAINER_DANNI, SootopolisCity_ChampHouse_EventScript_DanniDefeated
# 54 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_set FLAG_TEMP_1, SootopolisCity_ChampHouse_EventScript_DanniRequestBattleAgain
# 55 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_Greeting, MSGBOX_YESNO
# 56 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleDanniPrompt
	end


SootopolisCity_ChampHouse_EventScript_DanniRequestBattleAgain::
# 61 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_ReadyYet, MSGBOX_YESNO
# 62 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleDanniPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleDanniPrompt::
# 67 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleDanni
# 68 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineDanniBattle
# 69 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineDanniBattle::
# 74 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 75 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_ComeBackWhenReady, MSGBOX_DEFAULT
# 76 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleDanni::
# 81 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_YoureOn, MSGBOX_DEFAULT
# 82 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_DANNI, Danni_Outro
# 83 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_DanniGiveGenesect
	return


SootopolisCity_ChampHouse_EventScript_DanniDefeated::
# 89 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_Danni, MSGBOX_DEFAULT
# 90 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_DanniGiveGenesect::
# 95 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GENESECT
# 96 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_GENESECT, 50
# 97 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveGenesectParty
# 98 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveGenesectPC
# 99 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 100 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveGenesectParty::
# 105 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedGenesectFanfare
# 106 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 107 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainGenesect
# 108 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 109 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 110 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainGenesect
	end


SootopolisCity_ChampHouse_EventScript_ReceiveGenesectPC::
# 116 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedGenesectFanfare
# 117 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 118 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendGenesectToPC
# 119 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 120 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendGenesectToPC
	end


SootopolisCity_ChampHouse_EventScript_SendGenesectToPC::
# 126 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 127 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainGenesect
	end


SootopolisCity_ChampHouse_EventScript_ReceivedGenesectFanfare::
# 133 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 134 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedGenesect
# 135 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 136 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 137 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GENESECT
	return


SootopolisCity_ChampHouse_EventScript_ExplainGenesect::
# 143 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_ExplainGenesect, MSGBOX_DEFAULT
# 144 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_MastaJanes::
# 189 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lockall
# 190 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	applymovement LOCALID_MASTA_JANES, Common_Movement_FacePlayer
# 191 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_defeated TRAINER_MASTA_JANES, SootopolisCity_ChampHouse_EventScript_MastaJanesDefeated
# 192 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, SootopolisCity_ChampHouse_EventScript_MastaJanesRequestBattleAgain
# 193 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_Greeting, MSGBOX_YESNO
# 194 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleMastaJanesPrompt
	end


SootopolisCity_ChampHouse_EventScript_MastaJanesRequestBattleAgain::
# 199 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_ReadyYet, MSGBOX_YESNO
# 200 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleMastaJanesPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleMastaJanesPrompt::
# 205 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleMastaJanes
# 206 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineMastaJanesBattle
# 207 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineMastaJanesBattle::
# 212 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 213 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_ComeBackWhenReady, MSGBOX_DEFAULT
# 214 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleMastaJanes::
# 219 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_YoureOn, MSGBOX_DEFAULT
# 220 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_MASTA_JANES, MastaJanes_Outro
# 221 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_MastaJanesGiveDitto
	return


SootopolisCity_ChampHouse_EventScript_MastaJanesDefeated::
# 226 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_MastaJanes, MSGBOX_DEFAULT
# 227 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_MastaJanesGiveDitto::
# 232 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DITTO
# 233 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_DITTO, 50, isShiny = TRUE
# 234 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveDittoParty
# 235 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveDittoPC
# 236 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 237 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveDittoParty::
# 242 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedDittoFanfare
# 243 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 244 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainDitto
# 245 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 246 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 247 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainDitto
	end


SootopolisCity_ChampHouse_EventScript_ReceiveDittoPC::
# 252 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedDittoFanfare
# 253 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 254 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendDittoToPC
# 255 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 256 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendDittoToPC
	end


SootopolisCity_ChampHouse_EventScript_SendDittoToPC::
# 261 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 262 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainDitto
	end


SootopolisCity_ChampHouse_EventScript_ReceivedDittoFanfare::
# 267 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 268 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedDitto
# 269 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 270 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 271 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
	return


SootopolisCity_ChampHouse_EventScript_ExplainDitto::
# 276 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_ExplainDitto, MSGBOX_DEFAULT
# 277 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_Befools::
# 329 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lockall
# 330 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	applymovement LOCALID_BEFOOLS, Common_Movement_FacePlayer
# 331 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_defeated TRAINER_BEFOOLS, SootopolisCity_ChampHouse_EventScript_BefoolsDefeated
# 332 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, SootopolisCity_ChampHouse_EventScript_BefoolsRequestBattleAgain
# 333 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_Greeting, MSGBOX_YESNO
# 334 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleBefoolsPrompt
	end


SootopolisCity_ChampHouse_EventScript_BefoolsRequestBattleAgain::
# 339 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_ReadyYet, MSGBOX_YESNO
# 340 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleBefoolsPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleBefoolsPrompt::
# 345 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleBefools
# 346 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineBefoolsBattle
# 347 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineBefoolsBattle::
# 352 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 353 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_ComeBackWhenReady, MSGBOX_DEFAULT
# 354 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleBefools::
# 359 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_YoureOn, MSGBOX_DEFAULT
# 360 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_BEFOOLS, Befools_Outro
# 361 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BefoolsGiveHoopa
	return


SootopolisCity_ChampHouse_EventScript_BefoolsDefeated::
# 366 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_Befools, MSGBOX_DEFAULT
# 367 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_BefoolsGiveHoopa::
# 372 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HOOPA_CONFINED
# 373 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_HOOPA_CONFINED, 50
# 374 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveHoopaParty
# 375 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveHoopaPC
# 376 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 377 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveHoopaParty::
# 382 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedHoopaFanfare
# 383 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 384 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainHoopa
# 385 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 386 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 387 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainHoopa
	end


SootopolisCity_ChampHouse_EventScript_ReceiveHoopaPC::
# 392 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedHoopaFanfare
# 393 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 394 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendHoopaToPC
# 395 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 396 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendHoopaToPC
	end


SootopolisCity_ChampHouse_EventScript_SendHoopaToPC::
# 401 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 402 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainHoopa
	end


SootopolisCity_ChampHouse_EventScript_ReceivedHoopaFanfare::
# 407 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 408 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedHoopa
# 409 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 410 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 411 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HOOPA_CONFINED
	return


SootopolisCity_ChampHouse_EventScript_ExplainHoopa::
# 416 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_ExplainHoopa, MSGBOX_DEFAULT
# 417 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


Danni_Greeting::
# 148 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Ello ello, trainer. Nice to see you’ve\n"
	.string "gotten this far. How bout a battle with\l"
	.string "a nuzlocke legend?\p"
	.string "Win here and you get a rad Mythical\n"
	.string "from me. You in?$"

Danni_ReadyYet::
# 156 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Ready yet?$"

Danni_YoureOn::
# 160 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "You'll never beat this squad!$"

Danni_ComeBackWhenReady::
# 164 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Didn't think so!$"

Danni_Outro::
# 168 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Huh. You defeated me. Kudos and\n"
	.string "congrats.$"

SootopolisCity_ChampHouse_Text_PlayerReceivedGenesect::
# 173 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER} received Genesect!$"

Danni_ExplainGenesect::
# 177 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "As promised, there's your Mythical.\n"
	.string "That one is pretty strong too, I'd say.$"

PostBattle_Danni::
# 182 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "I was the first player ever to nuzlocke\n"
	.string "this game! And, I did it deathless!\l"
	.string "How do you like that?$"

MastaJanes_Greeting::
# 281 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
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
# 297 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Are you ready now?$"

MastaJanes_YoureOn::
# 301 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "You're going down!$"

MastaJanes_ComeBackWhenReady::
# 305 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "You know where to find me if you change\n"
	.string "your mind.$"

MastaJanes_Outro::
# 310 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Wow, I didn't think I could lose.\n$"

SootopolisCity_ChampHouse_Text_PlayerReceivedDitto::
# 314 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER} received Ditto!$"

MastaJanes_ExplainDitto::
# 318 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Here's your shiny Ditto!\n"
	.string "Hope you can use it to get many more\l"
	.string "shiny Pokémon.$"

PostBattle_MastaJanes::
# 324 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "I'm still playing on MyBoy to this day.$"

Befools_Greeting::
# 421 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
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
# 434 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Ready for this snooze-fest?$"

Befools_YoureOn::
# 438 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "There is no escaping it. Give up.$"

Befools_ComeBackWhenReady::
# 442 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "You probably didn't have enough Chesto\n"
	.string "Berries equipped anyway.$"

Befools_Outro::
# 447 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Even through all my Hypnosis attempts!\n$"

SootopolisCity_ChampHouse_Text_PlayerReceivedHoopa::
# 451 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER} received Hoopa!$"

Befools_ExplainHoopa::
# 455 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "As promised, there's your Mythical!\n"
	.string "It's not as good a Ghost-type as\l"
	.string "Gengar, but I think it will do.$"

PostBattle_Befools::
# 461 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Gengar use Hypnosis!$"
