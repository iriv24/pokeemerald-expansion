# 1 "data/maps/RockySlab/scripts.pory"

# 2 "data/maps/RockySlab/scripts.pory"
RockySlab_MapScripts::
# 3 "data/maps/RockySlab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RockySlab_OnTransition
# 4 "data/maps/RockySlab/scripts.pory"
	.byte 0
# 5 "data/maps/RockySlab/scripts.pory"

# 6 "data/maps/RockySlab/scripts.pory"
RockySlab_OnTransition:
# 7 "data/maps/RockySlab/scripts.pory"
	setflag FLAG_LANDMARK_ROCKY_SLAB
# 8 "data/maps/RockySlab/scripts.pory"
	end
