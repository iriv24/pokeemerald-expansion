# 1 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 2 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MapScripts::
# 3 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 5 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_ProfCozmo::
# 6 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 9 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 10 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 11 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 12 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife::
# 13 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 14 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 15 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
# 16 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
# 17 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 18 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 19 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 20 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
# 21 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
# 22 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 23 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 24 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 25 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow:
# 26 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Cozmo: Oh…\n"
# 27 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I never should have let myself be\l"
# 28 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "conned into telling Team Magma where\l"
# 29 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "you can find Meteorites…\p"
# 30 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "That Meteorite from Meteor Falls…\n"
# 31 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "It's never going to be mine now…$"
# 32 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 33 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CrushedWithDisappointment:
# 34 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Cozmo: Oh, but…\n"
# 35 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I'm crushed with disappointment…$"
# 36 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 37 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls:
# 38 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Cozmo went off to Meteor Falls\n"
# 39 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "on Route 114 with some people from\l"
# 40 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Team Magma.$"
# 41 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 42 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
# 43 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Poor Prof. Cozmo…\n"
# 44 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "He's so depressed… I feel sorry for him.$"
