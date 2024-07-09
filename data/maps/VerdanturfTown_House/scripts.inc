# 1 "data/maps/VerdanturfTown_House/scripts.pory"

# 2 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_MapScripts::
# 3 "data/maps/VerdanturfTown_House/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_House/scripts.pory"

# 5 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_EventScript_Man1::
# 6 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_MorePassion, MSGBOX_NPC
# 7 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 8 "data/maps/VerdanturfTown_House/scripts.pory"

# 9 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_EventScript_Woman1::
# 10 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_ImproveFootwork, MSGBOX_NPC
# 11 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 12 "data/maps/VerdanturfTown_House/scripts.pory"

# 13 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_EventScript_LittleBoyDancing::
# 14 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_LittleBoyDancing, MSGBOX_NPC
# 15 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 16 "data/maps/VerdanturfTown_House/scripts.pory"

# 17 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_EventScript_MomDancing::
# 18 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_MomDancing, MSGBOX_NPC
# 19 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 20 "data/maps/VerdanturfTown_House/scripts.pory"

# 21 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_EventScript_DadDancing::
# 22 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_DadDancing, MSGBOX_NPC
# 23 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 24 "data/maps/VerdanturfTown_House/scripts.pory"

# 25 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_EventScript_LittleGirlDancing::
# 26 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_LittleGirlDancing, MSGBOX_NPC
# 27 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 28 "data/maps/VerdanturfTown_House/scripts.pory"

# 29 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_MorePassion:
# 30 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "More passion! More passion! More\n"
# 31 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "passion! More energy! More energy!$"
# 32 "data/maps/VerdanturfTown_House/scripts.pory"

# 33 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_ImproveFootwork:
# 34 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "I've got to improve my footwork!$"
# 35 "data/maps/VerdanturfTown_House/scripts.pory"

# 36 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_LittleBoyDancing:
# 37 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Whew! I'm pooped!$"
# 38 "data/maps/VerdanturfTown_House/scripts.pory"

# 39 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_MomDancing:
# 40 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "He's becoming such a good little dancer,\n"
# 41 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "I'm so proud of him!$"
# 42 "data/maps/VerdanturfTown_House/scripts.pory"

# 43 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_DadDancing:
# 44 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Where does she get all this energy?$"
# 45 "data/maps/VerdanturfTown_House/scripts.pory"

# 46 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_LittleGirlDancing:
# 47 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Look at my twirls daddy!!!$"

VerdanturfTown_House_EventScript_Ursula::
# 52 "data/maps/VerdanturfTown_House/scripts.pory"
	lockall
# 53 "data/maps/VerdanturfTown_House/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 54 "data/maps/VerdanturfTown_House/scripts.pory"
	goto_if_set FLAG_RECEIVED_SETUP_TMS, VerdanturfTown_EventScript_UrsulaDefeated
# 55 "data/maps/VerdanturfTown_House/scripts.pory"
	goto_if_set FLAG_DECLINED_DANCE_BATTLE, VerdanturfTown_EventScript_UrsulaRequestBattleAgain
# 56 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox UrsulaGreeting, MSGBOX_DEFAULT
# 57 "data/maps/VerdanturfTown_House/scripts.pory"
	waitmessage
# 58 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox WillYouDance, MSGBOX_YESNO
# 59 "data/maps/VerdanturfTown_House/scripts.pory"
	goto VerdanturfTown_EventScript_BattleUrsulaPrompt
	end


VerdanturfTown_EventScript_UrsulaRequestBattleAgain::
# 64 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox Ready_Dance_Yet, MSGBOX_YESNO
# 65 "data/maps/VerdanturfTown_House/scripts.pory"
	goto VerdanturfTown_EventScript_BattleUrsulaPrompt
	end


VerdanturfTown_EventScript_BattleUrsulaPrompt::
# 70 "data/maps/VerdanturfTown_House/scripts.pory"
	call_if_eq VAR_RESULT, YES, VerdanturfTown_EventScript_BattleUrsula
# 71 "data/maps/VerdanturfTown_House/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VerdanturfTown_EventScript_DeclineUrsulaBattle
# 72 "data/maps/VerdanturfTown_House/scripts.pory"
	closemessage
	end


VerdanturfTown_EventScript_DeclineUrsulaBattle::
# 77 "data/maps/VerdanturfTown_House/scripts.pory"
	setflag FLAG_DECLINED_DANCE_BATTLE
# 78 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 79 "data/maps/VerdanturfTown_House/scripts.pory"
	release
	end


VerdanturfTown_EventScript_BattleUrsula::
# 84 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_EventScript_BattleUrsula_Text_0, MSGBOX_DEFAULT
# 85 "data/maps/VerdanturfTown_House/scripts.pory"
	trainerbattle_no_intro TRAINER_URSULA, UrsulaDefeat
# 86 "data/maps/VerdanturfTown_House/scripts.pory"
	goto VerdanturfTown_EventScript_UrsulaGiveItems
	return


VerdanturfTown_EventScript_UrsulaDefeated::
# 92 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_UrsulaPostBattle, MSGBOX_DEFAULT
# 93 "data/maps/VerdanturfTown_House/scripts.pory"
	releaseall
	end


VerdanturfTown_EventScript_UrsulaGiveItems::
# 98 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 99 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 100 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_POWER_UP_PUNCH
# 101 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 102 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_ROCK_POLISH
# 103 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_FLAME_CHARGE
# 104 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_TRAILBLAZE
# 105 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_WORK_UP
# 106 "data/maps/VerdanturfTown_House/scripts.pory"
	setflag FLAG_RECEIVED_SETUP_TMS
# 107 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_ExplainTms
# 108 "data/maps/VerdanturfTown_House/scripts.pory"
	release
	end


VerdanturfTown_EventScript_BattleUrsula_Text_0:
# 84 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Let's boogie!$"

UrsulaGreeting::
# 112 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Welcome to my dance studio! I see you\n"
	.string "have the Dynamo Badge now, not too\p"
	.string "shabby! You may be a good at Pokémon\n"
	.string "battles, but let's see how you fare in a\p"
	.string "dance battle! And by the way, this is\n"
	.string "going to be a double battle, so I'd\p"
	.string "recommend bringing more than one\n"
	.string "Pokémon to dance!$"

UrsulaDefeat::
# 124 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Nice moves! Now I've got some nice\n"
	.string "moves for you to take!$"

VerdanturfTown_House_Text_ExplainTms::
# 129 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Now THOSE are some nice moves! Good\n"
	.string "luck against my sister, if you ever make\l"
	.string "it far enough to meet her!$"

VerdanturfTown_House_Text_UrsulaPostBattle::
# 137 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Back to dancing for me!$"

WillYouDance::
# 141 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "So what do you say, want to\n"
	.string "dance?$"

Ready_Dance_Yet::
# 146 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Ready for a dance?$"
