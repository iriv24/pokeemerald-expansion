# 1 "data/maps/FortreeCity_House5/scripts.pory"

# 2 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_MapScripts::
# 3 "data/maps/FortreeCity_House5/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House5/scripts.pory"

# 5 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_EventScript_PokefanF::
# 6 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_Text_TreeHousesAreGreat, MSGBOX_NPC
# 7 "data/maps/FortreeCity_House5/scripts.pory"
	end
# 8 "data/maps/FortreeCity_House5/scripts.pory"

# 9 "data/maps/FortreeCity_House5/scripts.pory"

# 10 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_EventScript_Zigzagoon::
# 11 "data/maps/FortreeCity_House5/scripts.pory"
	lock
# 12 "data/maps/FortreeCity_House5/scripts.pory"
	faceplayer
# 13 "data/maps/FortreeCity_House5/scripts.pory"
	waitse
# 14 "data/maps/FortreeCity_House5/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 15 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_Text_Zigzagoon, MSGBOX_DEFAULT
# 16 "data/maps/FortreeCity_House5/scripts.pory"
	waitmoncry
# 17 "data/maps/FortreeCity_House5/scripts.pory"
	release
# 18 "data/maps/FortreeCity_House5/scripts.pory"
	end
# 19 "data/maps/FortreeCity_House5/scripts.pory"

# 20 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_Text_TreeHousesAreGreat:
# 21 "data/maps/FortreeCity_House5/scripts.pory"
	.string "The tree houses of FORTREE are great!\p"
# 22 "data/maps/FortreeCity_House5/scripts.pory"
	.string "I think it's the number one town for\n"
# 23 "data/maps/FortreeCity_House5/scripts.pory"
	.string "living together with POKéMON.$"
# 24 "data/maps/FortreeCity_House5/scripts.pory"

# 25 "data/maps/FortreeCity_House5/scripts.pory"

# 26 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_Text_Zigzagoon:
# 27 "data/maps/FortreeCity_House5/scripts.pory"
	.string "ZIGZAGOON: Bufuu!$"
# 28 "data/maps/FortreeCity_House5/scripts.pory"

# 29 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_EventScript_PC::
# 30 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EmailFromBill, MSGBOX_SIGN
# 31 "data/maps/FortreeCity_House5/scripts.pory"
	end

FortreeCity_House5_EventScript_Isaac::
# 36 "data/maps/FortreeCity_House5/scripts.pory"
	lockall
# 37 "data/maps/FortreeCity_House5/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 38 "data/maps/FortreeCity_House5/scripts.pory"
	goto_if_set FLAG_RECEIVED_WATER_MEGAS, FortreeCity_House5_EventScript_IsaacDefeated
# 39 "data/maps/FortreeCity_House5/scripts.pory"
	goto_if_set FLAG_DECLINED_ISAAC_BATTLE, FortreeCity_House5_EventScript_IsaacRequestBattleAgain
# 40 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Isaac_Greeting, MSGBOX_YESNO
# 41 "data/maps/FortreeCity_House5/scripts.pory"
	goto FortreeCity_House5_EventScript_BattleIsaacPrompt
	end


FortreeCity_House5_EventScript_IsaacRequestBattleAgain::
# 46 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 47 "data/maps/FortreeCity_House5/scripts.pory"
	goto FortreeCity_House5_EventScript_BattleIsaacPrompt
	end


FortreeCity_House5_EventScript_BattleIsaacPrompt::
# 52 "data/maps/FortreeCity_House5/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_House5_EventScript_BattleIsaac
# 53 "data/maps/FortreeCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_House5_EventScript_DeclineIsaacBattle
# 54 "data/maps/FortreeCity_House5/scripts.pory"
	closemessage
	end


FortreeCity_House5_EventScript_DeclineIsaacBattle::
# 59 "data/maps/FortreeCity_House5/scripts.pory"
	setflag FLAG_DECLINED_ISAAC_BATTLE
# 60 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 61 "data/maps/FortreeCity_House5/scripts.pory"
	release
	end


FortreeCity_House5_EventScript_BattleIsaac::
# 66 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_EventScript_BattleIsaac_Text_0, MSGBOX_DEFAULT
# 67 "data/maps/FortreeCity_House5/scripts.pory"
	trainerbattle_no_intro TRAINER_ISAAC, Isaac_Outro
# 68 "data/maps/FortreeCity_House5/scripts.pory"
	goto FortreeCity_House5_EventScript_IsaacGiveItems
	return


FortreeCity_House5_EventScript_IsaacDefeated::
# 74 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox PostBattle_Isaac, MSGBOX_DEFAULT
# 75 "data/maps/FortreeCity_House5/scripts.pory"
	releaseall
	end


FortreeCity_House5_EventScript_IsaacGiveItems::
# 80 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_EMPOLEONITE_O
# 81 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_BLASTOISINITE
# 82 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_SWAMPERTITE
# 83 "data/maps/FortreeCity_House5/scripts.pory"
	giveitem ITEM_TM_SUBSTITUTE
# 84 "data/maps/FortreeCity_House5/scripts.pory"
	setflag FLAG_RECEIVED_WATER_MEGAS
# 85 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox Isaac_ExplainItems
# 86 "data/maps/FortreeCity_House5/scripts.pory"
	release
	end


FortreeCity_House5_EventScript_BattleIsaac_Text_0:
# 66 "data/maps/FortreeCity_House5/scripts.pory"
	.string "You're on!$"

Isaac_ExplainItems::
# 90 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Drain Punch allows your Pokémon to\n"
	.string "absorb health with each strike. The\p"
	.string "Life Orb boosts the power of your\n"
	.string "Pokémon's moves at the cost of some of\p"
	.string "its health with each attack.\n"
	.string "The Heavy DutyBoots grant immunity\p"
	.string "to hazards on entry. I threw in\n"
	.string "some of my favorite Mega Stones\p"
	.string "as well. Good luck!$"

Isaac_Greeting::
# 102 "data/maps/FortreeCity_House5/scripts.pory"
	.string "HOO-HAH! Is this finally a worthy\n"
	.string "opponent? I can tell that you seem\p"
	.string "pretty strong, let's see if my instincts\n"
	.string "are correct! What do you say, will you\l"
	.string "battle with me?$"

Isaac_Outro::
# 110 "data/maps/FortreeCity_House5/scripts.pory"
	.string "My instincts were right!$"

PostBattle_Isaac::
# 115 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Gotta. Get. Stronger.$"
