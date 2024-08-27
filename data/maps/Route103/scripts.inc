# 1 "data/maps/Route103/scripts.pory"

# 2 "data/maps/Route103/scripts.pory"
.set LOCALID_RIVAL, 2
# 3 "data/maps/Route103/scripts.pory"

# 4 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 5 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 6 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 7 "data/maps/Route103/scripts.pory"
	.byte 0
# 8 "data/maps/Route103/scripts.pory"

# 9 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 10 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 12 "data/maps/Route103/scripts.pory"
	end
# 13 "data/maps/Route103/scripts.pory"

# 14 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 15 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 16 "data/maps/Route103/scripts.pory"
	call_if_unset FLAG_BADGE06_GET, Route103_CloseLakeEntrance
# 17 "data/maps/Route103/scripts.pory"
	end
# 18 "data/maps/Route103/scripts.pory"

# 19 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 20 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 21 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 22 "data/maps/Route103/scripts.pory"
	return
# 23 "data/maps/Route103/scripts.pory"

# 24 "data/maps/Route103/scripts.pory"
Route103_CloseLakeEntrance::
# 25 "data/maps/Route103/scripts.pory"
	setmetatile 34, 7, METATILE_General_RockWall_RockBase, TRUE
# 26 "data/maps/Route103/scripts.pory"
	setmetatile 34, 8, METATILE_General_RockWall_SandBase, TRUE
# 27 "data/maps/Route103/scripts.pory"
	return
# 28 "data/maps/Route103/scripts.pory"

# 29 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 30 "data/maps/Route103/scripts.pory"
	lockall
# 31 "data/maps/Route103/scripts.pory"
	checkplayergender
# 32 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 33 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 34 "data/maps/Route103/scripts.pory"
	end
# 35 "data/maps/Route103/scripts.pory"

# 36 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 37 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 38 "data/maps/Route103/scripts.pory"
	closemessage
# 39 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 40 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 41 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 43 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 45 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 47 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 48 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 49 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 50 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 51 "data/maps/Route103/scripts.pory"
	end
# 52 "data/maps/Route103/scripts.pory"

# 53 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 54 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 55 "data/maps/Route103/scripts.pory"
	closemessage
# 56 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 57 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 58 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 60 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 62 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 64 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 65 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 66 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 67 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 68 "data/maps/Route103/scripts.pory"
	end
# 69 "data/maps/Route103/scripts.pory"

# 70 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 71 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 72 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 73 "data/maps/Route103/scripts.pory"
	end
# 74 "data/maps/Route103/scripts.pory"

# 75 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 76 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 77 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 78 "data/maps/Route103/scripts.pory"
	end
# 79 "data/maps/Route103/scripts.pory"

# 80 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 81 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 82 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 83 "data/maps/Route103/scripts.pory"
	end
# 84 "data/maps/Route103/scripts.pory"

# 85 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 86 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 87 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 88 "data/maps/Route103/scripts.pory"
	end
# 89 "data/maps/Route103/scripts.pory"

# 90 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 91 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 92 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 93 "data/maps/Route103/scripts.pory"
	end
# 94 "data/maps/Route103/scripts.pory"

# 95 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 96 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 97 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 98 "data/maps/Route103/scripts.pory"
	end
# 99 "data/maps/Route103/scripts.pory"

# 100 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 101 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 102 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 103 "data/maps/Route103/scripts.pory"
	end
# 104 "data/maps/Route103/scripts.pory"

# 105 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 106 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 107 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 108 "data/maps/Route103/scripts.pory"
	end
# 109 "data/maps/Route103/scripts.pory"

# 110 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 111 "data/maps/Route103/scripts.pory"
	closemessage
# 112 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 113 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 114 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 115 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 116 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 117 "data/maps/Route103/scripts.pory"
	end
# 118 "data/maps/Route103/scripts.pory"

# 119 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 120 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 121 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 122 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 124 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 125 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 127 "data/maps/Route103/scripts.pory"
	end
# 128 "data/maps/Route103/scripts.pory"

# 129 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 130 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 131 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 132 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 134 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 135 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 137 "data/maps/Route103/scripts.pory"
	end
# 138 "data/maps/Route103/scripts.pory"

# 139 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 140 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 141 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 143 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 144 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 146 "data/maps/Route103/scripts.pory"
	end
# 147 "data/maps/Route103/scripts.pory"

# 148 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 149 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_RIVAL
# 150 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 151 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 152 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 153 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 154 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 155 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 156 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 157 "data/maps/Route103/scripts.pory"
	releaseall
# 158 "data/maps/Route103/scripts.pory"
	end
# 159 "data/maps/Route103/scripts.pory"

# 160 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 161 "data/maps/Route103/scripts.pory"
	walk_left
# 162 "data/maps/Route103/scripts.pory"
	walk_down
# 163 "data/maps/Route103/scripts.pory"
	step_end
# 164 "data/maps/Route103/scripts.pory"

# 165 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 166 "data/maps/Route103/scripts.pory"
	jump_2_down
# 167 "data/maps/Route103/scripts.pory"
	delay_16
# 168 "data/maps/Route103/scripts.pory"
	walk_down
# 169 "data/maps/Route103/scripts.pory"
	walk_down
# 170 "data/maps/Route103/scripts.pory"
	walk_down
# 171 "data/maps/Route103/scripts.pory"
	walk_down
# 172 "data/maps/Route103/scripts.pory"
	step_end
# 173 "data/maps/Route103/scripts.pory"

# 174 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 175 "data/maps/Route103/scripts.pory"
	delay_16
# 176 "data/maps/Route103/scripts.pory"
	delay_4
# 177 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 178 "data/maps/Route103/scripts.pory"
	delay_16
# 179 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 180 "data/maps/Route103/scripts.pory"
	step_end
# 181 "data/maps/Route103/scripts.pory"

# 182 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 183 "data/maps/Route103/scripts.pory"
	walk_down
# 184 "data/maps/Route103/scripts.pory"
	step_end
# 185 "data/maps/Route103/scripts.pory"

# 186 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 187 "data/maps/Route103/scripts.pory"
	jump_2_down
# 188 "data/maps/Route103/scripts.pory"
	delay_16
# 189 "data/maps/Route103/scripts.pory"
	walk_down
# 190 "data/maps/Route103/scripts.pory"
	walk_down
# 191 "data/maps/Route103/scripts.pory"
	walk_down
# 192 "data/maps/Route103/scripts.pory"
	step_end
# 193 "data/maps/Route103/scripts.pory"

# 194 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 195 "data/maps/Route103/scripts.pory"
	delay_16
# 196 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 197 "data/maps/Route103/scripts.pory"
	step_end
# 198 "data/maps/Route103/scripts.pory"

# 199 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 200 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 201 "data/maps/Route103/scripts.pory"
	end
# 202 "data/maps/Route103/scripts.pory"

# 203 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 204 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 205 "data/maps/Route103/scripts.pory"
	end
# 206 "data/maps/Route103/scripts.pory"

# 207 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 208 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 209 "data/maps/Route103/scripts.pory"
	end
# 210 "data/maps/Route103/scripts.pory"

# 211 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 212 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 213 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/Route103/scripts.pory"
	end
# 215 "data/maps/Route103/scripts.pory"

# 216 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 217 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 218 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 219 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 220 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route103/scripts.pory"
	end
# 222 "data/maps/Route103/scripts.pory"

# 223 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 224 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 225 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 226 "data/maps/Route103/scripts.pory"
	release
# 227 "data/maps/Route103/scripts.pory"
	end
# 228 "data/maps/Route103/scripts.pory"

# 229 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 230 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 231 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/Route103/scripts.pory"
	end
# 233 "data/maps/Route103/scripts.pory"

# 234 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 235 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 236 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 237 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 238 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/Route103/scripts.pory"
	end
# 240 "data/maps/Route103/scripts.pory"

# 241 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 242 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 243 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 244 "data/maps/Route103/scripts.pory"
	release
# 245 "data/maps/Route103/scripts.pory"
	end
# 246 "data/maps/Route103/scripts.pory"

# 247 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 248 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 249 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 250 "data/maps/Route103/scripts.pory"
	end
# 251 "data/maps/Route103/scripts.pory"

# 252 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 253 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewNotBiting, MSGBOX_NPC
# 254 "data/maps/Route103/scripts.pory"
	end
# 255 "data/maps/Route103/scripts.pory"

# 256 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 257 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 258 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 259 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 260 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 261 "data/maps/Route103/scripts.pory"
	release
# 262 "data/maps/Route103/scripts.pory"
	end
# 263 "data/maps/Route103/scripts.pory"

# 264 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 265 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 266 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 267 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 268 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 269 "data/maps/Route103/scripts.pory"
	release
# 270 "data/maps/Route103/scripts.pory"
	end
# 271 "data/maps/Route103/scripts.pory"

# 272 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 273 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 274 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 275 "data/maps/Route103/scripts.pory"
	end
# 276 "data/maps/Route103/scripts.pory"

# 277 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 278 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 279 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 280 "data/maps/Route103/scripts.pory"
	end
# 281 "data/maps/Route103/scripts.pory"

# 282 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 283 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 284 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 285 "data/maps/Route103/scripts.pory"
	end
# 286 "data/maps/Route103/scripts.pory"

# 287 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 288 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 289 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 290 "data/maps/Route103/scripts.pory"
	end
# 291 "data/maps/Route103/scripts.pory"

# 292 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 293 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 294 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/Route103/scripts.pory"
	end
# 296 "data/maps/Route103/scripts.pory"

# 297 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 298 "data/maps/Route103/scripts.pory"
	.string "Let's see… The Pokémon found\n"
# 299 "data/maps/Route103/scripts.pory"
	.string "on Route 103 include…$"
# 300 "data/maps/Route103/scripts.pory"

# 301 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 302 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 303 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 304 "data/maps/Route103/scripts.pory"
	.string "a Pokémon as a gift.\p"
# 305 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 306 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 307 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 308 "data/maps/Route103/scripts.pory"
	.string "a trainer is like.$"
# 309 "data/maps/Route103/scripts.pory"

# 310 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 311 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 312 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 313 "data/maps/Route103/scripts.pory"

# 314 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 315 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has\n"
# 316 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 317 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that Pokémon,\n"
# 318 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 319 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 320 "data/maps/Route103/scripts.pory"
	.string "kind of Pokémon easily.\p"
# 321 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 322 "data/maps/Route103/scripts.pory"
	.string "the lab.$"
# 323 "data/maps/Route103/scripts.pory"

# 324 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 325 "data/maps/Route103/scripts.pory"
	.string "Okay, so it's this one and\n"
# 326 "data/maps/Route103/scripts.pory"
	.string "that one that live on Route 103…$"
# 327 "data/maps/Route103/scripts.pory"

# 328 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 329 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 330 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a Pokémon.\p"
# 331 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 332 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 333 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a trainer's\n"
# 334 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 335 "data/maps/Route103/scripts.pory"

# 336 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 337 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 338 "data/maps/Route103/scripts.pory"

# 339 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 340 "data/maps/Route103/scripts.pory"
	.string "I think I get it.\n"
# 341 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 342 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 343 "data/maps/Route103/scripts.pory"
	.string "Look, your Pokémon already likes you,\n"
# 344 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 345 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 346 "data/maps/Route103/scripts.pory"
	.string "could befriend any Pokémon with ease,\l"
# 347 "data/maps/Route103/scripts.pory"
	.string "which is a great quality in a trainer.\p"
# 348 "data/maps/Route103/scripts.pory"
	.string "Anyway, we should head back to the lab.$"
# 349 "data/maps/Route103/scripts.pory"

# 350 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 351 "data/maps/Route103/scripts.pory"
	.string "My Pokémon is staggeringly tired…\n"
# 352 "data/maps/Route103/scripts.pory"
	.string "I should have brought a Potion…$"
# 353 "data/maps/Route103/scripts.pory"

# 354 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 355 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 356 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to Oldale Town.\p"
# 357 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 358 "data/maps/Route103/scripts.pory"

# 359 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 360 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 361 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"
# 362 "data/maps/Route103/scripts.pory"

# 363 "data/maps/Route103/scripts.pory"
Route103_Text_AndrewNotBiting:
# 364 "data/maps/Route103/scripts.pory"
	.string "Nothing's biting for me today!$"
