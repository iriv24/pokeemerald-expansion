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
	map_script_2 VAR_START_POST_RAYQUAZA_SCENE, 1, SootopolisCity_EventScript_PostRayquazaScene
# 195 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 196 "data/maps/SootopolisCity/scripts.pory"

# 197 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 198 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene::
# 199 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 200 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 201 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_LegendariesSceneFromDive
# 202 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_LegendariesSceneFromDive
# 203 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
# 204 "data/maps/SootopolisCity/scripts.pory"
	end
# 205 "data/maps/SootopolisCity/scripts.pory"

# 206 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
# 207 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 208 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 209 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 210 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 212 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 213 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 214 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 215 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 216 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 217 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 218 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 219 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 220 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 221 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 222 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 223 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 224 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 225 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 226 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 227 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 228 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 229 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 230 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 231 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 232 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 233 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 234 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 235 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 236 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 237 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 238 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 239 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 240 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 241 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 242 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 243 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 244 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 245 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 246 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 247 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 248 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 249 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 250 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 251 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 252 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 253 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 254 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 255 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 256 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 257 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 258 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 259 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 260 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 261 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 262 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 263 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 264 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 265 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 266 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 267 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 268 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
# 269 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 270 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 271 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 272 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 273 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 274 "data/maps/SootopolisCity/scripts.pory"
	end
# 275 "data/maps/SootopolisCity/scripts.pory"

# 276 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromPokeCenter:
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
	walk_slow_diag_southwest
# 289 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 290 "data/maps/SootopolisCity/scripts.pory"

# 291 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToPokeCenter:
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
	walk_slow_diag_northeast
# 304 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 305 "data/maps/SootopolisCity/scripts.pory"

# 306 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromDive::
# 307 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 308 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 309 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 310 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 311 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 312 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 313 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 314 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 315 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 316 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 317 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 318 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 319 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 320 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 321 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 323 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 324 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 325 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 326 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 327 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 329 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 330 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 331 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 332 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 333 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 334 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 335 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 336 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 337 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 338 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 339 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 340 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 341 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 342 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 343 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 344 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 345 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 346 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 347 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 348 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 349 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 350 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 351 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 352 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 353 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 354 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 355 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 356 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 357 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 358 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 359 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 360 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 361 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 362 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 363 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 364 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 365 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 366 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 367 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 368 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToDive
# 369 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 370 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 371 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 372 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 373 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 374 "data/maps/SootopolisCity/scripts.pory"
	end
# 375 "data/maps/SootopolisCity/scripts.pory"

# 376 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromDive:
# 377 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 378 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
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
	walk_up
# 386 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 387 "data/maps/SootopolisCity/scripts.pory"

# 388 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToDive:
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
	walk_down
# 396 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 397 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 398 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 399 "data/maps/SootopolisCity/scripts.pory"

# 400 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack:
# 401 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 402 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 403 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 404 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 405 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 406 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 407 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 408 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 409 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 410 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 411 "data/maps/SootopolisCity/scripts.pory"

# 412 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreDefend:
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
	delay_16
# 422 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 423 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 424 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 425 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 426 "data/maps/SootopolisCity/scripts.pory"

# 427 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreMoveBack:
# 428 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 429 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 430 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 431 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 432 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 433 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 434 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 435 "data/maps/SootopolisCity/scripts.pory"

# 436 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreIdle:
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
	walk_in_place_slow_left
# 443 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 444 "data/maps/SootopolisCity/scripts.pory"

# 445 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonAttack:
# 446 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 447 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 448 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 449 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 450 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 451 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 452 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 453 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 454 "data/maps/SootopolisCity/scripts.pory"

# 455 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonDefend:
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
	delay_16
# 465 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 466 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 467 "data/maps/SootopolisCity/scripts.pory"

# 468 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonMoveBack:
# 469 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 470 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 471 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 472 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 473 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 474 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 475 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 476 "data/maps/SootopolisCity/scripts.pory"

# 477 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonIdle:
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
	walk_in_place_slow_right
# 484 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 485 "data/maps/SootopolisCity/scripts.pory"

# 486 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 487 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene::
# 488 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 489 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 490 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_RayquazaSceneFromDive
# 491 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_RayquazaSceneFromDive
# 492 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
# 493 "data/maps/SootopolisCity/scripts.pory"
	end
# 494 "data/maps/SootopolisCity/scripts.pory"

# 495 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
# 496 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 497 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 498 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 499 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 500 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 501 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 502 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 503 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 504 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 505 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 506 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 507 "data/maps/SootopolisCity/scripts.pory"
	hideobjectat LOCALID_RAYQUAZA, MAP_SOOTOPOLIS_CITY
# 508 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 509 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 510 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 511 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
# 512 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 513 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 514 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 515 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 516 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 517 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 518 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 519 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 520 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 521 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 522 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 523 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 524 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 525 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 526 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 527 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 528 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 529 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 530 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 531 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 532 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 533 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 534 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 535 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 537 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 538 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 539 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 540 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 541 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 542 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 543 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 544 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_START_POST_RAYQUAZA_SCENE, 1
# 545 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 31, 35
# 546 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 547 "data/maps/SootopolisCity/scripts.pory"
	end
# 548 "data/maps/SootopolisCity/scripts.pory"

# 549 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromDive::
# 550 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 551 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 552 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 553 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 555 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 556 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 557 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 558 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 559 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 560 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 561 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 562 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 563 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 564 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 565 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 566 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
# 567 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 568 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 569 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 570 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 571 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 572 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 573 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 574 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 575 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 576 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 577 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 578 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 579 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 580 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 581 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 582 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 583 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 584 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 585 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 586 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 587 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 588 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 589 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 590 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 591 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 592 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 593 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 2
# 594 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 595 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_START_POST_RAYQUAZA_SCENE, 1
# 596 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 597 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 598 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 31, 35
# 599 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 600 "data/maps/SootopolisCity/scripts.pory"
	end
# 601 "data/maps/SootopolisCity/scripts.pory"

# 602 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PostRayquazaScene::
# 603 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 604 "data/maps/SootopolisCity/scripts.pory"
	delay 30
# 605 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 606 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 607 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 608 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 609 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 610 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WelcomeBack, MSGBOX_DEFAULT
# 611 "data/maps/SootopolisCity/scripts.pory"
	delay 15
# 612 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PlayerAnswers, MSGBOX_DEFAULT
# 613 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 614 "data/maps/SootopolisCity/scripts.pory"
	delay 15
# 615 "data/maps/SootopolisCity/scripts.pory"
	playse SE_PIN
# 616 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_ExclamationMark
# 617 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
# 618 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 619 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 620 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_ExclamationMark
# 621 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 622 "data/maps/SootopolisCity/scripts.pory"
	delay 15
# 623 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_WalkInPlaceFasterRight
# 624 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 625 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 626 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
# 627 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 628 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 629 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_WalkInPlaceFasterDown
# 630 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 631 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 632 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterDown
# 633 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 634 "data/maps/SootopolisCity/scripts.pory"
	delay 15
# 635 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WallaceCantBelieve, MSGBOX_DEFAULT
# 636 "data/maps/SootopolisCity/scripts.pory"
	message SootopolisCity_Text_YouAreAHero
# 637 "data/maps/SootopolisCity/scripts.pory"
	waitmessage
# 638 "data/maps/SootopolisCity/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 639 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_TextRambled, MSGBOX_DEFAULT
# 640 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 641 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_START_POST_RAYQUAZA_SCENE, 2
# 642 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 643 "data/maps/SootopolisCity/scripts.pory"
	delay 30
# 644 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 645 "data/maps/SootopolisCity/scripts.pory"
	end
# 646 "data/maps/SootopolisCity/scripts.pory"

# 647 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetRoughWater::
# 648 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 649 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 650 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 651 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 652 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 653 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 654 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 655 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 656 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 657 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 658 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 659 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 660 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 661 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 662 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 663 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 664 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 665 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 666 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 667 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 668 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 669 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 670 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 671 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
# 672 "data/maps/SootopolisCity/scripts.pory"
	return
# 673 "data/maps/SootopolisCity/scripts.pory"

# 674 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RayquazaFlyOff:
# 675 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 676 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 677 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 678 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 679 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 680 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 681 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 682 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 683 "data/maps/SootopolisCity/scripts.pory"

# 684 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanUp:
# 685 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 686 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 687 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 688 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 689 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 690 "data/maps/SootopolisCity/scripts.pory"

# 691 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendaries:
# 692 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 693 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 694 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 695 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 696 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 697 "data/maps/SootopolisCity/scripts.pory"

# 698 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 699 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 700 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 701 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 702 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 703 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 704 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 705 "data/maps/SootopolisCity/scripts.pory"

# 706 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 707 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanUp:
# 708 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 709 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 710 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 711 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 712 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 713 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 714 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 715 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 716 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 717 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 718 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 719 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 720 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 721 "data/maps/SootopolisCity/scripts.pory"

# 722 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 723 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanBack:
# 724 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 725 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 726 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 727 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 728 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 729 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 730 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 731 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 732 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 733 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 734 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 735 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 736 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 737 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 738 "data/maps/SootopolisCity/scripts.pory"

# 739 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert::
# 740 "data/maps/SootopolisCity/scripts.pory"
	lock
# 741 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 742 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ExpertPostLegendaries
# 743 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ExpertLegendaries
# 744 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_ExpertLeadToCave
# 745 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
# 746 "data/maps/SootopolisCity/scripts.pory"
	release
# 747 "data/maps/SootopolisCity/scripts.pory"
	end
# 748 "data/maps/SootopolisCity/scripts.pory"

# 749 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLeadToCave::
# 750 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
# 751 "data/maps/SootopolisCity/scripts.pory"
	release
# 752 "data/maps/SootopolisCity/scripts.pory"
	end
# 753 "data/maps/SootopolisCity/scripts.pory"

# 754 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostLegendaries::
# 755 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
# 756 "data/maps/SootopolisCity/scripts.pory"
	release
# 757 "data/maps/SootopolisCity/scripts.pory"
	end
# 758 "data/maps/SootopolisCity/scripts.pory"

# 759 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLegendaries::
# 760 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
# 761 "data/maps/SootopolisCity/scripts.pory"
	release
# 762 "data/maps/SootopolisCity/scripts.pory"
	end
# 763 "data/maps/SootopolisCity/scripts.pory"

# 764 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri::
# 765 "data/maps/SootopolisCity/scripts.pory"
	lock
# 766 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 767 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_KiriGiveBerry
# 768 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_KiriGiveBerry
# 769 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_KiriRayquaza
# 770 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 771 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 772 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 773 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 774 "data/maps/SootopolisCity/scripts.pory"
	release
# 775 "data/maps/SootopolisCity/scripts.pory"
	end
# 776 "data/maps/SootopolisCity/scripts.pory"

# 777 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriRayquaza::
# 778 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 779 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 780 "data/maps/SootopolisCity/scripts.pory"
	release
# 781 "data/maps/SootopolisCity/scripts.pory"
	end
# 782 "data/maps/SootopolisCity/scripts.pory"

# 783 "data/maps/SootopolisCity/scripts.pory"
@ Gives 2 berries daily. First ranges from FIRST_KIRI_BERRY to LAST_KIRI_BERRY, second is always Figy or Iapapa
# 784 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry::
# 785 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 786 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 787 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriReceivedBerry
# 788 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 789 "data/maps/SootopolisCity/scripts.pory"
	random NUM_KIRI_BERRIES
# 790 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
# 791 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 792 "data/maps/SootopolisCity/scripts.pory"
	giveitem VAR_RESULT
# 793 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 794 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 795 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 796 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 797 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SootopolisCity_EventScript_GiveFigyBerry
# 798 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_EventScript_GiveIapapaBerry
# 799 "data/maps/SootopolisCity/scripts.pory"
	end
# 800 "data/maps/SootopolisCity/scripts.pory"

# 801 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry::
# 802 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_FIGY_BERRY
# 803 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 804 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 805 "data/maps/SootopolisCity/scripts.pory"
	release
# 806 "data/maps/SootopolisCity/scripts.pory"
	end
# 807 "data/maps/SootopolisCity/scripts.pory"

# 808 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveIapapaBerry::
# 809 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 810 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 811 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 812 "data/maps/SootopolisCity/scripts.pory"
	release
# 813 "data/maps/SootopolisCity/scripts.pory"
	end
# 814 "data/maps/SootopolisCity/scripts.pory"

# 815 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry::
# 816 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 817 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_EventScript_KiriLikeSeasonBornIn
# 818 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
# 819 "data/maps/SootopolisCity/scripts.pory"
	release
# 820 "data/maps/SootopolisCity/scripts.pory"
	end
# 821 "data/maps/SootopolisCity/scripts.pory"

# 822 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriLikeSeasonBornIn::
# 823 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
# 824 "data/maps/SootopolisCity/scripts.pory"
	release
# 825 "data/maps/SootopolisCity/scripts.pory"
	end
# 826 "data/maps/SootopolisCity/scripts.pory"

# 827 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2::
# 828 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 829 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FacePlayer
# 830 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 831 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman2Rayquaza
# 832 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 833 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 834 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FaceOriginalDirection
# 835 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 836 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 837 "data/maps/SootopolisCity/scripts.pory"
	end
# 838 "data/maps/SootopolisCity/scripts.pory"

# 839 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2Rayquaza::
# 840 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
# 841 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 842 "data/maps/SootopolisCity/scripts.pory"
	end
# 843 "data/maps/SootopolisCity/scripts.pory"

# 844 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man::
# 845 "data/maps/SootopolisCity/scripts.pory"
	lock
# 846 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 847 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ManPostLegendaries
# 848 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
# 849 "data/maps/SootopolisCity/scripts.pory"
	release
# 850 "data/maps/SootopolisCity/scripts.pory"
	end
# 851 "data/maps/SootopolisCity/scripts.pory"

# 852 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManPostLegendaries::
# 853 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
# 854 "data/maps/SootopolisCity/scripts.pory"
	release
# 855 "data/maps/SootopolisCity/scripts.pory"
	end
# 856 "data/maps/SootopolisCity/scripts.pory"

# 857 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1::
# 858 "data/maps/SootopolisCity/scripts.pory"
	lock
# 859 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 860 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Woman1PostLegendaries
# 861 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman1Rayquaza
# 862 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_Woman1Legendaries
# 863 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
# 864 "data/maps/SootopolisCity/scripts.pory"
	release
# 865 "data/maps/SootopolisCity/scripts.pory"
	end
# 866 "data/maps/SootopolisCity/scripts.pory"

# 867 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Legendaries::
# 868 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 869 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 870 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 871 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 872 "data/maps/SootopolisCity/scripts.pory"
	release
# 873 "data/maps/SootopolisCity/scripts.pory"
	end
# 874 "data/maps/SootopolisCity/scripts.pory"

# 875 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1PostLegendaries::
# 876 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
# 877 "data/maps/SootopolisCity/scripts.pory"
	release
# 878 "data/maps/SootopolisCity/scripts.pory"
	end
# 879 "data/maps/SootopolisCity/scripts.pory"

# 880 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Rayquaza::
# 881 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
# 882 "data/maps/SootopolisCity/scripts.pory"
	release
# 883 "data/maps/SootopolisCity/scripts.pory"
	end
# 884 "data/maps/SootopolisCity/scripts.pory"

# 885 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy::
# 886 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 887 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FacePlayer
# 888 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 889 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_NinjaBoyRayquaza
# 890 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_NinjaBoyNormal
# 891 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_NinjaBoyNormal
# 892 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 893 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 894 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FaceOriginalDirection
# 895 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 896 "data/maps/SootopolisCity/scripts.pory"
	release
# 897 "data/maps/SootopolisCity/scripts.pory"
	end
# 898 "data/maps/SootopolisCity/scripts.pory"

# 899 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyNormal::
# 900 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
# 901 "data/maps/SootopolisCity/scripts.pory"
	release
# 902 "data/maps/SootopolisCity/scripts.pory"
	end
# 903 "data/maps/SootopolisCity/scripts.pory"

# 904 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyRayquaza::
# 905 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
# 906 "data/maps/SootopolisCity/scripts.pory"
	release
# 907 "data/maps/SootopolisCity/scripts.pory"
	end
# 908 "data/maps/SootopolisCity/scripts.pory"

# 909 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1::
# 910 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 911 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FacePlayer
# 912 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 913 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy1Rayquaza
# 914 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1GameClear
# 915 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Boy1Normal
# 916 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_Boy1Normal
# 917 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 918 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 919 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FaceOriginalDirection
# 920 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 921 "data/maps/SootopolisCity/scripts.pory"
	release
# 922 "data/maps/SootopolisCity/scripts.pory"
	end
# 923 "data/maps/SootopolisCity/scripts.pory"

# 924 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Rayquaza::
# 925 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
# 926 "data/maps/SootopolisCity/scripts.pory"
	release
# 927 "data/maps/SootopolisCity/scripts.pory"
	end
# 928 "data/maps/SootopolisCity/scripts.pory"

# 929 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1GameClear::
# 930 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
# 931 "data/maps/SootopolisCity/scripts.pory"
	release
# 932 "data/maps/SootopolisCity/scripts.pory"
	end
# 933 "data/maps/SootopolisCity/scripts.pory"

# 934 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Normal::
# 935 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
# 936 "data/maps/SootopolisCity/scripts.pory"
	release
# 937 "data/maps/SootopolisCity/scripts.pory"
	end
# 938 "data/maps/SootopolisCity/scripts.pory"

# 939 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GymSign::
# 940 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
# 941 "data/maps/SootopolisCity/scripts.pory"
	end
# 942 "data/maps/SootopolisCity/scripts.pory"

# 943 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CitySign::
# 944 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
# 945 "data/maps/SootopolisCity/scripts.pory"
	end
# 946 "data/maps/SootopolisCity/scripts.pory"

# 947 "data/maps/SootopolisCity/scripts.pory"
EventScript_ClosedSootopolisDoor::
# 948 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
# 949 "data/maps/SootopolisCity/scripts.pory"
	end
# 950 "data/maps/SootopolisCity/scripts.pory"

# 951 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven::
# 952 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 953 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
# 954 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 955 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
# 956 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_StevenHelpWallace
# 957 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_StevenHelpedWallace
# 958 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_StevenHelpedWallace
# 959 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_StevenMaxieArchieLeft
# 960 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
# 961 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 962 "data/maps/SootopolisCity/scripts.pory"
	end
# 963 "data/maps/SootopolisCity/scripts.pory"

# 964 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpWallace::
# 965 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
# 966 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 967 "data/maps/SootopolisCity/scripts.pory"
	end
# 968 "data/maps/SootopolisCity/scripts.pory"

# 969 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenMaxieArchieLeft::
# 970 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
# 971 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 972 "data/maps/SootopolisCity/scripts.pory"
	end
# 973 "data/maps/SootopolisCity/scripts.pory"

# 974 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_DawnMaxieArchieLeft::
# 975 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DawnMaxieArchieLeft, MSGBOX_DEFAULT
# 976 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 977 "data/maps/SootopolisCity/scripts.pory"
	end
# 978 "data/maps/SootopolisCity/scripts.pory"

# 979 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpedWallace::
# 980 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
# 981 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 982 "data/maps/SootopolisCity/scripts.pory"
	end
# 983 "data/maps/SootopolisCity/scripts.pory"

# 984 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 985 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_InvolvedWithCrisisComeWithMe, MSGBOX_DEFAULT
# 986 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 987 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_StartWalkToCaveOfOriginWest
# 988 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth
# 989 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
# 990 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 991 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 992 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 993 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 994 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 995 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_EXPERT, SootopolisCity_Movement_ExpertMoveAside
# 996 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 997 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 998 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerArriveCaveEntrance
# 999 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1000 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HereWereAreHelpWallace, MSGBOX_DEFAULT
# 1001 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1002 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 1003 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 1004 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1005 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 1006 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1007 "data/maps/SootopolisCity/scripts.pory"
	end
# 1008 "data/maps/SootopolisCity/scripts.pory"

# 1009 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginWest::
# 1010 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 1011 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
# 1012 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1013 "data/maps/SootopolisCity/scripts.pory"
	return
# 1014 "data/maps/SootopolisCity/scripts.pory"

# 1015 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth::
# 1016 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 1017 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
# 1018 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1019 "data/maps/SootopolisCity/scripts.pory"
	return
# 1020 "data/maps/SootopolisCity/scripts.pory"

# 1021 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 1022 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1023 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1024 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1025 "data/maps/SootopolisCity/scripts.pory"
	walk_right
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
	walk_up
# 1032 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1033 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1034 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1035 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1036 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1037 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1038 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1039 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1040 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1041 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1042 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1043 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1044 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1045 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1046 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1047 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1048 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1049 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1050 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1051 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1052 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1053 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1054 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1055 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1056 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1057 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1058 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1059 "data/maps/SootopolisCity/scripts.pory"

# 1060 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 1061 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1062 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1063 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1064 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1065 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1066 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1067 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1068 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1069 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1070 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1071 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1072 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1073 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1074 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1075 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1076 "data/maps/SootopolisCity/scripts.pory"
	walk_up
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
	walk_left
# 1083 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1084 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1085 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1086 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1087 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1088 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1089 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1090 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1091 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1092 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1093 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1094 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1095 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1096 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1097 "data/maps/SootopolisCity/scripts.pory"

# 1098 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 1099 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1100 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1101 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1102 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1103 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1104 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1105 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1106 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1107 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1108 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1109 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1110 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1111 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1112 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1113 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1114 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1115 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1116 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1117 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1118 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1119 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1120 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1121 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1122 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1123 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1124 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1125 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1126 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1127 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1128 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1129 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1130 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1131 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1132 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1133 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1134 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1135 "data/maps/SootopolisCity/scripts.pory"

# 1136 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 1137 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1138 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1139 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1140 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1141 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1142 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1143 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1144 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1145 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1146 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1147 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1148 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1149 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1150 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1151 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1152 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1153 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1154 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1155 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1156 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1157 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1158 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1159 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1160 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1161 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1162 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1163 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1164 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1165 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1166 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1167 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1168 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1169 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1170 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1171 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1172 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1173 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1174 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1175 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1176 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1177 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1178 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1179 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1180 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1181 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1182 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1183 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1184 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1185 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1186 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1187 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 1188 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1189 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1190 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1191 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1192 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1193 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1194 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1195 "data/maps/SootopolisCity/scripts.pory"

# 1196 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 1197 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1198 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1199 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1200 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1201 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1202 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1203 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1204 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1205 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1206 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1207 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1208 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1209 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1210 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1211 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1212 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1213 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1214 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1215 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1216 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1217 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1218 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1219 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1220 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1221 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1222 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1223 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1224 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1225 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1226 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1227 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1228 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1229 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1230 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1231 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1232 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1233 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1234 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1235 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1236 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1237 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1238 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1239 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1240 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1241 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1242 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1243 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1244 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1245 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1246 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1247 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1248 "data/maps/SootopolisCity/scripts.pory"

# 1249 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_ExpertMoveAside:
# 1250 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 1251 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1252 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1253 "data/maps/SootopolisCity/scripts.pory"

# 1254 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 1255 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1256 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1257 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1258 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1259 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1260 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1261 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1262 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1263 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1264 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1265 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1266 "data/maps/SootopolisCity/scripts.pory"

# 1267 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerArriveCaveEntrance:
# 1268 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1269 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1270 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1271 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1272 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1273 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1274 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1275 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1276 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1277 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1278 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1279 "data/maps/SootopolisCity/scripts.pory"

# 1280 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerEnterCaveOfOrigin:
# 1281 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1282 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1283 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1284 "data/maps/SootopolisCity/scripts.pory"

# 1285 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2::
# 1286 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1287 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FacePlayer
# 1288 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1289 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy2Rayquaza
# 1290 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 1291 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1292 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FaceOriginalDirection
# 1293 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1294 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1295 "data/maps/SootopolisCity/scripts.pory"
	end
# 1296 "data/maps/SootopolisCity/scripts.pory"

# 1297 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2Rayquaza::
# 1298 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 1299 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1300 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1301 "data/maps/SootopolisCity/scripts.pory"
	end
# 1302 "data/maps/SootopolisCity/scripts.pory"

# 1303 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Dawn::
# 1304 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1305 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_FacePlayer
# 1306 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1307 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_DawnMaxieArchieLeft
# 1308 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_DawnPostRayquaza
# 1309 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsCrazy, MSGBOX_DEFAULT
# 1310 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1311 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_FaceOriginalDirection
# 1312 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1313 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1314 "data/maps/SootopolisCity/scripts.pory"
	end
# 1315 "data/maps/SootopolisCity/scripts.pory"

# 1316 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_DawnPostRayquaza::
# 1317 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreatWork, MSGBOX_DEFAULT
# 1318 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1319 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1320 "data/maps/SootopolisCity/scripts.pory"
	end
# 1321 "data/maps/SootopolisCity/scripts.pory"

# 1322 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt::
# 1323 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1324 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_BlackBeltRayquaza
# 1325 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 1326 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1327 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 1328 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1329 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 1330 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1331 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 1332 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1333 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1334 "data/maps/SootopolisCity/scripts.pory"
	end
# 1335 "data/maps/SootopolisCity/scripts.pory"

# 1336 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBeltRayquaza::
# 1337 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 1338 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1339 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
# 1340 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1341 "data/maps/SootopolisCity/scripts.pory"
	end
# 1342 "data/maps/SootopolisCity/scripts.pory"

# 1343 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl::
# 1344 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1345 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FacePlayer
# 1346 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1347 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_GirlRayquaza
# 1348 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 1349 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1350 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FaceOriginalDirection
# 1351 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1352 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1353 "data/maps/SootopolisCity/scripts.pory"
	end
# 1354 "data/maps/SootopolisCity/scripts.pory"

# 1355 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GirlRayquaza::
# 1356 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 1357 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1358 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1359 "data/maps/SootopolisCity/scripts.pory"
	end
# 1360 "data/maps/SootopolisCity/scripts.pory"

# 1361 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac::
# 1362 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1363 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FacePlayer
# 1364 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1365 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ManiacRayquaza
# 1366 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 1367 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1368 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FaceOriginalDirection
# 1369 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1370 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1371 "data/maps/SootopolisCity/scripts.pory"
	end
# 1372 "data/maps/SootopolisCity/scripts.pory"

# 1373 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManiacRayquaza::
# 1374 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
# 1375 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1376 "data/maps/SootopolisCity/scripts.pory"
	end
# 1377 "data/maps/SootopolisCity/scripts.pory"

# 1378 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace::
# 1379 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1380 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1381 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_GoToSkyPillar
# 1382 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, SootopolisCity_EventScript_GoToGym
# 1383 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_GiveWaterfall
# 1384 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
# 1385 "data/maps/SootopolisCity/scripts.pory"
	release
# 1386 "data/maps/SootopolisCity/scripts.pory"
	end
# 1387 "data/maps/SootopolisCity/scripts.pory"

# 1388 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall::
# 1389 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 1390 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 1391 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 1392 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 1393 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1394 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_WallaceMoveFromGym
# 1395 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SootopolisCity_EventScript_WallaceMoveFromGym
# 1396 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_WallaceMoveFromGymWest
# 1397 "data/maps/SootopolisCity/scripts.pory"
	release
# 1398 "data/maps/SootopolisCity/scripts.pory"
	end
# 1399 "data/maps/SootopolisCity/scripts.pory"

# 1400 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGym::
# 1401 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, SootopolisCity_Movement_WallaceMoveFromGym
# 1402 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1403 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_WALLACE
# 1404 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
# 1405 "data/maps/SootopolisCity/scripts.pory"
	return
# 1406 "data/maps/SootopolisCity/scripts.pory"

# 1407 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGymWest::
# 1408 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, SootopolisCity_Movement_WallaceMoveFromGymWest
# 1409 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1410 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_WALLACE
# 1411 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
# 1412 "data/maps/SootopolisCity/scripts.pory"
	return
# 1413 "data/maps/SootopolisCity/scripts.pory"

# 1414 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToSkyPillar::
# 1415 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
# 1416 "data/maps/SootopolisCity/scripts.pory"
	release
# 1417 "data/maps/SootopolisCity/scripts.pory"
	end
# 1418 "data/maps/SootopolisCity/scripts.pory"

# 1419 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToGym::
# 1420 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DazzledByMentor, MSGBOX_DEFAULT
# 1421 "data/maps/SootopolisCity/scripts.pory"
	release
# 1422 "data/maps/SootopolisCity/scripts.pory"
	end
# 1423 "data/maps/SootopolisCity/scripts.pory"

# 1424 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGym:
# 1425 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1426 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1427 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1428 "data/maps/SootopolisCity/scripts.pory"

# 1429 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGymWest:
# 1430 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1431 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1432 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1433 "data/maps/SootopolisCity/scripts.pory"

# 1434 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie::
# 1435 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1436 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_MaxieRayquaza
# 1437 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 1438 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1439 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1440 "data/maps/SootopolisCity/scripts.pory"
	end
# 1441 "data/maps/SootopolisCity/scripts.pory"

# 1442 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieRayquaza::
# 1443 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_NPC
# 1444 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 1445 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1446 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1447 "data/maps/SootopolisCity/scripts.pory"
	end
# 1448 "data/maps/SootopolisCity/scripts.pory"

# 1449 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie::
# 1450 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1451 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ArchieRayquaza
# 1452 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 1453 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1454 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1455 "data/maps/SootopolisCity/scripts.pory"
	end
# 1456 "data/maps/SootopolisCity/scripts.pory"

# 1457 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieRayquaza::
# 1458 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_NPC
# 1459 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 1460 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1461 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1462 "data/maps/SootopolisCity/scripts.pory"
	end
# 1463 "data/maps/SootopolisCity/scripts.pory"

# 1464 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieArchieLeave::
# 1465 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 1466 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 1467 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 1468 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 1469 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 1470 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 1471 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 1472 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1473 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1474 "data/maps/SootopolisCity/scripts.pory"
	end
# 1475 "data/maps/SootopolisCity/scripts.pory"

# 1476 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1477 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate::
# 1478 "data/maps/SootopolisCity/scripts.pory"
	levitate
# 1479 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1480 "data/maps/SootopolisCity/scripts.pory"

# 1481 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1482 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask::
# 1483 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
# 1484 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1485 "data/maps/SootopolisCity/scripts.pory"

# 1486 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GymSign:
# 1487 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\n"
# 1488 "data/maps/SootopolisCity/scripts.pory"
	.string "LEADER: JUAN\p"
# 1489 "data/maps/SootopolisCity/scripts.pory"
	.string "“The GYM LEADER with the beauty\n"
# 1490 "data/maps/SootopolisCity/scripts.pory"
	.string "of pure water!”$"
# 1491 "data/maps/SootopolisCity/scripts.pory"

# 1492 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CitySign:
# 1493 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY\p"
# 1494 "data/maps/SootopolisCity/scripts.pory"
	.string "“The mystical city where history\n"
# 1495 "data/maps/SootopolisCity/scripts.pory"
	.string "slumbers.”$"
# 1496 "data/maps/SootopolisCity/scripts.pory"

# 1497 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoorIsClosed:
# 1498 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"
# 1499 "data/maps/SootopolisCity/scripts.pory"

# 1500 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PhysicallyFitLivingHere:
# 1501 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
# 1502 "data/maps/SootopolisCity/scripts.pory"
	.string "down stairs all the time…\p"
# 1503 "data/maps/SootopolisCity/scripts.pory"
	.string "If you live in this town, you end up\n"
# 1504 "data/maps/SootopolisCity/scripts.pory"
	.string "getting physically fit.$"
# 1505 "data/maps/SootopolisCity/scripts.pory"

# 1506 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiantPokemonSuddenlyAppeared:
# 1507 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant Pokémon suddenly appeared\n"
# 1508 "data/maps/SootopolisCity/scripts.pory"
	.string "in the middle of the city!\p"
# 1509 "data/maps/SootopolisCity/scripts.pory"
	.string "And, I've never seen them before!\p"
# 1510 "data/maps/SootopolisCity/scripts.pory"
	.string "Why are they smashing into each\n"
# 1511 "data/maps/SootopolisCity/scripts.pory"
	.string "other like that?\p"
# 1512 "data/maps/SootopolisCity/scripts.pory"
	.string "Why can't they be friends, those\n"
# 1513 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon?$"
# 1514 "data/maps/SootopolisCity/scripts.pory"

# 1515 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhatIsThatGreenPokemon:
# 1516 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
# 1517 "data/maps/SootopolisCity/scripts.pory"
	.string "What is that green Pokémon?!$"
# 1518 "data/maps/SootopolisCity/scripts.pory"

# 1519 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhereDidLegendariesGo:
# 1520 "data/maps/SootopolisCity/scripts.pory"
	.string "Groudon and Kyogre…\n"
# 1521 "data/maps/SootopolisCity/scripts.pory"
	.string "Where did they go?\p"
# 1522 "data/maps/SootopolisCity/scripts.pory"
	.string "Will they cause droughts or downpours\n"
# 1523 "data/maps/SootopolisCity/scripts.pory"
	.string "somewhere else?$"
# 1524 "data/maps/SootopolisCity/scripts.pory"

# 1525 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TwoPokemonArentAngry:
# 1526 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
# 1527 "data/maps/SootopolisCity/scripts.pory"
	.string "the two Pokémon aren't angry.\p"
# 1528 "data/maps/SootopolisCity/scripts.pory"
	.string "I think… They probably can't control\n"
# 1529 "data/maps/SootopolisCity/scripts.pory"
	.string "their own power…$"
# 1530 "data/maps/SootopolisCity/scripts.pory"

# 1531 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FlyingMonStoppedRampage:
# 1532 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying Pokémon came down from\n"
# 1533 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky and stopped the rampaging\l"
# 1534 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon…$"
# 1535 "data/maps/SootopolisCity/scripts.pory"

# 1536 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreatWork:
# 1537 "data/maps/SootopolisCity/scripts.pory"
	.string "That was incredible, {PLAYER}. I've\n"
# 1538 "data/maps/SootopolisCity/scripts.pory"
	.string "never seen such powerful Pokémon\l"
# 1539 "data/maps/SootopolisCity/scripts.pory"
	.string "interacting like that in the wild.\p"
# 1540 "data/maps/SootopolisCity/scripts.pory"
	.string "Anyway, you were pretty incredible\n"
# 1541 "data/maps/SootopolisCity/scripts.pory"
	.string "yourself! I can't believe Drake turned\l"
# 1542 "data/maps/SootopolisCity/scripts.pory"
	.string "out to have his own evil plan all along…\p"
# 1543 "data/maps/SootopolisCity/scripts.pory"
	.string "Thank goodness you were there to\n"
# 1544 "data/maps/SootopolisCity/scripts.pory"
	.string "stop him!\p"
# 1545 "data/maps/SootopolisCity/scripts.pory"
	.string "And I think that friend of mine from\n"
# 1546 "data/maps/SootopolisCity/scripts.pory"
	.string "the Sinnoh region might be a good\l"
# 1547 "data/maps/SootopolisCity/scripts.pory"
	.string "candidate to take his place in the Elite\l"
# 1548 "data/maps/SootopolisCity/scripts.pory"
	.string "Four temporarily.\p" 
# 1549 "data/maps/SootopolisCity/scripts.pory"
	.string "I'll have to talk to Steven and Wallace\n"
# 1550 "data/maps/SootopolisCity/scripts.pory"
	.string "about that.$"
# 1551 "data/maps/SootopolisCity/scripts.pory"

# 1552 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsCrazy:
# 1553 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}! I bumped into Steven in\n"
# 1554 "data/maps/SootopolisCity/scripts.pory"
	.string "Mossdeep soon after you left, and he\l"
# 1555 "data/maps/SootopolisCity/scripts.pory"
	.string "asked that I head here to Sootopolis\l"
# 1556 "data/maps/SootopolisCity/scripts.pory"
	.string "while you went after Team Magma and\l"
# 1557 "data/maps/SootopolisCity/scripts.pory"
	.string "Drake went after Team Aqua.\p"
# 1558 "data/maps/SootopolisCity/scripts.pory"
	.string "By the time I got here, Groudon and\n"
# 1559 "data/maps/SootopolisCity/scripts.pory"
	.string "Kyogre were already facing off!\p"
# 1560 "data/maps/SootopolisCity/scripts.pory"
	.string "What are we going to do? I hope the\n"
# 1561 "data/maps/SootopolisCity/scripts.pory"
	.string "person I called from Sinnoh makes it\l"
# 1562 "data/maps/SootopolisCity/scripts.pory"
	.string "here in time…$"
# 1563 "data/maps/SootopolisCity/scripts.pory"

# 1564 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WonderWhatWorldIsLike:
# 1565 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
# 1566 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder what the world is like on\n"
# 1567 "data/maps/SootopolisCity/scripts.pory"
	.string "the other side of these round walls?\p"
# 1568 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, did I say walls? I meant cliffs…\n"
# 1569 "data/maps/SootopolisCity/scripts.pory"
	.string "Sorry, those titan-sized Pokémon\l"
# 1570 "data/maps/SootopolisCity/scripts.pory"
	.string "really spooked me.$"
# 1571 "data/maps/SootopolisCity/scripts.pory"

# 1572 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsWicked:
# 1573 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1574 "data/maps/SootopolisCity/scripts.pory"
	.string "This is wicked!$"
# 1575 "data/maps/SootopolisCity/scripts.pory"

# 1576 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThatWasWicked:
# 1577 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1578 "data/maps/SootopolisCity/scripts.pory"
	.string "That was wicked!$"
# 1579 "data/maps/SootopolisCity/scripts.pory"

# 1580 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GoRedAndBlueMon:
# 1581 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red Pokémon!\n"
# 1582 "data/maps/SootopolisCity/scripts.pory"
	.string "Don't back off, blue Pokémon!$"
# 1583 "data/maps/SootopolisCity/scripts.pory"

# 1584 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoYouKnowMonNames:
# 1585 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1586 "data/maps/SootopolisCity/scripts.pory"
	.string "Hi, do you know the names of those\n"
# 1587 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon fighting over there?$"
# 1588 "data/maps/SootopolisCity/scripts.pory"

# 1589 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreenOneSettlesThings:
# 1590 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
# 1591 "data/maps/SootopolisCity/scripts.pory"
	.string "the red one or the blue one, but, oh no,\l"
# 1592 "data/maps/SootopolisCity/scripts.pory"
	.string "it's the green one that settles things!\p"
# 1593 "data/maps/SootopolisCity/scripts.pory"
	.string "Talk about a huge turn of events!$"
# 1594 "data/maps/SootopolisCity/scripts.pory"

# 1595 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SeeingLegendWithOwnEyes:
# 1596 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1597 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1598 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between Pokémon.\p"
# 1599 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I'm seeing that happen with\n"
# 1600 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1601 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1602 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1603 "data/maps/SootopolisCity/scripts.pory"

# 1604 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SawLegendWithOwnEyes:
# 1605 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1606 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1607 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between Pokémon.\p"
# 1608 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I saw that happen with\n"
# 1609 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1610 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1611 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1612 "data/maps/SootopolisCity/scripts.pory"

# 1613 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_BigPokemonFighting:
# 1614 "data/maps/SootopolisCity/scripts.pory"
	.string "A big Pokémon is fighting with\n"
# 1615 "data/maps/SootopolisCity/scripts.pory"
	.string "another big Pokémon!\p"
# 1616 "data/maps/SootopolisCity/scripts.pory"
	.string "Please, someone make them stop!$"
# 1617 "data/maps/SootopolisCity/scripts.pory"

# 1618 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PrettyMonCameFromSky:
# 1619 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty Pokémon came down from\n"
# 1620 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky…$"
# 1621 "data/maps/SootopolisCity/scripts.pory"

# 1622 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisWillBeWrecked:
# 1623 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
# 1624 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City will get wrecked!$"
# 1625 "data/maps/SootopolisCity/scripts.pory"

# 1626 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisDidntGetWrecked:
# 1627 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City didn't get wrecked!$"
# 1628 "data/maps/SootopolisCity/scripts.pory"

# 1629 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NoOrdinaryTourist:
# 1630 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
# 1631 "data/maps/SootopolisCity/scripts.pory"
	.string "You've come all the way to Sootopolis?\l"
# 1632 "data/maps/SootopolisCity/scripts.pory"
	.string "You're no ordinary tourist.\p"
# 1633 "data/maps/SootopolisCity/scripts.pory"
	.string "But I suppose that doesn't make you\n"
# 1634 "data/maps/SootopolisCity/scripts.pory"
	.string "an extraordinary tourist, either.$"
# 1635 "data/maps/SootopolisCity/scripts.pory"

# 1636 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CityRegainedCalm:
# 1637 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"
# 1638 "data/maps/SootopolisCity/scripts.pory"

# 1639 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginPleaseLeave:
# 1640 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\p"
# 1641 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the Cave of Origin.\p"
# 1642 "data/maps/SootopolisCity/scripts.pory"
	.string "The spirits of Pokémon, becalmed at\n"
# 1643 "data/maps/SootopolisCity/scripts.pory"
	.string "MT. PYRE, are said to be revived here.\p"
# 1644 "data/maps/SootopolisCity/scripts.pory"
	.string "Please leave.$"
# 1645 "data/maps/SootopolisCity/scripts.pory"

# 1646 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_LeadSuperiorTrainerToCave:
# 1647 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\n"
# 1648 "data/maps/SootopolisCity/scripts.pory"
	.string "superior talent…\p"
# 1649 "data/maps/SootopolisCity/scripts.pory"
	.string "A TRAINER who has knowledge and\n"
# 1650 "data/maps/SootopolisCity/scripts.pory"
	.string "experience of many kinds of Pokémon…\p"
# 1651 "data/maps/SootopolisCity/scripts.pory"
	.string "If such a person were to appear, I was\n"
# 1652 "data/maps/SootopolisCity/scripts.pory"
	.string "instructed by Wallace to lead that\l"
# 1653 "data/maps/SootopolisCity/scripts.pory"
	.string "TRAINER to this CAVE.$"
# 1654 "data/maps/SootopolisCity/scripts.pory"

# 1655 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AwakenedPokemonClash:
# 1656 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\p"
# 1657 "data/maps/SootopolisCity/scripts.pory"
	.string "The clash between the two awakened\n"
# 1658 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon was quelled by the awakening\l"
# 1659 "data/maps/SootopolisCity/scripts.pory"
	.string "of a third Pokémon…$"
# 1660 "data/maps/SootopolisCity/scripts.pory"

# 1661 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginSleepsToo:
# 1662 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the Cave of Origin…\p"
# 1663 "data/maps/SootopolisCity/scripts.pory"
	.string "With the passing of the crisis,\n"
# 1664 "data/maps/SootopolisCity/scripts.pory"
	.string "the cave, too, shall sleep…$"
# 1665 "data/maps/SootopolisCity/scripts.pory"

# 1666 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisSkyBeautiful:
# 1667 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis sprang up as a town in\n"
# 1668 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano.\p"
# 1669 "data/maps/SootopolisCity/scripts.pory"
	.string "If you look up at the sky, the lip of\n"
# 1670 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater is also visible.\l"
# 1671 "data/maps/SootopolisCity/scripts.pory"
	.string "So, all you see is the sky in a circle.\p"
# 1672 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's what makes the sky above\n"
# 1673 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis the most beautiful.$"
# 1674 "data/maps/SootopolisCity/scripts.pory"

# 1675 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiganticPokemonFight:
# 1676 "data/maps/SootopolisCity/scripts.pory"
	.string "When two Pokémon that gigantic\n"
# 1677 "data/maps/SootopolisCity/scripts.pory"
	.string "are fighting that savagely, there's\l"
# 1678 "data/maps/SootopolisCity/scripts.pory"
	.string "not much that we can do.$"
# 1679 "data/maps/SootopolisCity/scripts.pory"

# 1680 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FearedWorstWhenPokemonFlewDown:
# 1681 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third Pokémon flew down,\n"
# 1682 "data/maps/SootopolisCity/scripts.pory"
	.string "I feared the worst.$"
# 1683 "data/maps/SootopolisCity/scripts.pory"

# 1684 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NightSkyFavoriteScenery:
# 1685 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
# 1686 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano…\p"
# 1687 "data/maps/SootopolisCity/scripts.pory"
	.string "And in that ring, stars flicker and\n"
# 1688 "data/maps/SootopolisCity/scripts.pory"
	.string "blink as if they were alive…\l"
# 1689 "data/maps/SootopolisCity/scripts.pory"
	.string "It's my favorite scenery.$"
# 1690 "data/maps/SootopolisCity/scripts.pory"

# 1691 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WeatherWentWild:
# 1692 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather was clear this morning,\n"
# 1693 "data/maps/SootopolisCity/scripts.pory"
	.string "but…\p"
# 1694 "data/maps/SootopolisCity/scripts.pory"
	.string "All of a sudden, dark clouds brewed up,\n"
# 1695 "data/maps/SootopolisCity/scripts.pory"
	.string "rain started falling in sheets, and\l"
# 1696 "data/maps/SootopolisCity/scripts.pory"
	.string "there was thunder and lightning, too.\p"
# 1697 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather just went completely\n"
# 1698 "data/maps/SootopolisCity/scripts.pory"
	.string "wild!\p"
# 1699 "data/maps/SootopolisCity/scripts.pory"
	.string "Is all of this because of those\n"
# 1700 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon?$"
# 1701 "data/maps/SootopolisCity/scripts.pory"

# 1702 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouBroughtFlyingMon:
# 1703 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
# 1704 "data/maps/SootopolisCity/scripts.pory"
	.string "It was you who brought that flying\n"
# 1705 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon here?\p"
# 1706 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, aren't you amazing!$"
# 1707 "data/maps/SootopolisCity/scripts.pory"

# 1708 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GroudonPleaseStop:
# 1709 "data/maps/SootopolisCity/scripts.pory"
	.string "G… Groudon…\n"
# 1710 "data/maps/SootopolisCity/scripts.pory"
	.string "Please! Stop what you're doing!\p"
# 1711 "data/maps/SootopolisCity/scripts.pory"
	.string "I know the extent of your power now!\p"
# 1712 "data/maps/SootopolisCity/scripts.pory"
	.string "If you keep going, all Hoenn, not just\n"
# 1713 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis, will be utterly ruined!$"
# 1714 "data/maps/SootopolisCity/scripts.pory"

# 1715 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AfterAllOurScheming:
# 1716 "data/maps/SootopolisCity/scripts.pory"
	.string "So the super-ancient Pokémon\n"
# 1717 "data/maps/SootopolisCity/scripts.pory"
	.string "weren't only Groudon and Kyogre…\p"
# 1718 "data/maps/SootopolisCity/scripts.pory"
	.string "After all our fruitless scheming and\n"
# 1719 "data/maps/SootopolisCity/scripts.pory"
	.string "frantic efforts, that one Pokémon's\l"
# 1720 "data/maps/SootopolisCity/scripts.pory"
	.string "simple action puts everything right\l"
# 1721 "data/maps/SootopolisCity/scripts.pory"
	.string "again as if nothing had happened…\p"
# 1722 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I guess it wasn't just Rayquaza, it\n"
# 1723 "data/maps/SootopolisCity/scripts.pory"
	.string "was you too, {PLAYER}.\p"
# 1724 "data/maps/SootopolisCity/scripts.pory"
	.string "I feel like a fool, having played a part\n"
# 1725 "data/maps/SootopolisCity/scripts.pory"
	.string "in this scheme that spiraled so far out\l"
# 1726 "data/maps/SootopolisCity/scripts.pory"
	.string "of control…$"
# 1727 "data/maps/SootopolisCity/scripts.pory"

# 1728 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KyogreCalmDown:
# 1729 "data/maps/SootopolisCity/scripts.pory"
	.string "Kyogre! What's wrong?!\n"
# 1730 "data/maps/SootopolisCity/scripts.pory"
	.string "Calm down! Kyogre!\p"
# 1731 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 1732 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1733 "data/maps/SootopolisCity/scripts.pory"
	.string "It's no good!\n"
# 1734 "data/maps/SootopolisCity/scripts.pory"
	.string "It's not responding at all!$"
# 1735 "data/maps/SootopolisCity/scripts.pory"

# 1736 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TryingMeaninglessToPokemon:
# 1737 "data/maps/SootopolisCity/scripts.pory"
	.string "Kyogre and Groudon both\n"
# 1738 "data/maps/SootopolisCity/scripts.pory"
	.string "flew off to who knows where.\p"
# 1739 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather in Hoenn has returned\n"
# 1740 "data/maps/SootopolisCity/scripts.pory"
	.string "to its normal state…\p"
# 1741 "data/maps/SootopolisCity/scripts.pory"
	.string "I was blinded by my ambition, {PLAYER}.\p"
# 1742 "data/maps/SootopolisCity/scripts.pory"
	.string "I got far too carried away with my\n"
# 1743 "data/maps/SootopolisCity/scripts.pory"
	.string "dream of expanding the sea, I did not\l"
# 1744 "data/maps/SootopolisCity/scripts.pory"
	.string "mean to unleash that much chaos onto\l"
# 1745 "data/maps/SootopolisCity/scripts.pory"
	.string "the world…\p"
# 1746 "data/maps/SootopolisCity/scripts.pory"
	.string "I know we've had many differences in\n"
# 1747 "data/maps/SootopolisCity/scripts.pory"
	.string "such a short time, but I am truly sorry\l"
# 1748 "data/maps/SootopolisCity/scripts.pory"
	.string "for my actions, and am grateful that\l"
# 1749 "data/maps/SootopolisCity/scripts.pory"
	.string "you were able to stop me, {PLAYER}.$"
# 1750 "data/maps/SootopolisCity/scripts.pory"

# 1751 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_InvolvedWithCrisisComeWithMe:
# 1752 "data/maps/SootopolisCity/scripts.pory"
	.string "Those Pokémon fighting…\n"
# 1753 "data/maps/SootopolisCity/scripts.pory"
	.string "Groudon… And Kyogre…\p"
# 1754 "data/maps/SootopolisCity/scripts.pory"
	.string "The two super-ancient Pokémon\n"
# 1755 "data/maps/SootopolisCity/scripts.pory"
	.string "were awakened from a long sleep…\p"
# 1756 "data/maps/SootopolisCity/scripts.pory"
	.string "And now they are smashing each other\n"
# 1757 "data/maps/SootopolisCity/scripts.pory"
	.string "with their uncontrollable energy…\p"
# 1758 "data/maps/SootopolisCity/scripts.pory"
	.string "…{PLAYER}{KUN}.\p"
# 1759 "data/maps/SootopolisCity/scripts.pory"
	.string "You being here now I'll take to mean\n"
# 1760 "data/maps/SootopolisCity/scripts.pory"
	.string "that you're prepared to become even\l"
# 1761 "data/maps/SootopolisCity/scripts.pory"
	.string "more involved in this crisis.\p"
# 1762 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, then, there's someone that\n"
# 1763 "data/maps/SootopolisCity/scripts.pory"
	.string "I'd like you to meet.\p"
# 1764 "data/maps/SootopolisCity/scripts.pory"
	.string "Come with me, please.$"
# 1765 "data/maps/SootopolisCity/scripts.pory"

# 1766 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoesThisMakeYourFearPokemon:
# 1767 "data/maps/SootopolisCity/scripts.pory"
	.string "Listen, {PLAYER}{KUN}.\p"
# 1768 "data/maps/SootopolisCity/scripts.pory"
	.string "Does seeing Groudon and Kyogre make\n"
# 1769 "data/maps/SootopolisCity/scripts.pory"
	.string "you think Pokémon are to be feared?\p"
# 1770 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's not true.\n"
# 1771 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon are really more…\p"
# 1772 "data/maps/SootopolisCity/scripts.pory"
	.string "…Why am I asking you this?\n"
# 1773 "data/maps/SootopolisCity/scripts.pory"
	.string "You already know.$"
# 1774 "data/maps/SootopolisCity/scripts.pory"

# 1775 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HereWereAreHelpWallace:
# 1776 "data/maps/SootopolisCity/scripts.pory"
	.string "Okay, here we are!\p"
# 1777 "data/maps/SootopolisCity/scripts.pory"
	.string "Inside here you'll find someone named\n"
# 1778 "data/maps/SootopolisCity/scripts.pory"
	.string "Wallace.\p"
# 1779 "data/maps/SootopolisCity/scripts.pory"
	.string "I think you have what's needed to\n"
# 1780 "data/maps/SootopolisCity/scripts.pory"
	.string "help him…$"
# 1781 "data/maps/SootopolisCity/scripts.pory"

# 1782 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KnowWhatsNeededToHelpHim:
# 1783 "data/maps/SootopolisCity/scripts.pory"
	.string "I think you have what's\n"
# 1784 "data/maps/SootopolisCity/scripts.pory"
	.string "needed to help him…$"
# 1785 "data/maps/SootopolisCity/scripts.pory"

# 1786 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NeverBeenToSkyPillar:
# 1787 "data/maps/SootopolisCity/scripts.pory"
	.string "The Sky Pillar…\p"
# 1788 "data/maps/SootopolisCity/scripts.pory"
	.string "I've never been there.\n"
# 1789 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder where it could be?$"
# 1790 "data/maps/SootopolisCity/scripts.pory"

# 1791 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SoThatsRayquaza:
# 1792 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}…\p"
# 1793 "data/maps/SootopolisCity/scripts.pory"
	.string "I can't believe that Drake was using us\n"
# 1794 "data/maps/SootopolisCity/scripts.pory"
	.string "for so long like how you described.\p"
# 1795 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm so sorry I didn't see this coming,\n"
# 1796 "data/maps/SootopolisCity/scripts.pory"
	.string "and I wasn't even there to help when he\l"
# 1797 "data/maps/SootopolisCity/scripts.pory"
	.string "captured and utilized Mega Rayquaza…\p"
# 1798 "data/maps/SootopolisCity/scripts.pory"
	.string "It is truly remarkable that you were\n"
# 1799 "data/maps/SootopolisCity/scripts.pory"
	.string "able to defeat him all on your own.\p"
# 1800 "data/maps/SootopolisCity/scripts.pory"
	.string "It's just as Wallace said, you are a hero\n"
# 1801 "data/maps/SootopolisCity/scripts.pory"
	.string "to the people of Hoenn… no, to people\l"
# 1802 "data/maps/SootopolisCity/scripts.pory"
	.string "everywhere!\p"
# 1803 "data/maps/SootopolisCity/scripts.pory"
	.string "Who knows how much destruction could\n"
# 1804 "data/maps/SootopolisCity/scripts.pory"
	.string "have been caused if you hadn't stopped\l"
# 1805 "data/maps/SootopolisCity/scripts.pory"
	.string "Drake and gotten Rayquaza to come\l"
# 1806 "data/maps/SootopolisCity/scripts.pory"
	.string "here?\p"
# 1807 "data/maps/SootopolisCity/scripts.pory"
	.string "You really are a special trainer,\n"
# 1808 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}, and I sincerely thank you.$"
# 1809 "data/maps/SootopolisCity/scripts.pory"

# 1810 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_MaxieArchieLeft:
# 1811 "data/maps/SootopolisCity/scripts.pory"
	.string "It looks like both Maxie and\n"
# 1812 "data/maps/SootopolisCity/scripts.pory"
	.string "Archie have gone away somewhere.\p"
# 1813 "data/maps/SootopolisCity/scripts.pory"
	.string "Perhaps they've gone to Mt. Pyre to\n"
# 1814 "data/maps/SootopolisCity/scripts.pory"
	.string "return those Orbs…\p"
# 1815 "data/maps/SootopolisCity/scripts.pory"
	.string "Anyway! I guess we'll need someone to\n"
# 1816 "data/maps/SootopolisCity/scripts.pory"
	.string "replace Drake in the Elite Four for now,\l"
# 1817 "data/maps/SootopolisCity/scripts.pory"
	.string "and it sounds like your friend Dawn has\l"
# 1818 "data/maps/SootopolisCity/scripts.pory"
	.string "someone in mind who could help us.$"
# 1819 "data/maps/SootopolisCity/scripts.pory"

# 1820 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DawnMaxieArchieLeft:
# 1821 "data/maps/SootopolisCity/scripts.pory"
	.string "Good luck against Juan, {PLAYER}!\n"
# 1822 "data/maps/SootopolisCity/scripts.pory"
	.string "Hopefully my friend from Sinnoh arrives\l"
# 1823 "data/maps/SootopolisCity/scripts.pory"
	.string "before you beat him and blaze your way\l"
# 1824 "data/maps/SootopolisCity/scripts.pory"
	.string "to the Elite Four!$"
# 1825 "data/maps/SootopolisCity/scripts.pory"

# 1826 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HaventYouScaledSkyPillar:
# 1827 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\n"
# 1828 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}?\p"
# 1829 "data/maps/SootopolisCity/scripts.pory"
	.string "Haven't you scaled the Sky Pillar\n"
# 1830 "data/maps/SootopolisCity/scripts.pory"
	.string "yet?\p"
# 1831 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm sure that you can make it to\n"
# 1832 "data/maps/SootopolisCity/scripts.pory"
	.string "the top of the Sky Pillar…$"
# 1833 "data/maps/SootopolisCity/scripts.pory"

# 1834 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AquaMagmaDidntMeanHarm:
# 1835 "data/maps/SootopolisCity/scripts.pory"
	.string "The leaders of Team Magma and Aqua,\n"
# 1836 "data/maps/SootopolisCity/scripts.pory"
	.string "I don't think they meant harm.\p"
# 1837 "data/maps/SootopolisCity/scripts.pory"
	.string "It wouldn't hurt to hear what they\n"
# 1838 "data/maps/SootopolisCity/scripts.pory"
	.string "have to say for themselves.$"
# 1839 "data/maps/SootopolisCity/scripts.pory"

# 1840 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThankYouForHelpAcceptThis:
# 1841 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 1842 "data/maps/SootopolisCity/scripts.pory"
	.string "My eyes didn't deceive me.\p"
# 1843 "data/maps/SootopolisCity/scripts.pory"
	.string "Thanks to your help, Sootopolis…\n"
# 1844 "data/maps/SootopolisCity/scripts.pory"
	.string "No, all of Hoenn was saved.\p"
# 1845 "data/maps/SootopolisCity/scripts.pory"
	.string "On behalf of the people, I thank you.\p"
# 1846 "data/maps/SootopolisCity/scripts.pory"
	.string "This is a gift from me.\n"
# 1847 "data/maps/SootopolisCity/scripts.pory"
	.string "Please accept it.$"
# 1848 "data/maps/SootopolisCity/scripts.pory"

# 1849 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ExplainWaterfallGoToGym:
# 1850 "data/maps/SootopolisCity/scripts.pory"
	.string "That Hidden Machine contains\n"
# 1851 "data/maps/SootopolisCity/scripts.pory"
	.string "Waterfall.\p"
# 1852 "data/maps/SootopolisCity/scripts.pory"
	.string "If you have the Rain Badge, a Pokémon\n"
# 1853 "data/maps/SootopolisCity/scripts.pory"
	.string "that has learned that HM move can\l"
# 1854 "data/maps/SootopolisCity/scripts.pory"
	.string "force its way up waterfalls.\p"
# 1855 "data/maps/SootopolisCity/scripts.pory"
	.string "And where does one get the Rain Badge?\n"
# 1856 "data/maps/SootopolisCity/scripts.pory"
	.string "You know, don't you?\p"
# 1857 "data/maps/SootopolisCity/scripts.pory"
	.string "That's right! You have to beat\n"
# 1858 "data/maps/SootopolisCity/scripts.pory"
	.string "the Sootopolis Gym Leader.\p"
# 1859 "data/maps/SootopolisCity/scripts.pory"
	.string "When you're all set to go, step through\n"
# 1860 "data/maps/SootopolisCity/scripts.pory"
	.string "that door.\p"
# 1861 "data/maps/SootopolisCity/scripts.pory"
	.string "But be warned, my mentor has recently\n"
# 1862 "data/maps/SootopolisCity/scripts.pory"
	.string "changed his style…\p"
# 1863 "data/maps/SootopolisCity/scripts.pory"
	.string "He taught me everything I know about\n"
# 1864 "data/maps/SootopolisCity/scripts.pory"
	.string "Water-type Pokémon, but now, he's\l"
# 1865 "data/maps/SootopolisCity/scripts.pory"
	.string "become a master of the Fairy type!$"
# 1866 "data/maps/SootopolisCity/scripts.pory"

# 1867 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DazzledByMentor:
# 1868 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm sure that you will be\n"
# 1869 "data/maps/SootopolisCity/scripts.pory"
	.string "dazzled by my mentor's breathtakingly\l"
# 1870 "data/maps/SootopolisCity/scripts.pory"
	.string "elegant battle style.\p"
# 1871 "data/maps/SootopolisCity/scripts.pory"
	.string "His Fairy types are already stronger\n"
# 1872 "data/maps/SootopolisCity/scripts.pory"
	.string "than his Water types were!$"
# 1873 "data/maps/SootopolisCity/scripts.pory"

# 1874 "data/maps/SootopolisCity/scripts.pory"
	SootopolisCity_Text_WelcomeBack:
# 1875 "data/maps/SootopolisCity/scripts.pory"
	.string "Wallace: {PLAYER}! You made it back\n"
# 1876 "data/maps/SootopolisCity/scripts.pory"
	.string "safely, I'm so relieved.\p"
# 1877 "data/maps/SootopolisCity/scripts.pory"
	.string "What happened when you made it to the\n"
# 1878 "data/maps/SootopolisCity/scripts.pory"
	.string "top of Sky Pillar?$"
# 1879 "data/maps/SootopolisCity/scripts.pory"

# 1880 "data/maps/SootopolisCity/scripts.pory"

# 1881 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PlayerAnswers:
# 1882 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 1883 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …$"
# 1884 "data/maps/SootopolisCity/scripts.pory"

# 1885 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WallaceCantBelieve:
# 1886 "data/maps/SootopolisCity/scripts.pory"
	.string "Wallace: Oh my…\p"
# 1887 "data/maps/SootopolisCity/scripts.pory"
	.string "I haven't been as involved in this\n"
# 1888 "data/maps/SootopolisCity/scripts.pory"
	.string "crisis as the rest of you, but I do go\l"
# 1889 "data/maps/SootopolisCity/scripts.pory"
	.string "back quite some time with Drake.\p"
# 1890 "data/maps/SootopolisCity/scripts.pory"
	.string "I can't believe he tried to do something\n"
# 1891 "data/maps/SootopolisCity/scripts.pory"
	.string "like that, and I can't believe I wasn't\l"
# 1892 "data/maps/SootopolisCity/scripts.pory"
	.string "there to help you, {PLAYER}.\p"
# 1893 "data/maps/SootopolisCity/scripts.pory"
	.string "However, it appears that you didn't\n"
# 1894 "data/maps/SootopolisCity/scripts.pory"
	.string "need my help, as you foiled his plans all\l"
# 1895 "data/maps/SootopolisCity/scripts.pory"
	.string "on your own!\p"
# 1896 "data/maps/SootopolisCity/scripts.pory"
	.string "For stopping Drake and for bringing\n"
# 1897 "data/maps/SootopolisCity/scripts.pory"
	.string "Rayquaza here to quell the rage of the\l"
# 1898 "data/maps/SootopolisCity/scripts.pory"
	.string "other super-ancient Pokémon, you have\l"
# 1899 "data/maps/SootopolisCity/scripts.pory"
	.string "my sincere gratitude, {PLAYER}!$"
# 1900 "data/maps/SootopolisCity/scripts.pory"

# 1901 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouAreAHero:
# 1902 "data/maps/SootopolisCity/scripts.pory"
	.string "You are nothing short of a hero to the\n"
# 1903 "data/maps/SootopolisCity/scripts.pory"
	.string "entire Hoenn region!$"
# 1904 "data/maps/SootopolisCity/scripts.pory"

# 1905 "data/maps/SootopolisCity/scripts.pory"

# 1906 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_TextRambled:
# 1907 "data/maps/SootopolisCity/scripts.pory"
	.string "Wallace: I've rambled long enough, I'm\n"
# 1908 "data/maps/SootopolisCity/scripts.pory"
	.string "sure you're curious to hear what\l"
# 1909 "data/maps/SootopolisCity/scripts.pory"
	.string "everyone else here has to say!$"
