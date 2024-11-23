# 1 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 3 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_MapScripts::
# 4 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.byte 0
# 5 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 6 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1::
# 7 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 8 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 9 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_1F_EventScript_StudyingRain
# 10 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 11 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 12 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 13 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_1F_EventScript_StudyingRain  @ Both defeated
# 14 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather, MSGBOX_DEFAULT
# 15 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 16 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 17 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 18 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated::
# 19 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	addvar VAR_0x8004, 1
# 20 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 21 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 22 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_StudyingRain::
# 23 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_ProfStudyingRain, MSGBOX_DEFAULT
# 24 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 25 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 26 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 27 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker2::
# 28 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
# 29 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 30 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 31 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Bed::
# 32 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lockall
# 33 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
# 34 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 35 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 36 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	releaseall
# 37 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 38 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 39 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt1::
# 40 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
# 41 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 43 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 44 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt4::
# 45 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
# 46 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 48 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 49 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Intro:
# 50 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The boss got interested in\n"
# 51 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "the research they have going here,\l"
# 52 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "so he sent us out.\p"
# 53 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "You quit meddling!$"
# 54 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 55 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Defeat:
# 56 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Blast it…\n"
# 57 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Blasted by a kid…$"
# 58 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 59 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1PostBattle:
# 60 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Our boss knows everything.\p"
# 61 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "But I'm just a grunt. What would I know\n"
# 62 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "about what he's thinking?$"
# 63 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 64 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Intro:
# 65 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\n"
# 66 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "What's a kid doing here?$"
# 67 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 68 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Defeat:
# 69 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\n"
# 70 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I lost?!$"
# 71 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 72 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4PostBattle:
# 73 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Oh, no…\n"
# 74 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I'll catch an earful for losing to a kid…\p"
# 75 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I should just take a nap in the bed…$"
# 76 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 77 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs:
# 78 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "While I was sleeping, everyone went\n"
# 79 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "upstairs!$"
# 80 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 81 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WowYoureStrong:
# 82 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Wow, you're really strong!\p"
# 83 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I wish I could be a Pokémon trainer\n"
# 84 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "like you!$"
# 85 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 86 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_ProfStudyingRain:
# 87 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The professor loves rain.\n"
# 88 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "That's a fact.\p"
# 89 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "But if it keeps raining, people will be in\n"
# 90 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "trouble. That's another fact.\p"
# 91 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "And thus, the professor is studying\n"
# 92 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "if the rain can be put to good use.$"
# 93 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 94 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather:
# 95 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "On the 2nd floor of the Institute,\n"
# 96 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "we study the weather patterns over\l"
# 97 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "the Hoenn region.\p"
# 98 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "We've been noticing temporary and\n"
# 99 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "isolated cases of droughts and\l"
# 100 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "heavy rain lately…$"
# 101 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 102 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo:
# 103 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Hello!\n"
# 104 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "We've been saved by your actions!\p"
# 105 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "What I don't understand is what on\n"
# 106 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "earth the Aquas were up to.$"
# 107 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 108 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_TakeRestInBed:
# 109 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "There's a bed…\n"
# 110 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Let's take a rest.$"
