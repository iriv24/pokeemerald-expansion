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
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 38 "data/maps/SootopolisCity/scripts.pory"
	end
# 39 "data/maps/SootopolisCity/scripts.pory"

# 40 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockHouseDoors::
# 41 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 42 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 43 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 26, METATILE_Sootopolis_Door_Closed, TRUE
# 44 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 44, 17, METATILE_Sootopolis_Door_Closed, TRUE
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
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 58 "data/maps/SootopolisCity/scripts.pory"
	return
# 59 "data/maps/SootopolisCity/scripts.pory"

# 60 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition:
# 61 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 62 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 63 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 64 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWeather
# 65 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetLayout
# 66 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetBattleSpectators
# 67 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetBattleSpectators
# 68 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetBattleSpectators
# 69 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetBattleSpectators
# 70 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetBattleSpectators
# 71 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 72 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 73 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetExitCaveOfOriginObjPos
# 74 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetOutsideGymObjPos
# 75 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetExpertBlockCaveEntrance
# 76 "data/maps/SootopolisCity/scripts.pory"
	end
# 77 "data/maps/SootopolisCity/scripts.pory"

# 78 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_HideMapNamePopup::
# 79 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 80 "data/maps/SootopolisCity/scripts.pory"
	return
# 81 "data/maps/SootopolisCity/scripts.pory"

# 82 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetBattleSpectators::
# 83 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_KIRI, 13, 48
# 84 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_BOY_1, 45, 32
# 85 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_NINJA_BOY, 48, 41
# 86 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WOMAN_1, 45, 43
# 87 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
# 88 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_BOY_1, MOVEMENT_TYPE_FACE_LEFT
# 89 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
# 90 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
# 91 "data/maps/SootopolisCity/scripts.pory"
	return
# 92 "data/maps/SootopolisCity/scripts.pory"

# 93 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout::
# 94 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalLayout
# 95 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalLayout
# 96 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 97 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetLegendariesLayout
# 98 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetLegendariesLayout
# 99 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetLegendariesLayout
# 100 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 101 "data/maps/SootopolisCity/scripts.pory"
	return
# 102 "data/maps/SootopolisCity/scripts.pory"

# 103 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalLayout::
# 104 "data/maps/SootopolisCity/scripts.pory"
	return
# 105 "data/maps/SootopolisCity/scripts.pory"

# 106 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLegendariesLayout::
# 107 "data/maps/SootopolisCity/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
# 108 "data/maps/SootopolisCity/scripts.pory"
	return
# 109 "data/maps/SootopolisCity/scripts.pory"

# 110 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather::
# 111 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalWeather
# 112 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalWeather
# 113 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 114 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 115 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, Common_EventScript_SetAbnormalWeather
# 116 "data/maps/SootopolisCity/scripts.pory"
	return
# 117 "data/maps/SootopolisCity/scripts.pory"

# 118 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalWeather::
# 119 "data/maps/SootopolisCity/scripts.pory"
	return
# 120 "data/maps/SootopolisCity/scripts.pory"

# 121 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetDownpour::
# 122 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 123 "data/maps/SootopolisCity/scripts.pory"
	return
# 124 "data/maps/SootopolisCity/scripts.pory"

# 125 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos::
# 126 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos
# 127 "data/maps/SootopolisCity/scripts.pory"
	return
# 128 "data/maps/SootopolisCity/scripts.pory"

# 129 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos::
# 130 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 131 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 32, 18
# 132 "data/maps/SootopolisCity/scripts.pory"
	return
# 133 "data/maps/SootopolisCity/scripts.pory"

# 134 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExitCaveOfOriginObjPos::
# 135 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 136 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 31, 18
# 137 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 32, 18
# 138 "data/maps/SootopolisCity/scripts.pory"
	end
# 139 "data/maps/SootopolisCity/scripts.pory"

# 140 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos::
# 141 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 31, 18
# 142 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 29, 33
# 143 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_DAWN, 28, 33
# 144 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 33, 35
# 145 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 34, 35
# 146 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 0, SootopolisCity_EventScript_SetWallaceMiddle
# 147 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 1, SootopolisCity_EventScript_SetWallaceRight
# 148 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 2, SootopolisCity_EventScript_SetWallaceLeft
# 149 "data/maps/SootopolisCity/scripts.pory"
	return
# 150 "data/maps/SootopolisCity/scripts.pory"

# 151 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceMiddle::
# 152 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 31, 33
# 153 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 154 "data/maps/SootopolisCity/scripts.pory"
	return
# 155 "data/maps/SootopolisCity/scripts.pory"

# 156 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceRight::
# 157 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 32, 33
# 158 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 159 "data/maps/SootopolisCity/scripts.pory"
	return
# 160 "data/maps/SootopolisCity/scripts.pory"

# 161 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceLeft::
# 162 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 30, 33
# 163 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 164 "data/maps/SootopolisCity/scripts.pory"
	return
# 165 "data/maps/SootopolisCity/scripts.pory"

# 166 "data/maps/SootopolisCity/scripts.pory"

# 167 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnWarp:
# 168 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_PlayerFaceLegendaries
# 169 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 170 "data/maps/SootopolisCity/scripts.pory"

# 171 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries::
# 172 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_PlayerFaceLegendaries1
# 173 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 2, SootopolisCity_EventScript_PlayerFaceLegendaries2
# 174 "data/maps/SootopolisCity/scripts.pory"
	end
# 175 "data/maps/SootopolisCity/scripts.pory"

# 176 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries1::
# 177 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 178 "data/maps/SootopolisCity/scripts.pory"
	return
# 179 "data/maps/SootopolisCity/scripts.pory"

# 180 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries2::
# 181 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 182 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 183 "data/maps/SootopolisCity/scripts.pory"
	return
# 184 "data/maps/SootopolisCity/scripts.pory"

# 185 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnResume:
# 186 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
# 187 "data/maps/SootopolisCity/scripts.pory"
	end
# 188 "data/maps/SootopolisCity/scripts.pory"

# 189 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnFrame:
# 190 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartLegendariesScene
# 191 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_StartRayquazaScene
# 192 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_START_POST_RAYQUAZA_SCENE, 1, SootopolisCity_EventScript_PostRayquazaScene
# 193 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 194 "data/maps/SootopolisCity/scripts.pory"

# 195 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 196 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene::
# 197 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 198 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 199 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_LegendariesSceneFromDive
# 200 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_LegendariesSceneFromDive
# 201 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
# 202 "data/maps/SootopolisCity/scripts.pory"
	end
# 203 "data/maps/SootopolisCity/scripts.pory"

# 204 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
# 205 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 206 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 207 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 208 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 209 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 210 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 211 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 212 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 213 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 214 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 215 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 216 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 217 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 218 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 219 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 220 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 221 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 222 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 223 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 224 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 225 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 226 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 227 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 228 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 229 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 230 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 231 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 232 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 233 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 234 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 235 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 236 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 237 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 238 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 239 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 240 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 241 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 242 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 243 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 244 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 245 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 246 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 247 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 248 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 249 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 250 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 251 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 252 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 253 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 254 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 255 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 256 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 257 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 258 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 259 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 260 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 261 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 262 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 263 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 264 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 265 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 266 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
# 267 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 268 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 269 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 270 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 271 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 272 "data/maps/SootopolisCity/scripts.pory"
	end
# 273 "data/maps/SootopolisCity/scripts.pory"

# 274 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromPokeCenter:
# 275 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
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
	step_end
# 288 "data/maps/SootopolisCity/scripts.pory"

# 289 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToPokeCenter:
# 290 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
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
	step_end
# 303 "data/maps/SootopolisCity/scripts.pory"

# 304 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromDive::
# 305 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 306 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 307 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 308 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 309 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 310 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 311 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 312 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 313 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 314 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 315 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 316 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 317 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 318 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 319 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 320 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 321 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 322 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 323 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 324 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 325 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 326 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 327 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 328 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 329 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 330 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 331 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 332 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 333 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 334 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 335 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 336 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 337 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 338 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 339 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 340 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 341 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 342 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 343 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 344 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 345 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 346 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 347 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 348 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 349 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 350 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 351 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 352 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 353 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 354 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 355 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 356 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 357 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 358 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 359 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 360 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 361 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 362 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 363 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 364 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 365 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 366 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToDive
# 367 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 368 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 369 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 370 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 371 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 372 "data/maps/SootopolisCity/scripts.pory"
	end
# 373 "data/maps/SootopolisCity/scripts.pory"

# 374 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromDive:
# 375 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 376 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 377 "data/maps/SootopolisCity/scripts.pory"
	walk_up
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
	step_end
# 385 "data/maps/SootopolisCity/scripts.pory"

# 386 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToDive:
# 387 "data/maps/SootopolisCity/scripts.pory"
	walk_down
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
	walk_slow_diag_southwest
# 395 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 396 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 397 "data/maps/SootopolisCity/scripts.pory"

# 398 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack:
# 399 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 400 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 401 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 402 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 403 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 404 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 405 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 406 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 407 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 408 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 409 "data/maps/SootopolisCity/scripts.pory"

# 410 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreDefend:
# 411 "data/maps/SootopolisCity/scripts.pory"
	delay_16
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
	init_affine_anim
# 421 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 422 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 423 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 424 "data/maps/SootopolisCity/scripts.pory"

# 425 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreMoveBack:
# 426 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 427 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 428 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 429 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 430 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 431 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 432 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 433 "data/maps/SootopolisCity/scripts.pory"

# 434 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreIdle:
# 435 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
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
	step_end
# 442 "data/maps/SootopolisCity/scripts.pory"

# 443 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonAttack:
# 444 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 445 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 446 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 447 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 448 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 449 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 450 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 451 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 452 "data/maps/SootopolisCity/scripts.pory"

# 453 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonDefend:
# 454 "data/maps/SootopolisCity/scripts.pory"
	delay_16
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
	walk_fast_right
# 464 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 465 "data/maps/SootopolisCity/scripts.pory"

# 466 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonMoveBack:
# 467 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 468 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 469 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 470 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 471 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 472 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 473 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 474 "data/maps/SootopolisCity/scripts.pory"

# 475 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonIdle:
# 476 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
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
	step_end
# 483 "data/maps/SootopolisCity/scripts.pory"

# 484 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 485 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene::
# 486 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 487 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 488 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_RayquazaSceneFromDive
# 489 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_RayquazaSceneFromDive
# 490 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
# 491 "data/maps/SootopolisCity/scripts.pory"
	end
# 492 "data/maps/SootopolisCity/scripts.pory"

# 493 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
# 494 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 495 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 496 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 497 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 498 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 499 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 500 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 501 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 502 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 503 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 504 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 505 "data/maps/SootopolisCity/scripts.pory"
	hideobjectat LOCALID_RAYQUAZA, MAP_SOOTOPOLIS_CITY
# 506 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 507 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 508 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 509 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
# 510 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 511 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 512 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 513 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 514 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 515 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 516 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 517 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 518 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 519 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 520 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 521 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 522 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 523 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 524 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 525 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 526 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 527 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 528 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 529 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 530 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 531 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 532 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 533 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 534 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 535 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 536 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 537 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 538 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 539 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 540 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 541 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 542 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_START_POST_RAYQUAZA_SCENE, 1
# 543 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 31, 35
# 544 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 545 "data/maps/SootopolisCity/scripts.pory"
	end
# 546 "data/maps/SootopolisCity/scripts.pory"

# 547 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromDive::
# 548 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 549 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 550 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 551 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 552 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 553 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 554 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 555 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 556 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 557 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 558 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 559 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 560 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 561 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 562 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 563 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 564 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
# 565 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 566 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 567 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 568 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 569 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 570 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 571 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 572 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 573 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 574 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 575 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 576 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 577 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 578 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 579 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 580 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 581 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 582 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 583 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 584 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 585 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 586 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 587 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 588 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 589 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 590 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 591 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 2
# 592 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 593 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_START_POST_RAYQUAZA_SCENE, 1
# 594 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 595 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 596 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 31, 35
# 597 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 598 "data/maps/SootopolisCity/scripts.pory"
	end
# 599 "data/maps/SootopolisCity/scripts.pory"

# 600 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PostRayquazaScene::
# 601 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 602 "data/maps/SootopolisCity/scripts.pory"
	delay 30
# 603 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 604 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 605 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 606 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 607 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 608 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WelcomeBack, MSGBOX_DEFAULT
# 609 "data/maps/SootopolisCity/scripts.pory"
	delay 15
# 610 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PlayerAnswers, MSGBOX_DEFAULT
# 611 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 612 "data/maps/SootopolisCity/scripts.pory"
	delay 15
# 613 "data/maps/SootopolisCity/scripts.pory"
	playse SE_PIN
# 614 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_ExclamationMark
# 615 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
# 616 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 617 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 618 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_ExclamationMark
# 619 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 620 "data/maps/SootopolisCity/scripts.pory"
	delay 15
# 621 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_WalkInPlaceFasterRight
# 622 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 623 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 624 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
# 625 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 626 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 627 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_WalkInPlaceFasterDown
# 628 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 629 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 630 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterDown
# 631 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/SootopolisCity/scripts.pory"
	delay 15
# 633 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WallaceCantBelieve, MSGBOX_DEFAULT
# 634 "data/maps/SootopolisCity/scripts.pory"
	message SootopolisCity_Text_YouAreAHero
# 635 "data/maps/SootopolisCity/scripts.pory"
	waitmessage
# 636 "data/maps/SootopolisCity/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 637 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_TextRambled, MSGBOX_DEFAULT
# 638 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 639 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_START_POST_RAYQUAZA_SCENE, 2
# 640 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 641 "data/maps/SootopolisCity/scripts.pory"
	delay 30
# 642 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 643 "data/maps/SootopolisCity/scripts.pory"
	end
# 644 "data/maps/SootopolisCity/scripts.pory"

# 645 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetRoughWater::
# 646 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 647 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 648 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 649 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 650 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 651 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 652 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 653 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 654 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 655 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 656 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 657 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 658 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 659 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 660 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 661 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 662 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 663 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 664 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 665 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 666 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 667 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 668 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 669 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
# 670 "data/maps/SootopolisCity/scripts.pory"
	return
# 671 "data/maps/SootopolisCity/scripts.pory"

# 672 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RayquazaFlyOff:
# 673 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 674 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 675 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 676 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 677 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 678 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 679 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 680 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 681 "data/maps/SootopolisCity/scripts.pory"

# 682 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanUp:
# 683 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 684 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 685 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 686 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 687 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 688 "data/maps/SootopolisCity/scripts.pory"

# 689 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendaries:
# 690 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 691 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 692 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 693 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 694 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 695 "data/maps/SootopolisCity/scripts.pory"

# 696 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 697 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 698 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 699 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 700 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 701 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 702 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 703 "data/maps/SootopolisCity/scripts.pory"

# 704 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 705 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanUp:
# 706 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 707 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
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
	walk_right
# 715 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 716 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 717 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 718 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 719 "data/maps/SootopolisCity/scripts.pory"

# 720 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 721 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanBack:
# 722 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 723 "data/maps/SootopolisCity/scripts.pory"
	walk_down
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
	walk_slow_diag_southwest
# 734 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 735 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 736 "data/maps/SootopolisCity/scripts.pory"

# 737 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert::
# 738 "data/maps/SootopolisCity/scripts.pory"
	lock
# 739 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 740 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, SootopolisCity_EventScript_ExpertPostChampion
# 741 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ExpertPostLegendaries
# 742 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ExpertLegendaries
# 743 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_ExpertLeadToCave
# 744 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
# 745 "data/maps/SootopolisCity/scripts.pory"
	release
# 746 "data/maps/SootopolisCity/scripts.pory"
	end
# 747 "data/maps/SootopolisCity/scripts.pory"

# 748 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLeadToCave::
# 749 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
# 750 "data/maps/SootopolisCity/scripts.pory"
	release
# 751 "data/maps/SootopolisCity/scripts.pory"
	end
# 752 "data/maps/SootopolisCity/scripts.pory"

# 753 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostLegendaries::
# 754 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
# 755 "data/maps/SootopolisCity/scripts.pory"
	release
# 756 "data/maps/SootopolisCity/scripts.pory"
	end
# 757 "data/maps/SootopolisCity/scripts.pory"

# 758 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostChampion::
# 759 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginOpen, MSGBOX_DEFAULT
# 760 "data/maps/SootopolisCity/scripts.pory"
	release
# 761 "data/maps/SootopolisCity/scripts.pory"
	end
# 762 "data/maps/SootopolisCity/scripts.pory"

# 763 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLegendaries::
# 764 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
# 765 "data/maps/SootopolisCity/scripts.pory"
	release
# 766 "data/maps/SootopolisCity/scripts.pory"
	end
# 767 "data/maps/SootopolisCity/scripts.pory"

# 768 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri::
# 769 "data/maps/SootopolisCity/scripts.pory"
	lock
# 770 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 771 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_KiriGiveBerry
# 772 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_KiriGiveBerry
# 773 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_KiriRayquaza
# 774 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 775 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 776 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 777 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 778 "data/maps/SootopolisCity/scripts.pory"
	release
# 779 "data/maps/SootopolisCity/scripts.pory"
	end
# 780 "data/maps/SootopolisCity/scripts.pory"

# 781 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriRayquaza::
# 782 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 783 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 784 "data/maps/SootopolisCity/scripts.pory"
	release
# 785 "data/maps/SootopolisCity/scripts.pory"
	end
# 786 "data/maps/SootopolisCity/scripts.pory"

# 787 "data/maps/SootopolisCity/scripts.pory"
@ Gives 2 berries daily. First ranges from FIRST_KIRI_BERRY to LAST_KIRI_BERRY, second is always Figy or Iapapa
# 788 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry::
# 789 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 790 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 791 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriReceivedBerry
# 792 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 793 "data/maps/SootopolisCity/scripts.pory"
	random NUM_KIRI_BERRIES
# 794 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
# 795 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 796 "data/maps/SootopolisCity/scripts.pory"
	giveitem VAR_RESULT
# 797 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 798 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 799 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 800 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 801 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SootopolisCity_EventScript_GiveFigyBerry
# 802 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_EventScript_GiveIapapaBerry
# 803 "data/maps/SootopolisCity/scripts.pory"
	end
# 804 "data/maps/SootopolisCity/scripts.pory"

# 805 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry::
# 806 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_FIGY_BERRY
# 807 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 808 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 809 "data/maps/SootopolisCity/scripts.pory"
	release
# 810 "data/maps/SootopolisCity/scripts.pory"
	end
# 811 "data/maps/SootopolisCity/scripts.pory"

# 812 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveIapapaBerry::
# 813 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 814 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 815 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 816 "data/maps/SootopolisCity/scripts.pory"
	release
# 817 "data/maps/SootopolisCity/scripts.pory"
	end
# 818 "data/maps/SootopolisCity/scripts.pory"

# 819 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry::
# 820 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 821 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_EventScript_KiriLikeSeasonBornIn
# 822 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
# 823 "data/maps/SootopolisCity/scripts.pory"
	release
# 824 "data/maps/SootopolisCity/scripts.pory"
	end
# 825 "data/maps/SootopolisCity/scripts.pory"

# 826 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriLikeSeasonBornIn::
# 827 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
# 828 "data/maps/SootopolisCity/scripts.pory"
	release
# 829 "data/maps/SootopolisCity/scripts.pory"
	end
# 830 "data/maps/SootopolisCity/scripts.pory"

# 831 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2::
# 832 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 833 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FacePlayer
# 834 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 835 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman2Rayquaza
# 836 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 837 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 838 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FaceOriginalDirection
# 839 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 840 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 841 "data/maps/SootopolisCity/scripts.pory"
	end
# 842 "data/maps/SootopolisCity/scripts.pory"

# 843 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2Rayquaza::
# 844 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
# 845 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 846 "data/maps/SootopolisCity/scripts.pory"
	end
# 847 "data/maps/SootopolisCity/scripts.pory"

# 848 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man::
# 849 "data/maps/SootopolisCity/scripts.pory"
	lock
# 850 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 851 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ManPostLegendaries
# 852 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
# 853 "data/maps/SootopolisCity/scripts.pory"
	release
# 854 "data/maps/SootopolisCity/scripts.pory"
	end
# 855 "data/maps/SootopolisCity/scripts.pory"

# 856 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManPostLegendaries::
# 857 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
# 858 "data/maps/SootopolisCity/scripts.pory"
	release
# 859 "data/maps/SootopolisCity/scripts.pory"
	end
# 860 "data/maps/SootopolisCity/scripts.pory"

# 861 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1::
# 862 "data/maps/SootopolisCity/scripts.pory"
	lock
# 863 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 864 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Woman1PostLegendaries
# 865 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman1Rayquaza
# 866 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_Woman1Legendaries
# 867 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
# 868 "data/maps/SootopolisCity/scripts.pory"
	release
# 869 "data/maps/SootopolisCity/scripts.pory"
	end
# 870 "data/maps/SootopolisCity/scripts.pory"

# 871 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Legendaries::
# 872 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 873 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 874 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 875 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 876 "data/maps/SootopolisCity/scripts.pory"
	release
# 877 "data/maps/SootopolisCity/scripts.pory"
	end
# 878 "data/maps/SootopolisCity/scripts.pory"

# 879 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1PostLegendaries::
# 880 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
# 881 "data/maps/SootopolisCity/scripts.pory"
	release
# 882 "data/maps/SootopolisCity/scripts.pory"
	end
# 883 "data/maps/SootopolisCity/scripts.pory"

# 884 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Rayquaza::
# 885 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
# 886 "data/maps/SootopolisCity/scripts.pory"
	release
# 887 "data/maps/SootopolisCity/scripts.pory"
	end
# 888 "data/maps/SootopolisCity/scripts.pory"

# 889 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy::
# 890 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 891 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FacePlayer
# 892 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 893 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_NinjaBoyRayquaza
# 894 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_NinjaBoyNormal
# 895 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_NinjaBoyNormal
# 896 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 897 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 898 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FaceOriginalDirection
# 899 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 900 "data/maps/SootopolisCity/scripts.pory"
	release
# 901 "data/maps/SootopolisCity/scripts.pory"
	end
# 902 "data/maps/SootopolisCity/scripts.pory"

# 903 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyNormal::
# 904 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
# 905 "data/maps/SootopolisCity/scripts.pory"
	release
# 906 "data/maps/SootopolisCity/scripts.pory"
	end
# 907 "data/maps/SootopolisCity/scripts.pory"

# 908 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyRayquaza::
# 909 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
# 910 "data/maps/SootopolisCity/scripts.pory"
	release
# 911 "data/maps/SootopolisCity/scripts.pory"
	end
# 912 "data/maps/SootopolisCity/scripts.pory"

# 913 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1::
# 914 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 915 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FacePlayer
# 916 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 917 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy1Rayquaza
# 918 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1GameClear
# 919 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Boy1Normal
# 920 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_Boy1Normal
# 921 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 922 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 923 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FaceOriginalDirection
# 924 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 925 "data/maps/SootopolisCity/scripts.pory"
	release
# 926 "data/maps/SootopolisCity/scripts.pory"
	end
# 927 "data/maps/SootopolisCity/scripts.pory"

# 928 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Rayquaza::
# 929 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
# 930 "data/maps/SootopolisCity/scripts.pory"
	release
# 931 "data/maps/SootopolisCity/scripts.pory"
	end
# 932 "data/maps/SootopolisCity/scripts.pory"

# 933 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1GameClear::
# 934 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
# 935 "data/maps/SootopolisCity/scripts.pory"
	release
# 936 "data/maps/SootopolisCity/scripts.pory"
	end
# 937 "data/maps/SootopolisCity/scripts.pory"

# 938 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Normal::
# 939 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
# 940 "data/maps/SootopolisCity/scripts.pory"
	release
# 941 "data/maps/SootopolisCity/scripts.pory"
	end
# 942 "data/maps/SootopolisCity/scripts.pory"

# 943 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GymSign::
# 944 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
# 945 "data/maps/SootopolisCity/scripts.pory"
	end
# 946 "data/maps/SootopolisCity/scripts.pory"

# 947 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CitySign::
# 948 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
# 949 "data/maps/SootopolisCity/scripts.pory"
	end
# 950 "data/maps/SootopolisCity/scripts.pory"

# 951 "data/maps/SootopolisCity/scripts.pory"
EventScript_ClosedSootopolisDoor::
# 952 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
# 953 "data/maps/SootopolisCity/scripts.pory"
	end
# 954 "data/maps/SootopolisCity/scripts.pory"

# 955 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven::
# 956 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 957 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
# 958 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 959 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
# 960 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_StevenHelpWallace
# 961 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_StevenHelpedWallace
# 962 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_StevenHelpedWallace
# 963 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_StevenMaxieArchieLeft
# 964 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
# 965 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 966 "data/maps/SootopolisCity/scripts.pory"
	end
# 967 "data/maps/SootopolisCity/scripts.pory"

# 968 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpWallace::
# 969 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
# 970 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 971 "data/maps/SootopolisCity/scripts.pory"
	end
# 972 "data/maps/SootopolisCity/scripts.pory"

# 973 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenMaxieArchieLeft::
# 974 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
# 975 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 976 "data/maps/SootopolisCity/scripts.pory"
	end
# 977 "data/maps/SootopolisCity/scripts.pory"

# 978 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_DawnMaxieArchieLeft::
# 979 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DawnMaxieArchieLeft, MSGBOX_DEFAULT
# 980 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 981 "data/maps/SootopolisCity/scripts.pory"
	end
# 982 "data/maps/SootopolisCity/scripts.pory"

# 983 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpedWallace::
# 984 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
# 985 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 986 "data/maps/SootopolisCity/scripts.pory"
	end
# 987 "data/maps/SootopolisCity/scripts.pory"

# 988 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 989 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_InvolvedWithCrisisComeWithMe, MSGBOX_DEFAULT
# 990 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 991 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_StartWalkToCaveOfOriginWest
# 992 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth
# 993 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
# 994 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 995 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 996 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 997 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 998 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 999 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_EXPERT, SootopolisCity_Movement_ExpertMoveAside
# 1000 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1001 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 1002 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerArriveCaveEntrance
# 1003 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1004 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HereWereAreHelpWallace, MSGBOX_DEFAULT
# 1005 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1006 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 1007 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 1008 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1009 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 1010 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1011 "data/maps/SootopolisCity/scripts.pory"
	end
# 1012 "data/maps/SootopolisCity/scripts.pory"

# 1013 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginWest::
# 1014 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 1015 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
# 1016 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1017 "data/maps/SootopolisCity/scripts.pory"
	return
# 1018 "data/maps/SootopolisCity/scripts.pory"

# 1019 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth::
# 1020 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 1021 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
# 1022 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1023 "data/maps/SootopolisCity/scripts.pory"
	return
# 1024 "data/maps/SootopolisCity/scripts.pory"

# 1025 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 1026 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1027 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1028 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1029 "data/maps/SootopolisCity/scripts.pory"
	walk_right
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
	walk_up
# 1038 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1039 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1040 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1041 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1042 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1043 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1044 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1045 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1046 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1047 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1048 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1049 "data/maps/SootopolisCity/scripts.pory"
	walk_left
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
	walk_up
# 1058 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1059 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1060 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1061 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1062 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1063 "data/maps/SootopolisCity/scripts.pory"

# 1064 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 1065 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1066 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1067 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1068 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1069 "data/maps/SootopolisCity/scripts.pory"
	walk_right
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
	walk_up
# 1078 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1079 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1080 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1081 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1082 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1083 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1084 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1085 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1086 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1087 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1088 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1089 "data/maps/SootopolisCity/scripts.pory"
	walk_left
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
	walk_up
# 1097 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1098 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1099 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1100 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1101 "data/maps/SootopolisCity/scripts.pory"

# 1102 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 1103 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1104 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1105 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1106 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1107 "data/maps/SootopolisCity/scripts.pory"
	walk_right
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
	walk_up
# 1116 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1117 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1118 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1119 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1120 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1121 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1122 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1123 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1124 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1125 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1126 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1127 "data/maps/SootopolisCity/scripts.pory"
	walk_left
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
	walk_up
# 1135 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1136 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1137 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1138 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1139 "data/maps/SootopolisCity/scripts.pory"

# 1140 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 1141 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1142 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1143 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1144 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1145 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1146 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1147 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1148 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1149 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1150 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1151 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1152 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1153 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1154 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1155 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1156 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1157 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1158 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1159 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1160 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1161 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1162 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1163 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1164 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1165 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1166 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1167 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1168 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1169 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1170 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1171 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1172 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1173 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1174 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1175 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1176 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1177 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1178 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1179 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1180 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1181 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1182 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1183 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1184 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1185 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1186 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1187 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1188 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1189 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1190 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1191 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 1192 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1193 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1194 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1195 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1196 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1197 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1198 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1199 "data/maps/SootopolisCity/scripts.pory"

# 1200 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 1201 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1202 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1203 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1204 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1205 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1206 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1207 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1208 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1209 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1210 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1211 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1212 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1213 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1214 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1215 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1216 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1217 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1218 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1219 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1220 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1221 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1222 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1223 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1224 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1225 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1226 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1227 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1228 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1229 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1230 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1231 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1232 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1233 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1234 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1235 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1236 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1237 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1238 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1239 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1240 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1241 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1242 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1243 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1244 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1245 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1246 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1247 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1248 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1249 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1250 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1251 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1252 "data/maps/SootopolisCity/scripts.pory"

# 1253 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_ExpertMoveAside:
# 1254 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 1255 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1256 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1257 "data/maps/SootopolisCity/scripts.pory"

# 1258 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 1259 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1260 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1261 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1262 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1263 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1264 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1265 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1266 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1267 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1268 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1269 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1270 "data/maps/SootopolisCity/scripts.pory"

# 1271 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerArriveCaveEntrance:
# 1272 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1273 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1274 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1275 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1276 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1277 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1278 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1279 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1280 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1281 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1282 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1283 "data/maps/SootopolisCity/scripts.pory"

# 1284 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerEnterCaveOfOrigin:
# 1285 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1286 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1287 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1288 "data/maps/SootopolisCity/scripts.pory"

# 1289 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2::
# 1290 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1291 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FacePlayer
# 1292 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1293 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy2Rayquaza
# 1294 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 1295 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1296 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FaceOriginalDirection
# 1297 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1298 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1299 "data/maps/SootopolisCity/scripts.pory"
	end
# 1300 "data/maps/SootopolisCity/scripts.pory"

# 1301 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2Rayquaza::
# 1302 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 1303 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1304 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1305 "data/maps/SootopolisCity/scripts.pory"
	end
# 1306 "data/maps/SootopolisCity/scripts.pory"

# 1307 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Dawn::
# 1308 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1309 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_FacePlayer
# 1310 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1311 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_DawnMaxieArchieLeft
# 1312 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_DawnPostRayquaza
# 1313 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsCrazy, MSGBOX_DEFAULT
# 1314 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1315 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_FaceOriginalDirection
# 1316 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1317 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1318 "data/maps/SootopolisCity/scripts.pory"
	end
# 1319 "data/maps/SootopolisCity/scripts.pory"

# 1320 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_DawnPostRayquaza::
# 1321 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreatWork, MSGBOX_DEFAULT
# 1322 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1323 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1324 "data/maps/SootopolisCity/scripts.pory"
	end
# 1325 "data/maps/SootopolisCity/scripts.pory"

# 1326 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt::
# 1327 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1328 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_BlackBeltRayquaza
# 1329 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 1330 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1331 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 1332 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1333 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 1334 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1335 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 1336 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1337 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1338 "data/maps/SootopolisCity/scripts.pory"
	end
# 1339 "data/maps/SootopolisCity/scripts.pory"

# 1340 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBeltRayquaza::
# 1341 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 1342 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1343 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
# 1344 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1345 "data/maps/SootopolisCity/scripts.pory"
	end
# 1346 "data/maps/SootopolisCity/scripts.pory"

# 1347 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl::
# 1348 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1349 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FacePlayer
# 1350 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1351 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_GirlRayquaza
# 1352 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 1353 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1354 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FaceOriginalDirection
# 1355 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1356 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1357 "data/maps/SootopolisCity/scripts.pory"
	end
# 1358 "data/maps/SootopolisCity/scripts.pory"

# 1359 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GirlRayquaza::
# 1360 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 1361 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1362 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1363 "data/maps/SootopolisCity/scripts.pory"
	end
# 1364 "data/maps/SootopolisCity/scripts.pory"

# 1365 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac::
# 1366 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1367 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FacePlayer
# 1368 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1369 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ManiacRayquaza
# 1370 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 1371 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1372 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FaceOriginalDirection
# 1373 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1374 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1375 "data/maps/SootopolisCity/scripts.pory"
	end
# 1376 "data/maps/SootopolisCity/scripts.pory"

# 1377 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManiacRayquaza::
# 1378 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
# 1379 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1380 "data/maps/SootopolisCity/scripts.pory"
	end
# 1381 "data/maps/SootopolisCity/scripts.pory"

# 1382 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace::
# 1383 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1384 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1385 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_GoToSkyPillar
# 1386 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, SootopolisCity_EventScript_GoToGym
# 1387 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_GiveWaterfall
# 1388 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
# 1389 "data/maps/SootopolisCity/scripts.pory"
	release
# 1390 "data/maps/SootopolisCity/scripts.pory"
	end
# 1391 "data/maps/SootopolisCity/scripts.pory"

# 1392 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall::
# 1393 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 1394 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 1395 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 1396 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 1397 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1398 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_WallaceMoveFromGym
# 1399 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SootopolisCity_EventScript_WallaceMoveFromGym
# 1400 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_WallaceMoveFromGymWest
# 1401 "data/maps/SootopolisCity/scripts.pory"
	release
# 1402 "data/maps/SootopolisCity/scripts.pory"
	end
# 1403 "data/maps/SootopolisCity/scripts.pory"

# 1404 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGym::
# 1405 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, SootopolisCity_Movement_WallaceMoveFromGym
# 1406 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1407 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_WALLACE
# 1408 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
# 1409 "data/maps/SootopolisCity/scripts.pory"
	return
# 1410 "data/maps/SootopolisCity/scripts.pory"

# 1411 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGymWest::
# 1412 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, SootopolisCity_Movement_WallaceMoveFromGymWest
# 1413 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1414 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_WALLACE
# 1415 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
# 1416 "data/maps/SootopolisCity/scripts.pory"
	return
# 1417 "data/maps/SootopolisCity/scripts.pory"

# 1418 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToSkyPillar::
# 1419 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
# 1420 "data/maps/SootopolisCity/scripts.pory"
	release
# 1421 "data/maps/SootopolisCity/scripts.pory"
	end
# 1422 "data/maps/SootopolisCity/scripts.pory"

# 1423 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToGym::
# 1424 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DazzledByMentor, MSGBOX_DEFAULT
# 1425 "data/maps/SootopolisCity/scripts.pory"
	release
# 1426 "data/maps/SootopolisCity/scripts.pory"
	end
# 1427 "data/maps/SootopolisCity/scripts.pory"

# 1428 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGym:
# 1429 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1430 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1431 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1432 "data/maps/SootopolisCity/scripts.pory"

# 1433 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGymWest:
# 1434 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1435 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1436 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1437 "data/maps/SootopolisCity/scripts.pory"

# 1438 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie::
# 1439 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1440 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_MaxieRayquaza
# 1441 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 1442 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1443 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1444 "data/maps/SootopolisCity/scripts.pory"
	end
# 1445 "data/maps/SootopolisCity/scripts.pory"

# 1446 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieRayquaza::
# 1447 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_NPC
# 1448 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 1449 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1450 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1451 "data/maps/SootopolisCity/scripts.pory"
	end
# 1452 "data/maps/SootopolisCity/scripts.pory"

# 1453 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie::
# 1454 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1455 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ArchieRayquaza
# 1456 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 1457 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1458 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1459 "data/maps/SootopolisCity/scripts.pory"
	end
# 1460 "data/maps/SootopolisCity/scripts.pory"

# 1461 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieRayquaza::
# 1462 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_NPC
# 1463 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 1464 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1465 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1466 "data/maps/SootopolisCity/scripts.pory"
	end
# 1467 "data/maps/SootopolisCity/scripts.pory"

# 1468 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieArchieLeave::
# 1469 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 1470 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 1471 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 1472 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 1473 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 1474 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 1475 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 1476 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1477 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1478 "data/maps/SootopolisCity/scripts.pory"
	end
# 1479 "data/maps/SootopolisCity/scripts.pory"

# 1480 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1481 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate::
# 1482 "data/maps/SootopolisCity/scripts.pory"
	levitate
# 1483 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1484 "data/maps/SootopolisCity/scripts.pory"

# 1485 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1486 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask::
# 1487 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
# 1488 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1489 "data/maps/SootopolisCity/scripts.pory"

# 1490 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GymSign:
# 1491 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City Pokémon Gym\n"
# 1492 "data/maps/SootopolisCity/scripts.pory"
	.string "Leader: Juan\p"
# 1493 "data/maps/SootopolisCity/scripts.pory"
	.string "“The Gym Leader with the beauty\n"
# 1494 "data/maps/SootopolisCity/scripts.pory"
	.string "of pure water!”$"
# 1495 "data/maps/SootopolisCity/scripts.pory"

# 1496 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CitySign:
# 1497 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City\p"
# 1498 "data/maps/SootopolisCity/scripts.pory"
	.string "“The mystical city where history\n"
# 1499 "data/maps/SootopolisCity/scripts.pory"
	.string "slumbers.”$"
# 1500 "data/maps/SootopolisCity/scripts.pory"

# 1501 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoorIsClosed:
# 1502 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"
# 1503 "data/maps/SootopolisCity/scripts.pory"

# 1504 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PhysicallyFitLivingHere:
# 1505 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
# 1506 "data/maps/SootopolisCity/scripts.pory"
	.string "down stairs all the time…\p"
# 1507 "data/maps/SootopolisCity/scripts.pory"
	.string "If you live in this town, you end up\n"
# 1508 "data/maps/SootopolisCity/scripts.pory"
	.string "getting physically fit.$"
# 1509 "data/maps/SootopolisCity/scripts.pory"

# 1510 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiantPokemonSuddenlyAppeared:
# 1511 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant Pokémon suddenly appeared\n"
# 1512 "data/maps/SootopolisCity/scripts.pory"
	.string "in the middle of the city!\p"
# 1513 "data/maps/SootopolisCity/scripts.pory"
	.string "And, I've never seen them before!\p"
# 1514 "data/maps/SootopolisCity/scripts.pory"
	.string "Why are they smashing into each\n"
# 1515 "data/maps/SootopolisCity/scripts.pory"
	.string "other like that?\p"
# 1516 "data/maps/SootopolisCity/scripts.pory"
	.string "Why can't they be friends, those\n"
# 1517 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon?$"
# 1518 "data/maps/SootopolisCity/scripts.pory"

# 1519 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhatIsThatGreenPokemon:
# 1520 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
# 1521 "data/maps/SootopolisCity/scripts.pory"
	.string "What is that green Pokémon?!$"
# 1522 "data/maps/SootopolisCity/scripts.pory"

# 1523 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhereDidLegendariesGo:
# 1524 "data/maps/SootopolisCity/scripts.pory"
	.string "Groudon and Kyogre…\n"
# 1525 "data/maps/SootopolisCity/scripts.pory"
	.string "Where did they go?\p"
# 1526 "data/maps/SootopolisCity/scripts.pory"
	.string "Will they cause droughts or downpours\n"
# 1527 "data/maps/SootopolisCity/scripts.pory"
	.string "somewhere else?$"
# 1528 "data/maps/SootopolisCity/scripts.pory"

# 1529 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TwoPokemonArentAngry:
# 1530 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
# 1531 "data/maps/SootopolisCity/scripts.pory"
	.string "the two Pokémon aren't angry.\p"
# 1532 "data/maps/SootopolisCity/scripts.pory"
	.string "I think… They probably can't control\n"
# 1533 "data/maps/SootopolisCity/scripts.pory"
	.string "their own power…$"
# 1534 "data/maps/SootopolisCity/scripts.pory"

# 1535 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FlyingMonStoppedRampage:
# 1536 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying Pokémon came down from\n"
# 1537 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky and stopped the rampaging\l"
# 1538 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon…$"
# 1539 "data/maps/SootopolisCity/scripts.pory"

# 1540 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreatWork:
# 1541 "data/maps/SootopolisCity/scripts.pory"
	.string "That was incredible, {PLAYER}. I've\n"
# 1542 "data/maps/SootopolisCity/scripts.pory"
	.string "never seen such powerful Pokémon\l"
# 1543 "data/maps/SootopolisCity/scripts.pory"
	.string "interacting like that in the wild.\p"
# 1544 "data/maps/SootopolisCity/scripts.pory"
	.string "Anyway, you were pretty incredible\n"
# 1545 "data/maps/SootopolisCity/scripts.pory"
	.string "yourself! I can't believe Drake turned\l"
# 1546 "data/maps/SootopolisCity/scripts.pory"
	.string "out to have his own evil plan all along…\p"
# 1547 "data/maps/SootopolisCity/scripts.pory"
	.string "Thank goodness you were there to\n"
# 1548 "data/maps/SootopolisCity/scripts.pory"
	.string "stop him!\p"
# 1549 "data/maps/SootopolisCity/scripts.pory"
	.string "And I think that friend of mine from\n"
# 1550 "data/maps/SootopolisCity/scripts.pory"
	.string "the Sinnoh region might be a good\l"
# 1551 "data/maps/SootopolisCity/scripts.pory"
	.string "candidate to take his place in the Elite\l"
# 1552 "data/maps/SootopolisCity/scripts.pory"
	.string "Four temporarily.\p" 
# 1553 "data/maps/SootopolisCity/scripts.pory"
	.string "I'll have to talk to Steven and Wallace\n"
# 1554 "data/maps/SootopolisCity/scripts.pory"
	.string "about that.$"
# 1555 "data/maps/SootopolisCity/scripts.pory"

# 1556 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsCrazy:
# 1557 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}! I bumped into Steven in\n"
# 1558 "data/maps/SootopolisCity/scripts.pory"
	.string "Mossdeep soon after you left, and he\l"
# 1559 "data/maps/SootopolisCity/scripts.pory"
	.string "asked that I head here to Sootopolis\l"
# 1560 "data/maps/SootopolisCity/scripts.pory"
	.string "while you went after Team Magma and\l"
# 1561 "data/maps/SootopolisCity/scripts.pory"
	.string "Drake went after Team Aqua.\p"
# 1562 "data/maps/SootopolisCity/scripts.pory"
	.string "By the time I got here, Groudon and\n"
# 1563 "data/maps/SootopolisCity/scripts.pory"
	.string "Kyogre were already facing off!\p"
# 1564 "data/maps/SootopolisCity/scripts.pory"
	.string "What are we going to do? I hope the\n"
# 1565 "data/maps/SootopolisCity/scripts.pory"
	.string "person I called from Sinnoh makes it\l"
# 1566 "data/maps/SootopolisCity/scripts.pory"
	.string "here in time…$"
# 1567 "data/maps/SootopolisCity/scripts.pory"

# 1568 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WonderWhatWorldIsLike:
# 1569 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
# 1570 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder what the world is like on\n"
# 1571 "data/maps/SootopolisCity/scripts.pory"
	.string "the other side of these round walls?\p"
# 1572 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, did I say walls? I meant cliffs…\n"
# 1573 "data/maps/SootopolisCity/scripts.pory"
	.string "Sorry, those titan-sized Pokémon\l"
# 1574 "data/maps/SootopolisCity/scripts.pory"
	.string "really spooked me.$"
# 1575 "data/maps/SootopolisCity/scripts.pory"

# 1576 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsWicked:
# 1577 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1578 "data/maps/SootopolisCity/scripts.pory"
	.string "This is wicked!$"
# 1579 "data/maps/SootopolisCity/scripts.pory"

# 1580 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThatWasWicked:
# 1581 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1582 "data/maps/SootopolisCity/scripts.pory"
	.string "That was wicked!$"
# 1583 "data/maps/SootopolisCity/scripts.pory"

# 1584 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GoRedAndBlueMon:
# 1585 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red Pokémon!\n"
# 1586 "data/maps/SootopolisCity/scripts.pory"
	.string "Don't back off, blue Pokémon!$"
# 1587 "data/maps/SootopolisCity/scripts.pory"

# 1588 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoYouKnowMonNames:
# 1589 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1590 "data/maps/SootopolisCity/scripts.pory"
	.string "Hi, do you know the names of those\n"
# 1591 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon fighting over there?$"
# 1592 "data/maps/SootopolisCity/scripts.pory"

# 1593 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreenOneSettlesThings:
# 1594 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
# 1595 "data/maps/SootopolisCity/scripts.pory"
	.string "the red one or the blue one, but, oh no,\l"
# 1596 "data/maps/SootopolisCity/scripts.pory"
	.string "it's the green one that settles things!\p"
# 1597 "data/maps/SootopolisCity/scripts.pory"
	.string "Talk about a huge turn of events!$"
# 1598 "data/maps/SootopolisCity/scripts.pory"

# 1599 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SeeingLegendWithOwnEyes:
# 1600 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1601 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1602 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between Pokémon.\p"
# 1603 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I'm seeing that happen with\n"
# 1604 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1605 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1606 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1607 "data/maps/SootopolisCity/scripts.pory"

# 1608 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SawLegendWithOwnEyes:
# 1609 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1610 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1611 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between Pokémon.\p"
# 1612 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I saw that happen with\n"
# 1613 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1614 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1615 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1616 "data/maps/SootopolisCity/scripts.pory"

# 1617 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_BigPokemonFighting:
# 1618 "data/maps/SootopolisCity/scripts.pory"
	.string "A big Pokémon is fighting with\n"
# 1619 "data/maps/SootopolisCity/scripts.pory"
	.string "another big Pokémon!\p"
# 1620 "data/maps/SootopolisCity/scripts.pory"
	.string "Please, someone make them stop!$"
# 1621 "data/maps/SootopolisCity/scripts.pory"

# 1622 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PrettyMonCameFromSky:
# 1623 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty Pokémon came down from\n"
# 1624 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky…$"
# 1625 "data/maps/SootopolisCity/scripts.pory"

# 1626 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisWillBeWrecked:
# 1627 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
# 1628 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City will get wrecked!$"
# 1629 "data/maps/SootopolisCity/scripts.pory"

# 1630 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisDidntGetWrecked:
# 1631 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City didn't get wrecked!$"
# 1632 "data/maps/SootopolisCity/scripts.pory"

# 1633 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NoOrdinaryTourist:
# 1634 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
# 1635 "data/maps/SootopolisCity/scripts.pory"
	.string "You've come all the way to Sootopolis?\l"
# 1636 "data/maps/SootopolisCity/scripts.pory"
	.string "You're no ordinary tourist.\p"
# 1637 "data/maps/SootopolisCity/scripts.pory"
	.string "But I suppose that doesn't make you\n"
# 1638 "data/maps/SootopolisCity/scripts.pory"
	.string "an extraordinary tourist, either.$"
# 1639 "data/maps/SootopolisCity/scripts.pory"

# 1640 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CityRegainedCalm:
# 1641 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"
# 1642 "data/maps/SootopolisCity/scripts.pory"

# 1643 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginPleaseLeave:
# 1644 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\p"
# 1645 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the Cave of Origin.\p"
# 1646 "data/maps/SootopolisCity/scripts.pory"
	.string "The spirits of Pokémon, becalmed at\n"
# 1647 "data/maps/SootopolisCity/scripts.pory"
	.string "Mt. Pyre, are said to be revived here.\p"
# 1648 "data/maps/SootopolisCity/scripts.pory"
	.string "Please leave.$"
# 1649 "data/maps/SootopolisCity/scripts.pory"

# 1650 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_LeadSuperiorTrainerToCave:
# 1651 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\n"
# 1652 "data/maps/SootopolisCity/scripts.pory"
	.string "superior talent…\p"
# 1653 "data/maps/SootopolisCity/scripts.pory"
	.string "A trainer who has knowledge and\n"
# 1654 "data/maps/SootopolisCity/scripts.pory"
	.string "experience of many kinds of Pokémon…\p"
# 1655 "data/maps/SootopolisCity/scripts.pory"
	.string "If such a person were to appear, I was\n"
# 1656 "data/maps/SootopolisCity/scripts.pory"
	.string "instructed by Wallace to lead that\l"
# 1657 "data/maps/SootopolisCity/scripts.pory"
	.string "trainer to this Cave.$"
# 1658 "data/maps/SootopolisCity/scripts.pory"

# 1659 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AwakenedPokemonClash:
# 1660 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\p"
# 1661 "data/maps/SootopolisCity/scripts.pory"
	.string "The clash between the two awakened\n"
# 1662 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon was quelled by the awakening\l"
# 1663 "data/maps/SootopolisCity/scripts.pory"
	.string "of a third Pokémon…$"
# 1664 "data/maps/SootopolisCity/scripts.pory"

# 1665 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginSleepsToo:
# 1666 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the Cave of Origin…\p"
# 1667 "data/maps/SootopolisCity/scripts.pory"
	.string "With the passing of the crisis,\n"
# 1668 "data/maps/SootopolisCity/scripts.pory"
	.string "the cave, too, shall sleep…$"
# 1669 "data/maps/SootopolisCity/scripts.pory"

# 1670 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginOpen:
# 1671 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the Cave of Origin…\p"
# 1672 "data/maps/SootopolisCity/scripts.pory"
	.string "Now that you are the Champion, you\n"
# 1673 "data/maps/SootopolisCity/scripts.pory"
	.string "can go inside anytime.$"
# 1674 "data/maps/SootopolisCity/scripts.pory"

# 1675 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisSkyBeautiful:
# 1676 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis sprang up as a town in\n"
# 1677 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano.\p"
# 1678 "data/maps/SootopolisCity/scripts.pory"
	.string "If you look up at the sky, the lip of\n"
# 1679 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater is also visible.\l"
# 1680 "data/maps/SootopolisCity/scripts.pory"
	.string "So, all you see is the sky in a circle.\p"
# 1681 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's what makes the sky above\n"
# 1682 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis the most beautiful.$"
# 1683 "data/maps/SootopolisCity/scripts.pory"

# 1684 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiganticPokemonFight:
# 1685 "data/maps/SootopolisCity/scripts.pory"
	.string "When two Pokémon that gigantic\n"
# 1686 "data/maps/SootopolisCity/scripts.pory"
	.string "are fighting that savagely, there's\l"
# 1687 "data/maps/SootopolisCity/scripts.pory"
	.string "not much that we can do.$"
# 1688 "data/maps/SootopolisCity/scripts.pory"

# 1689 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FearedWorstWhenPokemonFlewDown:
# 1690 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third Pokémon flew down,\n"
# 1691 "data/maps/SootopolisCity/scripts.pory"
	.string "I feared the worst.$"
# 1692 "data/maps/SootopolisCity/scripts.pory"

# 1693 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NightSkyFavoriteScenery:
# 1694 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
# 1695 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano…\p"
# 1696 "data/maps/SootopolisCity/scripts.pory"
	.string "And in that ring, stars flicker and\n"
# 1697 "data/maps/SootopolisCity/scripts.pory"
	.string "blink as if they were alive…\l"
# 1698 "data/maps/SootopolisCity/scripts.pory"
	.string "It's my favorite scenery.$"
# 1699 "data/maps/SootopolisCity/scripts.pory"

# 1700 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WeatherWentWild:
# 1701 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather was clear this morning,\n"
# 1702 "data/maps/SootopolisCity/scripts.pory"
	.string "but…\p"
# 1703 "data/maps/SootopolisCity/scripts.pory"
	.string "All of a sudden, dark clouds brewed up,\n"
# 1704 "data/maps/SootopolisCity/scripts.pory"
	.string "rain started falling in sheets, and\l"
# 1705 "data/maps/SootopolisCity/scripts.pory"
	.string "there was thunder and lightning, too.\p"
# 1706 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather just went completely\n"
# 1707 "data/maps/SootopolisCity/scripts.pory"
	.string "wild!\p"
# 1708 "data/maps/SootopolisCity/scripts.pory"
	.string "Is all of this because of those\n"
# 1709 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon?$"
# 1710 "data/maps/SootopolisCity/scripts.pory"

# 1711 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouBroughtFlyingMon:
# 1712 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
# 1713 "data/maps/SootopolisCity/scripts.pory"
	.string "It was you who brought that flying\n"
# 1714 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon here?\p"
# 1715 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, aren't you amazing!$"
# 1716 "data/maps/SootopolisCity/scripts.pory"

# 1717 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GroudonPleaseStop:
# 1718 "data/maps/SootopolisCity/scripts.pory"
	.string "G… Groudon…\n"
# 1719 "data/maps/SootopolisCity/scripts.pory"
	.string "Please! Stop what you're doing!\p"
# 1720 "data/maps/SootopolisCity/scripts.pory"
	.string "I know the extent of your power now!\p"
# 1721 "data/maps/SootopolisCity/scripts.pory"
	.string "If you keep going, all Hoenn, not just\n"
# 1722 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis, will be utterly ruined!$"
# 1723 "data/maps/SootopolisCity/scripts.pory"

# 1724 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AfterAllOurScheming:
# 1725 "data/maps/SootopolisCity/scripts.pory"
	.string "So the super-ancient Pokémon\n"
# 1726 "data/maps/SootopolisCity/scripts.pory"
	.string "weren't only Groudon and Kyogre…\p"
# 1727 "data/maps/SootopolisCity/scripts.pory"
	.string "After all our fruitless scheming and\n"
# 1728 "data/maps/SootopolisCity/scripts.pory"
	.string "frantic efforts, that one Pokémon's\l"
# 1729 "data/maps/SootopolisCity/scripts.pory"
	.string "simple action puts everything right\l"
# 1730 "data/maps/SootopolisCity/scripts.pory"
	.string "again as if nothing had happened…\p"
# 1731 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I guess it wasn't just Rayquaza, it\n"
# 1732 "data/maps/SootopolisCity/scripts.pory"
	.string "was you too, {PLAYER}.\p"
# 1733 "data/maps/SootopolisCity/scripts.pory"
	.string "I feel like a fool, having played a part\n"
# 1734 "data/maps/SootopolisCity/scripts.pory"
	.string "in this scheme that spiraled so far out\l"
# 1735 "data/maps/SootopolisCity/scripts.pory"
	.string "of control…$"
# 1736 "data/maps/SootopolisCity/scripts.pory"

# 1737 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KyogreCalmDown:
# 1738 "data/maps/SootopolisCity/scripts.pory"
	.string "Kyogre! What's wrong?!\n"
# 1739 "data/maps/SootopolisCity/scripts.pory"
	.string "Calm down! Kyogre!\p"
# 1740 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 1741 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1742 "data/maps/SootopolisCity/scripts.pory"
	.string "It's no good!\n"
# 1743 "data/maps/SootopolisCity/scripts.pory"
	.string "It's not responding at all!$"
# 1744 "data/maps/SootopolisCity/scripts.pory"

# 1745 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TryingMeaninglessToPokemon:
# 1746 "data/maps/SootopolisCity/scripts.pory"
	.string "Kyogre and Groudon both\n"
# 1747 "data/maps/SootopolisCity/scripts.pory"
	.string "flew off to who knows where.\p"
# 1748 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather in Hoenn has returned\n"
# 1749 "data/maps/SootopolisCity/scripts.pory"
	.string "to its normal state…\p"
# 1750 "data/maps/SootopolisCity/scripts.pory"
	.string "I was blinded by my ambition, {PLAYER}.\p"
# 1751 "data/maps/SootopolisCity/scripts.pory"
	.string "I got far too carried away with my\n"
# 1752 "data/maps/SootopolisCity/scripts.pory"
	.string "dream of expanding the sea, I did not\l"
# 1753 "data/maps/SootopolisCity/scripts.pory"
	.string "mean to unleash that much chaos onto\l"
# 1754 "data/maps/SootopolisCity/scripts.pory"
	.string "the world…\p"
# 1755 "data/maps/SootopolisCity/scripts.pory"
	.string "I know we've had many differences in\n"
# 1756 "data/maps/SootopolisCity/scripts.pory"
	.string "such a short time, but I am truly sorry\l"
# 1757 "data/maps/SootopolisCity/scripts.pory"
	.string "for my actions, and am grateful that\l"
# 1758 "data/maps/SootopolisCity/scripts.pory"
	.string "you were able to stop me, {PLAYER}.$"
# 1759 "data/maps/SootopolisCity/scripts.pory"

# 1760 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_InvolvedWithCrisisComeWithMe:
# 1761 "data/maps/SootopolisCity/scripts.pory"
	.string "Those Pokémon fighting…\n"
# 1762 "data/maps/SootopolisCity/scripts.pory"
	.string "Groudon… And Kyogre…\p"
# 1763 "data/maps/SootopolisCity/scripts.pory"
	.string "The two super-ancient Pokémon\n"
# 1764 "data/maps/SootopolisCity/scripts.pory"
	.string "were awakened from a long sleep…\p"
# 1765 "data/maps/SootopolisCity/scripts.pory"
	.string "And now they are smashing each other\n"
# 1766 "data/maps/SootopolisCity/scripts.pory"
	.string "with their uncontrollable energy…\p"
# 1767 "data/maps/SootopolisCity/scripts.pory"
	.string "…{PLAYER}{KUN}.\p"
# 1768 "data/maps/SootopolisCity/scripts.pory"
	.string "You being here now I'll take to mean\n"
# 1769 "data/maps/SootopolisCity/scripts.pory"
	.string "that you're prepared to become even\l"
# 1770 "data/maps/SootopolisCity/scripts.pory"
	.string "more involved in this crisis.\p"
# 1771 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, then, there's someone that\n"
# 1772 "data/maps/SootopolisCity/scripts.pory"
	.string "I'd like you to meet.\p"
# 1773 "data/maps/SootopolisCity/scripts.pory"
	.string "Come with me, please.$"
# 1774 "data/maps/SootopolisCity/scripts.pory"

# 1775 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoesThisMakeYourFearPokemon:
# 1776 "data/maps/SootopolisCity/scripts.pory"
	.string "Listen, {PLAYER}{KUN}.\p"
# 1777 "data/maps/SootopolisCity/scripts.pory"
	.string "Does seeing Groudon and Kyogre make\n"
# 1778 "data/maps/SootopolisCity/scripts.pory"
	.string "you think Pokémon are to be feared?\p"
# 1779 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's not true.\n"
# 1780 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon are really more…\p"
# 1781 "data/maps/SootopolisCity/scripts.pory"
	.string "…Why am I asking you this?\n"
# 1782 "data/maps/SootopolisCity/scripts.pory"
	.string "You already know.$"
# 1783 "data/maps/SootopolisCity/scripts.pory"

# 1784 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HereWereAreHelpWallace:
# 1785 "data/maps/SootopolisCity/scripts.pory"
	.string "Okay, here we are!\p"
# 1786 "data/maps/SootopolisCity/scripts.pory"
	.string "Inside here you'll find someone named\n"
# 1787 "data/maps/SootopolisCity/scripts.pory"
	.string "Wallace.\p"
# 1788 "data/maps/SootopolisCity/scripts.pory"
	.string "I think you have what's needed to\n"
# 1789 "data/maps/SootopolisCity/scripts.pory"
	.string "help him…$"
# 1790 "data/maps/SootopolisCity/scripts.pory"

# 1791 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KnowWhatsNeededToHelpHim:
# 1792 "data/maps/SootopolisCity/scripts.pory"
	.string "I think you have what's\n"
# 1793 "data/maps/SootopolisCity/scripts.pory"
	.string "needed to help him…$"
# 1794 "data/maps/SootopolisCity/scripts.pory"

# 1795 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NeverBeenToSkyPillar:
# 1796 "data/maps/SootopolisCity/scripts.pory"
	.string "The Sky Pillar…\p"
# 1797 "data/maps/SootopolisCity/scripts.pory"
	.string "I've never been there.\n"
# 1798 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder where it could be?$"
# 1799 "data/maps/SootopolisCity/scripts.pory"

# 1800 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SoThatsRayquaza:
# 1801 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}…\p"
# 1802 "data/maps/SootopolisCity/scripts.pory"
	.string "I can't believe that Drake was using us\n"
# 1803 "data/maps/SootopolisCity/scripts.pory"
	.string "for so long like how you described.\p"
# 1804 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm so sorry I didn't see this coming,\n"
# 1805 "data/maps/SootopolisCity/scripts.pory"
	.string "and I wasn't even there to help when he\l"
# 1806 "data/maps/SootopolisCity/scripts.pory"
	.string "captured and utilized Mega Rayquaza…\p"
# 1807 "data/maps/SootopolisCity/scripts.pory"
	.string "It is truly remarkable that you were\n"
# 1808 "data/maps/SootopolisCity/scripts.pory"
	.string "able to defeat him all on your own.\p"
# 1809 "data/maps/SootopolisCity/scripts.pory"
	.string "It's just as Wallace said, you are a hero\n"
# 1810 "data/maps/SootopolisCity/scripts.pory"
	.string "to the people of Hoenn… no, to people\l"
# 1811 "data/maps/SootopolisCity/scripts.pory"
	.string "everywhere!\p"
# 1812 "data/maps/SootopolisCity/scripts.pory"
	.string "Who knows how much destruction could\n"
# 1813 "data/maps/SootopolisCity/scripts.pory"
	.string "have been caused if you hadn't stopped\l"
# 1814 "data/maps/SootopolisCity/scripts.pory"
	.string "Drake and gotten Rayquaza to come\l"
# 1815 "data/maps/SootopolisCity/scripts.pory"
	.string "here?\p"
# 1816 "data/maps/SootopolisCity/scripts.pory"
	.string "You really are a special trainer,\n"
# 1817 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}, and I sincerely thank you.$"
# 1818 "data/maps/SootopolisCity/scripts.pory"

# 1819 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_MaxieArchieLeft:
# 1820 "data/maps/SootopolisCity/scripts.pory"
	.string "It looks like both Maxie and\n"
# 1821 "data/maps/SootopolisCity/scripts.pory"
	.string "Archie have gone away somewhere.\p"
# 1822 "data/maps/SootopolisCity/scripts.pory"
	.string "Perhaps they've gone to Mt. Pyre to\n"
# 1823 "data/maps/SootopolisCity/scripts.pory"
	.string "return those Orbs…\p"
# 1824 "data/maps/SootopolisCity/scripts.pory"
	.string "Anyway! I guess we'll need someone to\n"
# 1825 "data/maps/SootopolisCity/scripts.pory"
	.string "replace Drake in the Elite Four for now,\l"
# 1826 "data/maps/SootopolisCity/scripts.pory"
	.string "and it sounds like your friend Dawn has\l"
# 1827 "data/maps/SootopolisCity/scripts.pory"
	.string "someone in mind who could help us.$"
# 1828 "data/maps/SootopolisCity/scripts.pory"

# 1829 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DawnMaxieArchieLeft:
# 1830 "data/maps/SootopolisCity/scripts.pory"
	.string "Good luck against Juan, {PLAYER}!\n"
# 1831 "data/maps/SootopolisCity/scripts.pory"
	.string "Hopefully my friend from Sinnoh arrives\l"
# 1832 "data/maps/SootopolisCity/scripts.pory"
	.string "before you beat him and blaze your way\l"
# 1833 "data/maps/SootopolisCity/scripts.pory"
	.string "to the Elite Four!$"
# 1834 "data/maps/SootopolisCity/scripts.pory"

# 1835 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HaventYouScaledSkyPillar:
# 1836 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\n"
# 1837 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}?\p"
# 1838 "data/maps/SootopolisCity/scripts.pory"
	.string "Haven't you scaled the Sky Pillar\n"
# 1839 "data/maps/SootopolisCity/scripts.pory"
	.string "yet?\p"
# 1840 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm sure that you can make it to\n"
# 1841 "data/maps/SootopolisCity/scripts.pory"
	.string "the top of the Sky Pillar…$"
# 1842 "data/maps/SootopolisCity/scripts.pory"

# 1843 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AquaMagmaDidntMeanHarm:
# 1844 "data/maps/SootopolisCity/scripts.pory"
	.string "The leaders of Team Magma and Aqua,\n"
# 1845 "data/maps/SootopolisCity/scripts.pory"
	.string "I don't think they meant harm.\p"
# 1846 "data/maps/SootopolisCity/scripts.pory"
	.string "It wouldn't hurt to hear what they\n"
# 1847 "data/maps/SootopolisCity/scripts.pory"
	.string "have to say for themselves.$"
# 1848 "data/maps/SootopolisCity/scripts.pory"

# 1849 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThankYouForHelpAcceptThis:
# 1850 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 1851 "data/maps/SootopolisCity/scripts.pory"
	.string "My eyes didn't deceive me.\p"
# 1852 "data/maps/SootopolisCity/scripts.pory"
	.string "Thanks to your help, Sootopolis…\n"
# 1853 "data/maps/SootopolisCity/scripts.pory"
	.string "No, all of Hoenn was saved.\p"
# 1854 "data/maps/SootopolisCity/scripts.pory"
	.string "On behalf of the people, I thank you.\p"
# 1855 "data/maps/SootopolisCity/scripts.pory"
	.string "This is a gift from me.\n"
# 1856 "data/maps/SootopolisCity/scripts.pory"
	.string "Please accept it.$"
# 1857 "data/maps/SootopolisCity/scripts.pory"

# 1858 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ExplainWaterfallGoToGym:
# 1859 "data/maps/SootopolisCity/scripts.pory"
	.string "That Hidden Machine contains\n"
# 1860 "data/maps/SootopolisCity/scripts.pory"
	.string "Waterfall.\p"
# 1861 "data/maps/SootopolisCity/scripts.pory"
	.string "If you have the Rain Badge, a Pokémon\n"
# 1862 "data/maps/SootopolisCity/scripts.pory"
	.string "that has learned that HM move can\l"
# 1863 "data/maps/SootopolisCity/scripts.pory"
	.string "force its way up waterfalls.\p"
# 1864 "data/maps/SootopolisCity/scripts.pory"
	.string "And where does one get the Rain Badge?\n"
# 1865 "data/maps/SootopolisCity/scripts.pory"
	.string "You know, don't you?\p"
# 1866 "data/maps/SootopolisCity/scripts.pory"
	.string "That's right! You have to beat\n"
# 1867 "data/maps/SootopolisCity/scripts.pory"
	.string "the Sootopolis Gym Leader.\p"
# 1868 "data/maps/SootopolisCity/scripts.pory"
	.string "When you're all set to go, step through\n"
# 1869 "data/maps/SootopolisCity/scripts.pory"
	.string "that door.\p"
# 1870 "data/maps/SootopolisCity/scripts.pory"
	.string "But be warned, my mentor has recently\n"
# 1871 "data/maps/SootopolisCity/scripts.pory"
	.string "changed his style…\p"
# 1872 "data/maps/SootopolisCity/scripts.pory"
	.string "He taught me everything I know about\n"
# 1873 "data/maps/SootopolisCity/scripts.pory"
	.string "Water-type Pokémon, but now, he's\l"
# 1874 "data/maps/SootopolisCity/scripts.pory"
	.string "become a master of the Fairy type!$"
# 1875 "data/maps/SootopolisCity/scripts.pory"

# 1876 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DazzledByMentor:
# 1877 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm sure that you will be\n"
# 1878 "data/maps/SootopolisCity/scripts.pory"
	.string "dazzled by my mentor's breathtakingly\l"
# 1879 "data/maps/SootopolisCity/scripts.pory"
	.string "elegant battle style.\p"
# 1880 "data/maps/SootopolisCity/scripts.pory"
	.string "His Fairy types are already stronger\n"
# 1881 "data/maps/SootopolisCity/scripts.pory"
	.string "than his Water types were!$"
# 1882 "data/maps/SootopolisCity/scripts.pory"

# 1883 "data/maps/SootopolisCity/scripts.pory"
	SootopolisCity_Text_WelcomeBack:
# 1884 "data/maps/SootopolisCity/scripts.pory"
	.string "Wallace: {PLAYER}! You made it back\n"
# 1885 "data/maps/SootopolisCity/scripts.pory"
	.string "safely, I'm so relieved.\p"
# 1886 "data/maps/SootopolisCity/scripts.pory"
	.string "What happened when you made it to the\n"
# 1887 "data/maps/SootopolisCity/scripts.pory"
	.string "top of Sky Pillar?$"
# 1888 "data/maps/SootopolisCity/scripts.pory"

# 1889 "data/maps/SootopolisCity/scripts.pory"

# 1890 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PlayerAnswers:
# 1891 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 1892 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …$"
# 1893 "data/maps/SootopolisCity/scripts.pory"

# 1894 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WallaceCantBelieve:
# 1895 "data/maps/SootopolisCity/scripts.pory"
	.string "Wallace: Oh my…\p"
# 1896 "data/maps/SootopolisCity/scripts.pory"
	.string "I haven't been as involved in this\n"
# 1897 "data/maps/SootopolisCity/scripts.pory"
	.string "crisis as the rest of you, but I do go\l"
# 1898 "data/maps/SootopolisCity/scripts.pory"
	.string "back quite some time with Drake.\p"
# 1899 "data/maps/SootopolisCity/scripts.pory"
	.string "I can't believe he tried to do something\n"
# 1900 "data/maps/SootopolisCity/scripts.pory"
	.string "like that, and I can't believe I wasn't\l"
# 1901 "data/maps/SootopolisCity/scripts.pory"
	.string "there to help you, {PLAYER}.\p"
# 1902 "data/maps/SootopolisCity/scripts.pory"
	.string "However, it appears that you didn't\n"
# 1903 "data/maps/SootopolisCity/scripts.pory"
	.string "need my help, as you foiled his plans all\l"
# 1904 "data/maps/SootopolisCity/scripts.pory"
	.string "on your own!\p"
# 1905 "data/maps/SootopolisCity/scripts.pory"
	.string "For stopping Drake and for bringing\n"
# 1906 "data/maps/SootopolisCity/scripts.pory"
	.string "Rayquaza here to quell the rage of the\l"
# 1907 "data/maps/SootopolisCity/scripts.pory"
	.string "other super-ancient Pokémon, you have\l"
# 1908 "data/maps/SootopolisCity/scripts.pory"
	.string "my sincere gratitude, {PLAYER}!$"
# 1909 "data/maps/SootopolisCity/scripts.pory"

# 1910 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouAreAHero:
# 1911 "data/maps/SootopolisCity/scripts.pory"
	.string "You are nothing short of a hero to the\n"
# 1912 "data/maps/SootopolisCity/scripts.pory"
	.string "entire Hoenn region!$"
# 1913 "data/maps/SootopolisCity/scripts.pory"

# 1914 "data/maps/SootopolisCity/scripts.pory"

# 1915 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_TextRambled:
# 1916 "data/maps/SootopolisCity/scripts.pory"
	.string "Wallace: I've rambled long enough, I'm\n"
# 1917 "data/maps/SootopolisCity/scripts.pory"
	.string "sure you're curious to hear what\l"
# 1918 "data/maps/SootopolisCity/scripts.pory"
	.string "everyone else here has to say!$"

SootopolisCity_EventScript_SetExpertBlockCaveEntrance::
# 1922 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, SootopolisCity_EventScript_SetExpertBlockCaveEntrance_2
# 1928 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 1929 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_EXPERT, MOVEMENT_TYPE_FACE_RIGHT
SootopolisCity_EventScript_SetExpertBlockCaveEntrance_1:
	return

SootopolisCity_EventScript_SetExpertBlockCaveEntrance_2:
# 1924 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 31, 18
	goto SootopolisCity_EventScript_SetExpertBlockCaveEntrance_1

