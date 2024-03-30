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
	giveitem ITEM_TM_RAIN_DANCE
# 41 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_DRAGON_DANCE
# 42 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_ROOST
# 43 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_POWER_UP_PUNCH
# 44 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 45 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_ROCK_POLISH
# 46 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_SWORDS_DANCE
# 47 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_FLAME_CHARGE
# 48 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_TRAILBLAZE
# 49 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_WORK_UP
# 50 "data/maps/VerdanturfTown_House/scripts.pory"
	setflag FLAG_RECEIVED_SETUP_TMS
# 51 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_ExplainTms, MSGBOX_DEFAULT
# 52 "data/maps/VerdanturfTown_House/scripts.pory"
	release
# 53 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 54 "data/maps/VerdanturfTown_House/scripts.pory"

# 55 "data/maps/VerdanturfTown_House/scripts.pory"

# 56 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_UrsulaIntro:
# 57 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Welcome to my dance studio! I see you\n"
# 58 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "have the Dynamo Badge now, not too\p"
# 59 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "shabby! You may be a good at Pokémon\n"
# 60 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "battles, but let's see how you fare in a\l"
# 61 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "dance battle!$"
# 62 "data/maps/VerdanturfTown_House/scripts.pory"

# 63 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_UrsulaDefeat:
# 64 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Nice moves! Now I've got some nice\n"
# 65 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "moves for you to take!$"
# 66 "data/maps/VerdanturfTown_House/scripts.pory"

# 67 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_UrsulaNotEnoughMons:
# 68 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Come back when you have enough\n"
# 69 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Pokémon for a dance battle!$"
# 70 "data/maps/VerdanturfTown_House/scripts.pory"

# 71 "data/maps/VerdanturfTown_House/scripts.pory"

# 72 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_ExplainTms:
# 73 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Now THOSE are some nice moves! Good\n"
# 74 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "luck against my sister, if you ever make\l"
# 75 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "it far enough to meet her!$"
# 76 "data/maps/VerdanturfTown_House/scripts.pory"

# 77 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_UrsulaPostBattle:
# 78 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Back to dancing for me!$\n"
# 79 "data/maps/VerdanturfTown_House/scripts.pory"

# 80 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_MorePassion:
# 81 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "More passion! More passion! More\n"
# 82 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "passion! More energy! More energy!$"
# 83 "data/maps/VerdanturfTown_House/scripts.pory"

# 84 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_ImproveFootwork:
# 85 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "I've got to improve my footwork!$"
# 86 "data/maps/VerdanturfTown_House/scripts.pory"

# 87 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_LittleBoyDancing:
# 88 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Whew! I'm pooped!$"
# 89 "data/maps/VerdanturfTown_House/scripts.pory"

# 90 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_MomDancing:
# 91 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "He's becoming such a good little dancer,\n"
# 92 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "I'm so proud of him!$"
# 93 "data/maps/VerdanturfTown_House/scripts.pory"

# 94 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_DadDancing:
# 95 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Where does she get all this energy?$"
# 96 "data/maps/VerdanturfTown_House/scripts.pory"

# 97 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_LittleGirlDancing:
# 98 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Look at my twirls daddy!!!$"
