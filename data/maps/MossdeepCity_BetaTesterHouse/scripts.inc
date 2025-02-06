# 1 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 2 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
.set LOCALID_SUNBIRD, 1
# 3 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
.set LOCALID_SUNEAL, 3
# 4 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
.set LOCALID_DOLLAMIKE, 5
# 5 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_MapScripts::
# 6 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.byte 0
# 7 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 8 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_EventScript_Mochi::
# 9 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lock
# 10 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	faceplayer
# 11 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitse
# 12 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_NORMAL
# 13 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox MossdeepCity_BetaTesterHouse_Text_Tyrantrum, MSGBOX_DEFAULT
# 14 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmoncry
# 15 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
# 16 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	end
# 17 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 18 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_Text_Tyrantrum:
# 19 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Mochi: Grrrraaaaraaararaaa!$"
# 20 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 21 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_EventScript_Kingambit::
# 22 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lock
# 23 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	faceplayer
# 24 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitse
# 25 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playmoncry SPECIES_KINGAMBIT, CRY_MODE_NORMAL
# 26 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox MossdeepCity_BetaTesterHouse_Text_Kingambit, MSGBOX_DEFAULT
# 27 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmoncry
# 28 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
# 29 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	end
# 30 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 31 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_Text_Kingambit:
# 32 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Kingambit: Uuhuuhuuhuuahahuuhu!$"
# 33 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 34 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_EventScript_Blaziken::
# 35 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lock
# 36 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	faceplayer
# 37 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitse
# 38 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playmoncry SPECIES_BLAZIKEN, CRY_MODE_NORMAL
# 39 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox MossdeepCity_BetaTesterHouse_Text_Blaziken, MSGBOX_DEFAULT
# 40 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmoncry
# 41 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
# 42 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	end
# 43 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 44 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_Text_Blaziken:
# 45 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Blaziken: Trrrrererehhhhhh!$"

MossdeepCity_BetaTesterHouse_EventScript_Sunbird::
# 49 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lockall
# 50 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	applymovement LOCALID_SUNBIRD, Common_Movement_FacePlayer
# 51 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_defeated TRAINER_SUNBIRD, MossdeepCity_BetaTesterHouse_EventScript_SunbirdDefeated
# 52 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_set FLAG_TEMP_1, MossdeepCity_BetaTesterHouse_EventScript_SunbirdRequestBattleAgain
# 53 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_Greeting, MSGBOX_YESNO
# 54 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunbirdPrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_SunbirdRequestBattleAgain::
# 59 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_ReadyYet, MSGBOX_YESNO
# 60 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunbirdPrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSunbirdPrompt::
# 65 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, MossdeepCity_BetaTesterHouse_EventScript_BattleSunbird
# 66 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_DeclineSunbirdBattle
# 67 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	closemessage
	end


MossdeepCity_BetaTesterHouse_EventScript_DeclineSunbirdBattle::
# 72 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 73 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_ComeBackWhenReady, MSGBOX_DEFAULT
# 74 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSunbird::
# 79 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_YoureOn, MSGBOX_DEFAULT
# 80 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_SUNBIRD, Sunbird_Outro
# 81 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SunbirdGiveCelebi
	return


MossdeepCity_BetaTesterHouse_EventScript_SunbirdDefeated::
# 87 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox PostBattle_Sunbird, MSGBOX_DEFAULT
# 88 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	releaseall
	end


MossdeepCity_BetaTesterHouse_EventScript_SunbirdGiveCelebi::
# 93 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CELEBI
# 94 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	givemonrandom SPECIES_CELEBI, 50
# 95 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_BetaTesterHouse_EventScript_ReceiveCelebiParty
# 96 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_BetaTesterHouse_EventScript_ReceiveCelebiPC
# 97 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 98 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveCelebiParty::
# 103 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedCelebiFanfare
# 104 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 105 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_ExplainCelebi
# 106 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 107 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 108 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainCelebi
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveCelebiPC::
# 114 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedCelebiFanfare
# 115 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 116 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_SendCelebiToPC
# 117 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 118 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SendCelebiToPC
	end


MossdeepCity_BetaTesterHouse_EventScript_SendCelebiToPC::
# 124 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 125 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainCelebi
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceivedCelebiFanfare::
# 131 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 132 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	message MossdeepCity_BetaTesterHouse_Text_PlayerReceivedCelebi
# 133 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmessage
# 134 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitfanfare
# 135 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CELEBI
	return


MossdeepCity_BetaTesterHouse_EventScript_ExplainCelebi::
# 141 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_ExplainCelebi, MSGBOX_DEFAULT
# 142 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_Suneal::
# 205 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lockall
# 206 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	applymovement LOCALID_SUNEAL, Common_Movement_FacePlayer
# 207 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_defeated TRAINER_SUNEAL, MossdeepCity_BetaTesterHouse_EventScript_SunealDefeated
# 208 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, MossdeepCity_BetaTesterHouse_EventScript_SunealRequestBattleAgain
# 209 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_Greeting, MSGBOX_YESNO
# 210 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunealPrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_SunealRequestBattleAgain::
# 215 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_ReadyYet, MSGBOX_YESNO
# 216 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunealPrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSunealPrompt::
# 221 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, MossdeepCity_BetaTesterHouse_EventScript_BattleSuneal
# 222 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_DeclineSunealBattle
# 223 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	closemessage
	end


MossdeepCity_BetaTesterHouse_EventScript_DeclineSunealBattle::
# 228 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 229 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_ComeBackWhenReady, MSGBOX_DEFAULT
# 230 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSuneal::
# 235 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_YoureOn, MSGBOX_DEFAULT
# 236 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_SUNEAL, Suneal_Outro
# 237 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SunealGiveDarkrai
	return


MossdeepCity_BetaTesterHouse_EventScript_SunealDefeated::
# 243 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox PostBattle_Suneal, MSGBOX_DEFAULT
# 244 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	releaseall
	end


MossdeepCity_BetaTesterHouse_EventScript_SunealGiveDarkrai::
# 249 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DARKRAI
# 250 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	givemonrandom SPECIES_DARKRAI, 50
# 251 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiParty
# 252 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiPC
# 253 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 254 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiParty::
# 259 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedDarkraiFanfare
# 260 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 261 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai
# 262 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 263 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 264 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiPC::
# 270 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedDarkraiFanfare
# 271 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 272 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_SendDarkraiToPC
# 273 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 274 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SendDarkraiToPC
	end


MossdeepCity_BetaTesterHouse_EventScript_SendDarkraiToPC::
# 280 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 281 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceivedDarkraiFanfare::
# 287 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 288 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	message MossdeepCity_BetaTesterHouse_Text_PlayerReceivedDarkrai
# 289 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmessage
# 290 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitfanfare
# 291 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DARKRAI
	return


MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai::
# 297 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_ExplainDarkrai, MSGBOX_DEFAULT
# 298 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_DollaMike::
# 354 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lockall
# 355 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	applymovement LOCALID_DOLLAMIKE, Common_Movement_FacePlayer
# 356 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_defeated TRAINER_DOLLAMIKE, MossdeepCity_BetaTesterHouse_EventScript_DollaMikeDefeated
# 357 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, MossdeepCity_BetaTesterHouse_EventScript_DollaMikeRequestBattleAgain
# 358 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_Greeting, MSGBOX_YESNO
# 359 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMikePrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_DollaMikeRequestBattleAgain::
# 364 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_ReadyYet, MSGBOX_YESNO
# 365 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMikePrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMikePrompt::
# 370 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMike
# 371 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_DeclineDollaMikeBattle
# 372 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	closemessage
	end


MossdeepCity_BetaTesterHouse_EventScript_DeclineDollaMikeBattle::
# 377 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 378 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_ComeBackWhenReady, MSGBOX_DEFAULT
# 379 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMike::
# 384 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_YoureOn, MSGBOX_DEFAULT
# 385 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_DOLLAMIKE, DollaMike_Outro
# 386 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_DollaMikeGiveVictini
	return


MossdeepCity_BetaTesterHouse_EventScript_DollaMikeDefeated::
# 392 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox PostBattle_DollaMike, MSGBOX_DEFAULT
# 393 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	releaseall
	end


MossdeepCity_BetaTesterHouse_EventScript_DollaMikeGiveVictini::
# 398 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_VICTINI
# 399 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	givemonrandom SPECIES_VICTINI, 50
# 400 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_BetaTesterHouse_EventScript_ReceiveVictiniParty
# 401 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_BetaTesterHouse_EventScript_ReceiveVictiniPC
# 402 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 403 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveVictiniParty::
# 408 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedVictiniFanfare
# 409 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 410 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_ExplainVictini
# 411 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 412 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 413 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainVictini
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveVictiniPC::
# 419 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedVictiniFanfare
# 420 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 421 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_SendVictiniToPC
# 422 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 423 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SendVictiniToPC
	end


MossdeepCity_BetaTesterHouse_EventScript_SendVictiniToPC::
# 429 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 430 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainVictini
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceivedVictiniFanfare::
# 436 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 437 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	message MossdeepCity_BetaTesterHouse_Text_PlayerReceivedVictini
# 438 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmessage
# 439 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitfanfare
# 440 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VICTINI
	return


MossdeepCity_BetaTesterHouse_EventScript_ExplainVictini::
# 446 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_ExplainVictini, MSGBOX_DEFAULT
# 447 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


Sunbird_Greeting::
# 146 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Hello! I'm Sunbird, and I was one of the\n"
	.string "first players ever to beat this game, so\l"
	.string "I got to make my own trainer with my\l"
	.string "Hall of Fame team!\p"
	.string "Now if you can beat me, I'll give you a\n"
	.string "pretty good reward (spoiler, it's a\l"
	.string "Mythical Pokémon)!\p"
	.string "I'll also explain to you what my\n"
	.string "Skeledirge's nickname, “OBC Andy”,\l"
	.string "means.\p"
	.string "In fact, you kind of remind me of him.\p"
	.string "So, you think you can beat me?$"

Sunbird_ReadyYet::
# 161 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Ready yet, OBC trainer?$"

Sunbird_YoureOn::
# 165 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Alright you're on, OBC trainer!$"

Sunbird_ComeBackWhenReady::
# 169 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "That's fine, I don't blame you.\n"
	.string "My team is pretty scary!$"

Sunbird_Outro::
# 174 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Ok, I'll tell you… “OBC” stands for “One\n"
	.string "Brain Cell”, but Andy does his best!$"

MossdeepCity_BetaTesterHouse_Text_PlayerReceivedCelebi::
# 179 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "{PLAYER} received Celebi!$"

Sunbird_ExplainCelebi::
# 183 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "I told you I'd give you a Mythical if you\n"
	.string "could beat me!\p"
	.string "And I'd say that's a pretty darn good\n"
	.string "one, so I hope Celebi helps you!$"

PostBattle_Sunbird::
# 190 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Mochi the shiny Tyrantrum was a\n"
	.string "core member of my team when I beat\l"
	.string "this game.\p"
	.string "He was with me for so long and was a big\n"
	.string "part of my Hall of Fame team!\p"
	.string "I hope you have a Pokémon with you\n"
	.string "that you care about as much as I care\l"
	.string "about Mochi, and I hope you go far\l"
	.string "together!$"

Suneal_Greeting::
# 302 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "What's up? My name is Suneal, and I was\n"
	.string "the first person besides the creator\l"
	.string "to beat this game.\p"
	.string "I actually beat it more than once, and\n"
	.string "I played a version way before it was\l"
	.string "finalized.\p"
	.string "If you can beat me, I'll give you a\n"
	.string "Mythical Pokémon as a reward.\p"
	.string "What do you say?$"

Suneal_ReadyYet::
# 314 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Ready to battle yet?$"

Suneal_YoureOn::
# 318 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Let's do this.$"

Suneal_ComeBackWhenReady::
# 322 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Come back if you change your mind.$"

Suneal_Outro::
# 326 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Looks like you might not be a complete\n"
	.string "bum after all.$"

MossdeepCity_BetaTesterHouse_Text_PlayerReceivedDarkrai::
# 331 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "{PLAYER} received Darkrai!$"

Suneal_ExplainDarkrai::
# 335 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "As promised, there's your Mythical.\n"
	.string "You're not getting Dark Hole until\l"
	.string "post-game though, that move is\l"
	.string "completely broken.$"

PostBattle_Suneal::
# 342 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "I was the one who suggested adding a\n"
	.string "White Out Counter to the 2nd Nurse in\l"
	.string "the Pokémon Centers, and I'm the one\l"
	.string "who came up with the “obtained several\l"
	.string "Items!” idea instead of getting 50\l"
	.string "individual messages, so you're\l"
	.string "welcome for that.$"

DollaMike_Greeting::
# 451 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Yo, I'm DollaMike, and it took me a full\n"
	.string "90 hours of no speed-up gameplay to\l"
	.string "to beat this game.\p"
	.string "I didn't even realize there was a\n"
	.string "PokéVial until right before the\l"
	.string "Champion battle, and I told the creator\l"
	.string "I was out of Elixirs. True story.\p"
	.string "Anyway, I'm gonna hit you with a brick\n"
	.string "now, because that's what I do. If you\l"
	.string "beat me, I'll give you a Mythical, you in?$"

DollaMike_ReadyYet::
# 464 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "This brick's got your name on it,\n"
	.string "if you're ready now.$"

DollaMike_YoureOn::
# 469 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "You're cooked kid.$"

DollaMike_ComeBackWhenReady::
# 473 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "I'd be scared too if I were you.$"

DollaMike_Outro::
# 477 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "It's all because I ran out of Elixirs!$"

MossdeepCity_BetaTesterHouse_Text_PlayerReceivedVictini::
# 481 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "{PLAYER} received Victini!$"

DollaMike_ExplainVictini::
# 485 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "That Mythical there represents\n"
	.string "victory!\p"
	.string "I think anyway, I actually chose Keldeo\n"
	.string "as my gift Pokémon, but the creator\l"
	.string "said no, so I guess that'll do.$"

PostBattle_DollaMike::
# 493 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "This game was so hard, man, I can't wait\n"
	.string "to play it again.$"
