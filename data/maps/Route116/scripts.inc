# 1 "data/maps/Route116/scripts.pory"

# 2 "data/maps/Route116/scripts.pory"
.set LOCALID_BRINEY, 11
# 3 "data/maps/Route116/scripts.pory"
.set LOCALID_WANDAS_BF_OUTSIDE, 21
# 4 "data/maps/Route116/scripts.pory"
.set LOCALID_CANDICE, 29
# 5 "data/maps/Route116/scripts.pory"

# 6 "data/maps/Route116/scripts.pory"
Route116_MapScripts::
# 7 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route116_OnResume
# 8 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
# 9 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
# 10 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_OnFrame
# 11 "data/maps/Route116/scripts.pory"
	.byte 0
# 12 "data/maps/Route116/scripts.pory"

# 13 "data/maps/Route116/scripts.pory"
Route116_OnResume:
# 14 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route116_EventScript_TryRemoveTapuBulu
# 15 "data/maps/Route116/scripts.pory"
	end
# 16 "data/maps/Route116/scripts.pory"

# 17 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRemoveTapuBulu::
# 18 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 19 "data/maps/Route116/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 20 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 21 "data/maps/Route116/scripts.pory"
	return
# 22 "data/maps/Route116/scripts.pory"

# 23 "data/maps/Route116/scripts.pory"
Route116_OnTransition:
# 24 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_SetWandasBoyfriendPos
# 25 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 26 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_StartGroudonWeather
# 27 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_StartGroudonWeather
# 28 "data/maps/Route116/scripts.pory"
	call_if_unset FLAG_DEFEATED_TAPU_BULU, Route116_EventScript_ShowTapuBulu
# 29 "data/maps/Route116/scripts.pory"
	end
# 30 "data/maps/Route116/scripts.pory"

# 31 "data/maps/Route116/scripts.pory"
Route116_EventScript_SetWandasBoyfriendPos::
# 32 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_WANDAS_BF_OUTSIDE, 38, 10
# 33 "data/maps/Route116/scripts.pory"
	return
# 34 "data/maps/Route116/scripts.pory"

# 35 "data/maps/Route116/scripts.pory"
Route116_EventScript_ShowTapuBulu::
# 36 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_TAPU_BULU
# 37 "data/maps/Route116/scripts.pory"
	return
# 38 "data/maps/Route116/scripts.pory"

# 39 "data/maps/Route116/scripts.pory"
Route116_OnLoad:
# 40 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute116North
# 41 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute116South
# 42 "data/maps/Route116/scripts.pory"
	end
# 43 "data/maps/Route116/scripts.pory"

# 44 "data/maps/Route116/scripts.pory"
Route116_OnFrame:
# 45 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 46 "data/maps/Route116/scripts.pory"
	.2byte 0
# 47 "data/maps/Route116/scripts.pory"

# 48 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend::
# 49 "data/maps/Route116/scripts.pory"
	lock
# 50 "data/maps/Route116/scripts.pory"
	faceplayer
# 51 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_BoyfriendGruntLeftTunnel
# 52 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_BoyfriendGruntInTunnel
# 53 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 54 "data/maps/Route116/scripts.pory"
	release
# 55 "data/maps/Route116/scripts.pory"
	end
# 56 "data/maps/Route116/scripts.pory"

# 57 "data/maps/Route116/scripts.pory"
Route116_EventScript_TapuBulu::
# 58 "data/maps/Route116/scripts.pory"
	lock
# 59 "data/maps/Route116/scripts.pory"
	faceplayer
# 60 "data/maps/Route116/scripts.pory"
	waitse
# 61 "data/maps/Route116/scripts.pory"
	playmoncry SPECIES_TAPU_BULU, CRY_MODE_ENCOUNTER
# 62 "data/maps/Route116/scripts.pory"
	delay 40
# 63 "data/maps/Route116/scripts.pory"
	waitmoncry
# 64 "data/maps/Route116/scripts.pory"
	setwildbattle SPECIES_TAPU_BULU, 70
# 65 "data/maps/Route116/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 66 "data/maps/Route116/scripts.pory"
	special StartRegiBattle
# 67 "data/maps/Route116/scripts.pory"
	waitstate
# 68 "data/maps/Route116/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 69 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 70 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route116_EventScript_DefeatedTapuBulu
# 71 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route116_EventScript_RanFromTapuBulu
# 72 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route116_EventScript_RanFromTapuBulu
# 73 "data/maps/Route116/scripts.pory"
	setflag FLAG_DEFEATED_TAPU_BULU
# 74 "data/maps/Route116/scripts.pory"
	release
# 75 "data/maps/Route116/scripts.pory"
	end
# 76 "data/maps/Route116/scripts.pory"

# 77 "data/maps/Route116/scripts.pory"
Route116_EventScript_DefeatedTapuBulu::
# 78 "data/maps/Route116/scripts.pory"
	setflag FLAG_DEFEATED_TAPU_BULU
# 79 "data/maps/Route116/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 80 "data/maps/Route116/scripts.pory"
	end
# 81 "data/maps/Route116/scripts.pory"

# 82 "data/maps/Route116/scripts.pory"
Route116_EventScript_RanFromTapuBulu::
# 83 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, SPECIES_TAPU_BULU
# 84 "data/maps/Route116/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 85 "data/maps/Route116/scripts.pory"
	end
# 86 "data/maps/Route116/scripts.pory"

# 87 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntLeftTunnel::
# 88 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 89 "data/maps/Route116/scripts.pory"
	release
# 90 "data/maps/Route116/scripts.pory"
	end
# 91 "data/maps/Route116/scripts.pory"

# 92 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntInTunnel::
# 93 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 94 "data/maps/Route116/scripts.pory"
	release
# 95 "data/maps/Route116/scripts.pory"
	end
# 96 "data/maps/Route116/scripts.pory"

# 97 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee::
# 98 "data/maps/Route116/scripts.pory"
	lock
# 99 "data/maps/Route116/scripts.pory"
	faceplayer
# 100 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_TryGiveRepeatBallAgain
# 101 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 102 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 103 "data/maps/Route116/scripts.pory"
	end
# 104 "data/maps/Route116/scripts.pory"

# 105 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall::
# 106 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 107 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 108 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_NoRoomForRepeatBall
# 109 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 110 "data/maps/Route116/scripts.pory"
	closemessage
# 111 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_DevonEmployeeExit
# 112 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_DevonEmployeeExit
# 113 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_DevonEmployeeExit
# 114 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_DevonEmployeeExitEast
# 115 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 116 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 117 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
# 118 "data/maps/Route116/scripts.pory"
	release
# 119 "data/maps/Route116/scripts.pory"
	end
# 120 "data/maps/Route116/scripts.pory"

# 121 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExit::
# 122 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 123 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route116/scripts.pory"
	return
# 125 "data/maps/Route116/scripts.pory"

# 126 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExitEast::
# 127 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 128 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route116/scripts.pory"
	return
# 130 "data/maps/Route116/scripts.pory"

# 131 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryGiveRepeatBallAgain::
# 132 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 133 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 134 "data/maps/Route116/scripts.pory"
	end
# 135 "data/maps/Route116/scripts.pory"

# 136 "data/maps/Route116/scripts.pory"
Route116_EventScript_NoRoomForRepeatBall::
# 137 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 138 "data/maps/Route116/scripts.pory"
	release
# 139 "data/maps/Route116/scripts.pory"
	end
# 140 "data/maps/Route116/scripts.pory"

# 141 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit:
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
	walk_left
# 150 "data/maps/Route116/scripts.pory"
	step_end
# 151 "data/maps/Route116/scripts.pory"

# 152 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast:
# 153 "data/maps/Route116/scripts.pory"
	walk_down
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
	walk_left
# 163 "data/maps/Route116/scripts.pory"
	step_end
# 164 "data/maps/Route116/scripts.pory"

# 165 "data/maps/Route116/scripts.pory"
Route116_EventScript_RouteSignRustboro::
# 166 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
# 167 "data/maps/Route116/scripts.pory"
	end
# 168 "data/maps/Route116/scripts.pory"

# 169 "data/maps/Route116/scripts.pory"
Route116_EventScript_RusturfTunnelSign::
# 170 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
# 171 "data/maps/Route116/scripts.pory"
	end
# 172 "data/maps/Route116/scripts.pory"

# 173 "data/maps/Route116/scripts.pory"
Route116_EventScript_TunnelersRestHouseSign::
# 174 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
# 175 "data/maps/Route116/scripts.pory"
	end
# 176 "data/maps/Route116/scripts.pory"

# 177 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBToStopEvolution::
# 178 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
# 179 "data/maps/Route116/scripts.pory"
	end
# 180 "data/maps/Route116/scripts.pory"

# 181 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBagHasPockets::
# 182 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
# 183 "data/maps/Route116/scripts.pory"
	end
# 184 "data/maps/Route116/scripts.pory"

# 185 "data/maps/Route116/scripts.pory"
Route116_EventScript_Briney::
# 186 "data/maps/Route116/scripts.pory"
	lock
# 187 "data/maps/Route116/scripts.pory"
	faceplayer
# 188 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 189 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 190 "data/maps/Route116/scripts.pory"
	release
# 191 "data/maps/Route116/scripts.pory"
	end
# 192 "data/maps/Route116/scripts.pory"

# 193 "data/maps/Route116/scripts.pory"
Route116_EventScript_BrineyTrigger::
# 194 "data/maps/Route116/scripts.pory"
	lockall
# 195 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFasterRight
# 196 "data/maps/Route116/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 197 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 199 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 200 "data/maps/Route116/scripts.pory"
	releaseall
# 201 "data/maps/Route116/scripts.pory"
	end
# 202 "data/maps/Route116/scripts.pory"

# 203 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan::
# 204 "data/maps/Route116/scripts.pory"
	lock
# 205 "data/maps/Route116/scripts.pory"
	faceplayer
# 206 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES
# 207 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_PlayerHasGlasses
# 208 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 209 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesNotOnPlayer
# 210 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 211 "data/maps/Route116/scripts.pory"
	release
# 212 "data/maps/Route116/scripts.pory"
	end
# 213 "data/maps/Route116/scripts.pory"

# 214 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesNotOnPlayer::
# 215 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 216 "data/maps/Route116/scripts.pory"
	closemessage
# 217 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 218 "data/maps/Route116/scripts.pory"
	end
# 219 "data/maps/Route116/scripts.pory"

# 220 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses::
# 221 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 222 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
# 223 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 224 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesOnPlayer
# 225 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
# 226 "data/maps/Route116/scripts.pory"
	release
# 227 "data/maps/Route116/scripts.pory"
	end
# 228 "data/maps/Route116/scripts.pory"

# 229 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesOnPlayer::
# 230 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 231 "data/maps/Route116/scripts.pory"
	closemessage
# 232 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 233 "data/maps/Route116/scripts.pory"
	end
# 234 "data/maps/Route116/scripts.pory"

# 235 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit::
# 236 "data/maps/Route116/scripts.pory"
	delay 20
# 237 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_GlassesManExitNormal
# 238 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_GlassesManExitNormal
# 239 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_GlassesManExitNormal
# 240 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_GlassesManExitEast
# 241 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 242 "data/maps/Route116/scripts.pory"
	release
# 243 "data/maps/Route116/scripts.pory"
	end
# 244 "data/maps/Route116/scripts.pory"

# 245 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitNormal::
# 246 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 247 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route116/scripts.pory"
	return
# 249 "data/maps/Route116/scripts.pory"

# 250 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitEast::
# 251 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 252 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 253 "data/maps/Route116/scripts.pory"
	return
# 254 "data/maps/Route116/scripts.pory"

# 255 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit:
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
	walk_left
# 265 "data/maps/Route116/scripts.pory"
	step_end
# 266 "data/maps/Route116/scripts.pory"

# 267 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast:
# 268 "data/maps/Route116/scripts.pory"
	walk_up
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
	walk_left
# 278 "data/maps/Route116/scripts.pory"
	step_end
# 279 "data/maps/Route116/scripts.pory"

# 280 "data/maps/Route116/scripts.pory"
Route116_EventScript_Joey::
# 281 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
# 282 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 283 "data/maps/Route116/scripts.pory"
	end
# 284 "data/maps/Route116/scripts.pory"

# 285 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jose::
# 286 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
# 287 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/Route116/scripts.pory"
	end
# 289 "data/maps/Route116/scripts.pory"

# 290 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry::
# 291 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route116_Text_JerryIntro, Route116_Text_JerryDefeat, Route116_EventScript_TryRegisterJerryAfterBattle
# 292 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 293 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchJerry
# 294 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_JERRY_1
# 295 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 296 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterJerry
# 297 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 298 "data/maps/Route116/scripts.pory"
	release
# 299 "data/maps/Route116/scripts.pory"
	end
# 300 "data/maps/Route116/scripts.pory"

# 301 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle::
# 302 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerryAfterBattle
# 303 "data/maps/Route116/scripts.pory"
	release
# 304 "data/maps/Route116/scripts.pory"
	end
# 305 "data/maps/Route116/scripts.pory"

# 306 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerryAfterBattle::
# 307 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 308 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 309 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 310 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 311 "data/maps/Route116/scripts.pory"
	release
# 312 "data/maps/Route116/scripts.pory"
	end
# 313 "data/maps/Route116/scripts.pory"

# 314 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry::
# 315 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerry
# 316 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 317 "data/maps/Route116/scripts.pory"
	release
# 318 "data/maps/Route116/scripts.pory"
	end
# 319 "data/maps/Route116/scripts.pory"

# 320 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerry::
# 321 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 322 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 323 "data/maps/Route116/scripts.pory"
	release
# 324 "data/maps/Route116/scripts.pory"
	end
# 325 "data/maps/Route116/scripts.pory"

# 326 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchJerry::
# 327 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 328 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
# 329 "data/maps/Route116/scripts.pory"
	end
# 330 "data/maps/Route116/scripts.pory"

# 331 "data/maps/Route116/scripts.pory"
Route116_EventScript_Clark::
# 332 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
# 333 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 334 "data/maps/Route116/scripts.pory"
	end
# 335 "data/maps/Route116/scripts.pory"

# 336 "data/maps/Route116/scripts.pory"
Route116_EventScript_Janice::
# 337 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route116_Text_JaniceIntro, Route116_Text_JaniceDefeat
# 338 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 339 "data/maps/Route116/scripts.pory"
	end
# 340 "data/maps/Route116/scripts.pory"

# 341 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen::
# 342 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
# 343 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 344 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchKaren
# 345 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_KAREN_1
# 346 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 347 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterKaren
# 348 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 349 "data/maps/Route116/scripts.pory"
	release
# 350 "data/maps/Route116/scripts.pory"
	end
# 351 "data/maps/Route116/scripts.pory"

# 352 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle::
# 353 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKarenAfterBattle
# 354 "data/maps/Route116/scripts.pory"
	release
# 355 "data/maps/Route116/scripts.pory"
	end
# 356 "data/maps/Route116/scripts.pory"

# 357 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKarenAfterBattle::
# 358 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 359 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 360 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 361 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 362 "data/maps/Route116/scripts.pory"
	release
# 363 "data/maps/Route116/scripts.pory"
	end
# 364 "data/maps/Route116/scripts.pory"

# 365 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren::
# 366 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKaren
# 367 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 368 "data/maps/Route116/scripts.pory"
	release
# 369 "data/maps/Route116/scripts.pory"
	end
# 370 "data/maps/Route116/scripts.pory"

# 371 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKaren::
# 372 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 373 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 374 "data/maps/Route116/scripts.pory"
	release
# 375 "data/maps/Route116/scripts.pory"
	end
# 376 "data/maps/Route116/scripts.pory"

# 377 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchKaren::
# 378 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 379 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
# 380 "data/maps/Route116/scripts.pory"
	end
# 381 "data/maps/Route116/scripts.pory"

# 382 "data/maps/Route116/scripts.pory"
Route116_EventScript_Sarah::
# 383 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
# 384 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 385 "data/maps/Route116/scripts.pory"
	end
# 386 "data/maps/Route116/scripts.pory"

# 387 "data/maps/Route116/scripts.pory"
Route116_EventScript_Dawson::
# 388 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
# 389 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 390 "data/maps/Route116/scripts.pory"
	end
# 391 "data/maps/Route116/scripts.pory"

# 392 "data/maps/Route116/scripts.pory"
Route116_EventScript_Devan::
# 393 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
# 394 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 395 "data/maps/Route116/scripts.pory"
	end
# 396 "data/maps/Route116/scripts.pory"

# 397 "data/maps/Route116/scripts.pory"
Route116_EventScript_Johnson::
# 398 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
# 399 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 400 "data/maps/Route116/scripts.pory"
	end
# 401 "data/maps/Route116/scripts.pory"

# 402 "data/maps/Route116/scripts.pory"
Route116_Text_ScoundrelMadeOffWithPeeko:
# 403 "data/maps/Route116/scripts.pory"
	.string "Ohhh, what am I to do?\p"
# 404 "data/maps/Route116/scripts.pory"
	.string "We were on our walk, Peeko and I, when\n"
# 405 "data/maps/Route116/scripts.pory"
	.string "we were jumped by an odd thug…\p"
# 406 "data/maps/Route116/scripts.pory"
	.string "The scoundrel made off with my\n"
# 407 "data/maps/Route116/scripts.pory"
	.string "darling Peeko!\p"
# 408 "data/maps/Route116/scripts.pory"
	.string "Wrrrooooooaaaar! Peeko!$"
# 409 "data/maps/Route116/scripts.pory"

# 410 "data/maps/Route116/scripts.pory"
Route116_Text_WantToDigTunnel:
# 411 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 412 "data/maps/Route116/scripts.pory"
	.string "I want to dig that tunnel!$"
# 413 "data/maps/Route116/scripts.pory"

# 414 "data/maps/Route116/scripts.pory"
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut:
# 415 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\n"
# 416 "data/maps/Route116/scripts.pory"
	.string "What's going on?\p"
# 417 "data/maps/Route116/scripts.pory"
	.string "I was digging the tunnel without any\n"
# 418 "data/maps/Route116/scripts.pory"
	.string "tools when some goon ordered me out!\p"
# 419 "data/maps/Route116/scripts.pory"
	.string "That tunnel's filled with Pokémon\n"
# 420 "data/maps/Route116/scripts.pory"
	.string "that react badly to loud noises.\l"
# 421 "data/maps/Route116/scripts.pory"
	.string "They could cause an uproar.\p"
# 422 "data/maps/Route116/scripts.pory"
	.string "That's why we stopped using heavy\n"
# 423 "data/maps/Route116/scripts.pory"
	.string "equipment for tunneling…\p"
# 424 "data/maps/Route116/scripts.pory"
	.string "I'm worried that the goon will do\n"
# 425 "data/maps/Route116/scripts.pory"
	.string "something stupid and startle the\l"
# 426 "data/maps/Route116/scripts.pory"
	.string "Pokémon into an uproar.$"
# 427 "data/maps/Route116/scripts.pory"

# 428 "data/maps/Route116/scripts.pory"
Route116_Text_GoonHightailedItOutOfTunnel:
# 429 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 430 "data/maps/Route116/scripts.pory"
	.string "That goofy goon hightailed it out of\n"
# 431 "data/maps/Route116/scripts.pory"
	.string "the tunnel! I can go back to digging!$"
# 432 "data/maps/Route116/scripts.pory"

# 433 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation:
# 434 "data/maps/Route116/scripts.pory"
	.string "Oh! It's you!\p"
# 435 "data/maps/Route116/scripts.pory"
	.string "You're that person who not only helped\n"
# 436 "data/maps/Route116/scripts.pory"
	.string "me in PETALBURG WOODS, but also got\l"
# 437 "data/maps/Route116/scripts.pory"
	.string "back my stolen package and then even\l"
# 438 "data/maps/Route116/scripts.pory"
	.string "graciously delivered it to SLATEPORT!\p"
# 439 "data/maps/Route116/scripts.pory"
	.string "CAPT. STERN informed us that the\n"
# 440 "data/maps/Route116/scripts.pory"
	.string "package arrived, too!\p"
# 441 "data/maps/Route116/scripts.pory"
	.string "I thank you very, very much!\p"
# 442 "data/maps/Route116/scripts.pory"
	.string "Why, if I were a rain cloud, I would\n"
# 443 "data/maps/Route116/scripts.pory"
	.string "shower you with gratitude and hail\l"
# 444 "data/maps/Route116/scripts.pory"
	.string "you as a hero!\p"
# 445 "data/maps/Route116/scripts.pory"
	.string "For you, the most wonderful TRAINER,\n"
# 446 "data/maps/Route116/scripts.pory"
	.string "I bear good news!\p"
# 447 "data/maps/Route116/scripts.pory"
	.string "Recently, our company developed\n"
# 448 "data/maps/Route116/scripts.pory"
	.string "a new kind of POKé BALL.\p"
# 449 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation, this\n"
# 450 "data/maps/Route116/scripts.pory"
	.string "is our gift to our wonderful TRAINER!$"
# 451 "data/maps/Route116/scripts.pory"

# 452 "data/maps/Route116/scripts.pory"
Route116_Text_NewBallAvailableAtMart:
# 453 "data/maps/Route116/scripts.pory"
	.string "Our new POKé BALL will be available\n"
# 454 "data/maps/Route116/scripts.pory"
	.string "at the Pokémon MART in RUSTBORO.\p"
# 455 "data/maps/Route116/scripts.pory"
	.string "Please do try it out!\n"
# 456 "data/maps/Route116/scripts.pory"
	.string "Thank you and bye-bye!$"
# 457 "data/maps/Route116/scripts.pory"

# 458 "data/maps/Route116/scripts.pory"
Route116_Text_BagIsJamPacked:
# 459 "data/maps/Route116/scripts.pory"
	.string "Your BAG is jam-packed.\n"
# 460 "data/maps/Route116/scripts.pory"
	.string "I can't give you this REPEAT BALL.$"
# 461 "data/maps/Route116/scripts.pory"

# 462 "data/maps/Route116/scripts.pory"
Route116_Text_TokenOfAppreciation:
# 463 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation for\n"
# 464 "data/maps/Route116/scripts.pory"
	.string "your delivering our package, I have\l"
# 465 "data/maps/Route116/scripts.pory"
	.string "a gift of a new kind of POKé BALL\l"
# 466 "data/maps/Route116/scripts.pory"
	.string "for our most wonderful TRAINER!$"
# 467 "data/maps/Route116/scripts.pory"

# 468 "data/maps/Route116/scripts.pory"
Route116_Text_CanYouHelpMeFindGlasses:
# 469 "data/maps/Route116/scripts.pory"
	.string "I dropped my glasses…\n"
# 470 "data/maps/Route116/scripts.pory"
	.string "Can you help me find them?$"
# 471 "data/maps/Route116/scripts.pory"

# 472 "data/maps/Route116/scripts.pory"
Route116_Text_MayISeeThoseGlasses:
# 473 "data/maps/Route116/scripts.pory"
	.string "Those glasses!\n"
# 474 "data/maps/Route116/scripts.pory"
	.string "May I see them for a second?$"
# 475 "data/maps/Route116/scripts.pory"

# 476 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingForMaybeTheyArentHere:
# 477 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 478 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 479 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…\p"
# 480 "data/maps/Route116/scripts.pory"
	.string "Maybe my glasses aren't around\n"
# 481 "data/maps/Route116/scripts.pory"
	.string "here…$"
# 482 "data/maps/Route116/scripts.pory"

# 483 "data/maps/Route116/scripts.pory"
Route116_Text_CantFindGlassesNotHere:
# 484 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 485 "data/maps/Route116/scripts.pory"
	.string "I can't find my glasses anywhere…\l"
# 486 "data/maps/Route116/scripts.pory"
	.string "Maybe they're not around here…$"
# 487 "data/maps/Route116/scripts.pory"

# 488 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingFor:
# 489 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 490 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 491 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…$"
# 492 "data/maps/Route116/scripts.pory"

# 493 "data/maps/Route116/scripts.pory"
Route116_Text_RouteSignRustboro:
# 494 "data/maps/Route116/scripts.pory"
	.string "ROUTE 116\n"
# 495 "data/maps/Route116/scripts.pory"
	.string "{LEFT_ARROW} RUSTBORO CITY$"
# 496 "data/maps/Route116/scripts.pory"

# 497 "data/maps/Route116/scripts.pory"
Route116_Text_RusturfTunnelSign:
# 498 "data/maps/Route116/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 499 "data/maps/Route116/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 500 "data/maps/Route116/scripts.pory"
	.string "“The tunnel project has been\n"
# 501 "data/maps/Route116/scripts.pory"
	.string "canceled.”$"
# 502 "data/maps/Route116/scripts.pory"

# 503 "data/maps/Route116/scripts.pory"
Route116_Text_TunnelersRestHouse:
# 504 "data/maps/Route116/scripts.pory"
	.string "TUNNELER'S REST HOUSE$"
# 505 "data/maps/Route116/scripts.pory"

# 506 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBToStopEvolution:
# 507 "data/maps/Route116/scripts.pory"
	.string "Trainer Tips\p"
# 508 "data/maps/Route116/scripts.pory"
	.string "Press the “L” button to open a very\n"
# 509 "data/maps/Route116/scripts.pory"
	.string "useful 2nd menu if you haven't already.$"
# 510 "data/maps/Route116/scripts.pory"

# 511 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBagHasPockets:
# 512 "data/maps/Route116/scripts.pory"
	.string "Trainer Tips\p"
# 513 "data/maps/Route116/scripts.pory"
	.string "You can reuse TMs as many times as\n"
# 514 "data/maps/Route116/scripts.pory"
	.string "you want.$"

Route116_EventScript_Candice::
# 519 "data/maps/Route116/scripts.pory"
	lockall
# 520 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_CANDICE, Common_Movement_FacePlayer
# 521 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ICY_WIND, Route116_EventScript_CandiceDefeated
# 522 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route116_EventScript_CandiceRequestBattleAgain
# 523 "data/maps/Route116/scripts.pory"
	msgbox Candice_Greeting, MSGBOX_DEFAULT
# 524 "data/maps/Route116/scripts.pory"
	waitmessage
# 525 "data/maps/Route116/scripts.pory"
	msgbox Candice_WillYouBattleMe, MSGBOX_YESNO
# 526 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_BattleCandicePrompt
	end


Route116_EventScript_CandiceRequestBattleAgain::
# 531 "data/maps/Route116/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 532 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_BattleCandicePrompt
	end


Route116_EventScript_BattleCandicePrompt::
# 537 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route116_EventScript_BattleCandice
# 538 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route116_EventScript_DeclineCandiceBattle
# 539 "data/maps/Route116/scripts.pory"
	closemessage
	end


Route116_EventScript_DeclineCandiceBattle::
# 544 "data/maps/Route116/scripts.pory"
	setflag FLAG_TEMP_1
# 545 "data/maps/Route116/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 546 "data/maps/Route116/scripts.pory"
	release
	end


Route116_EventScript_BattleCandice::
# 551 "data/maps/Route116/scripts.pory"
	msgbox Route116_EventScript_BattleCandice_Text_0, MSGBOX_DEFAULT
# 552 "data/maps/Route116/scripts.pory"
	trainerbattle_no_intro TRAINER_CANDICE, Candice_Outro
# 553 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_CandiceGiveRockTomb
	return


Route116_EventScript_CandiceDefeated::
# 559 "data/maps/Route116/scripts.pory"
	msgbox PostBattle_Candice, MSGBOX_DEFAULT
# 560 "data/maps/Route116/scripts.pory"
	releaseall
	end


Route116_EventScript_CandiceGiveRockTomb::
# 565 "data/maps/Route116/scripts.pory"
	giveitem ITEM_TM_ICY_WIND
# 566 "data/maps/Route116/scripts.pory"
	giveitem ITEM_MUSCLE_BAND
# 567 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_TM_ICY_WIND
# 568 "data/maps/Route116/scripts.pory"
	msgbox Candice_ExplainRockTombAndMuscleBand
# 569 "data/maps/Route116/scripts.pory"
	release
	end


Route116_EventScript_BattleCandice_Text_0:
# 551 "data/maps/Route116/scripts.pory"
	.string "Let's do this!$"

Candice_ExplainRockTombAndMuscleBand::
# 573 "data/maps/Route116/scripts.pory"
	.string "That Technical Machine, TM21,\n"
	.string "contains Icy Wind.\p"
	.string "It not only inflicts damage with a cold\n"
	.string "breeze, it also lowers Speed.\p"
	.string "I think you'll find it to be quite useful\n"
	.string "against the first Gym Leader here!\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a Pokémon.\p"
	.string "Thanks to some great advances in\n"
	.string "technology, now you can use a TM as\l"
	.string "many times as you want!\p"
	.string "And the Muscle Band will boost your\n"
	.string "Attack if held!$"

Candice_Greeting::
# 589 "data/maps/Route116/scripts.pory"
	.string "Oh, hello. I'm Candice, the 7th Gym\n"
	.string "Leader from the Sinnoh region.\p"
	.string "I came to this Rustboro City to pay a\n"
	.string "visit to the Trainer School and check\l"
	.string "out the quality of education here in\l"
	.string "the Hoenn region.\p"
	.string "I am a teacher myself, you know!\p"
	.string "You look like a trainer who has just\n"
	.string "started out their journey, perhaps\l"
	.string "you'd like to battle as a warmup for\l"
	.string "your first Gym challenge?$"

Candice_WillYouBattleMe::
# 603 "data/maps/Route116/scripts.pory"
	.string "Don't worry, I brought a team of lower-\n"
	.string "level Pokémon, just in case I bumped\l"
	.string "into any promising new trainers, so you\l"
	.string "won't have to face my full force!\p"
	.string "What do you say we have a battle?$"

Candice_Outro::
# 611 "data/maps/Route116/scripts.pory"
	.string "Looks like the trainers here are\n"
	.string "pretty strong! Please, take these\l"
	.string "as rewards for beating me.$"

PostBattle_Candice::
# 618 "data/maps/Route116/scripts.pory"
	.string "It seems the quality of education here\n"
	.string "in Hoenn is on par with ours in Sinnoh!$"

Ready_Yet::
# 623 "data/maps/Route116/scripts.pory"
	.string "Ready for our battle now?$"

Come_Back_When_Ready::
# 627 "data/maps/Route116/scripts.pory"
	.string "Come back when you're ready.$"
