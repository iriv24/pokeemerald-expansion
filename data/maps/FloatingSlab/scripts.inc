# 1 "data/maps/FloatingSlab/scripts.pory"

# 2 "data/maps/FloatingSlab/scripts.pory"
FloatingSlab_MapScripts::
# 3 "data/maps/FloatingSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FloatingSlab_OnTransition
# 4 "data/maps/FloatingSlab/scripts.pory"
	.byte 0
# 5 "data/maps/FloatingSlab/scripts.pory"

# 6 "data/maps/FloatingSlab/scripts.pory"
FloatingSlab_OnTransition:
# 7 "data/maps/FloatingSlab/scripts.pory"
	setflag FLAG_LANDMARK_FLOATING_SLAB
# 8 "data/maps/FloatingSlab/scripts.pory"
	end
