# 1 "data/maps/Route109/scripts.pory"

# 2 "data/maps/Route109/scripts.pory"
.set LOCALID_LITTLE_GIRL, 9
# 3 "data/maps/Route109/scripts.pory"
@ NOTE: Route 109's sail to Dewford script references local IDs from Dewford's map.
# 4 "data/maps/Route109/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 5 "data/maps/Route109/scripts.pory"

# 6 "data/maps/Route109/scripts.pory"
Route109_MapScripts::
# 7 "data/maps/Route109/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_OnTransition
# 8 "data/maps/Route109/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route109_OnLoad
# 9 "data/maps/Route109/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route109_OnWarp
# 10 "data/maps/Route109/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route109_OnFrame
# 11 "data/maps/Route109/scripts.pory"
	.byte 0
# 12 "data/maps/Route109/scripts.pory"

# 13 "data/maps/Route109/scripts.pory"
Route109_OnTransition:
# 14 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_DEFEATED_HOT_HOUSE, SetHotHouseGirlPermLoc
# 15 "data/maps/Route109/scripts.pory"
	end
# 16 "data/maps/Route109/scripts.pory"

# 17 "data/maps/Route109/scripts.pory"
Route109_OnLoad:
# 18 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_DEFEATED_HOT_HOUSE, SetHotHouseGirlPermLoc
# 19 "data/maps/Route109/scripts.pory"
	end
# 20 "data/maps/Route109/scripts.pory"

# 21 "data/maps/Route109/scripts.pory"
Route109_OnWarp:
# 22 "data/maps/Route109/scripts.pory"
	map_script_2 VAR_LEAVING_HOT_HOUSE, 1, Route109_EventScript_PlayerTurnNorth
# 23 "data/maps/Route109/scripts.pory"
	.2byte 0
# 24 "data/maps/Route109/scripts.pory"

# 25 "data/maps/Route109/scripts.pory"
Route109_EventScript_PlayerTurnNorth::
# 26 "data/maps/Route109/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 27 "data/maps/Route109/scripts.pory"
	end
# 28 "data/maps/Route109/scripts.pory"

# 29 "data/maps/Route109/scripts.pory"
Route109_OnFrame:
# 30 "data/maps/Route109/scripts.pory"
	map_script_2 VAR_LEAVING_HOT_HOUSE, 1, Route109_EventScript_ExitHotHouse
# 31 "data/maps/Route109/scripts.pory"
	.2byte 0
# 32 "data/maps/Route109/scripts.pory"

# 33 "data/maps/Route109/scripts.pory"
Route109_EventScript_ExitHotHouse::
# 34 "data/maps/Route109/scripts.pory"
	lockall
# 35 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown2
# 36 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Route109_EventScript_GirlWalkHotHouse
# 38 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 40 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ThanksForPlaying, MSGBOX_DEFAULT
# 42 "data/maps/Route109/scripts.pory"
	closemessage
# 43 "data/maps/Route109/scripts.pory"
	cleartrainerflag TRAINER_JOHANNA
# 44 "data/maps/Route109/scripts.pory"
	cleartrainerflag TRAINER_BRIAN
# 45 "data/maps/Route109/scripts.pory"
	cleartrainerflag TRAINER_BRIAN_2
# 46 "data/maps/Route109/scripts.pory"
	cleartrainerflag TRAINER_DWAYNE
# 47 "data/maps/Route109/scripts.pory"
	clearflag FLAG_DEFEATED_HOT_HOUSE
# 48 "data/maps/Route109/scripts.pory"
	clearflag FLAG_RECEIVED_HOT_HOUSE_GIFT_MON
# 49 "data/maps/Route109/scripts.pory"
	setvar VAR_HOT_HOUSE_STATE, 0
# 50 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 0
# 51 "data/maps/Route109/scripts.pory"
	setvar VAR_LEAVING_HOT_HOUSE, 0
# 52 "data/maps/Route109/scripts.pory"
	releaseall
# 53 "data/maps/Route109/scripts.pory"
	end
# 54 "data/maps/Route109/scripts.pory"

# 55 "data/maps/Route109/scripts.pory"
Route109_EventScript_GirlWalkHotHouse::
# 56 "data/maps/Route109/scripts.pory"
	walk_right
# 57 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 58 "data/maps/Route109/scripts.pory"
	step_end
# 59 "data/maps/Route109/scripts.pory"

# 60 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford::
# 61 "data/maps/Route109/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 62 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 63 "data/maps/Route109/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109, 0
# 64 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_R109, Route109_Movement_BrineyEnterBoat
# 65 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_BRINEY_R109
# 67 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 68 "data/maps/Route109/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
# 69 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_EnterBoatWest
# 70 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_EnterBoatEast
# 71 "data/maps/Route109/scripts.pory"
	end
# 72 "data/maps/Route109/scripts.pory"

# 73 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatSouth::
# 74 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
# 75 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 77 "data/maps/Route109/scripts.pory"
	end
# 78 "data/maps/Route109/scripts.pory"

# 79 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatEast::
# 80 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 81 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 83 "data/maps/Route109/scripts.pory"
	end
# 84 "data/maps/Route109/scripts.pory"

# 85 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatWest::
# 86 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 87 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 89 "data/maps/Route109/scripts.pory"
	end
# 90 "data/maps/Route109/scripts.pory"

# 91 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford::
# 92 "data/maps/Route109/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 93 "data/maps/Route109/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 94 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BOAT_R109, Route109_Movement_SailToDewford
# 95 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_SailToDewford
# 96 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route109/scripts.pory"
	delay 50
# 98 "data/maps/Route109/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 99 "data/maps/Route109/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 100 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerExitBoat
# 101 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 103 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 104 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 105 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 106 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 107 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route109_Movement_BrineyExitBoat
# 108 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 110 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 111 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_BOAT_R109, MAP_ROUTE109
# 112 "data/maps/Route109/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 113 "data/maps/Route109/scripts.pory"
	closemessage
# 114 "data/maps/Route109/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 115 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 116 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 117 "data/maps/Route109/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 118 "data/maps/Route109/scripts.pory"
	release
# 119 "data/maps/Route109/scripts.pory"
	end
# 120 "data/maps/Route109/scripts.pory"

# 121 "data/maps/Route109/scripts.pory"
Route109_Movement_SailToDewford:
# 122 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 123 "data/maps/Route109/scripts.pory"
	walk_down
# 124 "data/maps/Route109/scripts.pory"
	walk_down
# 125 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 126 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 127 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 128 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 129 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 130 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 131 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 132 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 133 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 134 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 135 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 136 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 137 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 138 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 139 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 140 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 141 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 142 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 143 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 144 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 145 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 146 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 147 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 148 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 149 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 150 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 151 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 152 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 153 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 154 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 155 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 156 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 157 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 158 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 159 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 160 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 161 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 162 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 163 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 164 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 165 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 166 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 167 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 168 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 169 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 170 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 171 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 172 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 173 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 174 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 175 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 176 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 177 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 178 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 179 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 180 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 181 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 183 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 184 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 185 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 186 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 187 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 188 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 189 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 190 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 191 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 192 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 193 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 194 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 195 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 196 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 197 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 198 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 199 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 200 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 201 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 202 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 203 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 204 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 205 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 206 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 207 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 208 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 209 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 210 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 211 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 212 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 213 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 214 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 215 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 218 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 219 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 220 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 221 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 222 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 223 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 224 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 225 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 226 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 227 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 228 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 229 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 230 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 231 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 232 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 233 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 234 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 235 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 236 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 237 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 238 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 239 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 240 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 241 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 242 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 243 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 244 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 245 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 246 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 247 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 248 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 249 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 250 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 251 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 252 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 253 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 254 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 255 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 256 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 257 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 258 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 259 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 260 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 261 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 262 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 263 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 264 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 265 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 266 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 267 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 268 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 269 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 270 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 271 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 272 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 273 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 274 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 275 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 276 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 277 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 278 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 279 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 280 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 281 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 282 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 283 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 284 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 285 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 286 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 287 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 288 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 289 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 290 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 291 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 292 "data/maps/Route109/scripts.pory"
	walk_left
# 293 "data/maps/Route109/scripts.pory"
	walk_left
# 294 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 295 "data/maps/Route109/scripts.pory"
	step_end
# 296 "data/maps/Route109/scripts.pory"

# 297 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatSouth:
# 298 "data/maps/Route109/scripts.pory"
	walk_down
# 299 "data/maps/Route109/scripts.pory"
	walk_down
# 300 "data/maps/Route109/scripts.pory"
	step_end
# 301 "data/maps/Route109/scripts.pory"

# 302 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerExitBoat:
# 303 "data/maps/Route109/scripts.pory"
	walk_down
# 304 "data/maps/Route109/scripts.pory"
	walk_down
# 305 "data/maps/Route109/scripts.pory"
	walk_left
# 306 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_right
# 307 "data/maps/Route109/scripts.pory"
	step_end
# 308 "data/maps/Route109/scripts.pory"

# 309 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatEast:
# 310 "data/maps/Route109/scripts.pory"
	walk_right
# 311 "data/maps/Route109/scripts.pory"
	walk_down
# 312 "data/maps/Route109/scripts.pory"
	step_end
# 313 "data/maps/Route109/scripts.pory"

# 314 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatWest:
# 315 "data/maps/Route109/scripts.pory"
	walk_left
# 316 "data/maps/Route109/scripts.pory"
	walk_down
# 317 "data/maps/Route109/scripts.pory"
	step_end
# 318 "data/maps/Route109/scripts.pory"

# 319 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyEnterBoat:
# 320 "data/maps/Route109/scripts.pory"
	walk_down
# 321 "data/maps/Route109/scripts.pory"
	step_end
# 322 "data/maps/Route109/scripts.pory"

# 323 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyExitBoat:
# 324 "data/maps/Route109/scripts.pory"
	walk_down
# 325 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_left
# 326 "data/maps/Route109/scripts.pory"
	step_end
# 327 "data/maps/Route109/scripts.pory"

# 328 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney::
# 329 "data/maps/Route109/scripts.pory"
	lock
# 330 "data/maps/Route109/scripts.pory"
	faceplayer
# 331 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_HaveNotDeliveredDevonGood
# 332 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 333 "data/maps/Route109/scripts.pory"
	end
# 334 "data/maps/Route109/scripts.pory"

# 335 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood::
# 336 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 337 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 338 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
# 339 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 340 "data/maps/Route109/scripts.pory"
	end
# 341 "data/maps/Route109/scripts.pory"

# 342 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods::
# 343 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 344 "data/maps/Route109/scripts.pory"
	waitmessage
# 345 "data/maps/Route109/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 346 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 347 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_SailToDewford
# 348 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_ChoseNotToSail
# 349 "data/maps/Route109/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
# 350 "data/maps/Route109/scripts.pory"
	end
# 351 "data/maps/Route109/scripts.pory"

# 352 "data/maps/Route109/scripts.pory"
Route109_EventScript_SailToDewford::
# 353 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 354 "data/maps/Route109/scripts.pory"
	closemessage
# 355 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 356 "data/maps/Route109/scripts.pory"
	end
# 357 "data/maps/Route109/scripts.pory"

# 358 "data/maps/Route109/scripts.pory"
Route109_EventScript_StayHere::
# 359 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 360 "data/maps/Route109/scripts.pory"
	release
# 361 "data/maps/Route109/scripts.pory"
	end
# 362 "data/maps/Route109/scripts.pory"

# 363 "data/maps/Route109/scripts.pory"
Route109_EventScript_ChoseNotToSail::
# 364 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 365 "data/maps/Route109/scripts.pory"
	release
# 366 "data/maps/Route109/scripts.pory"
	end
# 367 "data/maps/Route109/scripts.pory"

# 368 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 369 "data/maps/Route109/scripts.pory"
	lock
# 370 "data/maps/Route109/scripts.pory"
	faceplayer
# 371 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 372 "data/maps/Route109/scripts.pory"
	closemessage
# 373 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 374 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 375 "data/maps/Route109/scripts.pory"
	release
# 376 "data/maps/Route109/scripts.pory"
	end
# 377 "data/maps/Route109/scripts.pory"

# 378 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 379 "data/maps/Route109/scripts.pory"
	lock
# 380 "data/maps/Route109/scripts.pory"
	faceplayer
# 381 "data/maps/Route109/scripts.pory"
	special GetPlayerBigGuyGirlString
# 382 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
# 383 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 384 "data/maps/Route109/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 385 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 386 "data/maps/Route109/scripts.pory"
	closemessage
# 387 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 388 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 389 "data/maps/Route109/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 390 "data/maps/Route109/scripts.pory"
	release
# 391 "data/maps/Route109/scripts.pory"
	end
# 392 "data/maps/Route109/scripts.pory"

# 393 "data/maps/Route109/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand::
# 394 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 395 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 396 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 397 "data/maps/Route109/scripts.pory"
	release
# 398 "data/maps/Route109/scripts.pory"
	end
# 399 "data/maps/Route109/scripts.pory"

# 400 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman::
# 401 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 402 "data/maps/Route109/scripts.pory"
	end
# 403 "data/maps/Route109/scripts.pory"

# 404 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan::
# 405 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 406 "data/maps/Route109/scripts.pory"
	end
# 407 "data/maps/Route109/scripts.pory"

# 408 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon::
# 409 "data/maps/Route109/scripts.pory"
	lock
# 410 "data/maps/Route109/scripts.pory"
	faceplayer
# 411 "data/maps/Route109/scripts.pory"
	waitse
# 412 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 413 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 414 "data/maps/Route109/scripts.pory"
	waitmoncry
# 415 "data/maps/Route109/scripts.pory"
	release
# 416 "data/maps/Route109/scripts.pory"
	end
# 417 "data/maps/Route109/scripts.pory"

# 418 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 419 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 420 "data/maps/Route109/scripts.pory"
	end
# 421 "data/maps/Route109/scripts.pory"

# 422 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 423 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 424 "data/maps/Route109/scripts.pory"
	end
# 425 "data/maps/Route109/scripts.pory"

# 426 "data/maps/Route109/scripts.pory"
Route109_EventScript_David::
# 427 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 428 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 429 "data/maps/Route109/scripts.pory"
	end
# 430 "data/maps/Route109/scripts.pory"

# 431 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice::
# 432 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 433 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 434 "data/maps/Route109/scripts.pory"
	end
# 435 "data/maps/Route109/scripts.pory"

# 436 "data/maps/Route109/scripts.pory"
Route109_EventScript_Huey::
# 437 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 438 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 439 "data/maps/Route109/scripts.pory"
	end
# 440 "data/maps/Route109/scripts.pory"

# 441 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond::
# 442 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 443 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 444 "data/maps/Route109/scripts.pory"
	end
# 445 "data/maps/Route109/scripts.pory"

# 446 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky::
# 447 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
# 448 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 449 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_RickyRematch
# 450 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 451 "data/maps/Route109/scripts.pory"
	release
# 452 "data/maps/Route109/scripts.pory"
	end
# 453 "data/maps/Route109/scripts.pory"

# 454 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 455 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 456 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 457 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 458 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 459 "data/maps/Route109/scripts.pory"
	release
# 460 "data/maps/Route109/scripts.pory"
	end
# 461 "data/maps/Route109/scripts.pory"

# 462 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRematch::
# 463 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 464 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 465 "data/maps/Route109/scripts.pory"
	end
# 466 "data/maps/Route109/scripts.pory"

# 467 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola::
# 468 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
# 469 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 470 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_LolaRematch
# 471 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 472 "data/maps/Route109/scripts.pory"
	release
# 473 "data/maps/Route109/scripts.pory"
	end
# 474 "data/maps/Route109/scripts.pory"

# 475 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 476 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 477 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 478 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 479 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 480 "data/maps/Route109/scripts.pory"
	release
# 481 "data/maps/Route109/scripts.pory"
	end
# 482 "data/maps/Route109/scripts.pory"

# 483 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRematch::
# 484 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 485 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 486 "data/maps/Route109/scripts.pory"
	end
# 487 "data/maps/Route109/scripts.pory"

# 488 "data/maps/Route109/scripts.pory"
Route109_EventScript_Austina::
# 489 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 490 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 491 "data/maps/Route109/scripts.pory"
	end
# 492 "data/maps/Route109/scripts.pory"

# 493 "data/maps/Route109/scripts.pory"
Route109_EventScript_Gwen::
# 494 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 495 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
# 496 "data/maps/Route109/scripts.pory"
	end
# 497 "data/maps/Route109/scripts.pory"

# 498 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter::
# 499 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 500 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 501 "data/maps/Route109/scripts.pory"
	end
# 502 "data/maps/Route109/scripts.pory"

# 503 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul::
# 504 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 505 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 506 "data/maps/Route109/scripts.pory"
	end
# 507 "data/maps/Route109/scripts.pory"

# 508 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel::
# 509 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 510 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 511 "data/maps/Route109/scripts.pory"
	end
# 512 "data/maps/Route109/scripts.pory"

# 513 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler::
# 514 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 515 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 516 "data/maps/Route109/scripts.pory"
	end
# 517 "data/maps/Route109/scripts.pory"

# 518 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey::
# 519 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 520 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 521 "data/maps/Route109/scripts.pory"
	end
# 522 "data/maps/Route109/scripts.pory"

# 523 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah::
# 524 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 525 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 526 "data/maps/Route109/scripts.pory"
	end
# 527 "data/maps/Route109/scripts.pory"

# 528 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 529 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 530 "data/maps/Route109/scripts.pory"
	.string "We've made land in Slateport!\p"
# 531 "data/maps/Route109/scripts.pory"
	.string "I suppose you're going to visit Capt.\n"
# 532 "data/maps/Route109/scripts.pory"
	.string "Stern and deliver the Devon Goods?$"
# 533 "data/maps/Route109/scripts.pory"

# 534 "data/maps/Route109/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion:
# 535 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: I thought you're supposed\n"
# 536 "data/maps/Route109/scripts.pory"
	.string "to deliver the Devon Goods.\p"
# 537 "data/maps/Route109/scripts.pory"
	.string "Would you like to sail back to\n"
# 538 "data/maps/Route109/scripts.pory"
	.string "Dewford, then?$"
# 539 "data/maps/Route109/scripts.pory"

# 540 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDewfordItIs:
# 541 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Dewford it is, then!\p"
# 542 "data/maps/Route109/scripts.pory"
	.string "Anchors aweigh!\n"
# 543 "data/maps/Route109/scripts.pory"
	.string "Peeko, we're setting sail, my darling!$"
# 544 "data/maps/Route109/scripts.pory"

# 545 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods:
# 546 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Then you go on and deliver\n"
# 547 "data/maps/Route109/scripts.pory"
	.string "the Devon Goods. I'll be waiting.$"
# 548 "data/maps/Route109/scripts.pory"

# 549 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 550 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy! We've made land in\n"
# 551 "data/maps/Route109/scripts.pory"
	.string "Slateport!\p"
# 552 "data/maps/Route109/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 553 "data/maps/Route109/scripts.pory"
	.string "you want to set sail again!$"
# 554 "data/maps/Route109/scripts.pory"

# 555 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyWhereAreWeBound:
# 556 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 557 "data/maps/Route109/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 558 "data/maps/Route109/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 559 "data/maps/Route109/scripts.pory"

# 560 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail:
# 561 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: You just tell me whenever\n"
# 562 "data/maps/Route109/scripts.pory"
	.string "you need to set sail again!$"
# 563 "data/maps/Route109/scripts.pory"

# 564 "data/maps/Route109/scripts.pory"
Route109_Text_LittleKidsDartAround:
# 565 "data/maps/Route109/scripts.pory"
	.string "Little kids can dart around so quickly…\p"
# 566 "data/maps/Route109/scripts.pory"
	.string "You don't dare take your eyes off them\n"
# 567 "data/maps/Route109/scripts.pory"
	.string "for an instant. It's very taxing.\p"
# 568 "data/maps/Route109/scripts.pory"
	.string "Mine are with my Pokémon, so they\n"
# 569 "data/maps/Route109/scripts.pory"
	.string "should be okay, but…$"
# 570 "data/maps/Route109/scripts.pory"

# 571 "data/maps/Route109/scripts.pory"
Route109_Text_SandCastleTakingLongTime:
# 572 "data/maps/Route109/scripts.pory"
	.string "Our sand castle's taking a long time\n"
# 573 "data/maps/Route109/scripts.pory"
	.string "to make.$"
# 574 "data/maps/Route109/scripts.pory"

# 575 "data/maps/Route109/scripts.pory"
Route109_Text_YouCanHaveThis:
# 576 "data/maps/Route109/scripts.pory"
	.string "You can have this!$"
# 577 "data/maps/Route109/scripts.pory"

# 578 "data/maps/Route109/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle:
# 579 "data/maps/Route109/scripts.pory"
	.string "We're going to get all the sand from\n"
# 580 "data/maps/Route109/scripts.pory"
	.string "the beach and make a big castle!\p"
# 581 "data/maps/Route109/scripts.pory"
	.string "And then we're going to be a king and\n"
# 582 "data/maps/Route109/scripts.pory"
	.string "queen.\p"
# 583 "data/maps/Route109/scripts.pory"
	.string "We'll let you be a servant.$"
# 584 "data/maps/Route109/scripts.pory"

# 585 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter:
# 586 "data/maps/Route109/scripts.pory"
	.string "The water around these parts is clean.\p"
# 587 "data/maps/Route109/scripts.pory"
	.string "But, I get my Zigzagoon to pick up\n"
# 588 "data/maps/Route109/scripts.pory"
	.string "litter from the shoreline at times.\p"
# 589 "data/maps/Route109/scripts.pory"
	.string "Dirty water becomes rain and joins our\n"
# 590 "data/maps/Route109/scripts.pory"
	.string "rivers, which we drink from…\p"
# 591 "data/maps/Route109/scripts.pory"
	.string "If we pollute the sea, it all comes\n"
# 592 "data/maps/Route109/scripts.pory"
	.string "back to haunt us eventually.$"
# 593 "data/maps/Route109/scripts.pory"

# 594 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonCry:
# 595 "data/maps/Route109/scripts.pory"
	.string "Zigzagoon: Guguu?$"
# 596 "data/maps/Route109/scripts.pory"

# 597 "data/maps/Route109/scripts.pory"
Route109_Text_SeashoreHouseSign:
# 598 "data/maps/Route109/scripts.pory"
	.string "Hot House\p"
# 599 "data/maps/Route109/scripts.pory"
	.string "“May hot battles rage on hot sands!\n"
# 600 "data/maps/Route109/scripts.pory"
	.string "The place for hot trainers!”$"
# 601 "data/maps/Route109/scripts.pory"

# 602 "data/maps/Route109/scripts.pory"
Route109_Text_TrainerTipsSign:
# 603 "data/maps/Route109/scripts.pory"
	.string "Trainer Tips\p"
# 604 "data/maps/Route109/scripts.pory"
	.string "Some areas are blocked off until\n"
# 605 "data/maps/Route109/scripts.pory"
	.string "certain events are completed, such as\l"
# 606 "data/maps/Route109/scripts.pory"
	.string "obtaining a new Gym Badge.$"
# 607 "data/maps/Route109/scripts.pory"

# 608 "data/maps/Route109/scripts.pory"

# 609 "data/maps/Route109/scripts.pory"
Route109_Text_ThanksForPlaying:
# 610 "data/maps/Route109/scripts.pory"
	.string "Yo, trainer!\p"
# 611 "data/maps/Route109/scripts.pory"
	.string "Looks like you beat the trainers in the\n"
# 612 "data/maps/Route109/scripts.pory"
	.string "Hot House no problem!\p"
# 613 "data/maps/Route109/scripts.pory"
	.string "Thanks for stopping by, and feel free\n"
# 614 "data/maps/Route109/scripts.pory"
	.string "to come take the challenge again\l"
# 615 "data/maps/Route109/scripts.pory"
	.string "anytime, yo!$"

Route109_EventScript_HotHouseGirl::
# 619 "data/maps/Route109/scripts.pory"
	lock
# 620 "data/maps/Route109/scripts.pory"
	faceplayer
# 621 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Route109_EventScript_SeashoreHouseGirlNoBadge
# 622 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HotHouseFullIntro
# 623 "data/maps/Route109/scripts.pory"
	closemessage
# 624 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_WhichRewardMenu
	return


Route109_EventScript_WhichRewardMenu::
# 628 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_IntroQuestion
# 630 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_0, 2
# 632 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route109_EventScript_WhichRewardMenu_2
# 636 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_2, 3
Route109_EventScript_WhichRewardMenu_1:
# 639 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Route109_EventScript_WhichRewardMenu_6
# 643 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_4, 4
Route109_EventScript_WhichRewardMenu_5:
# 646 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, Route109_EventScript_WhichRewardMenu_10
# 650 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_6, 5
Route109_EventScript_WhichRewardMenu_9:
# 653 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Route109_EventScript_WhichRewardMenu_14
# 657 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_8, 6
Route109_EventScript_WhichRewardMenu_13:
# 660 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, Route109_EventScript_WhichRewardMenu_18
# 664 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_10, 7
Route109_EventScript_WhichRewardMenu_17:
# 667 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_11, MULTI_B_PRESSED
# 670 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 2, DYN_MULTICHOICE_CB_NONE
# 672 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_WhichRewardMenu_22
Route109_EventScript_WhichRewardMenu_21:
# 678 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 681 "data/maps/Route109/scripts.pory"
	specialvar VAR_0x8006, GetNumBadges
# 683 "data/maps/Route109/scripts.pory"
	compare VAR_0x8006, VAR_0x8005
# 684 "data/maps/Route109/scripts.pory"
	goto_if_lt Route109_EventScript_SorryNotEnoughBadges
# 685 "data/maps/Route109/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8005
# 687 "data/maps/Route109/scripts.pory"
	compare VAR_0x8005, 2
	goto_if_eq Route109_EventScript_WhichRewardMenu_25
Route109_EventScript_WhichRewardMenu_24:
# 692 "data/maps/Route109/scripts.pory"
	compare VAR_0x8005, 3
	goto_if_eq Route109_EventScript_WhichRewardMenu_28
Route109_EventScript_WhichRewardMenu_27:
# 697 "data/maps/Route109/scripts.pory"
	compare VAR_0x8005, 4
	goto_if_eq Route109_EventScript_WhichRewardMenu_31
Route109_EventScript_WhichRewardMenu_30:
# 702 "data/maps/Route109/scripts.pory"
	compare VAR_0x8005, 5
	goto_if_eq Route109_EventScript_WhichRewardMenu_34
Route109_EventScript_WhichRewardMenu_33:
# 707 "data/maps/Route109/scripts.pory"
	compare VAR_0x8005, 6
	goto_if_eq Route109_EventScript_WhichRewardMenu_37
Route109_EventScript_WhichRewardMenu_36:
# 712 "data/maps/Route109/scripts.pory"
	compare VAR_0x8005, 7
	goto_if_eq Route109_EventScript_WhichRewardMenu_40
Route109_EventScript_WhichRewardMenu_39:
# 717 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_HotHouseNo
	return

Route109_EventScript_WhichRewardMenu_2:
# 633 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_1, 3
	goto Route109_EventScript_WhichRewardMenu_1

Route109_EventScript_WhichRewardMenu_6:
# 640 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_3, 4
	goto Route109_EventScript_WhichRewardMenu_5

Route109_EventScript_WhichRewardMenu_10:
# 647 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_5, 5
	goto Route109_EventScript_WhichRewardMenu_9

Route109_EventScript_WhichRewardMenu_14:
# 654 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_7, 6
	goto Route109_EventScript_WhichRewardMenu_13

Route109_EventScript_WhichRewardMenu_18:
# 661 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_9, 7
	goto Route109_EventScript_WhichRewardMenu_17

Route109_EventScript_WhichRewardMenu_22:
# 674 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_HotHouseNo
	goto Route109_EventScript_WhichRewardMenu_21

Route109_EventScript_WhichRewardMenu_25:
# 689 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_Badge2Options
	goto Route109_EventScript_WhichRewardMenu_24

Route109_EventScript_WhichRewardMenu_28:
# 694 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_Badge3Options
	goto Route109_EventScript_WhichRewardMenu_27

Route109_EventScript_WhichRewardMenu_31:
# 699 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_Badge4Options
	goto Route109_EventScript_WhichRewardMenu_30

Route109_EventScript_WhichRewardMenu_34:
# 704 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_Badge5Options
	goto Route109_EventScript_WhichRewardMenu_33

Route109_EventScript_WhichRewardMenu_37:
# 709 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_Badge6Options
	goto Route109_EventScript_WhichRewardMenu_36

Route109_EventScript_WhichRewardMenu_40:
# 714 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_Badge7Options
	goto Route109_EventScript_WhichRewardMenu_39


Route109_EventScript_Badge2Options::
# 722 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BadgeRewardsQuestion
# 724 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_0, 1
# 725 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_1, 2
# 726 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_2, 3
# 727 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_3, 4
# 728 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_4, MULTI_B_PRESSED
# 733 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 1, DYN_MULTICHOICE_CB_NONE
# 735 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_Badge2Options_2
Route109_EventScript_Badge2Options_1:
# 741 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 742 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_ConfirmAndEnterHotHouse
	return

Route109_EventScript_Badge2Options_2:
# 737 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_WhichRewardMenu
	goto Route109_EventScript_Badge2Options_1


Route109_EventScript_Badge3Options::
# 747 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BadgeRewardsQuestion
# 749 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge3Options_Text_0, 5
# 750 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge3Options_Text_1, 6
# 751 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge3Options_Text_2, 7
# 752 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge3Options_Text_3, 8
# 753 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_4, MULTI_B_PRESSED
# 758 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 5, DYN_MULTICHOICE_CB_NONE
# 760 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_Badge3Options_2
Route109_EventScript_Badge3Options_1:
# 766 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 767 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_ConfirmAndEnterHotHouse
	return

Route109_EventScript_Badge3Options_2:
# 762 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_WhichRewardMenu
	goto Route109_EventScript_Badge3Options_1


Route109_EventScript_Badge4Options::
# 772 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BadgeRewardsQuestion
# 774 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge4Options_Text_0, 9
# 775 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge4Options_Text_1, 10
# 776 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge4Options_Text_2, 11
# 777 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge4Options_Text_3, 12
# 778 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_4, MULTI_B_PRESSED
# 783 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 9, DYN_MULTICHOICE_CB_NONE
# 785 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_Badge4Options_2
Route109_EventScript_Badge4Options_1:
# 791 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 792 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_ConfirmAndEnterHotHouse
	return

Route109_EventScript_Badge4Options_2:
# 787 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_WhichRewardMenu
	goto Route109_EventScript_Badge4Options_1


Route109_EventScript_Badge5Options::
# 797 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BadgeRewardsQuestion
# 799 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge5Options_Text_0, 13
# 800 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge5Options_Text_1, 14
# 801 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_4, MULTI_B_PRESSED
# 806 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 13, DYN_MULTICHOICE_CB_NONE
# 808 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_Badge5Options_2
Route109_EventScript_Badge5Options_1:
# 814 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 815 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_ConfirmAndEnterHotHouse
	return

Route109_EventScript_Badge5Options_2:
# 810 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_WhichRewardMenu
	goto Route109_EventScript_Badge5Options_1


Route109_EventScript_Badge6Options::
# 820 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BadgeRewardsQuestion
# 822 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge6Options_Text_0, 15
# 823 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_4, MULTI_B_PRESSED
# 828 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 15, DYN_MULTICHOICE_CB_NONE
# 830 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_Badge6Options_2
Route109_EventScript_Badge6Options_1:
# 836 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 837 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_ConfirmAndEnterHotHouse
	return

Route109_EventScript_Badge6Options_2:
# 832 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_WhichRewardMenu
	goto Route109_EventScript_Badge6Options_1


Route109_EventScript_Badge7Options::
# 842 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BadgeRewardsQuestion
# 844 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge7Options_Text_0, 16
# 845 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_4, MULTI_B_PRESSED
# 850 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 16, DYN_MULTICHOICE_CB_NONE
# 852 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_Badge7Options_2
Route109_EventScript_Badge7Options_1:
# 858 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 859 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_ConfirmAndEnterHotHouse
	return

Route109_EventScript_Badge7Options_2:
# 854 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_WhichRewardMenu
	goto Route109_EventScript_Badge7Options_1


Route109_EventScript_ConfirmAndEnterHotHouse::
# 864 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EnterCantLeave, MSGBOX_YESNO
# 866 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route109_EventScript_ConfirmAndEnterHotHouse_2
Route109_EventScript_ConfirmAndEnterHotHouse_1:
# 872 "data/maps/Route109/scripts.pory"
	copyvar VAR_HOT_HOUSE_STATE, VAR_0x8004
# 873 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 1
# 875 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GoodLuckTrainer, MSGBOX_DEFAULT
# 876 "data/maps/Route109/scripts.pory"
	closemessage
# 878 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 880 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_ConfirmAndEnterHotHouse_6
# 885 "data/maps/Route109/scripts.pory"
	case DIR_NORTH, Route109_EventScript_ConfirmAndEnterHotHouse_7
# 890 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_ConfirmAndEnterHotHouse_8
# 896 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepWest
# 897 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 898 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepNorth
# 899 "data/maps/Route109/scripts.pory"
	waitmovement 0
Route109_EventScript_ConfirmAndEnterHotHouse_4:
# 903 "data/maps/Route109/scripts.pory"
	warp MAP_ROUTE109_SEASHORE_HOUSE, 6, 9
# 904 "data/maps/Route109/scripts.pory"
	waitstate
# 905 "data/maps/Route109/scripts.pory"
	release
	end

Route109_EventScript_ConfirmAndEnterHotHouse_2:
# 868 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_HotHouseNo
	goto Route109_EventScript_ConfirmAndEnterHotHouse_1

Route109_EventScript_ConfirmAndEnterHotHouse_6:
# 881 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepEast
# 882 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 883 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepEast
# 884 "data/maps/Route109/scripts.pory"
	waitmovement 0
	goto Route109_EventScript_ConfirmAndEnterHotHouse_4

Route109_EventScript_ConfirmAndEnterHotHouse_7:
# 886 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepWest
# 887 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 888 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepNorth
# 889 "data/maps/Route109/scripts.pory"
	waitmovement 0
	goto Route109_EventScript_ConfirmAndEnterHotHouse_4

Route109_EventScript_ConfirmAndEnterHotHouse_8:
# 891 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepWest
# 892 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 893 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepWest
# 894 "data/maps/Route109/scripts.pory"
	waitmovement 0
	goto Route109_EventScript_ConfirmAndEnterHotHouse_4


Route109_EventScript_SeashoreHouseGirlNoBadge::
# 910 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PapasSpotGettingFixed
# 911 "data/maps/Route109/scripts.pory"
	release
	end


Route109_EventScript_HotHouseNo::
# 916 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HotHouseNo
# 917 "data/maps/Route109/scripts.pory"
	setvar VAR_HOT_HOUSE_STATE, 0
# 918 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 0
# 919 "data/maps/Route109/scripts.pory"
	release
	end


Route109_EventScript_SorryNotEnoughBadges::
# 924 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SorryNotEnoughBadges
# 925 "data/maps/Route109/scripts.pory"
	setvar VAR_HOT_HOUSE_STATE, 0
# 926 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 0
# 927 "data/maps/Route109/scripts.pory"
	release
	end


HotHouseGirlUnblockStepWest::
# 933 "data/maps/Route109/scripts.pory"
	walk_left
# 934 "data/maps/Route109/scripts.pory"
	face_right
# 935 "data/maps/Route109/scripts.pory"
	step_end
	return


HotHouseGirlUnblockStepEast::
# 940 "data/maps/Route109/scripts.pory"
	walk_right
# 941 "data/maps/Route109/scripts.pory"
	face_left
# 942 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnterHotHouseStepEast::
# 947 "data/maps/Route109/scripts.pory"
	walk_right
# 948 "data/maps/Route109/scripts.pory"
	walk_up
# 949 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnterHotHouseStepWest::
# 954 "data/maps/Route109/scripts.pory"
	walk_left
# 955 "data/maps/Route109/scripts.pory"
	walk_up
# 956 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnterHotHouseStepNorth::
# 961 "data/maps/Route109/scripts.pory"
	walk_up
# 962 "data/maps/Route109/scripts.pory"
	walk_up
# 963 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnteredHotHouse::
# 968 "data/maps/Route109/scripts.pory"
	walk_up
# 969 "data/maps/Route109/scripts.pory"
	step_end
	return


SetHotHouseGirlPermLoc::
# 973 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_LITTLE_GIRL, 11, 6
	end


Route109_EventScript_WhichRewardMenu_Text_0:
# 630 "data/maps/Route109/scripts.pory"
	.string "Badge 2$"

Route109_EventScript_WhichRewardMenu_Text_1:
# 633 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Badge 3{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_WhichRewardMenu_Text_2:
# 636 "data/maps/Route109/scripts.pory"
	.string "Badge 3$"

Route109_EventScript_WhichRewardMenu_Text_3:
# 640 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Badge 4{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_WhichRewardMenu_Text_4:
# 643 "data/maps/Route109/scripts.pory"
	.string "Badge 4$"

Route109_EventScript_WhichRewardMenu_Text_5:
# 647 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Badge 5{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_WhichRewardMenu_Text_6:
# 650 "data/maps/Route109/scripts.pory"
	.string "Badge 5$"

Route109_EventScript_WhichRewardMenu_Text_7:
# 654 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Badge 6{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_WhichRewardMenu_Text_8:
# 657 "data/maps/Route109/scripts.pory"
	.string "Badge 6$"

Route109_EventScript_WhichRewardMenu_Text_9:
# 661 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Badge 7{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_WhichRewardMenu_Text_10:
# 664 "data/maps/Route109/scripts.pory"
	.string "Badge 7$"

Route109_EventScript_WhichRewardMenu_Text_11:
# 667 "data/maps/Route109/scripts.pory"
	.string "Cancel$"

Route109_EventScript_Badge2Options_Text_0:
# 724 "data/maps/Route109/scripts.pory"
	.string "Tyrogue$"

Route109_EventScript_Badge2Options_Text_1:
# 725 "data/maps/Route109/scripts.pory"
	.string "Pansage$"

Route109_EventScript_Badge2Options_Text_2:
# 726 "data/maps/Route109/scripts.pory"
	.string "Panpour$"

Route109_EventScript_Badge2Options_Text_3:
# 727 "data/maps/Route109/scripts.pory"
	.string "Pansear$"

Route109_EventScript_Badge2Options_Text_4:
# 728 "data/maps/Route109/scripts.pory"
	.string "Back$"

Route109_EventScript_Badge3Options_Text_0:
# 749 "data/maps/Route109/scripts.pory"
	.string "Misdreavus$"

Route109_EventScript_Badge3Options_Text_1:
# 750 "data/maps/Route109/scripts.pory"
	.string "Pinsir$"

Route109_EventScript_Badge3Options_Text_2:
# 751 "data/maps/Route109/scripts.pory"
	.string "Heracross$"

Route109_EventScript_Badge3Options_Text_3:
# 752 "data/maps/Route109/scripts.pory"
	.string "Scyther$"

Route109_EventScript_Badge4Options_Text_0:
# 774 "data/maps/Route109/scripts.pory"
	.string "Eevee$"

Route109_EventScript_Badge4Options_Text_1:
# 775 "data/maps/Route109/scripts.pory"
	.string "Magby$"

Route109_EventScript_Badge4Options_Text_2:
# 776 "data/maps/Route109/scripts.pory"
	.string "Elekid$"

Route109_EventScript_Badge4Options_Text_3:
# 777 "data/maps/Route109/scripts.pory"
	.string "Smoochum$"

Route109_EventScript_Badge5Options_Text_0:
# 799 "data/maps/Route109/scripts.pory"
	.string "Riolu$"

Route109_EventScript_Badge5Options_Text_1:
# 800 "data/maps/Route109/scripts.pory"
	.string "Togepi$"

Route109_EventScript_Badge6Options_Text_0:
# 822 "data/maps/Route109/scripts.pory"
	.string "Type: Null$"

Route109_EventScript_Badge7Options_Text_0:
# 844 "data/maps/Route109/scripts.pory"
	.string "Charcadet$"

Route109_Text_PapasSpotGettingFixed::
# 977 "data/maps/Route109/scripts.pory"
	.string "Yo, trainer!\p"
	.string "Sorry, my papa's spot is getting fixed\n"
	.string "up right now.\p"
	.string "Make sure you come back later to see\n"
	.string "the hottest spot in town, though!$"

Route109_Text_HotHouseFullIntro::
# 985 "data/maps/Route109/scripts.pory"
	.string "Yo, trainer!\n"
	.string "Looks like you've got the right stuff\l"
	.string "to enter the new Hot House!\p"
	.string "My papa totally revamped it, and we've\n"
	.string "got all sorts of great rewards now, but\l"
	.string "the trainers inside will be stronger if\l"
	.string "you try to go for better rewards!\p"
	.string "You can also come back and challenge\n"
	.string "the Hot House as many times as you'd\l"
	.string "like, {COLOR GREEN}{SHADOW LIGHT_GREEN}but be careful, because once you\l"
	.string "enter, you can't leave or access your\l"
	.string "portable PC!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_Text_IntroQuestion::
# 1000 "data/maps/Route109/scripts.pory"
	.string "Which reward level do you want to\n"
	.string "compete for?$"

Route109_Text_BadgeRewardsQuestion::
# 1005 "data/maps/Route109/scripts.pory"
	.string "Which Badge {STR_VAR_1} reward Pokémon do you\n"
	.string "want to compete for?$"

Route109_Text_EnterCantLeave::
# 1010 "data/maps/Route109/scripts.pory"
	.string "You got it, trainer!\n"
	.string "Papa said I have to warn everyone again\l"
	.string "before they go inside:\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Once you enter the Hot House, you can't\n"
	.string "leave or use your PC until you white out\l"
	.string "or beat all the trainers; {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}is that okay?$"

Route109_Text_GoodLuckTrainer::
# 1019 "data/maps/Route109/scripts.pory"
	.string "That's what I'm talking about, yeah!\n"
	.string "You got this, trainer, good luck in\l"
	.string "there!$"

Route109_Text_HotHouseNo::
# 1026 "data/maps/Route109/scripts.pory"
	.string "No worries! The Hot House is open if you\n"
	.string "change your mind!$"

Route109_Text_SorryNotEnoughBadges::
# 1031 "data/maps/Route109/scripts.pory"
	.string "It looks like you don't have enough\n"
	.string "Badges to compete for that reward yet.\l"
	.string "Come back once you have more Badges!$"
