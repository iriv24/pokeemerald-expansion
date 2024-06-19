# 1 "data/maps/AquaHideout_1F/scripts.pory"

# 2 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_MapScripts::
# 3 "data/maps/AquaHideout_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AquaHideout_1F/scripts.pory"

# 5 "data/maps/AquaHideout_1F/scripts.pory"
@ The below two entrance guards give hints about what to do to progress the story
# 6 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
# 7 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 8 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 9 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_SlateportHint1
# 10 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
# 11 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 12 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 13 "data/maps/AquaHideout_1F/scripts.pory"

# 14 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint1::
# 15 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
# 16 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 17 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 18 "data/maps/AquaHideout_1F/scripts.pory"

# 19 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint1::
# 20 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
# 21 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 22 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 23 "data/maps/AquaHideout_1F/scripts.pory"

# 24 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
# 25 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 26 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 27 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_SlateportHint2
# 28 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
# 29 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 30 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 31 "data/maps/AquaHideout_1F/scripts.pory"

# 32 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint2::
# 33 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
# 34 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 35 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 36 "data/maps/AquaHideout_1F/scripts.pory"

# 37 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint2::
# 38 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
# 39 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 40 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 41 "data/maps/AquaHideout_1F/scripts.pory"

# 42 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1::
# 43 "data/maps/AquaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Intro, AquaHideout_1F_Text_Grunt1Defeat, AquaHideout_1F_EventScript_Grunt1Defeated
# 44 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 46 "data/maps/AquaHideout_1F/scripts.pory"

# 47 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1Defeated::
# 48 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
# 49 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 50 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 51 "data/maps/AquaHideout_1F/scripts.pory"

# 52 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_OurBossIsSnatchingSomething:
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 54 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Team Aqua?\p"
# 55 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our Boss isn't here! He's gone off to\n"
# 56 "data/maps/AquaHideout_1F/scripts.pory"
	.string "snatch something important!\p"
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 58 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Where did he go?\p"
# 59 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 60 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 61 "data/maps/AquaHideout_1F/scripts.pory"

# 62 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_WhereMightMagmaHideoutBe:
# 63 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\n"
# 64 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Are you a Team Magma grunt?\p"
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I hear that Team Magma is trying to\n"
# 66 "data/maps/AquaHideout_1F/scripts.pory"
	.string "awaken an awesome Pokémon at their\l"
# 67 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Hideout.\p"
# 68 "data/maps/AquaHideout_1F/scripts.pory"
	.string "But where might their Hideout be?$"
# 69 "data/maps/AquaHideout_1F/scripts.pory"

# 70 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossWentToJackASubmarine:
# 71 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 72 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Team Aqua?\p"
# 73 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our Boss isn't here!\n"
# 74 "data/maps/AquaHideout_1F/scripts.pory"
	.string "He's gone off to jack a submarine!\p"
# 75 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 76 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Where did he go?\p"
# 77 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 78 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 79 "data/maps/AquaHideout_1F/scripts.pory"

# 80 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsOnRoute122:
# 81 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 82 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Team Aqua?\p"
# 83 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our Boss isn't here! He's on his way to\n"
# 84 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Mt. Pyre on Route 122!\p"
# 85 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 86 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Why did he go?\p"
# 87 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 88 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 89 "data/maps/AquaHideout_1F/scripts.pory"

# 90 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TeamMagmaAtMtChimney:
# 91 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\n"
# 92 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Are you a Team Magma grunt?\p"
# 93 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I hear that Team Magma is after\n"
# 94 "data/maps/AquaHideout_1F/scripts.pory"
	.string "an awesome Pokémon at Mt. Chimney.\p"
# 95 "data/maps/AquaHideout_1F/scripts.pory"
	.string "But what is that Pokémon like?$"
# 96 "data/maps/AquaHideout_1F/scripts.pory"

# 97 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsInSlateportCity:
# 98 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with\n"
# 99 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Team Aqua?\p"
# 100 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our Boss isn't here!\n"
# 101 "data/maps/AquaHideout_1F/scripts.pory"
	.string "He's on his way to Slateport City!\p"
# 102 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 103 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Why did he go?\p"
# 104 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 105 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 106 "data/maps/AquaHideout_1F/scripts.pory"

# 107 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Intro:
# 108 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ayiyiyi!\n"
# 109 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Suspicious character spotted!$"
# 110 "data/maps/AquaHideout_1F/scripts.pory"

# 111 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Defeat:
# 112 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Grrrrr…\n"
# 113 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I lost it!$"
# 114 "data/maps/AquaHideout_1F/scripts.pory"

# 115 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1PostBattle:
# 116 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I took the loss for the Team,\n"
# 117 "data/maps/AquaHideout_1F/scripts.pory"
	.string "but I did my job…$"
