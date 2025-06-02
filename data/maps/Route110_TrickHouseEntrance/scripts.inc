# 1 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 2 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
.set LOCALID_TRICK_MASTER, 1
# 3 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 4 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_MapScripts::
# 5 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHouseEntrance_OnTransition
# 6 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEntrance_OnFrame
# 7 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHouseEntrance_OnWarp
# 8 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.byte 0
# 9 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 10 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ State descriptions for VAR_TRICK_HOUSE_ENTRANCE_STATE
# 11 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 0: Trick Master is hiding
# 12 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 1: Trick Master has left at start of challenge
# 13 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 2: Trick Master ready to give normal reward from previous challenge (if bag was full)
# 14 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 3: Trick Master still making next puzzle
# 15 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 4: Finished final puzzle
# 16 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 5: Completed previous challenge
# 17 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 6: 'Trick Master' mechadoll ready to give Tent reward from final challenge (if bag was full)
# 18 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 19 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition:
# 20 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_LANDMARK_TRICK_HOUSE
# 21 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR, 1, Route110_TrickHouseEntrance_EventScript_EnterFromCorridor
# 22 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PRIZE_PICKUP, 1, Route110_TrickHouseEntrance_EventScript_SetReadyToGiveReward
# 23 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_MoveTrickMasterToDoor
# 24 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_ENTRANCE_STATE, 5, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 25 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_ENTRANCE_STATE, 3, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 26 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_ENTRANCE_STATE, 0, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 27 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 28 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_ReadyBeingWatchedTrigger
# 29 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched1
# 30 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched2
# 31 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched3
# 32 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 33 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 34 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetReadyToGiveReward::
# 35 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 36 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 8, Route110_TrickHouseEntrance_EventScript_ReadyToGiveTentReward
# 37 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 2
# 38 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 39 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 40 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReadyToGiveTentReward::
# 41 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 6
# 42 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 43 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 44 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterFromCorridor::
# 45 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR, 0
# 46 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 5
# 47 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 48 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 49 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 50 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle::
# 51 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 0
# 52 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle2
# 53 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle3
# 54 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 3, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle4
# 55 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 4, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle5
# 56 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 5, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle6
# 57 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 6, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle7
# 58 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 7, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle8
# 59 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 8, Route110_TrickHouseEntrance_EventScript_FinishedPuzzles
# 60 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 61 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 62 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle2::
# 63 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_BADGE03_GET, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 64 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 65 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 66 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle3::
# 67 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_BADGE04_GET, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 68 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 69 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 70 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle4::
# 71 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_BADGE05_GET, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 72 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 73 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 74 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle5::
# 75 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_BADGE06_GET, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 76 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 77 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 78 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle6::
# 79 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_BADGE07_GET, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 80 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 81 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 82 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle7::
# 83 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_BADGE08_GET, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 84 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 85 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 86 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle8::
# 87 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 88 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 89 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 90 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FinishedPuzzles::
# 91 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 4
# 92 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 93 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 94 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle::
# 95 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
# 96 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 97 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 98 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MoveTrickMasterToDoor::
# 99 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxyperm LOCALID_TRICK_MASTER, 5, 2
# 100 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 101 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 102 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReadyBeingWatchedTrigger::
# 103 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 0
# 104 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 105 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 106 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched1::
# 107 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 108 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 109 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 110 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched2::
# 111 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 112 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 113 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 114 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched3::
# 115 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 116 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 117 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 118 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnWarp:
# 119 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_TrickMasterFound
# 120 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 0, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot
# 121 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 1, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 122 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 2, Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor
# 123 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 3, Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor
# 124 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 4, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 125 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 5, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 126 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 6, Route110_TrickHouseEntrance_EventScript_SetTrickMasterInFrontOfDoor
# 127 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.2byte 0
# 128 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 129 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterFound::
# 130 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 131 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	showobjectat LOCALID_TRICK_MASTER, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
# 132 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_EAST
# 133 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 134 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 135 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 136 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot::
# 137 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 138 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	hideobjectat LOCALID_TRICK_MASTER, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
# 139 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 140 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle1
# 141 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle2
# 142 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle3
# 143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle4
# 144 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle5
# 145 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle6
# 146 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle7
# 147 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle8
# 148 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 149 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 150 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle1::
# 151 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 6, 3
# 152 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 153 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 154 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle2::
# 155 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 11, 5
# 156 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 157 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 158 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle3::
# 159 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 9, 1
# 160 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 161 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 162 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle4::
# 163 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 3, 1
# 164 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 165 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 166 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle5::
# 167 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 0, 5
# 168 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 169 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 170 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle6::
# 171 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 11, 1
# 172 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 173 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 174 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle7::
# 175 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 8, 1
# 176 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 177 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 178 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle8::
# 179 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 4, 4
# 180 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 181 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 182 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster::
# 183 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 184 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 185 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 186 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor::
# 187 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 188 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 5, 2
# 189 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_NORTH
# 190 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 191 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 192 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterInFrontOfDoor::
# 193 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 194 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 5, 2
# 195 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_SOUTH
# 196 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 197 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 198 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnFrame:
# 199 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_BeginChallenge
# 200 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.2byte 0
# 201 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 202 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_BeginChallenge::
# 203 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 204 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 205 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 0, Route110_TrickHouseEntrance_EventScript_MeetTrickMaster
# 206 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse, MSGBOX_DEFAULT
# 207 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 208 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 209 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterSpin
# 210 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 212 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 213 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 214 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 215 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 1
# 216 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 0
# 217 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 218 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 219 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 220 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_UnusedRelease::
# 221 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 222 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 223 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 224 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMaster::
# 225 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 226 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 227 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_FoundTrickMaster
# 228 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_GiveReward
# 229 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_StillMakingPuzzle
# 230 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_MechadollReward
# 231 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 232 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 233 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster::
# 234 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 235 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 236 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 238 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 239 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 0, Route110_TrickHouseEntrance_EventScript_FoundBeneathDesk
# 240 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_FoundBehindTree
# 241 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_FoundInDresser
# 242 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 3, Route110_TrickHouseEntrance_EventScript_FoundBeyondWindow
# 243 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 4, Route110_TrickHouseEntrance_EventScript_FoundInPlanter
# 244 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 5, Route110_TrickHouseEntrance_EventScript_FoundInCupboard
# 245 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 6, Route110_TrickHouseEntrance_EventScript_FoundBehindWindow
# 246 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 7, Route110_TrickHouseEntrance_EventScript_FoundBeneathCushion
# 247 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 248 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1
# 249 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warpsilent MAP_ROUTE110_TRICK_HOUSE_ENTRANCE, 6, 2
# 250 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 251 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 252 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 253 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 254 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeneathDesk::
# 255 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk, MSGBOX_DEFAULT
# 256 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 257 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 258 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBehindTree::
# 259 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBehindTree, MSGBOX_DEFAULT
# 260 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 261 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 262 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInDresser::
# 263 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInDresser, MSGBOX_DEFAULT
# 264 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 265 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 266 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeyondWindow::
# 267 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConealedBeyondWindow, MSGBOX_DEFAULT
# 268 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 269 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 270 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInPlanter::
# 271 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInPlanter, MSGBOX_DEFAULT
# 272 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 273 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 274 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInCupboard::
# 275 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInCupboard, MSGBOX_DEFAULT
# 276 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 277 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 278 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBehindWindow::
# 279 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBehindWindow, MSGBOX_DEFAULT
# 280 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 281 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 282 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeneathCushion::
# 283 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion, MSGBOX_DEFAULT
# 284 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 285 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 286 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouse_Movement_TrickMasterSpin:
# 287 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_up
# 288 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 289 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 290 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 291 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_down
# 292 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 293 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 294 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 295 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 296 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 297 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouse_Movement_TrickMasterJumpAway:
# 298 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_up
# 299 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	disable_anim
# 300 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 301 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 302 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 303 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 304 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 305 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 306 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 307 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 308 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MeetTrickMaster::
# 309 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster, MSGBOX_DEFAULT
# 310 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 311 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 312 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_StillMakingPuzzle::
# 313 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick, MSGBOX_DEFAULT
# 314 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 315 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 316 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 317 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 318 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_ExclamationMark
# 319 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 320 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_Delay48
# 321 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 322 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges, MSGBOX_DEFAULT
# 323 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_WalkInPlaceFasterUp
# 324 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 325 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 326 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 327 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 328 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward::
# 329 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 330 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 331 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward, MSGBOX_DEFAULT
# 332 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward
# 333 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward
# 334 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 3, Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward
# 335 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 4, Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward
# 336 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 5, Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward
# 337 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 6, Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward
# 338 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 7, Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward
# 339 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 340 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 341 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward::
# 342 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TM_GUNK_SHOT
# 343 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_GARBODORITE
# 344 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TOXTRICITITE
# 345 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 346 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 347 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 348 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 349 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 350 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 351 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward::
# 352 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TM_SOLAR_BEAM
# 353 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TM_SOLAR_BLADE
# 354 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TM_GRASSY_GLIDE
# 355 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TM_GRASS_KNOT
# 356 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TM_POWER_WHIP
# 357 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TM_BUG_BUZZ
# 358 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TM_MEGAHORN
# 359 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_BUTTERFRITE
# 360 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_SNORLAXITE
# 361 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_ROSERADITE
# 362 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 363 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 364 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 365 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 366 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 367 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 368 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward::
# 369 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_BEAT_TRICK_HOUSE_3
# 370 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_STEELIXITE
# 371 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_KINGLERITE
# 372 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_BOOSTER_ENERGY
# 373 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 30
# 374 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 375 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 376 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 377 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 378 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
# 379 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 380 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 30
# 381 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 382 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 383 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 384 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 385 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 386 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 387 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward::
# 388 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_SMOKE_BALL
# 389 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 390 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 391 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 392 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 393 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 394 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 395 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward::
# 396 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TM_TAUNT
# 397 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 398 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 399 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 400 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 401 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 402 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 403 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward::
# 404 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_MAGNET
# 405 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 406 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 407 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 408 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 409 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 410 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 411 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward::
# 412 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_PP_MAX
# 413 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 414 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 415 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 416 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 417 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 418 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 419 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GotReward::
# 420 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 421 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
# 422 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_WalkInPlaceFasterUp
# 423 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 424 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 425 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 426 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 427 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MechadollReward::
# 428 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 429 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 430 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_MechadollWhichTent, MSGBOX_DEFAULT
# 431 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_ChooseTent
# 432 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_ReceivedTent
# 433 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_NoRoomForDecor
# 434 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_PCFullAgain, MSGBOX_DEFAULT
# 435 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 436 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 437 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 438 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ChooseTent::
# 439 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	multichoice 0, 0, MULTI_TENT, TRUE
# 440 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 441 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_GiveRedTent
# 442 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveBlueTent
# 443 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 444 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveRedTent::
# 445 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givedecoration DECOR_RED_TENT
# 446 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 447 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 448 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveBlueTent::
# 449 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givedecoration DECOR_BLUE_TENT
# 450 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 451 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 452 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReceivedTent::
# 453 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ThenFarewell, MSGBOX_DEFAULT
# 454 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 455 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 456 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 457 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterSpin
# 458 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 459 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 460 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 461 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 462 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 463 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 464 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 5
# 465 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 466 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 467 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 468 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_Door::
# 469 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 470 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 471 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_ItsAScroll
# 472 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_GoInHolePrompt
# 473 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote
# 474 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_CheckLevelForMessage
# 475 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 476 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 477 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ItsAScroll::
# 478 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ItsAScroll, MSGBOX_DEFAULT
# 479 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 480 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 481 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 482 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GoInHolePrompt::
# 483 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll, MSGBOX_YESNO
# 484 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 485 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom
# 486 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 487 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 488 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 489 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom::
# 490 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 5, 1, METATILE_GenericBuilding_TrickHouse_Stairs_Down, FALSE
# 491 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 492 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 493 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 494 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 495 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEntrance_Movement_EnterRoom
# 496 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 497 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 498 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom1
# 499 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom2
# 500 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom3
# 501 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom4
# 502 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom5
# 503 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom6
# 504 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom7
# 505 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom8
# 506 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 507 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 508 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Movement_EnterRoom:
# 509 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	set_invisible
# 510 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 511 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 512 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom1::
# 513 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE1, 0, 21
# 514 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 515 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 516 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 517 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 518 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom2::
# 519 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE2, 0, 21
# 520 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 521 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 522 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 523 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 524 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom3::
# 525 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE3, 0, 21
# 526 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 527 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 528 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 529 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 530 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom4::
# 531 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE4, 0, 21
# 532 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 533 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 534 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 535 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 536 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom5::
# 537 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE5, 0, 21
# 538 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 539 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 540 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 541 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 542 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom6::
# 543 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE6, 0, 21
# 544 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 545 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 546 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 547 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 548 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom7::
# 549 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE7, 0, 21
# 550 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 551 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 552 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 553 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 554 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom8::
# 555 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE8, 0, 21
# 556 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 557 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 558 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 559 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 560 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote::
# 561 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote, MSGBOX_DEFAULT
# 562 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 563 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 564 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 565 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckLevelForMessage::
# 566 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 8, Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote2
# 567 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ItsAScroll, MSGBOX_DEFAULT
# 568 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 569 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 570 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 571 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote2::
# 572 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote, MSGBOX_DEFAULT
# 573 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 574 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 575 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 576 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_Door::
# 577 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 578 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 579 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHousePuzzle1_EventScript_Door
# 580 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHousePuzzle2_EventScript_Door
# 581 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHousePuzzle3_EventScript_Door
# 582 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHousePuzzle4_EventScript_Door
# 583 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHousePuzzle5_EventScript_Door
# 584 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHousePuzzle6_EventScript_Door
# 585 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHousePuzzle7_EventScript_Door
# 586 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHousePuzzle8_EventScript_Door
# 587 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 588 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 589 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Door::
# 590 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 591 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 592 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 593 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2
# 594 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 595 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 596 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 597 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 598 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 599 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Door::
# 600 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_2_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 601 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 602 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 603 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_2_STATE, 2
# 604 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 605 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 606 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 607 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 608 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 609 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Door::
# 610 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_3_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 611 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 612 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 613 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_3_STATE, 2
# 614 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 615 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 616 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 617 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 618 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 619 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Door::
# 620 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_4_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 621 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 622 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 623 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_4_STATE, 2
# 624 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 625 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 626 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 627 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 628 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 629 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Door::
# 630 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_5_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 631 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 632 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 633 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_5_STATE, 2
# 634 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 635 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 636 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 637 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 638 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 639 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Door::
# 640 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 641 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 642 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 643 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 2
# 644 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 645 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 646 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 647 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 648 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 649 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Door::
# 650 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 651 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 652 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 653 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE, 2
# 654 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 655 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 656 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 657 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 658 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 659 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Door::
# 660 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 661 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 662 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 663 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 2
# 664 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 665 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 666 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 667 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 668 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 669 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_DoorLocked::
# 670 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere, MSGBOX_DEFAULT
# 671 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 672 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 673 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 674 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_ReadScrollAgain::
# 675 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt, MSGBOX_DEFAULT
# 676 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 677 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 678 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 679 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_FoundScroll::
# 680 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 681 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	message Route110_TrickHousePuzzle_Text_FoundAScroll
# 682 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
# 683 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle_Text_MemorizedSecretCode, MSGBOX_DEFAULT
# 684 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 685 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 686 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 687 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterHiding::
# 688 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 689 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_YoureBeingWatched, MSGBOX_DEFAULT
# 690 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 691 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 0, Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle1
# 692 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle2
# 693 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle3
# 694 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 695 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 696 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 697 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle1::
# 698 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 6  @ x
# 699 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 3  @ y
# 700 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 701 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 702 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 703 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle2::
# 704 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 11  @ x
# 705 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 5   @ y
# 706 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 707 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 708 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 709 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle3::
# 710 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 9  @ x
# 711 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 2  @ y
# 712 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 713 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 714 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 715 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle::
# 716 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8006, 0
# 717 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	dofieldeffectsparkle VAR_0x8004, VAR_0x8005, VAR_0x8006
# 718 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 719 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 10
# 720 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 721 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 722 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_YoureBeingWatched:
# 723 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You're being watched…$"
# 724 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 725 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk:
# 726 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 727 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 728 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beneath this desk? You're sharp!$"
# 729 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 730 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBehindTree:
# 731 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 732 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 733 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "behind this tree? You're sharp!$"
# 734 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 735 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInDresser:
# 736 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 737 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 738 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this dresser? You're sharp!$"
# 739 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 740 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConealedBeyondWindow:
# 741 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 742 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 743 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beyond this window? You're sharp!$"
# 744 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 745 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInPlanter:
# 746 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 747 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 748 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this planter? You're sharp!$"
# 749 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 750 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInCupboard:
# 751 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 752 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 753 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this cupboard? You're sharp!$"
# 754 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 755 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBehindWindow:
# 756 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 757 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 758 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "behind this window? You're sharp!$"
# 759 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 760 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion:
# 761 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 762 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 763 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beneath this cushion? You're sharp!$"
# 764 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 765 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster:
# 766 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Behold!\p"
# 767 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "For I am the greatest living mystery\n"
# 768 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "of a man in all of Hoenn!\l"
# 769 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "They call me…\p"
# 770 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The Trick Master!\n"
# 771 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Wahahaha! Glad to meet you!$"
# 772 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 773 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse:
# 774 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You, you've come to challenge\n"
# 775 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "my Trick House, haven't you?\p"
# 776 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "That's why you're here, isn't it?\n"
# 777 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Yes, it is!\p"
# 778 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Consider your challenge accepted!\p"
# 779 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Enter through the scroll there,\n"
# 780 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "and let your challenge commence!\p"
# 781 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I shall be waiting in the back!$"
# 782 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 783 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ItsAScroll:
# 784 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "It's a scroll.$"
# 785 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 786 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll:
# 787 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "There is a big hole behind the scroll!\p"
# 788 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Want to go in?$"
# 789 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 790 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote:
# 791 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "There is a note affixed to the scroll…\p"
# 792 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "“I am leaving on a journey.\n"
# 793 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Don't look for me. Trick Master”$"
# 794 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 795 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick:
# 796 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "For the next time, I'll use this trick,\n"
# 797 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "and that scheme, and those ruses…\p"
# 798 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Mufufufu… If I may say so, it's\n"
# 799 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "brilliantly difficult, even for me!$"
# 800 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 801 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges:
# 802 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? What?!\n"
# 803 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Oh, it's you!\p"
# 804 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I'm in the midst of devising new tricky\n"
# 805 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "challenges!\p"
# 806 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "It's not too much to ask for a bit more\n"
# 807 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "time for me to think, is it now?\l"
# 808 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You wouldn't begrudge me that?\l"
# 809 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Come back in a little while!$"
# 810 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 811 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward:
# 812 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Ah, it's you! You're here to accept the\n"
# 813 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "reward from before, isn't that right?\l"
# 814 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Yes, right I am!\p"
# 815 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Here!\n"
# 816 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I'll give it to you now!$"
# 817 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 818 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward:
# 819 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah?\n"
# 820 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Did you not come to claim your reward?$"
# 821 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 822 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_MechadollWhichTent:
# 823 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "MECHADOLL 5 I AM!\n"
# 824 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "IF REWARD IS NOT TAKEN BY YOU,\l"
# 825 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "THEN TRICK MASTER YOU CANNOT FOLLOW.\p"
# 826 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "RED TENT OR BLUE TENT,\n"
# 827 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "WHICH DO YOU PREFER?$"
# 828 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 829 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ThenFarewell:
# 830 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "THEN FAREWELL.$"
# 831 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 832 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_PCFullAgain:
# 833 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "YOUR PC STATUS: FULL AGAIN.\n"
# 834 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "MEAN, YOU ARE.$"
# 835 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 836 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_FoundAScroll:
# 837 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} found a scroll.$"
# 838 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 839 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_MemorizedSecretCode:
# 840 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} memorized the secret code\n"
# 841 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "written on the scroll.$"
# 842 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 843 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt:
# 844 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "A secret code is written on it.$"
# 845 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 846 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere:
# 847 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The door is locked.\p"
# 848 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "…On closer inspection, this is written\n"
# 849 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "on it: “Write the secret code here.”$"
