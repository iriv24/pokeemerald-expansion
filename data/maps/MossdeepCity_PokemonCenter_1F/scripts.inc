# 1 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_EGG_TUTOR, 5
# 4 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 5 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_MapScripts::
# 6 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_PokemonCenter_1F_OnTransition
# 7 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 8 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 9 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_OnTransition:
# 11 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MOSSDEEP_CITY
# 12 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Woman::
# 23 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable, MSGBOX_NPC
# 24 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Girl::
# 27 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves, MSGBOX_NPC
# 28 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable:
# 31 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "The GYM LEADERS in this town are\n"
# 32 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "a formidable duo.\p"
# 33 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Their combination attacks are, like,\n"
# 34 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "excellent and wow!$"
# 35 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves:
# 37 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Depending on the special abilities of\n"
# 38 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Pokémon, some moves might change\l"
# 39 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "or not work at all.$"
