# 1 "data/maps/SootopolisCity/scripts.pory"

# 2 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_EXPERT, 1
# 3 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WOMAN_2, 2
# 4 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_KIRI, 3
# 5 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_NINJA_BOY, 4
# 6 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BOY_1, 5
# 7 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_STEVEN, 7
# 8 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WOMAN_1, 8
# 9 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_GROUDON, 9
# 10 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_KYOGRE, 10
# 11 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_RAYQUAZA, 11
# 12 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_MANIAC, 12
# 13 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_GIRL, 13
# 14 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BLACK_BELT, 14
# 15 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BOY_2, 15
# 16 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_MAXIE, 16
# 17 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_ARCHIE, 17
# 18 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WALLACE, 18
# 19 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_DAWN, 19
# 20 "data/maps/SootopolisCity/scripts.pory"

# 21 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_MapScripts::
# 22 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_OnLoad
# 23 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_OnTransition
# 24 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_OnResume
# 25 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_OnFrame
# 26 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SootopolisCity_OnWarp
# 27 "data/maps/SootopolisCity/scripts.pory"
	.byte 0
# 28 "data/maps/SootopolisCity/scripts.pory"

# 29 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad:
# 30 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockGymDoor
# 31 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_EventScript_LegendariesNotArrived
# 32 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockHouseDoors
# 33 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockMysteryHouseDoor
# 34 "data/maps/SootopolisCity/scripts.pory"
	end
# 35 "data/maps/SootopolisCity/scripts.pory"

# 36 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesNotArrived::
# 37 "data/maps/SootopolisCity/scripts.pory"
	end
# 38 "data/maps/SootopolisCity/scripts.pory"

# 39 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockHouseDoors::
# 40 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 41 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 42 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 26, METATILE_Sootopolis_Door_Closed, TRUE
# 43 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 44, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 44 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 8, 35, METATILE_Sootopolis_Door_Closed, TRUE
# 45 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 53, 28, METATILE_Sootopolis_Door_Closed, TRUE
# 46 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 45, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 47 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 48, 25, METATILE_Sootopolis_Door_Closed, TRUE
# 48 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 49 "data/maps/SootopolisCity/scripts.pory"
	return
# 50 "data/maps/SootopolisCity/scripts.pory"

# 51 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockMysteryHouseDoor::
# 52 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 53 "data/maps/SootopolisCity/scripts.pory"
	return
# 54 "data/maps/SootopolisCity/scripts.pory"

# 55 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockGymDoor::
# 56 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 31, 32, METATILE_Sootopolis_GymDoor_Closed, TRUE
# 57 "data/maps/SootopolisCity/scripts.pory"
	return
# 58 "data/maps/SootopolisCity/scripts.pory"

# 59 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition:
# 60 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 61 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 62 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 63 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWeather
# 64 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetLayout
# 65 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetBattleSpectators
# 66 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetBattleSpectators
# 67 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetBattleSpectators
# 68 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetBattleSpectators
# 69 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetBattleSpectators
# 70 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 71 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 72 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetExitCaveOfOriginObjPos
# 73 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetOutsideGymObjPos
# 74 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetExpertBlockCaveEntrance
# 75 "data/maps/SootopolisCity/scripts.pory"
	end
# 76 "data/maps/SootopolisCity/scripts.pory"

# 77 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_HideMapNamePopup::
# 78 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 79 "data/maps/SootopolisCity/scripts.pory"
	return
# 80 "data/maps/SootopolisCity/scripts.pory"

# 81 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetBattleSpectators::
# 82 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_KIRI, 13, 48
# 83 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_BOY_1, 46, 32
# 84 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_NINJA_BOY, 48, 41
# 85 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WOMAN_1, 45, 43
# 86 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
# 87 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_BOY_1, MOVEMENT_TYPE_FACE_LEFT
# 88 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
# 89 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
# 90 "data/maps/SootopolisCity/scripts.pory"
	return
# 91 "data/maps/SootopolisCity/scripts.pory"

# 92 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout::
# 93 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalLayout
# 94 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalLayout
# 95 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 96 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetLegendariesLayout
# 97 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetLegendariesLayout
# 98 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetLegendariesLayout
# 99 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 100 "data/maps/SootopolisCity/scripts.pory"
	return
# 101 "data/maps/SootopolisCity/scripts.pory"

# 102 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalLayout::
# 103 "data/maps/SootopolisCity/scripts.pory"
	return
# 104 "data/maps/SootopolisCity/scripts.pory"

# 105 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLegendariesLayout::
# 106 "data/maps/SootopolisCity/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
# 107 "data/maps/SootopolisCity/scripts.pory"
	return
# 108 "data/maps/SootopolisCity/scripts.pory"

# 109 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather::
# 110 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalWeather
# 111 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalWeather
# 112 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 113 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 114 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, Common_EventScript_SetAbnormalWeather
# 115 "data/maps/SootopolisCity/scripts.pory"
	return
# 116 "data/maps/SootopolisCity/scripts.pory"

# 117 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalWeather::
# 118 "data/maps/SootopolisCity/scripts.pory"
	return
# 119 "data/maps/SootopolisCity/scripts.pory"

# 120 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetDownpour::
# 121 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 122 "data/maps/SootopolisCity/scripts.pory"
	return
# 123 "data/maps/SootopolisCity/scripts.pory"

# 124 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos::
# 125 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos
# 126 "data/maps/SootopolisCity/scripts.pory"
	return
# 127 "data/maps/SootopolisCity/scripts.pory"

# 128 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos::
# 129 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 130 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 32, 18
# 131 "data/maps/SootopolisCity/scripts.pory"
	return
# 132 "data/maps/SootopolisCity/scripts.pory"

# 133 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExitCaveOfOriginObjPos::
# 134 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 135 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 31, 18
# 136 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 32, 18
# 137 "data/maps/SootopolisCity/scripts.pory"
	end
# 138 "data/maps/SootopolisCity/scripts.pory"

# 139 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos::
# 140 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 31, 18
# 141 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 29, 33
# 142 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_DAWN, 28, 33
# 143 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 33, 35
# 144 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 34, 35
# 145 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 0, SootopolisCity_EventScript_SetWallaceMiddle
# 146 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 1, SootopolisCity_EventScript_SetWallaceRight
# 147 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 2, SootopolisCity_EventScript_SetWallaceLeft
# 148 "data/maps/SootopolisCity/scripts.pory"
	return
# 149 "data/maps/SootopolisCity/scripts.pory"

# 150 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceMiddle::
# 151 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 31, 33
# 152 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 153 "data/maps/SootopolisCity/scripts.pory"
	return
# 154 "data/maps/SootopolisCity/scripts.pory"

# 155 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceRight::
# 156 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 32, 33
# 157 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 158 "data/maps/SootopolisCity/scripts.pory"
	return
# 159 "data/maps/SootopolisCity/scripts.pory"

# 160 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceLeft::
# 161 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 30, 33
# 162 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 163 "data/maps/SootopolisCity/scripts.pory"
	return
# 164 "data/maps/SootopolisCity/scripts.pory"

# 165 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExpertBlockCaveEntrance::
# 166 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 31, 18
# 167 "data/maps/SootopolisCity/scripts.pory"
	return
# 168 "data/maps/SootopolisCity/scripts.pory"

# 169 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnWarp:
# 170 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_PlayerFaceLegendaries
# 171 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 172 "data/maps/SootopolisCity/scripts.pory"

# 173 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries::
# 174 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_PlayerFaceLegendaries1
# 175 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 2, SootopolisCity_EventScript_PlayerFaceLegendaries2
# 176 "data/maps/SootopolisCity/scripts.pory"
	end
# 177 "data/maps/SootopolisCity/scripts.pory"

# 178 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries1::
# 179 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 180 "data/maps/SootopolisCity/scripts.pory"
	return
# 181 "data/maps/SootopolisCity/scripts.pory"

# 182 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries2::
# 183 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 184 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 185 "data/maps/SootopolisCity/scripts.pory"
	return
# 186 "data/maps/SootopolisCity/scripts.pory"

# 187 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnResume:
# 188 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
# 189 "data/maps/SootopolisCity/scripts.pory"
	end
# 190 "data/maps/SootopolisCity/scripts.pory"

# 191 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnFrame:
# 192 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartLegendariesScene
# 193 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_StartRayquazaScene
# 194 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 195 "data/maps/SootopolisCity/scripts.pory"

# 196 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 197 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene::
# 198 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 199 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 200 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_LegendariesSceneFromDive
# 201 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_LegendariesSceneFromDive
# 202 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
# 203 "data/maps/SootopolisCity/scripts.pory"
	end
# 204 "data/maps/SootopolisCity/scripts.pory"

# 205 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
# 206 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 207 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 208 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 209 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 210 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 211 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 212 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 213 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 214 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 215 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 216 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 217 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 218 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 219 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 220 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 221 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 222 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 223 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 224 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 225 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 226 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 227 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 228 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 229 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 230 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 231 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 232 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 233 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 234 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 235 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 236 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 237 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 238 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 239 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 240 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 241 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 242 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 243 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 244 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 245 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 246 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 247 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 248 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 249 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 250 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 251 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 252 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 253 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 254 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 255 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 256 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 257 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 258 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 259 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 260 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 261 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 262 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 263 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 264 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 265 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 266 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 267 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
# 268 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 269 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 270 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 271 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 272 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 273 "data/maps/SootopolisCity/scripts.pory"
	end
# 274 "data/maps/SootopolisCity/scripts.pory"

# 275 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromPokeCenter:
# 276 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 277 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 278 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 279 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 280 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 281 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 282 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 283 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 284 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 285 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 286 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 287 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 288 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 289 "data/maps/SootopolisCity/scripts.pory"

# 290 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToPokeCenter:
# 291 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 292 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 293 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 294 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 295 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 296 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 297 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 298 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 299 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 300 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 301 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 302 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 303 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 304 "data/maps/SootopolisCity/scripts.pory"

# 305 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromDive::
# 306 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 307 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 308 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 309 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 310 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 311 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 312 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 313 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 314 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 315 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 316 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 317 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 318 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 319 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 320 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 322 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 323 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 324 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 325 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 326 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 327 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 328 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 329 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 330 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 331 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 332 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 333 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 334 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 335 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 336 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 337 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 338 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 339 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 340 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 341 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 342 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 343 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 344 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 345 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 346 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 347 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 348 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 349 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 350 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 351 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 352 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 353 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 354 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 355 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 356 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 357 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 358 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 359 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 360 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 361 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 362 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 363 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 364 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 365 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 366 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 367 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToDive
# 368 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 369 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 370 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 371 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 372 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 373 "data/maps/SootopolisCity/scripts.pory"
	end
# 374 "data/maps/SootopolisCity/scripts.pory"

# 375 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromDive:
# 376 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 377 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 378 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 379 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 380 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 381 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 382 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 383 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 384 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 385 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 386 "data/maps/SootopolisCity/scripts.pory"

# 387 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToDive:
# 388 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 389 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 390 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 391 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 392 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 393 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 394 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 395 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 396 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 397 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 398 "data/maps/SootopolisCity/scripts.pory"

# 399 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack:
# 400 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 401 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 402 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 403 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 404 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 405 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 406 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 407 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 408 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 409 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 410 "data/maps/SootopolisCity/scripts.pory"

# 411 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreDefend:
# 412 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 413 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 414 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 415 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 416 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 417 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 418 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 419 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 420 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 421 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 422 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 423 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 424 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 425 "data/maps/SootopolisCity/scripts.pory"

# 426 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreMoveBack:
# 427 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 428 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 429 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 430 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 431 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 432 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 433 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 434 "data/maps/SootopolisCity/scripts.pory"

# 435 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreIdle:
# 436 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 437 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 438 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 439 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 440 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 441 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 442 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 443 "data/maps/SootopolisCity/scripts.pory"

# 444 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonAttack:
# 445 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 446 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 447 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 448 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 449 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 450 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 451 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 452 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 453 "data/maps/SootopolisCity/scripts.pory"

# 454 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonDefend:
# 455 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 456 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 457 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 458 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 459 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 460 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 461 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 462 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 463 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 464 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 465 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 466 "data/maps/SootopolisCity/scripts.pory"

# 467 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonMoveBack:
# 468 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 469 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 470 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 471 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 472 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 473 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 474 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 475 "data/maps/SootopolisCity/scripts.pory"

# 476 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonIdle:
# 477 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 478 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 479 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 480 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 481 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 482 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 483 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 484 "data/maps/SootopolisCity/scripts.pory"

# 485 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 486 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene::
# 487 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 488 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 489 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_RayquazaSceneFromDive
# 490 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_RayquazaSceneFromDive
# 491 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
# 492 "data/maps/SootopolisCity/scripts.pory"
	end
# 493 "data/maps/SootopolisCity/scripts.pory"

# 494 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
# 495 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 496 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 497 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 498 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 499 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 500 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 501 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 502 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 503 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 504 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 505 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 506 "data/maps/SootopolisCity/scripts.pory"
	hideobjectat LOCALID_RAYQUAZA, MAP_SOOTOPOLIS_CITY
# 507 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 508 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 509 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 510 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
# 511 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 512 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 513 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 514 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 515 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 516 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 517 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 518 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 519 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 520 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 521 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 522 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 523 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 524 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 525 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 526 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 527 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 528 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 529 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 530 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 531 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 532 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 533 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 534 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 536 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 537 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 538 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 539 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 540 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 541 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 542 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 543 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 544 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 43, 32
# 545 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 546 "data/maps/SootopolisCity/scripts.pory"
	end
# 547 "data/maps/SootopolisCity/scripts.pory"

# 548 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromDive::
# 549 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 550 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 551 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 552 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 553 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 554 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 555 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 556 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 557 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 558 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 559 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 560 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 561 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 562 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 563 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 564 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 565 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
# 566 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 567 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 568 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 569 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 570 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 571 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 572 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 573 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 574 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 575 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 576 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 577 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 578 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 579 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 580 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 581 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 582 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 583 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 584 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 585 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 586 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 587 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 588 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 589 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 590 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 591 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 592 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 2
# 593 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 594 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SURF
# 595 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 596 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 597 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 29, 53
# 598 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 599 "data/maps/SootopolisCity/scripts.pory"
	end
# 600 "data/maps/SootopolisCity/scripts.pory"

# 601 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetRoughWater::
# 602 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 603 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 604 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 605 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 606 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 607 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 608 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 609 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 610 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 611 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 612 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 613 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 614 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 615 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 616 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 617 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 618 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 619 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 620 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 621 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 622 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 623 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 624 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 625 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
# 626 "data/maps/SootopolisCity/scripts.pory"
	return
# 627 "data/maps/SootopolisCity/scripts.pory"

# 628 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RayquazaFlyOff:
# 629 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 630 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 631 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 632 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 633 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 634 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 635 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 636 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 637 "data/maps/SootopolisCity/scripts.pory"

# 638 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanUp:
# 639 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 640 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 641 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 642 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 643 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 644 "data/maps/SootopolisCity/scripts.pory"

# 645 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendaries:
# 646 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 647 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 648 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 649 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 650 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 651 "data/maps/SootopolisCity/scripts.pory"

# 652 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 653 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 654 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 655 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 656 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 657 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 658 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 659 "data/maps/SootopolisCity/scripts.pory"

# 660 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 661 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanUp:
# 662 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 663 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 664 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 665 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 666 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 667 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 668 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 669 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 670 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 671 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 672 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 673 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 674 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 675 "data/maps/SootopolisCity/scripts.pory"

# 676 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 677 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanBack:
# 678 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 679 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 680 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 681 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 682 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 683 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 684 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 685 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 686 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 687 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 688 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 689 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 690 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 691 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 692 "data/maps/SootopolisCity/scripts.pory"

# 693 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert::
# 694 "data/maps/SootopolisCity/scripts.pory"
	lock
# 695 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 696 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ExpertPostLegendaries
# 697 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ExpertLegendaries
# 698 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_ExpertLeadToCave
# 699 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
# 700 "data/maps/SootopolisCity/scripts.pory"
	release
# 701 "data/maps/SootopolisCity/scripts.pory"
	end
# 702 "data/maps/SootopolisCity/scripts.pory"

# 703 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLeadToCave::
# 704 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
# 705 "data/maps/SootopolisCity/scripts.pory"
	release
# 706 "data/maps/SootopolisCity/scripts.pory"
	end
# 707 "data/maps/SootopolisCity/scripts.pory"

# 708 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostLegendaries::
# 709 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
# 710 "data/maps/SootopolisCity/scripts.pory"
	release
# 711 "data/maps/SootopolisCity/scripts.pory"
	end
# 712 "data/maps/SootopolisCity/scripts.pory"

# 713 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLegendaries::
# 714 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
# 715 "data/maps/SootopolisCity/scripts.pory"
	release
# 716 "data/maps/SootopolisCity/scripts.pory"
	end
# 717 "data/maps/SootopolisCity/scripts.pory"

# 718 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri::
# 719 "data/maps/SootopolisCity/scripts.pory"
	lock
# 720 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 721 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_KiriGiveBerry
# 722 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_KiriGiveBerry
# 723 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_KiriRayquaza
# 724 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 725 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 726 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 727 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 728 "data/maps/SootopolisCity/scripts.pory"
	release
# 729 "data/maps/SootopolisCity/scripts.pory"
	end
# 730 "data/maps/SootopolisCity/scripts.pory"

# 731 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriRayquaza::
# 732 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 733 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 734 "data/maps/SootopolisCity/scripts.pory"
	release
# 735 "data/maps/SootopolisCity/scripts.pory"
	end
# 736 "data/maps/SootopolisCity/scripts.pory"

# 737 "data/maps/SootopolisCity/scripts.pory"
@ Gives 2 berries daily. First ranges from FIRST_KIRI_BERRY to LAST_KIRI_BERRY, second is always Figy or Iapapa
# 738 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry::
# 739 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 740 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 741 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriReceivedBerry
# 742 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 743 "data/maps/SootopolisCity/scripts.pory"
	random NUM_KIRI_BERRIES
# 744 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
# 745 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 746 "data/maps/SootopolisCity/scripts.pory"
	giveitem VAR_RESULT
# 747 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 748 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 749 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 750 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 751 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SootopolisCity_EventScript_GiveFigyBerry
# 752 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_EventScript_GiveIapapaBerry
# 753 "data/maps/SootopolisCity/scripts.pory"
	end
# 754 "data/maps/SootopolisCity/scripts.pory"

# 755 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry::
# 756 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_FIGY_BERRY
# 757 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 758 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 759 "data/maps/SootopolisCity/scripts.pory"
	release
# 760 "data/maps/SootopolisCity/scripts.pory"
	end
# 761 "data/maps/SootopolisCity/scripts.pory"

# 762 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveIapapaBerry::
# 763 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 764 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 765 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 766 "data/maps/SootopolisCity/scripts.pory"
	release
# 767 "data/maps/SootopolisCity/scripts.pory"
	end
# 768 "data/maps/SootopolisCity/scripts.pory"

# 769 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry::
# 770 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 771 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_EventScript_KiriLikeSeasonBornIn
# 772 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
# 773 "data/maps/SootopolisCity/scripts.pory"
	release
# 774 "data/maps/SootopolisCity/scripts.pory"
	end
# 775 "data/maps/SootopolisCity/scripts.pory"

# 776 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriLikeSeasonBornIn::
# 777 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
# 778 "data/maps/SootopolisCity/scripts.pory"
	release
# 779 "data/maps/SootopolisCity/scripts.pory"
	end
# 780 "data/maps/SootopolisCity/scripts.pory"

# 781 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2::
# 782 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 783 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FacePlayer
# 784 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 785 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman2Rayquaza
# 786 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 787 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 788 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FaceOriginalDirection
# 789 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 790 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 791 "data/maps/SootopolisCity/scripts.pory"
	end
# 792 "data/maps/SootopolisCity/scripts.pory"

# 793 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2Rayquaza::
# 794 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
# 795 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 796 "data/maps/SootopolisCity/scripts.pory"
	end
# 797 "data/maps/SootopolisCity/scripts.pory"

# 798 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man::
# 799 "data/maps/SootopolisCity/scripts.pory"
	lock
# 800 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 801 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ManPostLegendaries
# 802 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
# 803 "data/maps/SootopolisCity/scripts.pory"
	release
# 804 "data/maps/SootopolisCity/scripts.pory"
	end
# 805 "data/maps/SootopolisCity/scripts.pory"

# 806 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManPostLegendaries::
# 807 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
# 808 "data/maps/SootopolisCity/scripts.pory"
	release
# 809 "data/maps/SootopolisCity/scripts.pory"
	end
# 810 "data/maps/SootopolisCity/scripts.pory"

# 811 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1::
# 812 "data/maps/SootopolisCity/scripts.pory"
	lock
# 813 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 814 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Woman1PostLegendaries
# 815 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman1Rayquaza
# 816 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_Woman1Legendaries
# 817 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
# 818 "data/maps/SootopolisCity/scripts.pory"
	release
# 819 "data/maps/SootopolisCity/scripts.pory"
	end
# 820 "data/maps/SootopolisCity/scripts.pory"

# 821 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Legendaries::
# 822 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 823 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 824 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 825 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 826 "data/maps/SootopolisCity/scripts.pory"
	release
# 827 "data/maps/SootopolisCity/scripts.pory"
	end
# 828 "data/maps/SootopolisCity/scripts.pory"

# 829 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1PostLegendaries::
# 830 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
# 831 "data/maps/SootopolisCity/scripts.pory"
	release
# 832 "data/maps/SootopolisCity/scripts.pory"
	end
# 833 "data/maps/SootopolisCity/scripts.pory"

# 834 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Rayquaza::
# 835 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
# 836 "data/maps/SootopolisCity/scripts.pory"
	release
# 837 "data/maps/SootopolisCity/scripts.pory"
	end
# 838 "data/maps/SootopolisCity/scripts.pory"

# 839 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy::
# 840 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 841 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FacePlayer
# 842 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 843 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_NinjaBoyRayquaza
# 844 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_NinjaBoyNormal
# 845 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_NinjaBoyNormal
# 846 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 847 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 848 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FaceOriginalDirection
# 849 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 850 "data/maps/SootopolisCity/scripts.pory"
	release
# 851 "data/maps/SootopolisCity/scripts.pory"
	end
# 852 "data/maps/SootopolisCity/scripts.pory"

# 853 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyNormal::
# 854 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
# 855 "data/maps/SootopolisCity/scripts.pory"
	release
# 856 "data/maps/SootopolisCity/scripts.pory"
	end
# 857 "data/maps/SootopolisCity/scripts.pory"

# 858 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyRayquaza::
# 859 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
# 860 "data/maps/SootopolisCity/scripts.pory"
	release
# 861 "data/maps/SootopolisCity/scripts.pory"
	end
# 862 "data/maps/SootopolisCity/scripts.pory"

# 863 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1::
# 864 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 865 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FacePlayer
# 866 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 867 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy1Rayquaza
# 868 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1GameClear
# 869 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Boy1Normal
# 870 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_Boy1Normal
# 871 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 872 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 873 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FaceOriginalDirection
# 874 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 875 "data/maps/SootopolisCity/scripts.pory"
	release
# 876 "data/maps/SootopolisCity/scripts.pory"
	end
# 877 "data/maps/SootopolisCity/scripts.pory"

# 878 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Rayquaza::
# 879 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
# 880 "data/maps/SootopolisCity/scripts.pory"
	release
# 881 "data/maps/SootopolisCity/scripts.pory"
	end
# 882 "data/maps/SootopolisCity/scripts.pory"

# 883 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1GameClear::
# 884 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
# 885 "data/maps/SootopolisCity/scripts.pory"
	release
# 886 "data/maps/SootopolisCity/scripts.pory"
	end
# 887 "data/maps/SootopolisCity/scripts.pory"

# 888 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Normal::
# 889 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
# 890 "data/maps/SootopolisCity/scripts.pory"
	release
# 891 "data/maps/SootopolisCity/scripts.pory"
	end
# 892 "data/maps/SootopolisCity/scripts.pory"

# 893 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GymSign::
# 894 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
# 895 "data/maps/SootopolisCity/scripts.pory"
	end
# 896 "data/maps/SootopolisCity/scripts.pory"

# 897 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CitySign::
# 898 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
# 899 "data/maps/SootopolisCity/scripts.pory"
	end
# 900 "data/maps/SootopolisCity/scripts.pory"

# 901 "data/maps/SootopolisCity/scripts.pory"
EventScript_ClosedSootopolisDoor::
# 902 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
# 903 "data/maps/SootopolisCity/scripts.pory"
	end
# 904 "data/maps/SootopolisCity/scripts.pory"

# 905 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven::
# 906 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 907 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
# 908 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 909 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
# 910 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_StevenHelpWallace
# 911 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_StevenHelpedWallace
# 912 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_StevenHelpedWallace
# 913 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_StevenMaxieArchieLeft
# 914 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
# 915 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 916 "data/maps/SootopolisCity/scripts.pory"
	end
# 917 "data/maps/SootopolisCity/scripts.pory"

# 918 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpWallace::
# 919 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
# 920 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 921 "data/maps/SootopolisCity/scripts.pory"
	end
# 922 "data/maps/SootopolisCity/scripts.pory"

# 923 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenMaxieArchieLeft::
# 924 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
# 925 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 926 "data/maps/SootopolisCity/scripts.pory"
	end
# 927 "data/maps/SootopolisCity/scripts.pory"

# 928 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_DawnMaxieArchieLeft::
# 929 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DawnMaxieArchieLeft, MSGBOX_DEFAULT
# 930 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 931 "data/maps/SootopolisCity/scripts.pory"
	end
# 932 "data/maps/SootopolisCity/scripts.pory"

# 933 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpedWallace::
# 934 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
# 935 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 936 "data/maps/SootopolisCity/scripts.pory"
	end
# 937 "data/maps/SootopolisCity/scripts.pory"

# 938 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 939 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_InvolvedWithCrisisComeWithMe, MSGBOX_DEFAULT
# 940 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 941 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_StartWalkToCaveOfOriginWest
# 942 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth
# 943 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
# 944 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 945 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 946 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 947 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 948 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 949 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_EXPERT, SootopolisCity_Movement_ExpertMoveAside
# 950 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 951 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 952 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerArriveCaveEntrance
# 953 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 954 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HereWereAreHelpWallace, MSGBOX_DEFAULT
# 955 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 956 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 957 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 958 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 959 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 960 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 961 "data/maps/SootopolisCity/scripts.pory"
	end
# 962 "data/maps/SootopolisCity/scripts.pory"

# 963 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginWest::
# 964 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 965 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
# 966 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 967 "data/maps/SootopolisCity/scripts.pory"
	return
# 968 "data/maps/SootopolisCity/scripts.pory"

# 969 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth::
# 970 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 971 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
# 972 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 973 "data/maps/SootopolisCity/scripts.pory"
	return
# 974 "data/maps/SootopolisCity/scripts.pory"

# 975 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 976 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 977 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 978 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 979 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 980 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 981 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 982 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 983 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 984 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 985 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 986 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 987 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 988 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 989 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 990 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 991 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 992 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 993 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 994 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 995 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 996 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 997 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 998 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 999 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1000 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1001 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1002 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1003 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1004 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1005 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1006 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1007 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1008 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1009 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1010 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1011 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1012 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1013 "data/maps/SootopolisCity/scripts.pory"

# 1014 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 1015 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1016 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1017 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1018 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1019 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1020 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1021 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1022 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1023 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1024 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1025 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1026 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1027 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1028 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1029 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1030 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1031 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1032 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1033 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1034 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1035 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1036 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1037 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1038 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1039 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1040 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1041 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1042 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1043 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1044 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1045 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1046 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1047 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1048 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1049 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1050 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1051 "data/maps/SootopolisCity/scripts.pory"

# 1052 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 1053 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1054 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1055 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1056 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1057 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1058 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1059 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1060 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1061 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1062 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1063 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1064 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1065 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1066 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1067 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1068 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1069 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1070 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1071 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1072 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1073 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1074 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1075 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1076 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1077 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1078 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1079 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1080 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1081 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1082 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1083 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1084 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1085 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1086 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1087 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1088 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1089 "data/maps/SootopolisCity/scripts.pory"

# 1090 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 1091 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1092 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1093 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1094 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1095 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1096 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1097 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1098 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1099 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1100 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1101 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1102 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1103 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1104 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1105 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1106 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1107 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1108 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1109 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1110 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1111 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1112 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1113 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1114 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1115 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1116 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1117 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1118 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1119 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1120 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1121 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1122 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1123 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1124 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1125 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1126 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1127 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1128 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1129 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1130 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1131 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1132 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1133 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1134 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1135 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1136 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1137 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1138 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1139 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1140 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1141 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 1142 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1143 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1144 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1145 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1146 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1147 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1148 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1149 "data/maps/SootopolisCity/scripts.pory"

# 1150 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 1151 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1152 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1153 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1154 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1155 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1156 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1157 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1158 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1159 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1160 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1161 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1162 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1163 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1164 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1165 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1166 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1167 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1168 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1169 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1170 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1171 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1172 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1173 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1174 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1175 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1176 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1177 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1178 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1179 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1180 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1181 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1182 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1183 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1184 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1185 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1186 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1187 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1188 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1189 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1190 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1191 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1192 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1193 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1194 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1195 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1196 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1197 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1198 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1199 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1200 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1201 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1202 "data/maps/SootopolisCity/scripts.pory"

# 1203 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_ExpertMoveAside:
# 1204 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 1205 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1206 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1207 "data/maps/SootopolisCity/scripts.pory"

# 1208 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 1209 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1210 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1211 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1212 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1213 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1214 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1215 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1216 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1217 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1218 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1219 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1220 "data/maps/SootopolisCity/scripts.pory"

# 1221 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerArriveCaveEntrance:
# 1222 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1223 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1224 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1225 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1226 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1227 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1228 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1229 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1230 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1231 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1232 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1233 "data/maps/SootopolisCity/scripts.pory"

# 1234 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerEnterCaveOfOrigin:
# 1235 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1236 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1237 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1238 "data/maps/SootopolisCity/scripts.pory"

# 1239 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2::
# 1240 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1241 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FacePlayer
# 1242 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1243 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy2Rayquaza
# 1244 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 1245 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1246 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FaceOriginalDirection
# 1247 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1248 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1249 "data/maps/SootopolisCity/scripts.pory"
	end
# 1250 "data/maps/SootopolisCity/scripts.pory"

# 1251 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2Rayquaza::
# 1252 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 1253 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1254 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1255 "data/maps/SootopolisCity/scripts.pory"
	end
# 1256 "data/maps/SootopolisCity/scripts.pory"

# 1257 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Dawn::
# 1258 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1259 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_FacePlayer
# 1260 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1261 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_DawnMaxieArchieLeft
# 1262 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_DawnPostRayquaza
# 1263 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsCrazy, MSGBOX_DEFAULT
# 1264 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1265 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_FaceOriginalDirection
# 1266 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1267 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1268 "data/maps/SootopolisCity/scripts.pory"
	end
# 1269 "data/maps/SootopolisCity/scripts.pory"

# 1270 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_DawnPostRayquaza::
# 1271 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreatWork, MSGBOX_DEFAULT
# 1272 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1273 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1274 "data/maps/SootopolisCity/scripts.pory"
	end
# 1275 "data/maps/SootopolisCity/scripts.pory"

# 1276 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt::
# 1277 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1278 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_BlackBeltRayquaza
# 1279 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 1280 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1281 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 1282 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1283 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 1284 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1285 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 1286 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1287 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1288 "data/maps/SootopolisCity/scripts.pory"
	end
# 1289 "data/maps/SootopolisCity/scripts.pory"

# 1290 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBeltRayquaza::
# 1291 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 1292 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1293 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
# 1294 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1295 "data/maps/SootopolisCity/scripts.pory"
	end
# 1296 "data/maps/SootopolisCity/scripts.pory"

# 1297 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl::
# 1298 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1299 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FacePlayer
# 1300 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1301 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_GirlRayquaza
# 1302 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 1303 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1304 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FaceOriginalDirection
# 1305 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1306 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1307 "data/maps/SootopolisCity/scripts.pory"
	end
# 1308 "data/maps/SootopolisCity/scripts.pory"

# 1309 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GirlRayquaza::
# 1310 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 1311 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1312 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1313 "data/maps/SootopolisCity/scripts.pory"
	end
# 1314 "data/maps/SootopolisCity/scripts.pory"

# 1315 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac::
# 1316 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1317 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FacePlayer
# 1318 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1319 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ManiacRayquaza
# 1320 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 1321 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1322 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FaceOriginalDirection
# 1323 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1324 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1325 "data/maps/SootopolisCity/scripts.pory"
	end
# 1326 "data/maps/SootopolisCity/scripts.pory"

# 1327 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManiacRayquaza::
# 1328 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
# 1329 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1330 "data/maps/SootopolisCity/scripts.pory"
	end
# 1331 "data/maps/SootopolisCity/scripts.pory"

# 1332 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace::
# 1333 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1334 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1335 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_GoToSkyPillar
# 1336 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, SootopolisCity_EventScript_GoToGym
# 1337 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_GiveWaterfall
# 1338 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
# 1339 "data/maps/SootopolisCity/scripts.pory"
	release
# 1340 "data/maps/SootopolisCity/scripts.pory"
	end
# 1341 "data/maps/SootopolisCity/scripts.pory"

# 1342 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall::
# 1343 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 1344 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 1345 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 1346 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 1347 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1348 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_WallaceMoveFromGym
# 1349 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SootopolisCity_EventScript_WallaceMoveFromGym
# 1350 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_WallaceMoveFromGymWest
# 1351 "data/maps/SootopolisCity/scripts.pory"
	release
# 1352 "data/maps/SootopolisCity/scripts.pory"
	end
# 1353 "data/maps/SootopolisCity/scripts.pory"

# 1354 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGym::
# 1355 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, SootopolisCity_Movement_WallaceMoveFromGym
# 1356 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1357 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_WALLACE
# 1358 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
# 1359 "data/maps/SootopolisCity/scripts.pory"
	return
# 1360 "data/maps/SootopolisCity/scripts.pory"

# 1361 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGymWest::
# 1362 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, SootopolisCity_Movement_WallaceMoveFromGymWest
# 1363 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1364 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_WALLACE
# 1365 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
# 1366 "data/maps/SootopolisCity/scripts.pory"
	return
# 1367 "data/maps/SootopolisCity/scripts.pory"

# 1368 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToSkyPillar::
# 1369 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
# 1370 "data/maps/SootopolisCity/scripts.pory"
	release
# 1371 "data/maps/SootopolisCity/scripts.pory"
	end
# 1372 "data/maps/SootopolisCity/scripts.pory"

# 1373 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToGym::
# 1374 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DazzledByMentor, MSGBOX_DEFAULT
# 1375 "data/maps/SootopolisCity/scripts.pory"
	release
# 1376 "data/maps/SootopolisCity/scripts.pory"
	end
# 1377 "data/maps/SootopolisCity/scripts.pory"

# 1378 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGym:
# 1379 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1380 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1381 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1382 "data/maps/SootopolisCity/scripts.pory"

# 1383 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGymWest:
# 1384 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1385 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1386 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1387 "data/maps/SootopolisCity/scripts.pory"

# 1388 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie::
# 1389 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1390 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_MaxieRayquaza
# 1391 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 1392 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1393 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1394 "data/maps/SootopolisCity/scripts.pory"
	end
# 1395 "data/maps/SootopolisCity/scripts.pory"

# 1396 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieRayquaza::
# 1397 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_DEFAULT
# 1398 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 1399 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1400 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1401 "data/maps/SootopolisCity/scripts.pory"
	end
# 1402 "data/maps/SootopolisCity/scripts.pory"

# 1403 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie::
# 1404 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1405 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ArchieRayquaza
# 1406 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 1407 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1408 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1409 "data/maps/SootopolisCity/scripts.pory"
	end
# 1410 "data/maps/SootopolisCity/scripts.pory"

# 1411 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieRayquaza::
# 1412 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_DEFAULT
# 1413 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 1414 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1415 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1416 "data/maps/SootopolisCity/scripts.pory"
	end
# 1417 "data/maps/SootopolisCity/scripts.pory"

# 1418 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieArchieLeave::
# 1419 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 1420 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 1421 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 1422 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 1423 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 1424 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 1425 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 1426 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1427 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1428 "data/maps/SootopolisCity/scripts.pory"
	end
# 1429 "data/maps/SootopolisCity/scripts.pory"

# 1430 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1431 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate::
# 1432 "data/maps/SootopolisCity/scripts.pory"
	levitate
# 1433 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1434 "data/maps/SootopolisCity/scripts.pory"

# 1435 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1436 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask::
# 1437 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
# 1438 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1439 "data/maps/SootopolisCity/scripts.pory"

# 1440 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GymSign:
# 1441 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\n"
# 1442 "data/maps/SootopolisCity/scripts.pory"
	.string "LEADER: JUAN\p"
# 1443 "data/maps/SootopolisCity/scripts.pory"
	.string "“The GYM LEADER with the beauty\n"
# 1444 "data/maps/SootopolisCity/scripts.pory"
	.string "of pure water!”$"
# 1445 "data/maps/SootopolisCity/scripts.pory"

# 1446 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CitySign:
# 1447 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY\p"
# 1448 "data/maps/SootopolisCity/scripts.pory"
	.string "“The mystical city where history\n"
# 1449 "data/maps/SootopolisCity/scripts.pory"
	.string "slumbers.”$"
# 1450 "data/maps/SootopolisCity/scripts.pory"

# 1451 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoorIsClosed:
# 1452 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"
# 1453 "data/maps/SootopolisCity/scripts.pory"

# 1454 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PhysicallyFitLivingHere:
# 1455 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
# 1456 "data/maps/SootopolisCity/scripts.pory"
	.string "down stairs all the time…\p"
# 1457 "data/maps/SootopolisCity/scripts.pory"
	.string "If you live in this town, you end up\n"
# 1458 "data/maps/SootopolisCity/scripts.pory"
	.string "getting physically fit.$"
# 1459 "data/maps/SootopolisCity/scripts.pory"

# 1460 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiantPokemonSuddenlyAppeared:
# 1461 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant Pokémon suddenly appeared\n"
# 1462 "data/maps/SootopolisCity/scripts.pory"
	.string "in the middle of the city!\p"
# 1463 "data/maps/SootopolisCity/scripts.pory"
	.string "And, I've never seen them before!\p"
# 1464 "data/maps/SootopolisCity/scripts.pory"
	.string "Why are they smashing into each\n"
# 1465 "data/maps/SootopolisCity/scripts.pory"
	.string "other like that?\p"
# 1466 "data/maps/SootopolisCity/scripts.pory"
	.string "Why can't they be friends, those\n"
# 1467 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon?$"
# 1468 "data/maps/SootopolisCity/scripts.pory"

# 1469 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhatIsThatGreenPokemon:
# 1470 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
# 1471 "data/maps/SootopolisCity/scripts.pory"
	.string "What is that green Pokémon?!$"
# 1472 "data/maps/SootopolisCity/scripts.pory"

# 1473 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhereDidLegendariesGo:
# 1474 "data/maps/SootopolisCity/scripts.pory"
	.string "Groudon and Kyogre…\n"
# 1475 "data/maps/SootopolisCity/scripts.pory"
	.string "Where did they go?\p"
# 1476 "data/maps/SootopolisCity/scripts.pory"
	.string "Will they cause droughts or downpours\n"
# 1477 "data/maps/SootopolisCity/scripts.pory"
	.string "somewhere else?$"
# 1478 "data/maps/SootopolisCity/scripts.pory"

# 1479 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TwoPokemonArentAngry:
# 1480 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
# 1481 "data/maps/SootopolisCity/scripts.pory"
	.string "the two Pokémon aren't angry.\p"
# 1482 "data/maps/SootopolisCity/scripts.pory"
	.string "I think… They probably can't control\n"
# 1483 "data/maps/SootopolisCity/scripts.pory"
	.string "their own power…$"
# 1484 "data/maps/SootopolisCity/scripts.pory"

# 1485 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FlyingMonStoppedRampage:
# 1486 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying Pokémon came down from\n"
# 1487 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky and stopped the rampaging\l"
# 1488 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon…$"
# 1489 "data/maps/SootopolisCity/scripts.pory"

# 1490 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreatWork:
# 1491 "data/maps/SootopolisCity/scripts.pory"
	.string "That was incredible, {PLAYER}. I've\n"
# 1492 "data/maps/SootopolisCity/scripts.pory"
	.string "never seen such powerful Pokémon\l"
# 1493 "data/maps/SootopolisCity/scripts.pory"
	.string "interacting like that in the wild.\p"
# 1494 "data/maps/SootopolisCity/scripts.pory"
	.string "Anyway, you were pretty incredible\n"
# 1495 "data/maps/SootopolisCity/scripts.pory"
	.string "yourself! I can't believe Drake turned\l"
# 1496 "data/maps/SootopolisCity/scripts.pory"
	.string "out to have his own evil plan all along…\p"
# 1497 "data/maps/SootopolisCity/scripts.pory"
	.string "At least you were there to stop him!\p"
# 1498 "data/maps/SootopolisCity/scripts.pory"
	.string "And I think that friend of mine from\n"
# 1499 "data/maps/SootopolisCity/scripts.pory"
	.string "the Sinnoh region might be a good\p"
# 1500 "data/maps/SootopolisCity/scripts.pory"
	.string "candidate to take his place in the Elite\n"
# 1501 "data/maps/SootopolisCity/scripts.pory"
	.string "Four temporarily, I'll have to talk to\l"
# 1502 "data/maps/SootopolisCity/scripts.pory"
	.string "Steven and Wallace about that.$"
# 1503 "data/maps/SootopolisCity/scripts.pory"

# 1504 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsCrazy:
# 1505 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}! I bumped into Steven in\n"
# 1506 "data/maps/SootopolisCity/scripts.pory"
	.string "Mossdeep soon after you left, and he\l"
# 1507 "data/maps/SootopolisCity/scripts.pory"
	.string "asked that I head here to Sootopolis\p"
# 1508 "data/maps/SootopolisCity/scripts.pory"
	.string "while you went after Team Magma and\n"
# 1509 "data/maps/SootopolisCity/scripts.pory"
	.string "Drake went after Team Aqua.\p"
# 1510 "data/maps/SootopolisCity/scripts.pory"
	.string "By the time I got here, Groudon and\n"
# 1511 "data/maps/SootopolisCity/scripts.pory"
	.string "Kyogre were already facing off!\p"
# 1512 "data/maps/SootopolisCity/scripts.pory"
	.string "What are we going to do? I hope the\n"
# 1513 "data/maps/SootopolisCity/scripts.pory"
	.string "person I called from Sinnoh makes it\l"
# 1514 "data/maps/SootopolisCity/scripts.pory"
	.string "here in time…$"
# 1515 "data/maps/SootopolisCity/scripts.pory"

# 1516 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WonderWhatWorldIsLike:
# 1517 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
# 1518 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder what the world is like on\n"
# 1519 "data/maps/SootopolisCity/scripts.pory"
	.string "the other side of these round walls?\p"
# 1520 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, did I say walls? I meant cliffs…\n"
# 1521 "data/maps/SootopolisCity/scripts.pory"
	.string "Sorry, those titan-sized Pokémon\l"
# 1522 "data/maps/SootopolisCity/scripts.pory"
	.string "really spooked me.$"
# 1523 "data/maps/SootopolisCity/scripts.pory"

# 1524 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsWicked:
# 1525 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1526 "data/maps/SootopolisCity/scripts.pory"
	.string "This is wicked!$"
# 1527 "data/maps/SootopolisCity/scripts.pory"

# 1528 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThatWasWicked:
# 1529 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1530 "data/maps/SootopolisCity/scripts.pory"
	.string "That was wicked!$"
# 1531 "data/maps/SootopolisCity/scripts.pory"

# 1532 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GoRedAndBlueMon:
# 1533 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red Pokémon!\n"
# 1534 "data/maps/SootopolisCity/scripts.pory"
	.string "Don't back off, blue Pokémon!$"
# 1535 "data/maps/SootopolisCity/scripts.pory"

# 1536 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoYouKnowMonNames:
# 1537 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1538 "data/maps/SootopolisCity/scripts.pory"
	.string "Hi, do you know the names of those\n"
# 1539 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon fighting over there?$"
# 1540 "data/maps/SootopolisCity/scripts.pory"

# 1541 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreenOneSettlesThings:
# 1542 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
# 1543 "data/maps/SootopolisCity/scripts.pory"
	.string "the red one or the blue one, but, oh no,\l"
# 1544 "data/maps/SootopolisCity/scripts.pory"
	.string "it's the green one that settles things!\p"
# 1545 "data/maps/SootopolisCity/scripts.pory"
	.string "Talk about a huge turn of events!$"
# 1546 "data/maps/SootopolisCity/scripts.pory"

# 1547 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SeeingLegendWithOwnEyes:
# 1548 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1549 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1550 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between Pokémon.\p"
# 1551 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I'm seeing that happen with\n"
# 1552 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1553 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1554 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1555 "data/maps/SootopolisCity/scripts.pory"

# 1556 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SawLegendWithOwnEyes:
# 1557 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1558 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1559 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between Pokémon.\p"
# 1560 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I saw that happen with\n"
# 1561 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1562 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1563 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1564 "data/maps/SootopolisCity/scripts.pory"

# 1565 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_BigPokemonFighting:
# 1566 "data/maps/SootopolisCity/scripts.pory"
	.string "A big Pokémon is fighting with\n"
# 1567 "data/maps/SootopolisCity/scripts.pory"
	.string "another big Pokémon!\p"
# 1568 "data/maps/SootopolisCity/scripts.pory"
	.string "Please, someone make them stop!$"
# 1569 "data/maps/SootopolisCity/scripts.pory"

# 1570 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PrettyMonCameFromSky:
# 1571 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty Pokémon came down from\n"
# 1572 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky…$"
# 1573 "data/maps/SootopolisCity/scripts.pory"

# 1574 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisWillBeWrecked:
# 1575 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
# 1576 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City will get wrecked!$"
# 1577 "data/maps/SootopolisCity/scripts.pory"

# 1578 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisDidntGetWrecked:
# 1579 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City didn't get wrecked!$"
# 1580 "data/maps/SootopolisCity/scripts.pory"

# 1581 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NoOrdinaryTourist:
# 1582 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
# 1583 "data/maps/SootopolisCity/scripts.pory"
	.string "You've come all the way to Sootopolis?\l"
# 1584 "data/maps/SootopolisCity/scripts.pory"
	.string "You're no ordinary tourist.\p"
# 1585 "data/maps/SootopolisCity/scripts.pory"
	.string "But I suppose that doesn't make you\n"
# 1586 "data/maps/SootopolisCity/scripts.pory"
	.string "an extraordinary tourist, either.$"
# 1587 "data/maps/SootopolisCity/scripts.pory"

# 1588 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CityRegainedCalm:
# 1589 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"
# 1590 "data/maps/SootopolisCity/scripts.pory"

# 1591 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginPleaseLeave:
# 1592 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\p"
# 1593 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the Cave of Origin.\p"
# 1594 "data/maps/SootopolisCity/scripts.pory"
	.string "The spirits of Pokémon, becalmed at\n"
# 1595 "data/maps/SootopolisCity/scripts.pory"
	.string "MT. PYRE, are said to be revived here.\p"
# 1596 "data/maps/SootopolisCity/scripts.pory"
	.string "Please leave.$"
# 1597 "data/maps/SootopolisCity/scripts.pory"

# 1598 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_LeadSuperiorTrainerToCave:
# 1599 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\n"
# 1600 "data/maps/SootopolisCity/scripts.pory"
	.string "superior talent…\p"
# 1601 "data/maps/SootopolisCity/scripts.pory"
	.string "A TRAINER who has knowledge and\n"
# 1602 "data/maps/SootopolisCity/scripts.pory"
	.string "experience of many kinds of Pokémon…\p"
# 1603 "data/maps/SootopolisCity/scripts.pory"
	.string "If such a person were to appear, I was\n"
# 1604 "data/maps/SootopolisCity/scripts.pory"
	.string "instructed by Wallace to lead that\l"
# 1605 "data/maps/SootopolisCity/scripts.pory"
	.string "TRAINER to this CAVE.$"
# 1606 "data/maps/SootopolisCity/scripts.pory"

# 1607 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AwakenedPokemonClash:
# 1608 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\p"
# 1609 "data/maps/SootopolisCity/scripts.pory"
	.string "The clash between the two awakened\n"
# 1610 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon was quelled by the awakening\l"
# 1611 "data/maps/SootopolisCity/scripts.pory"
	.string "of a third Pokémon…$"
# 1612 "data/maps/SootopolisCity/scripts.pory"

# 1613 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginSleepsToo:
# 1614 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the Cave of Origin…\p"
# 1615 "data/maps/SootopolisCity/scripts.pory"
	.string "With the passing of the crisis,\n"
# 1616 "data/maps/SootopolisCity/scripts.pory"
	.string "the cave, too, shall sleep…$"
# 1617 "data/maps/SootopolisCity/scripts.pory"

# 1618 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisSkyBeautiful:
# 1619 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis sprang up as a town in\n"
# 1620 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano.\p"
# 1621 "data/maps/SootopolisCity/scripts.pory"
	.string "If you look up at the sky, the lip of\n"
# 1622 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater is also visible.\l"
# 1623 "data/maps/SootopolisCity/scripts.pory"
	.string "So, all you see is the sky in a circle.\p"
# 1624 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's what makes the sky above\n"
# 1625 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis the most beautiful.$"
# 1626 "data/maps/SootopolisCity/scripts.pory"

# 1627 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiganticPokemonFight:
# 1628 "data/maps/SootopolisCity/scripts.pory"
	.string "When two Pokémon that gigantic\n"
# 1629 "data/maps/SootopolisCity/scripts.pory"
	.string "are fighting that savagely, there's\l"
# 1630 "data/maps/SootopolisCity/scripts.pory"
	.string "not much that we can do.$"
# 1631 "data/maps/SootopolisCity/scripts.pory"

# 1632 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FearedWorstWhenPokemonFlewDown:
# 1633 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third Pokémon flew down,\n"
# 1634 "data/maps/SootopolisCity/scripts.pory"
	.string "I feared the worst.$"
# 1635 "data/maps/SootopolisCity/scripts.pory"

# 1636 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NightSkyFavoriteScenery:
# 1637 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
# 1638 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano…\p"
# 1639 "data/maps/SootopolisCity/scripts.pory"
	.string "And in that ring, stars flicker and\n"
# 1640 "data/maps/SootopolisCity/scripts.pory"
	.string "blink as if they were alive…\l"
# 1641 "data/maps/SootopolisCity/scripts.pory"
	.string "It's my favorite scenery.$"
# 1642 "data/maps/SootopolisCity/scripts.pory"

# 1643 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WeatherWentWild:
# 1644 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather was clear this morning,\n"
# 1645 "data/maps/SootopolisCity/scripts.pory"
	.string "but…\p"
# 1646 "data/maps/SootopolisCity/scripts.pory"
	.string "All of a sudden, dark clouds brewed up,\n"
# 1647 "data/maps/SootopolisCity/scripts.pory"
	.string "rain started falling in sheets, and\l"
# 1648 "data/maps/SootopolisCity/scripts.pory"
	.string "there was thunder and lightning, too.\p"
# 1649 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather just went completely\n"
# 1650 "data/maps/SootopolisCity/scripts.pory"
	.string "wild!\p"
# 1651 "data/maps/SootopolisCity/scripts.pory"
	.string "Is all of this because of those\n"
# 1652 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon?$"
# 1653 "data/maps/SootopolisCity/scripts.pory"

# 1654 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouBroughtFlyingMon:
# 1655 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
# 1656 "data/maps/SootopolisCity/scripts.pory"
	.string "It was you who brought that flying\n"
# 1657 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon here?\p"
# 1658 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, aren't you amazing!$"
# 1659 "data/maps/SootopolisCity/scripts.pory"

# 1660 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GroudonPleaseStop:
# 1661 "data/maps/SootopolisCity/scripts.pory"
	.string "G… Groudon…\n"
# 1662 "data/maps/SootopolisCity/scripts.pory"
	.string "Please! Stop what you're doing!\p"
# 1663 "data/maps/SootopolisCity/scripts.pory"
	.string "I know the extent of your power now!\p"
# 1664 "data/maps/SootopolisCity/scripts.pory"
	.string "If you keep going, all Hoenn, not just\n"
# 1665 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis, will be utterly ruined!$"
# 1666 "data/maps/SootopolisCity/scripts.pory"

# 1667 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AfterAllOurScheming:
# 1668 "data/maps/SootopolisCity/scripts.pory"
	.string "So the super-ancient Pokémon\n"
# 1669 "data/maps/SootopolisCity/scripts.pory"
	.string "weren't only Groudon and Kyogre…\p"
# 1670 "data/maps/SootopolisCity/scripts.pory"
	.string "After all our fruitless scheming and\n"
# 1671 "data/maps/SootopolisCity/scripts.pory"
	.string "frantic efforts, that one Pokémon's\l"
# 1672 "data/maps/SootopolisCity/scripts.pory"
	.string "simple action puts everything right\l"
# 1673 "data/maps/SootopolisCity/scripts.pory"
	.string "again as if nothing had happened…\p"
# 1674 "data/maps/SootopolisCity/scripts.pory"
	.string "Fu…\n"
# 1675 "data/maps/SootopolisCity/scripts.pory"
	.string "Fuhahaha…$"
# 1676 "data/maps/SootopolisCity/scripts.pory"

# 1677 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KyogreCalmDown:
# 1678 "data/maps/SootopolisCity/scripts.pory"
	.string "Kyogre! What's wrong?!\n"
# 1679 "data/maps/SootopolisCity/scripts.pory"
	.string "Calm down! Kyogre!\p"
# 1680 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 1681 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1682 "data/maps/SootopolisCity/scripts.pory"
	.string "It's no good!\n"
# 1683 "data/maps/SootopolisCity/scripts.pory"
	.string "It's not responding at all!$"
# 1684 "data/maps/SootopolisCity/scripts.pory"

# 1685 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TryingMeaninglessToPokemon:
# 1686 "data/maps/SootopolisCity/scripts.pory"
	.string "Kyogre and Groudon both\n"
# 1687 "data/maps/SootopolisCity/scripts.pory"
	.string "flew off to who knows where.\p"
# 1688 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather in Hoenn has returned\n"
# 1689 "data/maps/SootopolisCity/scripts.pory"
	.string "to its normal state…\p"
# 1690 "data/maps/SootopolisCity/scripts.pory"
	.string "Haha…\n"
# 1691 "data/maps/SootopolisCity/scripts.pory"
	.string "Hahaha…\p"
# 1692 "data/maps/SootopolisCity/scripts.pory"
	.string "Maybe what we were trying to do was\n"
# 1693 "data/maps/SootopolisCity/scripts.pory"
	.string "something small, even meaningless,\l"
# 1694 "data/maps/SootopolisCity/scripts.pory"
	.string "to Pokémon…$"
# 1695 "data/maps/SootopolisCity/scripts.pory"

# 1696 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_InvolvedWithCrisisComeWithMe:
# 1697 "data/maps/SootopolisCity/scripts.pory"
	.string "Those Pokémon fighting…\n"
# 1698 "data/maps/SootopolisCity/scripts.pory"
	.string "Groudon… And Kyogre…\p"
# 1699 "data/maps/SootopolisCity/scripts.pory"
	.string "The two super-ancient Pokémon\n"
# 1700 "data/maps/SootopolisCity/scripts.pory"
	.string "were awakened from a long sleep…\p"
# 1701 "data/maps/SootopolisCity/scripts.pory"
	.string "And now they are smashing each other\n"
# 1702 "data/maps/SootopolisCity/scripts.pory"
	.string "with their uncontrollable energy…\p"
# 1703 "data/maps/SootopolisCity/scripts.pory"
	.string "…{PLAYER}{KUN}.\p"
# 1704 "data/maps/SootopolisCity/scripts.pory"
	.string "You being here now I'll take to mean\n"
# 1705 "data/maps/SootopolisCity/scripts.pory"
	.string "that you're prepared to become\l"
# 1706 "data/maps/SootopolisCity/scripts.pory"
	.string "involved in this crisis.\p"
# 1707 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, then, there's someone that\n"
# 1708 "data/maps/SootopolisCity/scripts.pory"
	.string "I'd like you to meet.\p"
# 1709 "data/maps/SootopolisCity/scripts.pory"
	.string "Come with me, please.$"
# 1710 "data/maps/SootopolisCity/scripts.pory"

# 1711 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoesThisMakeYourFearPokemon:
# 1712 "data/maps/SootopolisCity/scripts.pory"
	.string "Listen, {PLAYER}{KUN}.\p"
# 1713 "data/maps/SootopolisCity/scripts.pory"
	.string "Does seeing Groudon and Kyogre make\n"
# 1714 "data/maps/SootopolisCity/scripts.pory"
	.string "you think Pokémon are to be feared?\p"
# 1715 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's not true.\n"
# 1716 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon are really more…\p"
# 1717 "data/maps/SootopolisCity/scripts.pory"
	.string "…Why am I asking you this?\n"
# 1718 "data/maps/SootopolisCity/scripts.pory"
	.string "You already know.$"
# 1719 "data/maps/SootopolisCity/scripts.pory"

# 1720 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HereWereAreHelpWallace:
# 1721 "data/maps/SootopolisCity/scripts.pory"
	.string "Okay, here we are!\p"
# 1722 "data/maps/SootopolisCity/scripts.pory"
	.string "Inside here you'll find someone named\n"
# 1723 "data/maps/SootopolisCity/scripts.pory"
	.string "Wallace.\p"
# 1724 "data/maps/SootopolisCity/scripts.pory"
	.string "I think you have what's needed to\n"
# 1725 "data/maps/SootopolisCity/scripts.pory"
	.string "help him…$"
# 1726 "data/maps/SootopolisCity/scripts.pory"

# 1727 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KnowWhatsNeededToHelpHim:
# 1728 "data/maps/SootopolisCity/scripts.pory"
	.string "I think you have what's\n"
# 1729 "data/maps/SootopolisCity/scripts.pory"
	.string "needed to help him…$"
# 1730 "data/maps/SootopolisCity/scripts.pory"

# 1731 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NeverBeenToSkyPillar:
# 1732 "data/maps/SootopolisCity/scripts.pory"
	.string "The Sky Pillar…\p"
# 1733 "data/maps/SootopolisCity/scripts.pory"
	.string "I've never been there.\n"
# 1734 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder where it could be?$"
# 1735 "data/maps/SootopolisCity/scripts.pory"

# 1736 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SoThatsRayquaza:
# 1737 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}…\p"
# 1738 "data/maps/SootopolisCity/scripts.pory"
	.string "I can't believe that Drake was using us\n"
# 1739 "data/maps/SootopolisCity/scripts.pory"
	.string "for so long like how you described.\p"
# 1740 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm so sorry I didn't see this coming,\n"
# 1741 "data/maps/SootopolisCity/scripts.pory"
	.string "and I wasn't even there to help when he\l"
# 1742 "data/maps/SootopolisCity/scripts.pory"
	.string "captured and utilized Mega Rayquaza…\p"
# 1743 "data/maps/SootopolisCity/scripts.pory"
	.string "It is truly remarkable that you were\n"
# 1744 "data/maps/SootopolisCity/scripts.pory"
	.string "able to defeat him all on your own. You\p"
# 1745 "data/maps/SootopolisCity/scripts.pory"
	.string "are a hero to the people of Hoenn… no,\n"
# 1746 "data/maps/SootopolisCity/scripts.pory"
	.string "to people everywhere!\p"
# 1747 "data/maps/SootopolisCity/scripts.pory"
	.string "Who knows how much destruction could\n"
# 1748 "data/maps/SootopolisCity/scripts.pory"
	.string "have been caused if you hadn't stopped\p"
# 1749 "data/maps/SootopolisCity/scripts.pory"
	.string "Drake and gotten Rayquaza to come\n"
# 1750 "data/maps/SootopolisCity/scripts.pory"
	.string "here?\p"
# 1751 "data/maps/SootopolisCity/scripts.pory"
	.string "You really are a special trainer,\n"
# 1752 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}, and I sincerely thank you.$"
# 1753 "data/maps/SootopolisCity/scripts.pory"

# 1754 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_MaxieArchieLeft:
# 1755 "data/maps/SootopolisCity/scripts.pory"
	.string "It looks like both Maxie and\n"
# 1756 "data/maps/SootopolisCity/scripts.pory"
	.string "Archie have gone away somewhere.\p"
# 1757 "data/maps/SootopolisCity/scripts.pory"
	.string "Perhaps they've gone to Mt. Pyre to\n"
# 1758 "data/maps/SootopolisCity/scripts.pory"
	.string "return those Orbs…\p"
# 1759 "data/maps/SootopolisCity/scripts.pory"
	.string "Anyway! I guess we'll need someone to\n"
# 1760 "data/maps/SootopolisCity/scripts.pory"
	.string "replace Drake in the Elite Four for now,\p"
# 1761 "data/maps/SootopolisCity/scripts.pory"
	.string "and it sounds like your friend Dawn has\n"
# 1762 "data/maps/SootopolisCity/scripts.pory"
	.string "someone in mind who could help us.$"
# 1763 "data/maps/SootopolisCity/scripts.pory"

# 1764 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DawnMaxieArchieLeft:
# 1765 "data/maps/SootopolisCity/scripts.pory"
	.string "Good luck against Juan, {PLAYER}!\n"
# 1766 "data/maps/SootopolisCity/scripts.pory"
	.string "Hopefully my friend from Sinnoh arrives\p"
# 1767 "data/maps/SootopolisCity/scripts.pory"
	.string "before you beat him and blaze your way\n"
# 1768 "data/maps/SootopolisCity/scripts.pory"
	.string "to the Elite Four!$"
# 1769 "data/maps/SootopolisCity/scripts.pory"

# 1770 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HaventYouScaledSkyPillar:
# 1771 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\n"
# 1772 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}?\p"
# 1773 "data/maps/SootopolisCity/scripts.pory"
	.string "Haven't you scaled the Sky Pillar\n"
# 1774 "data/maps/SootopolisCity/scripts.pory"
	.string "yet?\p"
# 1775 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm sure that you can make it to\n"
# 1776 "data/maps/SootopolisCity/scripts.pory"
	.string "the top of the Sky Pillar…$"
# 1777 "data/maps/SootopolisCity/scripts.pory"

# 1778 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AquaMagmaDidntMeanHarm:
# 1779 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}…\p"
# 1780 "data/maps/SootopolisCity/scripts.pory"
	.string "The leaders of Team Magma and Aqua,\n"
# 1781 "data/maps/SootopolisCity/scripts.pory"
	.string "I don't think they meant harm.\p"
# 1782 "data/maps/SootopolisCity/scripts.pory"
	.string "It wouldn't hurt to hear what they\n"
# 1783 "data/maps/SootopolisCity/scripts.pory"
	.string "have to say for themselves.$"
# 1784 "data/maps/SootopolisCity/scripts.pory"

# 1785 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThankYouForHelpAcceptThis:
# 1786 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 1787 "data/maps/SootopolisCity/scripts.pory"
	.string "My eyes didn't deceive me.\p"
# 1788 "data/maps/SootopolisCity/scripts.pory"
	.string "Thanks to your help, Sootopolis…\n"
# 1789 "data/maps/SootopolisCity/scripts.pory"
	.string "No, all of Hoenn was saved.\p"
# 1790 "data/maps/SootopolisCity/scripts.pory"
	.string "On behalf of the people, I thank you.\p"
# 1791 "data/maps/SootopolisCity/scripts.pory"
	.string "This is a gift from me.\n"
# 1792 "data/maps/SootopolisCity/scripts.pory"
	.string "Please accept it.$"
# 1793 "data/maps/SootopolisCity/scripts.pory"

# 1794 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ExplainWaterfallGoToGym:
# 1795 "data/maps/SootopolisCity/scripts.pory"
	.string "That Hidden Machine contains\n"
# 1796 "data/maps/SootopolisCity/scripts.pory"
	.string "Waterfall.\p"
# 1797 "data/maps/SootopolisCity/scripts.pory"
	.string "If you have the Rain Badge, a Pokémon\n"
# 1798 "data/maps/SootopolisCity/scripts.pory"
	.string "that has learned that HM move can\l"
# 1799 "data/maps/SootopolisCity/scripts.pory"
	.string "force its way up waterfalls.\p"
# 1800 "data/maps/SootopolisCity/scripts.pory"
	.string "And where does one get the Rain Badge?\n"
# 1801 "data/maps/SootopolisCity/scripts.pory"
	.string "You know, don't you?\p"
# 1802 "data/maps/SootopolisCity/scripts.pory"
	.string "That's right! You have to beat\n"
# 1803 "data/maps/SootopolisCity/scripts.pory"
	.string "the Sootopolis Gym Leader.\p"
# 1804 "data/maps/SootopolisCity/scripts.pory"
	.string "When you're all set to go, step through\n"
# 1805 "data/maps/SootopolisCity/scripts.pory"
	.string "that door.\p"
# 1806 "data/maps/SootopolisCity/scripts.pory"
	.string "But be warned, my mentor has recently\n"
# 1807 "data/maps/SootopolisCity/scripts.pory"
	.string "changed his style…\p"
# 1808 "data/maps/SootopolisCity/scripts.pory"
	.string "He taught me everything I know about\n"
# 1809 "data/maps/SootopolisCity/scripts.pory"
	.string "Water-type Pokémon, but now, he's\l"
# 1810 "data/maps/SootopolisCity/scripts.pory"
	.string "become a master of the Fairy type!$"
# 1811 "data/maps/SootopolisCity/scripts.pory"

# 1812 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DazzledByMentor:
# 1813 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm sure that you will be\n"
# 1814 "data/maps/SootopolisCity/scripts.pory"
	.string "dazzled by my mentor's breathtakingly\l"
# 1815 "data/maps/SootopolisCity/scripts.pory"
	.string "elegant battle style.\p"
# 1816 "data/maps/SootopolisCity/scripts.pory"
	.string "His Fairy types are already stronger\n"
# 1817 "data/maps/SootopolisCity/scripts.pory"
	.string "than his Water types were!$"
