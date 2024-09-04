# 1 "data/maps/GraniteCave_B1F/scripts.pory"

# 2 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_MapScripts::
# 3 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 5 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
# 6 "data/maps/GraniteCave_B1F/scripts.pory"
	.byte 0
# 7 "data/maps/GraniteCave_B1F/scripts.pory"

# 8 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_SetHoleWarp:
# 9 "data/maps/GraniteCave_B1F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 10 "data/maps/GraniteCave_B1F/scripts.pory"
	setholewarp MAP_GRANITE_CAVE_B2F
# 11 "data/maps/GraniteCave_B1F/scripts.pory"
	end

GraniteCave_B1F_Trigger_NeedEightBadges::
# 16 "data/maps/GraniteCave_B1F/scripts.pory"
	lockall
# 17 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_FeelDarkForce, MSGBOX_SIGN
# 18 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmessage
# 19 "data/maps/GraniteCave_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 20 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/GraniteCave_B1F/scripts.pory"
	releaseall
	end


GraniteCave_B1F_FeelDarkForce::
# 25 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "You feel a strong, dark presence coming\n"
	.string "from the bottom of the ladder.\p"
	.string "It would be wise to wait until you have\n"
	.string "more Badges before proceeding.$"
