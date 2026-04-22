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
Route118_EventScript_FormerGoodRodFisherman::
# 28 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_FormerGoodRod, MSGBOX_NPC
# 29 "data/maps/Route118/scripts.pory"
	end
# 30 "data/maps/Route118/scripts.pory"

# 31 "data/maps/Route118/scripts.pory"
Route118_EventScript_Girl::
# 32 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
# 33 "data/maps/Route118/scripts.pory"
	end
# 34 "data/maps/Route118/scripts.pory"

# 35 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSignMauville::
# 36 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
# 37 "data/maps/Route118/scripts.pory"
	end
# 38 "data/maps/Route118/scripts.pory"

# 39 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSign119::
# 40 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
# 41 "data/maps/Route118/scripts.pory"
	end
# 42 "data/maps/Route118/scripts.pory"

# 43 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger0::
# 44 "data/maps/Route118/scripts.pory"
	lockall
# 45 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 0
# 46 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 47 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge0
# 49 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 51 "data/maps/Route118/scripts.pory"
	end
# 52 "data/maps/Route118/scripts.pory"

# 53 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger1::
# 54 "data/maps/Route118/scripts.pory"
	lockall
# 55 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 1
# 56 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 57 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 59 "data/maps/Route118/scripts.pory"
	end
# 60 "data/maps/Route118/scripts.pory"

# 61 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger2::
# 62 "data/maps/Route118/scripts.pory"
	lockall
# 63 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 2
# 64 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 65 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge2
# 67 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 69 "data/maps/Route118/scripts.pory"
	end
# 70 "data/maps/Route118/scripts.pory"

# 71 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger::
# 72 "data/maps/Route118/scripts.pory"
	playse SE_LEDGE
# 73 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenJumpLedge
# 74 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route118/scripts.pory"
	delay 30
# 76 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
# 77 "data/maps/Route118/scripts.pory"
	closemessage
# 78 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route118_EventScript_StevenExit0
# 79 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route118_EventScript_StevenExit1
# 80 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route118_EventScript_StevenExit2
# 81 "data/maps/Route118/scripts.pory"
	setvar VAR_ROUTE118_STATE, 1
# 82 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_STEVEN
# 83 "data/maps/Route118/scripts.pory"
	releaseall
# 84 "data/maps/Route118/scripts.pory"
	end
# 85 "data/maps/Route118/scripts.pory"

# 86 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit0::
# 87 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 88 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit0
# 89 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route118/scripts.pory"
	return
# 91 "data/maps/Route118/scripts.pory"

# 92 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit1::
# 93 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 94 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit1
# 95 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route118/scripts.pory"
	return
# 97 "data/maps/Route118/scripts.pory"

# 98 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit2::
# 99 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 100 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit2
# 101 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route118/scripts.pory"
	return
# 103 "data/maps/Route118/scripts.pory"

# 104 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenExit:
# 105 "data/maps/Route118/scripts.pory"
	delay_16
# 106 "data/maps/Route118/scripts.pory"
	walk_in_place_faster_right
# 107 "data/maps/Route118/scripts.pory"
	step_end
# 108 "data/maps/Route118/scripts.pory"

# 109 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge0:
# 110 "data/maps/Route118/scripts.pory"
	walk_left
# 111 "data/maps/Route118/scripts.pory"
	step_end
# 112 "data/maps/Route118/scripts.pory"

# 113 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge2:
# 114 "data/maps/Route118/scripts.pory"
	walk_right
# 115 "data/maps/Route118/scripts.pory"
	step_end
# 116 "data/maps/Route118/scripts.pory"

# 117 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenJumpLedge:
# 118 "data/maps/Route118/scripts.pory"
	jump_2_down
# 119 "data/maps/Route118/scripts.pory"
	delay_16
# 120 "data/maps/Route118/scripts.pory"
	walk_down
# 121 "data/maps/Route118/scripts.pory"
	step_end
# 122 "data/maps/Route118/scripts.pory"

# 123 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit0:
# 124 "data/maps/Route118/scripts.pory"
	walk_right
# 125 "data/maps/Route118/scripts.pory"
	walk_right
# 126 "data/maps/Route118/scripts.pory"
	walk_right
# 127 "data/maps/Route118/scripts.pory"
	walk_right
# 128 "data/maps/Route118/scripts.pory"
	walk_right
# 129 "data/maps/Route118/scripts.pory"
	walk_right
# 130 "data/maps/Route118/scripts.pory"
	walk_right
# 131 "data/maps/Route118/scripts.pory"
	walk_right
# 132 "data/maps/Route118/scripts.pory"
	walk_right
# 133 "data/maps/Route118/scripts.pory"
	walk_right
# 134 "data/maps/Route118/scripts.pory"
	step_end
# 135 "data/maps/Route118/scripts.pory"

# 136 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit1:
# 137 "data/maps/Route118/scripts.pory"
	walk_right
# 138 "data/maps/Route118/scripts.pory"
	walk_right
# 139 "data/maps/Route118/scripts.pory"
	walk_right
# 140 "data/maps/Route118/scripts.pory"
	walk_right
# 141 "data/maps/Route118/scripts.pory"
	walk_right
# 142 "data/maps/Route118/scripts.pory"
	walk_right
# 143 "data/maps/Route118/scripts.pory"
	walk_right
# 144 "data/maps/Route118/scripts.pory"
	walk_right
# 145 "data/maps/Route118/scripts.pory"
	walk_right
# 146 "data/maps/Route118/scripts.pory"
	step_end
# 147 "data/maps/Route118/scripts.pory"

# 148 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit2:
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
	step_end
# 158 "data/maps/Route118/scripts.pory"

# 159 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose::
# 160 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
# 161 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 162 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchRose
# 163 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
# 164 "data/maps/Route118/scripts.pory"
	release
# 165 "data/maps/Route118/scripts.pory"
	end
# 166 "data/maps/Route118/scripts.pory"

# 167 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterRose::
# 168 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 169 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 171 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 172 "data/maps/Route118/scripts.pory"
	release
# 173 "data/maps/Route118/scripts.pory"
	end
# 174 "data/maps/Route118/scripts.pory"

# 175 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchRose::
# 176 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 177 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
# 178 "data/maps/Route118/scripts.pory"
	end
# 179 "data/maps/Route118/scripts.pory"

# 180 "data/maps/Route118/scripts.pory"
Route118_EventScript_Barny::
# 181 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
# 182 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 183 "data/maps/Route118/scripts.pory"
	end
# 184 "data/maps/Route118/scripts.pory"

# 185 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade::
# 186 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
# 187 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/Route118/scripts.pory"
	end
# 189 "data/maps/Route118/scripts.pory"

# 190 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton::
# 191 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
# 192 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 193 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchDalton
# 194 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 195 "data/maps/Route118/scripts.pory"
	release
# 196 "data/maps/Route118/scripts.pory"
	end
# 197 "data/maps/Route118/scripts.pory"

# 198 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton::
# 199 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 200 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 202 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 203 "data/maps/Route118/scripts.pory"
	release
# 204 "data/maps/Route118/scripts.pory"
	end
# 205 "data/maps/Route118/scripts.pory"

# 206 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton::
# 207 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 208 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route118/scripts.pory"
	end
# 210 "data/maps/Route118/scripts.pory"

# 211 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry::
# 212 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 213 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/Route118/scripts.pory"
	end
# 215 "data/maps/Route118/scripts.pory"

# 216 "data/maps/Route118/scripts.pory"
Route118_EventScript_Chester::
# 217 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
# 218 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/Route118/scripts.pory"
	end
# 220 "data/maps/Route118/scripts.pory"

# 221 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre::
# 222 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
# 223 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/Route118/scripts.pory"
	end
# 225 "data/maps/Route118/scripts.pory"

# 226 "data/maps/Route118/scripts.pory"
Route118_Text_StevenQuestions:
# 227 "data/maps/Route118/scripts.pory"
	.string "Hi, {PLAYER}{KUN}, it's me, Steven!\n"
# 228 "data/maps/Route118/scripts.pory"
	.string "We met in the cave near Dewford,\l"
# 229 "data/maps/Route118/scripts.pory"
	.string "I hope you've been doing well\l"
# 230 "data/maps/Route118/scripts.pory"
	.string "since then!\p"
# 231 "data/maps/Route118/scripts.pory"
	.string "I'm glad I bumped into you here.\n"
# 232 "data/maps/Route118/scripts.pory"
	.string "You see, I recently spoke with Drake,\l"
# 233 "data/maps/Route118/scripts.pory"
	.string "and he told me about the increase in\l"
# 234 "data/maps/Route118/scripts.pory"
	.string "nefarious activities by Team Aqua and\l"
# 235 "data/maps/Route118/scripts.pory"
	.string "Team Magma.\p"
# 236 "data/maps/Route118/scripts.pory"
	.string "He also mentioned that he encountered\n"
# 237 "data/maps/Route118/scripts.pory"
	.string "you on more than one occasion, and he\l"
# 238 "data/maps/Route118/scripts.pory"
	.string "was very impressed by how you were able\l"
# 239 "data/maps/Route118/scripts.pory"
	.string "to stop both groups all on your own.\p"
# 240 "data/maps/Route118/scripts.pory"
	.string "I am bringing this up now because there\n"
# 241 "data/maps/Route118/scripts.pory"
	.string "have been reports of more disturbances\l"
# 242 "data/maps/Route118/scripts.pory"
	.string "being caused by both organizations.\p"
# 243 "data/maps/Route118/scripts.pory"
	.string "One such disturbance is a supposed\n"
# 244 "data/maps/Route118/scripts.pory"
	.string "attack on the Weather Institute, which\l"
# 245 "data/maps/Route118/scripts.pory"
	.string "lies further ahead on Route 119.\p"
# 246 "data/maps/Route118/scripts.pory"
	.string "Would you mind investigating this\n"
# 247 "data/maps/Route118/scripts.pory"
	.string "activity, {PLAYER}?\p"
# 248 "data/maps/Route118/scripts.pory"
	.string "… … … … … …\p"
# 249 "data/maps/Route118/scripts.pory"
	.string "Great, thank you so much!\n"
# 250 "data/maps/Route118/scripts.pory"
	.string "Best of luck, and be careful out there!$"
# 251 "data/maps/Route118/scripts.pory"

# 252 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf:
# 253 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
# 254 "data/maps/Route118/scripts.pory"
	.string "cross rivers and the sea if you have\l"
# 255 "data/maps/Route118/scripts.pory"
	.string "a Pokémon that knows SURF.\p"
# 256 "data/maps/Route118/scripts.pory"
	.string "Pokémon can be counted on to do so\n"
# 257 "data/maps/Route118/scripts.pory"
	.string "much!$"
# 258 "data/maps/Route118/scripts.pory"

# 259 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville:
# 260 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
# 261 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} MAUVILLE CITY$"
# 262 "data/maps/Route118/scripts.pory"

# 263 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119:
# 264 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
# 265 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} ROUTE 119$"
# 266 "data/maps/Route118/scripts.pory"

# 267 "data/maps/Route118/scripts.pory"
Route118_Text_FormerGoodRod:
# 268 "data/maps/Route118/scripts.pory"
	.string "I used to go fishing,\n"
# 269 "data/maps/Route118/scripts.pory"
	.string "now, I don't know anymore…$"

Route118_EventScript_Wake::
# 273 "data/maps/Route118/scripts.pory"
	lockall
# 274 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_WAKE, Common_Movement_FacePlayer
# 275 "data/maps/Route118/scripts.pory"
	goto_if_defeated TRAINER_WAKE, Route118_EventScript_WakeDefeated
# 276 "data/maps/Route118/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route118_EventScript_WakeRequestBattleAgain
# 277 "data/maps/Route118/scripts.pory"
	msgbox Wake_Greeting, MSGBOX_YESNO
# 278 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_BattleWakePrompt
	end


Route118_EventScript_WakeRequestBattleAgain::
# 283 "data/maps/Route118/scripts.pory"
	msgbox Wake_ReadyYet, MSGBOX_YESNO
# 284 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_BattleWakePrompt
	end


Route118_EventScript_BattleWakePrompt::
# 289 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route118_EventScript_BattleWake
# 290 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route118_EventScript_DeclineWakeBattle
# 291 "data/maps/Route118/scripts.pory"
	closemessage
	end


Route118_EventScript_DeclineWakeBattle::
# 296 "data/maps/Route118/scripts.pory"
	setflag FLAG_TEMP_1
# 297 "data/maps/Route118/scripts.pory"
	msgbox Wake_ComeBackWhenReady, MSGBOX_DEFAULT
# 298 "data/maps/Route118/scripts.pory"
	release
	end


Route118_EventScript_BattleWake::
# 303 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_BattleWake_Text_0, MSGBOX_DEFAULT
# 304 "data/maps/Route118/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKE, Wake_Outro
# 305 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_WakeGiveItems
	return


Route118_EventScript_WakeGiveItems::
# 310 "data/maps/Route118/scripts.pory"
	giveitem ITEM_LAPRASITE
# 311 "data/maps/Route118/scripts.pory"
	giveitem ITEM_DREDNAWITE
# 312 "data/maps/Route118/scripts.pory"
	giveitem ITEM_GYARADOSITE
# 313 "data/maps/Route118/scripts.pory"
	giveitem ITEM_FOCUS_SASH
# 314 "data/maps/Route118/scripts.pory"
	msgbox Wake_ExplainItems
# 315 "data/maps/Route118/scripts.pory"
	release
	end


Route118_EventScript_WakeDefeated::
# 320 "data/maps/Route118/scripts.pory"
	msgbox PostBattle_Wake, MSGBOX_DEFAULT
# 321 "data/maps/Route118/scripts.pory"
	releaseall
	end


Route118_EventScript_BattleWake_Text_0:
# 303 "data/maps/Route118/scripts.pory"
	.string "GLUB GLUB GLUB GLUB!$"

Wake_Greeting::
# 325 "data/maps/Route118/scripts.pory"
	.string "GLUB GLUB This better be good if\n"
	.string "you're interrupting my training.\p"
	.string "… … … … … …\p"
	.string "GLUB GLUB Who am I?\n"
	.string "I am Crasher Wake of course, ha-ha!\p"
	.string "I came over to the Hoenn region\n"
	.string "because I heard there was plenty of\l"
	.string "water to train in, but honestly, I'd give\l"
	.string "it maybe a 7 out of 10.\p"
	.string "GLUB GLUB Anyway, you wanna battle\n"
	.string "or not?$"

Wake_ReadyYet::
# 339 "data/maps/Route118/scripts.pory"
	.string "GLUB GLUB Ready yet?$"

Wake_ComeBackWhenReady::
# 343 "data/maps/Route118/scripts.pory"
	.string "GLUB GLUB Suit yourself.$"

Wake_Outro::
# 347 "data/maps/Route118/scripts.pory"
	.string "Wow, what a fight. I know I'll be leaving\n"
	.string "these Items in good hands.$"

Wake_ExplainItems::
# 352 "data/maps/Route118/scripts.pory"
	.string "Those are the best Mega stones I have.\n"
	.string "Hope you put them to good use.$"

PostBattle_Wake::
# 357 "data/maps/Route118/scripts.pory"
	.string "GLUB GLUB What now?!$"
