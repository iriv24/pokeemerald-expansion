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

# 8 "data/maps/Route111/scripts.pory"
@ Note: LOCALID_ROUTE111_PLAYER_FALLING is a local id for this map used elsewhere. It's defined in event_objects.h
# 9 "data/maps/Route111/scripts.pory"

# 10 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 11 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 12 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 13 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 14 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 15 "data/maps/Route111/scripts.pory"
	.byte 0
# 16 "data/maps/Route111/scripts.pory"

# 17 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 18 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 19 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 20 "data/maps/Route111/scripts.pory"
	end
# 21 "data/maps/Route111/scripts.pory"

# 22 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 23 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 24 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 25 "data/maps/Route111/scripts.pory"
	return
# 26 "data/maps/Route111/scripts.pory"

# 27 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 28 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 29 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 30 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 31 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 32 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 33 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 34 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 35 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 36 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 37 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 38 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 39 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 40 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 41 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 42 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 43 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 44 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 45 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 46 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 47 "data/maps/Route111/scripts.pory"
	return
# 48 "data/maps/Route111/scripts.pory"

# 49 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 50 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 51 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 52 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 53 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 54 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 55 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 56 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 57 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 58 "data/maps/Route111/scripts.pory"
	end
# 59 "data/maps/Route111/scripts.pory"

# 60 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 61 "data/maps/Route111/scripts.pory"
	checkplayergender
# 62 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 63 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 64 "data/maps/Route111/scripts.pory"
	return
# 65 "data/maps/Route111/scripts.pory"

# 66 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 67 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 68 "data/maps/Route111/scripts.pory"
	return
# 69 "data/maps/Route111/scripts.pory"

# 70 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 71 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 72 "data/maps/Route111/scripts.pory"
	return
# 73 "data/maps/Route111/scripts.pory"

# 74 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 75 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 76 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 77 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 78 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 79 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 80 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 81 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 82 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 83 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 84 "data/maps/Route111/scripts.pory"
	return
# 85 "data/maps/Route111/scripts.pory"

# 86 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 87 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 88 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 89 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 90 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 91 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 92 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 93 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 94 "data/maps/Route111/scripts.pory"
	end
# 95 "data/maps/Route111/scripts.pory"

# 96 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 97 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 98 "data/maps/Route111/scripts.pory"
	return
# 99 "data/maps/Route111/scripts.pory"

# 100 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 101 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 102 "data/maps/Route111/scripts.pory"
	return
# 103 "data/maps/Route111/scripts.pory"

# 104 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 105 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 106 "data/maps/Route111/scripts.pory"
	.2byte 0
# 107 "data/maps/Route111/scripts.pory"

# 108 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 109 "data/maps/Route111/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 110 "data/maps/Route111/scripts.pory"
	end
# 111 "data/maps/Route111/scripts.pory"

# 112 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 113 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 114 "data/maps/Route111/scripts.pory"
	.2byte 0
# 115 "data/maps/Route111/scripts.pory"

# 116 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 117 "data/maps/Route111/scripts.pory"
	lockall
# 118 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 119 "data/maps/Route111/scripts.pory"
	waitstate
# 120 "data/maps/Route111/scripts.pory"
	delay 24
# 121 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 122 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 123 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 124 "data/maps/Route111/scripts.pory"
	waitstate
# 125 "data/maps/Route111/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 126 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 127 "data/maps/Route111/scripts.pory"
	delay 16
# 128 "data/maps/Route111/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 129 "data/maps/Route111/scripts.pory"
	delay 16
# 130 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 131 "data/maps/Route111/scripts.pory"
	waitstate
# 132 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 133 "data/maps/Route111/scripts.pory"
	waitstate
# 134 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 135 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 136 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 137 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 138 "data/maps/Route111/scripts.pory"
	releaseall
# 139 "data/maps/Route111/scripts.pory"
	end
# 140 "data/maps/Route111/scripts.pory"

# 141 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 142 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 143 "data/maps/Route111/scripts.pory"
	releaseall
# 144 "data/maps/Route111/scripts.pory"
	end
# 145 "data/maps/Route111/scripts.pory"

# 146 "data/maps/Route111/scripts.pory"
@ Unused
# 147 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 148 "data/maps/Route111/scripts.pory"
	lock_anim
# 149 "data/maps/Route111/scripts.pory"
	walk_fast_down
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
	step_end
# 156 "data/maps/Route111/scripts.pory"

# 157 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 158 "data/maps/Route111/scripts.pory"
	lock
# 159 "data/maps/Route111/scripts.pory"
	faceplayer
# 160 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 161 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 162 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 163 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 164 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 165 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 166 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 167 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 168 "data/maps/Route111/scripts.pory"
	release
# 169 "data/maps/Route111/scripts.pory"
	end
# 170 "data/maps/Route111/scripts.pory"

# 171 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 172 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 173 "data/maps/Route111/scripts.pory"
	release
# 174 "data/maps/Route111/scripts.pory"
	end
# 175 "data/maps/Route111/scripts.pory"

# 176 "data/maps/Route111/scripts.pory"
@ Unused
# 177 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 178 "data/maps/Route111/scripts.pory"
	lockall
# 179 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 180 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 181 "data/maps/Route111/scripts.pory"
	end
# 182 "data/maps/Route111/scripts.pory"

# 183 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 184 "data/maps/Route111/scripts.pory"
	lockall
# 185 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 186 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 187 "data/maps/Route111/scripts.pory"
	end
# 188 "data/maps/Route111/scripts.pory"

# 189 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 190 "data/maps/Route111/scripts.pory"
	lockall
# 191 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 192 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 193 "data/maps/Route111/scripts.pory"
	end
# 194 "data/maps/Route111/scripts.pory"

# 195 "data/maps/Route111/scripts.pory"
@ Unused
# 196 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 197 "data/maps/Route111/scripts.pory"
	lockall
# 198 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 199 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 200 "data/maps/Route111/scripts.pory"
	end
# 201 "data/maps/Route111/scripts.pory"

# 202 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 203 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 204 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 205 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 206 "data/maps/Route111/scripts.pory"
	releaseall
# 207 "data/maps/Route111/scripts.pory"
	end
# 208 "data/maps/Route111/scripts.pory"

# 209 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 210 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 211 "data/maps/Route111/scripts.pory"
	closemessage
# 212 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 213 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 214 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 215 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 216 "data/maps/Route111/scripts.pory"
	releaseall
# 217 "data/maps/Route111/scripts.pory"
	end
# 218 "data/maps/Route111/scripts.pory"

# 219 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 220 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 221 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 222 "data/maps/Route111/scripts.pory"
	return
# 223 "data/maps/Route111/scripts.pory"

# 224 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 225 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 226 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route111/scripts.pory"
	return
# 228 "data/maps/Route111/scripts.pory"

# 229 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 230 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 231 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route111/scripts.pory"
	return
# 233 "data/maps/Route111/scripts.pory"

# 234 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 235 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 236 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route111/scripts.pory"
	return
# 238 "data/maps/Route111/scripts.pory"

# 239 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 240 "data/maps/Route111/scripts.pory"
	walk_up
# 241 "data/maps/Route111/scripts.pory"
	step_end
# 242 "data/maps/Route111/scripts.pory"

# 243 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 244 "data/maps/Route111/scripts.pory"
	walk_down
# 245 "data/maps/Route111/scripts.pory"
	step_end
# 246 "data/maps/Route111/scripts.pory"

# 247 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 248 "data/maps/Route111/scripts.pory"
	walk_left
# 249 "data/maps/Route111/scripts.pory"
	step_end
# 250 "data/maps/Route111/scripts.pory"

# 251 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 252 "data/maps/Route111/scripts.pory"
	walk_right
# 253 "data/maps/Route111/scripts.pory"
	step_end
# 254 "data/maps/Route111/scripts.pory"

# 255 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 256 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 257 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 258 "data/maps/Route111/scripts.pory"
	doweather
# 259 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 260 "data/maps/Route111/scripts.pory"
	end
# 261 "data/maps/Route111/scripts.pory"

# 262 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 263 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 264 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 265 "data/maps/Route111/scripts.pory"
	doweather
# 266 "data/maps/Route111/scripts.pory"
	end
# 267 "data/maps/Route111/scripts.pory"

# 268 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 269 "data/maps/Route111/scripts.pory"
	lock
# 270 "data/maps/Route111/scripts.pory"
	faceplayer
# 271 "data/maps/Route111/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Route111_EventScript_ComeBackLater
# 272 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 273 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 274 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 275 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 276 "data/maps/Route111/scripts.pory"
	release
# 277 "data/maps/Route111/scripts.pory"
	end
# 278 "data/maps/Route111/scripts.pory"

# 279 "data/maps/Route111/scripts.pory"
Route111_EventScript_ComeBackLater::
# 280 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldGetStronger, MSGBOX_DEFAULT
# 281 "data/maps/Route111/scripts.pory"
	release
# 282 "data/maps/Route111/scripts.pory"
	end
# 283 "data/maps/Route111/scripts.pory"

# 284 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 285 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 286 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 287 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 288 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 289 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 290 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 291 "data/maps/Route111/scripts.pory"
	closemessage
# 292 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Route111_Movement_WinstrateEnterHouse
# 293 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 294 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTOR
# 295 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 296 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 297 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 298 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 299 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICTORIA
# 300 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateExitHouse
# 301 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 302 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 303 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 304 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 305 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 306 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 307 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 308 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 309 "data/maps/Route111/scripts.pory"
	closemessage
# 310 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 311 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTORIA
# 313 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 314 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 315 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 316 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 317 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VIVI
# 318 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateExitHouse
# 319 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 320 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 321 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 322 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 323 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterUp
# 324 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 325 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 326 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 327 "data/maps/Route111/scripts.pory"
	closemessage
# 328 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateEnterHouse
# 329 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 330 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VIVI
# 331 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 332 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 333 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 334 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 335 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICKY
# 336 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateExitHouse
# 337 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 338 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 339 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 340 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 341 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 342 "data/maps/Route111/scripts.pory"
	closemessage
# 343 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterUp
# 344 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 345 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 346 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateEnterHouse
# 347 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 348 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICKY
# 349 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 350 "data/maps/Route111/scripts.pory"
	release
# 351 "data/maps/Route111/scripts.pory"
	end
# 352 "data/maps/Route111/scripts.pory"

# 353 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 354 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 355 "data/maps/Route111/scripts.pory"
	waitdooranim
# 356 "data/maps/Route111/scripts.pory"
	return
# 357 "data/maps/Route111/scripts.pory"

# 358 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 359 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 360 "data/maps/Route111/scripts.pory"
	waitdooranim
# 361 "data/maps/Route111/scripts.pory"
	return
# 362 "data/maps/Route111/scripts.pory"

# 363 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 364 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 365 "data/maps/Route111/scripts.pory"
	walk_up
# 366 "data/maps/Route111/scripts.pory"
	step_end
# 367 "data/maps/Route111/scripts.pory"

# 368 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 369 "data/maps/Route111/scripts.pory"
	walk_down
# 370 "data/maps/Route111/scripts.pory"
	step_end
# 371 "data/maps/Route111/scripts.pory"

# 372 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 373 "data/maps/Route111/scripts.pory"
	delay_16
# 374 "data/maps/Route111/scripts.pory"
	delay_16
# 375 "data/maps/Route111/scripts.pory"
	delay_16
# 376 "data/maps/Route111/scripts.pory"
	step_end
# 377 "data/maps/Route111/scripts.pory"

# 378 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 379 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 380 "data/maps/Route111/scripts.pory"
	end
# 381 "data/maps/Route111/scripts.pory"

# 382 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 383 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 384 "data/maps/Route111/scripts.pory"
	end
# 385 "data/maps/Route111/scripts.pory"

# 386 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 387 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 388 "data/maps/Route111/scripts.pory"
	end
# 389 "data/maps/Route111/scripts.pory"

# 390 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 391 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 392 "data/maps/Route111/scripts.pory"
	end
# 393 "data/maps/Route111/scripts.pory"

# 394 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 395 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 396 "data/maps/Route111/scripts.pory"
	end
# 397 "data/maps/Route111/scripts.pory"

# 398 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 399 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 400 "data/maps/Route111/scripts.pory"
	end
# 401 "data/maps/Route111/scripts.pory"

# 402 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 403 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 404 "data/maps/Route111/scripts.pory"
	end
# 405 "data/maps/Route111/scripts.pory"

# 406 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 407 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 408 "data/maps/Route111/scripts.pory"
	end
# 409 "data/maps/Route111/scripts.pory"

# 410 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 411 "data/maps/Route111/scripts.pory"
	lock
# 412 "data/maps/Route111/scripts.pory"
	faceplayer
# 413 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 414 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 415 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 416 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 417 "data/maps/Route111/scripts.pory"
	release
# 418 "data/maps/Route111/scripts.pory"
	end
# 419 "data/maps/Route111/scripts.pory"

# 420 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 421 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 422 "data/maps/Route111/scripts.pory"
	release
# 423 "data/maps/Route111/scripts.pory"
	end
# 424 "data/maps/Route111/scripts.pory"

# 425 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 426 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 427 "data/maps/Route111/scripts.pory"
	release
# 428 "data/maps/Route111/scripts.pory"
	end
# 429 "data/maps/Route111/scripts.pory"

# 430 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 431 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 432 "data/maps/Route111/scripts.pory"
	release
# 433 "data/maps/Route111/scripts.pory"
	end
# 434 "data/maps/Route111/scripts.pory"

# 435 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 436 "data/maps/Route111/scripts.pory"
	lockall
# 437 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 438 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 439 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 440 "data/maps/Route111/scripts.pory"
	closemessage
# 441 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 442 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 443 "data/maps/Route111/scripts.pory"
	releaseall
# 444 "data/maps/Route111/scripts.pory"
	end
# 445 "data/maps/Route111/scripts.pory"

# 446 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 447 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 448 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 449 "data/maps/Route111/scripts.pory"
	end
# 450 "data/maps/Route111/scripts.pory"

# 451 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 452 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 453 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 454 "data/maps/Route111/scripts.pory"
	end
# 455 "data/maps/Route111/scripts.pory"

# 456 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 457 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 458 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 459 "data/maps/Route111/scripts.pory"
	end
# 460 "data/maps/Route111/scripts.pory"

# 461 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 462 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 463 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 464 "data/maps/Route111/scripts.pory"
	end
# 465 "data/maps/Route111/scripts.pory"

# 466 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 467 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 468 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 469 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 470 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 471 "data/maps/Route111/scripts.pory"
	release
# 472 "data/maps/Route111/scripts.pory"
	end
# 473 "data/maps/Route111/scripts.pory"

# 474 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 475 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 476 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 478 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 479 "data/maps/Route111/scripts.pory"
	release
# 480 "data/maps/Route111/scripts.pory"
	end
# 481 "data/maps/Route111/scripts.pory"

# 482 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 483 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 484 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 485 "data/maps/Route111/scripts.pory"
	end
# 486 "data/maps/Route111/scripts.pory"

# 487 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 488 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 489 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 490 "data/maps/Route111/scripts.pory"
	end
# 491 "data/maps/Route111/scripts.pory"

# 492 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 493 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 494 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 495 "data/maps/Route111/scripts.pory"
	end
# 496 "data/maps/Route111/scripts.pory"

# 497 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 498 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 499 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 500 "data/maps/Route111/scripts.pory"
	end
# 501 "data/maps/Route111/scripts.pory"

# 502 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 503 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 504 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 505 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 506 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 507 "data/maps/Route111/scripts.pory"
	release
# 508 "data/maps/Route111/scripts.pory"
	end
# 509 "data/maps/Route111/scripts.pory"

# 510 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 511 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 512 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 513 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 514 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 515 "data/maps/Route111/scripts.pory"
	release
# 516 "data/maps/Route111/scripts.pory"
	end
# 517 "data/maps/Route111/scripts.pory"

# 518 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 519 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 520 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 521 "data/maps/Route111/scripts.pory"
	end
# 522 "data/maps/Route111/scripts.pory"

# 523 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 524 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 525 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 526 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 527 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 528 "data/maps/Route111/scripts.pory"
	release
# 529 "data/maps/Route111/scripts.pory"
	end
# 530 "data/maps/Route111/scripts.pory"

# 531 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 532 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 533 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 534 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 535 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 536 "data/maps/Route111/scripts.pory"
	release
# 537 "data/maps/Route111/scripts.pory"
	end
# 538 "data/maps/Route111/scripts.pory"

# 539 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 540 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 541 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 542 "data/maps/Route111/scripts.pory"
	end
# 543 "data/maps/Route111/scripts.pory"

# 544 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 545 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 546 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 547 "data/maps/Route111/scripts.pory"
	end
# 548 "data/maps/Route111/scripts.pory"

# 549 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 550 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 551 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 552 "data/maps/Route111/scripts.pory"
	end
# 553 "data/maps/Route111/scripts.pory"

# 554 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 555 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 556 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 557 "data/maps/Route111/scripts.pory"
	end
# 558 "data/maps/Route111/scripts.pory"

# 559 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 560 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 561 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 562 "data/maps/Route111/scripts.pory"
	end
# 563 "data/maps/Route111/scripts.pory"

# 564 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 565 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 566 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 567 "data/maps/Route111/scripts.pory"
	end
# 568 "data/maps/Route111/scripts.pory"

# 569 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 570 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhereTheHellAmI, MSGBOX_NPC
# 571 "data/maps/Route111/scripts.pory"
	end
# 572 "data/maps/Route111/scripts.pory"

# 573 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 574 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 575 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 576 "data/maps/Route111/scripts.pory"
	end
# 577 "data/maps/Route111/scripts.pory"

# 578 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 579 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 580 "data/maps/Route111/scripts.pory"
	end
# 581 "data/maps/Route111/scripts.pory"

# 582 "data/maps/Route111/scripts.pory"
Route111_Text_WhereTheHellAmI:
# 583 "data/maps/Route111/scripts.pory"
	.string "WHERE THE HELL AM I?!$"
# 584 "data/maps/Route111/scripts.pory"

# 585 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 586 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 587 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 588 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 589 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 590 "data/maps/Route111/scripts.pory"

# 591 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 592 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 593 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 594 "data/maps/Route111/scripts.pory"

# 595 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldGetStronger:
# 596 "data/maps/Route111/scripts.pory"
	.string "Hmm... Maybe you should get a little\n"
# 597 "data/maps/Route111/scripts.pory"
	.string "stronger before you take on the family.\p"
# 598 "data/maps/Route111/scripts.pory"
	.string "If you can show me the Heat Badge, then\n"
# 599 "data/maps/Route111/scripts.pory"
	.string "I'll know you're strong enough.$"
# 600 "data/maps/Route111/scripts.pory"

# 601 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 602 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 603 "data/maps/Route111/scripts.pory"

# 604 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 605 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 606 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 607 "data/maps/Route111/scripts.pory"

# 608 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 609 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 610 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 611 "data/maps/Route111/scripts.pory"

# 612 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 613 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 614 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 615 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 616 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 617 "data/maps/Route111/scripts.pory"

# 618 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 619 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 620 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 621 "data/maps/Route111/scripts.pory"

# 622 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 623 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 624 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 625 "data/maps/Route111/scripts.pory"

# 626 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 627 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 628 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 629 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 630 "data/maps/Route111/scripts.pory"

# 631 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 632 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 633 "data/maps/Route111/scripts.pory"

# 634 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 635 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 636 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 637 "data/maps/Route111/scripts.pory"

# 638 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 639 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 640 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 641 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 642 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 643 "data/maps/Route111/scripts.pory"

# 644 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 645 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 646 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 647 "data/maps/Route111/scripts.pory"

# 648 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 649 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 650 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 651 "data/maps/Route111/scripts.pory"

# 652 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 653 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 654 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 655 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 656 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 657 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 658 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 659 "data/maps/Route111/scripts.pory"

# 660 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 661 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 662 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 663 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 664 "data/maps/Route111/scripts.pory"

# 665 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 666 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 667 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 668 "data/maps/Route111/scripts.pory"

# 669 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 670 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 671 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 672 "data/maps/Route111/scripts.pory"

# 673 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 674 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 675 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 676 "data/maps/Route111/scripts.pory"

# 677 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 678 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 679 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 680 "data/maps/Route111/scripts.pory"

# 681 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 682 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 683 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 684 "data/maps/Route111/scripts.pory"

# 685 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 686 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 687 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 688 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 689 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 690 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 691 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 692 "data/maps/Route111/scripts.pory"

# 693 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 694 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 695 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 696 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 697 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 698 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 699 "data/maps/Route111/scripts.pory"

# 700 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 701 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 702 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 703 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 704 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 705 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 706 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 707 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 708 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 709 "data/maps/Route111/scripts.pory"

# 710 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 711 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 712 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 713 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 714 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 715 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 716 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 717 "data/maps/Route111/scripts.pory"

# 718 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 719 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 720 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 721 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 722 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 723 "data/maps/Route111/scripts.pory"

# 724 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 725 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 726 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 727 "data/maps/Route111/scripts.pory"

# 728 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 729 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 730 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 731 "data/maps/Route111/scripts.pory"

# 732 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 733 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 734 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 735 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 736 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 737 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 738 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 739 "data/maps/Route111/scripts.pory"

# 740 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 741 "data/maps/Route111/scripts.pory"
	.string "TRAINER HILL\n"
# 742 "data/maps/Route111/scripts.pory"
	.string "UNDER DEVELOPMENT$"

Route111_EventScript_DawnTrigger1::
# 747 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8008, 1
# 748 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_DawnScene
	end


Route111_EventScript_DawnTrigger2::
# 754 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8008, 2
# 755 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_DawnScene
	end


Route111_EventScript_DawnTrigger3::
# 760 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8008, 3
# 761 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_DawnScene
	end


Route111_EventScript_DawnTrigger4::
# 767 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8008, 4
# 768 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_DawnScene
	end


Route111_EventScript_DawnScene::
# 774 "data/maps/Route111/scripts.pory"
	lockall
# 775 "data/maps/Route111/scripts.pory"
	call Route110_EventScript_PlayMayMusic
# 776 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_WalkInPlaceFasterDown
# 777 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 778 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_ExclamationMark
# 779 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 780 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_Delay48
# 781 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 782 "data/maps/Route111/scripts.pory"
	delay 30
# 783 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route111_EventScript_DawnApproachPlayer1
# 784 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route111_EventScript_DawnApproachPlayer2
# 785 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route111_EventScript_DawnApproachPlayer3
# 786 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route111_EventScript_DawnApproachPlayer4
# 787 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_DawnRivalBattle
# 788 "data/maps/Route111/scripts.pory"
	releaseall
	end


Route111_EventScript_DawnRivalBattle::
# 793 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_Dawn_Greeting
# 794 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWN_ROUTE_111, Route111_Text_Dawn_Defeated
# 795 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_DawnDefeated
	end


Route111_EventScript_DawnDefeated::
# 800 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_Dawn_MagmaAndAqua
# 801 "data/maps/Route111/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 999
# 802 "data/maps/Route111/scripts.pory"
	giveitem ITEM_EMPOLEONITE_D
# 803 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 804 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DawnGoodbye
# 805 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_DawnExit
	end


Route111_EventScript_DawnApproachPlayer1::
# 812 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_DawnApproachPlayer1
# 813 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 814 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_FaceDawn1
# 815 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_Movement_FaceDawn1::
# 820 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_right
# 821 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_Movement_FaceDawn2::
# 825 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_left
# 826 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_Movement_DawnApproachPlayer1::
# 830 "data/maps/Route111/scripts.pory"
	walk_down
# 831 "data/maps/Route111/scripts.pory"
	walk_down
# 832 "data/maps/Route111/scripts.pory"
	walk_left
# 833 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_EventScript_DawnApproachPlayer2::
# 837 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_DawnApproachPlayer2
# 838 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 839 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_FaceDawn1
# 840 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_Movement_DawnApproachPlayer2::
# 845 "data/maps/Route111/scripts.pory"
	walk_down
# 846 "data/maps/Route111/scripts.pory"
	walk_down
# 847 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_left
# 848 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_EventScript_DawnApproachPlayer3::
# 852 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_DawnApproachPlayer3
# 853 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_Movement_DawnApproachPlayer3::
# 858 "data/maps/Route111/scripts.pory"
	walk_down
# 859 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_EventScript_DawnApproachPlayer4::
# 863 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_DawnApproachPlayer4
# 864 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 865 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_FaceDawn2
# 866 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_Movement_DawnApproachPlayer4::
# 871 "data/maps/Route111/scripts.pory"
	walk_down
# 872 "data/maps/Route111/scripts.pory"
	walk_down
# 873 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_right
# 874 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_EventScript_DawnExit::
# 878 "data/maps/Route111/scripts.pory"
	closemessage
# 879 "data/maps/Route111/scripts.pory"
	delay 45
# 880 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route111_EventScript_ApplyMovementDawn1
# 881 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route111_EventScript_ApplyMovementDawn2
# 882 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route111_EventScript_ApplyMovementDawn3
# 883 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route111_EventScript_ApplyMovementDawn4
# 884 "data/maps/Route111/scripts.pory"
	removeobject 47
# 885 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAWN_111
# 886 "data/maps/Route111/scripts.pory"
	setvar VAR_FOUGHT_DAWN_111, 1
# 887 "data/maps/Route111/scripts.pory"
	savebgm MUS_DUMMY
# 888 "data/maps/Route111/scripts.pory"
	fadedefaultbgm
# 889 "data/maps/Route111/scripts.pory"
	releaseall
	end


Route111_EventScript_ApplyMovementDawn1::
# 925 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_EventScript_DawnExit1
# 926 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_EventScript_DawnExit1::
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
	walk_down
# 938 "data/maps/Route111/scripts.pory"
	walk_down
# 939 "data/maps/Route111/scripts.pory"
	walk_down
# 940 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_EventScript_ApplyMovementDawn2::
# 944 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_EventScript_DawnExit2
# 945 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_EventScript_DawnExit2::
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
	walk_down
# 957 "data/maps/Route111/scripts.pory"
	walk_down
# 958 "data/maps/Route111/scripts.pory"
	walk_down
# 959 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_EventScript_ApplyMovementDawn3::
# 963 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_EventScript_DawnExit3
# 964 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_EventScript_DawnExit3::
# 969 "data/maps/Route111/scripts.pory"
	walk_right
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
	walk_down
# 978 "data/maps/Route111/scripts.pory"
	walk_down
# 979 "data/maps/Route111/scripts.pory"
	walk_down
# 980 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_EventScript_ApplyMovementDawn4::
# 984 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_EventScript_DawnExit4
# 985 "data/maps/Route111/scripts.pory"
	waitmovement 0
	return


Route111_EventScript_DawnExit4::
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
	walk_down
# 997 "data/maps/Route111/scripts.pory"
	walk_down
# 998 "data/maps/Route111/scripts.pory"
	walk_down
# 999 "data/maps/Route111/scripts.pory"
	step_end
	return


Route111_Trigger_BlockTrainerHillEntrance::
# 1004 "data/maps/Route111/scripts.pory"
	lockall
# 1005 "data/maps/Route111/scripts.pory"
	msgbox TrainerHillDev
# 1006 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 1007 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 1008 "data/maps/Route111/scripts.pory"
	releaseall
	return


Route111_Text_Dawn_Greeting::
# 893 "data/maps/Route111/scripts.pory"
	.string "Hey, {PLAYER}! Long time no see! Wow,\n"
	.string "looks like you got the Dynamo Bade from\p"
	.string "Wattson, pretty impressive! I had a\n"
	.string "hard time making it to Lavaridge Town\p"
	.string "to take on Flannery, so I figured I\n"
	.string "would head back this way to train a\p"
	.string "little... I guess that makes this some\n"
	.string "good timing, get ready!$"

Route111_Text_Dawn_Defeated::
# 904 "data/maps/Route111/scripts.pory"
	.string "I really need more training if I'm losing\n"
	.string "to you again!$"

Route111_Text_Dawn_MagmaAndAqua::
# 909 "data/maps/Route111/scripts.pory"
	.string "Oh by the way, when I was walking\n"
	.string "around the mountain up ahead, I heard\p"
	.string "some rumblings about Team Aqua\n"
	.string "fighting with another team called Team\p"
	.string "Magma. I'm not really sure what's going\n"
	.string "on, but be careful going ahead. I also\p"
	.string "have some spare items you can have,\n"
	.string "hope they help!$"

Route111_Text_DawnGoodbye::
# 920 "data/maps/Route111/scripts.pory"
	.string "Back to training, see you later!$"

TrainerHillDev::
# 1011 "data/maps/Route111/scripts.pory"
	.string "TRAINER HILL\n"
	.string "UNDER DEVELOPMENT$"
