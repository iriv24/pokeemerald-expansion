# 1 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 3 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_MapScripts::
# 4 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_OnTransition
# 5 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.byte 0
# 6 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 7 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_OnTransition:
# 8 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setflag FLAG_VISITED_WEATHER_INST
# 9 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 10 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 11 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1::
# 12 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 13 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 14 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_1F_EventScript_StudyingRain
# 15 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 16 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 17 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 18 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_1F_EventScript_StudyingRain  @ Both defeated
# 19 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather, MSGBOX_DEFAULT
# 20 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 21 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 22 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 23 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated::
# 24 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	addvar VAR_0x8004, 1
# 25 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 26 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 27 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_StudyingRain::
# 28 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_ProfStudyingRain, MSGBOX_DEFAULT
# 29 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 30 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 31 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 32 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker2::
# 33 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
# 34 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 35 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 36 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Bed::
# 37 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lockall
# 38 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
# 39 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 40 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 41 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	releaseall
# 42 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 43 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 44 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt1::
# 45 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
# 46 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 48 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 49 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt4::
# 50 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
# 51 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 53 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 54 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Intro:
# 55 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The boss got interested in\n"
# 56 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "the research they have going here,\l"
# 57 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "so he sent us out.\p"
# 58 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "You quit meddling!$"
# 59 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 60 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Defeat:
# 61 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Blast it…\n"
# 62 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Blasted by a kid…$"
# 63 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 64 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1PostBattle:
# 65 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Our boss knows everything.\p"
# 66 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "But I'm just a grunt. What would I know\n"
# 67 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "about what he's thinking?$"
# 68 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 69 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Intro:
# 70 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\n"
# 71 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "What's a kid doing here?$"
# 72 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 73 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Defeat:
# 74 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\n"
# 75 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I lost?!$"
# 76 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 77 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4PostBattle:
# 78 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Oh, no…\n"
# 79 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I'll catch an earful for losing to a kid…\p"
# 80 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I should just take a nap in the bed…$"
# 81 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 82 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs:
# 83 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "While I was sleeping, everyone went\n"
# 84 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "upstairs!$"
# 85 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 86 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WowYoureStrong:
# 87 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Wow, you're really strong!\p"
# 88 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I wish I could be a Pokémon trainer\n"
# 89 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "like you!$"
# 90 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 91 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_ProfStudyingRain:
# 92 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The professor loves rain.\n"
# 93 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "That's a fact.\p"
# 94 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "But if it keeps raining, people will be in\n"
# 95 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "trouble. That's another fact.\p"
# 96 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "And thus, the professor is studying\n"
# 97 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "if the rain can be put to good use.$"
# 98 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 99 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather:
# 100 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "On the 2nd floor of the Institute,\n"
# 101 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "we study the weather patterns over\l"
# 102 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "the Hoenn region.\p"
# 103 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "We've been noticing temporary and\n"
# 104 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "isolated cases of droughts and\l"
# 105 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "heavy rain lately…$"
# 106 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 107 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo:
# 108 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Hello!\n"
# 109 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "We've been saved by your actions!\p"
# 110 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "What I don't understand is what on\n"
# 111 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "earth the Aquas were up to.$"
# 112 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 113 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_TakeRestInBed:
# 114 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "There's a bed…\n"
# 115 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Let's take a rest.$"
