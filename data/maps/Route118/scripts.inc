# 1 "data/maps/Route118/scripts.pory"

# 2 "data/maps/Route118/scripts.pory"
.set LOCALID_STEVEN, 19
# 3 "data/maps/Route118/scripts.pory"
.set LOCALID_WAKE, 22
# 4 "data/maps/Route118/scripts.pory"

# 5 "data/maps/Route118/scripts.pory"
Route118_MapScripts::
# 6 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_OnTransition
# 7 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route118_OnLoad
# 8 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route118_OnFrame
# 9 "data/maps/Route118/scripts.pory"
	.byte 0
# 10 "data/maps/Route118/scripts.pory"

# 11 "data/maps/Route118/scripts.pory"
Route118_OnTransition:
# 12 "data/maps/Route118/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 13 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 14 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_StartGroudonWeather
# 15 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_StartGroudonWeather
# 16 "data/maps/Route118/scripts.pory"
	end
# 17 "data/maps/Route118/scripts.pory"

# 18 "data/maps/Route118/scripts.pory"
Route118_OnLoad:
# 19 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_EventScript_PlaceTilesRoute118East
# 20 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_EventScript_PlaceTilesRoute118West
# 21 "data/maps/Route118/scripts.pory"
	end
# 22 "data/maps/Route118/scripts.pory"

# 23 "data/maps/Route118/scripts.pory"
Route118_OnFrame:
# 24 "data/maps/Route118/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 25 "data/maps/Route118/scripts.pory"
	.2byte 0
# 26 "data/maps/Route118/scripts.pory"

# 27 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman::
# 28 "data/maps/Route118/scripts.pory"
	lock
# 29 "data/maps/Route118/scripts.pory"
	faceplayer
# 30 "data/maps/Route118/scripts.pory"
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Route118_EventScript_ReceivedGoodRod
# 31 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
# 32 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route118_EventScript_ReceiveGoodRod
# 33 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route118_EventScript_DeclineGoodRod
# 34 "data/maps/Route118/scripts.pory"
	end
# 35 "data/maps/Route118/scripts.pory"

# 36 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceiveGoodRod::
# 37 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
# 38 "data/maps/Route118/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 39 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 40 "data/maps/Route118/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 41 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
# 42 "data/maps/Route118/scripts.pory"
	release
# 43 "data/maps/Route118/scripts.pory"
	end
# 44 "data/maps/Route118/scripts.pory"

# 45 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeclineGoodRod::
# 46 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 47 "data/maps/Route118/scripts.pory"
	release
# 48 "data/maps/Route118/scripts.pory"
	end
# 49 "data/maps/Route118/scripts.pory"

# 50 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceivedGoodRod::
# 51 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
# 52 "data/maps/Route118/scripts.pory"
	release
# 53 "data/maps/Route118/scripts.pory"
	end
# 54 "data/maps/Route118/scripts.pory"

# 55 "data/maps/Route118/scripts.pory"
Route118_EventScript_Girl::
# 56 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
# 57 "data/maps/Route118/scripts.pory"
	end
# 58 "data/maps/Route118/scripts.pory"

# 59 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSignMauville::
# 60 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
# 61 "data/maps/Route118/scripts.pory"
	end
# 62 "data/maps/Route118/scripts.pory"

# 63 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSign119::
# 64 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
# 65 "data/maps/Route118/scripts.pory"
	end
# 66 "data/maps/Route118/scripts.pory"

# 67 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger0::
# 68 "data/maps/Route118/scripts.pory"
	lockall
# 69 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 0
# 70 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 71 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge0
# 73 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 75 "data/maps/Route118/scripts.pory"
	end
# 76 "data/maps/Route118/scripts.pory"

# 77 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger1::
# 78 "data/maps/Route118/scripts.pory"
	lockall
# 79 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 1
# 80 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 81 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 83 "data/maps/Route118/scripts.pory"
	end
# 84 "data/maps/Route118/scripts.pory"

# 85 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger2::
# 86 "data/maps/Route118/scripts.pory"
	lockall
# 87 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 2
# 88 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 89 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge2
# 91 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 93 "data/maps/Route118/scripts.pory"
	end
# 94 "data/maps/Route118/scripts.pory"

# 95 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger::
# 96 "data/maps/Route118/scripts.pory"
	playse SE_LEDGE
# 97 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenJumpLedge
# 98 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route118/scripts.pory"
	delay 30
# 100 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
# 101 "data/maps/Route118/scripts.pory"
	closemessage
# 102 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route118_EventScript_StevenExit0
# 103 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route118_EventScript_StevenExit1
# 104 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route118_EventScript_StevenExit2
# 105 "data/maps/Route118/scripts.pory"
	setvar VAR_ROUTE118_STATE, 1
# 106 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_STEVEN
# 107 "data/maps/Route118/scripts.pory"
	releaseall
# 108 "data/maps/Route118/scripts.pory"
	end
# 109 "data/maps/Route118/scripts.pory"

# 110 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit0::
# 111 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 112 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit0
# 113 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route118/scripts.pory"
	return
# 115 "data/maps/Route118/scripts.pory"

# 116 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit1::
# 117 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 118 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit1
# 119 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route118/scripts.pory"
	return
# 121 "data/maps/Route118/scripts.pory"

# 122 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit2::
# 123 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 124 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit2
# 125 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route118/scripts.pory"
	return
# 127 "data/maps/Route118/scripts.pory"

# 128 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenExit:
# 129 "data/maps/Route118/scripts.pory"
	delay_16
# 130 "data/maps/Route118/scripts.pory"
	walk_in_place_faster_right
# 131 "data/maps/Route118/scripts.pory"
	step_end
# 132 "data/maps/Route118/scripts.pory"

# 133 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge0:
# 134 "data/maps/Route118/scripts.pory"
	walk_left
# 135 "data/maps/Route118/scripts.pory"
	step_end
# 136 "data/maps/Route118/scripts.pory"

# 137 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge2:
# 138 "data/maps/Route118/scripts.pory"
	walk_right
# 139 "data/maps/Route118/scripts.pory"
	step_end
# 140 "data/maps/Route118/scripts.pory"

# 141 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenJumpLedge:
# 142 "data/maps/Route118/scripts.pory"
	jump_2_down
# 143 "data/maps/Route118/scripts.pory"
	delay_16
# 144 "data/maps/Route118/scripts.pory"
	walk_down
# 145 "data/maps/Route118/scripts.pory"
	step_end
# 146 "data/maps/Route118/scripts.pory"

# 147 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit0:
# 148 "data/maps/Route118/scripts.pory"
	walk_right
# 149 "data/maps/Route118/scripts.pory"
	walk_right
# 150 "data/maps/Route118/scripts.pory"
	walk_right
# 151 "data/maps/Route118/scripts.pory"
	walk_right
# 152 "data/maps/Route118/scripts.pory"
	walk_right
# 153 "data/maps/Route118/scripts.pory"
	walk_right
# 154 "data/maps/Route118/scripts.pory"
	walk_right
# 155 "data/maps/Route118/scripts.pory"
	walk_right
# 156 "data/maps/Route118/scripts.pory"
	walk_right
# 157 "data/maps/Route118/scripts.pory"
	walk_right
# 158 "data/maps/Route118/scripts.pory"
	step_end
# 159 "data/maps/Route118/scripts.pory"

# 160 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit1:
# 161 "data/maps/Route118/scripts.pory"
	walk_right
# 162 "data/maps/Route118/scripts.pory"
	walk_right
# 163 "data/maps/Route118/scripts.pory"
	walk_right
# 164 "data/maps/Route118/scripts.pory"
	walk_right
# 165 "data/maps/Route118/scripts.pory"
	walk_right
# 166 "data/maps/Route118/scripts.pory"
	walk_right
# 167 "data/maps/Route118/scripts.pory"
	walk_right
# 168 "data/maps/Route118/scripts.pory"
	walk_right
# 169 "data/maps/Route118/scripts.pory"
	walk_right
# 170 "data/maps/Route118/scripts.pory"
	step_end
# 171 "data/maps/Route118/scripts.pory"

# 172 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit2:
# 173 "data/maps/Route118/scripts.pory"
	walk_right
# 174 "data/maps/Route118/scripts.pory"
	walk_right
# 175 "data/maps/Route118/scripts.pory"
	walk_right
# 176 "data/maps/Route118/scripts.pory"
	walk_right
# 177 "data/maps/Route118/scripts.pory"
	walk_right
# 178 "data/maps/Route118/scripts.pory"
	walk_right
# 179 "data/maps/Route118/scripts.pory"
	walk_right
# 180 "data/maps/Route118/scripts.pory"
	walk_right
# 181 "data/maps/Route118/scripts.pory"
	step_end
# 182 "data/maps/Route118/scripts.pory"

# 183 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose::
# 184 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
# 185 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 186 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchRose
# 187 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
# 188 "data/maps/Route118/scripts.pory"
	release
# 189 "data/maps/Route118/scripts.pory"
	end
# 190 "data/maps/Route118/scripts.pory"

# 191 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterRose::
# 192 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 193 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 194 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 195 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 196 "data/maps/Route118/scripts.pory"
	release
# 197 "data/maps/Route118/scripts.pory"
	end
# 198 "data/maps/Route118/scripts.pory"

# 199 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchRose::
# 200 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 201 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
# 202 "data/maps/Route118/scripts.pory"
	end
# 203 "data/maps/Route118/scripts.pory"

# 204 "data/maps/Route118/scripts.pory"
Route118_EventScript_Barny::
# 205 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
# 206 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/Route118/scripts.pory"
	end
# 208 "data/maps/Route118/scripts.pory"

# 209 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade::
# 210 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
# 211 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route118/scripts.pory"
	end
# 213 "data/maps/Route118/scripts.pory"

# 214 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton::
# 215 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
# 216 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 217 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchDalton
# 218 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 219 "data/maps/Route118/scripts.pory"
	release
# 220 "data/maps/Route118/scripts.pory"
	end
# 221 "data/maps/Route118/scripts.pory"

# 222 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton::
# 223 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 224 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 226 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 227 "data/maps/Route118/scripts.pory"
	release
# 228 "data/maps/Route118/scripts.pory"
	end
# 229 "data/maps/Route118/scripts.pory"

# 230 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton::
# 231 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 232 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 233 "data/maps/Route118/scripts.pory"
	end
# 234 "data/maps/Route118/scripts.pory"

# 235 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry::
# 236 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 237 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route118/scripts.pory"
	end
# 239 "data/maps/Route118/scripts.pory"

# 240 "data/maps/Route118/scripts.pory"
Route118_EventScript_Chester::
# 241 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
# 242 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 243 "data/maps/Route118/scripts.pory"
	end
# 244 "data/maps/Route118/scripts.pory"

# 245 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre::
# 246 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
# 247 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 248 "data/maps/Route118/scripts.pory"
	end
# 249 "data/maps/Route118/scripts.pory"

# 250 "data/maps/Route118/scripts.pory"
Route118_Text_StevenQuestions:
# 251 "data/maps/Route118/scripts.pory"
	.string "STEVEN: Hi, {PLAYER}{KUN}!\p"
# 252 "data/maps/Route118/scripts.pory"
	.string "It's me, STEVEN!\n"
# 253 "data/maps/Route118/scripts.pory"
	.string "We met in the cave near DEWFORD.\p"
# 254 "data/maps/Route118/scripts.pory"
	.string "Have you met many kinds of POKéMON\n"
# 255 "data/maps/Route118/scripts.pory"
	.string "since I last saw you?\p"
# 256 "data/maps/Route118/scripts.pory"
	.string "There are many, many kinds of POKéMON\n"
# 257 "data/maps/Route118/scripts.pory"
	.string "in this wide world of ours.\p"
# 258 "data/maps/Route118/scripts.pory"
	.string "If you wanted to raise only your\n"
# 259 "data/maps/Route118/scripts.pory"
	.string "favorites, that's fine.\p"
# 260 "data/maps/Route118/scripts.pory"
	.string "Perhaps you find it more fun to raise\n"
# 261 "data/maps/Route118/scripts.pory"
	.string "all sorts of POKéMON.\p"
# 262 "data/maps/Route118/scripts.pory"
	.string "As a TRAINER of POKéMON,\n"
# 263 "data/maps/Route118/scripts.pory"
	.string "what do you think?\p"
# 264 "data/maps/Route118/scripts.pory"
	.string "Of course, it's not any of my business.\p"
# 265 "data/maps/Route118/scripts.pory"
	.string "It would be nice if we were to meet\n"
# 266 "data/maps/Route118/scripts.pory"
	.string "again somewhere.$"
# 267 "data/maps/Route118/scripts.pory"

# 268 "data/maps/Route118/scripts.pory"
Route118_Text_YouAgreeGoodRodIsGood:
# 269 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 270 "data/maps/Route118/scripts.pory"
	.string "A GOOD ROD is really good!\p"
# 271 "data/maps/Route118/scripts.pory"
	.string "Wouldn't you agree?$"
# 272 "data/maps/Route118/scripts.pory"

# 273 "data/maps/Route118/scripts.pory"
Route118_Text_IdenticalMindsTakeThis:
# 274 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 275 "data/maps/Route118/scripts.pory"
	.string "We're of identical minds!\p"
# 276 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 277 "data/maps/Route118/scripts.pory"
	.string "Take this GOOD ROD!$"
# 278 "data/maps/Route118/scripts.pory"

# 279 "data/maps/Route118/scripts.pory"
Route118_Text_TryYourLuckFishing:
# 280 "data/maps/Route118/scripts.pory"
	.string "Wherever there's water, try your luck\n"
# 281 "data/maps/Route118/scripts.pory"
	.string "at fishing.$"
# 282 "data/maps/Route118/scripts.pory"

# 283 "data/maps/Route118/scripts.pory"
Route118_Text_DontYouLikeToFish:
# 284 "data/maps/Route118/scripts.pory"
	.string "Don't you like to fish?$"
# 285 "data/maps/Route118/scripts.pory"

# 286 "data/maps/Route118/scripts.pory"
Route118_Text_TryCatchingMonWithGoodRod:
# 287 "data/maps/Route118/scripts.pory"
	.string "Try catching all sorts of POKéMON\n"
# 288 "data/maps/Route118/scripts.pory"
	.string "with your GOOD ROD.$"
# 289 "data/maps/Route118/scripts.pory"

# 290 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf:
# 291 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
# 292 "data/maps/Route118/scripts.pory"
	.string "cross rivers and the sea if you have\l"
# 293 "data/maps/Route118/scripts.pory"
	.string "a POKéMON that knows SURF.\p"
# 294 "data/maps/Route118/scripts.pory"
	.string "POKéMON can be counted on to do so\n"
# 295 "data/maps/Route118/scripts.pory"
	.string "much!$"
# 296 "data/maps/Route118/scripts.pory"

# 297 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville:
# 298 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
# 299 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} MAUVILLE CITY$"
# 300 "data/maps/Route118/scripts.pory"

# 301 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119:
# 302 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
# 303 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} ROUTE 119$"

Route118_EventScript_Wake::
# 308 "data/maps/Route118/scripts.pory"
	lockall
# 309 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_WAKE, Common_Movement_FacePlayer
# 310 "data/maps/Route118/scripts.pory"
	goto_if_set FLAG_RECEIVED_WAKE_ITEMS, Route118_EventScript_WakeDefeated
# 311 "data/maps/Route118/scripts.pory"
	goto_if_set FLAG_DECLINED_WAKE_BATTLE, Route118_EventScript_WakeRequestBattleAgain
# 312 "data/maps/Route118/scripts.pory"
	msgbox Wake_Greeting, MSGBOX_YESNO
# 313 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_BattleWakePrompt
	end


Route118_EventScript_WakeRequestBattleAgain::
# 318 "data/maps/Route118/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 319 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_BattleWakePrompt
	end


Route118_EventScript_BattleWakePrompt::
# 324 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route118_EventScript_BattleWake
# 325 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route118_EventScript_DeclineWakeBattle
# 326 "data/maps/Route118/scripts.pory"
	closemessage
	end


Route118_EventScript_DeclineWakeBattle::
# 331 "data/maps/Route118/scripts.pory"
	setflag FLAG_DECLINED_WAKE_BATTLE
# 332 "data/maps/Route118/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 333 "data/maps/Route118/scripts.pory"
	release
	end


Route118_EventScript_BattleWake::
# 338 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_BattleWake_Text_0, MSGBOX_DEFAULT
# 339 "data/maps/Route118/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKE, Wake_Outro
# 340 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_WakeGiveItems
	return


Route118_EventScript_WakeGiveItems::
# 345 "data/maps/Route118/scripts.pory"
	giveitem ITEM_LAPRASITE
# 346 "data/maps/Route118/scripts.pory"
	giveitem ITEM_DREDNAWITE
# 347 "data/maps/Route118/scripts.pory"
	giveitem ITEM_GYARADOSITE
# 348 "data/maps/Route118/scripts.pory"
	setflag FLAG_RECEIVED_WAKE_ITEMS
# 349 "data/maps/Route118/scripts.pory"
	msgbox Wake_ExplainItems
# 350 "data/maps/Route118/scripts.pory"
	release
	end


Route118_EventScript_WakeDefeated::
# 355 "data/maps/Route118/scripts.pory"
	msgbox PostBattle_Wake, MSGBOX_DEFAULT
# 356 "data/maps/Route118/scripts.pory"
	releaseall
	end


Route118_EventScript_BattleWake_Text_0:
# 338 "data/maps/Route118/scripts.pory"
	.string "Let's do this.$"

Wake_Greeting::
# 360 "data/maps/Route118/scripts.pory"
	.string "GLUB GLUB This better be good if\n"
	.string "you're interrupting my training. You\l"
	.string "wanna battle or not?$"

Wake_Outro::
# 366 "data/maps/Route118/scripts.pory"
	.string "Wow, what a fight. I know I'll be leaving\n"
	.string "these items in good hands.$"

Wake_ExplainItems::
# 371 "data/maps/Route118/scripts.pory"
	.string "Those are the best Mega stones I have.\n"
	.string "Hope you put them to good use.$"

PostBattle_Wake::
# 376 "data/maps/Route118/scripts.pory"
	.string "GLUB GLUB What now?!$"
