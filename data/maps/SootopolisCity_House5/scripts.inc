# 1 "data/maps/SootopolisCity_House5/scripts.pory"

# 2 "data/maps/SootopolisCity_House5/scripts.pory"
.set LOCALID_NATN, 1
# 3 "data/maps/SootopolisCity_House5/scripts.pory"
.set LOCALID_MASTER_POUCINE, 3
# 4 "data/maps/SootopolisCity_House5/scripts.pory"
.set LOCALID_OBLIVION_WING, 5
# 5 "data/maps/SootopolisCity_House5/scripts.pory"

# 6 "data/maps/SootopolisCity_House5/scripts.pory"
SootopolisCity_House5_MapScripts::
# 7 "data/maps/SootopolisCity_House5/scripts.pory"
	.byte 0
# 8 "data/maps/SootopolisCity_House5/scripts.pory"

# 9 "data/maps/SootopolisCity_House5/scripts.pory"
SootopolisCity_House5_EventScript_Kingambit::
# 10 "data/maps/SootopolisCity_House5/scripts.pory"
	lock
# 11 "data/maps/SootopolisCity_House5/scripts.pory"
	faceplayer
# 12 "data/maps/SootopolisCity_House5/scripts.pory"
	waitse
# 13 "data/maps/SootopolisCity_House5/scripts.pory"
	playmoncry SPECIES_KINGAMBIT, CRY_MODE_NORMAL
# 14 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox SootopolisCity_House5_Text_Kingambit, MSGBOX_DEFAULT
# 15 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmoncry
# 16 "data/maps/SootopolisCity_House5/scripts.pory"
	release
# 17 "data/maps/SootopolisCity_House5/scripts.pory"
	end
# 18 "data/maps/SootopolisCity_House5/scripts.pory"

# 19 "data/maps/SootopolisCity_House5/scripts.pory"
SootopolisCity_House5_Text_Kingambit:
# 20 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Kingambit: Uuhuuhuuhuuahahuuhu!$"
# 21 "data/maps/SootopolisCity_House5/scripts.pory"

# 22 "data/maps/SootopolisCity_House5/scripts.pory"

# 23 "data/maps/SootopolisCity_House5/scripts.pory"
SootopolisCity_House5_EventScript_Dragapult::
# 24 "data/maps/SootopolisCity_House5/scripts.pory"
	lock
# 25 "data/maps/SootopolisCity_House5/scripts.pory"
	faceplayer
# 26 "data/maps/SootopolisCity_House5/scripts.pory"
	waitse
# 27 "data/maps/SootopolisCity_House5/scripts.pory"
	playmoncry SPECIES_DRAGAPULT, CRY_MODE_NORMAL
# 28 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox SootopolisCity_House5_Text_Dragapult, MSGBOX_DEFAULT
# 29 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmoncry
# 30 "data/maps/SootopolisCity_House5/scripts.pory"
	release
# 31 "data/maps/SootopolisCity_House5/scripts.pory"
	end
# 32 "data/maps/SootopolisCity_House5/scripts.pory"

# 33 "data/maps/SootopolisCity_House5/scripts.pory"
SootopolisCity_House5_Text_Dragapult:
# 34 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Dragapult: Huuuuuuureeeeeeee!$"
# 35 "data/maps/SootopolisCity_House5/scripts.pory"

# 36 "data/maps/SootopolisCity_House5/scripts.pory"

# 37 "data/maps/SootopolisCity_House5/scripts.pory"
SootopolisCity_House5_EventScript_Greninja::
# 38 "data/maps/SootopolisCity_House5/scripts.pory"
	lock
# 39 "data/maps/SootopolisCity_House5/scripts.pory"
	faceplayer
# 40 "data/maps/SootopolisCity_House5/scripts.pory"
	waitse
# 41 "data/maps/SootopolisCity_House5/scripts.pory"
	playmoncry SPECIES_GRENINJA, CRY_MODE_NORMAL
# 42 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox SootopolisCity_House5_Text_Greninja, MSGBOX_DEFAULT
# 43 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmoncry
# 44 "data/maps/SootopolisCity_House5/scripts.pory"
	release
# 45 "data/maps/SootopolisCity_House5/scripts.pory"
	end
# 46 "data/maps/SootopolisCity_House5/scripts.pory"

# 47 "data/maps/SootopolisCity_House5/scripts.pory"
SootopolisCity_House5_Text_Greninja:
# 48 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Greninja: Rruuueelelel!$"

SootopolisCity_House5_EventScript_Natn::
# 53 "data/maps/SootopolisCity_House5/scripts.pory"
	lockall
# 54 "data/maps/SootopolisCity_House5/scripts.pory"
	applymovement LOCALID_NATN, Common_Movement_FacePlayer
# 55 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_defeated TRAINER_NATN, SootopolisCity_House5_EventScript_NatnDefeated
# 56 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_set FLAG_TEMP_1, SootopolisCity_House5_EventScript_NatnRequestBattleAgain
# 57 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_Greeting, MSGBOX_YESNO
# 58 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleNatnPrompt
	end


SootopolisCity_House5_EventScript_NatnRequestBattleAgain::
# 63 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_ReadyYet, MSGBOX_YESNO
# 64 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleNatnPrompt
	end


SootopolisCity_House5_EventScript_BattleNatnPrompt::
# 69 "data/maps/SootopolisCity_House5/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_House5_EventScript_BattleNatn
# 70 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_DeclineNatnBattle
# 71 "data/maps/SootopolisCity_House5/scripts.pory"
	closemessage
	end


SootopolisCity_House5_EventScript_DeclineNatnBattle::
# 76 "data/maps/SootopolisCity_House5/scripts.pory"
	setflag FLAG_TEMP_1
# 77 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_ComeBackWhenReady, MSGBOX_DEFAULT
# 78 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_BattleNatn::
# 83 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_YoureOn, MSGBOX_DEFAULT
# 84 "data/maps/SootopolisCity_House5/scripts.pory"
	trainerbattle_no_intro TRAINER_NATN, Natn_Outro
# 85 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_NatnGiveMeloetta
	return


SootopolisCity_House5_EventScript_NatnDefeated::
# 90 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox PostBattle_Natn, MSGBOX_DEFAULT
# 91 "data/maps/SootopolisCity_House5/scripts.pory"
	releaseall
	end


SootopolisCity_House5_EventScript_NatnGiveMeloetta::
# 96 "data/maps/SootopolisCity_House5/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MELOETTA_ARIA
# 97 "data/maps/SootopolisCity_House5/scripts.pory"
	givemonrandom SPECIES_MELOETTA_ARIA, 50
# 98 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_House5_EventScript_ReceiveMeloettaParty
# 99 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_House5_EventScript_ReceiveMeloettaPC
# 100 "data/maps/SootopolisCity_House5/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 101 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_ReceiveMeloettaParty::
# 106 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedMeloettaFanfare
# 107 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 108 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_ExplainMeloetta
# 109 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 110 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 111 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainMeloetta
	end


SootopolisCity_House5_EventScript_ReceiveMeloettaPC::
# 116 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedMeloettaFanfare
# 117 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 118 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_SendMeloettaToPC
# 119 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 120 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_SendMeloettaToPC
	end


SootopolisCity_House5_EventScript_SendMeloettaToPC::
# 125 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_TransferredToPC
# 126 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainMeloetta
	end


SootopolisCity_House5_EventScript_ReceivedMeloettaFanfare::
# 131 "data/maps/SootopolisCity_House5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 132 "data/maps/SootopolisCity_House5/scripts.pory"
	message SootopolisCity_House5_Text_PlayerReceivedMeloetta
# 133 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmessage
# 134 "data/maps/SootopolisCity_House5/scripts.pory"
	waitfanfare
# 135 "data/maps/SootopolisCity_House5/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MELOETTA_ARIA
	return


SootopolisCity_House5_EventScript_ExplainMeloetta::
# 140 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_ExplainMeloetta, MSGBOX_DEFAULT
# 141 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_MasterPoucine::
# 194 "data/maps/SootopolisCity_House5/scripts.pory"
	lockall
# 195 "data/maps/SootopolisCity_House5/scripts.pory"
	applymovement LOCALID_MASTER_POUCINE, Common_Movement_FacePlayer
# 196 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_defeated TRAINER_MASTER_POUCINE, SootopolisCity_House5_EventScript_MasterPoucineDefeated
# 197 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_set FLAG_TEMP_2, SootopolisCity_House5_EventScript_MasterPoucineRequestBattleAgain
# 198 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_Greeting, MSGBOX_YESNO
# 199 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleMasterPoucinePrompt
	end


SootopolisCity_House5_EventScript_MasterPoucineRequestBattleAgain::
# 204 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_ReadyYet, MSGBOX_YESNO
# 205 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleMasterPoucinePrompt
	end


SootopolisCity_House5_EventScript_BattleMasterPoucinePrompt::
# 210 "data/maps/SootopolisCity_House5/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_House5_EventScript_BattleMasterPoucine
# 211 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_DeclineMasterPoucineBattle
# 212 "data/maps/SootopolisCity_House5/scripts.pory"
	closemessage
	end


SootopolisCity_House5_EventScript_DeclineMasterPoucineBattle::
# 217 "data/maps/SootopolisCity_House5/scripts.pory"
	setflag FLAG_TEMP_2
# 218 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_ComeBackWhenReady, MSGBOX_DEFAULT
# 219 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_BattleMasterPoucine::
# 224 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_YoureOn, MSGBOX_DEFAULT
# 225 "data/maps/SootopolisCity_House5/scripts.pory"
	trainerbattle_no_intro TRAINER_MASTER_POUCINE, MasterPoucine_Outro
# 226 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_MasterPoucineGiveMarshadow
	return


SootopolisCity_House5_EventScript_MasterPoucineDefeated::
# 231 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox PostBattle_MasterPoucine, MSGBOX_DEFAULT
# 232 "data/maps/SootopolisCity_House5/scripts.pory"
	releaseall
	end


SootopolisCity_House5_EventScript_MasterPoucineGiveMarshadow::
# 237 "data/maps/SootopolisCity_House5/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MARSHADOW
# 238 "data/maps/SootopolisCity_House5/scripts.pory"
	givemonrandom SPECIES_MARSHADOW, 50
# 239 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_House5_EventScript_ReceiveMarshadowParty
# 240 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_House5_EventScript_ReceiveMarshadowPC
# 241 "data/maps/SootopolisCity_House5/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 242 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_ReceiveMarshadowParty::
# 247 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedMarshadowFanfare
# 248 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 249 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_ExplainMarshadow
# 250 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 251 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 252 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainMarshadow
	end


SootopolisCity_House5_EventScript_ReceiveMarshadowPC::
# 257 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedMarshadowFanfare
# 258 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 259 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_SendMarshadowToPC
# 260 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 261 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_SendMarshadowToPC
	end


SootopolisCity_House5_EventScript_SendMarshadowToPC::
# 266 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_TransferredToPC
# 267 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainMarshadow
	end


SootopolisCity_House5_EventScript_ReceivedMarshadowFanfare::
# 272 "data/maps/SootopolisCity_House5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 273 "data/maps/SootopolisCity_House5/scripts.pory"
	message SootopolisCity_House5_Text_PlayerReceivedMarshadow
# 274 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmessage
# 275 "data/maps/SootopolisCity_House5/scripts.pory"
	waitfanfare
# 276 "data/maps/SootopolisCity_House5/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MARSHADOW
	return


SootopolisCity_House5_EventScript_ExplainMarshadow::
# 281 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_ExplainMarshadow, MSGBOX_DEFAULT
# 282 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_OblivionWing::
# 333 "data/maps/SootopolisCity_House5/scripts.pory"
	lockall
# 334 "data/maps/SootopolisCity_House5/scripts.pory"
	applymovement LOCALID_OBLIVION_WING, Common_Movement_FacePlayer
# 335 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_defeated TRAINER_OBLIVION_WING, SootopolisCity_House5_EventScript_OblivionWingDefeated
# 336 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_set FLAG_TEMP_3, SootopolisCity_House5_EventScript_OblivionWingRequestBattleAgain
# 337 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_Greeting, MSGBOX_YESNO
# 338 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleOblivionWingPrompt
	end


SootopolisCity_House5_EventScript_OblivionWingRequestBattleAgain::
# 343 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_ReadyYet, MSGBOX_YESNO
# 344 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleOblivionWingPrompt
	end


SootopolisCity_House5_EventScript_BattleOblivionWingPrompt::
# 349 "data/maps/SootopolisCity_House5/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_House5_EventScript_BattleOblivionWing
# 350 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_DeclineOblivionWingBattle
# 351 "data/maps/SootopolisCity_House5/scripts.pory"
	closemessage
	end


SootopolisCity_House5_EventScript_DeclineOblivionWingBattle::
# 356 "data/maps/SootopolisCity_House5/scripts.pory"
	setflag FLAG_TEMP_3
# 357 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_ComeBackWhenReady, MSGBOX_DEFAULT
# 358 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_BattleOblivionWing::
# 363 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_YoureOn, MSGBOX_DEFAULT
# 364 "data/maps/SootopolisCity_House5/scripts.pory"
	trainerbattle_no_intro TRAINER_OBLIVION_WING, OblivionWing_Outro
# 365 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_OblivionWingGiveZarude
	return


SootopolisCity_House5_EventScript_OblivionWingDefeated::
# 370 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox PostBattle_OblivionWing, MSGBOX_DEFAULT
# 371 "data/maps/SootopolisCity_House5/scripts.pory"
	releaseall
	end


SootopolisCity_House5_EventScript_OblivionWingGiveZarude::
# 376 "data/maps/SootopolisCity_House5/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZARUDE
# 377 "data/maps/SootopolisCity_House5/scripts.pory"
	givemonrandom SPECIES_ZARUDE, 50
# 378 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_House5_EventScript_ReceiveZarudeParty
# 379 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_House5_EventScript_ReceiveZarudePC
# 380 "data/maps/SootopolisCity_House5/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 381 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_ReceiveZarudeParty::
# 386 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedZarudeFanfare
# 387 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 388 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_ExplainZarude
# 389 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 390 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 391 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainZarude
	end


SootopolisCity_House5_EventScript_ReceiveZarudePC::
# 396 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedZarudeFanfare
# 397 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 398 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_SendZarudeToPC
# 399 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 400 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_SendZarudeToPC
	end


SootopolisCity_House5_EventScript_SendZarudeToPC::
# 405 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_TransferredToPC
# 406 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainZarude
	end


SootopolisCity_House5_EventScript_ReceivedZarudeFanfare::
# 411 "data/maps/SootopolisCity_House5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 412 "data/maps/SootopolisCity_House5/scripts.pory"
	message SootopolisCity_House5_Text_PlayerReceivedZarude
# 413 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmessage
# 414 "data/maps/SootopolisCity_House5/scripts.pory"
	waitfanfare
# 415 "data/maps/SootopolisCity_House5/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZARUDE
	return


SootopolisCity_House5_EventScript_ExplainZarude::
# 420 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_ExplainZarude, MSGBOX_DEFAULT
# 421 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


Natn_Greeting::
# 145 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Hey, my name's Natn, and I was the first\n"
	.string "person to beat this game in Normal mode\l"
	.string "when it released.\p"
	.string "I didn't really do a lot of talking in the\n"
	.string "early days, I just showed up, blitzed\l"
	.string "through the game, then posted my Hall\l"
	.string "of Fame team.\p"
	.string "My rules are the same, if you can beat\n"
	.string "me, I'll give you a Mythical.\p"
	.string "Interested in battling?$"

Natn_ReadyYet::
# 158 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Want to battle now?$"

Natn_YoureOn::
# 162 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Let's do this.$"

Natn_ComeBackWhenReady::
# 166 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Let me know if you change your mind.$"

Natn_Outro::
# 170 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Not bad at all.\n$"

SootopolisCity_House5_Text_PlayerReceivedMeloetta::
# 174 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "{PLAYER} received Meloetta!$"

Natn_ExplainMeloetta::
# 178 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "There's your Mythical.\n"
	.string "I'm sure you know it's gimmick by now,\l"
	.string "but if you use its signature move, Relic\l"
	.string "Song, you can change forms in battle.\p"
	.string "Really makes you wonder how Maylene\n"
	.string "got one that started in Pirouette form.$"

PostBattle_Natn::
# 187 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Honestly, this game was pretty easy.\n"
	.string "I'll be here waiting for Hardcore mode.$"

MasterPoucine_Greeting::
# 286 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Hi there! I'm MasterPoucine, and I was\n"
	.string "the third person to beat this game once\l"
	.string "it released, and the first to do so\l"
	.string "using the mascot, Empoleon!\p"
	.string "I am also a content creator, so check\n"
	.string "me out on YouTube!\p"
	.string "Just like the other Champions, if you\n"
	.string "can beat me, I'll give you a Mythical.\p"
	.string "Do you want to battle me?$"

MasterPoucine_ReadyYet::
# 298 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Do you want to battle now?$"

MasterPoucine_YoureOn::
# 302 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "You're on!$"

MasterPoucine_ComeBackWhenReady::
# 306 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Come back if you decide you want\n"
	.string "to battle.$"

MasterPoucine_Outro::
# 311 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Wow, that was an impressive battle!$"

SootopolisCity_House5_Text_PlayerReceivedMarshadow::
# 315 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "{PLAYER} received Marshadow!$"

MasterPoucine_ExplainMarshadow::
# 319 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Now that's a good reward! Marshadow is\n"
	.string "definitely one of the strongest\l"
	.string "Mythicals, so I hope you use it well.$"

PostBattle_MasterPoucine::
# 325 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "I can't wait for a harder game mode to\n"
	.string "come out so I can speed through that\l"
	.string "one too!$"

OblivionWing_Greeting::
# 425 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Hello, I'm OblivionWing, and I was the\n"
	.string "first person ever to beat this game\l"
	.string "after it released.\p"
	.string "I sped through the game on Easy mode\n"
	.string "and finished it just one day after it\l"
	.string "came out!\p"
	.string "If you can beat me, I'll give you a\n"
	.string "Mythical, just like everyone else.\p"
	.string "Does that sound good to you?$"

OblivionWing_ReadyYet::
# 437 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Ready to battle?$"

OblivionWing_YoureOn::
# 441 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Good luck, you'll need it!$"

OblivionWing_ComeBackWhenReady::
# 445 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "You know where to find me if you change\n"
	.string "your mind.$"

OblivionWing_Outro::
# 450 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Not bad! If you were a little faster,\n"
	.string "maybe you could've been the first to\l"
	.string "beat this game!$"

SootopolisCity_House5_Text_PlayerReceivedZarude::
# 456 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "{PLAYER} received Zarude!$"

OblivionWing_ExplainZarude::
# 460 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "There you go, a Mythical for you.\n"
	.string "I think that's a pretty good one too, if\l"
	.string "I do say so myself.$"

PostBattle_OblivionWing::
# 466 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Best of luck with the rest of the game!$"
