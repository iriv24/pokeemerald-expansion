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
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge SootopolisCity_ChampHouse_EventScript_Danni_2
# 75 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_Greeting, MSGBOX_YESNO
SootopolisCity_ChampHouse_EventScript_Danni_1:
# 77 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleDanniPrompt
	end

SootopolisCity_ChampHouse_EventScript_Danni_2:
# 71 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_GreetingHard, MSGBOX_YESNO
	goto SootopolisCity_ChampHouse_EventScript_Danni_1


SootopolisCity_ChampHouse_EventScript_DanniRequestBattleAgain::
# 82 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_ReadyYet, MSGBOX_YESNO
# 83 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleDanniPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleDanniPrompt::
# 88 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleDanni
# 89 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineDanniBattle
# 90 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineDanniBattle::
# 95 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 96 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_ComeBackWhenReady, MSGBOX_DEFAULT
# 97 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleDanni::
# 102 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_YoureOn, MSGBOX_DEFAULT
# 103 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_DANNI, Danni_Outro
# 104 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge SootopolisCity_ChampHouse_EventScript_BattleDanni_1
# 110 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_DanniGiveGenesect
	return

SootopolisCity_ChampHouse_EventScript_BattleDanni_1:
	return


SootopolisCity_ChampHouse_EventScript_DanniDefeated::
# 117 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_Danni, MSGBOX_DEFAULT
# 118 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_DanniGiveGenesect::
# 123 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GENESECT
# 124 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_GENESECT, 50
# 125 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveGenesectParty
# 126 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveGenesectPC
# 127 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 128 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveGenesectParty::
# 133 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedGenesectFanfare
# 134 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 135 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainGenesect
# 136 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 137 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 138 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainGenesect
	end


SootopolisCity_ChampHouse_EventScript_ReceiveGenesectPC::
# 144 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedGenesectFanfare
# 145 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 146 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendGenesectToPC
# 147 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 148 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendGenesectToPC
	end


SootopolisCity_ChampHouse_EventScript_SendGenesectToPC::
# 154 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 155 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainGenesect
	end


SootopolisCity_ChampHouse_EventScript_ReceivedGenesectFanfare::
# 161 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 162 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedGenesect
# 163 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 164 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 165 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GENESECT
	return


SootopolisCity_ChampHouse_EventScript_ExplainGenesect::
# 171 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_ExplainGenesect, MSGBOX_DEFAULT
# 172 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_MastaJanes::
# 223 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lockall
# 224 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	applymovement LOCALID_MASTA_JANES, Common_Movement_FacePlayer
# 225 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_defeated TRAINER_MASTA_JANES, SootopolisCity_ChampHouse_EventScript_MastaJanesDefeated
# 226 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, SootopolisCity_ChampHouse_EventScript_MastaJanesRequestBattleAgain
# 227 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_Greeting, MSGBOX_YESNO
# 228 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleMastaJanesPrompt
	end


SootopolisCity_ChampHouse_EventScript_MastaJanesRequestBattleAgain::
# 233 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_ReadyYet, MSGBOX_YESNO
# 234 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleMastaJanesPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleMastaJanesPrompt::
# 239 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleMastaJanes
# 240 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineMastaJanesBattle
# 241 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineMastaJanesBattle::
# 246 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 247 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_ComeBackWhenReady, MSGBOX_DEFAULT
# 248 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleMastaJanes::
# 253 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_YoureOn, MSGBOX_DEFAULT
# 254 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_MASTA_JANES, MastaJanes_Outro
# 255 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_MastaJanesGiveDitto
	return


SootopolisCity_ChampHouse_EventScript_MastaJanesDefeated::
# 260 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_MastaJanes, MSGBOX_DEFAULT
# 261 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_MastaJanesGiveDitto::
# 266 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DITTO
# 267 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_DITTO, 50, isShiny = TRUE
# 268 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveDittoParty
# 269 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveDittoPC
# 270 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 271 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveDittoParty::
# 276 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedDittoFanfare
# 277 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 278 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainDitto
# 279 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 280 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 281 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainDitto
	end


SootopolisCity_ChampHouse_EventScript_ReceiveDittoPC::
# 286 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedDittoFanfare
# 287 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 288 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendDittoToPC
# 289 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 290 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendDittoToPC
	end


SootopolisCity_ChampHouse_EventScript_SendDittoToPC::
# 295 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 296 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainDitto
	end


SootopolisCity_ChampHouse_EventScript_ReceivedDittoFanfare::
# 301 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 302 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedDitto
# 303 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 304 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 305 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
	return


SootopolisCity_ChampHouse_EventScript_ExplainDitto::
# 310 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_ExplainDitto, MSGBOX_DEFAULT
# 311 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_Befools::
# 363 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lockall
# 364 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	applymovement LOCALID_BEFOOLS, Common_Movement_FacePlayer
# 365 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_defeated TRAINER_BEFOOLS, SootopolisCity_ChampHouse_EventScript_BefoolsDefeated
# 366 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, SootopolisCity_ChampHouse_EventScript_BefoolsRequestBattleAgain
# 367 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge SootopolisCity_ChampHouse_EventScript_Befools_2
# 373 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_Greeting, MSGBOX_YESNO
SootopolisCity_ChampHouse_EventScript_Befools_1:
# 375 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleBefoolsPrompt
	end

SootopolisCity_ChampHouse_EventScript_Befools_2:
# 369 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_GreetingHard, MSGBOX_YESNO
	goto SootopolisCity_ChampHouse_EventScript_Befools_1


SootopolisCity_ChampHouse_EventScript_BefoolsRequestBattleAgain::
# 380 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_ReadyYet, MSGBOX_YESNO
# 381 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleBefoolsPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleBefoolsPrompt::
# 386 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleBefools
# 387 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineBefoolsBattle
# 388 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineBefoolsBattle::
# 393 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 394 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_ComeBackWhenReady, MSGBOX_DEFAULT
# 395 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleBefools::
# 400 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_YoureOn, MSGBOX_DEFAULT
# 401 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_BEFOOLS, Befools_Outro
# 402 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge SootopolisCity_ChampHouse_EventScript_BattleBefools_1
# 408 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BefoolsGiveHoopa
	return

SootopolisCity_ChampHouse_EventScript_BattleBefools_1:
	return


SootopolisCity_ChampHouse_EventScript_BefoolsDefeated::
# 414 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_Befools, MSGBOX_DEFAULT
# 415 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_BefoolsGiveHoopa::
# 420 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HOOPA_CONFINED
# 421 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_HOOPA_CONFINED, 50
# 422 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveHoopaParty
# 423 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveHoopaPC
# 424 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 425 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveHoopaParty::
# 430 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedHoopaFanfare
# 431 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 432 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainHoopa
# 433 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 434 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 435 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainHoopa
	end


SootopolisCity_ChampHouse_EventScript_ReceiveHoopaPC::
# 440 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedHoopaFanfare
# 441 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 442 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendHoopaToPC
# 443 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 444 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendHoopaToPC
	end


SootopolisCity_ChampHouse_EventScript_SendHoopaToPC::
# 449 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 450 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainHoopa
	end


SootopolisCity_ChampHouse_EventScript_ReceivedHoopaFanfare::
# 455 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 456 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedHoopa
# 457 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 458 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 459 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HOOPA_CONFINED
	return


SootopolisCity_ChampHouse_EventScript_ExplainHoopa::
# 464 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_ExplainHoopa, MSGBOX_DEFAULT
# 465 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_Burak::
# 526 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lockall
# 527 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	applymovement LOCALID_BURAK, Common_Movement_FacePlayer
# 528 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_defeated TRAINER_BURAK, SootopolisCity_ChampHouse_EventScript_BurakDefeated
# 529 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, SootopolisCity_ChampHouse_EventScript_BurakRequestBattleAgain
# 530 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge SootopolisCity_ChampHouse_EventScript_Burak_2
# 536 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_Greeting, MSGBOX_YESNO
SootopolisCity_ChampHouse_EventScript_Burak_1:
# 538 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleBurakPrompt
	end

SootopolisCity_ChampHouse_EventScript_Burak_2:
# 532 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_GreetingHard, MSGBOX_YESNO
	goto SootopolisCity_ChampHouse_EventScript_Burak_1


SootopolisCity_ChampHouse_EventScript_BurakRequestBattleAgain::
# 543 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_ReadyYet, MSGBOX_YESNO
# 544 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleBurakPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleBurakPrompt::
# 549 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleBurak
# 550 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineBurakBattle
# 551 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineBurakBattle::
# 556 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 557 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_ComeBackWhenReady, MSGBOX_DEFAULT
# 558 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleBurak::
# 563 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_YoureOn, MSGBOX_DEFAULT
# 564 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_BURAK, Burak_Outro
# 565 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge SootopolisCity_ChampHouse_EventScript_BattleBurak_1
# 571 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BurakGiveVolcanion
	return

SootopolisCity_ChampHouse_EventScript_BattleBurak_1:
	return


SootopolisCity_ChampHouse_EventScript_BurakDefeated::
# 578 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_Burak, MSGBOX_DEFAULT
# 579 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_BurakGiveVolcanion::
# 584 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_VOLCANION
# 585 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_VOLCANION, 50
# 586 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveVolcanionParty
# 587 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveVolcanionPC
# 588 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 589 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveVolcanionParty::
# 594 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedVolcanionFanfare
# 595 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 596 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainVolcanion
# 597 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 598 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 599 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainVolcanion
	end


SootopolisCity_ChampHouse_EventScript_ReceiveVolcanionPC::
# 605 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedVolcanionFanfare
# 606 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 607 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendVolcanionToPC
# 608 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 609 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendVolcanionToPC
	end


SootopolisCity_ChampHouse_EventScript_SendVolcanionToPC::
# 615 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 616 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainVolcanion
	end


SootopolisCity_ChampHouse_EventScript_ReceivedVolcanionFanfare::
# 622 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 623 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedVolcanion
# 624 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 625 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 626 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VOLCANION
	return


SootopolisCity_ChampHouse_EventScript_ExplainVolcanion::
# 632 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_ExplainVolcanion, MSGBOX_DEFAULT
# 633 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


Danni_Greeting::
# 176 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Ello ello, trainer. Nice to see you’ve\n"
	.string "gotten this far. How bout a battle with\l"
	.string "a nuzlocke legend?\p"
	.string "Win here and you get a rad Mythical\n"
	.string "from me. You in?$"

Danni_GreetingHard::
# 184 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Ello ello, trainer. Nice to see you’ve\n"
	.string "gotten this far. How bout a battle with\l"
	.string "a nuzlocke legend?$"

Danni_ReadyYet::
# 190 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Ready yet?$"

Danni_YoureOn::
# 194 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "You'll never beat this squad!$"

Danni_ComeBackWhenReady::
# 198 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Didn't think so!$"

Danni_Outro::
# 202 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Huh. You defeated me. Kudos and\n"
	.string "congrats.$"

SootopolisCity_ChampHouse_Text_PlayerReceivedGenesect::
# 207 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER} received Genesect!$"

Danni_ExplainGenesect::
# 211 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "As promised, there's your Mythical.\n"
	.string "That one is pretty strong too, I'd say.$"

PostBattle_Danni::
# 216 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "I was the first player ever to nuzlocke\n"
	.string "this game! And, I did it deathless!\l"
	.string "How do you like that?$"

MastaJanes_Greeting::
# 315 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
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
# 331 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Are you ready now?$"

MastaJanes_YoureOn::
# 335 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "You're going down!$"

MastaJanes_ComeBackWhenReady::
# 339 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "You know where to find me if you change\n"
	.string "your mind.$"

MastaJanes_Outro::
# 344 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Wow, I didn't think I could lose.\n$"

SootopolisCity_ChampHouse_Text_PlayerReceivedDitto::
# 348 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER} received Ditto!$"

MastaJanes_ExplainDitto::
# 352 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Here's your shiny Ditto!\n"
	.string "Hope you can use it to get many more\l"
	.string "shiny Pokémon.$"

PostBattle_MastaJanes::
# 358 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "I'm still playing on MyBoy to this day.$"

Befools_Greeting::
# 469 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
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

Befools_GreetingHard::
# 482 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "I'm Befools, and I used my trusty\n"
	.string "Gengar here to put every single\l"
	.string "Pokémon in this game to sleep, and then\l"
	.string "knocked them out.\p"
	.string "If the creator ends up nerfing sleep\n"
	.string "even more in a future update, it will\l"
	.string "probably be my fault, sorry about that!\p"
	.string "So, do you want to battle?$"

Befools_ReadyYet::
# 493 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Ready for this snooze-fest?$"

Befools_YoureOn::
# 497 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "There is no escaping it. Give up.$"

Befools_ComeBackWhenReady::
# 501 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "You probably didn't have enough Chesto\n"
	.string "Berries equipped anyway.$"

Befools_Outro::
# 506 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Even through all my Hypnosis attempts!\n$"

SootopolisCity_ChampHouse_Text_PlayerReceivedHoopa::
# 510 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER} received Hoopa!$"

Befools_ExplainHoopa::
# 514 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "As promised, there's your Mythical!\n"
	.string "It's not as good a Ghost-type as\l"
	.string "Gengar, but I think it will do.$"

PostBattle_Befools::
# 520 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Gengar use Hypnosis!$"

Burak_Greeting::
# 637 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
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

Burak_GreetingHard::
# 650 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Come on Spidops, you're so close to\n"
	.string "OHKO-ing that Reshiram…\p"
	.string "Oh, hello, I was just preparing my\n"
	.string "strategy for the Elite 4.\p"
	.string "I think Spidops here is going to pick up\n"
	.string "double-digit frags for this run.\p"
	.string "Anyway, you think you can defeat\n"
	.string "Spidopsinho… I mean Bashi-…\l"
	.string "Nevermind that…\p"
	.string "Ready to fight?$"

Burak_ReadyYet::
# 663 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Are you ready?\n"
	.string "I'll tell Spidops to go easy on you.$"

Burak_YoureOn::
# 668 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "It was all a ploy, GO MEGA APE!!!$"

Burak_ComeBackWhenReady::
# 672 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "That's fine, I'll be here training\n"
	.string "Spidops.$"

Burak_Outro::
# 677 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Well at least I'm still first on\n"
	.string "THE SHEET.$"

SootopolisCity_ChampHouse_Text_PlayerReceivedVolcanion::
# 682 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER} received Volcanion!$"

Burak_ExplainVolcanion::
# 686 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "There you go! It's no Spidops, but I\n"
	.string "think it'll do just fine.$"

PostBattle_Burak::
# 691 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "Good As Spidops.\n"
	.string "Stats irrelevant.$"
