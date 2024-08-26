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

FortreeCity_CreatorHouse_EventScript_Iriv24::
# 43 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lockall
# 44 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 45 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_WATER_MEGAS, FortreeCity_CreatorHouse_EventScript_Iriv24Defeated
# 46 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_DECLINED_IRIV24_BATTLE, FortreeCity_CreatorHouse_EventScript_Iriv24RequestBattleAgain
# 47 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Iriv24_Greeting, MSGBOX_YESNO
# 48 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleIriv24Prompt
	end


FortreeCity_CreatorHouse_EventScript_Iriv24RequestBattleAgain::
# 53 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 54 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleIriv24Prompt
	end


FortreeCity_CreatorHouse_EventScript_BattleIriv24Prompt::
# 59 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_CreatorHouse_EventScript_BattleIriv24
# 60 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_CreatorHouse_EventScript_DeclineIriv24Battle
# 61 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	closemessage
	end


FortreeCity_CreatorHouse_EventScript_DeclineIriv24Battle::
# 66 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_DECLINED_IRIV24_BATTLE
# 67 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 68 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleIriv24::
# 73 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_EventScript_BattleIriv24_Text_0, MSGBOX_DEFAULT
# 74 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_IRIV24, Iriv24_Outro
# 75 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_Iriv24GiveItems
	return


FortreeCity_CreatorHouse_EventScript_Iriv24Defeated::
# 81 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox PostBattle_Iriv24, MSGBOX_DEFAULT
# 82 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	releaseall
	end


FortreeCity_CreatorHouse_EventScript_Iriv24GiveItems::
# 87 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_EMPOLEONITE_O
# 88 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_BLASTOISINITE
# 89 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_SWAMPERTITE
# 90 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TM_SUBSTITUTE
# 91 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHOICE_SCARF
# 92 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_RECEIVED_WATER_MEGAS
# 93 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Iriv24_ExplainItems
# 94 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_Cap::
# 147 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lockall
# 148 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 149 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_FIRE_MEGAS, FortreeCity_CreatorHouse_EventScript_CapDefeated
# 150 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_DECLINED_CAP_BATTLE, FortreeCity_CreatorHouse_EventScript_CapRequestBattleAgain
# 151 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Cap_Greeting, MSGBOX_YESNO
# 152 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleCapPrompt
	end


FortreeCity_CreatorHouse_EventScript_CapRequestBattleAgain::
# 157 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 158 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleCapPrompt
	end


FortreeCity_CreatorHouse_EventScript_BattleCapPrompt::
# 163 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_CreatorHouse_EventScript_BattleCap
# 164 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_CreatorHouse_EventScript_DeclineCapBattle
# 165 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	closemessage
	end


FortreeCity_CreatorHouse_EventScript_DeclineCapBattle::
# 170 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_DECLINED_CAP_BATTLE
# 171 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 172 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleCap::
# 177 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_EventScript_BattleCap_Text_0, MSGBOX_DEFAULT
# 178 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_CAP, Cap_Outro
# 179 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_CapGiveItems
	return


FortreeCity_CreatorHouse_EventScript_CapDefeated::
# 185 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox PostBattle_Cap, MSGBOX_DEFAULT
# 186 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	releaseall
	end


FortreeCity_CreatorHouse_EventScript_CapGiveItems::
# 191 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHARIZARDITE_X
# 192 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y
# 193 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_BLAZIKENITE
# 194 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TM_DRAGON_DANCE
# 195 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHOICE_SPECS
# 196 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_RECEIVED_FIRE_MEGAS
# 197 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Cap_ExplainItems
# 198 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_X::
# 236 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lockall
# 237 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 238 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_GRASS_MEGAS, FortreeCity_CreatorHouse_EventScript_XDefeated
# 239 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_DECLINED_X_BATTLE, FortreeCity_CreatorHouse_EventScript_XRequestBattleAgain
# 240 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox X_Greeting, MSGBOX_YESNO
# 241 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleXPrompt
	end


FortreeCity_CreatorHouse_EventScript_XRequestBattleAgain::
# 246 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 247 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleXPrompt
	end


FortreeCity_CreatorHouse_EventScript_BattleXPrompt::
# 252 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_CreatorHouse_EventScript_BattleX
# 253 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_CreatorHouse_EventScript_DeclineXBattle
# 254 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	closemessage
	end


FortreeCity_CreatorHouse_EventScript_DeclineXBattle::
# 259 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_DECLINED_X_BATTLE
# 260 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 261 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleX::
# 266 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_EventScript_BattleCap_Text_0, MSGBOX_DEFAULT
# 267 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_X, X_Outro
# 268 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_XGiveItems
	return


FortreeCity_CreatorHouse_EventScript_XDefeated::
# 274 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox PostBattle_X, MSGBOX_DEFAULT
# 275 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	releaseall
	end


FortreeCity_CreatorHouse_EventScript_XGiveItems::
# 280 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TORTERRITE
# 281 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_VENUSAURITE
# 282 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_SCEPTILITE
# 283 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TM_EARTHQUAKE
# 284 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 285 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_RECEIVED_GRASS_MEGAS
# 286 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox X_ExplainItems
# 287 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleIriv24_Text_0:
# 73 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Alright, let's do this.$"

FortreeCity_CreatorHouse_EventScript_BattleCap_Text_0:
# 177 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "You're on!$"

Iriv24_ExplainItems::
# 98 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "There you go, as promised. Now, keep\n"
	.string "moving forward! There are still plenty\l"
	.string "of tough battles ahead, but if you've\l"
	.string "made it this far, I believe you can beat\l"
	.string "the game.\p"
	.string "Thanks again for playing,\n"
	.string "good luck out there, {PLAYER}!$"

Iriv24_Greeting::
# 108 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
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

Iriv24_Outro::
# 131 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Looks like you've got a pretty good\n"
	.string "team over there!$"

PostBattle_Iriv24::
# 137 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Can't believe I got beat in my own game,\n"
	.string "definitely gonna give myself a cracked\l"
	.string "team in the next version.$"

Cap_ExplainItems::
# 202 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Honestly the rewards for beating me\n"
	.string "are goated, this was probably worth the\l"
	.string "hassle.$"

Cap_Greeting::
# 208 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
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

Cap_Outro::
# 222 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Looks like the team I constructed was\n"
	.string "trash, better luck next hack I guess.$"

PostBattle_Cap::
# 228 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Back to.. doing nothing really.$"

X_ExplainItems::
# 291 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "This move Earthquake carried me\n"
	.string "through many a Pearl run back in the\l"
	.string "day.\p"
	.string "Though, this should game be a biiiit\n"
	.string "more challenging (unless you use\l"
	.string "Torterra because he's the GOAT, don't\l"
	.string "let anyone else tell you otherwise).\p"
	.string "What could be better than a picnic on\n"
	.string "his back? Maybe a Starly in the tree.\p"
	.string "Anyways, hope you like the Mega sprite,\n"
	.string "I designed it myself!$"

X_Greeting::
# 305 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Yo! I was just about to have lunch on\n"
	.string "my Torterra's back, but I guess that\l"
	.string "can wait. Do you want to battle in the\l"
	.string "mean time?\p"
	.string "If you can beat me, I'll give you the\n"
	.string "Mega Stones for the Grass starters,\l"
	.string "the TM for Earthquake, and a Choice\l"
	.string "Band. You in?$"

X_Outro::
# 316 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Well now you've gone and spoiled my\n"
	.string "appetite...$"

PostBattle_X::
# 322 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "... don't even deserve this sandwich...$"
