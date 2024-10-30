# 1 "data/maps/Route116/scripts.pory"

# 2 "data/maps/Route116/scripts.pory"
.set LOCALID_BRINEY, 11
# 3 "data/maps/Route116/scripts.pory"
.set LOCALID_WANDAS_BF_OUTSIDE, 21
# 4 "data/maps/Route116/scripts.pory"

# 5 "data/maps/Route116/scripts.pory"
Route116_MapScripts::
# 6 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route116_OnResume
# 7 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
# 8 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
# 9 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_OnFrame
# 10 "data/maps/Route116/scripts.pory"
	.byte 0
# 11 "data/maps/Route116/scripts.pory"

# 12 "data/maps/Route116/scripts.pory"
Route116_OnResume:
# 13 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route116_EventScript_TryRemoveTapuBulu
# 14 "data/maps/Route116/scripts.pory"
	end
# 15 "data/maps/Route116/scripts.pory"

# 16 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRemoveTapuBulu::
# 17 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 18 "data/maps/Route116/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 19 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 20 "data/maps/Route116/scripts.pory"
	return
# 21 "data/maps/Route116/scripts.pory"

# 22 "data/maps/Route116/scripts.pory"
Route116_OnTransition:
# 23 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_SetWandasBoyfriendPos
# 24 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 25 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_StartGroudonWeather
# 26 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_StartGroudonWeather
# 27 "data/maps/Route116/scripts.pory"
	call_if_unset FLAG_DEFEATED_TAPU_BULU, Route116_EventScript_ShowTapuBulu
# 28 "data/maps/Route116/scripts.pory"
	end
# 29 "data/maps/Route116/scripts.pory"

# 30 "data/maps/Route116/scripts.pory"
Route116_EventScript_SetWandasBoyfriendPos::
# 31 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_WANDAS_BF_OUTSIDE, 38, 10
# 32 "data/maps/Route116/scripts.pory"
	return
# 33 "data/maps/Route116/scripts.pory"

# 34 "data/maps/Route116/scripts.pory"
Route116_EventScript_ShowTapuBulu::
# 35 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_TAPU_BULU
# 36 "data/maps/Route116/scripts.pory"
	return
# 37 "data/maps/Route116/scripts.pory"

# 38 "data/maps/Route116/scripts.pory"
Route116_OnLoad:
# 39 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute116North
# 40 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute116South
# 41 "data/maps/Route116/scripts.pory"
	end
# 42 "data/maps/Route116/scripts.pory"

# 43 "data/maps/Route116/scripts.pory"
Route116_OnFrame:
# 44 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 45 "data/maps/Route116/scripts.pory"
	.2byte 0
# 46 "data/maps/Route116/scripts.pory"

# 47 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend::
# 48 "data/maps/Route116/scripts.pory"
	lock
# 49 "data/maps/Route116/scripts.pory"
	faceplayer
# 50 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_BoyfriendGruntLeftTunnel
# 51 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_BoyfriendGruntInTunnel
# 52 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 53 "data/maps/Route116/scripts.pory"
	release
# 54 "data/maps/Route116/scripts.pory"
	end
# 55 "data/maps/Route116/scripts.pory"

# 56 "data/maps/Route116/scripts.pory"
Route116_EventScript_TapuBulu::
# 57 "data/maps/Route116/scripts.pory"
	lock
# 58 "data/maps/Route116/scripts.pory"
	faceplayer
# 59 "data/maps/Route116/scripts.pory"
	waitse
# 60 "data/maps/Route116/scripts.pory"
	playmoncry SPECIES_TAPU_BULU, CRY_MODE_ENCOUNTER
# 61 "data/maps/Route116/scripts.pory"
	delay 40
# 62 "data/maps/Route116/scripts.pory"
	waitmoncry
# 63 "data/maps/Route116/scripts.pory"
	setwildbattle SPECIES_TAPU_BULU, 70
# 64 "data/maps/Route116/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 65 "data/maps/Route116/scripts.pory"
	special StartRegiBattle
# 66 "data/maps/Route116/scripts.pory"
	waitstate
# 67 "data/maps/Route116/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 68 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 69 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route116_EventScript_DefeatedTapuBulu
# 70 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route116_EventScript_RanFromTapuBulu
# 71 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route116_EventScript_RanFromTapuBulu
# 72 "data/maps/Route116/scripts.pory"
	setflag FLAG_DEFEATED_TAPU_BULU
# 73 "data/maps/Route116/scripts.pory"
	release
# 74 "data/maps/Route116/scripts.pory"
	end
# 75 "data/maps/Route116/scripts.pory"

# 76 "data/maps/Route116/scripts.pory"
Route116_EventScript_DefeatedTapuBulu::
# 77 "data/maps/Route116/scripts.pory"
	setflag FLAG_DEFEATED_TAPU_BULU
# 78 "data/maps/Route116/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 79 "data/maps/Route116/scripts.pory"
	end
# 80 "data/maps/Route116/scripts.pory"

# 81 "data/maps/Route116/scripts.pory"
Route116_EventScript_RanFromTapuBulu::
# 82 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, SPECIES_TAPU_BULU
# 83 "data/maps/Route116/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 84 "data/maps/Route116/scripts.pory"
	end
# 85 "data/maps/Route116/scripts.pory"

# 86 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntLeftTunnel::
# 87 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 88 "data/maps/Route116/scripts.pory"
	release
# 89 "data/maps/Route116/scripts.pory"
	end
# 90 "data/maps/Route116/scripts.pory"

# 91 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntInTunnel::
# 92 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 93 "data/maps/Route116/scripts.pory"
	release
# 94 "data/maps/Route116/scripts.pory"
	end
# 95 "data/maps/Route116/scripts.pory"

# 96 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee::
# 97 "data/maps/Route116/scripts.pory"
	lock
# 98 "data/maps/Route116/scripts.pory"
	faceplayer
# 99 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_TryGiveRepeatBallAgain
# 100 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 101 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 102 "data/maps/Route116/scripts.pory"
	end
# 103 "data/maps/Route116/scripts.pory"

# 104 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall::
# 105 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 106 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 107 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_NoRoomForRepeatBall
# 108 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 109 "data/maps/Route116/scripts.pory"
	closemessage
# 110 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_DevonEmployeeExit
# 111 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_DevonEmployeeExit
# 112 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_DevonEmployeeExit
# 113 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_DevonEmployeeExitEast
# 114 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 115 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 116 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
# 117 "data/maps/Route116/scripts.pory"
	release
# 118 "data/maps/Route116/scripts.pory"
	end
# 119 "data/maps/Route116/scripts.pory"

# 120 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExit::
# 121 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 122 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route116/scripts.pory"
	return
# 124 "data/maps/Route116/scripts.pory"

# 125 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExitEast::
# 126 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 127 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route116/scripts.pory"
	return
# 129 "data/maps/Route116/scripts.pory"

# 130 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryGiveRepeatBallAgain::
# 131 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 132 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 133 "data/maps/Route116/scripts.pory"
	end
# 134 "data/maps/Route116/scripts.pory"

# 135 "data/maps/Route116/scripts.pory"
Route116_EventScript_NoRoomForRepeatBall::
# 136 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 137 "data/maps/Route116/scripts.pory"
	release
# 138 "data/maps/Route116/scripts.pory"
	end
# 139 "data/maps/Route116/scripts.pory"

# 140 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit:
# 141 "data/maps/Route116/scripts.pory"
	walk_left
# 142 "data/maps/Route116/scripts.pory"
	walk_left
# 143 "data/maps/Route116/scripts.pory"
	walk_left
# 144 "data/maps/Route116/scripts.pory"
	walk_left
# 145 "data/maps/Route116/scripts.pory"
	walk_left
# 146 "data/maps/Route116/scripts.pory"
	walk_left
# 147 "data/maps/Route116/scripts.pory"
	walk_left
# 148 "data/maps/Route116/scripts.pory"
	walk_left
# 149 "data/maps/Route116/scripts.pory"
	step_end
# 150 "data/maps/Route116/scripts.pory"

# 151 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast:
# 152 "data/maps/Route116/scripts.pory"
	walk_down
# 153 "data/maps/Route116/scripts.pory"
	walk_left
# 154 "data/maps/Route116/scripts.pory"
	walk_left
# 155 "data/maps/Route116/scripts.pory"
	walk_left
# 156 "data/maps/Route116/scripts.pory"
	walk_left
# 157 "data/maps/Route116/scripts.pory"
	walk_left
# 158 "data/maps/Route116/scripts.pory"
	walk_left
# 159 "data/maps/Route116/scripts.pory"
	walk_left
# 160 "data/maps/Route116/scripts.pory"
	walk_left
# 161 "data/maps/Route116/scripts.pory"
	walk_left
# 162 "data/maps/Route116/scripts.pory"
	step_end
# 163 "data/maps/Route116/scripts.pory"

# 164 "data/maps/Route116/scripts.pory"
Route116_EventScript_RouteSignRustboro::
# 165 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
# 166 "data/maps/Route116/scripts.pory"
	end
# 167 "data/maps/Route116/scripts.pory"

# 168 "data/maps/Route116/scripts.pory"
Route116_EventScript_RusturfTunnelSign::
# 169 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
# 170 "data/maps/Route116/scripts.pory"
	end
# 171 "data/maps/Route116/scripts.pory"

# 172 "data/maps/Route116/scripts.pory"
Route116_EventScript_TunnelersRestHouseSign::
# 173 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
# 174 "data/maps/Route116/scripts.pory"
	end
# 175 "data/maps/Route116/scripts.pory"

# 176 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBToStopEvolution::
# 177 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
# 178 "data/maps/Route116/scripts.pory"
	end
# 179 "data/maps/Route116/scripts.pory"

# 180 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBagHasPockets::
# 181 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
# 182 "data/maps/Route116/scripts.pory"
	end
# 183 "data/maps/Route116/scripts.pory"

# 184 "data/maps/Route116/scripts.pory"
Route116_EventScript_Briney::
# 185 "data/maps/Route116/scripts.pory"
	lock
# 186 "data/maps/Route116/scripts.pory"
	faceplayer
# 187 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 188 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 189 "data/maps/Route116/scripts.pory"
	release
# 190 "data/maps/Route116/scripts.pory"
	end
# 191 "data/maps/Route116/scripts.pory"

# 192 "data/maps/Route116/scripts.pory"
Route116_EventScript_BrineyTrigger::
# 193 "data/maps/Route116/scripts.pory"
	lockall
# 194 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFasterRight
# 195 "data/maps/Route116/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 196 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 198 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 199 "data/maps/Route116/scripts.pory"
	releaseall
# 200 "data/maps/Route116/scripts.pory"
	end
# 201 "data/maps/Route116/scripts.pory"

# 202 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan::
# 203 "data/maps/Route116/scripts.pory"
	lock
# 204 "data/maps/Route116/scripts.pory"
	faceplayer
# 205 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES
# 206 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_PlayerHasGlasses
# 207 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 208 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesNotOnPlayer
# 209 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 210 "data/maps/Route116/scripts.pory"
	release
# 211 "data/maps/Route116/scripts.pory"
	end
# 212 "data/maps/Route116/scripts.pory"

# 213 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesNotOnPlayer::
# 214 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 215 "data/maps/Route116/scripts.pory"
	closemessage
# 216 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 217 "data/maps/Route116/scripts.pory"
	end
# 218 "data/maps/Route116/scripts.pory"

# 219 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses::
# 220 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 221 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
# 222 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 223 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesOnPlayer
# 224 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
# 225 "data/maps/Route116/scripts.pory"
	release
# 226 "data/maps/Route116/scripts.pory"
	end
# 227 "data/maps/Route116/scripts.pory"

# 228 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesOnPlayer::
# 229 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 230 "data/maps/Route116/scripts.pory"
	closemessage
# 231 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 232 "data/maps/Route116/scripts.pory"
	end
# 233 "data/maps/Route116/scripts.pory"

# 234 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit::
# 235 "data/maps/Route116/scripts.pory"
	delay 20
# 236 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_GlassesManExitNormal
# 237 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_GlassesManExitNormal
# 238 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_GlassesManExitNormal
# 239 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_GlassesManExitEast
# 240 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 241 "data/maps/Route116/scripts.pory"
	release
# 242 "data/maps/Route116/scripts.pory"
	end
# 243 "data/maps/Route116/scripts.pory"

# 244 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitNormal::
# 245 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 246 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route116/scripts.pory"
	return
# 248 "data/maps/Route116/scripts.pory"

# 249 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitEast::
# 250 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 251 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route116/scripts.pory"
	return
# 253 "data/maps/Route116/scripts.pory"

# 254 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit:
# 255 "data/maps/Route116/scripts.pory"
	walk_left
# 256 "data/maps/Route116/scripts.pory"
	walk_left
# 257 "data/maps/Route116/scripts.pory"
	walk_left
# 258 "data/maps/Route116/scripts.pory"
	walk_left
# 259 "data/maps/Route116/scripts.pory"
	walk_left
# 260 "data/maps/Route116/scripts.pory"
	walk_left
# 261 "data/maps/Route116/scripts.pory"
	walk_left
# 262 "data/maps/Route116/scripts.pory"
	walk_left
# 263 "data/maps/Route116/scripts.pory"
	walk_left
# 264 "data/maps/Route116/scripts.pory"
	step_end
# 265 "data/maps/Route116/scripts.pory"

# 266 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast:
# 267 "data/maps/Route116/scripts.pory"
	walk_up
# 268 "data/maps/Route116/scripts.pory"
	walk_left
# 269 "data/maps/Route116/scripts.pory"
	walk_left
# 270 "data/maps/Route116/scripts.pory"
	walk_left
# 271 "data/maps/Route116/scripts.pory"
	walk_left
# 272 "data/maps/Route116/scripts.pory"
	walk_left
# 273 "data/maps/Route116/scripts.pory"
	walk_left
# 274 "data/maps/Route116/scripts.pory"
	walk_left
# 275 "data/maps/Route116/scripts.pory"
	walk_left
# 276 "data/maps/Route116/scripts.pory"
	walk_left
# 277 "data/maps/Route116/scripts.pory"
	step_end
# 278 "data/maps/Route116/scripts.pory"

# 279 "data/maps/Route116/scripts.pory"
Route116_EventScript_Joey::
# 280 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
# 281 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 282 "data/maps/Route116/scripts.pory"
	end
# 283 "data/maps/Route116/scripts.pory"

# 284 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jose::
# 285 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
# 286 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 287 "data/maps/Route116/scripts.pory"
	end
# 288 "data/maps/Route116/scripts.pory"

# 289 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry::
# 290 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route116_Text_JerryIntro, Route116_Text_JerryDefeat, Route116_EventScript_TryRegisterJerryAfterBattle
# 291 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 292 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchJerry
# 293 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_JERRY_1
# 294 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 295 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterJerry
# 296 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 297 "data/maps/Route116/scripts.pory"
	release
# 298 "data/maps/Route116/scripts.pory"
	end
# 299 "data/maps/Route116/scripts.pory"

# 300 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle::
# 301 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerryAfterBattle
# 302 "data/maps/Route116/scripts.pory"
	release
# 303 "data/maps/Route116/scripts.pory"
	end
# 304 "data/maps/Route116/scripts.pory"

# 305 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerryAfterBattle::
# 306 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 307 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 308 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 309 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 310 "data/maps/Route116/scripts.pory"
	release
# 311 "data/maps/Route116/scripts.pory"
	end
# 312 "data/maps/Route116/scripts.pory"

# 313 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry::
# 314 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerry
# 315 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 316 "data/maps/Route116/scripts.pory"
	release
# 317 "data/maps/Route116/scripts.pory"
	end
# 318 "data/maps/Route116/scripts.pory"

# 319 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerry::
# 320 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 321 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 322 "data/maps/Route116/scripts.pory"
	release
# 323 "data/maps/Route116/scripts.pory"
	end
# 324 "data/maps/Route116/scripts.pory"

# 325 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchJerry::
# 326 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 327 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
# 328 "data/maps/Route116/scripts.pory"
	end
# 329 "data/maps/Route116/scripts.pory"

# 330 "data/maps/Route116/scripts.pory"
Route116_EventScript_Clark::
# 331 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
# 332 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 333 "data/maps/Route116/scripts.pory"
	end
# 334 "data/maps/Route116/scripts.pory"

# 335 "data/maps/Route116/scripts.pory"
Route116_EventScript_Janice::
# 336 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route116_Text_JaniceIntro, Route116_Text_JaniceDefeat
# 337 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 338 "data/maps/Route116/scripts.pory"
	end
# 339 "data/maps/Route116/scripts.pory"

# 340 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen::
# 341 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
# 342 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 343 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchKaren
# 344 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_KAREN_1
# 345 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 346 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterKaren
# 347 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 348 "data/maps/Route116/scripts.pory"
	release
# 349 "data/maps/Route116/scripts.pory"
	end
# 350 "data/maps/Route116/scripts.pory"

# 351 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle::
# 352 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKarenAfterBattle
# 353 "data/maps/Route116/scripts.pory"
	release
# 354 "data/maps/Route116/scripts.pory"
	end
# 355 "data/maps/Route116/scripts.pory"

# 356 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKarenAfterBattle::
# 357 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 358 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 359 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 360 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 361 "data/maps/Route116/scripts.pory"
	release
# 362 "data/maps/Route116/scripts.pory"
	end
# 363 "data/maps/Route116/scripts.pory"

# 364 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren::
# 365 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKaren
# 366 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 367 "data/maps/Route116/scripts.pory"
	release
# 368 "data/maps/Route116/scripts.pory"
	end
# 369 "data/maps/Route116/scripts.pory"

# 370 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKaren::
# 371 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 372 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 373 "data/maps/Route116/scripts.pory"
	release
# 374 "data/maps/Route116/scripts.pory"
	end
# 375 "data/maps/Route116/scripts.pory"

# 376 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchKaren::
# 377 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 378 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
# 379 "data/maps/Route116/scripts.pory"
	end
# 380 "data/maps/Route116/scripts.pory"

# 381 "data/maps/Route116/scripts.pory"
Route116_EventScript_Sarah::
# 382 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
# 383 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 384 "data/maps/Route116/scripts.pory"
	end
# 385 "data/maps/Route116/scripts.pory"

# 386 "data/maps/Route116/scripts.pory"
Route116_EventScript_Dawson::
# 387 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
# 388 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 389 "data/maps/Route116/scripts.pory"
	end
# 390 "data/maps/Route116/scripts.pory"

# 391 "data/maps/Route116/scripts.pory"
Route116_EventScript_Devan::
# 392 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
# 393 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 394 "data/maps/Route116/scripts.pory"
	end
# 395 "data/maps/Route116/scripts.pory"

# 396 "data/maps/Route116/scripts.pory"
Route116_EventScript_Johnson::
# 397 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
# 398 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 399 "data/maps/Route116/scripts.pory"
	end
# 400 "data/maps/Route116/scripts.pory"

# 401 "data/maps/Route116/scripts.pory"
Route116_Text_ScoundrelMadeOffWithPeeko:
# 402 "data/maps/Route116/scripts.pory"
	.string "Ohhh, what am I to do?\p"
# 403 "data/maps/Route116/scripts.pory"
	.string "We were on our walk, PEEKO and I, when\n"
# 404 "data/maps/Route116/scripts.pory"
	.string "we were jumped by an odd thug…\p"
# 405 "data/maps/Route116/scripts.pory"
	.string "The scoundrel made off with my\n"
# 406 "data/maps/Route116/scripts.pory"
	.string "darling PEEKO!\p"
# 407 "data/maps/Route116/scripts.pory"
	.string "Wrrrooooooaaaar! PEEKO!$"
# 408 "data/maps/Route116/scripts.pory"

# 409 "data/maps/Route116/scripts.pory"
Route116_Text_WantToDigTunnel:
# 410 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 411 "data/maps/Route116/scripts.pory"
	.string "I want to dig that tunnel!$"
# 412 "data/maps/Route116/scripts.pory"

# 413 "data/maps/Route116/scripts.pory"
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut:
# 414 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\n"
# 415 "data/maps/Route116/scripts.pory"
	.string "What's going on?\p"
# 416 "data/maps/Route116/scripts.pory"
	.string "I was digging the tunnel without any\n"
# 417 "data/maps/Route116/scripts.pory"
	.string "tools when some goon ordered me out!\p"
# 418 "data/maps/Route116/scripts.pory"
	.string "That tunnel's filled with POKéMON\n"
# 419 "data/maps/Route116/scripts.pory"
	.string "that react badly to loud noises.\l"
# 420 "data/maps/Route116/scripts.pory"
	.string "They could cause an uproar.\p"
# 421 "data/maps/Route116/scripts.pory"
	.string "That's why we stopped using heavy\n"
# 422 "data/maps/Route116/scripts.pory"
	.string "equipment for tunneling…\p"
# 423 "data/maps/Route116/scripts.pory"
	.string "I'm worried that the goon will do\n"
# 424 "data/maps/Route116/scripts.pory"
	.string "something stupid and startle the\l"
# 425 "data/maps/Route116/scripts.pory"
	.string "POKéMON into an uproar.$"
# 426 "data/maps/Route116/scripts.pory"

# 427 "data/maps/Route116/scripts.pory"
Route116_Text_GoonHightailedItOutOfTunnel:
# 428 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 429 "data/maps/Route116/scripts.pory"
	.string "That goofy goon hightailed it out of\n"
# 430 "data/maps/Route116/scripts.pory"
	.string "the tunnel! I can go back to digging!$"
# 431 "data/maps/Route116/scripts.pory"

# 432 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation:
# 433 "data/maps/Route116/scripts.pory"
	.string "Oh! It's you!\p"
# 434 "data/maps/Route116/scripts.pory"
	.string "You're that person who not only helped\n"
# 435 "data/maps/Route116/scripts.pory"
	.string "me in PETALBURG WOODS, but also got\l"
# 436 "data/maps/Route116/scripts.pory"
	.string "back my stolen package and then even\l"
# 437 "data/maps/Route116/scripts.pory"
	.string "graciously delivered it to SLATEPORT!\p"
# 438 "data/maps/Route116/scripts.pory"
	.string "CAPT. STERN informed us that the\n"
# 439 "data/maps/Route116/scripts.pory"
	.string "package arrived, too!\p"
# 440 "data/maps/Route116/scripts.pory"
	.string "I thank you very, very much!\p"
# 441 "data/maps/Route116/scripts.pory"
	.string "Why, if I were a rain cloud, I would\n"
# 442 "data/maps/Route116/scripts.pory"
	.string "shower you with gratitude and hail\l"
# 443 "data/maps/Route116/scripts.pory"
	.string "you as a hero!\p"
# 444 "data/maps/Route116/scripts.pory"
	.string "For you, the most wonderful TRAINER,\n"
# 445 "data/maps/Route116/scripts.pory"
	.string "I bear good news!\p"
# 446 "data/maps/Route116/scripts.pory"
	.string "Recently, our company developed\n"
# 447 "data/maps/Route116/scripts.pory"
	.string "a new kind of POKé BALL.\p"
# 448 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation, this\n"
# 449 "data/maps/Route116/scripts.pory"
	.string "is our gift to our wonderful TRAINER!$"
# 450 "data/maps/Route116/scripts.pory"

# 451 "data/maps/Route116/scripts.pory"
Route116_Text_NewBallAvailableAtMart:
# 452 "data/maps/Route116/scripts.pory"
	.string "Our new POKé BALL will be available\n"
# 453 "data/maps/Route116/scripts.pory"
	.string "at the POKéMON MART in RUSTBORO.\p"
# 454 "data/maps/Route116/scripts.pory"
	.string "Please do try it out!\n"
# 455 "data/maps/Route116/scripts.pory"
	.string "Thank you and bye-bye!$"
# 456 "data/maps/Route116/scripts.pory"

# 457 "data/maps/Route116/scripts.pory"
Route116_Text_BagIsJamPacked:
# 458 "data/maps/Route116/scripts.pory"
	.string "Your BAG is jam-packed.\n"
# 459 "data/maps/Route116/scripts.pory"
	.string "I can't give you this REPEAT BALL.$"
# 460 "data/maps/Route116/scripts.pory"

# 461 "data/maps/Route116/scripts.pory"
Route116_Text_TokenOfAppreciation:
# 462 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation for\n"
# 463 "data/maps/Route116/scripts.pory"
	.string "your delivering our package, I have\l"
# 464 "data/maps/Route116/scripts.pory"
	.string "a gift of a new kind of POKé BALL\l"
# 465 "data/maps/Route116/scripts.pory"
	.string "for our most wonderful TRAINER!$"
# 466 "data/maps/Route116/scripts.pory"

# 467 "data/maps/Route116/scripts.pory"
Route116_Text_CanYouHelpMeFindGlasses:
# 468 "data/maps/Route116/scripts.pory"
	.string "I dropped my glasses…\n"
# 469 "data/maps/Route116/scripts.pory"
	.string "Can you help me find them?$"
# 470 "data/maps/Route116/scripts.pory"

# 471 "data/maps/Route116/scripts.pory"
Route116_Text_MayISeeThoseGlasses:
# 472 "data/maps/Route116/scripts.pory"
	.string "Those glasses!\n"
# 473 "data/maps/Route116/scripts.pory"
	.string "May I see them for a second?$"
# 474 "data/maps/Route116/scripts.pory"

# 475 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingForMaybeTheyArentHere:
# 476 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 477 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 478 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…\p"
# 479 "data/maps/Route116/scripts.pory"
	.string "Maybe my glasses aren't around\n"
# 480 "data/maps/Route116/scripts.pory"
	.string "here…$"
# 481 "data/maps/Route116/scripts.pory"

# 482 "data/maps/Route116/scripts.pory"
Route116_Text_CantFindGlassesNotHere:
# 483 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 484 "data/maps/Route116/scripts.pory"
	.string "I can't find my glasses anywhere…\l"
# 485 "data/maps/Route116/scripts.pory"
	.string "Maybe they're not around here…$"
# 486 "data/maps/Route116/scripts.pory"

# 487 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingFor:
# 488 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 489 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 490 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…$"
# 491 "data/maps/Route116/scripts.pory"

# 492 "data/maps/Route116/scripts.pory"
Route116_Text_RouteSignRustboro:
# 493 "data/maps/Route116/scripts.pory"
	.string "ROUTE 116\n"
# 494 "data/maps/Route116/scripts.pory"
	.string "{LEFT_ARROW} RUSTBORO CITY$"
# 495 "data/maps/Route116/scripts.pory"

# 496 "data/maps/Route116/scripts.pory"
Route116_Text_RusturfTunnelSign:
# 497 "data/maps/Route116/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 498 "data/maps/Route116/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 499 "data/maps/Route116/scripts.pory"
	.string "“The tunnel project has been\n"
# 500 "data/maps/Route116/scripts.pory"
	.string "canceled.”$"
# 501 "data/maps/Route116/scripts.pory"

# 502 "data/maps/Route116/scripts.pory"
Route116_Text_TunnelersRestHouse:
# 503 "data/maps/Route116/scripts.pory"
	.string "TUNNELER'S REST HOUSE$"
# 504 "data/maps/Route116/scripts.pory"

# 505 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBToStopEvolution:
# 506 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 507 "data/maps/Route116/scripts.pory"
	.string "Press the “L” button to open a very\n"
# 508 "data/maps/Route116/scripts.pory"
	.string "useful 2nd menu if you haven't already.$"
# 509 "data/maps/Route116/scripts.pory"

# 510 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBagHasPockets:
# 511 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 512 "data/maps/Route116/scripts.pory"
	.string "You can reuse TMs as many times as\n"
# 513 "data/maps/Route116/scripts.pory"
	.string "you want.$"

Route116_EventScript_Roark::
# 518 "data/maps/Route116/scripts.pory"
	lockall
# 519 "data/maps/Route116/scripts.pory"
	applymovement 29, Common_Movement_FacePlayer
# 520 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_UNUSED_FOUGHT_ROARK116, 1, Route116_EventScript_RoarkDefeated
# 521 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DECLINED_ROARK_BATTLE_116, Route116_EventScript_RoarkRequestBattleAgain
# 522 "data/maps/Route116/scripts.pory"
	msgbox Roark_Greeting, MSGBOX_DEFAULT
# 523 "data/maps/Route116/scripts.pory"
	waitmessage
# 524 "data/maps/Route116/scripts.pory"
	msgbox Roark_WillYouBattleMe, MSGBOX_YESNO
# 525 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_BattleRoarkPrompt
	end


Route116_EventScript_RoarkRequestBattleAgain::
# 530 "data/maps/Route116/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 531 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_BattleRoarkPrompt
	end


Route116_EventScript_BattleRoarkPrompt::
# 536 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route116_EventScript_BattleRoark
# 537 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route116_EventScript_DeclineRoarkBattle
# 538 "data/maps/Route116/scripts.pory"
	closemessage
	end


Route116_EventScript_DeclineRoarkBattle::
# 543 "data/maps/Route116/scripts.pory"
	setflag FLAG_DECLINED_ROARK_BATTLE_116
# 544 "data/maps/Route116/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 545 "data/maps/Route116/scripts.pory"
	release
	end


Route116_EventScript_BattleRoark::
# 550 "data/maps/Route116/scripts.pory"
	msgbox Route116_EventScript_BattleRoark_Text_0, MSGBOX_DEFAULT
# 551 "data/maps/Route116/scripts.pory"
	trainerbattle_no_intro TRAINER_ROARK, Roark_Outro
# 552 "data/maps/Route116/scripts.pory"
	setvar VAR_UNUSED_FOUGHT_ROARK116, 1
# 553 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_RoarkGiveRockTomb
	return


Route116_EventScript_RoarkDefeated::
# 559 "data/maps/Route116/scripts.pory"
	msgbox PostBattle_Roark, MSGBOX_DEFAULT
# 560 "data/maps/Route116/scripts.pory"
	releaseall
	end


Route116_EventScript_RoarkGiveRockTomb::
# 565 "data/maps/Route116/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 566 "data/maps/Route116/scripts.pory"
	giveitem ITEM_MUSCLE_BAND
# 567 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 568 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 569 "data/maps/Route116/scripts.pory"
	msgbox Roark_ExplainRockTombAndMuscleBand
# 570 "data/maps/Route116/scripts.pory"
	release
	end


Route116_EventScript_BattleRoark_Text_0:
# 550 "data/maps/Route116/scripts.pory"
	.string "Let's do this!$"

Roark_ExplainRockTombAndMuscleBand::
# 574 "data/maps/Route116/scripts.pory"
	.string "That Technical Machine, TM39,\n"
	.string "contains Rock Tomb.\p"
	.string "It not only inflicts damage by dropping\n"
	.string "rocks, it also lowers Speed.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a Pokémon.\p"
	.string "Thanks to some great advances in\n"
	.string "technology, now you can use a TM as\l"
	.string "many times as you want!\p"
	.string "And the Muscle Band will boost your\n"
	.string "Attack if held!$"

Roark_Greeting::
# 588 "data/maps/Route116/scripts.pory"
	.string "Oh, hello. I'm Roark, a Gym Leader from\n"
	.string "the Sinnoh region. I've heard there are\l"
	.string "a lot of cool underground areas to\l"
	.string "explore here in Hoenn, so I had to come\l"
	.string "check it out myself.\p"
	.string "I've also heard that the trainers in\n"
	.string "this region are weaker than the ones\l"
	.string "back in Sinnoh.$"

Roark_WillYouBattleMe::
# 599 "data/maps/Route116/scripts.pory"
	.string "Hm, what's that? You're a trainer?\n"
	.string "Well, now I want to find out if the\l"
	.string "rumors are true! What do you say we\l"
	.string "have a battle?$"

Roark_Outro::
# 606 "data/maps/Route116/scripts.pory"
	.string "Looks like the trainers here are\n"
	.string "pretty strong! Please, take these\l"
	.string "as rewards for beating me.$"

PostBattle_Roark::
# 613 "data/maps/Route116/scripts.pory"
	.string "Time to explore the underground!$"

Ready_Yet::
# 617 "data/maps/Route116/scripts.pory"
	.string "Ready for our battle now?$"

Come_Back_When_Ready::
# 621 "data/maps/Route116/scripts.pory"
	.string "Come back when you're ready.$"
