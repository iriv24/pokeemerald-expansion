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
	.byte 0
# 10 "data/maps/Route109/scripts.pory"

# 11 "data/maps/Route109/scripts.pory"
Route109_OnTransition:
# 12 "data/maps/Route109/scripts.pory"
	call_if_set FLAG_BADGE02_GET, SetHotHouseGirlPermLoc
# 13 "data/maps/Route109/scripts.pory"
	end
# 14 "data/maps/Route109/scripts.pory"

# 15 "data/maps/Route109/scripts.pory"
Route109_OnLoad:
# 16 "data/maps/Route109/scripts.pory"
	call_if_set FLAG_BADGE02_GET, SetHotHouseGirlPermLoc
# 17 "data/maps/Route109/scripts.pory"
	end
# 18 "data/maps/Route109/scripts.pory"

# 19 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford::
# 20 "data/maps/Route109/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 21 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 22 "data/maps/Route109/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109, 0
# 23 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_R109, Route109_Movement_BrineyEnterBoat
# 24 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_BRINEY_R109
# 26 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 27 "data/maps/Route109/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
# 28 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_EnterBoatWest
# 29 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_EnterBoatEast
# 30 "data/maps/Route109/scripts.pory"
	end
# 31 "data/maps/Route109/scripts.pory"

# 32 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatSouth::
# 33 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
# 34 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 36 "data/maps/Route109/scripts.pory"
	end
# 37 "data/maps/Route109/scripts.pory"

# 38 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatEast::
# 39 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 40 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 42 "data/maps/Route109/scripts.pory"
	end
# 43 "data/maps/Route109/scripts.pory"

# 44 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatWest::
# 45 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 46 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 48 "data/maps/Route109/scripts.pory"
	end
# 49 "data/maps/Route109/scripts.pory"

# 50 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford::
# 51 "data/maps/Route109/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 52 "data/maps/Route109/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 53 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BOAT_R109, Route109_Movement_SailToDewford
# 54 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_SailToDewford
# 55 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route109/scripts.pory"
	delay 50
# 57 "data/maps/Route109/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 58 "data/maps/Route109/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 59 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerExitBoat
# 60 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 62 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 63 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 64 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 65 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 66 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route109_Movement_BrineyExitBoat
# 67 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 69 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 70 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_BOAT_R109, MAP_ROUTE109
# 71 "data/maps/Route109/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 72 "data/maps/Route109/scripts.pory"
	closemessage
# 73 "data/maps/Route109/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 74 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 75 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 76 "data/maps/Route109/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 77 "data/maps/Route109/scripts.pory"
	release
# 78 "data/maps/Route109/scripts.pory"
	end
# 79 "data/maps/Route109/scripts.pory"

# 80 "data/maps/Route109/scripts.pory"
Route109_Movement_SailToDewford:
# 81 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 82 "data/maps/Route109/scripts.pory"
	walk_down
# 83 "data/maps/Route109/scripts.pory"
	walk_down
# 84 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 85 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 86 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 87 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 88 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 89 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 91 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 92 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 94 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 95 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 96 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 97 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 98 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 99 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 100 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 101 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 102 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 103 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 104 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 105 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 106 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 107 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 108 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 109 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 110 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 111 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 112 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 113 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 114 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 115 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 116 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 117 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 118 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 119 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 120 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 121 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 122 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 123 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 124 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 125 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 126 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 127 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 128 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 129 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 130 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 131 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 132 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 133 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 134 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 135 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 136 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 137 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 138 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 139 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 140 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 141 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 142 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 143 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 144 "data/maps/Route109/scripts.pory"
	walk_faster_left
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
	walk_fast_left
# 243 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 244 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 245 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 246 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 247 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 248 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 249 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 250 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 251 "data/maps/Route109/scripts.pory"
	walk_left
# 252 "data/maps/Route109/scripts.pory"
	walk_left
# 253 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 254 "data/maps/Route109/scripts.pory"
	step_end
# 255 "data/maps/Route109/scripts.pory"

# 256 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatSouth:
# 257 "data/maps/Route109/scripts.pory"
	walk_down
# 258 "data/maps/Route109/scripts.pory"
	walk_down
# 259 "data/maps/Route109/scripts.pory"
	step_end
# 260 "data/maps/Route109/scripts.pory"

# 261 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerExitBoat:
# 262 "data/maps/Route109/scripts.pory"
	walk_down
# 263 "data/maps/Route109/scripts.pory"
	walk_down
# 264 "data/maps/Route109/scripts.pory"
	walk_left
# 265 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_right
# 266 "data/maps/Route109/scripts.pory"
	step_end
# 267 "data/maps/Route109/scripts.pory"

# 268 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatEast:
# 269 "data/maps/Route109/scripts.pory"
	walk_right
# 270 "data/maps/Route109/scripts.pory"
	walk_down
# 271 "data/maps/Route109/scripts.pory"
	step_end
# 272 "data/maps/Route109/scripts.pory"

# 273 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatWest:
# 274 "data/maps/Route109/scripts.pory"
	walk_left
# 275 "data/maps/Route109/scripts.pory"
	walk_down
# 276 "data/maps/Route109/scripts.pory"
	step_end
# 277 "data/maps/Route109/scripts.pory"

# 278 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyEnterBoat:
# 279 "data/maps/Route109/scripts.pory"
	walk_down
# 280 "data/maps/Route109/scripts.pory"
	step_end
# 281 "data/maps/Route109/scripts.pory"

# 282 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyExitBoat:
# 283 "data/maps/Route109/scripts.pory"
	walk_down
# 284 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_left
# 285 "data/maps/Route109/scripts.pory"
	step_end
# 286 "data/maps/Route109/scripts.pory"

# 287 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney::
# 288 "data/maps/Route109/scripts.pory"
	lock
# 289 "data/maps/Route109/scripts.pory"
	faceplayer
# 290 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_HaveNotDeliveredDevonGood
# 291 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 292 "data/maps/Route109/scripts.pory"
	end
# 293 "data/maps/Route109/scripts.pory"

# 294 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood::
# 295 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 296 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 297 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
# 298 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 299 "data/maps/Route109/scripts.pory"
	end
# 300 "data/maps/Route109/scripts.pory"

# 301 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods::
# 302 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 303 "data/maps/Route109/scripts.pory"
	waitmessage
# 304 "data/maps/Route109/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 305 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 306 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_SailToDewford
# 307 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_ChoseNotToSail
# 308 "data/maps/Route109/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
# 309 "data/maps/Route109/scripts.pory"
	end
# 310 "data/maps/Route109/scripts.pory"

# 311 "data/maps/Route109/scripts.pory"
Route109_EventScript_SailToDewford::
# 312 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 313 "data/maps/Route109/scripts.pory"
	closemessage
# 314 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 315 "data/maps/Route109/scripts.pory"
	end
# 316 "data/maps/Route109/scripts.pory"

# 317 "data/maps/Route109/scripts.pory"
Route109_EventScript_StayHere::
# 318 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 319 "data/maps/Route109/scripts.pory"
	release
# 320 "data/maps/Route109/scripts.pory"
	end
# 321 "data/maps/Route109/scripts.pory"

# 322 "data/maps/Route109/scripts.pory"
Route109_EventScript_ChoseNotToSail::
# 323 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 324 "data/maps/Route109/scripts.pory"
	release
# 325 "data/maps/Route109/scripts.pory"
	end
# 326 "data/maps/Route109/scripts.pory"

# 327 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseGirl::
# 328 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Route109_EventScript_SeashoreHouseGirlNoBadge
# 329 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
# 330 "data/maps/Route109/scripts.pory"
	end
# 331 "data/maps/Route109/scripts.pory"

# 332 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseGirlNoBadge::
# 333 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PapasSpotGettingFixed, MSGBOX_NPC
# 334 "data/maps/Route109/scripts.pory"
	end
# 335 "data/maps/Route109/scripts.pory"

# 336 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 337 "data/maps/Route109/scripts.pory"
	lock
# 338 "data/maps/Route109/scripts.pory"
	faceplayer
# 339 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 340 "data/maps/Route109/scripts.pory"
	closemessage
# 341 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 342 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 343 "data/maps/Route109/scripts.pory"
	release
# 344 "data/maps/Route109/scripts.pory"
	end
# 345 "data/maps/Route109/scripts.pory"

# 346 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 347 "data/maps/Route109/scripts.pory"
	lock
# 348 "data/maps/Route109/scripts.pory"
	faceplayer
# 349 "data/maps/Route109/scripts.pory"
	special GetPlayerBigGuyGirlString
# 350 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
# 351 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 352 "data/maps/Route109/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 353 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 354 "data/maps/Route109/scripts.pory"
	closemessage
# 355 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 356 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 357 "data/maps/Route109/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 358 "data/maps/Route109/scripts.pory"
	release
# 359 "data/maps/Route109/scripts.pory"
	end
# 360 "data/maps/Route109/scripts.pory"

# 361 "data/maps/Route109/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand::
# 362 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 363 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 364 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 365 "data/maps/Route109/scripts.pory"
	release
# 366 "data/maps/Route109/scripts.pory"
	end
# 367 "data/maps/Route109/scripts.pory"

# 368 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman::
# 369 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 370 "data/maps/Route109/scripts.pory"
	end
# 371 "data/maps/Route109/scripts.pory"

# 372 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan::
# 373 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 374 "data/maps/Route109/scripts.pory"
	end
# 375 "data/maps/Route109/scripts.pory"

# 376 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon::
# 377 "data/maps/Route109/scripts.pory"
	lock
# 378 "data/maps/Route109/scripts.pory"
	faceplayer
# 379 "data/maps/Route109/scripts.pory"
	waitse
# 380 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 381 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 382 "data/maps/Route109/scripts.pory"
	waitmoncry
# 383 "data/maps/Route109/scripts.pory"
	release
# 384 "data/maps/Route109/scripts.pory"
	end
# 385 "data/maps/Route109/scripts.pory"

# 386 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 387 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 388 "data/maps/Route109/scripts.pory"
	end
# 389 "data/maps/Route109/scripts.pory"

# 390 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 391 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 392 "data/maps/Route109/scripts.pory"
	end
# 393 "data/maps/Route109/scripts.pory"

# 394 "data/maps/Route109/scripts.pory"
Route109_EventScript_David::
# 395 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 396 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 397 "data/maps/Route109/scripts.pory"
	end
# 398 "data/maps/Route109/scripts.pory"

# 399 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice::
# 400 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 401 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 402 "data/maps/Route109/scripts.pory"
	end
# 403 "data/maps/Route109/scripts.pory"

# 404 "data/maps/Route109/scripts.pory"
Route109_EventScript_Huey::
# 405 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 406 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 407 "data/maps/Route109/scripts.pory"
	end
# 408 "data/maps/Route109/scripts.pory"

# 409 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond::
# 410 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 411 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 412 "data/maps/Route109/scripts.pory"
	end
# 413 "data/maps/Route109/scripts.pory"

# 414 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky::
# 415 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
# 416 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 417 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_RickyRematch
# 418 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 419 "data/maps/Route109/scripts.pory"
	release
# 420 "data/maps/Route109/scripts.pory"
	end
# 421 "data/maps/Route109/scripts.pory"

# 422 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 423 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 424 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 425 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 426 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 427 "data/maps/Route109/scripts.pory"
	release
# 428 "data/maps/Route109/scripts.pory"
	end
# 429 "data/maps/Route109/scripts.pory"

# 430 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRematch::
# 431 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 432 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 433 "data/maps/Route109/scripts.pory"
	end
# 434 "data/maps/Route109/scripts.pory"

# 435 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola::
# 436 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
# 437 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 438 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_LolaRematch
# 439 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 440 "data/maps/Route109/scripts.pory"
	release
# 441 "data/maps/Route109/scripts.pory"
	end
# 442 "data/maps/Route109/scripts.pory"

# 443 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 444 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 445 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 446 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 447 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 448 "data/maps/Route109/scripts.pory"
	release
# 449 "data/maps/Route109/scripts.pory"
	end
# 450 "data/maps/Route109/scripts.pory"

# 451 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRematch::
# 452 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 453 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 454 "data/maps/Route109/scripts.pory"
	end
# 455 "data/maps/Route109/scripts.pory"

# 456 "data/maps/Route109/scripts.pory"
Route109_EventScript_Austina::
# 457 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 458 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 459 "data/maps/Route109/scripts.pory"
	end
# 460 "data/maps/Route109/scripts.pory"

# 461 "data/maps/Route109/scripts.pory"
Route109_EventScript_Gwen::
# 462 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 463 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
# 464 "data/maps/Route109/scripts.pory"
	end
# 465 "data/maps/Route109/scripts.pory"

# 466 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter::
# 467 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 468 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 469 "data/maps/Route109/scripts.pory"
	end
# 470 "data/maps/Route109/scripts.pory"

# 471 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul::
# 472 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 473 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 474 "data/maps/Route109/scripts.pory"
	end
# 475 "data/maps/Route109/scripts.pory"

# 476 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel::
# 477 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 478 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 479 "data/maps/Route109/scripts.pory"
	end
# 480 "data/maps/Route109/scripts.pory"

# 481 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler::
# 482 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 483 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 484 "data/maps/Route109/scripts.pory"
	end
# 485 "data/maps/Route109/scripts.pory"

# 486 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey::
# 487 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 488 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 489 "data/maps/Route109/scripts.pory"
	end
# 490 "data/maps/Route109/scripts.pory"

# 491 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah::
# 492 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 493 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 494 "data/maps/Route109/scripts.pory"
	end
# 495 "data/maps/Route109/scripts.pory"

# 496 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 497 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 498 "data/maps/Route109/scripts.pory"
	.string "We've made land in Slateport!\p"
# 499 "data/maps/Route109/scripts.pory"
	.string "I suppose you're going to visit Capt.\n"
# 500 "data/maps/Route109/scripts.pory"
	.string "Stern and deliver the Devon Goods?$"
# 501 "data/maps/Route109/scripts.pory"

# 502 "data/maps/Route109/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion:
# 503 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: I thought you're supposed\n"
# 504 "data/maps/Route109/scripts.pory"
	.string "to deliver the Devon Goods.\p"
# 505 "data/maps/Route109/scripts.pory"
	.string "Would you like to sail back to\n"
# 506 "data/maps/Route109/scripts.pory"
	.string "Dewford, then?$"
# 507 "data/maps/Route109/scripts.pory"

# 508 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDewfordItIs:
# 509 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Dewford it is, then!\p"
# 510 "data/maps/Route109/scripts.pory"
	.string "Anchors aweigh!\n"
# 511 "data/maps/Route109/scripts.pory"
	.string "Peeko, we're setting sail, my darling!$"
# 512 "data/maps/Route109/scripts.pory"

# 513 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods:
# 514 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Then you go on and deliver\n"
# 515 "data/maps/Route109/scripts.pory"
	.string "the Devon Goods. I'll be waiting.$"
# 516 "data/maps/Route109/scripts.pory"

# 517 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 518 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy! We've made land in\n"
# 519 "data/maps/Route109/scripts.pory"
	.string "Slateport!\p"
# 520 "data/maps/Route109/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 521 "data/maps/Route109/scripts.pory"
	.string "you want to set sail again!$"
# 522 "data/maps/Route109/scripts.pory"

# 523 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyWhereAreWeBound:
# 524 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 525 "data/maps/Route109/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 526 "data/maps/Route109/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 527 "data/maps/Route109/scripts.pory"

# 528 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail:
# 529 "data/maps/Route109/scripts.pory"
	.string "Mr. Briney: You just tell me whenever\n"
# 530 "data/maps/Route109/scripts.pory"
	.string "you need to set sail again!$"
# 531 "data/maps/Route109/scripts.pory"

# 532 "data/maps/Route109/scripts.pory"
Route109_Text_ChillAtMyPapasSpot:
# 533 "data/maps/Route109/scripts.pory"
	.string "Yo, trainers!\n"
# 534 "data/maps/Route109/scripts.pory"
	.string "Whether you're hot to trot,\l"
# 535 "data/maps/Route109/scripts.pory"
	.string "or cool cat not,\l"
# 536 "data/maps/Route109/scripts.pory"
	.string "chill at my papa's spot!$"
# 537 "data/maps/Route109/scripts.pory"

# 538 "data/maps/Route109/scripts.pory"
Route109_Text_PapasSpotGettingFixed:
# 539 "data/maps/Route109/scripts.pory"
	.string "Yo, trainer!\p"
# 540 "data/maps/Route109/scripts.pory"
	.string "Sorry, my papa's spot is getting fixed\n"
# 541 "data/maps/Route109/scripts.pory"
	.string "up right now.\p"
# 542 "data/maps/Route109/scripts.pory"
	.string "Make sure you come back later to see\n"
# 543 "data/maps/Route109/scripts.pory"
	.string "the hottest spot in town, though!$"
# 544 "data/maps/Route109/scripts.pory"

# 545 "data/maps/Route109/scripts.pory"
Route109_Text_LittleKidsDartAround:
# 546 "data/maps/Route109/scripts.pory"
	.string "Little kids can dart around so quickly…\p"
# 547 "data/maps/Route109/scripts.pory"
	.string "You don't dare take your eyes off them\n"
# 548 "data/maps/Route109/scripts.pory"
	.string "for an instant. It's very taxing.\p"
# 549 "data/maps/Route109/scripts.pory"
	.string "Mine are with my Pokémon, so they\n"
# 550 "data/maps/Route109/scripts.pory"
	.string "should be okay, but…$"
# 551 "data/maps/Route109/scripts.pory"

# 552 "data/maps/Route109/scripts.pory"
Route109_Text_SandCastleTakingLongTime:
# 553 "data/maps/Route109/scripts.pory"
	.string "Our sand castle's taking a long time\n"
# 554 "data/maps/Route109/scripts.pory"
	.string "to make.$"
# 555 "data/maps/Route109/scripts.pory"

# 556 "data/maps/Route109/scripts.pory"
Route109_Text_YouCanHaveThis:
# 557 "data/maps/Route109/scripts.pory"
	.string "You can have this!$"
# 558 "data/maps/Route109/scripts.pory"

# 559 "data/maps/Route109/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle:
# 560 "data/maps/Route109/scripts.pory"
	.string "We're going to get all the sand from\n"
# 561 "data/maps/Route109/scripts.pory"
	.string "the beach and make a big castle!\p"
# 562 "data/maps/Route109/scripts.pory"
	.string "And then we're going to be a king and\n"
# 563 "data/maps/Route109/scripts.pory"
	.string "queen.\p"
# 564 "data/maps/Route109/scripts.pory"
	.string "We'll let you be a servant.$"
# 565 "data/maps/Route109/scripts.pory"

# 566 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter:
# 567 "data/maps/Route109/scripts.pory"
	.string "The water around these parts is clean.\p"
# 568 "data/maps/Route109/scripts.pory"
	.string "But, I get my Zigzagoon to pick up\n"
# 569 "data/maps/Route109/scripts.pory"
	.string "litter from the shoreline at times.\p"
# 570 "data/maps/Route109/scripts.pory"
	.string "Dirty water becomes rain and joins our\n"
# 571 "data/maps/Route109/scripts.pory"
	.string "rivers, which we drink from…\p"
# 572 "data/maps/Route109/scripts.pory"
	.string "If we pollute the sea, it all comes\n"
# 573 "data/maps/Route109/scripts.pory"
	.string "back to haunt us eventually.$"
# 574 "data/maps/Route109/scripts.pory"

# 575 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonCry:
# 576 "data/maps/Route109/scripts.pory"
	.string "Zigzagoon: Guguu?$"
# 577 "data/maps/Route109/scripts.pory"

# 578 "data/maps/Route109/scripts.pory"
Route109_Text_SeashoreHouseSign:
# 579 "data/maps/Route109/scripts.pory"
	.string "Seashore House\p"
# 580 "data/maps/Route109/scripts.pory"
	.string "“May hot battles rage on hot sands!\n"
# 581 "data/maps/Route109/scripts.pory"
	.string "The place for hot trainers!”$"
# 582 "data/maps/Route109/scripts.pory"

# 583 "data/maps/Route109/scripts.pory"
Route109_Text_TrainerTipsSign:
# 584 "data/maps/Route109/scripts.pory"
	.string "Trainer Tips\p"
# 585 "data/maps/Route109/scripts.pory"
	.string "Some areas are blocked off until\n"
# 586 "data/maps/Route109/scripts.pory"
	.string "certain events are completed, such as\l"
# 587 "data/maps/Route109/scripts.pory"
	.string "obtaining a new Gym Badge.$"

SetHotHouseGirlPermLoc::
# 591 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_LITTLE_GIRL, 11, 6
	return

