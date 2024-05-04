# 1 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_MapScripts::
# 3 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt1::
# 6 "data/maps/SeafloorCavern_Room1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, SeafloorCavern_Room1_Text_Grunt1Intro, SeafloorCavern_Room1_Text_Grunt1Defeat
# 7 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox SeafloorCavern_Room1_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 9 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 10 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Intro:
# 11 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "We don't need a kid around!\n"
# 12 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Go on home already!$"
# 13 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 14 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Defeat:
# 15 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I want to go home…$"
# 16 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 17 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1PostBattle:
# 18 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I want to get a promotion so I can\n"
# 19 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "boss around the GRUNTS…$"
