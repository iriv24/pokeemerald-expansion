# 1 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 2 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_MapScripts::
# 3 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 5 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 6 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_IsaacPC::
# 7 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_IsaacsComputer, MSGBOX_SIGN
# 8 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 9 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 10 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_IsaacsComputer:
# 11 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Hey, it's the creator's computer! Wait,\n"
# 12 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "he's making Drake do WHAT?$"
# 13 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 14 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_IsaacPCTwo::
# 15 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_IsaacsComputerTwo, MSGBOX_SIGN
# 16 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 17 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 18 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_IsaacsComputerTwo:
# 19 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Is that me? Is this all scripted?$"
# 20 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 21 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 22 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_JustinPC::
# 23 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_JustinsComputer, MSGBOX_SIGN
# 24 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 25 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 26 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_JustinsComputer:
# 27 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Man, he's really got this guy editing\n"
# 28 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "normal trainers, wild encounters, and\p"
# 29 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "manually copying data from RRDex.\n"
# 30 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "That's crazy.$"
# 31 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 32 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_XavierPC::
# 33 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_XaviersComputer, MSGBOX_SIGN
# 34 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 35 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 36 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_XaviersComputer:
# 37 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "So that's how they made the Mega\n"
# 38 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Torterra sprite.$"

FortreeCity_CreatorHouse_EventScript_Isaac::
# 43 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lockall
# 44 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 45 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_WATER_MEGAS, FortreeCity_CreatorHouse_EventScript_IsaacDefeated
# 46 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_DECLINED_ISAAC_BATTLE, FortreeCity_CreatorHouse_EventScript_IsaacRequestBattleAgain
# 47 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Isaac_Greeting, MSGBOX_YESNO
# 48 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleIsaacPrompt
	end


FortreeCity_CreatorHouse_EventScript_IsaacRequestBattleAgain::
# 53 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 54 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleIsaacPrompt
	end


FortreeCity_CreatorHouse_EventScript_BattleIsaacPrompt::
# 59 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_CreatorHouse_EventScript_BattleIsaac
# 60 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_CreatorHouse_EventScript_DeclineIsaacBattle
# 61 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	closemessage
	end


FortreeCity_CreatorHouse_EventScript_DeclineIsaacBattle::
# 66 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_DECLINED_ISAAC_BATTLE
# 67 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 68 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleIsaac::
# 73 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_EventScript_BattleIsaac_Text_0, MSGBOX_DEFAULT
# 74 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_ISAAC, Isaac_Outro
# 75 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_IsaacGiveItems
	return


FortreeCity_CreatorHouse_EventScript_IsaacDefeated::
# 81 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox PostBattle_Isaac, MSGBOX_DEFAULT
# 82 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	releaseall
	end


FortreeCity_CreatorHouse_EventScript_IsaacGiveItems::
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
	msgbox Isaac_ExplainItems
# 94 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_Justin::
# 144 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lockall
# 145 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 146 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_FIRE_MEGAS, FortreeCity_CreatorHouse_EventScript_JustinDefeated
# 147 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_DECLINED_JUSTIN_BATTLE, FortreeCity_CreatorHouse_EventScript_JustinRequestBattleAgain
# 148 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Justin_Greeting, MSGBOX_YESNO
# 149 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleJustinPrompt
	end


FortreeCity_CreatorHouse_EventScript_JustinRequestBattleAgain::
# 154 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 155 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleJustinPrompt
	end


FortreeCity_CreatorHouse_EventScript_BattleJustinPrompt::
# 160 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_CreatorHouse_EventScript_BattleJustin
# 161 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_CreatorHouse_EventScript_DeclineJustinBattle
# 162 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	closemessage
	end


FortreeCity_CreatorHouse_EventScript_DeclineJustinBattle::
# 167 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_DECLINED_JUSTIN_BATTLE
# 168 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 169 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleJustin::
# 174 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_EventScript_BattleJustin_Text_0, MSGBOX_DEFAULT
# 175 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_JUSTIN, Justin_Outro
# 176 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_JustinGiveItems
	return


FortreeCity_CreatorHouse_EventScript_JustinDefeated::
# 182 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox PostBattle_Justin, MSGBOX_DEFAULT
# 183 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	releaseall
	end


FortreeCity_CreatorHouse_EventScript_JustinGiveItems::
# 188 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHARIZARDITE_X
# 189 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y
# 190 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_BLAZIKENITE
# 191 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TM_SUBSTITUTE
# 192 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHOICE_SPECS
# 193 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_RECEIVED_FIRE_MEGAS
# 194 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Justin_ExplainItems
# 195 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_Xavier::
# 232 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lockall
# 233 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 234 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_GRASS_MEGAS, FortreeCity_CreatorHouse_EventScript_XavierDefeated
# 235 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_DECLINED_XAVIER_BATTLE, FortreeCity_CreatorHouse_EventScript_XavierRequestBattleAgain
# 236 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Xavier_Greeting, MSGBOX_YESNO
# 237 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleXavierPrompt
	end


FortreeCity_CreatorHouse_EventScript_XavierRequestBattleAgain::
# 242 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 243 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleXavierPrompt
	end


FortreeCity_CreatorHouse_EventScript_BattleXavierPrompt::
# 248 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_CreatorHouse_EventScript_BattleXavier
# 249 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_CreatorHouse_EventScript_DeclineXavierBattle
# 250 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	closemessage
	end


FortreeCity_CreatorHouse_EventScript_DeclineXavierBattle::
# 255 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_DECLINED_XAVIER_BATTLE
# 256 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 257 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleXavier::
# 262 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_EventScript_BattleJustin_Text_0, MSGBOX_DEFAULT
# 263 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_XAVIER, Xavier_Outro
# 264 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_XavierGiveItems
	return


FortreeCity_CreatorHouse_EventScript_XavierDefeated::
# 270 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox PostBattle_Xavier, MSGBOX_DEFAULT
# 271 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	releaseall
	end


FortreeCity_CreatorHouse_EventScript_XavierGiveItems::
# 276 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TORTERRITE
# 277 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_VENUSAURITE
# 278 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_SCEPTILITE
# 279 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TM_EARTHQUAKE
# 280 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 281 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_RECEIVED_GRASS_MEGAS
# 282 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Xavier_ExplainItems
# 283 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleIsaac_Text_0:
# 73 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Alright, let's do this.$"

FortreeCity_CreatorHouse_EventScript_BattleJustin_Text_0:
# 174 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "You're on!$"

Isaac_ExplainItems::
# 98 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "There you go, as promised. Now, keep\n"
	.string "moving forward! There are still plenty\p"
	.string "of tough battles ahead, but if you've\n"
	.string "made it this far, I believe you can beat\p"
	.string "the game. Thanks again for playing,\n"
	.string "good luck out there, {PLAYER}!$"

Isaac_Greeting::
# 107 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Hi there, {PLAYER}, I am the creator of\n"
	.string "this hack. I hope you are enjoying it so\p"
	.string "far, and if you've made it this far, I\n"
	.string "would like to offer my sincere\p"
	.string "appreciation to you for playing this\n"
	.string "game. It was a lot of fun to make, and I\p"
	.string "hope I succeeded in making it very\n"
	.string "challenging, but not unbeatable. Now to\p"
	.string "business: I've got a team of my\n"
	.string "favorite Pokémon here and am ready to\p"
	.string "battle. If you win, I'll give you the\n"
	.string "Mega stones for the water starters,\p"
	.string "including Empoleon's 2nd Mega form. I'll\n"
	.string "also give you the TM for Substitute\p"
	.string "(broken move btw) and a Choice Scarf.\n"
	.string "If those rewards are worth it to you,\p"
	.string "then say the word and let's battle.\n"
	.string "What do you say?$"

Isaac_Outro::
# 128 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Looks like you've got a pretty good\n"
	.string "team over there!$"

PostBattle_Isaac::
# 134 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Can't believe I got beat in my own game,\n"
	.string "definitely gonna give myself a cracked\l"
	.string "team in the next version.$"

Justin_ExplainItems::
# 199 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Drain Punch allows your Pokémon to\n"
	.string "absorb health with each strike. The\p"
	.string "Life Orb boosts the power of your\n"
	.string "Pokémon's moves at the cost of some of\p"
	.string "its health with each attack.\n"
	.string "The Heavy DutyBoots grant immunity\p"
	.string "to hazards on entry. I threw in\n"
	.string "some of my favorite Mega Stones\p"
	.string "as well. Good luck!$"

Justin_Greeting::
# 211 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "HOO-HAH! Is this finally a worthy\n"
	.string "opponent? I can tell that you seem\p"
	.string "pretty strong, let's see if my instincts\n"
	.string "are correct! What do you say, will you\l"
	.string "battle with me?$"

Justin_Outro::
# 219 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "My instincts were right!$"

PostBattle_Justin::
# 224 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Gotta. Get. Stronger.$"

Xavier_ExplainItems::
# 287 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "This move Earthquake carried me\n"
	.string "through many a Pearl run back in the\p"
	.string "day. Though, this should game be a bit\n"
	.string "more challenging (unless you use\p"
	.string "Torterra because he's the GOAT, don't\n"
	.string "let anyone else tell you otherwise).\p"
	.string "What could be better than a picnic on\n"
	.string "his back? Maybe a Starly in the tree.\p"
	.string "Anyways, hope you like the Mega sprite,\n"
	.string "I designed it myself!$"

Xavier_Greeting::
# 300 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Yo! I was just about to have lunch on\n"
	.string "my Torterra's back, but I guess that\p"
	.string "can wait. Do you want to battle in the\n"
	.string "mean time?$"

Xavier_Outro::
# 307 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "Well now you've gone and spoiled my\n"
	.string "appetite...$"

PostBattle_Xavier::
# 313 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "... don't even deserve this sandwich...$"
