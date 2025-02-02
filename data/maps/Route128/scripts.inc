# 1 "data/maps/Route128/scripts.pory"

# 2 "data/maps/Route128/scripts.pory"
.set LOCALID_STEVEN, 3
# 3 "data/maps/Route128/scripts.pory"
.set LOCALID_ARCHIE, 4
# 4 "data/maps/Route128/scripts.pory"
.set LOCALID_MAXIE, 5
# 5 "data/maps/Route128/scripts.pory"

# 6 "data/maps/Route128/scripts.pory"
Route128_MapScripts::
# 7 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route128_OnTransition
# 8 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route128_OnFrame
# 9 "data/maps/Route128/scripts.pory"
	.byte 0
# 10 "data/maps/Route128/scripts.pory"

# 11 "data/maps/Route128/scripts.pory"
Route128_OnTransition:
# 12 "data/maps/Route128/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 13 "data/maps/Route128/scripts.pory"
	end
# 14 "data/maps/Route128/scripts.pory"

# 15 "data/maps/Route128/scripts.pory"
Route128_OnFrame:
# 16 "data/maps/Route128/scripts.pory"
	map_script_2 VAR_ROUTE128_STATE, 1, Route128_EventScript_KyogreAwakenedScene
# 17 "data/maps/Route128/scripts.pory"
	.2byte 0
# 18 "data/maps/Route128/scripts.pory"

# 19 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene::
# 20 "data/maps/Route128/scripts.pory"
	lockall
# 21 "data/maps/Route128/scripts.pory"
	delay 20
# 22 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieLookAround
# 23 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieWhatHappened, MSGBOX_DEFAULT
# 25 "data/maps/Route128/scripts.pory"
	closemessage
# 26 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieBackUp
# 27 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieIOnlyWanted, MSGBOX_DEFAULT
# 29 "data/maps/Route128/scripts.pory"
	closemessage
# 30 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieApproachArchie
# 31 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterUp
# 33 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieDoYouUnderstandNow, MSGBOX_DEFAULT
# 35 "data/maps/Route128/scripts.pory"
	closemessage
# 36 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieApproachPlayer
# 37 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 39 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieResposibilityFallsToArchieAndMe, MSGBOX_DEFAULT
# 41 "data/maps/Route128/scripts.pory"
	closemessage
# 42 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieRunLeft
# 43 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 44 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieWalkLeft
# 45 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieThisDefiesBelief, MSGBOX_DEFAULT
# 47 "data/maps/Route128/scripts.pory"
	closemessage
# 48 "data/maps/Route128/scripts.pory"
	delay 40
# 49 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieExit
# 50 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieExit
# 51 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_MAXIE
# 53 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ARCHIE
# 54 "data/maps/Route128/scripts.pory"
	delay 100
# 55 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 56 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 57 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 58 "data/maps/Route128/scripts.pory"
	addobject LOCALID_STEVEN
# 59 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Route128_Movement_StevenApproachPlayer
# 60 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 62 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWhatIsHappening, MSGBOX_DEFAULT
# 64 "data/maps/Route128/scripts.pory"
	closemessage
# 65 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Route128_Movement_StevenWalkUp
# 66 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 67 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWholeWorldWillDrown, MSGBOX_DEFAULT
# 69 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 70 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWhereIsDrake, MSGBOX_DEFAULT
# 72 "data/maps/Route128/scripts.pory"
	closemessage
# 73 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 74 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route128/scripts.pory"
	delay 50
# 76 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 77 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 78 "data/maps/Route128/scripts.pory"
	delay 15
# 79 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_STEVEN
# 80 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 81 "data/maps/Route128/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 82 "data/maps/Route128/scripts.pory"
	setvar VAR_ROUTE128_STATE, 2
# 83 "data/maps/Route128/scripts.pory"
	delay 30
# 84 "data/maps/Route128/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 85 "data/maps/Route128/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 86 "data/maps/Route128/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 87 "data/maps/Route128/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 88 "data/maps/Route128/scripts.pory"
	waitfanfare
# 89 "data/maps/Route128/scripts.pory"
	closemessage
# 90 "data/maps/Route128/scripts.pory"
	delay 30
# 91 "data/maps/Route128/scripts.pory"
	releaseall
# 92 "data/maps/Route128/scripts.pory"
	end
# 93 "data/maps/Route128/scripts.pory"

# 94 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused1:
# 95 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 96 "data/maps/Route128/scripts.pory"
	step_end
# 97 "data/maps/Route128/scripts.pory"

# 98 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused2:
# 99 "data/maps/Route128/scripts.pory"
	walk_left
# 100 "data/maps/Route128/scripts.pory"
	walk_left
# 101 "data/maps/Route128/scripts.pory"
	walk_left
# 102 "data/maps/Route128/scripts.pory"
	walk_left
# 103 "data/maps/Route128/scripts.pory"
	walk_left
# 104 "data/maps/Route128/scripts.pory"
	walk_left
# 105 "data/maps/Route128/scripts.pory"
	walk_up
# 106 "data/maps/Route128/scripts.pory"
	walk_up
# 107 "data/maps/Route128/scripts.pory"
	walk_up
# 108 "data/maps/Route128/scripts.pory"
	walk_up
# 109 "data/maps/Route128/scripts.pory"
	walk_up
# 110 "data/maps/Route128/scripts.pory"
	walk_up
# 111 "data/maps/Route128/scripts.pory"
	step_end
# 112 "data/maps/Route128/scripts.pory"

# 113 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenWalkUp:
# 114 "data/maps/Route128/scripts.pory"
	walk_up
# 115 "data/maps/Route128/scripts.pory"
	step_end
# 116 "data/maps/Route128/scripts.pory"

# 117 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenApproachPlayer:
# 118 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route128/scripts.pory"
	step_end
# 120 "data/maps/Route128/scripts.pory"

# 121 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieLookAround:
# 122 "data/maps/Route128/scripts.pory"
	walk_fast_down
# 123 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_left
# 124 "data/maps/Route128/scripts.pory"
	delay_16
# 125 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 126 "data/maps/Route128/scripts.pory"
	delay_16
# 127 "data/maps/Route128/scripts.pory"
	delay_16
# 128 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 129 "data/maps/Route128/scripts.pory"
	step_end
# 130 "data/maps/Route128/scripts.pory"

# 131 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieBackUp:
# 132 "data/maps/Route128/scripts.pory"
	lock_facing_direction
# 133 "data/maps/Route128/scripts.pory"
	walk_slow_up
# 134 "data/maps/Route128/scripts.pory"
	delay_16
# 135 "data/maps/Route128/scripts.pory"
	unlock_facing_direction
# 136 "data/maps/Route128/scripts.pory"
	step_end
# 137 "data/maps/Route128/scripts.pory"

# 138 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieRunLeft:
# 139 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 140 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 141 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 142 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 143 "data/maps/Route128/scripts.pory"
	step_end
# 144 "data/maps/Route128/scripts.pory"

# 145 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieExit:
# 146 "data/maps/Route128/scripts.pory"
	delay_16
# 147 "data/maps/Route128/scripts.pory"
	delay_16
# 148 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 149 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 150 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 151 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 152 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 153 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 154 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 155 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 156 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 157 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 158 "data/maps/Route128/scripts.pory"
	step_end
# 159 "data/maps/Route128/scripts.pory"

# 160 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieWalkLeft:
# 161 "data/maps/Route128/scripts.pory"
	walk_left
# 162 "data/maps/Route128/scripts.pory"
	walk_left
# 163 "data/maps/Route128/scripts.pory"
	delay_8
# 164 "data/maps/Route128/scripts.pory"
	delay_4
# 165 "data/maps/Route128/scripts.pory"
	step_end
# 166 "data/maps/Route128/scripts.pory"

# 167 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachArchie:
# 168 "data/maps/Route128/scripts.pory"
	walk_left
# 169 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 170 "data/maps/Route128/scripts.pory"
	step_end
# 171 "data/maps/Route128/scripts.pory"

# 172 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieExit:
# 173 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 177 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 178 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 179 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 180 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 181 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 182 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 183 "data/maps/Route128/scripts.pory"
	step_end
# 184 "data/maps/Route128/scripts.pory"

# 185 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachPlayer:
# 186 "data/maps/Route128/scripts.pory"
	walk_right
# 187 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 188 "data/maps/Route128/scripts.pory"
	step_end
# 189 "data/maps/Route128/scripts.pory"

# 190 "data/maps/Route128/scripts.pory"
Route128_EventScript_Isaiah::
# 191 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ISAIAH_1, Route128_Text_IsaiahIntro, Route128_Text_IsaiahDefeat, Route128_EventScript_RegisterIsaiah
# 192 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 193 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchIsaiah
# 194 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostBattle, MSGBOX_DEFAULT
# 195 "data/maps/Route128/scripts.pory"
	release
# 196 "data/maps/Route128/scripts.pory"
	end
# 197 "data/maps/Route128/scripts.pory"

# 198 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterIsaiah::
# 199 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 200 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahRegister, MSGBOX_DEFAULT
# 202 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_ISAIAH_1
# 203 "data/maps/Route128/scripts.pory"
	release
# 204 "data/maps/Route128/scripts.pory"
	end
# 205 "data/maps/Route128/scripts.pory"

# 206 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchIsaiah::
# 207 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_ISAIAH_1, Route128_Text_IsaiahRematchIntro, Route128_Text_IsaiahRematchDefeat
# 208 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostRematch, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route128/scripts.pory"
	end
# 210 "data/maps/Route128/scripts.pory"

# 211 "data/maps/Route128/scripts.pory"
Route128_EventScript_Katelyn::
# 212 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_KATELYN_1, Route128_Text_KatelynIntro, Route128_Text_KatelynDefeat, Route128_EventScript_RegisterKatelyn
# 213 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 214 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchKatelyn
# 215 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostBattle, MSGBOX_DEFAULT
# 216 "data/maps/Route128/scripts.pory"
	release
# 217 "data/maps/Route128/scripts.pory"
	end
# 218 "data/maps/Route128/scripts.pory"

# 219 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterKatelyn::
# 220 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 221 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 222 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynRegister, MSGBOX_DEFAULT
# 223 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_KATELYN_1
# 224 "data/maps/Route128/scripts.pory"
	release
# 225 "data/maps/Route128/scripts.pory"
	end
# 226 "data/maps/Route128/scripts.pory"

# 227 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchKatelyn::
# 228 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_KATELYN_1, Route128_Text_KatelynRematchIntro, Route128_Text_KatelynRematchDefeat
# 229 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostRematch, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route128/scripts.pory"
	end
# 231 "data/maps/Route128/scripts.pory"

# 232 "data/maps/Route128/scripts.pory"
Route128_EventScript_Alexa::
# 233 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ALEXA, Route128_Text_AlexaIntro, Route128_Text_AlexaDefeat
# 234 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/Route128/scripts.pory"
	end
# 236 "data/maps/Route128/scripts.pory"

# 237 "data/maps/Route128/scripts.pory"
Route128_EventScript_Ruben::
# 238 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_RUBEN, Route128_Text_RubenIntro, Route128_Text_RubenDefeat
# 239 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_RubenPostBattle, MSGBOX_AUTOCLOSE
# 240 "data/maps/Route128/scripts.pory"
	end
# 241 "data/maps/Route128/scripts.pory"

# 242 "data/maps/Route128/scripts.pory"
Route128_EventScript_Wayne::
# 243 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, Route128_Text_WayneIntro, Route128_Text_WayneDefeat
# 244 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/Route128/scripts.pory"
	end
# 246 "data/maps/Route128/scripts.pory"

# 247 "data/maps/Route128/scripts.pory"
Route128_EventScript_Harrison::
# 248 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_HARRISON, Route128_Text_HarrisonIntro, Route128_Text_HarrisonDefeat
# 249 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
# 250 "data/maps/Route128/scripts.pory"
	end
# 251 "data/maps/Route128/scripts.pory"

# 252 "data/maps/Route128/scripts.pory"
Route128_EventScript_Carlee::
# 253 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_CARLEE, Route128_Text_CarleeIntro, Route128_Text_CarleeDefeat
# 254 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_CarleePostBattle, MSGBOX_AUTOCLOSE
# 255 "data/maps/Route128/scripts.pory"
	end
# 256 "data/maps/Route128/scripts.pory"

# 257 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieWhatHappened:
# 258 "data/maps/Route128/scripts.pory"
	.string "Archie: What happened…\n"
# 259 "data/maps/Route128/scripts.pory"
	.string "What is this wretched scene…\p"
# 260 "data/maps/Route128/scripts.pory"
	.string "Did I…make a horrible mistake?$"
# 261 "data/maps/Route128/scripts.pory"

# 262 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieIOnlyWanted:
# 263 "data/maps/Route128/scripts.pory"
	.string "I…\n"
# 264 "data/maps/Route128/scripts.pory"
	.string "I only wanted…$"
# 265 "data/maps/Route128/scripts.pory"

# 266 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieDoYouUnderstandNow:
# 267 "data/maps/Route128/scripts.pory"
	.string "Maxie: Do you understand now,\n"
# 268 "data/maps/Route128/scripts.pory"
	.string "Archie?\p"
# 269 "data/maps/Route128/scripts.pory"
	.string "Do you finally see how disastrous\n"
# 270 "data/maps/Route128/scripts.pory"
	.string "your dream… no, OUR dreams, turned out\l"
# 271 "data/maps/Route128/scripts.pory"
	.string "to be?\p"
# 272 "data/maps/Route128/scripts.pory"
	.string "We have to hurry! We have to do\n"
# 273 "data/maps/Route128/scripts.pory"
	.string "something before the situation goes\l"
# 274 "data/maps/Route128/scripts.pory"
	.string "completely out of control!$"
# 275 "data/maps/Route128/scripts.pory"

# 276 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieResposibilityFallsToArchieAndMe:
# 277 "data/maps/Route128/scripts.pory"
	.string "Maxie: {PLAYER}, don't say anything.\p"
# 278 "data/maps/Route128/scripts.pory"
	.string "I know that I have no right to be\n"
# 279 "data/maps/Route128/scripts.pory"
	.string "critical of Archie…\p"
# 280 "data/maps/Route128/scripts.pory"
	.string "But the way things are now, I doubt\n"
# 281 "data/maps/Route128/scripts.pory"
	.string "that we humans will be capable of\l"
# 282 "data/maps/Route128/scripts.pory"
	.string "doing anything about it.\p"
# 283 "data/maps/Route128/scripts.pory"
	.string "But neither can we stand by and\n"
# 284 "data/maps/Route128/scripts.pory"
	.string "just watch helplessly.\p"
# 285 "data/maps/Route128/scripts.pory"
	.string "The responsibility for putting an end\n"
# 286 "data/maps/Route128/scripts.pory"
	.string "to this falls to Archie and me…$"
# 287 "data/maps/Route128/scripts.pory"

# 288 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieThisDefiesBelief:
# 289 "data/maps/Route128/scripts.pory"
	.string "Maxie: This defies belief…\p"
# 290 "data/maps/Route128/scripts.pory"
	.string "Those super-ancient Pokémon…\p"
# 291 "data/maps/Route128/scripts.pory"
	.string "Their power is unbelievable.\n"
# 292 "data/maps/Route128/scripts.pory"
	.string "They've upset the balance of nature…$"
# 293 "data/maps/Route128/scripts.pory"

# 294 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWhatIsHappening:
# 295 "data/maps/Route128/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 296 "data/maps/Route128/scripts.pory"
	.string "What is happening?$"
# 297 "data/maps/Route128/scripts.pory"

# 298 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWholeWorldWillDrown:
# 299 "data/maps/Route128/scripts.pory"
	.string "This is terrible…\p"
# 300 "data/maps/Route128/scripts.pory"
	.string "After the scorching heat wave ended,\n"
# 301 "data/maps/Route128/scripts.pory"
	.string "this deluge began.\p"
# 302 "data/maps/Route128/scripts.pory"
	.string "If this doesn't stop, all of Hoenn…\n"
# 303 "data/maps/Route128/scripts.pory"
	.string "No, the whole world will drown.\p"
# 304 "data/maps/Route128/scripts.pory"
	.string "This huge rain cloud is spreading\n"
# 305 "data/maps/Route128/scripts.pory"
	.string "from above Sootopolis…$"
# 306 "data/maps/Route128/scripts.pory"

# 307 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWhereIsDrake:
# 308 "data/maps/Route128/scripts.pory"
	.string "What in the world is taking place there?\n"
# 309 "data/maps/Route128/scripts.pory"
	.string "And where in the world is Drake? Did you\l"
# 310 "data/maps/Route128/scripts.pory"
	.string "happen to see him when you pursued\l"
# 311 "data/maps/Route128/scripts.pory"
	.string "Team Aqua?\p"
# 312 "data/maps/Route128/scripts.pory"
	.string "I haven't heard anything from him since\n"
# 313 "data/maps/Route128/scripts.pory"
	.string "we you both left Mossdeep…\p"
# 314 "data/maps/Route128/scripts.pory"
	.string "There's no point discussing here,\n"
# 315 "data/maps/Route128/scripts.pory"
	.string "Sootopolis might give us some answers.\p"
# 316 "data/maps/Route128/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 317 "data/maps/Route128/scripts.pory"
	.string "I don't know what you intend to do,\l"
# 318 "data/maps/Route128/scripts.pory"
	.string "but don't do anything reckless.\p"
# 319 "data/maps/Route128/scripts.pory"
	.string "Okay.\n"
# 320 "data/maps/Route128/scripts.pory"
	.string "I'm going to Sootopolis.$"
