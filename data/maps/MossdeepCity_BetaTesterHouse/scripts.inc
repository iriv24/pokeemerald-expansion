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
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge MossdeepCity_BetaTesterHouse_EventScript_Sunbird_2
# 59 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_Greeting, MSGBOX_YESNO
MossdeepCity_BetaTesterHouse_EventScript_Sunbird_1:
# 61 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunbirdPrompt
	end

MossdeepCity_BetaTesterHouse_EventScript_Sunbird_2:
# 55 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_GreetingHard, MSGBOX_YESNO
	goto MossdeepCity_BetaTesterHouse_EventScript_Sunbird_1


MossdeepCity_BetaTesterHouse_EventScript_SunbirdRequestBattleAgain::
# 66 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_ReadyYet, MSGBOX_YESNO
# 67 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunbirdPrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSunbirdPrompt::
# 72 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, MossdeepCity_BetaTesterHouse_EventScript_BattleSunbird
# 73 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_DeclineSunbirdBattle
# 74 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	closemessage
	end


MossdeepCity_BetaTesterHouse_EventScript_DeclineSunbirdBattle::
# 79 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 80 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_ComeBackWhenReady, MSGBOX_DEFAULT
# 81 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSunbird::
# 86 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_YoureOn, MSGBOX_DEFAULT
# 87 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_SUNBIRD, Sunbird_Outro
# 88 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge MossdeepCity_BetaTesterHouse_EventScript_BattleSunbird_1
# 94 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SunbirdGiveCelebi
	return

MossdeepCity_BetaTesterHouse_EventScript_BattleSunbird_1:
	return


MossdeepCity_BetaTesterHouse_EventScript_SunbirdDefeated::
# 101 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox PostBattle_Sunbird, MSGBOX_DEFAULT
# 102 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	releaseall
	end


MossdeepCity_BetaTesterHouse_EventScript_SunbirdGiveCelebi::
# 107 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CELEBI
# 108 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	givemonrandom SPECIES_CELEBI, 50
# 109 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_BetaTesterHouse_EventScript_ReceiveCelebiParty
# 110 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_BetaTesterHouse_EventScript_ReceiveCelebiPC
# 111 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 112 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveCelebiParty::
# 117 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedCelebiFanfare
# 118 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 119 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_ExplainCelebi
# 120 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 121 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 122 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainCelebi
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveCelebiPC::
# 128 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedCelebiFanfare
# 129 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 130 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_SendCelebiToPC
# 131 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 132 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SendCelebiToPC
	end


MossdeepCity_BetaTesterHouse_EventScript_SendCelebiToPC::
# 138 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 139 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainCelebi
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceivedCelebiFanfare::
# 145 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 146 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	message MossdeepCity_BetaTesterHouse_Text_PlayerReceivedCelebi
# 147 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmessage
# 148 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitfanfare
# 149 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CELEBI
	return


MossdeepCity_BetaTesterHouse_EventScript_ExplainCelebi::
# 155 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_ExplainCelebi, MSGBOX_DEFAULT
# 156 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_Suneal::
# 231 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lockall
# 232 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	applymovement LOCALID_SUNEAL, Common_Movement_FacePlayer
# 233 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_defeated TRAINER_SUNEAL, MossdeepCity_BetaTesterHouse_EventScript_SunealDefeated
# 234 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, MossdeepCity_BetaTesterHouse_EventScript_SunealRequestBattleAgain
# 235 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge MossdeepCity_BetaTesterHouse_EventScript_Suneal_2
# 241 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_Greeting, MSGBOX_YESNO
MossdeepCity_BetaTesterHouse_EventScript_Suneal_1:
# 243 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunealPrompt
	end

MossdeepCity_BetaTesterHouse_EventScript_Suneal_2:
# 237 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_GreetingHard, MSGBOX_YESNO
	goto MossdeepCity_BetaTesterHouse_EventScript_Suneal_1


MossdeepCity_BetaTesterHouse_EventScript_SunealRequestBattleAgain::
# 248 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_ReadyYet, MSGBOX_YESNO
# 249 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunealPrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSunealPrompt::
# 254 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, MossdeepCity_BetaTesterHouse_EventScript_BattleSuneal
# 255 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_DeclineSunealBattle
# 256 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	closemessage
	end


MossdeepCity_BetaTesterHouse_EventScript_DeclineSunealBattle::
# 261 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 262 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_ComeBackWhenReady, MSGBOX_DEFAULT
# 263 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSuneal::
# 268 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_YoureOn, MSGBOX_DEFAULT
# 269 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_SUNEAL, Suneal_Outro
# 270 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge MossdeepCity_BetaTesterHouse_EventScript_BattleSuneal_1
# 276 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SunealGiveDarkrai
	return

MossdeepCity_BetaTesterHouse_EventScript_BattleSuneal_1:
	return


MossdeepCity_BetaTesterHouse_EventScript_SunealDefeated::
# 283 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox PostBattle_Suneal, MSGBOX_DEFAULT
# 284 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	releaseall
	end


MossdeepCity_BetaTesterHouse_EventScript_SunealGiveDarkrai::
# 289 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DARKRAI
# 290 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	givemonrandom SPECIES_DARKRAI, 50
# 291 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiParty
# 292 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiPC
# 293 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 294 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiParty::
# 299 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedDarkraiFanfare
# 300 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 301 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai
# 302 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 303 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 304 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiPC::
# 310 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedDarkraiFanfare
# 311 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 312 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_SendDarkraiToPC
# 313 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 314 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SendDarkraiToPC
	end


MossdeepCity_BetaTesterHouse_EventScript_SendDarkraiToPC::
# 320 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 321 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceivedDarkraiFanfare::
# 327 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 328 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	message MossdeepCity_BetaTesterHouse_Text_PlayerReceivedDarkrai
# 329 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmessage
# 330 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitfanfare
# 331 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DARKRAI
	return


MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai::
# 337 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_ExplainDarkrai, MSGBOX_DEFAULT
# 338 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_DollaMike::
# 406 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lockall
# 407 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	applymovement LOCALID_DOLLAMIKE, Common_Movement_FacePlayer
# 408 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_defeated TRAINER_DOLLAMIKE, MossdeepCity_BetaTesterHouse_EventScript_DollaMikeDefeated
# 409 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, MossdeepCity_BetaTesterHouse_EventScript_DollaMikeRequestBattleAgain
# 410 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge MossdeepCity_BetaTesterHouse_EventScript_DollaMike_2
# 416 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_Greeting, MSGBOX_YESNO
MossdeepCity_BetaTesterHouse_EventScript_DollaMike_1:
# 418 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMikePrompt
	end

MossdeepCity_BetaTesterHouse_EventScript_DollaMike_2:
# 412 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_GreetingHard, MSGBOX_YESNO
	goto MossdeepCity_BetaTesterHouse_EventScript_DollaMike_1


MossdeepCity_BetaTesterHouse_EventScript_DollaMikeRequestBattleAgain::
# 423 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_ReadyYet, MSGBOX_YESNO
# 424 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMikePrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMikePrompt::
# 429 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMike
# 430 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_DeclineDollaMikeBattle
# 431 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	closemessage
	end


MossdeepCity_BetaTesterHouse_EventScript_DeclineDollaMikeBattle::
# 436 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 437 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_ComeBackWhenReady, MSGBOX_DEFAULT
# 438 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMike::
# 443 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_YoureOn, MSGBOX_DEFAULT
# 444 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_DOLLAMIKE, DollaMike_Outro
# 445 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMike_1
# 451 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_DollaMikeGiveVictini
	return

MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMike_1:
	return


MossdeepCity_BetaTesterHouse_EventScript_DollaMikeDefeated::
# 458 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox PostBattle_DollaMike, MSGBOX_DEFAULT
# 459 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	releaseall
	end


MossdeepCity_BetaTesterHouse_EventScript_DollaMikeGiveVictini::
# 464 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_VICTINI
# 465 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	givemonrandom SPECIES_VICTINI, 50
# 466 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_BetaTesterHouse_EventScript_ReceiveVictiniParty
# 467 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_BetaTesterHouse_EventScript_ReceiveVictiniPC
# 468 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 469 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveVictiniParty::
# 474 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedVictiniFanfare
# 475 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 476 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_ExplainVictini
# 477 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 478 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 479 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainVictini
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveVictiniPC::
# 485 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedVictiniFanfare
# 486 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 487 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_SendVictiniToPC
# 488 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 489 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SendVictiniToPC
	end


MossdeepCity_BetaTesterHouse_EventScript_SendVictiniToPC::
# 495 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 496 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainVictini
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceivedVictiniFanfare::
# 502 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 503 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	message MossdeepCity_BetaTesterHouse_Text_PlayerReceivedVictini
# 504 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmessage
# 505 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitfanfare
# 506 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VICTINI
	return


MossdeepCity_BetaTesterHouse_EventScript_ExplainVictini::
# 512 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_ExplainVictini, MSGBOX_DEFAULT
# 513 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


Sunbird_Greeting::
# 160 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
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

Sunbird_GreetingHard::
# 175 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Hello! I'm Sunbird, and I was one of the\n"
	.string "first players ever to beat this game, so\l"
	.string "I got to make my own trainer with my\l"
	.string "Hall of Fame team!\p"
	.string "Now if you can beat me, I'll explain\n"
	.string "to you what my Skeledirge's nickname,\l"
	.string "“OBC Andy”, means.\p"
	.string "In fact, you kind of remind me of him.\p"
	.string "So, you think you can beat me?$"

Sunbird_ReadyYet::
# 187 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Ready yet, OBC trainer?$"

Sunbird_YoureOn::
# 191 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Alright you're on, OBC trainer!$"

Sunbird_ComeBackWhenReady::
# 195 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "That's fine, I don't blame you.\n"
	.string "My team is pretty scary!$"

Sunbird_Outro::
# 200 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Ok, I'll tell you… “OBC” stands for “One\n"
	.string "Brain Cell”, but Andy does his best!$"

MossdeepCity_BetaTesterHouse_Text_PlayerReceivedCelebi::
# 205 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "{PLAYER} received Celebi!$"

Sunbird_ExplainCelebi::
# 209 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "I told you I'd give you a Mythical if you\n"
	.string "could beat me!\p"
	.string "And I'd say that's a pretty darn good\n"
	.string "one, so I hope Celebi helps you!$"

PostBattle_Sunbird::
# 216 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
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
# 342 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "What's up? My name is Suneal, and I was\n"
	.string "the first person besides the creator\l"
	.string "to beat this game.\p"
	.string "I actually beat it more than once, and\n"
	.string "I played a version way before it was\l"
	.string "finalized.\p"
	.string "If you can beat me, I'll give you a\n"
	.string "Mythical Pokémon as a reward.\p"
	.string "What do you say?$"

Suneal_GreetingHard::
# 354 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "What's up? My name is Suneal, and I was\n"
	.string "the first person besides the creator\l"
	.string "to beat this game.\p"
	.string "I actually beat it more than once, and\n"
	.string "I played a version way before it was\l"
	.string "finalized.\p"
	.string "I've been itching for a good fight\n"
	.string "since then.\p"
	.string "What do you say?$"

Suneal_ReadyYet::
# 366 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Ready to battle yet?$"

Suneal_YoureOn::
# 370 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Let's do this.$"

Suneal_ComeBackWhenReady::
# 374 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Come back if you change your mind.$"

Suneal_Outro::
# 378 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Looks like you might not be a complete\n"
	.string "bum after all.$"

MossdeepCity_BetaTesterHouse_Text_PlayerReceivedDarkrai::
# 383 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "{PLAYER} received Darkrai!$"

Suneal_ExplainDarkrai::
# 387 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "As promised, there's your Mythical.\n"
	.string "You're not getting Dark Hole until\l"
	.string "post-game though, that move is\l"
	.string "completely broken.$"

PostBattle_Suneal::
# 394 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "I was the one who suggested adding a\n"
	.string "White Out Counter to the 2nd Nurse in\l"
	.string "the Pokémon Centers, and I'm the one\l"
	.string "who came up with the “obtained several\l"
	.string "Items!” idea instead of getting 50\l"
	.string "individual messages, so you're\l"
	.string "welcome for that.$"

DollaMike_Greeting::
# 517 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
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

DollaMike_GreetingHard::
# 530 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "Yo, I'm DollaMike, and it took me a full\n"
	.string "90 hours of no speed-up gameplay to\l"
	.string "to beat this game.\p"
	.string "I didn't even realize there was a\n"
	.string "PokéVial until right before the\l"
	.string "Champion battle, and I told the creator\l"
	.string "I was out of Elixirs. True story.\p"
	.string "Anyway, I'm gonna hit you with a brick\n"
	.string "now, because that's what I do. Think\l"
	.string "you can beat me?$"

DollaMike_ReadyYet::
# 543 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "This brick's got your name on it,\n"
	.string "if you're ready now.$"

DollaMike_YoureOn::
# 548 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "You're cooked kid.$"

DollaMike_ComeBackWhenReady::
# 552 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "I'd be scared too if I were you.$"

DollaMike_Outro::
# 556 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "It's all because I ran out of Elixirs!$"

MossdeepCity_BetaTesterHouse_Text_PlayerReceivedVictini::
# 560 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "{PLAYER} received Victini!$"

DollaMike_ExplainVictini::
# 564 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "That Mythical there represents\n"
	.string "victory!\p"
	.string "I think anyway, I actually chose Keldeo\n"
	.string "as my gift Pokémon, but the creator\l"
	.string "said no, so I guess that'll do.$"

PostBattle_DollaMike::
# 572 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "This game was so hard, man, I can't wait\n"
	.string "to play it again.$"
