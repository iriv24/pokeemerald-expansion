# 1 "data/maps/Underwater_Route134/scripts.pory"

# 2 "data/maps/Underwater_Route134/scripts.pory"
Underwater_Route134_MapScripts::
# 3 "data/maps/Underwater_Route134/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Underwater_Route134_OnResume
# 4 "data/maps/Underwater_Route134/scripts.pory"
	.byte 0
# 5 "data/maps/Underwater_Route134/scripts.pory"

# 6 "data/maps/Underwater_Route134/scripts.pory"
Underwater_Route134_OnResume:
# 7 "data/maps/Underwater_Route134/scripts.pory"
	setdivewarp MAP_ROUTE134, 60, 31
# 8 "data/maps/Underwater_Route134/scripts.pory"
	end

Underwater_Route134_Trigger_BlockCavernEntrance::
# 13 "data/maps/Underwater_Route134/scripts.pory"
	lockall
# 14 "data/maps/Underwater_Route134/scripts.pory"
	msgbox PowerfulAura
# 15 "data/maps/Underwater_Route134/scripts.pory"
	waitmessage
# 16 "data/maps/Underwater_Route134/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayerUp
# 17 "data/maps/Underwater_Route134/scripts.pory"
	waitmovement 0
# 18 "data/maps/Underwater_Route134/scripts.pory"
	releaseall
	end


# 30 "data/maps/Underwater_Route134/scripts.pory"
StopPlayerUp:
# 31 "data/maps/Underwater_Route134/scripts.pory"
	walk_up
	step_end

PowerfulAura::
# 22 "data/maps/Underwater_Route134/scripts.pory"
	.string "You feel an extremely powerful\n"
	.string "aura radiating from something\l"
	.string "further ahead.\p"
	.string "It's probably best to come back once\n"
	.string "you've become stronger.$"
