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
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 39 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ThanksForPlaying, MSGBOX_DEFAULT
# 41 "data/maps/Route109/scripts.pory"
	closemessage
# 42 "data/maps/Route109/scripts.pory"
	cleartrainerflag TRAINER_JOHANNA
# 43 "data/maps/Route109/scripts.pory"
	cleartrainerflag TRAINER_SIMON
# 44 "data/maps/Route109/scripts.pory"
	cleartrainerflag TRAINER_DWAYNE
# 45 "data/maps/Route109/scripts.pory"
	clearflag FLAG_DEFEATED_HOT_HOUSE
# 46 "data/maps/Route109/scripts.pory"
	clearflag FLAG_RECEIVED_HOT_HOUSE_GIFT_MON
# 47 "data/maps/Route109/scripts.pory"
	setvar VAR_HOT_HOUSE_STATE, 0
# 48 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 0
# 49 "data/maps/Route109/scripts.pory"
	setvar VAR_LEAVING_HOT_HOUSE, 0
# 50 "data/maps/Route109/scripts.pory"
	releaseall
# 51 "data/maps/Route109/scripts.pory"
	end
# 52 "data/maps/Route109/scripts.pory"

# 53 "data/maps/Route109/scripts.pory"
Route109_EventScript_GirlWalkHotHouse::
# 54 "data/maps/Route109/scripts.pory"
	walk_right
# 55 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 56 "data/maps/Route109/scripts.pory"
	step_end
# 57 "data/maps/Route109/scripts.pory"

# 58 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford::
# 59 "data/maps/Route109/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 60 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 61 "data/maps/Route109/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109, 0
# 62 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_R109, Route109_Movement_BrineyEnterBoat
# 63 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_BRINEY_R109
# 65 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 66 "data/maps/Route109/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
# 67 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_EnterBoatWest
# 68 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_EnterBoatEast
# 69 "data/maps/Route109/scripts.pory"
	end
# 70 "data/maps/Route109/scripts.pory"

# 71 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatSouth::
# 72 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
# 73 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 75 "data/maps/Route109/scripts.pory"
	end
# 76 "data/maps/Route109/scripts.pory"

# 77 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatEast::
# 78 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 79 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 81 "data/maps/Route109/scripts.pory"
	end
# 82 "data/maps/Route109/scripts.pory"

# 83 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatWest::
# 84 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 85 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 87 "data/maps/Route109/scripts.pory"
	end
# 88 "data/maps/Route109/scripts.pory"

# 89 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford::
# 90 "data/maps/Route109/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 91 "data/maps/Route109/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 92 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BOAT_R109, Route109_Movement_SailToDewford
# 93 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_SailToDewford
# 94 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route109/scripts.pory"
	delay 50
# 96 "data/maps/Route109/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 97 "data/maps/Route109/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 98 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerExitBoat
# 99 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 100 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 101 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 102 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 103 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 104 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 105 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route109_Movement_BrineyExitBoat
# 106 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 107 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 108 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 109 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_BOAT_R109, MAP_ROUTE109
# 110 "data/maps/Route109/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 111 "data/maps/Route109/scripts.pory"
	closemessage
# 112 "data/maps/Route109/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 113 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 114 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 115 "data/maps/Route109/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 116 "data/maps/Route109/scripts.pory"
	release
# 117 "data/maps/Route109/scripts.pory"
	end
# 118 "data/maps/Route109/scripts.pory"

# 119 "data/maps/Route109/scripts.pory"
Route109_Movement_SailToDewford:
# 120 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 121 "data/maps/Route109/scripts.pory"
	walk_down
# 122 "data/maps/Route109/scripts.pory"
	walk_down
# 123 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 124 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 125 "data/maps/Route109/scripts.pory"
	walk_faster_down
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
	walk_fast_down
# 142 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 143 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 144 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 145 "data/maps/Route109/scripts.pory"
	walk_faster_left
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
	walk_fast_left
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
	walk_left
# 291 "data/maps/Route109/scripts.pory"
	walk_left
# 292 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 293 "data/maps/Route109/scripts.pory"
	step_end
# 294 "data/maps/Route109/scripts.pory"

# 295 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatSouth:
# 296 "data/maps/Route109/scripts.pory"
	walk_down
# 297 "data/maps/Route109/scripts.pory"
	walk_down
# 298 "data/maps/Route109/scripts.pory"
	step_end
# 299 "data/maps/Route109/scripts.pory"

# 300 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerExitBoat:
# 301 "data/maps/Route109/scripts.pory"
	walk_down
# 302 "data/maps/Route109/scripts.pory"
	walk_down
# 303 "data/maps/Route109/scripts.pory"
	walk_left
# 304 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_right
# 305 "data/maps/Route109/scripts.pory"
	step_end
# 306 "data/maps/Route109/scripts.pory"

# 307 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatEast:
# 308 "data/maps/Route109/scripts.pory"
	walk_right
# 309 "data/maps/Route109/scripts.pory"
	walk_down
# 310 "data/maps/Route109/scripts.pory"
	step_end
# 311 "data/maps/Route109/scripts.pory"

# 312 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatWest:
# 313 "data/maps/Route109/scripts.pory"
	walk_left
# 314 "data/maps/Route109/scripts.pory"
	walk_down
# 315 "data/maps/Route109/scripts.pory"
	step_end
# 316 "data/maps/Route109/scripts.pory"

# 317 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyEnterBoat:
# 318 "data/maps/Route109/scripts.pory"
	walk_down
# 319 "data/maps/Route109/scripts.pory"
	step_end
# 320 "data/maps/Route109/scripts.pory"

# 321 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyExitBoat:
# 322 "data/maps/Route109/scripts.pory"
	walk_down
# 323 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_left
# 324 "data/maps/Route109/scripts.pory"
	step_end
# 325 "data/maps/Route109/scripts.pory"

# 326 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney::
# 327 "data/maps/Route109/scripts.pory"
	lock
# 328 "data/maps/Route109/scripts.pory"
	faceplayer
# 329 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_HaveNotDeliveredDevonGood
# 330 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 331 "data/maps/Route109/scripts.pory"
	end
# 332 "data/maps/Route109/scripts.pory"

# 333 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood::
# 334 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 335 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 336 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
# 337 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 338 "data/maps/Route109/scripts.pory"
	end
# 339 "data/maps/Route109/scripts.pory"

# 340 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods::
# 341 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 342 "data/maps/Route109/scripts.pory"
	waitmessage
# 343 "data/maps/Route109/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 344 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 345 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_SailToDewford
# 346 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_ChoseNotToSail
# 347 "data/maps/Route109/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
# 348 "data/maps/Route109/scripts.pory"
	end
# 349 "data/maps/Route109/scripts.pory"

# 350 "data/maps/Route109/scripts.pory"
Route109_EventScript_SailToDewford::
# 351 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 352 "data/maps/Route109/scripts.pory"
	closemessage
# 353 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 354 "data/maps/Route109/scripts.pory"
	end
# 355 "data/maps/Route109/scripts.pory"

# 356 "data/maps/Route109/scripts.pory"
Route109_EventScript_StayHere::
# 357 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 358 "data/maps/Route109/scripts.pory"
	release
# 359 "data/maps/Route109/scripts.pory"
	end
# 360 "data/maps/Route109/scripts.pory"

# 361 "data/maps/Route109/scripts.pory"
Route109_EventScript_ChoseNotToSail::
# 362 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 363 "data/maps/Route109/scripts.pory"
	release
# 364 "data/maps/Route109/scripts.pory"
	end
# 365 "data/maps/Route109/scripts.pory"

# 366 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 367 "data/maps/Route109/scripts.pory"
	lock
# 368 "data/maps/Route109/scripts.pory"
	faceplayer
# 369 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 370 "data/maps/Route109/scripts.pory"
	closemessage
# 371 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 372 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 373 "data/maps/Route109/scripts.pory"
	release
# 374 "data/maps/Route109/scripts.pory"
	end
# 375 "data/maps/Route109/scripts.pory"

# 376 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 377 "data/maps/Route109/scripts.pory"
	lock
# 378 "data/maps/Route109/scripts.pory"
	faceplayer
# 379 "data/maps/Route109/scripts.pory"
	special GetPlayerBigGuyGirlString
# 380 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
# 381 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 382 "data/maps/Route109/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 383 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 384 "data/maps/Route109/scripts.pory"
	closemessage
# 385 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 386 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 387 "data/maps/Route109/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 388 "data/maps/Route109/scripts.pory"
	release
# 389 "data/maps/Route109/scripts.pory"
	end
# 390 "data/maps/Route109/scripts.pory"

# 391 "data/maps/Route109/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand::
# 392 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 393 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 394 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 395 "data/maps/Route109/scripts.pory"
	release
# 396 "data/maps/Route109/scripts.pory"
	end
# 397 "data/maps/Route109/scripts.pory"

# 398 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman::
# 399 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 400 "data/maps/Route109/scripts.pory"
	end
# 401 "data/maps/Route109/scripts.pory"

# 402 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan::
# 403 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 404 "data/maps/Route109/scripts.pory"
	end
# 405 "data/maps/Route109/scripts.pory"

# 406 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon::
# 407 "data/maps/Route109/scripts.pory"
	lock
# 408 "data/maps/Route109/scripts.pory"
	faceplayer
# 409 "data/maps/Route109/scripts.pory"
	waitse
# 410 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 411 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 412 "data/maps/Route109/scripts.pory"
	waitmoncry
# 413 "data/maps/Route109/scripts.pory"
	release
# 414 "data/maps/Route109/scripts.pory"
	end
# 415 "data/maps/Route109/scripts.pory"

# 416 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 417 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 418 "data/maps/Route109/scripts.pory"
	end
# 419 "data/maps/Route109/scripts.pory"

# 420 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 421 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 422 "data/maps/Route109/scripts.pory"
	end
# 423 "data/maps/Route109/scripts.pory"

# 424 "data/maps/Route109/scripts.pory"
Route109_EventScript_David::
# 425 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 426 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 427 "data/maps/Route109/scripts.pory"
	end
# 428 "data/maps/Route109/scripts.pory"

# 429 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice::
# 430 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 431 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 432 "data/maps/Route109/scripts.pory"
	end
# 433 "data/maps/Route109/scripts.pory"

# 434 "data/maps/Route109/scripts.pory"
Route109_EventScript_Huey::
# 435 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 436 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 437 "data/maps/Route109/scripts.pory"
	end
# 438 "data/maps/Route109/scripts.pory"

# 439 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond::
# 440 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 441 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 442 "data/maps/Route109/scripts.pory"
	end
# 443 "data/maps/Route109/scripts.pory"

# 444 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky::
# 445 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
# 446 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 447 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_RickyRematch
# 448 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 449 "data/maps/Route109/scripts.pory"
	release
# 450 "data/maps/Route109/scripts.pory"
	end
# 451 "data/maps/Route109/scripts.pory"

# 452 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 453 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 454 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 455 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 456 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 457 "data/maps/Route109/scripts.pory"
	release
# 458 "data/maps/Route109/scripts.pory"
	end
# 459 "data/maps/Route109/scripts.pory"

# 460 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRematch::
# 461 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 462 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 463 "data/maps/Route109/scripts.pory"
	end
# 464 "data/maps/Route109/scripts.pory"

# 465 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola::
# 466 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
# 467 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 468 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_LolaRematch
# 469 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 470 "data/maps/Route109/scripts.pory"
	release
# 471 "data/maps/Route109/scripts.pory"
	end
# 472 "data/maps/Route109/scripts.pory"

# 473 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 474 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 475 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 476 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 477 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 478 "data/maps/Route109/scripts.pory"
	release
# 479 "data/maps/Route109/scripts.pory"
	end
# 480 "data/maps/Route109/scripts.pory"

# 481 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRematch::
# 482 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 483 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 484 "data/maps/Route109/scripts.pory"
	end
# 485 "data/maps/Route109/scripts.pory"

# 486 "data/maps/Route109/scripts.pory"
Route109_EventScript_Austina::
# 487 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 488 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 489 "data/maps/Route109/scripts.pory"
	end
# 490 "data/maps/Route109/scripts.pory"

# 491 "data/maps/Route109/scripts.pory"
Route109_EventScript_Gwen::
# 492 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 493 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
# 494 "data/maps/Route109/scripts.pory"
	end
# 495 "data/maps/Route109/scripts.pory"

# 496 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter::
# 497 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 498 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 499 "data/maps/Route109/scripts.pory"
	end
# 500 "data/maps/Route109/scripts.pory"

# 501 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul::
# 502 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 503 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 504 "data/maps/Route109/scripts.pory"
	end
# 505 "data/maps/Route109/scripts.pory"

# 506 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel::
# 507 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 508 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 509 "data/maps/Route109/scripts.pory"
	end
# 510 "data/maps/Route109/scripts.pory"

# 511 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler::
# 512 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 513 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 514 "data/maps/Route109/scripts.pory"
	end
# 515 "data/maps/Route109/scripts.pory"

# 516 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey::
# 517 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 518 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 519 "data/maps/Route109/scripts.pory"
	end
# 520 "data/maps/Route109/scripts.pory"

# 521 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah::
# 522 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 523 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 524 "data/maps/Route109/scripts.pory"
	end
# 525 "data/maps/Route109/scripts.pory"

# 526 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 527 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 528 "data/maps/Route109/scripts.pory"
	.string "We've made land in Slateport!\p"
# 529 "data/maps/Route109/scripts.pory"
	.string "I suppose you're going to visit Capt.\n"
# 530 "data/maps/Route109/scripts.pory"
	.string "Stern and deliver the Devon Goods?$"
# 531 "data/maps/Route109/scripts.pory"

# 532 "data/maps/Route109/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion:
# 533 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: I thought you're supposed\n"
# 534 "data/maps/Route109/scripts.pory"
	.string "to deliver the Devon Goods.\p"
# 535 "data/maps/Route109/scripts.pory"
	.string "Would you like to sail back to\n"
# 536 "data/maps/Route109/scripts.pory"
	.string "Dewford, then?$"
# 537 "data/maps/Route109/scripts.pory"

# 538 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDewfordItIs:
# 539 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Dewford it is, then!\p"
# 540 "data/maps/Route109/scripts.pory"
	.string "Anchors aweigh!\n"
# 541 "data/maps/Route109/scripts.pory"
	.string "Peeko, we're setting sail, my darling!$"
# 542 "data/maps/Route109/scripts.pory"

# 543 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods:
# 544 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Then you go on and deliver\n"
# 545 "data/maps/Route109/scripts.pory"
	.string "the Devon Goods. I'll be waiting.$"
# 546 "data/maps/Route109/scripts.pory"

# 547 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 548 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy! We've made land in\n"
# 549 "data/maps/Route109/scripts.pory"
	.string "Slateport!\p"
# 550 "data/maps/Route109/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 551 "data/maps/Route109/scripts.pory"
	.string "you want to set sail again!$"
# 552 "data/maps/Route109/scripts.pory"

# 553 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyWhereAreWeBound:
# 554 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 555 "data/maps/Route109/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 556 "data/maps/Route109/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 557 "data/maps/Route109/scripts.pory"

# 558 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail:
# 559 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: You just tell me whenever\n"
# 560 "data/maps/Route109/scripts.pory"
	.string "you need to set sail again!$"
# 561 "data/maps/Route109/scripts.pory"

# 562 "data/maps/Route109/scripts.pory"
Route109_Text_LittleKidsDartAround:
# 563 "data/maps/Route109/scripts.pory"
	.string "Little kids can dart around so quickly…\p"
# 564 "data/maps/Route109/scripts.pory"
	.string "You don't dare take your eyes off them\n"
# 565 "data/maps/Route109/scripts.pory"
	.string "for an instant. It's very taxing.\p"
# 566 "data/maps/Route109/scripts.pory"
	.string "Mine are with my Pokémon, so they\n"
# 567 "data/maps/Route109/scripts.pory"
	.string "should be okay, but…$"
# 568 "data/maps/Route109/scripts.pory"

# 569 "data/maps/Route109/scripts.pory"
Route109_Text_SandCastleTakingLongTime:
# 570 "data/maps/Route109/scripts.pory"
	.string "Our sand castle's taking a long time\n"
# 571 "data/maps/Route109/scripts.pory"
	.string "to make.$"
# 572 "data/maps/Route109/scripts.pory"

# 573 "data/maps/Route109/scripts.pory"
Route109_Text_YouCanHaveThis:
# 574 "data/maps/Route109/scripts.pory"
	.string "You can have this!$"
# 575 "data/maps/Route109/scripts.pory"

# 576 "data/maps/Route109/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle:
# 577 "data/maps/Route109/scripts.pory"
	.string "We're going to get all the sand from\n"
# 578 "data/maps/Route109/scripts.pory"
	.string "the beach and make a big castle!\p"
# 579 "data/maps/Route109/scripts.pory"
	.string "And then we're going to be a king and\n"
# 580 "data/maps/Route109/scripts.pory"
	.string "queen.\p"
# 581 "data/maps/Route109/scripts.pory"
	.string "We'll let you be a servant.$"
# 582 "data/maps/Route109/scripts.pory"

# 583 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter:
# 584 "data/maps/Route109/scripts.pory"
	.string "The water around these parts is clean.\p"
# 585 "data/maps/Route109/scripts.pory"
	.string "But, I get my Zigzagoon to pick up\n"
# 586 "data/maps/Route109/scripts.pory"
	.string "litter from the shoreline at times.\p"
# 587 "data/maps/Route109/scripts.pory"
	.string "Dirty water becomes rain and joins our\n"
# 588 "data/maps/Route109/scripts.pory"
	.string "rivers, which we drink from…\p"
# 589 "data/maps/Route109/scripts.pory"
	.string "If we pollute the sea, it all comes\n"
# 590 "data/maps/Route109/scripts.pory"
	.string "back to haunt us eventually.$"
# 591 "data/maps/Route109/scripts.pory"

# 592 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonCry:
# 593 "data/maps/Route109/scripts.pory"
	.string "Zigzagoon: Guguu?$"
# 594 "data/maps/Route109/scripts.pory"

# 595 "data/maps/Route109/scripts.pory"
Route109_Text_SeashoreHouseSign:
# 596 "data/maps/Route109/scripts.pory"
	.string "Hot House\p"
# 597 "data/maps/Route109/scripts.pory"
	.string "“May hot battles rage on hot sands!\n"
# 598 "data/maps/Route109/scripts.pory"
	.string "The place for hot trainers!”$"
# 599 "data/maps/Route109/scripts.pory"

# 600 "data/maps/Route109/scripts.pory"
Route109_Text_TrainerTipsSign:
# 601 "data/maps/Route109/scripts.pory"
	.string "Trainer Tips\p"
# 602 "data/maps/Route109/scripts.pory"
	.string "Some areas are blocked off until\n"
# 603 "data/maps/Route109/scripts.pory"
	.string "certain events are completed, such as\l"
# 604 "data/maps/Route109/scripts.pory"
	.string "obtaining a new Gym Badge.$"
# 605 "data/maps/Route109/scripts.pory"

# 606 "data/maps/Route109/scripts.pory"

# 607 "data/maps/Route109/scripts.pory"
Route109_Text_ThanksForPlaying:
# 608 "data/maps/Route109/scripts.pory"
	.string "Yo, trainer!\p"
# 609 "data/maps/Route109/scripts.pory"
	.string "Looks like you beat the trainers in the\n"
# 610 "data/maps/Route109/scripts.pory"
	.string "Hot House no problem!\p"
# 611 "data/maps/Route109/scripts.pory"
	.string "Thanks for stopping by, and feel free\n"
# 612 "data/maps/Route109/scripts.pory"
	.string "to come take the challenge again\l"
# 613 "data/maps/Route109/scripts.pory"
	.string "anytime, yo!$"

Route109_EventScript_HotHouseGirl::
# 617 "data/maps/Route109/scripts.pory"
	lock
# 618 "data/maps/Route109/scripts.pory"
	faceplayer
# 619 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Route109_EventScript_SeashoreHouseGirlNoBadge
# 620 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HotHouseFullIntro
# 622 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_0, 2
# 624 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route109_EventScript_HotHouseGirl_2
# 628 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_2, 3
Route109_EventScript_HotHouseGirl_1:
# 631 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Route109_EventScript_HotHouseGirl_6
# 635 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_4, 4
Route109_EventScript_HotHouseGirl_5:
# 638 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, Route109_EventScript_HotHouseGirl_10
# 642 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_6, 5
Route109_EventScript_HotHouseGirl_9:
# 645 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Route109_EventScript_HotHouseGirl_14
# 649 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_8, 6
Route109_EventScript_HotHouseGirl_13:
# 652 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, Route109_EventScript_HotHouseGirl_18
# 656 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_10, 7
Route109_EventScript_HotHouseGirl_17:
# 659 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_11, MULTI_B_PRESSED
# 662 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 2, DYN_MULTICHOICE_CB_NONE
# 664 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_HotHouseGirl_22
Route109_EventScript_HotHouseGirl_21:
# 670 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 673 "data/maps/Route109/scripts.pory"
	specialvar VAR_0x8006, GetNumBadges
# 675 "data/maps/Route109/scripts.pory"
	compare VAR_0x8006, VAR_0x8005
# 676 "data/maps/Route109/scripts.pory"
	goto_if_lt Route109_EventScript_SorryNotEnoughBadges
# 678 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EnterCantLeave, MSGBOX_YESNO
# 680 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route109_EventScript_HotHouseGirl_25
Route109_EventScript_HotHouseGirl_24:
# 686 "data/maps/Route109/scripts.pory"
	copyvar VAR_HOT_HOUSE_STATE, VAR_0x8005
# 687 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 1
# 689 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GoodLuckTrainer, MSGBOX_DEFAULT
# 690 "data/maps/Route109/scripts.pory"
	closemessage
# 692 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 694 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_HotHouseGirl_29
# 699 "data/maps/Route109/scripts.pory"
	case DIR_NORTH, Route109_EventScript_HotHouseGirl_30
# 704 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_HotHouseGirl_31
# 710 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepWest
# 711 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 712 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepNorth
# 713 "data/maps/Route109/scripts.pory"
	waitmovement 0
Route109_EventScript_HotHouseGirl_27:
# 717 "data/maps/Route109/scripts.pory"
	warp MAP_ROUTE109_SEASHORE_HOUSE, 6, 9
# 718 "data/maps/Route109/scripts.pory"
	waitstate
# 719 "data/maps/Route109/scripts.pory"
	release
	end

Route109_EventScript_HotHouseGirl_2:
# 625 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_1, 3
	goto Route109_EventScript_HotHouseGirl_1

Route109_EventScript_HotHouseGirl_6:
# 632 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_3, 4
	goto Route109_EventScript_HotHouseGirl_5

Route109_EventScript_HotHouseGirl_10:
# 639 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_5, 5
	goto Route109_EventScript_HotHouseGirl_9

Route109_EventScript_HotHouseGirl_14:
# 646 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_7, 6
	goto Route109_EventScript_HotHouseGirl_13

Route109_EventScript_HotHouseGirl_18:
# 653 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_HotHouseGirl_Text_9, 7
	goto Route109_EventScript_HotHouseGirl_17

Route109_EventScript_HotHouseGirl_22:
# 666 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_HotHouseNo
	goto Route109_EventScript_HotHouseGirl_21

Route109_EventScript_HotHouseGirl_25:
# 682 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_HotHouseNo
	goto Route109_EventScript_HotHouseGirl_24

Route109_EventScript_HotHouseGirl_29:
# 695 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepEast
# 696 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 697 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepEast
# 698 "data/maps/Route109/scripts.pory"
	waitmovement 0
	goto Route109_EventScript_HotHouseGirl_27

Route109_EventScript_HotHouseGirl_30:
# 700 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepWest
# 701 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 702 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepNorth
# 703 "data/maps/Route109/scripts.pory"
	waitmovement 0
	goto Route109_EventScript_HotHouseGirl_27

Route109_EventScript_HotHouseGirl_31:
# 705 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepWest
# 706 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 707 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepWest
# 708 "data/maps/Route109/scripts.pory"
	waitmovement 0
	goto Route109_EventScript_HotHouseGirl_27


Route109_EventScript_SeashoreHouseGirlNoBadge::
# 724 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PapasSpotGettingFixed
# 725 "data/maps/Route109/scripts.pory"
	release
	end


Route109_EventScript_HotHouseNo::
# 730 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HotHouseNo
# 731 "data/maps/Route109/scripts.pory"
	setvar VAR_HOT_HOUSE_STATE, 0
# 732 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 0
# 733 "data/maps/Route109/scripts.pory"
	release
	end


Route109_EventScript_SorryNotEnoughBadges::
# 738 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SorryNotEnoughBadges
# 739 "data/maps/Route109/scripts.pory"
	setvar VAR_HOT_HOUSE_STATE, 0
# 740 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 0
# 741 "data/maps/Route109/scripts.pory"
	release
	end


HotHouseGirlUnblockStepWest::
# 747 "data/maps/Route109/scripts.pory"
	walk_left
# 748 "data/maps/Route109/scripts.pory"
	face_right
# 749 "data/maps/Route109/scripts.pory"
	step_end
	return


HotHouseGirlUnblockStepEast::
# 754 "data/maps/Route109/scripts.pory"
	walk_right
# 755 "data/maps/Route109/scripts.pory"
	face_left
# 756 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnterHotHouseStepEast::
# 761 "data/maps/Route109/scripts.pory"
	walk_right
# 762 "data/maps/Route109/scripts.pory"
	walk_up
# 763 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnterHotHouseStepWest::
# 768 "data/maps/Route109/scripts.pory"
	walk_left
# 769 "data/maps/Route109/scripts.pory"
	walk_up
# 770 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnterHotHouseStepNorth::
# 775 "data/maps/Route109/scripts.pory"
	walk_up
# 776 "data/maps/Route109/scripts.pory"
	walk_up
# 777 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnteredHotHouse::
# 782 "data/maps/Route109/scripts.pory"
	walk_up
# 783 "data/maps/Route109/scripts.pory"
	step_end
	return


SetHotHouseGirlPermLoc::
# 787 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_LITTLE_GIRL, 11, 6
	end


Route109_EventScript_HotHouseGirl_Text_0:
# 622 "data/maps/Route109/scripts.pory"
	.string "Tyrogue$"

Route109_EventScript_HotHouseGirl_Text_1:
# 625 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Togepi{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_HotHouseGirl_Text_2:
# 628 "data/maps/Route109/scripts.pory"
	.string "Togepi$"

Route109_EventScript_HotHouseGirl_Text_3:
# 632 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Eevee{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_HotHouseGirl_Text_4:
# 635 "data/maps/Route109/scripts.pory"
	.string "Eevee$"

Route109_EventScript_HotHouseGirl_Text_5:
# 639 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Riolu{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_HotHouseGirl_Text_6:
# 642 "data/maps/Route109/scripts.pory"
	.string "Riolu$"

Route109_EventScript_HotHouseGirl_Text_7:
# 646 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Type: Null{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_HotHouseGirl_Text_8:
# 649 "data/maps/Route109/scripts.pory"
	.string "Type: Null$"

Route109_EventScript_HotHouseGirl_Text_9:
# 653 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}Charcadet{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_HotHouseGirl_Text_10:
# 656 "data/maps/Route109/scripts.pory"
	.string "Charcadet$"

Route109_EventScript_HotHouseGirl_Text_11:
# 659 "data/maps/Route109/scripts.pory"
	.string "Cancel$"

Route109_Text_PapasSpotGettingFixed::
# 791 "data/maps/Route109/scripts.pory"
	.string "Yo, trainer!\p"
	.string "Sorry, my papa's spot is getting fixed\n"
	.string "up right now.\p"
	.string "Make sure you come back later to see\n"
	.string "the hottest spot in town, though!$"

Route109_Text_HotHouseFullIntro::
# 799 "data/maps/Route109/scripts.pory"
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
# 816 "data/maps/Route109/scripts.pory"
	.string "You got it, trainer!\n"
	.string "Papa said I have to warn everyone again\l"
	.string "before they go inside:\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Once you enter the Hot House, you can't\n"
	.string "leave or use your PC until you white out\l"
	.string "or beat all the trainers; {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}is that okay?$"

Route109_Text_GoodLuckTrainer::
# 825 "data/maps/Route109/scripts.pory"
	.string "That's what I'm talking about, yeah!\n"
	.string "You got this, trainer, good luck in\l"
	.string "there!$"

Route109_Text_HotHouseNo::
# 832 "data/maps/Route109/scripts.pory"
	.string "No worries! The Hot House is open if you\n"
	.string "change your mind!$"

Route109_Text_SorryNotEnoughBadges::
# 837 "data/maps/Route109/scripts.pory"
	.string "It looks like you don't have enough\n"
	.string "Badges to compete for that reward yet.\l"
	.string "Come back once you have more Badges!$"
