# 1 "data/maps/Route120/scripts.pory"

# 2 "data/maps/Route120/scripts.pory"
.set LOCALID_BRIDGE_KECLEON, 30
# 3 "data/maps/Route120/scripts.pory"
.set LOCALID_STEVEN, 31
# 4 "data/maps/Route120/scripts.pory"
.set LOCALID_BRIDGE_KECLEON_SHADOW, 36  @ They use a second object which is identical to Kecleon but has a reflection palette tag for the bridge shadow
# 5 "data/maps/Route120/scripts.pory"

# 6 "data/maps/Route120/scripts.pory"
Route120_MapScripts::
# 7 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
# 8 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
# 9 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
# 10 "data/maps/Route120/scripts.pory"
	.byte 0
# 11 "data/maps/Route120/scripts.pory"

# 12 "data/maps/Route120/scripts.pory"
Route120_OnResume:
# 13 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
# 14 "data/maps/Route120/scripts.pory"
	end
# 15 "data/maps/Route120/scripts.pory"

# 16 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject::
# 17 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route120_EventScript_RemoveBridgeKecleon
# 18 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route120_EventScript_RemoveKecleon
# 19 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 2, Route120_EventScript_RemoveKecleon
# 20 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 3, Route120_EventScript_RemoveKecleon
# 21 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 4, Route120_EventScript_RemoveKecleon
# 22 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 5, Route120_EventScript_RemoveKecleon
# 23 "data/maps/Route120/scripts.pory"
	return
# 24 "data/maps/Route120/scripts.pory"

# 25 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon::
# 26 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 28 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 29 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 30 "data/maps/Route120/scripts.pory"
	return
# 31 "data/maps/Route120/scripts.pory"

# 32 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon::
# 33 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 35 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/maps/Route120/scripts.pory"
	return
# 37 "data/maps/Route120/scripts.pory"

# 38 "data/maps/Route120/scripts.pory"
Route120_OnLoad:
# 39 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_BADGE06_GET, Route120_EventScript_CloseCaves
# 40 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
# 41 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
# 42 "data/maps/Route120/scripts.pory"
	end
# 43 "data/maps/Route120/scripts.pory"

# 44 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseCaves::
# 45 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 46 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 47 "data/maps/Route120/scripts.pory"
	setmetatile 19, 22, METATILE_General_RockWall_RockBase, TRUE
# 48 "data/maps/Route120/scripts.pory"
	setmetatile 19, 23, METATILE_General_RockWall_SandBase, TRUE
# 49 "data/maps/Route120/scripts.pory"
	return
# 50 "data/maps/Route120/scripts.pory"

# 51 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 52 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 53 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 54 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 55 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 56 "data/maps/Route120/scripts.pory"
	return
# 57 "data/maps/Route120/scripts.pory"

# 58 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 59 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 60 "data/maps/Route120/scripts.pory"
	return
# 61 "data/maps/Route120/scripts.pory"

# 62 "data/maps/Route120/scripts.pory"
Route120_OnTransition:
# 63 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 64 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 65 "data/maps/Route120/scripts.pory"
	end
# 66 "data/maps/Route120/scripts.pory"

# 67 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 68 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 69 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 70 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 71 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 72 "data/maps/Route120/scripts.pory"
	return
# 73 "data/maps/Route120/scripts.pory"

# 74 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 75 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 76 "data/maps/Route120/scripts.pory"
	return
# 77 "data/maps/Route120/scripts.pory"

# 78 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 79 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 80 "data/maps/Route120/scripts.pory"
	return
# 81 "data/maps/Route120/scripts.pory"

# 82 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 83 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 84 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 85 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 86 "data/maps/Route120/scripts.pory"
	end
# 87 "data/maps/Route120/scripts.pory"

# 88 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 89 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 90 "data/maps/Route120/scripts.pory"
	return
# 91 "data/maps/Route120/scripts.pory"

# 92 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 93 "data/maps/Route120/scripts.pory"
	lock
# 94 "data/maps/Route120/scripts.pory"
	faceplayer
# 95 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 96 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 97 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 98 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 99 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 100 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 101 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 102 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 103 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 104 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 105 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 106 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 107 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 108 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 109 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 110 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 111 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 112 "data/maps/Route120/scripts.pory"
	end
# 113 "data/maps/Route120/scripts.pory"

# 114 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 115 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 116 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 117 "data/maps/Route120/scripts.pory"
	end
# 118 "data/maps/Route120/scripts.pory"

# 119 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 120 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 121 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 122 "data/maps/Route120/scripts.pory"
	end
# 123 "data/maps/Route120/scripts.pory"

# 124 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 125 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 126 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 127 "data/maps/Route120/scripts.pory"
	end
# 128 "data/maps/Route120/scripts.pory"

# 129 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 130 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 131 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 132 "data/maps/Route120/scripts.pory"
	end
# 133 "data/maps/Route120/scripts.pory"

# 134 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 135 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 136 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 137 "data/maps/Route120/scripts.pory"
	end
# 138 "data/maps/Route120/scripts.pory"

# 139 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 140 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 141 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 142 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 143 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 144 "data/maps/Route120/scripts.pory"
	release
# 145 "data/maps/Route120/scripts.pory"
	end
# 146 "data/maps/Route120/scripts.pory"

# 147 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 148 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 149 "data/maps/Route120/scripts.pory"
	release
# 150 "data/maps/Route120/scripts.pory"
	end
# 151 "data/maps/Route120/scripts.pory"

# 152 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 153 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 154 "data/maps/Route120/scripts.pory"
	return
# 155 "data/maps/Route120/scripts.pory"

# 156 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 157 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 158 "data/maps/Route120/scripts.pory"
	return
# 159 "data/maps/Route120/scripts.pory"

# 160 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 161 "data/maps/Route120/scripts.pory"
	lock
# 162 "data/maps/Route120/scripts.pory"
	faceplayer
# 163 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 164 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 165 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 166 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 167 "data/maps/Route120/scripts.pory"
	end
# 168 "data/maps/Route120/scripts.pory"

# 169 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 170 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 171 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 172 "data/maps/Route120/scripts.pory"
	release
# 173 "data/maps/Route120/scripts.pory"
	end
# 174 "data/maps/Route120/scripts.pory"

# 175 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 176 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 177 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 178 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 179 "data/maps/Route120/scripts.pory"
	end
# 180 "data/maps/Route120/scripts.pory"

# 181 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 182 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 183 "data/maps/Route120/scripts.pory"
	closemessage
# 184 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route120_EventScript_PlayerApproachKecleonNorth
# 185 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route120_EventScript_PlayerApproachKecleonWest
# 186 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 187 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route120/scripts.pory"
	delay 20
# 189 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 190 "data/maps/Route120/scripts.pory"
	closemessage
# 191 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterRight
# 192 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 194 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 195 "data/maps/Route120/scripts.pory"
	waitse
# 196 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 197 "data/maps/Route120/scripts.pory"
	delay 40
# 198 "data/maps/Route120/scripts.pory"
	waitmoncry
# 199 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 50
# 200 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 201 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 202 "data/maps/Route120/scripts.pory"
	dowildbattle
# 203 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 204 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 205 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 206 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 207 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 208 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 209 "data/maps/Route120/scripts.pory"
	end
# 210 "data/maps/Route120/scripts.pory"

# 211 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 212 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 213 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 214 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 215 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 216 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 217 "data/maps/Route120/scripts.pory"
	end
# 218 "data/maps/Route120/scripts.pory"

# 219 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 220 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 221 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 222 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 223 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 224 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 225 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 226 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 227 "data/maps/Route120/scripts.pory"
	closemessage
# 228 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 229 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 230 "data/maps/Route120/scripts.pory"
	delay 50
# 231 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 232 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 233 "data/maps/Route120/scripts.pory"
	delay 15
# 234 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_STEVEN
# 235 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 236 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 237 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 238 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 239 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 240 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 241 "data/maps/Route120/scripts.pory"
	release
# 242 "data/maps/Route120/scripts.pory"
	end
# 243 "data/maps/Route120/scripts.pory"

# 244 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 245 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 246 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route120/scripts.pory"
	return
# 248 "data/maps/Route120/scripts.pory"

# 249 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest::
# 250 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route120_Movement_ApproachKecleonWest
# 251 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route120/scripts.pory"
	return
# 253 "data/maps/Route120/scripts.pory"

# 254 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest:
# 255 "data/maps/Route120/scripts.pory"
	walk_down
# 256 "data/maps/Route120/scripts.pory"
	walk_left
# 257 "data/maps/Route120/scripts.pory"
	step_end
# 258 "data/maps/Route120/scripts.pory"

# 259 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 260 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 261 "data/maps/Route120/scripts.pory"
	end
# 262 "data/maps/Route120/scripts.pory"

# 263 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 264 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 265 "data/maps/Route120/scripts.pory"
	end
# 266 "data/maps/Route120/scripts.pory"

# 267 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 268 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 269 "data/maps/Route120/scripts.pory"
	end
# 270 "data/maps/Route120/scripts.pory"

# 271 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 272 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 273 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 274 "data/maps/Route120/scripts.pory"
	end
# 275 "data/maps/Route120/scripts.pory"

# 276 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 277 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 278 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 279 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchRobert
# 280 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 281 "data/maps/Route120/scripts.pory"
	release
# 282 "data/maps/Route120/scripts.pory"
	end
# 283 "data/maps/Route120/scripts.pory"

# 284 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 285 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 286 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 287 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 288 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 289 "data/maps/Route120/scripts.pory"
	release
# 290 "data/maps/Route120/scripts.pory"
	end
# 291 "data/maps/Route120/scripts.pory"

# 292 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 293 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 294 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 295 "data/maps/Route120/scripts.pory"
	end
# 296 "data/maps/Route120/scripts.pory"

# 297 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 298 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 299 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 300 "data/maps/Route120/scripts.pory"
	end
# 301 "data/maps/Route120/scripts.pory"

# 302 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 303 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 304 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 305 "data/maps/Route120/scripts.pory"
	end
# 306 "data/maps/Route120/scripts.pory"

# 307 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 308 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 309 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 310 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchJeffrey
# 311 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 312 "data/maps/Route120/scripts.pory"
	release
# 313 "data/maps/Route120/scripts.pory"
	end
# 314 "data/maps/Route120/scripts.pory"

# 315 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 316 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 317 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 318 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 319 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 320 "data/maps/Route120/scripts.pory"
	release
# 321 "data/maps/Route120/scripts.pory"
	end
# 322 "data/maps/Route120/scripts.pory"

# 323 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 324 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 325 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 326 "data/maps/Route120/scripts.pory"
	end
# 327 "data/maps/Route120/scripts.pory"

# 328 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 329 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 330 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 331 "data/maps/Route120/scripts.pory"
	end
# 332 "data/maps/Route120/scripts.pory"

# 333 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 334 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_NPC
# 335 "data/maps/Route120/scripts.pory"
	end
# 336 "data/maps/Route120/scripts.pory"

# 337 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 338 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 339 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 340 "data/maps/Route120/scripts.pory"
	end
# 341 "data/maps/Route120/scripts.pory"

# 342 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 343 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 344 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 345 "data/maps/Route120/scripts.pory"
	end
# 346 "data/maps/Route120/scripts.pory"

# 347 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 348 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 349 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 350 "data/maps/Route120/scripts.pory"
	end
# 351 "data/maps/Route120/scripts.pory"

# 352 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 353 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 354 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 355 "data/maps/Route120/scripts.pory"
	end
# 356 "data/maps/Route120/scripts.pory"

# 357 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 358 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 359 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 360 "data/maps/Route120/scripts.pory"
	end
# 361 "data/maps/Route120/scripts.pory"

# 362 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 363 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 364 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 365 "data/maps/Route120/scripts.pory"
	end
# 366 "data/maps/Route120/scripts.pory"

# 367 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 368 "data/maps/Route120/scripts.pory"
	.string "Steven: Hm? {PLAYER}{KUN}, hi.\n"
# 369 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 370 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 371 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 372 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 373 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 374 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 375 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 376 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 377 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your Pokémon ready for\n"
# 378 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 379 "data/maps/Route120/scripts.pory"

# 380 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 381 "data/maps/Route120/scripts.pory"
	.string "Steven: No?\p"
# 382 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 383 "data/maps/Route120/scripts.pory"

# 384 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 385 "data/maps/Route120/scripts.pory"
	.string "Steven: {PLAYER}{KUN}, are your Pokémon\n"
# 386 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 387 "data/maps/Route120/scripts.pory"

# 388 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 389 "data/maps/Route120/scripts.pory"
	.string "Steven: {PLAYER}{KUN}, show me your true\n"
# 390 "data/maps/Route120/scripts.pory"
	.string "power as a TRAINER!$"
# 391 "data/maps/Route120/scripts.pory"

# 392 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 393 "data/maps/Route120/scripts.pory"
	.string "STEVEN used the DEVON SCOPE.\p"
# 394 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 395 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 396 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 397 "data/maps/Route120/scripts.pory"

# 398 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 399 "data/maps/Route120/scripts.pory"
	.string "Steven: I see…\n"
# 400 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 401 "data/maps/Route120/scripts.pory"
	.string "Your Pokémon have obviously grown\n"
# 402 "data/maps/Route120/scripts.pory"
	.string "since I first met you in DEWFORD.\p"
# 403 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 404 "data/maps/Route120/scripts.pory"
	.string "DEVON SCOPE.\p"
# 405 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 406 "data/maps/Route120/scripts.pory"
	.string "concealed Pokémon.$"
# 407 "data/maps/Route120/scripts.pory"

# 408 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 409 "data/maps/Route120/scripts.pory"
	.string "Steven: {PLAYER}{KUN}.\p"
# 410 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing Pokémon and TRAINERS\n"
# 411 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 412 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 413 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 414 "data/maps/Route120/scripts.pory"

# 415 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 416 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 417 "data/maps/Route120/scripts.pory"

# 418 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 419 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 420 "data/maps/Route120/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 421 "data/maps/Route120/scripts.pory"

# 422 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 423 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 424 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 425 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 426 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 427 "data/maps/Route120/scripts.pory"

# 428 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 429 "data/maps/Route120/scripts.pory"
	.string "ROUTE 120\n"
# 430 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} FORTREE CITY$"
# 431 "data/maps/Route120/scripts.pory"

# 432 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 433 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 121\n"
# 434 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 120$"
