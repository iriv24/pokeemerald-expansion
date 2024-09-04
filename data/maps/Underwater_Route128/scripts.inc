# 1 "data/maps/Underwater_Route128/scripts.pory"

# 2 "data/maps/Underwater_Route128/scripts.pory"
Underwater_Route128_MapScripts::
# 3 "data/maps/Underwater_Route128/scripts.pory"
	.byte 0

Underwater_Route128__Trigger_BlockCavernEntrance::
# 8 "data/maps/Underwater_Route128/scripts.pory"
	lockall
# 9 "data/maps/Underwater_Route128/scripts.pory"
	msgbox GoBeatMagma
# 10 "data/maps/Underwater_Route128/scripts.pory"
	waitmessage
# 11 "data/maps/Underwater_Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 12 "data/maps/Underwater_Route128/scripts.pory"
	waitmovement 0
# 13 "data/maps/Underwater_Route128/scripts.pory"
	releaseall
	end


GoBeatMagma::
# 17 "data/maps/Underwater_Route128/scripts.pory"
	.string "You should focus on taking Team Magma\n"
	.string "down in Jagged Pass first.$"
