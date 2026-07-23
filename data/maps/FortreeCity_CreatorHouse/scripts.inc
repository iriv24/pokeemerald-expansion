# 1 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 2 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_MapScripts::
# 3 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 5 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 6 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_Iriv24PC::
# 7 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_Iriv24sComputer, MSGBOX_SIGN
# 8 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 9 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 10 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_Iriv24sComputer:
# 11 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Hey, it's the creator's computer! Wait,\n"
# 12 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "he's making Drake do WHAT?$"
# 13 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 14 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_Iriv24PCTwo::
# 15 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_Iriv24sComputerTwo, MSGBOX_SIGN
# 16 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 17 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 18 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_Iriv24sComputerTwo:
# 19 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Is that me? Is this all scripted?$"
# 20 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 21 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 22 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_CapPC::
# 23 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_CapsComputer, MSGBOX_SIGN
# 24 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 25 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 26 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_CapsComputer:
# 27 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Man, he's really got this guy editing\n"
# 28 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "normal trainers, wild encounters, and\l"
# 29 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "manually copying data from RRDex.\l"
# 30 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "That's crazy.$"
# 31 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 32 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_XPC::
# 33 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_XsComputer, MSGBOX_SIGN
# 34 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 35 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 36 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_XsComputer:
# 37 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "So that's how they made the Mega\n"
# 38 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Torterra sprite.$"
# 39 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 40 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_Empoleon::
# 41 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lock
# 42 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	faceplayer
# 43 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	waitse
# 44 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	playmoncry SPECIES_EMPOLEON, CRY_MODE_NORMAL
# 45 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_Text_Empoleon, MSGBOX_DEFAULT
# 46 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	waitmoncry
# 47 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
# 48 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 49 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 50 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_Text_Empoleon:
# 51 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Empoleon: Brrrrrrrebrrreey!$"
# 52 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 53 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_Torterra::
# 54 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lock
# 55 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	faceplayer
# 56 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	waitse
# 57 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	playmoncry SPECIES_TORTERRA, CRY_MODE_NORMAL
# 58 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_Text_Torterra, MSGBOX_DEFAULT
# 59 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	waitmoncry
# 60 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
# 61 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 62 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 63 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_Text_Torterra:
# 64 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Torterra: Truhhhheeruhhhhhhh!$"
# 65 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 66 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_Lanturn::
# 67 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lock
# 68 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	faceplayer
# 69 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	waitse
# 70 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	playmoncry SPECIES_LANTURN, CRY_MODE_NORMAL
# 71 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_Text_Lanturn, MSGBOX_DEFAULT
# 72 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	waitmoncry
# 73 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
# 74 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 75 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 76 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_Text_Lanturn:
# 77 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Lanturn: Bzzzdoooo!$"

FortreeCity_CreatorHouse_EventScript_Iriv24::
# 82 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lockall
# 83 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 84 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_defeated TRAINER_IRIV24, FortreeCity_CreatorHouse_EventScript_Iriv24Defeated
# 85 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_TEMP_1, FortreeCity_CreatorHouse_EventScript_Iriv24RequestBattleAgain
# 87 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge FortreeCity_CreatorHouse_EventScript_Iriv24_2
# 102 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Iriv24_Greeting, MSGBOX_YESNO
# 103 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleIriv24Prompt
FortreeCity_CreatorHouse_EventScript_Iriv24_1:
	end

FortreeCity_CreatorHouse_EventScript_Iriv24_2:
# 89 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, FortreeCity_CreatorHouse_EventScript_Iriv24_5
# 96 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Iriv24_NotUnlockedYet
# 97 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	goto FortreeCity_CreatorHouse_EventScript_Iriv24_1

FortreeCity_CreatorHouse_EventScript_Iriv24_5:
# 91 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Iriv24_GreetingHard, MSGBOX_YESNO
# 92 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleIriv24Prompt
	goto FortreeCity_CreatorHouse_EventScript_Iriv24_1


FortreeCity_CreatorHouse_EventScript_Iriv24RequestBattleAgain::
# 109 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Iriv24_ReadyYet, MSGBOX_YESNO
# 110 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleIriv24Prompt
	end


FortreeCity_CreatorHouse_EventScript_BattleIriv24Prompt::
# 115 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_CreatorHouse_EventScript_BattleIriv24
# 116 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_CreatorHouse_EventScript_DeclineIriv24Battle
# 117 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	closemessage
	end


FortreeCity_CreatorHouse_EventScript_DeclineIriv24Battle::
# 122 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 123 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Iriv24_ComeBackWhenReady, MSGBOX_DEFAULT
# 124 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleIriv24::
# 129 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_EventScript_BattleIriv24_Text_0, MSGBOX_DEFAULT
# 130 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_IRIV24, Iriv24_Outro
# 131 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_Iriv24GiveItems
	return


FortreeCity_CreatorHouse_EventScript_Iriv24Defeated::
# 137 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox PostBattle_Iriv24, MSGBOX_DEFAULT
# 138 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	releaseall
	end


FortreeCity_CreatorHouse_EventScript_Iriv24GiveItems::
# 143 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge FortreeCity_CreatorHouse_EventScript_Iriv24GiveItems_2
# 149 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_EMPOLEONITE_O
# 150 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_BLASTOISINITE
# 151 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_SWAMPERTITE
# 152 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TM_SUBSTITUTE
# 153 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHOICE_SCARF
FortreeCity_CreatorHouse_EventScript_Iriv24GiveItems_1:
# 155 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Iriv24_ExplainItems
# 156 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end

FortreeCity_CreatorHouse_EventScript_Iriv24GiveItems_2:
# 145 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHOICE_SCARF
	goto FortreeCity_CreatorHouse_EventScript_Iriv24GiveItems_1


FortreeCity_CreatorHouse_EventScript_Cap::
# 253 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lockall
# 254 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 255 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_defeated TRAINER_CAP, FortreeCity_CreatorHouse_EventScript_CapDefeated
# 256 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, FortreeCity_CreatorHouse_EventScript_CapRequestBattleAgain
# 258 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge FortreeCity_CreatorHouse_EventScript_Cap_2
# 273 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Cap_Greeting, MSGBOX_YESNO
# 274 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleCapPrompt
FortreeCity_CreatorHouse_EventScript_Cap_1:
	end

FortreeCity_CreatorHouse_EventScript_Cap_2:
# 260 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_CreatorHouse_EventScript_Cap_5
# 267 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Cap_NotUnlockedYet
# 268 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	goto FortreeCity_CreatorHouse_EventScript_Cap_1

FortreeCity_CreatorHouse_EventScript_Cap_5:
# 262 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Cap_GreetingHard, MSGBOX_YESNO
# 263 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleCapPrompt
	goto FortreeCity_CreatorHouse_EventScript_Cap_1


FortreeCity_CreatorHouse_EventScript_CapRequestBattleAgain::
# 280 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Cap_ReadyYet, MSGBOX_YESNO
# 281 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleCapPrompt
	end


FortreeCity_CreatorHouse_EventScript_BattleCapPrompt::
# 286 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_CreatorHouse_EventScript_BattleCap
# 287 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_CreatorHouse_EventScript_DeclineCapBattle
# 288 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	closemessage
	end


FortreeCity_CreatorHouse_EventScript_DeclineCapBattle::
# 293 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 294 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Cap_ComeBackWhenReady, MSGBOX_DEFAULT
# 295 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleCap::
# 300 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_EventScript_BattleCap_Text_0, MSGBOX_DEFAULT
# 301 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_CAP, Cap_Outro
# 302 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_CapGiveItems
	return


FortreeCity_CreatorHouse_EventScript_CapDefeated::
# 308 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox PostBattle_Cap, MSGBOX_DEFAULT
# 309 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	releaseall
	end


FortreeCity_CreatorHouse_EventScript_CapGiveItems::
# 314 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge FortreeCity_CreatorHouse_EventScript_CapGiveItems_2
# 321 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHARIZARDITE_X
# 322 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y
# 323 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_INFERNAPITE
# 324 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TM_DRAGON_DANCE
# 325 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHOICE_SPECS
# 326 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Cap_ExplainItems
FortreeCity_CreatorHouse_EventScript_CapGiveItems_1:
# 328 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end

FortreeCity_CreatorHouse_EventScript_CapGiveItems_2:
# 316 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHOICE_SPECS
# 317 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Cap_ExplainItemsHard
	goto FortreeCity_CreatorHouse_EventScript_CapGiveItems_1


FortreeCity_CreatorHouse_EventScript_X::
# 398 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lockall
# 399 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 400 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_defeated TRAINER_X, FortreeCity_CreatorHouse_EventScript_XDefeated
# 401 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, FortreeCity_CreatorHouse_EventScript_XRequestBattleAgain
# 403 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge FortreeCity_CreatorHouse_EventScript_X_2
# 418 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox X_Greeting, MSGBOX_YESNO
# 419 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleXPrompt
FortreeCity_CreatorHouse_EventScript_X_1:
	end

FortreeCity_CreatorHouse_EventScript_X_2:
# 405 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, FortreeCity_CreatorHouse_EventScript_X_5
# 412 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox X_NotUnlockedYet
# 413 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	goto FortreeCity_CreatorHouse_EventScript_X_1

FortreeCity_CreatorHouse_EventScript_X_5:
# 407 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox X_GreetingHard, MSGBOX_YESNO
# 408 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleXPrompt
	goto FortreeCity_CreatorHouse_EventScript_X_1


FortreeCity_CreatorHouse_EventScript_XRequestBattleAgain::
# 425 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox X_ReadyYet, MSGBOX_YESNO
# 426 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleXPrompt
	end


FortreeCity_CreatorHouse_EventScript_BattleXPrompt::
# 431 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_CreatorHouse_EventScript_BattleX
# 432 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_CreatorHouse_EventScript_DeclineXBattle
# 433 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	closemessage
	end


FortreeCity_CreatorHouse_EventScript_DeclineXBattle::
# 438 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 439 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox X_ComeBackWhenReady, MSGBOX_DEFAULT
# 440 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleX::
# 445 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_EventScript_BattleX_Text_0, MSGBOX_DEFAULT
# 446 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_X, X_Outro
# 447 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_XGiveItems
	return


FortreeCity_CreatorHouse_EventScript_XDefeated::
# 453 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox PostBattle_X, MSGBOX_DEFAULT
# 454 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	releaseall
	end


FortreeCity_CreatorHouse_EventScript_XGiveItems::
# 459 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge FortreeCity_CreatorHouse_EventScript_XGiveItems_2
# 466 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TORTERRITE
# 467 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_VENUSAURITE
# 468 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_SCEPTILITE
# 469 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TM_EARTHQUAKE
# 470 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 471 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox X_ExplainItems
FortreeCity_CreatorHouse_EventScript_XGiveItems_1:
# 473 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end

FortreeCity_CreatorHouse_EventScript_XGiveItems_2:
# 461 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 462 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox X_ExplainItemsHard
	goto FortreeCity_CreatorHouse_EventScript_XGiveItems_1


FortreeCity_CreatorHouse_EventScript_BattleIriv24_Text_0:
# 129 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Alright, let's do this.$"

FortreeCity_CreatorHouse_EventScript_BattleCap_Text_0:
# 300 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "You're cooked buddy.$"

FortreeCity_CreatorHouse_EventScript_BattleX_Text_0:
# 445 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "You're on!$"

Iriv24_Greeting::
# 161 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Hi there, {PLAYER}, I am the creator of\n"
	.string "this hack.\l"
	.string "I hope you are enjoying it so far.\p"
	.string "Since you've made it to here, I would\n"
	.string "like to offer my sincere appreciation\l"
	.string "to you for playing this game.\p"
	.string "It was a lot of fun to make, and I\n"
	.string "hope I succeeded in making it very\l"
	.string "challenging, but not unbeatable.\p"
	.string "Now to business: I've got a team of my\n"
	.string "favorite Pokémon here and am ready to\l"
	.string "battle.\p"
	.string "If you win, I'll give you the Mega\n"
	.string "Stones for the Water starters,\l"
	.string "including Empoleon's 2nd Mega form.\p"
	.string "I'll also give you the TM for Substitute\n"
	.string "(broken move btw) and a Choice Scarf.\p"
	.string "If those rewards are worth it to you,\n"
	.string "then say the word and we can battle.\l"
	.string "What do you say?$"

Iriv24_GreetingHard::
# 184 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Hi there, {PLAYER}, I am the creator of\n"
	.string "this hack.\l"
	.string "I hope you are enjoying it so far.\p"
	.string "Since you've made it to here, I would\n"
	.string "like to offer my sincere appreciation\l"
	.string "to you for playing this game.\p"
	.string "It was a lot of fun to make, and I\n"
	.string "hope I succeeded in making it very\l"
	.string "challenging, but not unbeatable.\p"
	.string "Now to business: I've got a team of my\n"
	.string "favorite Pokémon here and am ready to\l"
	.string "battle.\p"
	.string "If you win, I'll give you a Choice\n"
	.string "Scarf, the most broken of the choice\l"
	.string "items.\p"
	.string "If this reward is worth it to you,\n"
	.string "then say the word and we can battle.\l"
	.string "What do you say?$"

Iriv24_NotUnlockedYet::
# 205 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Hi there, {PLAYER}, I am the creator of\n"
	.string "this hack.\l"
	.string "I hope you are enjoying it so far.\p"
	.string "Since you've made it to here, I would\n"
	.string "like to offer my sincere appreciation\l"
	.string "to you for playing this game.\p"
	.string "It was a lot of fun to make, and I\n"
	.string "hope I succeeded in making it very\l"
	.string "challenging, but not unbeatable.\p"
	.string "Unfortunately, it looks like you're\n"
	.string "still too green to fight me. Come back\l"
	.string "when you have 8 badges.$"

Iriv24_ReadyYet::
# 220 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Want to battle now?$"

Iriv24_ComeBackWhenReady::
# 224 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Let me know when you want to battle.$"

Iriv24_ExplainItems::
# 228 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "There you go, as promised. Now, keep\n"
	.string "moving forward! There are still plenty\l"
	.string "of tough battles ahead, but if you've\l"
	.string "made it this far, I believe you can beat\l"
	.string "the game.\p"
	.string "Thanks again for playing,\n"
	.string "good luck out there, {PLAYER}!$"

Iriv24_Outro::
# 238 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Looks like you've got a pretty good\n"
	.string "team over there!$"

PostBattle_Iriv24::
# 243 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Can't believe I got beat in my own game,\n"
	.string "definitely gonna give myself a cracked\l"
	.string "team in the next version.$"

Cap_Greeting::
# 332 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "I was too lazy to send the creator a\n"
	.string "script, so this is the nonsense I have\l"
	.string "to say instead!\p"
	.string "If you lose to me, it means you're a\n"
	.string "literal gerber baby because this game\l"
	.string "is easy.\p"
	.string "If you manage to beat me, I'll give you\n"
	.string "the Mega Stones for the Fire starters,\l"
	.string "the TM for Dragon Dance, and a set of\l"
	.string "Choice Specs.\p"
	.string "So we battling or what?$"

Cap_GreetingHard::
# 346 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "I was too lazy to send the creator a\n"
	.string "script, so this is the nonsense I have\l"
	.string "to say instead!\p"
	.string "If you lose to me, it means you're a\n"
	.string "literal gerber baby because this game\l"
	.string "is easy.\p"
	.string "If you manage to beat me, I'll give you\n"
	.string "a set of Choice Specs.\p"
	.string "So we battling or what?$"

Cap_NotUnlockedYet::
# 358 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "You don't even have 6 badges yet?!\n"
	.string "This isn't kindergarten, come\l"
	.string "back when you're worth fighting.$"

Cap_ReadyYet::
# 364 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Ready or what?$"

Cap_ComeBackWhenReady::
# 368 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Lame.$"

Cap_ExplainItems::
# 372 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Honestly the rewards for beating me\n"
	.string "are goated, this was probably worth the\l"
	.string "hassle.$"

Cap_ExplainItemsHard::
# 378 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Honestly the reward for beating me\n"
	.string "are goated, this was probably worth the\l"
	.string "hassle.$"

Cap_Outro::
# 384 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Looks like the team I constructed was\n"
	.string "trash, better luck next hack I guess.$"

PostBattle_Cap::
# 390 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Back to.. doing nothing really.$"

X_Greeting::
# 477 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Yo! I was just about to have lunch on\n"
	.string "my Torterra's back, but I guess that\l"
	.string "can wait. Do you want to battle in the\l"
	.string "mean time?\p"
	.string "If you can beat me, I'll give you the\n"
	.string "Mega Stones for the Grass starters,\l"
	.string "the TM for Earthquake, and a Choice\l"
	.string "Band. You in?$"

X_GreetingHard::
# 488 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Yo! I was just about to have lunch on\n"
	.string "my Torterra's back, but I guess that\l"
	.string "can wait. Do you want to battle in the\l"
	.string "mean time?\p"
	.string "If you can beat me, I'll give you\n"
	.string "this Choice Band. You in?$"

X_NotUnlockedYet::
# 498 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Yo! I was just about to have lunch on\n"
	.string "my Torterra's back, but I guess that\l"
	.string "can wait. Do you want to battle in the\l"
	.string "mean time?\p"
	.string "Oh, you haven't defeated Tate&Liza yet,\n"
	.string "guess I got some time for lunch then.$"

X_ReadyYet::
# 507 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "You in now?$"

X_ComeBackWhenReady::
# 511 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "You know where to find me if you change\n"
	.string "your mind.$"

X_ExplainItems::
# 516 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "This move Earthquake carried me\n"
	.string "through many a Pearl run back in the\l"
	.string "day.\p"
	.string "Though, this game should be a biiiit\n"
	.string "more challenging (unless you use\l"
	.string "Torterra because he's the GOAT, don't\l"
	.string "let anyone else tell you otherwise).\p"
	.string "What could be better than a picnic on\n"
	.string "his back? Maybe a Starly in the tree.\p"
	.string "Anyways, hope you like the Mega sprite,\n"
	.string "I designed it myself!$"

X_ExplainItemsHard::
# 530 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "I wish I had a Choice Band during\n"
	.string "my many Pearl runs back in the\l"
	.string "day.\p"
	.string "Though, this game should be a biiiit\n"
	.string "more challenging (unless you use\l"
	.string "Torterra because he's the GOAT, don't\l"
	.string "let anyone else tell you otherwise).\p"
	.string "What could be better than a picnic on\n"
	.string "his back? Maybe a Starly in the tree.\p"
	.string "Anyways, hope you like the Mega sprite,\n"
	.string "I designed it myself!$"

X_Outro::
# 544 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Well now you've gone and spoiled my\n"
	.string "appetite...$"

PostBattle_X::
# 550 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "... don't even deserve this sandwich...$"
