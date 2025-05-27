# 1 "data/maps/Route111/scripts.pory"

# 2 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTOR, 1
# 3 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTORIA, 2
# 4 "data/maps/Route111/scripts.pory"
.set LOCALID_VIVI, 3
# 5 "data/maps/Route111/scripts.pory"
.set LOCALID_VICKY, 4
# 6 "data/maps/Route111/scripts.pory"
.set LOCALID_ROCK_SMASH_MAN, 46
# 7 "data/maps/Route111/scripts.pory"
.set LOCALID_DAWN, 47
# 8 "data/maps/Route111/scripts.pory"

# 9 "data/maps/Route111/scripts.pory"
@ Note: LOCALID_ROUTE111_PLAYER_FALLING is a local id for this map used elsewhere. It's defined in event_objects.h
# 10 "data/maps/Route111/scripts.pory"

# 11 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 12 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 13 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 14 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 15 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 16 "data/maps/Route111/scripts.pory"
	.byte 0
# 17 "data/maps/Route111/scripts.pory"

# 18 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 19 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_BADGE06_GET, Route111_EventScript_CloseDesertRuins
# 20 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 21 "data/maps/Route111/scripts.pory"
	end
# 22 "data/maps/Route111/scripts.pory"

# 23 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 24 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 25 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 26 "data/maps/Route111/scripts.pory"
	return
# 27 "data/maps/Route111/scripts.pory"

# 28 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 29 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 30 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 31 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 32 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 33 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 34 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 35 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 36 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 37 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 38 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 39 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 40 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 41 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 42 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 43 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 44 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 45 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 46 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 47 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 48 "data/maps/Route111/scripts.pory"
	return
# 49 "data/maps/Route111/scripts.pory"

# 50 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 51 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 52 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 53 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 54 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 55 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 56 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 57 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 58 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 59 "data/maps/Route111/scripts.pory"
	end
# 60 "data/maps/Route111/scripts.pory"

# 61 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 62 "data/maps/Route111/scripts.pory"
	checkplayergender
# 63 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 64 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 65 "data/maps/Route111/scripts.pory"
	return
# 66 "data/maps/Route111/scripts.pory"

# 67 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 68 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 69 "data/maps/Route111/scripts.pory"
	return
# 70 "data/maps/Route111/scripts.pory"

# 71 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 72 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 73 "data/maps/Route111/scripts.pory"
	return
# 74 "data/maps/Route111/scripts.pory"

# 75 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 76 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 77 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 78 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 79 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 80 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 81 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 82 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 83 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 84 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 85 "data/maps/Route111/scripts.pory"
	return
# 86 "data/maps/Route111/scripts.pory"

# 87 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 88 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 89 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 90 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 91 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 92 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 93 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 94 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 95 "data/maps/Route111/scripts.pory"
	end
# 96 "data/maps/Route111/scripts.pory"

# 97 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 98 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 99 "data/maps/Route111/scripts.pory"
	return
# 100 "data/maps/Route111/scripts.pory"

# 101 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 102 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 103 "data/maps/Route111/scripts.pory"
	return
# 104 "data/maps/Route111/scripts.pory"

# 105 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 106 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 107 "data/maps/Route111/scripts.pory"
	.2byte 0
# 108 "data/maps/Route111/scripts.pory"

# 109 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 110 "data/maps/Route111/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 111 "data/maps/Route111/scripts.pory"
	end
# 112 "data/maps/Route111/scripts.pory"

# 113 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 114 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 115 "data/maps/Route111/scripts.pory"
	.2byte 0
# 116 "data/maps/Route111/scripts.pory"

# 117 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 118 "data/maps/Route111/scripts.pory"
	lockall
# 119 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 120 "data/maps/Route111/scripts.pory"
	waitstate
# 121 "data/maps/Route111/scripts.pory"
	delay 24
# 122 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 123 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 124 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 125 "data/maps/Route111/scripts.pory"
	waitstate
# 126 "data/maps/Route111/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 127 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 128 "data/maps/Route111/scripts.pory"
	delay 16
# 129 "data/maps/Route111/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 130 "data/maps/Route111/scripts.pory"
	delay 16
# 131 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 132 "data/maps/Route111/scripts.pory"
	waitstate
# 133 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 134 "data/maps/Route111/scripts.pory"
	waitstate
# 135 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 136 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 137 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 138 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 139 "data/maps/Route111/scripts.pory"
	releaseall
# 140 "data/maps/Route111/scripts.pory"
	end
# 141 "data/maps/Route111/scripts.pory"

# 142 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 143 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 144 "data/maps/Route111/scripts.pory"
	releaseall
# 145 "data/maps/Route111/scripts.pory"
	end
# 146 "data/maps/Route111/scripts.pory"

# 147 "data/maps/Route111/scripts.pory"
@ Unused
# 148 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 149 "data/maps/Route111/scripts.pory"
	lock_anim
# 150 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 151 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 152 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 153 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 154 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 155 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 156 "data/maps/Route111/scripts.pory"
	step_end
# 157 "data/maps/Route111/scripts.pory"

# 158 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 159 "data/maps/Route111/scripts.pory"
	lock
# 160 "data/maps/Route111/scripts.pory"
	faceplayer
# 161 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 162 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 163 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 164 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 165 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 166 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 167 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 168 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 169 "data/maps/Route111/scripts.pory"
	release
# 170 "data/maps/Route111/scripts.pory"
	end
# 171 "data/maps/Route111/scripts.pory"

# 172 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 173 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 174 "data/maps/Route111/scripts.pory"
	release
# 175 "data/maps/Route111/scripts.pory"
	end
# 176 "data/maps/Route111/scripts.pory"

# 177 "data/maps/Route111/scripts.pory"
@ Unused
# 178 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 179 "data/maps/Route111/scripts.pory"
	lockall
# 180 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 181 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 182 "data/maps/Route111/scripts.pory"
	end
# 183 "data/maps/Route111/scripts.pory"

# 184 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 185 "data/maps/Route111/scripts.pory"
	lockall
# 186 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 187 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 188 "data/maps/Route111/scripts.pory"
	end
# 189 "data/maps/Route111/scripts.pory"

# 190 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 191 "data/maps/Route111/scripts.pory"
	lockall
# 192 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 193 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 194 "data/maps/Route111/scripts.pory"
	end
# 195 "data/maps/Route111/scripts.pory"

# 196 "data/maps/Route111/scripts.pory"
@ Unused
# 197 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 198 "data/maps/Route111/scripts.pory"
	lockall
# 199 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 200 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 201 "data/maps/Route111/scripts.pory"
	end
# 202 "data/maps/Route111/scripts.pory"

# 203 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 204 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 205 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 206 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 207 "data/maps/Route111/scripts.pory"
	releaseall
# 208 "data/maps/Route111/scripts.pory"
	end
# 209 "data/maps/Route111/scripts.pory"

# 210 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 211 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 212 "data/maps/Route111/scripts.pory"
	closemessage
# 213 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 214 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 215 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 216 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 217 "data/maps/Route111/scripts.pory"
	releaseall
# 218 "data/maps/Route111/scripts.pory"
	end
# 219 "data/maps/Route111/scripts.pory"

# 220 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 221 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 222 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 223 "data/maps/Route111/scripts.pory"
	return
# 224 "data/maps/Route111/scripts.pory"

# 225 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 226 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 227 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 228 "data/maps/Route111/scripts.pory"
	return
# 229 "data/maps/Route111/scripts.pory"

# 230 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 231 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 232 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 233 "data/maps/Route111/scripts.pory"
	return
# 234 "data/maps/Route111/scripts.pory"

# 235 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 236 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 237 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 238 "data/maps/Route111/scripts.pory"
	return
# 239 "data/maps/Route111/scripts.pory"

# 240 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 241 "data/maps/Route111/scripts.pory"
	walk_up
# 242 "data/maps/Route111/scripts.pory"
	step_end
# 243 "data/maps/Route111/scripts.pory"

# 244 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 245 "data/maps/Route111/scripts.pory"
	walk_down
# 246 "data/maps/Route111/scripts.pory"
	step_end
# 247 "data/maps/Route111/scripts.pory"

# 248 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 249 "data/maps/Route111/scripts.pory"
	walk_left
# 250 "data/maps/Route111/scripts.pory"
	step_end
# 251 "data/maps/Route111/scripts.pory"

# 252 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 253 "data/maps/Route111/scripts.pory"
	walk_right
# 254 "data/maps/Route111/scripts.pory"
	step_end
# 255 "data/maps/Route111/scripts.pory"

# 256 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 257 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 258 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 259 "data/maps/Route111/scripts.pory"
	doweather
# 260 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 261 "data/maps/Route111/scripts.pory"
	end
# 262 "data/maps/Route111/scripts.pory"

# 263 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 264 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 265 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 266 "data/maps/Route111/scripts.pory"
	doweather
# 267 "data/maps/Route111/scripts.pory"
	end
# 268 "data/maps/Route111/scripts.pory"

# 269 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 270 "data/maps/Route111/scripts.pory"
	lock
# 271 "data/maps/Route111/scripts.pory"
	faceplayer
# 272 "data/maps/Route111/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Route111_EventScript_ComeBackLater
# 273 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 274 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 275 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 276 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 277 "data/maps/Route111/scripts.pory"
	release
# 278 "data/maps/Route111/scripts.pory"
	end
# 279 "data/maps/Route111/scripts.pory"

# 280 "data/maps/Route111/scripts.pory"
Route111_EventScript_ComeBackLater::
# 281 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldGetStronger, MSGBOX_DEFAULT
# 282 "data/maps/Route111/scripts.pory"
	release
# 283 "data/maps/Route111/scripts.pory"
	end
# 284 "data/maps/Route111/scripts.pory"

# 285 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 286 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 287 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 288 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 289 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 290 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 291 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 292 "data/maps/Route111/scripts.pory"
	closemessage
# 293 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Route111_Movement_WinstrateEnterHouse
# 294 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 295 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTOR
# 296 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 297 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 298 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 299 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 300 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICTORIA
# 301 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateExitHouse
# 302 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 303 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 304 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 305 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 306 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 307 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 308 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 309 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 310 "data/maps/Route111/scripts.pory"
	closemessage
# 311 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 312 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 313 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTORIA
# 314 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 315 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 316 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 317 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 318 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VIVI
# 319 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateExitHouse
# 320 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 321 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 322 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 323 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 324 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterUp
# 325 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 326 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 327 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 328 "data/maps/Route111/scripts.pory"
	closemessage
# 329 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateEnterHouse
# 330 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 331 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VIVI
# 332 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 333 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 334 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 335 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 336 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICKY
# 337 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateExitHouse
# 338 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 339 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 340 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 341 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 342 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 343 "data/maps/Route111/scripts.pory"
	closemessage
# 344 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterUp
# 345 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 346 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 347 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateEnterHouse
# 348 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 349 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICKY
# 350 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 351 "data/maps/Route111/scripts.pory"
	release
# 352 "data/maps/Route111/scripts.pory"
	end
# 353 "data/maps/Route111/scripts.pory"

# 354 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 355 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 356 "data/maps/Route111/scripts.pory"
	waitdooranim
# 357 "data/maps/Route111/scripts.pory"
	return
# 358 "data/maps/Route111/scripts.pory"

# 359 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 360 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 361 "data/maps/Route111/scripts.pory"
	waitdooranim
# 362 "data/maps/Route111/scripts.pory"
	return
# 363 "data/maps/Route111/scripts.pory"

# 364 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 365 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 366 "data/maps/Route111/scripts.pory"
	walk_up
# 367 "data/maps/Route111/scripts.pory"
	step_end
# 368 "data/maps/Route111/scripts.pory"

# 369 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 370 "data/maps/Route111/scripts.pory"
	walk_down
# 371 "data/maps/Route111/scripts.pory"
	step_end
# 372 "data/maps/Route111/scripts.pory"

# 373 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 374 "data/maps/Route111/scripts.pory"
	delay_16
# 375 "data/maps/Route111/scripts.pory"
	delay_16
# 376 "data/maps/Route111/scripts.pory"
	delay_16
# 377 "data/maps/Route111/scripts.pory"
	step_end
# 378 "data/maps/Route111/scripts.pory"

# 379 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 380 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 381 "data/maps/Route111/scripts.pory"
	end
# 382 "data/maps/Route111/scripts.pory"

# 383 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 384 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 385 "data/maps/Route111/scripts.pory"
	end
# 386 "data/maps/Route111/scripts.pory"

# 387 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 388 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 389 "data/maps/Route111/scripts.pory"
	end
# 390 "data/maps/Route111/scripts.pory"

# 391 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 392 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 393 "data/maps/Route111/scripts.pory"
	end
# 394 "data/maps/Route111/scripts.pory"

# 395 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 396 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 397 "data/maps/Route111/scripts.pory"
	end
# 398 "data/maps/Route111/scripts.pory"

# 399 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 400 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 401 "data/maps/Route111/scripts.pory"
	end
# 402 "data/maps/Route111/scripts.pory"

# 403 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 404 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 405 "data/maps/Route111/scripts.pory"
	end
# 406 "data/maps/Route111/scripts.pory"

# 407 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 408 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 409 "data/maps/Route111/scripts.pory"
	end
# 410 "data/maps/Route111/scripts.pory"

# 411 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 412 "data/maps/Route111/scripts.pory"
	lock
# 413 "data/maps/Route111/scripts.pory"
	faceplayer
# 414 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 415 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 416 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 417 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 418 "data/maps/Route111/scripts.pory"
	release
# 419 "data/maps/Route111/scripts.pory"
	end
# 420 "data/maps/Route111/scripts.pory"

# 421 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 422 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 423 "data/maps/Route111/scripts.pory"
	release
# 424 "data/maps/Route111/scripts.pory"
	end
# 425 "data/maps/Route111/scripts.pory"

# 426 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 427 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 428 "data/maps/Route111/scripts.pory"
	release
# 429 "data/maps/Route111/scripts.pory"
	end
# 430 "data/maps/Route111/scripts.pory"

# 431 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 432 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 433 "data/maps/Route111/scripts.pory"
	release
# 434 "data/maps/Route111/scripts.pory"
	end
# 435 "data/maps/Route111/scripts.pory"

# 436 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 437 "data/maps/Route111/scripts.pory"
	lockall
# 438 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 439 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 440 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 441 "data/maps/Route111/scripts.pory"
	closemessage
# 442 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 443 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 444 "data/maps/Route111/scripts.pory"
	releaseall
# 445 "data/maps/Route111/scripts.pory"
	end
# 446 "data/maps/Route111/scripts.pory"

# 447 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 448 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 449 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 450 "data/maps/Route111/scripts.pory"
	end
# 451 "data/maps/Route111/scripts.pory"

# 452 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 453 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 454 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 455 "data/maps/Route111/scripts.pory"
	end
# 456 "data/maps/Route111/scripts.pory"

# 457 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 458 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 459 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 460 "data/maps/Route111/scripts.pory"
	end
# 461 "data/maps/Route111/scripts.pory"

# 462 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 463 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 464 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 465 "data/maps/Route111/scripts.pory"
	end
# 466 "data/maps/Route111/scripts.pory"

# 467 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 468 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 469 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 470 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 471 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 472 "data/maps/Route111/scripts.pory"
	release
# 473 "data/maps/Route111/scripts.pory"
	end
# 474 "data/maps/Route111/scripts.pory"

# 475 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 476 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 477 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 478 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 479 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 480 "data/maps/Route111/scripts.pory"
	release
# 481 "data/maps/Route111/scripts.pory"
	end
# 482 "data/maps/Route111/scripts.pory"

# 483 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 484 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 485 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 486 "data/maps/Route111/scripts.pory"
	end
# 487 "data/maps/Route111/scripts.pory"

# 488 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 489 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 490 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 491 "data/maps/Route111/scripts.pory"
	end
# 492 "data/maps/Route111/scripts.pory"

# 493 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 494 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 495 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 496 "data/maps/Route111/scripts.pory"
	end
# 497 "data/maps/Route111/scripts.pory"

# 498 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 499 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 500 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 501 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 502 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 503 "data/maps/Route111/scripts.pory"
	release
# 504 "data/maps/Route111/scripts.pory"
	end
# 505 "data/maps/Route111/scripts.pory"

# 506 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 507 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 508 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 509 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 510 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 511 "data/maps/Route111/scripts.pory"
	release
# 512 "data/maps/Route111/scripts.pory"
	end
# 513 "data/maps/Route111/scripts.pory"

# 514 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 515 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 516 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 517 "data/maps/Route111/scripts.pory"
	end
# 518 "data/maps/Route111/scripts.pory"

# 519 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 520 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 521 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 522 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 523 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 524 "data/maps/Route111/scripts.pory"
	release
# 525 "data/maps/Route111/scripts.pory"
	end
# 526 "data/maps/Route111/scripts.pory"

# 527 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 528 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 529 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 530 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 531 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 532 "data/maps/Route111/scripts.pory"
	release
# 533 "data/maps/Route111/scripts.pory"
	end
# 534 "data/maps/Route111/scripts.pory"

# 535 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 536 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 537 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 538 "data/maps/Route111/scripts.pory"
	end
# 539 "data/maps/Route111/scripts.pory"

# 540 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 541 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 542 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 543 "data/maps/Route111/scripts.pory"
	end
# 544 "data/maps/Route111/scripts.pory"

# 545 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 546 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 547 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 548 "data/maps/Route111/scripts.pory"
	end
# 549 "data/maps/Route111/scripts.pory"

# 550 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 551 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 552 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 553 "data/maps/Route111/scripts.pory"
	end
# 554 "data/maps/Route111/scripts.pory"

# 555 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 556 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 557 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 558 "data/maps/Route111/scripts.pory"
	end
# 559 "data/maps/Route111/scripts.pory"

# 560 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 561 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 562 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 563 "data/maps/Route111/scripts.pory"
	end
# 564 "data/maps/Route111/scripts.pory"

# 565 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 566 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhereTheHellAmI, MSGBOX_NPC
# 567 "data/maps/Route111/scripts.pory"
	end
# 568 "data/maps/Route111/scripts.pory"

# 569 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 570 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 571 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 572 "data/maps/Route111/scripts.pory"
	end
# 573 "data/maps/Route111/scripts.pory"

# 574 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 575 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 576 "data/maps/Route111/scripts.pory"
	end
# 577 "data/maps/Route111/scripts.pory"

# 578 "data/maps/Route111/scripts.pory"
Route111_Text_WhereTheHellAmI:
# 579 "data/maps/Route111/scripts.pory"
	.string "WHERE THE HELL AM I?!$"
# 580 "data/maps/Route111/scripts.pory"

# 581 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 582 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 583 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 584 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 585 "data/maps/Route111/scripts.pory"
	.string "Pokémon battles?$"
# 586 "data/maps/Route111/scripts.pory"

# 587 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 588 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 589 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 590 "data/maps/Route111/scripts.pory"

# 591 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldGetStronger:
# 592 "data/maps/Route111/scripts.pory"
	.string "Hmm… Maybe you should get a little\n"
# 593 "data/maps/Route111/scripts.pory"
	.string "stronger before you take on the family.\p"
# 594 "data/maps/Route111/scripts.pory"
	.string "If you can show me the Heat Badge, then\n"
# 595 "data/maps/Route111/scripts.pory"
	.string "I'll know you're strong enough.$"
# 596 "data/maps/Route111/scripts.pory"

# 597 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 598 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 599 "data/maps/Route111/scripts.pory"

# 600 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 601 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 602 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 603 "data/maps/Route111/scripts.pory"

# 604 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 605 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 606 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 607 "data/maps/Route111/scripts.pory"

# 608 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 609 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 610 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 611 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 612 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 613 "data/maps/Route111/scripts.pory"

# 614 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 615 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 616 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 617 "data/maps/Route111/scripts.pory"

# 618 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 619 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 620 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 621 "data/maps/Route111/scripts.pory"

# 622 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 623 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 624 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 625 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 626 "data/maps/Route111/scripts.pory"

# 627 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 628 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 629 "data/maps/Route111/scripts.pory"

# 630 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 631 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 632 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 633 "data/maps/Route111/scripts.pory"

# 634 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 635 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 636 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 637 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 638 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 639 "data/maps/Route111/scripts.pory"

# 640 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 641 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 642 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 643 "data/maps/Route111/scripts.pory"

# 644 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 645 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 646 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 647 "data/maps/Route111/scripts.pory"

# 648 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 649 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your Pokémon some\n"
# 650 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 651 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 652 "data/maps/Route111/scripts.pory"
	.string "I've heard the Pokémon LEAGUE's\n"
# 653 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 654 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 655 "data/maps/Route111/scripts.pory"

# 656 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 657 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 658 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 659 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 660 "data/maps/Route111/scripts.pory"

# 661 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 662 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 663 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 664 "data/maps/Route111/scripts.pory"

# 665 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 666 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 667 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 668 "data/maps/Route111/scripts.pory"

# 669 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 670 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 671 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 672 "data/maps/Route111/scripts.pory"

# 673 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 674 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 675 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 676 "data/maps/Route111/scripts.pory"

# 677 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 678 "data/maps/Route111/scripts.pory"
	.string "TAKE THE EGG I HAVE$"
# 679 "data/maps/Route111/scripts.pory"

# 680 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 681 "data/maps/Route111/scripts.pory"
	.string "Trainer Tips\p"
# 682 "data/maps/Route111/scripts.pory"
	.string "You can press the “A” button while\n"
# 683 "data/maps/Route111/scripts.pory"
	.string "viewing a Pokémon's stats in the\l"
# 684 "data/maps/Route111/scripts.pory"
	.string "summary screen to view data about\l"
# 685 "data/maps/Route111/scripts.pory"
	.string "their EVs and IVs as well.$"
# 686 "data/maps/Route111/scripts.pory"

# 687 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 688 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 689 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 690 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 691 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 692 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 693 "data/maps/Route111/scripts.pory"

# 694 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 695 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 696 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 697 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 698 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 699 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 700 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 701 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 702 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 703 "data/maps/Route111/scripts.pory"

# 704 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 705 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 706 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 707 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 708 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 709 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 710 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 711 "data/maps/Route111/scripts.pory"

# 712 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 713 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 714 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 715 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 716 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 717 "data/maps/Route111/scripts.pory"

# 718 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 719 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 720 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 721 "data/maps/Route111/scripts.pory"

# 722 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 723 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 724 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 725 "data/maps/Route111/scripts.pory"

# 726 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 727 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 728 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 729 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 730 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 731 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 732 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 733 "data/maps/Route111/scripts.pory"

# 734 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 735 "data/maps/Route111/scripts.pory"
	.string "TRAINER HILL\n"
# 736 "data/maps/Route111/scripts.pory"
	.string "UNDER DEVELOPMENT$"

Route111_EventScript_DawnTrigger1::
# 741 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8008, 1
# 742 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_DawnScene
	end


Route111_EventScript_DawnTrigger2::
# 748 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8008, 2
# 749 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_DawnScene
	end


Route111_EventScript_DawnTrigger3::
# 754 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8008, 3
# 755 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_DawnScene
	end


Route111_EventScript_DawnTrigger4::
# 761 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8008, 4
# 762 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_DawnScene
	end


Route111_EventScript_DawnScene::
# 768 "data/maps/Route111/scripts.pory"
	lockall
# 769 "data/maps/Route111/scripts.pory"
	call Route104_EventScript_PlayDawnMusic
# 770 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_WalkInPlaceFasterDown
# 771 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 772 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_ExclamationMark
# 773 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 774 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_Delay48
# 775 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 776 "data/maps/Route111/scripts.pory"
	delay 30
# 777 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route111_EventScript_DawnApproachPlayer1
# 778 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route111_EventScript_DawnApproachPlayer2
# 779 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route111_EventScript_DawnApproachPlayer3
# 780 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route111_EventScript_DawnApproachPlayer4
# 781 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_DawnRivalBattle
# 782 "data/maps/Route111/scripts.pory"
	releaseall
	end


Route111_EventScript_DawnRivalBattle::
# 787 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_Dawn_Greeting
# 788 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWN_ROUTE_111, Route111_Text_Dawn_Defeated
# 789 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_DawnDefeated
	end


Route111_EventScript_DawnDefeated::
# 794 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_Dawn_MagmaAndAqua
# 795 "data/maps/Route111/scripts.pory"
	giveitem ITEM_TM_ROOST
# 796 "data/maps/Route111/scripts.pory"
	giveitem ITEM_TM_SCALD
# 797 "data/maps/Route111/scripts.pory"
	giveitem ITEM_TM_FLASH_CANNON
# 798 "data/maps/Route111/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 999
# 799 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DawnGoodbye
# 800 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_DawnExit
	end


Route111_EventScript_DawnApproachPlayer1::
# 807 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_DAWN, Route111_Movement_DawnApproachPlayer1
# 808 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 809 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_FaceDawn1
# 810 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_Movement_FaceDawn1::
# 815 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_right
# 816 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_Movement_FaceDawn2::
# 820 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_left
# 821 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_Movement_DawnApproachPlayer1::
# 825 "data/maps/Route111/scripts.pory"
	walk_down
# 826 "data/maps/Route111/scripts.pory"
	walk_down
# 827 "data/maps/Route111/scripts.pory"
	walk_left
# 828 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_EventScript_DawnApproachPlayer2::
# 832 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_DAWN, Route111_Movement_DawnApproachPlayer2
# 833 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 834 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_FaceDawn1
# 835 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_Movement_DawnApproachPlayer2::
# 840 "data/maps/Route111/scripts.pory"
	walk_down
# 841 "data/maps/Route111/scripts.pory"
	walk_down
# 842 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_left
# 843 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_EventScript_DawnApproachPlayer3::
# 847 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_DAWN, Route111_Movement_DawnApproachPlayer3
# 848 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_Movement_DawnApproachPlayer3::
# 853 "data/maps/Route111/scripts.pory"
	walk_down
# 854 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_EventScript_DawnApproachPlayer4::
# 858 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_DAWN, Route111_Movement_DawnApproachPlayer4
# 859 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 860 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_FaceDawn2
# 861 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_Movement_DawnApproachPlayer4::
# 866 "data/maps/Route111/scripts.pory"
	walk_down
# 867 "data/maps/Route111/scripts.pory"
	walk_down
# 868 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_right
# 869 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_EventScript_DawnExit::
# 873 "data/maps/Route111/scripts.pory"
	closemessage
# 874 "data/maps/Route111/scripts.pory"
	delay 45
# 875 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route111_EventScript_ApplyMovementDawn1
# 876 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route111_EventScript_ApplyMovementDawn2
# 877 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route111_EventScript_ApplyMovementDawn3
# 878 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route111_EventScript_ApplyMovementDawn4
# 879 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_DAWN
# 880 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAWN_111
# 881 "data/maps/Route111/scripts.pory"
	setvar VAR_FOUGHT_DAWN_111, 1
# 882 "data/maps/Route111/scripts.pory"
	savebgm MUS_DUMMY
# 883 "data/maps/Route111/scripts.pory"
	fadedefaultbgm
# 884 "data/maps/Route111/scripts.pory"
	releaseall
	end


Route111_EventScript_ApplyMovementDawn1::
# 922 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_DAWN, Route111_EventScript_DawnExit1
# 923 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_EventScript_DawnExit1::
# 928 "data/maps/Route111/scripts.pory"
	walk_down
# 929 "data/maps/Route111/scripts.pory"
	walk_down
# 930 "data/maps/Route111/scripts.pory"
	walk_down
# 931 "data/maps/Route111/scripts.pory"
	walk_down
# 932 "data/maps/Route111/scripts.pory"
	walk_down
# 933 "data/maps/Route111/scripts.pory"
	walk_down
# 934 "data/maps/Route111/scripts.pory"
	walk_down
# 935 "data/maps/Route111/scripts.pory"
	walk_down
# 936 "data/maps/Route111/scripts.pory"
	walk_down
# 937 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_EventScript_ApplyMovementDawn2::
# 941 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_DAWN, Route111_EventScript_DawnExit2
# 942 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_EventScript_DawnExit2::
# 947 "data/maps/Route111/scripts.pory"
	walk_down
# 948 "data/maps/Route111/scripts.pory"
	walk_down
# 949 "data/maps/Route111/scripts.pory"
	walk_down
# 950 "data/maps/Route111/scripts.pory"
	walk_down
# 951 "data/maps/Route111/scripts.pory"
	walk_down
# 952 "data/maps/Route111/scripts.pory"
	walk_down
# 953 "data/maps/Route111/scripts.pory"
	walk_down
# 954 "data/maps/Route111/scripts.pory"
	walk_down
# 955 "data/maps/Route111/scripts.pory"
	walk_down
# 956 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_EventScript_ApplyMovementDawn3::
# 960 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_DAWN, Route111_EventScript_DawnExit3
# 961 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_EventScript_DawnExit3::
# 966 "data/maps/Route111/scripts.pory"
	walk_right
# 967 "data/maps/Route111/scripts.pory"
	walk_down
# 968 "data/maps/Route111/scripts.pory"
	walk_down
# 969 "data/maps/Route111/scripts.pory"
	walk_down
# 970 "data/maps/Route111/scripts.pory"
	walk_down
# 971 "data/maps/Route111/scripts.pory"
	walk_down
# 972 "data/maps/Route111/scripts.pory"
	walk_down
# 973 "data/maps/Route111/scripts.pory"
	walk_down
# 974 "data/maps/Route111/scripts.pory"
	walk_down
# 975 "data/maps/Route111/scripts.pory"
	walk_down
# 976 "data/maps/Route111/scripts.pory"
	walk_down
# 977 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_EventScript_ApplyMovementDawn4::
# 981 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_DAWN, Route111_EventScript_DawnExit4
# 982 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_EventScript_DawnExit4::
# 987 "data/maps/Route111/scripts.pory"
	walk_down
# 988 "data/maps/Route111/scripts.pory"
	walk_down
# 989 "data/maps/Route111/scripts.pory"
	walk_down
# 990 "data/maps/Route111/scripts.pory"
	walk_down
# 991 "data/maps/Route111/scripts.pory"
	walk_down
# 992 "data/maps/Route111/scripts.pory"
	walk_down
# 993 "data/maps/Route111/scripts.pory"
	walk_down
# 994 "data/maps/Route111/scripts.pory"
	walk_down
# 995 "data/maps/Route111/scripts.pory"
	walk_down
# 996 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_Trigger_BlockTrainerHillEntrance::
# 1001 "data/maps/Route111/scripts.pory"
	lockall
# 1002 "data/maps/Route111/scripts.pory"
	msgbox TrainerHillDev
# 1003 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 1004 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 1005 "data/maps/Route111/scripts.pory"
	releaseall
	end


Route111_EventScript_Daisuke::
# 1017 "data/maps/Route111/scripts.pory"
	lockall
# 1018 "data/maps/Route111/scripts.pory"
	applymovement 30, Common_Movement_FacePlayer
# 1019 "data/maps/Route111/scripts.pory"
	goto_if_defeated TRAINER_DAISUKE, Route111_EventScript_DaisukeDefeated
# 1020 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route111_EventScript_DaisukeRequestBattleAgain
# 1021 "data/maps/Route111/scripts.pory"
	msgbox Daisuke_Greeting, MSGBOX_YESNO
# 1022 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_BattleDaisukePrompt
	end


Route111_EventScript_DaisukeRequestBattleAgain::
# 1027 "data/maps/Route111/scripts.pory"
	msgbox Daisuke_ReadyYet, MSGBOX_YESNO
# 1028 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_BattleDaisukePrompt
	end


Route111_EventScript_BattleDaisukePrompt::
# 1033 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route111_EventScript_BattleDaisuke
# 1034 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route111_EventScript_DeclineDaisukeBattle
# 1035 "data/maps/Route111/scripts.pory"
	closemessage
	end


Route111_EventScript_DeclineDaisukeBattle::
# 1040 "data/maps/Route111/scripts.pory"
	setflag FLAG_TEMP_1
# 1041 "data/maps/Route111/scripts.pory"
	msgbox Daisuke_ComeBackWhenReady, MSGBOX_DEFAULT
# 1042 "data/maps/Route111/scripts.pory"
	release
	end


Route111_EventScript_BattleDaisuke::
# 1047 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_BattleDaisuke_Text_0, MSGBOX_DEFAULT
# 1048 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_DAISUKE, Daisuke_Outro
# 1049 "data/maps/Route111/scripts.pory"
	giveitem ITEM_PROTECTIVE_PADS
# 1050 "data/maps/Route111/scripts.pory"
	giveitem ITEM_PUNCHING_GLOVE
# 1051 "data/maps/Route111/scripts.pory"
	giveitem ITEM_KICKING_SHOES
# 1052 "data/maps/Route111/scripts.pory"
	giveitem ITEM_LOADED_DICE
# 1053 "data/maps/Route111/scripts.pory"
	msgbox Daisuke_ExplainItems, MSGBOX_DEFAULT
# 1054 "data/maps/Route111/scripts.pory"
	release
	end


Route111_EventScript_DaisukeDefeated::
# 1060 "data/maps/Route111/scripts.pory"
	msgbox PostBattle_Daisuke, MSGBOX_DEFAULT
# 1061 "data/maps/Route111/scripts.pory"
	releaseall
	end


Route111_EventScript_BattleDaisuke_Text_0:
# 1047 "data/maps/Route111/scripts.pory"
	.string "Bring it on!$"

Route111_Text_Dawn_Greeting::
# 888 "data/maps/Route111/scripts.pory"
	.string "Hey, {PLAYER}! Long time no see! Wow,\n"
	.string "looks like you got the Dynamo Badge\l"
	.string "from Wattson, pretty impressive!\p"
	.string "I had a hard time making it to Lavaridge\n"
	.string "Town to take on Flannery, so I figured I\l"
	.string "would head back this way to train a\l"
	.string "little…\p"
	.string "I guess that makes this some\n"
	.string "good timing, get ready!$"

Route111_Text_Dawn_Defeated::
# 900 "data/maps/Route111/scripts.pory"
	.string "I really need more training if I'm losing\n"
	.string "to you again!$"

Route111_Text_Dawn_MagmaAndAqua::
# 905 "data/maps/Route111/scripts.pory"
	.string "Oh by the way, when I was walking\n"
	.string "around the mountain up ahead, I heard\l"
	.string "some rumblings about Team Aqua\l"
	.string "fighting with another team called\l"
	.string "Team Magma.\p"
	.string "I'm not really sure what's going on,\n"
	.string "but be careful going ahead.\p"
	.string "In the meantime, I have some spare\n"
	.string "Items you can have, hope they help!$"

Route111_Text_DawnGoodbye::
# 917 "data/maps/Route111/scripts.pory"
	.string "Back to training, see you later!$"

TrainerHillDev::
# 1009 "data/maps/Route111/scripts.pory"
	.string "TRAINER HILL\n"
	.string "UNDER DEVELOPMENT$"

Daisuke_Greeting::
# 1065 "data/maps/Route111/scripts.pory"
	.string "Yo! I'm working on becoming the karate\n"
	.string "master of this region. If you can help\l"
	.string "me with my training, I'll reward you with\l"
	.string "some of the Items I've been using on my\l"
	.string "Pokémon during our training.\p"
	.string "What do you say?$"

Daisuke_ReadyYet::
# 1074 "data/maps/Route111/scripts.pory"
	.string "Are you willing to help me become the\n"
	.string "karate master now?$"

Daisuke_ComeBackWhenReady::
# 1079 "data/maps/Route111/scripts.pory"
	.string "No worries, I'll keep training on my own\n"
	.string "out here.$"

Daisuke_ExplainItems::
# 1084 "data/maps/Route111/scripts.pory"
	.string "I've used those Items a bunch for my\n"
	.string "Pokémon during our training.\p"
	.string "They boost the power of certain moves,\n"
	.string "like punching or kicking moves.\p"
	.string "They can be pretty niche, but they are\n"
	.string "super useful when you need them!$"

Daisuke_Outro::
# 1093 "data/maps/Route111/scripts.pory"
	.string "Great battle! I know I'll be leaving\n"
	.string "these Items in good hands.$"

PostBattle_Daisuke::
# 1099 "data/maps/Route111/scripts.pory"
	.string "Looks like I still have a long way to go.\n"
	.string "Hope you're making good use of\l"
	.string "those Items!$"
