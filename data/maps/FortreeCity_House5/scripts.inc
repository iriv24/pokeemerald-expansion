# 1 "data/maps/FortreeCity_House5/scripts.pory"

# 2 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_MapScripts::
# 3 "data/maps/FortreeCity_House5/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House5/scripts.pory"

# 5 "data/maps/FortreeCity_House5/scripts.pory"

# 6 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_EventScript_IsaacPC::
# 7 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_IsaacsComputer, MSGBOX_SIGN
# 8 "data/maps/FortreeCity_House5/scripts.pory"
	end
# 9 "data/maps/FortreeCity_House5/scripts.pory"

# 10 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_IsaacsComputer:
# 11 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Hey, it's the creator's computer! Wait,\n"
# 12 "data/maps/FortreeCity_House5/scripts.pory"
	.string "he's making Drake do WHAT?$"
# 13 "data/maps/FortreeCity_House5/scripts.pory"

# 14 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_EventScript_JustinPC::
# 15 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_JustinsComputer, MSGBOX_SIGN
# 16 "data/maps/FortreeCity_House5/scripts.pory"
	end
# 17 "data/maps/FortreeCity_House5/scripts.pory"

# 18 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_JustinsComputer:
# 19 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Man, he's really got this guy editing\n"
# 20 "data/maps/FortreeCity_House5/scripts.pory"
	.string "normal trainers, wild encounters, and\p"
# 21 "data/maps/FortreeCity_House5/scripts.pory"
	.string "manually copying data from RRDex.\n"
# 22 "data/maps/FortreeCity_House5/scripts.pory"
	.string "That's crazy.$"
# 23 "data/maps/FortreeCity_House5/scripts.pory"

# 24 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_EventScript_XavierPC::
# 25 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_XaviersComputer, MSGBOX_SIGN
# 26 "data/maps/FortreeCity_House5/scripts.pory"
	end
# 27 "data/maps/FortreeCity_House5/scripts.pory"

# 28 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_XaviersComputer:
# 29 "data/maps/FortreeCity_House5/scripts.pory"
	.string "So that's how they made the Mega\n"
# 30 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Torterra sprite.$"

FortreeCity_House5_EventScript_Isaac::
# 35 "data/maps/FortreeCity_House5/scripts.pory"
	lockall
# 36 "data/maps/FortreeCity_House5/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 37 "data/maps/FortreeCity_House5/scripts.pory"
	goto_if_set FLAG_RECEIVED_WATER_MEGAS, FortreeCity_House5_EventScript_IsaacDefeated
# 38 "data/maps/FortreeCity_House5/scripts.pory"
	goto_if_set FLAG_DECLINED_ISAAC_BATTLE, FortreeCity_House5_EventScript_IsaacRequestBattleAgain
# 39 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Isaac_Greeting, MSGBOX_YESNO
# 40 "data/maps/FortreeCity_House5/scripts.pory"
	goto FortreeCity_House5_EventScript_BattleIsaacPrompt
	end


FortreeCity_House5_EventScript_IsaacRequestBattleAgain::
# 45 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 46 "data/maps/FortreeCity_House5/scripts.pory"
	goto FortreeCity_House5_EventScript_BattleIsaacPrompt
	end


FortreeCity_House5_EventScript_BattleIsaacPrompt::
# 51 "data/maps/FortreeCity_House5/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_House5_EventScript_BattleIsaac
# 52 "data/maps/FortreeCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_House5_EventScript_DeclineIsaacBattle
# 53 "data/maps/FortreeCity_House5/scripts.pory"
	closemessage
	end


FortreeCity_House5_EventScript_DeclineIsaacBattle::
# 58 "data/maps/FortreeCity_House5/scripts.pory"
	setflag FLAG_DECLINED_ISAAC_BATTLE
# 59 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 60 "data/maps/FortreeCity_House5/scripts.pory"
	release
	end


FortreeCity_House5_EventScript_BattleIsaac::
# 65 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_EventScript_BattleIsaac_Text_0, MSGBOX_DEFAULT
# 66 "data/maps/FortreeCity_House5/scripts.pory"
	trainerbattle_no_intro TRAINER_ISAAC, Isaac_Outro
# 67 "data/maps/FortreeCity_House5/scripts.pory"
	goto FortreeCity_House5_EventScript_IsaacGiveItems
	return


FortreeCity_House5_EventScript_IsaacDefeated::
# 73 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox PostBattle_Isaac, MSGBOX_DEFAULT
# 74 "data/maps/FortreeCity_House5/scripts.pory"
	releaseall
	end


FortreeCity_House5_EventScript_IsaacGiveItems::
# 79 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_EMPOLEONITE_O
# 80 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_BLASTOISINITE
# 81 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_SWAMPERTITE
# 82 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_TM_SUBSTITUTE
# 83 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_CHOICE_SCARF
# 84 "data/maps/FortreeCity_House5/scripts.pory"
	setflag FLAG_RECEIVED_WATER_MEGAS
# 85 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Isaac_ExplainItems
# 86 "data/maps/FortreeCity_House5/scripts.pory"
	release
	end


FortreeCity_House5_EventScript_Justin::
# 136 "data/maps/FortreeCity_House5/scripts.pory"
	lockall
# 137 "data/maps/FortreeCity_House5/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 138 "data/maps/FortreeCity_House5/scripts.pory"
	goto_if_set FLAG_RECEIVED_FIRE_MEGAS, FortreeCity_House5_EventScript_JustinDefeated
# 139 "data/maps/FortreeCity_House5/scripts.pory"
	goto_if_set FLAG_DECLINED_JUSTIN_BATTLE, FortreeCity_House5_EventScript_JustinRequestBattleAgain
# 140 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Justin_Greeting, MSGBOX_YESNO
# 141 "data/maps/FortreeCity_House5/scripts.pory"
	goto FortreeCity_House5_EventScript_BattleJustinPrompt
	end


FortreeCity_House5_EventScript_JustinRequestBattleAgain::
# 146 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 147 "data/maps/FortreeCity_House5/scripts.pory"
	goto FortreeCity_House5_EventScript_BattleJustinPrompt
	end


FortreeCity_House5_EventScript_BattleJustinPrompt::
# 152 "data/maps/FortreeCity_House5/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_House5_EventScript_BattleJustin
# 153 "data/maps/FortreeCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_House5_EventScript_DeclineJustinBattle
# 154 "data/maps/FortreeCity_House5/scripts.pory"
	closemessage
	end


FortreeCity_House5_EventScript_DeclineJustinBattle::
# 159 "data/maps/FortreeCity_House5/scripts.pory"
	setflag FLAG_DECLINED_JUSTIN_BATTLE
# 160 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 161 "data/maps/FortreeCity_House5/scripts.pory"
	release
	end


FortreeCity_House5_EventScript_BattleJustin::
# 166 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_EventScript_BattleJustin_Text_0, MSGBOX_DEFAULT
# 167 "data/maps/FortreeCity_House5/scripts.pory"
	trainerbattle_no_intro TRAINER_JUSTIN, Justin_Outro
# 168 "data/maps/FortreeCity_House5/scripts.pory"
	goto FortreeCity_House5_EventScript_JustinGiveItems
	return


FortreeCity_House5_EventScript_JustinDefeated::
# 174 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox PostBattle_Justin, MSGBOX_DEFAULT
# 175 "data/maps/FortreeCity_House5/scripts.pory"
	releaseall
	end


FortreeCity_House5_EventScript_JustinGiveItems::
# 180 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_CHARIZARDITE_X
# 181 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y
# 182 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_BLAZIKENITE
# 183 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_TM_SUBSTITUTE
# 184 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_CHOICE_SPECS
# 185 "data/maps/FortreeCity_House5/scripts.pory"
	setflag FLAG_RECEIVED_FIRE_MEGAS
# 186 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Justin_ExplainItems
# 187 "data/maps/FortreeCity_House5/scripts.pory"
	release
	end


FortreeCity_House5_EventScript_Xavier::
# 224 "data/maps/FortreeCity_House5/scripts.pory"
	lockall
# 225 "data/maps/FortreeCity_House5/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 226 "data/maps/FortreeCity_House5/scripts.pory"
	goto_if_set FLAG_RECEIVED_GRASS_MEGAS, FortreeCity_House5_EventScript_XavierDefeated
# 227 "data/maps/FortreeCity_House5/scripts.pory"
	goto_if_set FLAG_DECLINED_XAVIER_BATTLE, FortreeCity_House5_EventScript_XavierRequestBattleAgain
# 228 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Xavier_Greeting, MSGBOX_YESNO
# 229 "data/maps/FortreeCity_House5/scripts.pory"
	goto FortreeCity_House5_EventScript_BattleXavierPrompt
	end


FortreeCity_House5_EventScript_XavierRequestBattleAgain::
# 234 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 235 "data/maps/FortreeCity_House5/scripts.pory"
	goto FortreeCity_House5_EventScript_BattleXavierPrompt
	end


FortreeCity_House5_EventScript_BattleXavierPrompt::
# 240 "data/maps/FortreeCity_House5/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_House5_EventScript_BattleXavier
# 241 "data/maps/FortreeCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_House5_EventScript_DeclineXavierBattle
# 242 "data/maps/FortreeCity_House5/scripts.pory"
	closemessage
	end


FortreeCity_House5_EventScript_DeclineXavierBattle::
# 247 "data/maps/FortreeCity_House5/scripts.pory"
	setflag FLAG_DECLINED_XAVIER_BATTLE
# 248 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 249 "data/maps/FortreeCity_House5/scripts.pory"
	release
	end


FortreeCity_House5_EventScript_BattleXavier::
# 254 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_EventScript_BattleJustin_Text_0, MSGBOX_DEFAULT
# 255 "data/maps/FortreeCity_House5/scripts.pory"
	trainerbattle_no_intro TRAINER_XAVIER, Xavier_Outro
# 256 "data/maps/FortreeCity_House5/scripts.pory"
	goto FortreeCity_House5_EventScript_XavierGiveItems
	return


FortreeCity_House5_EventScript_XavierDefeated::
# 262 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox PostBattle_Xavier, MSGBOX_DEFAULT
# 263 "data/maps/FortreeCity_House5/scripts.pory"
	releaseall
	end


FortreeCity_House5_EventScript_XavierGiveItems::
# 268 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_TORTERRITE
# 269 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_VENUSAURITE
# 270 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_SCEPTILITE
# 271 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_TM_SUBSTITUTE
# 272 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 273 "data/maps/FortreeCity_House5/scripts.pory"
	setflag FLAG_RECEIVED_GRASS_MEGAS
# 274 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Xavier_ExplainItems
# 275 "data/maps/FortreeCity_House5/scripts.pory"
	release
	end


FortreeCity_House5_EventScript_BattleIsaac_Text_0:
# 65 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Alright, let's do this.$"

FortreeCity_House5_EventScript_BattleJustin_Text_0:
# 166 "data/maps/FortreeCity_House5/scripts.pory"
	.string "You're on!$"

Isaac_ExplainItems::
# 90 "data/maps/FortreeCity_House5/scripts.pory"
	.string "There you go, as promised. Now, keep\n"
	.string "moving forward! There are still plenty\p"
	.string "of tough battles ahead, but if you've\n"
	.string "made it this far, I believe you can beat\p"
	.string "the game. Thanks again for playing,\n"
	.string "good luck out there, {PLAYER}!$"

Isaac_Greeting::
# 99 "data/maps/FortreeCity_House5/scripts.pory"
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
# 120 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Looks like you've got a pretty good\n"
	.string "team over there!$"

PostBattle_Isaac::
# 126 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Can't believe I got beat in my own game,\n"
	.string "definitely gonna give myself a cracked\l"
	.string "team in the next version.$"

Justin_ExplainItems::
# 191 "data/maps/FortreeCity_House5/scripts.pory"
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
# 203 "data/maps/FortreeCity_House5/scripts.pory"
	.string "HOO-HAH! Is this finally a worthy\n"
	.string "opponent? I can tell that you seem\p"
	.string "pretty strong, let's see if my instincts\n"
	.string "are correct! What do you say, will you\l"
	.string "battle with me?$"

Justin_Outro::
# 211 "data/maps/FortreeCity_House5/scripts.pory"
	.string "My instincts were right!$"

PostBattle_Justin::
# 216 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Gotta. Get. Stronger.$"

Xavier_ExplainItems::
# 279 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Drain Punch allows your Pokémon to\n"
	.string "absorb health with each strike. The\p"
	.string "Life Orb boosts the power of your\n"
	.string "Pokémon's moves at the cost of some of\p"
	.string "its health with each attack.\n"
	.string "The Heavy DutyBoots grant immunity\p"
	.string "to hazards on entry. I threw in\n"
	.string "some of my favorite Mega Stones\p"
	.string "as well. Good luck!$"

Xavier_Greeting::
# 291 "data/maps/FortreeCity_House5/scripts.pory"
	.string "HOO-HAH! Is this finally a worthy\n"
	.string "opponent? I can tell that you seem\p"
	.string "pretty strong, let's see if my instincts\n"
	.string "are correct! What do you say, will you\l"
	.string "battle with me?$"

Xavier_Outro::
# 299 "data/maps/FortreeCity_House5/scripts.pory"
	.string "My instincts were right!$"

PostBattle_Xavier::
# 304 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Gotta. Get. Stronger.$"
