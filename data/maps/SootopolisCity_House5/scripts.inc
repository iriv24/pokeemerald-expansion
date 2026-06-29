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
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge SootopolisCity_House5_EventScript_Natn_2
# 63 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_Greeting, MSGBOX_YESNO
SootopolisCity_House5_EventScript_Natn_1:
# 65 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleNatnPrompt
	end

SootopolisCity_House5_EventScript_Natn_2:
# 59 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_GreetingHard, MSGBOX_YESNO
	goto SootopolisCity_House5_EventScript_Natn_1


SootopolisCity_House5_EventScript_NatnRequestBattleAgain::
# 70 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_ReadyYet, MSGBOX_YESNO
# 71 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleNatnPrompt
	end


SootopolisCity_House5_EventScript_BattleNatnPrompt::
# 76 "data/maps/SootopolisCity_House5/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_House5_EventScript_BattleNatn
# 77 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_DeclineNatnBattle
# 78 "data/maps/SootopolisCity_House5/scripts.pory"
	closemessage
	end


SootopolisCity_House5_EventScript_DeclineNatnBattle::
# 83 "data/maps/SootopolisCity_House5/scripts.pory"
	setflag FLAG_TEMP_1
# 84 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_ComeBackWhenReady, MSGBOX_DEFAULT
# 85 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_BattleNatn::
# 90 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_YoureOn, MSGBOX_DEFAULT
# 91 "data/maps/SootopolisCity_House5/scripts.pory"
	trainerbattle_no_intro TRAINER_NATN, Natn_Outro
# 92 "data/maps/SootopolisCity_House5/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge SootopolisCity_House5_EventScript_BattleNatn_1
# 98 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_NatnGiveMeloetta
	return

SootopolisCity_House5_EventScript_BattleNatn_1:
	return


SootopolisCity_House5_EventScript_NatnDefeated::
# 104 "data/maps/SootopolisCity_House5/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge SootopolisCity_House5_EventScript_NatnDefeated_2
# 110 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox PostBattle_Natn, MSGBOX_DEFAULT
SootopolisCity_House5_EventScript_NatnDefeated_1:
# 112 "data/maps/SootopolisCity_House5/scripts.pory"
	releaseall
	end

SootopolisCity_House5_EventScript_NatnDefeated_2:
# 106 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox PostBattle_NatnHard, MSGBOX_DEFAULT
	goto SootopolisCity_House5_EventScript_NatnDefeated_1


SootopolisCity_House5_EventScript_NatnGiveMeloetta::
# 117 "data/maps/SootopolisCity_House5/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MELOETTA_ARIA
# 118 "data/maps/SootopolisCity_House5/scripts.pory"
	givemonrandom SPECIES_MELOETTA_ARIA, 50
# 119 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_House5_EventScript_ReceiveMeloettaParty
# 120 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_House5_EventScript_ReceiveMeloettaPC
# 121 "data/maps/SootopolisCity_House5/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 122 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_ReceiveMeloettaParty::
# 127 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedMeloettaFanfare
# 128 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 129 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_ExplainMeloetta
# 130 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 131 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 132 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainMeloetta
	end


SootopolisCity_House5_EventScript_ReceiveMeloettaPC::
# 137 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedMeloettaFanfare
# 138 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 139 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_SendMeloettaToPC
# 140 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 141 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_SendMeloettaToPC
	end


SootopolisCity_House5_EventScript_SendMeloettaToPC::
# 146 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_TransferredToPC
# 147 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainMeloetta
	end


SootopolisCity_House5_EventScript_ReceivedMeloettaFanfare::
# 152 "data/maps/SootopolisCity_House5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 153 "data/maps/SootopolisCity_House5/scripts.pory"
	message SootopolisCity_House5_Text_PlayerReceivedMeloetta
# 154 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmessage
# 155 "data/maps/SootopolisCity_House5/scripts.pory"
	waitfanfare
# 156 "data/maps/SootopolisCity_House5/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MELOETTA_ARIA
	return


SootopolisCity_House5_EventScript_ExplainMeloetta::
# 161 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_ExplainMeloetta, MSGBOX_DEFAULT
# 162 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_MasterPoucine::
# 231 "data/maps/SootopolisCity_House5/scripts.pory"
	lockall
# 232 "data/maps/SootopolisCity_House5/scripts.pory"
	applymovement LOCALID_MASTER_POUCINE, Common_Movement_FacePlayer
# 233 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_defeated TRAINER_MASTER_POUCINE, SootopolisCity_House5_EventScript_MasterPoucineDefeated
# 234 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_set FLAG_TEMP_2, SootopolisCity_House5_EventScript_MasterPoucineRequestBattleAgain
# 235 "data/maps/SootopolisCity_House5/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge SootopolisCity_House5_EventScript_MasterPoucine_2
# 241 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_Greeting, MSGBOX_YESNO
SootopolisCity_House5_EventScript_MasterPoucine_1:
# 243 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleMasterPoucinePrompt
	end

SootopolisCity_House5_EventScript_MasterPoucine_2:
# 237 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_GreetingHard, MSGBOX_YESNO
	goto SootopolisCity_House5_EventScript_MasterPoucine_1


SootopolisCity_House5_EventScript_MasterPoucineRequestBattleAgain::
# 248 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_ReadyYet, MSGBOX_YESNO
# 249 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleMasterPoucinePrompt
	end


SootopolisCity_House5_EventScript_BattleMasterPoucinePrompt::
# 254 "data/maps/SootopolisCity_House5/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_House5_EventScript_BattleMasterPoucine
# 255 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_DeclineMasterPoucineBattle
# 256 "data/maps/SootopolisCity_House5/scripts.pory"
	closemessage
	end


SootopolisCity_House5_EventScript_DeclineMasterPoucineBattle::
# 261 "data/maps/SootopolisCity_House5/scripts.pory"
	setflag FLAG_TEMP_2
# 262 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_ComeBackWhenReady, MSGBOX_DEFAULT
# 263 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_BattleMasterPoucine::
# 268 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_YoureOn, MSGBOX_DEFAULT
# 269 "data/maps/SootopolisCity_House5/scripts.pory"
	trainerbattle_no_intro TRAINER_MASTER_POUCINE, MasterPoucine_Outro
# 270 "data/maps/SootopolisCity_House5/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge SootopolisCity_House5_EventScript_BattleMasterPoucine_1
# 276 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_MasterPoucineGiveMarshadow
	return

SootopolisCity_House5_EventScript_BattleMasterPoucine_1:
	return


SootopolisCity_House5_EventScript_MasterPoucineDefeated::
# 282 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox PostBattle_MasterPoucine, MSGBOX_DEFAULT
# 283 "data/maps/SootopolisCity_House5/scripts.pory"
	releaseall
	end


SootopolisCity_House5_EventScript_MasterPoucineGiveMarshadow::
# 288 "data/maps/SootopolisCity_House5/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MARSHADOW
# 289 "data/maps/SootopolisCity_House5/scripts.pory"
	givemonrandom SPECIES_MARSHADOW, 50
# 290 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_House5_EventScript_ReceiveMarshadowParty
# 291 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_House5_EventScript_ReceiveMarshadowPC
# 292 "data/maps/SootopolisCity_House5/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 293 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_ReceiveMarshadowParty::
# 298 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedMarshadowFanfare
# 299 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 300 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_ExplainMarshadow
# 301 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 302 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 303 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainMarshadow
	end


SootopolisCity_House5_EventScript_ReceiveMarshadowPC::
# 308 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedMarshadowFanfare
# 309 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 310 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_SendMarshadowToPC
# 311 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 312 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_SendMarshadowToPC
	end


SootopolisCity_House5_EventScript_SendMarshadowToPC::
# 317 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_TransferredToPC
# 318 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainMarshadow
	end


SootopolisCity_House5_EventScript_ReceivedMarshadowFanfare::
# 323 "data/maps/SootopolisCity_House5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 324 "data/maps/SootopolisCity_House5/scripts.pory"
	message SootopolisCity_House5_Text_PlayerReceivedMarshadow
# 325 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmessage
# 326 "data/maps/SootopolisCity_House5/scripts.pory"
	waitfanfare
# 327 "data/maps/SootopolisCity_House5/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MARSHADOW
	return


SootopolisCity_House5_EventScript_ExplainMarshadow::
# 332 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_ExplainMarshadow, MSGBOX_DEFAULT
# 333 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_OblivionWing::
# 394 "data/maps/SootopolisCity_House5/scripts.pory"
	lockall
# 395 "data/maps/SootopolisCity_House5/scripts.pory"
	applymovement LOCALID_OBLIVION_WING, Common_Movement_FacePlayer
# 396 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_defeated TRAINER_OBLIVION_WING, SootopolisCity_House5_EventScript_OblivionWingDefeated
# 397 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_set FLAG_TEMP_3, SootopolisCity_House5_EventScript_OblivionWingRequestBattleAgain
# 398 "data/maps/SootopolisCity_House5/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge SootopolisCity_House5_EventScript_OblivionWing_2
# 404 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_Greeting, MSGBOX_YESNO
SootopolisCity_House5_EventScript_OblivionWing_1:
# 406 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleOblivionWingPrompt
	end

SootopolisCity_House5_EventScript_OblivionWing_2:
# 400 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_GreetingHard, MSGBOX_YESNO
	goto SootopolisCity_House5_EventScript_OblivionWing_1


SootopolisCity_House5_EventScript_OblivionWingRequestBattleAgain::
# 411 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_ReadyYet, MSGBOX_YESNO
# 412 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleOblivionWingPrompt
	end


SootopolisCity_House5_EventScript_BattleOblivionWingPrompt::
# 417 "data/maps/SootopolisCity_House5/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_House5_EventScript_BattleOblivionWing
# 418 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_DeclineOblivionWingBattle
# 419 "data/maps/SootopolisCity_House5/scripts.pory"
	closemessage
	end


SootopolisCity_House5_EventScript_DeclineOblivionWingBattle::
# 424 "data/maps/SootopolisCity_House5/scripts.pory"
	setflag FLAG_TEMP_3
# 425 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_ComeBackWhenReady, MSGBOX_DEFAULT
# 426 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_BattleOblivionWing::
# 431 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_YoureOn, MSGBOX_DEFAULT
# 432 "data/maps/SootopolisCity_House5/scripts.pory"
	trainerbattle_no_intro TRAINER_OBLIVION_WING, OblivionWing_Outro
# 433 "data/maps/SootopolisCity_House5/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge SootopolisCity_House5_EventScript_BattleOblivionWing_1
# 439 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_OblivionWingGiveZarude
	return

SootopolisCity_House5_EventScript_BattleOblivionWing_1:
	return


SootopolisCity_House5_EventScript_OblivionWingDefeated::
# 445 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox PostBattle_OblivionWing, MSGBOX_DEFAULT
# 446 "data/maps/SootopolisCity_House5/scripts.pory"
	releaseall
	end


SootopolisCity_House5_EventScript_OblivionWingGiveZarude::
# 451 "data/maps/SootopolisCity_House5/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZARUDE
# 452 "data/maps/SootopolisCity_House5/scripts.pory"
	givemonrandom SPECIES_ZARUDE, 50
# 453 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_House5_EventScript_ReceiveZarudeParty
# 454 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_House5_EventScript_ReceiveZarudePC
# 455 "data/maps/SootopolisCity_House5/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 456 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_ReceiveZarudeParty::
# 461 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedZarudeFanfare
# 462 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 463 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_ExplainZarude
# 464 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 465 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 466 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainZarude
	end


SootopolisCity_House5_EventScript_ReceiveZarudePC::
# 471 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedZarudeFanfare
# 472 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 473 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_SendZarudeToPC
# 474 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 475 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_SendZarudeToPC
	end


SootopolisCity_House5_EventScript_SendZarudeToPC::
# 480 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_TransferredToPC
# 481 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainZarude
	end


SootopolisCity_House5_EventScript_ReceivedZarudeFanfare::
# 486 "data/maps/SootopolisCity_House5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 487 "data/maps/SootopolisCity_House5/scripts.pory"
	message SootopolisCity_House5_Text_PlayerReceivedZarude
# 488 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmessage
# 489 "data/maps/SootopolisCity_House5/scripts.pory"
	waitfanfare
# 490 "data/maps/SootopolisCity_House5/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZARUDE
	return


SootopolisCity_House5_EventScript_ExplainZarude::
# 495 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_ExplainZarude, MSGBOX_DEFAULT
# 496 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


Natn_Greeting::
# 166 "data/maps/SootopolisCity_House5/scripts.pory"
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

Natn_GreetingHard::
# 179 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Hey, my name's Natn, and I was the first\n"
	.string "person to beat this game in Normal mode\l"
	.string "when it released.\p"
	.string "I didn't really do a lot of talking in the\n"
	.string "early days, I just showed up, blitzed\l"
	.string "through the game, then posted my Hall\l"
	.string "of Fame team.\p"
	.string "Interested in battling?$"

Natn_ReadyYet::
# 190 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Want to battle now?$"

Natn_YoureOn::
# 194 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Let's do this.$"

Natn_ComeBackWhenReady::
# 198 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Let me know if you change your mind.$"

Natn_Outro::
# 202 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Not bad at all.\n$"

SootopolisCity_House5_Text_PlayerReceivedMeloetta::
# 206 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "{PLAYER} received Meloetta!$"

Natn_ExplainMeloetta::
# 210 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "There's your Mythical.\n"
	.string "I'm sure you know it's gimmick by now,\l"
	.string "but if you use its signature move, Relic\l"
	.string "Song, you can change forms in battle.\p"
	.string "Really makes you wonder how Maylene\n"
	.string "got one that started in Pirouette form.$"

PostBattle_Natn::
# 219 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Honestly, this game was pretty easy.\n"
	.string "I'll be here waiting for Hardcore mode.$"

PostBattle_NatnHard::
# 224 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Honestly, this game was pretty easy.\n"
	.string "Imagine if you were on normal mode.$"

MasterPoucine_Greeting::
# 337 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Hi there! I'm MasterPoucine, and I was\n"
	.string "the third person to beat this game once\l"
	.string "it released, and the first to do so\l"
	.string "using the mascot, Empoleon!\p"
	.string "I am also a content creator, so check\n"
	.string "me out on YouTube!\p"
	.string "Just like the other Champions, if you\n"
	.string "can beat me, I'll give you a Mythical.\p"
	.string "Do you want to battle me?$"

MasterPoucine_GreetingHard::
# 349 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Hi there! I'm MasterPoucine, and I was\n"
	.string "the third person to beat this game once\l"
	.string "it released, and the first to do so\l"
	.string "using the mascot, Empoleon!\p"
	.string "I am also a content creator, so check\n"
	.string "me out on YouTube!\p"
	.string "Do you want to battle me?$"

MasterPoucine_ReadyYet::
# 359 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Do you want to battle now?$"

MasterPoucine_YoureOn::
# 363 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "You're on!$"

MasterPoucine_ComeBackWhenReady::
# 367 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Come back if you decide you want\n"
	.string "to battle.$"

MasterPoucine_Outro::
# 372 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Wow, that was an impressive battle!$"

SootopolisCity_House5_Text_PlayerReceivedMarshadow::
# 376 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "{PLAYER} received Marshadow!$"

MasterPoucine_ExplainMarshadow::
# 380 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Now that's a good reward! Marshadow is\n"
	.string "definitely one of the strongest\l"
	.string "Mythicals, so I hope you use it well.$"

PostBattle_MasterPoucine::
# 386 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "I can't wait for a harder game mode to\n"
	.string "come out so I can speed through that\l"
	.string "one too!$"

OblivionWing_Greeting::
# 500 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Hello, I'm OblivionWing, and I was the\n"
	.string "first person ever to beat this game\l"
	.string "after it released.\p"
	.string "I sped through the game on Easy mode\n"
	.string "and finished it just one day after it\l"
	.string "came out!\p"
	.string "If you can beat me, I'll give you a\n"
	.string "Mythical, just like everyone else.\p"
	.string "Does that sound good to you?$"

OblivionWing_GreetingHard::
# 512 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Hello, I'm OblivionWing, and I was the\n"
	.string "first person ever to beat this game\l"
	.string "after it released.\p"
	.string "I sped through the game on Easy mode\n"
	.string "and finished it just one day after it\l"
	.string "came out!\p"
	.string "Do you think you can match that?$"

OblivionWing_ReadyYet::
# 522 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Ready to battle?$"

OblivionWing_YoureOn::
# 526 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Good luck, you'll need it!$"

OblivionWing_ComeBackWhenReady::
# 530 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "You know where to find me if you change\n"
	.string "your mind.$"

OblivionWing_Outro::
# 535 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Not bad! If you were a little faster,\n"
	.string "maybe you could've been the first to\l"
	.string "beat this game!$"

SootopolisCity_House5_Text_PlayerReceivedZarude::
# 541 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "{PLAYER} received Zarude!$"

OblivionWing_ExplainZarude::
# 545 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "There you go, a Mythical for you.\n"
	.string "I think that's a pretty good one too, if\l"
	.string "I do say so myself.$"

PostBattle_OblivionWing::
# 551 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "Best of luck with the rest of the game!$"
