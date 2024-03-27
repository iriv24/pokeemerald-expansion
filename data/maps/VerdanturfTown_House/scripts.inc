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
VerdanturfTown_House_EventScript_Ursula::
# 30 "data/maps/VerdanturfTown_House/scripts.pory"
	trainerbattle_double TRAINER_URSULA, VerdanturfTown_House_Text_UrsulaIntro, VerdanturfTown_House_Text_UrsulaDefeat, VerdanturfTown_House_Text_UrsulaNotEnoughMons, VerdanturfTown_House_EventScript_GiveSetupTms
# 31 "data/maps/VerdanturfTown_House/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SETUP_TMS, VerdanturfTown_House_EventScript_GiveSetupTms
# 32 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_UrsulaPostBattle, MSGBOX_DEFAULT
# 33 "data/maps/VerdanturfTown_House/scripts.pory"
	release
# 34 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 35 "data/maps/VerdanturfTown_House/scripts.pory"

# 36 "data/maps/VerdanturfTown_House/scripts.pory"

# 37 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_EventScript_GiveSetupTms::
# 38 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 39 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 40 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_DRAGON_DANCE
# 41 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_ROOST
# 42 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_POWER_UP_PUNCH
# 43 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 44 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_ROCK_POLISH
# 45 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_SWORDS_DANCE
# 46 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_FLAME_CHARGE
# 47 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_TRAILBLAZE
# 48 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_WORK_UP
# 49 "data/maps/VerdanturfTown_House/scripts.pory"
	setflag FLAG_RECEIVED_SETUP_TMS
# 50 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_ExplainTms, MSGBOX_DEFAULT
# 51 "data/maps/VerdanturfTown_House/scripts.pory"
	release
# 52 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 53 "data/maps/VerdanturfTown_House/scripts.pory"

# 54 "data/maps/VerdanturfTown_House/scripts.pory"

# 55 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_UrsulaIntro:
# 56 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Welcome to my dance studio! I see you\n"
# 57 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "have the Dynamo Badge now, not too\p"
# 58 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "shabby! You may be a good at Pokémon\n"
# 59 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "battles, but let's see how you fare in a\l"
# 60 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "dance battle!$"
# 61 "data/maps/VerdanturfTown_House/scripts.pory"

# 62 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_UrsulaDefeat:
# 63 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Nice moves! Now I've got some nice\n"
# 64 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "moves for you to take!$"
# 65 "data/maps/VerdanturfTown_House/scripts.pory"

# 66 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_UrsulaNotEnoughMons:
# 67 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Come back when you have enough\n"
# 68 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Pokémon for a dance battle!$"
# 69 "data/maps/VerdanturfTown_House/scripts.pory"

# 70 "data/maps/VerdanturfTown_House/scripts.pory"

# 71 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_ExplainTms:
# 72 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Now THOSE are some nice moves! Good\n"
# 73 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "luck against my sister, if you ever make\l"
# 74 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "it far enough to meet her!$"
# 75 "data/maps/VerdanturfTown_House/scripts.pory"

# 76 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_UrsulaPostBattle:
# 77 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Back to dancing for me!$\n"
# 78 "data/maps/VerdanturfTown_House/scripts.pory"

# 79 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_MorePassion:
# 80 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "More passion! More passion! More\n"
# 81 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "passion! More energy! More energy!$"
# 82 "data/maps/VerdanturfTown_House/scripts.pory"

# 83 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_ImproveFootwork:
# 84 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "I've got to improve my footwork!$"
# 85 "data/maps/VerdanturfTown_House/scripts.pory"

# 86 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_LittleBoyDancing:
# 87 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Whew! I'm pooped!$"
# 88 "data/maps/VerdanturfTown_House/scripts.pory"

# 89 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_MomDancing:
# 90 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "He's becoming such a good little dancer,\n"
# 91 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "I'm so proud of him!$"
# 92 "data/maps/VerdanturfTown_House/scripts.pory"

# 93 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_DadDancing:
# 94 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Where does she get all this energy?$"
# 95 "data/maps/VerdanturfTown_House/scripts.pory"

# 96 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_LittleGirlDancing:
# 97 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Look at my twirls daddy!!!$"
