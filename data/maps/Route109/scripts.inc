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
	cleartrainerflag TRAINER_DWAYNE
# 46 "data/maps/Route109/scripts.pory"
	clearflag FLAG_DEFEATED_HOT_HOUSE
# 47 "data/maps/Route109/scripts.pory"
	clearflag FLAG_RECEIVED_HOT_HOUSE_GIFT_MON
# 48 "data/maps/Route109/scripts.pory"
	setvar VAR_HOT_HOUSE_STATE, 0
# 49 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 0
# 50 "data/maps/Route109/scripts.pory"
	setvar VAR_LEAVING_HOT_HOUSE, 0
# 51 "data/maps/Route109/scripts.pory"
	releaseall
# 52 "data/maps/Route109/scripts.pory"
	end
# 53 "data/maps/Route109/scripts.pory"

# 54 "data/maps/Route109/scripts.pory"
Route109_EventScript_GirlWalkHotHouse::
# 55 "data/maps/Route109/scripts.pory"
	walk_right
# 56 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 57 "data/maps/Route109/scripts.pory"
	step_end
# 58 "data/maps/Route109/scripts.pory"

# 59 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford::
# 60 "data/maps/Route109/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 61 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 62 "data/maps/Route109/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109, 0
# 63 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_R109, Route109_Movement_BrineyEnterBoat
# 64 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_BRINEY_R109
# 66 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 67 "data/maps/Route109/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
# 68 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_EnterBoatWest
# 69 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_EnterBoatEast
# 70 "data/maps/Route109/scripts.pory"
	end
# 71 "data/maps/Route109/scripts.pory"

# 72 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatSouth::
# 73 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
# 74 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 76 "data/maps/Route109/scripts.pory"
	end
# 77 "data/maps/Route109/scripts.pory"

# 78 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatEast::
# 79 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 80 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 82 "data/maps/Route109/scripts.pory"
	end
# 83 "data/maps/Route109/scripts.pory"

# 84 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatWest::
# 85 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 86 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 88 "data/maps/Route109/scripts.pory"
	end
# 89 "data/maps/Route109/scripts.pory"

# 90 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford::
# 91 "data/maps/Route109/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 92 "data/maps/Route109/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 93 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BOAT_R109, Route109_Movement_SailToDewford
# 94 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_SailToDewford
# 95 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route109/scripts.pory"
	delay 50
# 97 "data/maps/Route109/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 98 "data/maps/Route109/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 99 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerExitBoat
# 100 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 102 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 103 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 104 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 105 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 106 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route109_Movement_BrineyExitBoat
# 107 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 109 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 110 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_BOAT_R109, MAP_ROUTE109
# 111 "data/maps/Route109/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 112 "data/maps/Route109/scripts.pory"
	closemessage
# 113 "data/maps/Route109/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 114 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 115 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 116 "data/maps/Route109/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 117 "data/maps/Route109/scripts.pory"
	release
# 118 "data/maps/Route109/scripts.pory"
	end
# 119 "data/maps/Route109/scripts.pory"

# 120 "data/maps/Route109/scripts.pory"
Route109_Movement_SailToDewford:
# 121 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 122 "data/maps/Route109/scripts.pory"
	walk_down
# 123 "data/maps/Route109/scripts.pory"
	walk_down
# 124 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 125 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 126 "data/maps/Route109/scripts.pory"
	walk_faster_down
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
	walk_fast_down
# 143 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 144 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 145 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 146 "data/maps/Route109/scripts.pory"
	walk_faster_left
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
	walk_fast_left
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
	walk_left
# 292 "data/maps/Route109/scripts.pory"
	walk_left
# 293 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 294 "data/maps/Route109/scripts.pory"
	step_end
# 295 "data/maps/Route109/scripts.pory"

# 296 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatSouth:
# 297 "data/maps/Route109/scripts.pory"
	walk_down
# 298 "data/maps/Route109/scripts.pory"
	walk_down
# 299 "data/maps/Route109/scripts.pory"
	step_end
# 300 "data/maps/Route109/scripts.pory"

# 301 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerExitBoat:
# 302 "data/maps/Route109/scripts.pory"
	walk_down
# 303 "data/maps/Route109/scripts.pory"
	walk_down
# 304 "data/maps/Route109/scripts.pory"
	walk_left
# 305 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_right
# 306 "data/maps/Route109/scripts.pory"
	step_end
# 307 "data/maps/Route109/scripts.pory"

# 308 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatEast:
# 309 "data/maps/Route109/scripts.pory"
	walk_right
# 310 "data/maps/Route109/scripts.pory"
	walk_down
# 311 "data/maps/Route109/scripts.pory"
	step_end
# 312 "data/maps/Route109/scripts.pory"

# 313 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatWest:
# 314 "data/maps/Route109/scripts.pory"
	walk_left
# 315 "data/maps/Route109/scripts.pory"
	walk_down
# 316 "data/maps/Route109/scripts.pory"
	step_end
# 317 "data/maps/Route109/scripts.pory"

# 318 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyEnterBoat:
# 319 "data/maps/Route109/scripts.pory"
	walk_down
# 320 "data/maps/Route109/scripts.pory"
	step_end
# 321 "data/maps/Route109/scripts.pory"

# 322 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyExitBoat:
# 323 "data/maps/Route109/scripts.pory"
	walk_down
# 324 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_left
# 325 "data/maps/Route109/scripts.pory"
	step_end
# 326 "data/maps/Route109/scripts.pory"

# 327 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney::
# 328 "data/maps/Route109/scripts.pory"
	lock
# 329 "data/maps/Route109/scripts.pory"
	faceplayer
# 330 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_HaveNotDeliveredDevonGood
# 331 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 332 "data/maps/Route109/scripts.pory"
	end
# 333 "data/maps/Route109/scripts.pory"

# 334 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood::
# 335 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 336 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 337 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
# 338 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 339 "data/maps/Route109/scripts.pory"
	end
# 340 "data/maps/Route109/scripts.pory"

# 341 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods::
# 342 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 343 "data/maps/Route109/scripts.pory"
	waitmessage
# 344 "data/maps/Route109/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 345 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 346 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_SailToDewford
# 347 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_ChoseNotToSail
# 348 "data/maps/Route109/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
# 349 "data/maps/Route109/scripts.pory"
	end
# 350 "data/maps/Route109/scripts.pory"

# 351 "data/maps/Route109/scripts.pory"
Route109_EventScript_SailToDewford::
# 352 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 353 "data/maps/Route109/scripts.pory"
	closemessage
# 354 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 355 "data/maps/Route109/scripts.pory"
	end
# 356 "data/maps/Route109/scripts.pory"

# 357 "data/maps/Route109/scripts.pory"
Route109_EventScript_StayHere::
# 358 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 359 "data/maps/Route109/scripts.pory"
	release
# 360 "data/maps/Route109/scripts.pory"
	end
# 361 "data/maps/Route109/scripts.pory"

# 362 "data/maps/Route109/scripts.pory"
Route109_EventScript_ChoseNotToSail::
# 363 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 364 "data/maps/Route109/scripts.pory"
	release
# 365 "data/maps/Route109/scripts.pory"
	end
# 366 "data/maps/Route109/scripts.pory"

# 367 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 368 "data/maps/Route109/scripts.pory"
	lock
# 369 "data/maps/Route109/scripts.pory"
	faceplayer
# 370 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 371 "data/maps/Route109/scripts.pory"
	closemessage
# 372 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 373 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 374 "data/maps/Route109/scripts.pory"
	release
# 375 "data/maps/Route109/scripts.pory"
	end
# 376 "data/maps/Route109/scripts.pory"

# 377 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 378 "data/maps/Route109/scripts.pory"
	lock
# 379 "data/maps/Route109/scripts.pory"
	faceplayer
# 380 "data/maps/Route109/scripts.pory"
	special GetPlayerBigGuyGirlString
# 381 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
# 382 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 383 "data/maps/Route109/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 384 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 385 "data/maps/Route109/scripts.pory"
	closemessage
# 386 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 387 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 388 "data/maps/Route109/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 389 "data/maps/Route109/scripts.pory"
	release
# 390 "data/maps/Route109/scripts.pory"
	end
# 391 "data/maps/Route109/scripts.pory"

# 392 "data/maps/Route109/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand::
# 393 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 394 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 395 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 396 "data/maps/Route109/scripts.pory"
	release
# 397 "data/maps/Route109/scripts.pory"
	end
# 398 "data/maps/Route109/scripts.pory"

# 399 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman::
# 400 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 401 "data/maps/Route109/scripts.pory"
	end
# 402 "data/maps/Route109/scripts.pory"

# 403 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan::
# 404 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 405 "data/maps/Route109/scripts.pory"
	end
# 406 "data/maps/Route109/scripts.pory"

# 407 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon::
# 408 "data/maps/Route109/scripts.pory"
	lock
# 409 "data/maps/Route109/scripts.pory"
	faceplayer
# 410 "data/maps/Route109/scripts.pory"
	waitse
# 411 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 412 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 413 "data/maps/Route109/scripts.pory"
	waitmoncry
# 414 "data/maps/Route109/scripts.pory"
	release
# 415 "data/maps/Route109/scripts.pory"
	end
# 416 "data/maps/Route109/scripts.pory"

# 417 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 418 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 419 "data/maps/Route109/scripts.pory"
	end
# 420 "data/maps/Route109/scripts.pory"

# 421 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 422 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 423 "data/maps/Route109/scripts.pory"
	end
# 424 "data/maps/Route109/scripts.pory"

# 425 "data/maps/Route109/scripts.pory"
Route109_EventScript_David::
# 426 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 427 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 428 "data/maps/Route109/scripts.pory"
	end
# 429 "data/maps/Route109/scripts.pory"

# 430 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice::
# 431 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 432 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 433 "data/maps/Route109/scripts.pory"
	end
# 434 "data/maps/Route109/scripts.pory"

# 435 "data/maps/Route109/scripts.pory"
Route109_EventScript_Huey::
# 436 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 437 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 438 "data/maps/Route109/scripts.pory"
	end
# 439 "data/maps/Route109/scripts.pory"

# 440 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond::
# 441 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 442 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 443 "data/maps/Route109/scripts.pory"
	end
# 444 "data/maps/Route109/scripts.pory"

# 445 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky::
# 446 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
# 447 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 448 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_RickyRematch
# 449 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 450 "data/maps/Route109/scripts.pory"
	release
# 451 "data/maps/Route109/scripts.pory"
	end
# 452 "data/maps/Route109/scripts.pory"

# 453 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 454 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 455 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 456 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 457 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 458 "data/maps/Route109/scripts.pory"
	release
# 459 "data/maps/Route109/scripts.pory"
	end
# 460 "data/maps/Route109/scripts.pory"

# 461 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRematch::
# 462 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 463 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 464 "data/maps/Route109/scripts.pory"
	end
# 465 "data/maps/Route109/scripts.pory"

# 466 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola::
# 467 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
# 468 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 469 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_LolaRematch
# 470 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 471 "data/maps/Route109/scripts.pory"
	release
# 472 "data/maps/Route109/scripts.pory"
	end
# 473 "data/maps/Route109/scripts.pory"

# 474 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 475 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 476 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 478 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 479 "data/maps/Route109/scripts.pory"
	release
# 480 "data/maps/Route109/scripts.pory"
	end
# 481 "data/maps/Route109/scripts.pory"

# 482 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRematch::
# 483 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 484 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 485 "data/maps/Route109/scripts.pory"
	end
# 486 "data/maps/Route109/scripts.pory"

# 487 "data/maps/Route109/scripts.pory"
Route109_EventScript_Austina::
# 488 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 489 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 490 "data/maps/Route109/scripts.pory"
	end
# 491 "data/maps/Route109/scripts.pory"

# 492 "data/maps/Route109/scripts.pory"
Route109_EventScript_Gwen::
# 493 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 494 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
# 495 "data/maps/Route109/scripts.pory"
	end
# 496 "data/maps/Route109/scripts.pory"

# 497 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter::
# 498 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 499 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 500 "data/maps/Route109/scripts.pory"
	end
# 501 "data/maps/Route109/scripts.pory"

# 502 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul::
# 503 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 504 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 505 "data/maps/Route109/scripts.pory"
	end
# 506 "data/maps/Route109/scripts.pory"

# 507 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel::
# 508 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 509 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 510 "data/maps/Route109/scripts.pory"
	end
# 511 "data/maps/Route109/scripts.pory"

# 512 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler::
# 513 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 514 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 515 "data/maps/Route109/scripts.pory"
	end
# 516 "data/maps/Route109/scripts.pory"

# 517 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey::
# 518 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 519 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 520 "data/maps/Route109/scripts.pory"
	end
# 521 "data/maps/Route109/scripts.pory"

# 522 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah::
# 523 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 524 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 525 "data/maps/Route109/scripts.pory"
	end
# 526 "data/maps/Route109/scripts.pory"

# 527 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 528 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 529 "data/maps/Route109/scripts.pory"
	.string "We've made land in Slateport!\p"
# 530 "data/maps/Route109/scripts.pory"
	.string "I suppose you're going to visit Capt.\n"
# 531 "data/maps/Route109/scripts.pory"
	.string "Stern and deliver the Devon Goods?$"
# 532 "data/maps/Route109/scripts.pory"

# 533 "data/maps/Route109/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion:
# 534 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: I thought you're supposed\n"
# 535 "data/maps/Route109/scripts.pory"
	.string "to deliver the Devon Goods.\p"
# 536 "data/maps/Route109/scripts.pory"
	.string "Would you like to sail back to\n"
# 537 "data/maps/Route109/scripts.pory"
	.string "Dewford, then?$"
# 538 "data/maps/Route109/scripts.pory"

# 539 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDewfordItIs:
# 540 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Dewford it is, then!\p"
# 541 "data/maps/Route109/scripts.pory"
	.string "Anchors aweigh!\n"
# 542 "data/maps/Route109/scripts.pory"
	.string "Peeko, we're setting sail, my darling!$"
# 543 "data/maps/Route109/scripts.pory"

# 544 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods:
# 545 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Then you go on and deliver\n"
# 546 "data/maps/Route109/scripts.pory"
	.string "the Devon Goods. I'll be waiting.$"
# 547 "data/maps/Route109/scripts.pory"

# 548 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 549 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy! We've made land in\n"
# 550 "data/maps/Route109/scripts.pory"
	.string "Slateport!\p"
# 551 "data/maps/Route109/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 552 "data/maps/Route109/scripts.pory"
	.string "you want to set sail again!$"
# 553 "data/maps/Route109/scripts.pory"

# 554 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyWhereAreWeBound:
# 555 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 556 "data/maps/Route109/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 557 "data/maps/Route109/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 558 "data/maps/Route109/scripts.pory"

# 559 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail:
# 560 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: You just tell me whenever\n"
# 561 "data/maps/Route109/scripts.pory"
	.string "you need to set sail again!$"
# 562 "data/maps/Route109/scripts.pory"

# 563 "data/maps/Route109/scripts.pory"
Route109_Text_LittleKidsDartAround:
# 564 "data/maps/Route109/scripts.pory"
	.string "Little kids can dart around so quickly…\p"
# 565 "data/maps/Route109/scripts.pory"
	.string "You don't dare take your eyes off them\n"
# 566 "data/maps/Route109/scripts.pory"
	.string "for an instant. It's very taxing.\p"
# 567 "data/maps/Route109/scripts.pory"
	.string "Mine are with my Pokémon, so they\n"
# 568 "data/maps/Route109/scripts.pory"
	.string "should be okay, but…$"
# 569 "data/maps/Route109/scripts.pory"

# 570 "data/maps/Route109/scripts.pory"
Route109_Text_SandCastleTakingLongTime:
# 571 "data/maps/Route109/scripts.pory"
	.string "Our sand castle's taking a long time\n"
# 572 "data/maps/Route109/scripts.pory"
	.string "to make.$"
# 573 "data/maps/Route109/scripts.pory"

# 574 "data/maps/Route109/scripts.pory"
Route109_Text_YouCanHaveThis:
# 575 "data/maps/Route109/scripts.pory"
	.string "You can have this!$"
# 576 "data/maps/Route109/scripts.pory"

# 577 "data/maps/Route109/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle:
# 578 "data/maps/Route109/scripts.pory"
	.string "We're going to get all the sand from\n"
# 579 "data/maps/Route109/scripts.pory"
	.string "the beach and make a big castle!\p"
# 580 "data/maps/Route109/scripts.pory"
	.string "And then we're going to be a king and\n"
# 581 "data/maps/Route109/scripts.pory"
	.string "queen.\p"
# 582 "data/maps/Route109/scripts.pory"
	.string "We'll let you be a servant.$"
# 583 "data/maps/Route109/scripts.pory"

# 584 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter:
# 585 "data/maps/Route109/scripts.pory"
	.string "The water around these parts is clean.\p"
# 586 "data/maps/Route109/scripts.pory"
	.string "But, I get my Zigzagoon to pick up\n"
# 587 "data/maps/Route109/scripts.pory"
	.string "litter from the shoreline at times.\p"
# 588 "data/maps/Route109/scripts.pory"
	.string "Dirty water becomes rain and joins our\n"
# 589 "data/maps/Route109/scripts.pory"
	.string "rivers, which we drink from…\p"
# 590 "data/maps/Route109/scripts.pory"
	.string "If we pollute the sea, it all comes\n"
# 591 "data/maps/Route109/scripts.pory"
	.string "back to haunt us eventually.$"
# 592 "data/maps/Route109/scripts.pory"

# 593 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonCry:
# 594 "data/maps/Route109/scripts.pory"
	.string "Zigzagoon: Guguu?$"
# 595 "data/maps/Route109/scripts.pory"

# 596 "data/maps/Route109/scripts.pory"
Route109_Text_SeashoreHouseSign:
# 597 "data/maps/Route109/scripts.pory"
	.string "Hot House\p"
# 598 "data/maps/Route109/scripts.pory"
	.string "“May hot battles rage on hot sands!\n"
# 599 "data/maps/Route109/scripts.pory"
	.string "The place for hot trainers!”$"
# 600 "data/maps/Route109/scripts.pory"

# 601 "data/maps/Route109/scripts.pory"
Route109_Text_TrainerTipsSign:
# 602 "data/maps/Route109/scripts.pory"
	.string "Trainer Tips\p"
# 603 "data/maps/Route109/scripts.pory"
	.string "Some areas are blocked off until\n"
# 604 "data/maps/Route109/scripts.pory"
	.string "certain events are completed, such as\l"
# 605 "data/maps/Route109/scripts.pory"
	.string "obtaining a new Gym Badge.$"
# 606 "data/maps/Route109/scripts.pory"

# 607 "data/maps/Route109/scripts.pory"

# 608 "data/maps/Route109/scripts.pory"
Route109_Text_ThanksForPlaying:
# 609 "data/maps/Route109/scripts.pory"
	.string "Yo, trainer!\p"
# 610 "data/maps/Route109/scripts.pory"
	.string "Looks like you beat the trainers in the\n"
# 611 "data/maps/Route109/scripts.pory"
	.string "Hot House no problem!\p"
# 612 "data/maps/Route109/scripts.pory"
	.string "Thanks for stopping by, and feel free\n"
# 613 "data/maps/Route109/scripts.pory"
	.string "to come take the challenge again\l"
# 614 "data/maps/Route109/scripts.pory"
	.string "anytime, yo!$"

Route109_EventScript_HotHouseGirl::
# 618 "data/maps/Route109/scripts.pory"
	lock
# 619 "data/maps/Route109/scripts.pory"
	faceplayer
# 620 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Route109_EventScript_SeashoreHouseGirlNoBadge
# 621 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HotHouseFullIntro
# 623 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_0, 2
# 625 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route109_EventScript_HotHouseGirl_2
# 629 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_2, 3
Route109_EventScript_HotHouseGirl_1:
# 632 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Route109_EventScript_HotHouseGirl_6
# 636 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_4, 4
Route109_EventScript_HotHouseGirl_5:
# 639 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, Route109_EventScript_HotHouseGirl_10
# 643 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_6, 5
Route109_EventScript_HotHouseGirl_9:
# 646 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Route109_EventScript_HotHouseGirl_14
# 650 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_8, 6
Route109_EventScript_HotHouseGirl_13:
# 653 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, Route109_EventScript_HotHouseGirl_18
# 657 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_10, 7
Route109_EventScript_HotHouseGirl_17:
# 660 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_11, MULTI_B_PRESSED
# 663 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 2, DYN_MULTICHOICE_CB_NONE
# 665 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_HotHouseGirl_22
Route109_EventScript_HotHouseGirl_21:
# 671 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 674 "data/maps/Route109/scripts.pory"
	specialvar VAR_0x8006, GetNumBadges
# 676 "data/maps/Route109/scripts.pory"
	compare VAR_0x8006, VAR_0x8005
# 677 "data/maps/Route109/scripts.pory"
	goto_if_lt Route109_EventScript_SorryNotEnoughBadges
# 679 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EnterCantLeave, MSGBOX_YESNO
# 681 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route109_EventScript_HotHouseGirl_25
Route109_EventScript_HotHouseGirl_24:
# 687 "data/maps/Route109/scripts.pory"
	copyvar VAR_HOT_HOUSE_STATE, VAR_0x8005
# 688 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 1
# 690 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GoodLuckTrainer, MSGBOX_DEFAULT
# 691 "data/maps/Route109/scripts.pory"
	closemessage
# 693 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 695 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_HotHouseGirl_29
# 700 "data/maps/Route109/scripts.pory"
	case DIR_NORTH, Route109_EventScript_HotHouseGirl_30
# 705 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_HotHouseGirl_31
# 711 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepWest
# 712 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 713 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepNorth
# 714 "data/maps/Route109/scripts.pory"
	waitmovement 0
Route109_EventScript_HotHouseGirl_27:
# 718 "data/maps/Route109/scripts.pory"
	warp MAP_ROUTE109_SEASHORE_HOUSE, 6, 9
# 719 "data/maps/Route109/scripts.pory"
	waitstate
# 720 "data/maps/Route109/scripts.pory"
	release
	end

Route109_EventScript_HotHouseGirl_2:
# 626 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_1, 3
	goto Route109_EventScript_HotHouseGirl_1

Route109_EventScript_HotHouseGirl_6:
# 633 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_3, 4
	goto Route109_EventScript_HotHouseGirl_5

Route109_EventScript_HotHouseGirl_10:
# 640 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_5, 5
	goto Route109_EventScript_HotHouseGirl_9

Route109_EventScript_HotHouseGirl_14:
# 647 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_7, 6
	goto Route109_EventScript_HotHouseGirl_13

Route109_EventScript_HotHouseGirl_18:
# 654 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_9, 7
	goto Route109_EventScript_HotHouseGirl_17

Route109_EventScript_HotHouseGirl_22:
# 667 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_HotHouseNo
	goto Route109_EventScript_HotHouseGirl_21

Route109_EventScript_HotHouseGirl_25:
# 683 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_HotHouseNo
	goto Route109_EventScript_HotHouseGirl_24

Route109_EventScript_HotHouseGirl_29:
# 696 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepEast
# 697 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 698 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepEast
# 699 "data/maps/Route109/scripts.pory"
	waitmovement 0
	goto Route109_EventScript_HotHouseGirl_27

Route109_EventScript_HotHouseGirl_30:
# 701 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepWest
# 702 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 703 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepNorth
# 704 "data/maps/Route109/scripts.pory"
	waitmovement 0
	goto Route109_EventScript_HotHouseGirl_27

Route109_EventScript_HotHouseGirl_31:
# 706 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepWest
# 707 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 708 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepWest
# 709 "data/maps/Route109/scripts.pory"
	waitmovement 0
	goto Route109_EventScript_HotHouseGirl_27


Route109_EventScript_SeashoreHouseGirlNoBadge::
# 725 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PapasSpotGettingFixed
# 726 "data/maps/Route109/scripts.pory"
	release
	end


Route109_EventScript_HotHouseNo::
# 731 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HotHouseNo
# 732 "data/maps/Route109/scripts.pory"
	setvar VAR_HOT_HOUSE_STATE, 0
# 733 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 0
# 734 "data/maps/Route109/scripts.pory"
	release
	end


Route109_EventScript_SorryNotEnoughBadges::
# 739 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SorryNotEnoughBadges
# 740 "data/maps/Route109/scripts.pory"
	setvar VAR_HOT_HOUSE_STATE, 0
# 741 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 0
# 742 "data/maps/Route109/scripts.pory"
	release
	end


HotHouseGirlUnblockStepWest::
# 748 "data/maps/Route109/scripts.pory"
	walk_left
# 749 "data/maps/Route109/scripts.pory"
	face_right
# 750 "data/maps/Route109/scripts.pory"
	step_end
	return


HotHouseGirlUnblockStepEast::
# 755 "data/maps/Route109/scripts.pory"
	walk_right
# 756 "data/maps/Route109/scripts.pory"
	face_left
# 757 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnterHotHouseStepEast::
# 762 "data/maps/Route109/scripts.pory"
	walk_right
# 763 "data/maps/Route109/scripts.pory"
	walk_up
# 764 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnterHotHouseStepWest::
# 769 "data/maps/Route109/scripts.pory"
	walk_left
# 770 "data/maps/Route109/scripts.pory"
	walk_up
# 771 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnterHotHouseStepNorth::
# 776 "data/maps/Route109/scripts.pory"
	walk_up
# 777 "data/maps/Route109/scripts.pory"
	walk_up
# 778 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnteredHotHouse::
# 783 "data/maps/Route109/scripts.pory"
	walk_up
# 784 "data/maps/Route109/scripts.pory"
	step_end
	return


SetHotHouseGirlPermLoc::
# 788 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_LITTLE_GIRL, 11, 6
	end


Route109_EventScript_HotHouseGirl_Text_0:
# 623 "data/maps/Route109/scripts.pory"
	.string "Tyrogue$"

Route109_EventScript_HotHouseGirl_Text_1:
# 626 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Togepi{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_HotHouseGirl_Text_2:
# 629 "data/maps/Route109/scripts.pory"
	.string "Togepi$"

Route109_EventScript_HotHouseGirl_Text_3:
# 633 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Eevee{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_HotHouseGirl_Text_4:
# 636 "data/maps/Route109/scripts.pory"
	.string "Eevee$"

Route109_EventScript_HotHouseGirl_Text_5:
# 640 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Riolu{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_HotHouseGirl_Text_6:
# 643 "data/maps/Route109/scripts.pory"
	.string "Riolu$"

Route109_EventScript_HotHouseGirl_Text_7:
# 647 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Type: Null{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_HotHouseGirl_Text_8:
# 650 "data/maps/Route109/scripts.pory"
	.string "Type: Null$"

Route109_EventScript_HotHouseGirl_Text_9:
# 654 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Charcadet{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_HotHouseGirl_Text_10:
# 657 "data/maps/Route109/scripts.pory"
	.string "Charcadet$"

Route109_EventScript_HotHouseGirl_Text_11:
# 660 "data/maps/Route109/scripts.pory"
	.string "Cancel$"

Route109_Text_PapasSpotGettingFixed::
# 792 "data/maps/Route109/scripts.pory"
	.string "Yo, trainer!\p"
	.string "Sorry, my papa's spot is getting fixed\n"
	.string "up right now.\p"
	.string "Make sure you come back later to see\n"
	.string "the hottest spot in town, though!$"

Route109_Text_HotHouseFullIntro::
# 800 "data/maps/Route109/scripts.pory"
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
	.string "portable PC!\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Which reward Pokémon do you want to\n"
	.string "compete for?$"

Route109_Text_EnterCantLeave::
# 817 "data/maps/Route109/scripts.pory"
	.string "You got it, trainer!\n"
	.string "Papa said I have to warn everyone again\l"
	.string "before they go inside:\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Once you enter the Hot House, you can't\n"
	.string "leave or use your PC until you white out\l"
	.string "or beat all the trainers; {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}is that okay?$"

Route109_Text_GoodLuckTrainer::
# 826 "data/maps/Route109/scripts.pory"
	.string "That's what I'm talking about, yeah!\n"
	.string "You got this, trainer, good luck in\l"
	.string "there!$"

Route109_Text_HotHouseNo::
# 833 "data/maps/Route109/scripts.pory"
	.string "No worries! The Hot House is open if you\n"
	.string "change your mind!$"

Route109_Text_SorryNotEnoughBadges::
# 838 "data/maps/Route109/scripts.pory"
	.string "It looks like you don't have enough\n"
	.string "Badges to compete for that reward yet.\l"
	.string "Come back once you have more Badges!$"
