# 1 "data/maps/RustboroCity/scripts.pory"

# 2 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 3 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 4 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 5 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 6 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 7 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 8 "data/maps/RustboroCity/scripts.pory"

# 9 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 10 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 11 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 12 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 13 "data/maps/RustboroCity/scripts.pory"

# 14 "data/maps/RustboroCity/scripts.pory"

# 15 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 16 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 17 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 19 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 20 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 21 "data/maps/RustboroCity/scripts.pory"
	end
# 22 "data/maps/RustboroCity/scripts.pory"

# 23 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 24 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 25 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 26 "data/maps/RustboroCity/scripts.pory"
	end
# 27 "data/maps/RustboroCity/scripts.pory"

# 28 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 29 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 30 "data/maps/RustboroCity/scripts.pory"
	end
# 31 "data/maps/RustboroCity/scripts.pory"

# 32 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 33 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 34 "data/maps/RustboroCity/scripts.pory"
	return
# 35 "data/maps/RustboroCity/scripts.pory"

# 36 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 37 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 38 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 39 "data/maps/RustboroCity/scripts.pory"

# 40 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 41 "data/maps/RustboroCity/scripts.pory"
	lockall
# 42 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 43 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 44 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 45 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 46 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 47 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 48 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 49 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 51 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 52 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 53 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 54 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 55 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 56 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 57 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 58 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 59 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 60 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 61 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 62 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 63 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 64 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 65 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 66 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 67 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 68 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 69 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 70 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 71 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 72 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 73 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 74 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 75 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 76 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 77 "data/maps/RustboroCity/scripts.pory"

# 78 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 79 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 80 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 81 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 82 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 83 "data/maps/RustboroCity/scripts.pory"

# 84 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 85 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 86 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 87 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 89 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 90 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 91 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 92 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 93 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 94 "data/maps/RustboroCity/scripts.pory"
	end
# 95 "data/maps/RustboroCity/scripts.pory"

# 96 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 97 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 98 "data/maps/RustboroCity/scripts.pory"
	step_end
# 99 "data/maps/RustboroCity/scripts.pory"

# 100 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 101 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 102 "data/maps/RustboroCity/scripts.pory"
	step_end
# 103 "data/maps/RustboroCity/scripts.pory"

# 104 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 105 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 106 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 107 "data/maps/RustboroCity/scripts.pory"
	step_end
# 108 "data/maps/RustboroCity/scripts.pory"

# 109 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 110 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 111 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 112 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 113 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 114 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 115 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 116 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 117 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 118 "data/maps/RustboroCity/scripts.pory"
	step_end
# 119 "data/maps/RustboroCity/scripts.pory"

# 120 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 121 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 122 "data/maps/RustboroCity/scripts.pory"
	step_end
# 123 "data/maps/RustboroCity/scripts.pory"

# 124 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 125 "data/maps/RustboroCity/scripts.pory"
	lock
# 126 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 127 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 128 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 129 "data/maps/RustboroCity/scripts.pory"
	release
# 130 "data/maps/RustboroCity/scripts.pory"
	end
# 131 "data/maps/RustboroCity/scripts.pory"

# 132 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 133 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 134 "data/maps/RustboroCity/scripts.pory"
	release
# 135 "data/maps/RustboroCity/scripts.pory"
	end
# 136 "data/maps/RustboroCity/scripts.pory"

# 137 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 138 "data/maps/RustboroCity/scripts.pory"
	lock
# 139 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 140 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 141 "data/maps/RustboroCity/scripts.pory"
	release
# 142 "data/maps/RustboroCity/scripts.pory"
	end
# 143 "data/maps/RustboroCity/scripts.pory"

# 144 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 145 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 146 "data/maps/RustboroCity/scripts.pory"
	end
# 147 "data/maps/RustboroCity/scripts.pory"

# 148 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 149 "data/maps/RustboroCity/scripts.pory"
	lock
# 150 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 151 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 152 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 153 "data/maps/RustboroCity/scripts.pory"
	release
# 154 "data/maps/RustboroCity/scripts.pory"
	end
# 155 "data/maps/RustboroCity/scripts.pory"

# 156 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 157 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 158 "data/maps/RustboroCity/scripts.pory"
	release
# 159 "data/maps/RustboroCity/scripts.pory"
	end
# 160 "data/maps/RustboroCity/scripts.pory"

# 161 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 162 "data/maps/RustboroCity/scripts.pory"
	lock
# 163 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 164 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 165 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 166 "data/maps/RustboroCity/scripts.pory"
	release
# 167 "data/maps/RustboroCity/scripts.pory"
	end
# 168 "data/maps/RustboroCity/scripts.pory"

# 169 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 170 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 171 "data/maps/RustboroCity/scripts.pory"
	release
# 172 "data/maps/RustboroCity/scripts.pory"
	end
# 173 "data/maps/RustboroCity/scripts.pory"

# 174 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 175 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 176 "data/maps/RustboroCity/scripts.pory"
	end
# 177 "data/maps/RustboroCity/scripts.pory"

# 178 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 179 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 180 "data/maps/RustboroCity/scripts.pory"
	end
# 181 "data/maps/RustboroCity/scripts.pory"

# 182 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 183 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 184 "data/maps/RustboroCity/scripts.pory"
	end
# 185 "data/maps/RustboroCity/scripts.pory"

# 186 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 187 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 188 "data/maps/RustboroCity/scripts.pory"
	end
# 189 "data/maps/RustboroCity/scripts.pory"

# 190 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 191 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 192 "data/maps/RustboroCity/scripts.pory"
	end
# 193 "data/maps/RustboroCity/scripts.pory"

# 194 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 195 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 196 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 197 "data/maps/RustboroCity/scripts.pory"
	end
# 198 "data/maps/RustboroCity/scripts.pory"

# 199 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 200 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 201 "data/maps/RustboroCity/scripts.pory"
	end
# 202 "data/maps/RustboroCity/scripts.pory"

# 203 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 204 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 205 "data/maps/RustboroCity/scripts.pory"
	end
# 206 "data/maps/RustboroCity/scripts.pory"

# 207 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 208 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 209 "data/maps/RustboroCity/scripts.pory"
	end
# 210 "data/maps/RustboroCity/scripts.pory"

# 211 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 212 "data/maps/RustboroCity/scripts.pory"
	lock
# 213 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 214 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 215 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 216 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/RustboroCity/scripts.pory"
	release
# 218 "data/maps/RustboroCity/scripts.pory"
	end
# 219 "data/maps/RustboroCity/scripts.pory"

# 220 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 221 "data/maps/RustboroCity/scripts.pory"
	lock
# 222 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 223 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 224 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 225 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 226 "data/maps/RustboroCity/scripts.pory"
	release
# 227 "data/maps/RustboroCity/scripts.pory"
	end
# 228 "data/maps/RustboroCity/scripts.pory"

# 229 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 230 "data/maps/RustboroCity/scripts.pory"
	lock
# 231 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 232 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 233 "data/maps/RustboroCity/scripts.pory"
	release
# 234 "data/maps/RustboroCity/scripts.pory"
	end
# 235 "data/maps/RustboroCity/scripts.pory"

# 236 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 237 "data/maps/RustboroCity/scripts.pory"
	lockall
# 238 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 239 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 240 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 241 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 242 "data/maps/RustboroCity/scripts.pory"
	end
# 243 "data/maps/RustboroCity/scripts.pory"

# 244 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 245 "data/maps/RustboroCity/scripts.pory"
	lockall
# 246 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 247 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 248 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 249 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 250 "data/maps/RustboroCity/scripts.pory"
	end
# 251 "data/maps/RustboroCity/scripts.pory"

# 252 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 253 "data/maps/RustboroCity/scripts.pory"
	lockall
# 254 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 255 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 256 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 257 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 258 "data/maps/RustboroCity/scripts.pory"
	end
# 259 "data/maps/RustboroCity/scripts.pory"

# 260 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 261 "data/maps/RustboroCity/scripts.pory"
	lockall
# 262 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 263 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 264 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 265 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 266 "data/maps/RustboroCity/scripts.pory"
	end
# 267 "data/maps/RustboroCity/scripts.pory"

# 268 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 269 "data/maps/RustboroCity/scripts.pory"
	lockall
# 270 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 271 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 272 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 273 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 274 "data/maps/RustboroCity/scripts.pory"
	end
# 275 "data/maps/RustboroCity/scripts.pory"

# 276 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 277 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 278 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 279 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 280 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 281 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 282 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 283 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 284 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 285 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 286 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 287 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 288 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 289 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 290 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 291 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 292 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 293 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 294 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 295 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 296 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 297 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 298 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 299 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 300 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 301 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 302 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 303 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 304 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 305 "data/maps/RustboroCity/scripts.pory"
	end
# 306 "data/maps/RustboroCity/scripts.pory"

# 307 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 308 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 309 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 310 "data/maps/RustboroCity/scripts.pory"
	return
# 311 "data/maps/RustboroCity/scripts.pory"

# 312 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 313 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 314 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 315 "data/maps/RustboroCity/scripts.pory"
	return
# 316 "data/maps/RustboroCity/scripts.pory"

# 317 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 318 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 319 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 320 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/RustboroCity/scripts.pory"
	return
# 322 "data/maps/RustboroCity/scripts.pory"

# 323 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 324 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 325 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 326 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 327 "data/maps/RustboroCity/scripts.pory"
	return
# 328 "data/maps/RustboroCity/scripts.pory"

# 329 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 330 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 331 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 332 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 333 "data/maps/RustboroCity/scripts.pory"
	return
# 334 "data/maps/RustboroCity/scripts.pory"

# 335 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 336 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 337 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 338 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 339 "data/maps/RustboroCity/scripts.pory"
	return
# 340 "data/maps/RustboroCity/scripts.pory"

# 341 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 342 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 343 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 344 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 345 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 346 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 347 "data/maps/RustboroCity/scripts.pory"
	return
# 348 "data/maps/RustboroCity/scripts.pory"

# 349 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 350 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 351 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 352 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 353 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 354 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 355 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 356 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 357 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 358 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 359 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 360 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 361 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 362 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 363 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 364 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 365 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 366 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 367 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 368 "data/maps/RustboroCity/scripts.pory"
	step_end
# 369 "data/maps/RustboroCity/scripts.pory"

# 370 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 371 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 372 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 374 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 375 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 379 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 380 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 381 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 382 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 383 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 384 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 385 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 386 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 387 "data/maps/RustboroCity/scripts.pory"
	step_end
# 388 "data/maps/RustboroCity/scripts.pory"

# 389 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 390 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 397 "data/maps/RustboroCity/scripts.pory"
	step_end
# 398 "data/maps/RustboroCity/scripts.pory"

# 399 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 403 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 404 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 405 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 406 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 407 "data/maps/RustboroCity/scripts.pory"
	step_end
# 408 "data/maps/RustboroCity/scripts.pory"

# 409 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 410 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 411 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 414 "data/maps/RustboroCity/scripts.pory"
	step_end
# 415 "data/maps/RustboroCity/scripts.pory"

# 416 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 417 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 420 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 421 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 422 "data/maps/RustboroCity/scripts.pory"
	step_end
# 423 "data/maps/RustboroCity/scripts.pory"

# 424 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 425 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 426 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 427 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 428 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 429 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 430 "data/maps/RustboroCity/scripts.pory"
	step_end
# 431 "data/maps/RustboroCity/scripts.pory"

# 432 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 433 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 437 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 438 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 439 "data/maps/RustboroCity/scripts.pory"
	step_end
# 440 "data/maps/RustboroCity/scripts.pory"

# 441 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 442 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 444 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 445 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 446 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 447 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 448 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 449 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 450 "data/maps/RustboroCity/scripts.pory"
	step_end
# 451 "data/maps/RustboroCity/scripts.pory"

# 452 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 453 "data/maps/RustboroCity/scripts.pory"
	lock
# 454 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 455 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 456 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 457 "data/maps/RustboroCity/scripts.pory"
	release
# 458 "data/maps/RustboroCity/scripts.pory"
	end
# 459 "data/maps/RustboroCity/scripts.pory"

# 460 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 461 "data/maps/RustboroCity/scripts.pory"
	waitse
# 462 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 463 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 464 "data/maps/RustboroCity/scripts.pory"
	end
# 465 "data/maps/RustboroCity/scripts.pory"

# 466 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 467 "data/maps/RustboroCity/scripts.pory"
	lockall
# 468 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 469 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 470 "data/maps/RustboroCity/scripts.pory"
	end
# 471 "data/maps/RustboroCity/scripts.pory"

# 472 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 473 "data/maps/RustboroCity/scripts.pory"
	lockall
# 474 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 475 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 476 "data/maps/RustboroCity/scripts.pory"
	end
# 477 "data/maps/RustboroCity/scripts.pory"

# 478 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 479 "data/maps/RustboroCity/scripts.pory"
	lockall
# 480 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 481 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 482 "data/maps/RustboroCity/scripts.pory"
	end
# 483 "data/maps/RustboroCity/scripts.pory"

# 484 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 485 "data/maps/RustboroCity/scripts.pory"
	lockall
# 486 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 487 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 488 "data/maps/RustboroCity/scripts.pory"
	end
# 489 "data/maps/RustboroCity/scripts.pory"

# 490 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 491 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 492 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 493 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 494 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 495 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 496 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 497 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 498 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 499 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 500 "data/maps/RustboroCity/scripts.pory"
	end
# 501 "data/maps/RustboroCity/scripts.pory"

# 502 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 503 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 504 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 505 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 506 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 507 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 508 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 509 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 510 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 511 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 512 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 513 "data/maps/RustboroCity/scripts.pory"
	return
# 514 "data/maps/RustboroCity/scripts.pory"

# 515 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 516 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 517 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 518 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 519 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 520 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 521 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 522 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 523 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 524 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 525 "data/maps/RustboroCity/scripts.pory"
	return
# 526 "data/maps/RustboroCity/scripts.pory"

# 527 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 528 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 529 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 531 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 532 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 534 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 536 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/RustboroCity/scripts.pory"
	return
# 538 "data/maps/RustboroCity/scripts.pory"

# 539 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 540 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 541 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 543 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 544 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 546 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 548 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 550 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/RustboroCity/scripts.pory"
	return
# 552 "data/maps/RustboroCity/scripts.pory"

# 553 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 554 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 555 "data/maps/RustboroCity/scripts.pory"
	step_end
# 556 "data/maps/RustboroCity/scripts.pory"

# 557 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 558 "data/maps/RustboroCity/scripts.pory"
	lockall
# 559 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 560 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 561 "data/maps/RustboroCity/scripts.pory"
	end
# 562 "data/maps/RustboroCity/scripts.pory"

# 563 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 564 "data/maps/RustboroCity/scripts.pory"
	lockall
# 565 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 566 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 567 "data/maps/RustboroCity/scripts.pory"
	end
# 568 "data/maps/RustboroCity/scripts.pory"

# 569 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 570 "data/maps/RustboroCity/scripts.pory"
	lockall
# 571 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 572 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 573 "data/maps/RustboroCity/scripts.pory"
	end
# 574 "data/maps/RustboroCity/scripts.pory"

# 575 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 576 "data/maps/RustboroCity/scripts.pory"
	lockall
# 577 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 578 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 579 "data/maps/RustboroCity/scripts.pory"
	end
# 580 "data/maps/RustboroCity/scripts.pory"

# 581 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 582 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 583 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 584 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 585 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 586 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 587 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 588 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 589 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 590 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 591 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 592 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 593 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 594 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 595 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 596 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 597 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 598 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 599 "data/maps/RustboroCity/scripts.pory"
	end
# 600 "data/maps/RustboroCity/scripts.pory"

# 601 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 602 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 603 "data/maps/RustboroCity/scripts.pory"
	return
# 604 "data/maps/RustboroCity/scripts.pory"

# 605 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 606 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 607 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 608 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 609 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 610 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 611 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 612 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 613 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 614 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 615 "data/maps/RustboroCity/scripts.pory"
	return
# 616 "data/maps/RustboroCity/scripts.pory"

# 617 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 618 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 619 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 620 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 621 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 622 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 623 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 624 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 625 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 626 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 627 "data/maps/RustboroCity/scripts.pory"
	return
# 628 "data/maps/RustboroCity/scripts.pory"

# 629 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 630 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 631 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 633 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 634 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 635 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 636 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 637 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 638 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/RustboroCity/scripts.pory"
	return
# 640 "data/maps/RustboroCity/scripts.pory"

# 641 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 642 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 643 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 645 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 646 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 647 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 648 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 650 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 652 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 653 "data/maps/RustboroCity/scripts.pory"
	return
# 654 "data/maps/RustboroCity/scripts.pory"

# 655 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 656 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 657 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 658 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 659 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 660 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 661 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 662 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 663 "data/maps/RustboroCity/scripts.pory"
	return
# 664 "data/maps/RustboroCity/scripts.pory"

# 665 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 666 "data/maps/RustboroCity/scripts.pory"
	lockall
# 667 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 668 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 669 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 670 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 671 "data/maps/RustboroCity/scripts.pory"

# 672 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 673 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 674 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 675 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 676 "data/maps/RustboroCity/scripts.pory"
	return
# 677 "data/maps/RustboroCity/scripts.pory"

# 678 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 679 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 680 "data/maps/RustboroCity/scripts.pory"
	return
# 681 "data/maps/RustboroCity/scripts.pory"

# 682 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 683 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 684 "data/maps/RustboroCity/scripts.pory"
	return
# 685 "data/maps/RustboroCity/scripts.pory"

# 686 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 687 "data/maps/RustboroCity/scripts.pory"
	lockall
# 688 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 689 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 690 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 691 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 692 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 693 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 694 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 695 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 696 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 697 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 698 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 699 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 700 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 701 "data/maps/RustboroCity/scripts.pory"

# 702 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 703 "data/maps/RustboroCity/scripts.pory"
	lockall
# 704 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 705 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 706 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 707 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 708 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 709 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 710 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 711 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 712 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 713 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 714 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 715 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 716 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 717 "data/maps/RustboroCity/scripts.pory"

# 718 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 719 "data/maps/RustboroCity/scripts.pory"
	lockall
# 720 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 721 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 722 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 723 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 724 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 725 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 726 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 727 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 728 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 729 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 730 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 731 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 732 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 733 "data/maps/RustboroCity/scripts.pory"

# 734 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 735 "data/maps/RustboroCity/scripts.pory"
	lockall
# 736 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 737 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 738 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 739 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 740 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 741 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 742 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 743 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 744 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 745 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 746 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 747 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 748 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 749 "data/maps/RustboroCity/scripts.pory"

# 750 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 751 "data/maps/RustboroCity/scripts.pory"
	lockall
# 752 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 753 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 754 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 755 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 756 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 757 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 758 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 759 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 760 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 761 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 762 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 763 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 764 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 765 "data/maps/RustboroCity/scripts.pory"

# 766 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 767 "data/maps/RustboroCity/scripts.pory"
	lockall
# 768 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 769 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 770 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 771 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 772 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 773 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 774 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 775 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 776 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 777 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 778 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 779 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 780 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 781 "data/maps/RustboroCity/scripts.pory"

# 782 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 783 "data/maps/RustboroCity/scripts.pory"
	lockall
# 784 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 785 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 786 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 787 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 788 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 789 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 790 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 791 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 792 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 793 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 794 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 795 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 796 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 797 "data/maps/RustboroCity/scripts.pory"

# 798 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 799 "data/maps/RustboroCity/scripts.pory"
	lockall
# 800 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 801 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 802 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 803 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 804 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 805 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 806 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 807 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 808 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 809 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 810 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 811 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 812 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 813 "data/maps/RustboroCity/scripts.pory"

# 814 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 815 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 816 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 817 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 818 "data/maps/RustboroCity/scripts.pory"
	end
# 819 "data/maps/RustboroCity/scripts.pory"

# 820 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 821 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 822 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 823 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 824 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 825 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 826 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 827 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 828 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 829 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 830 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 831 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 832 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 833 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 834 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 835 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 836 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleMay2
# 837 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 838 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 839 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 840 "data/maps/RustboroCity/scripts.pory"
	end
# 841 "data/maps/RustboroCity/scripts.pory"

# 842 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 843 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 844 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 845 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 846 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleMay2
# 847 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 848 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 849 "data/maps/RustboroCity/scripts.pory"
	end
# 850 "data/maps/RustboroCity/scripts.pory"

# 851 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 852 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 853 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 854 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 855 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 856 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 857 "data/maps/RustboroCity/scripts.pory"
	end
# 858 "data/maps/RustboroCity/scripts.pory"

# 859 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay2::
# 860 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TooBad, MSGBOX_DEFAULT
# 861 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 862 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 863 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 864 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 865 "data/maps/RustboroCity/scripts.pory"
	end
# 866 "data/maps/RustboroCity/scripts.pory"

# 867 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 868 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 869 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 870 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 871 "data/maps/RustboroCity/scripts.pory"
	end
# 872 "data/maps/RustboroCity/scripts.pory"

# 873 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHintWithLevelCapMessage::
# 874 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 875 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 876 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 877 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 878 "data/maps/RustboroCity/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 879 "data/maps/RustboroCity/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 880 "data/maps/RustboroCity/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 881 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 882 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 883 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 884 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 885 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 886 "data/maps/RustboroCity/scripts.pory"
	end
# 887 "data/maps/RustboroCity/scripts.pory"

# 888 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 889 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 890 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 891 "data/maps/RustboroCity/scripts.pory"
	return
# 892 "data/maps/RustboroCity/scripts.pory"

# 893 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 894 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 895 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 896 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 897 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 898 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 899 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHintWithLevelCapMessage
# 900 "data/maps/RustboroCity/scripts.pory"
	end
# 901 "data/maps/RustboroCity/scripts.pory"

# 902 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 903 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 904 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 905 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 906 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 907 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 908 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHintWithLevelCapMessage
# 909 "data/maps/RustboroCity/scripts.pory"
	end
# 910 "data/maps/RustboroCity/scripts.pory"

# 911 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 912 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 913 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 914 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 915 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 916 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 917 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHintWithLevelCapMessage
# 918 "data/maps/RustboroCity/scripts.pory"
	end
# 919 "data/maps/RustboroCity/scripts.pory"

# 920 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 921 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 922 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 923 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 924 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 925 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 926 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 927 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 928 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 929 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 930 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 931 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 932 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 933 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 934 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 935 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleBrendan2
# 936 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 937 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 938 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 939 "data/maps/RustboroCity/scripts.pory"
	end
# 940 "data/maps/RustboroCity/scripts.pory"

# 941 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 942 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 943 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 944 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleBrendan2
# 945 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 946 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 947 "data/maps/RustboroCity/scripts.pory"
	end
# 948 "data/maps/RustboroCity/scripts.pory"

# 949 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 950 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 951 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 952 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 953 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 954 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 955 "data/maps/RustboroCity/scripts.pory"
	end
# 956 "data/maps/RustboroCity/scripts.pory"

# 957 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan2::
# 958 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TooBad, MSGBOX_DEFAULT
# 959 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 960 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 961 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 962 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 963 "data/maps/RustboroCity/scripts.pory"
	end
# 964 "data/maps/RustboroCity/scripts.pory"

# 965 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 966 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 967 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 968 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 969 "data/maps/RustboroCity/scripts.pory"
	end
# 970 "data/maps/RustboroCity/scripts.pory"

# 971 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHintWithLevelCapMessage::
# 972 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 973 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 974 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 975 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 976 "data/maps/RustboroCity/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 977 "data/maps/RustboroCity/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 978 "data/maps/RustboroCity/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 979 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 980 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 981 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 982 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 983 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 984 "data/maps/RustboroCity/scripts.pory"
	end
# 985 "data/maps/RustboroCity/scripts.pory"

# 986 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 987 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 988 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 989 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 990 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 991 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 992 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHintWithLevelCapMessage
# 993 "data/maps/RustboroCity/scripts.pory"
	end
# 994 "data/maps/RustboroCity/scripts.pory"

# 995 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 996 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 997 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 998 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 999 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1000 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 1001 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHintWithLevelCapMessage
# 1002 "data/maps/RustboroCity/scripts.pory"
	end
# 1003 "data/maps/RustboroCity/scripts.pory"

# 1004 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 1005 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 1006 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1007 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1008 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1009 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 1010 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHintWithLevelCapMessage
# 1011 "data/maps/RustboroCity/scripts.pory"
	end
# 1012 "data/maps/RustboroCity/scripts.pory"

# 1013 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 1014 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1015 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1016 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1017 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1018 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1019 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1020 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1021 "data/maps/RustboroCity/scripts.pory"

# 1022 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 1023 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1024 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1025 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1026 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1027 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1028 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1029 "data/maps/RustboroCity/scripts.pory"

# 1030 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 1031 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1032 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1033 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1034 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1035 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1036 "data/maps/RustboroCity/scripts.pory"

# 1037 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1038 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1039 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1040 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1041 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1042 "data/maps/RustboroCity/scripts.pory"

# 1043 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1044 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1045 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1046 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1047 "data/maps/RustboroCity/scripts.pory"

# 1048 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1049 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1050 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1051 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1052 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1053 "data/maps/RustboroCity/scripts.pory"

# 1054 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1055 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1056 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1057 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1058 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1059 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1060 "data/maps/RustboroCity/scripts.pory"

# 1061 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1062 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1063 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1064 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1065 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1066 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1067 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1068 "data/maps/RustboroCity/scripts.pory"

# 1069 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1070 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1071 "data/maps/RustboroCity/scripts.pory"
	end
# 1072 "data/maps/RustboroCity/scripts.pory"

# 1073 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "The Devon Corporation…\n"
# 1075 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to Devon.\p"
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1077 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1078 "data/maps/RustboroCity/scripts.pory"

# 1079 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1082 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1083 "data/maps/RustboroCity/scripts.pory"

# 1084 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1085 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the Pokémon Gym\n"
# 1086 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1087 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny Gym Badge\n"
# 1088 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess trainers begin to\l"
# 1089 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1090 "data/maps/RustboroCity/scripts.pory"

# 1091 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1092 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's Rustboro's Gym Badge!\p"
# 1093 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the Pokémon Gym BadgeS,\n"
# 1094 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro's is the coolest, I'd say.$"
# 1095 "data/maps/RustboroCity/scripts.pory"

# 1096 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1097 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1098 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1099 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1100 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School?$"
# 1101 "data/maps/RustboroCity/scripts.pory"

# 1102 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1103 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the Gym Leader, but…\p"
# 1104 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1105 "data/maps/RustboroCity/scripts.pory"
	.string "my Fire-type Pokémon…\p"
# 1106 "data/maps/RustboroCity/scripts.pory"
	.string "Fire-type Pokémon don't match up\n"
# 1107 "data/maps/RustboroCity/scripts.pory"
	.string "well against Rock-type Pokémon…$"
# 1108 "data/maps/RustboroCity/scripts.pory"

# 1109 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
# 1111 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1112 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1113 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1114 "data/maps/RustboroCity/scripts.pory"

# 1115 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1116 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
# 1117 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1118 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1119 "data/maps/RustboroCity/scripts.pory"
	.string "Slateport for his pet, Peeko.\p"
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "that Peeko.$"
# 1122 "data/maps/RustboroCity/scripts.pory"

# 1123 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1124 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have Pokémon with you, too.\p"
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "places with Pokémon, too.$"
# 1127 "data/maps/RustboroCity/scripts.pory"

# 1128 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1129 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School!\p"
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare Pokémon easily?$"
# 1132 "data/maps/RustboroCity/scripts.pory"

# 1133 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "If a Pokémon gains experience in\n"
# 1135 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1136 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1137 "data/maps/RustboroCity/scripts.pory"

# 1138 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1139 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon changes shape?\n"
# 1140 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1141 "data/maps/RustboroCity/scripts.pory"

# 1142 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon you get in a trade from\n"
# 1144 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1145 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain Gym\n"
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "Badges, it may not obey you…$"
# 1147 "data/maps/RustboroCity/scripts.pory"

# 1148 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1149 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1151 "data/maps/RustboroCity/scripts.pory"

# 1152 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1153 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my Goods!$"
# 1155 "data/maps/RustboroCity/scripts.pory"

# 1156 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1157 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1158 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic trainer who\n"
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in Petalburg Woods!\p"
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by Team Aqua!\n"
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the Devon Goods back!\p"
# 1162 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1163 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1164 "data/maps/RustboroCity/scripts.pory"

# 1165 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1166 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1168 "data/maps/RustboroCity/scripts.pory"

# 1169 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1170 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "The Devon Goods?\p"
# 1172 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1174 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great trainer!\p"
# 1175 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "another Great Ball!$"
# 1177 "data/maps/RustboroCity/scripts.pory"

# 1178 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1180 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this Great Ball.$"
# 1181 "data/maps/RustboroCity/scripts.pory"

# 1182 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1185 "data/maps/RustboroCity/scripts.pory"

# 1186 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, hi, {PLAYER}{KUN}!\p"
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string "You had a Match Call feature put\n"
# 1189 "data/maps/RustboroCity/scripts.pory"
	.string "on your PokéNav!\p"
# 1190 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1193 "data/maps/RustboroCity/scripts.pory"

# 1194 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1195 "data/maps/RustboroCity/scripts.pory"
	.string "Registered May\n"
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "in the PokéNav.$"
# 1197 "data/maps/RustboroCity/scripts.pory"

# 1198 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1199 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, by the way, I passed\n"
# 1200 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney in Petalburg Woods.\p"
# 1201 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1202 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "How's your Pokédex coming along,\n"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1207 "data/maps/RustboroCity/scripts.pory"

# 1208 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1209 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, what's the matter?\p"
# 1210 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1211 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon very much?\p"
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a trainer!$"
# 1213 "data/maps/RustboroCity/scripts.pory"

# 1214 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1215 "data/maps/RustboroCity/scripts.pory"
	.string "May: So, what do you think?\n"
# 1216 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1217 "data/maps/RustboroCity/scripts.pory"

# 1218 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1219 "data/maps/RustboroCity/scripts.pory"
	.string "May: You just became a trainer,\n"
# 1220 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1221 "data/maps/RustboroCity/scripts.pory"

# 1222 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TooBad:
# 1223 "data/maps/RustboroCity/scripts.pory"
	.string "Too bad!$"
# 1224 "data/maps/RustboroCity/scripts.pory"

# 1225 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1226 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1227 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1228 "data/maps/RustboroCity/scripts.pory"

# 1229 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1230 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, by the way, Mr. Briney, who\n"
# 1231 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1232 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1233 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but Mr. Briney\l"
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1235 "data/maps/RustboroCity/scripts.pory"

# 1236 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1237 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: Oh, hey, {PLAYER}!\p"
# 1238 "data/maps/RustboroCity/scripts.pory"
	.string "You had a Match Call feature put\n"
# 1239 "data/maps/RustboroCity/scripts.pory"
	.string "on your PokéNav! Cool!\p"
# 1240 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1241 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1242 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1243 "data/maps/RustboroCity/scripts.pory"

# 1244 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1245 "data/maps/RustboroCity/scripts.pory"
	.string "Registered Brendan\n"
# 1246 "data/maps/RustboroCity/scripts.pory"
	.string "in the PokéNav.$"
# 1247 "data/maps/RustboroCity/scripts.pory"

# 1248 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: By the way, {PLAYER}, I walked\n"
# 1250 "data/maps/RustboroCity/scripts.pory"
	.string "by Mr. Briney in Petalburg Woods.\p"
# 1251 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1253 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your Pokédex?\n"
# 1254 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1255 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1256 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1258 "data/maps/RustboroCity/scripts.pory"

# 1259 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1260 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: What's the matter? Don't have\n"
# 1261 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your Pokémon?$"
# 1262 "data/maps/RustboroCity/scripts.pory"

# 1263 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: What's up?\n"
# 1265 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1266 "data/maps/RustboroCity/scripts.pory"

# 1267 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: I know you just became\n"
# 1269 "data/maps/RustboroCity/scripts.pory"
	.string "a trainer, but I won't go easy!$"
# 1270 "data/maps/RustboroCity/scripts.pory"

# 1271 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1274 "data/maps/RustboroCity/scripts.pory"

# 1275 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1276 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: By the way, you know\n"
# 1277 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney? The guy I just passed?\p"
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1280 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney was once a great sailor.$"
# 1281 "data/maps/RustboroCity/scripts.pory"

# 1282 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1286 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1287 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1288 "data/maps/RustboroCity/scripts.pory"

# 1289 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1290 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corporation\p"
# 1291 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1292 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1293 "data/maps/RustboroCity/scripts.pory"

# 1294 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1295 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City Pokémon Gym\n"
# 1296 "data/maps/RustboroCity/scripts.pory"
	.string "Leader: Roxanne\p"
# 1297 "data/maps/RustboroCity/scripts.pory"
	.string "“The Rock-loving honors student!”$"
# 1298 "data/maps/RustboroCity/scripts.pory"

# 1299 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1300 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corp. Branch Office\p"
# 1301 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to Devon employees\n"
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1303 "data/maps/RustboroCity/scripts.pory"

# 1304 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1305 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City\p"
# 1306 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1307 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1308 "data/maps/RustboroCity/scripts.pory"

# 1309 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1310 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School\p"
# 1311 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1312 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon!”$"
# 1313 "data/maps/RustboroCity/scripts.pory"

# 1314 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1315 "data/maps/RustboroCity/scripts.pory"
	.string "Cutter's House$"
# 1316 "data/maps/RustboroCity/scripts.pory"

# 1317 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1318 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1319 "data/maps/RustboroCity/scripts.pory"
	.string "for the PokéNav…\p"
# 1320 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1321 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that PokéNav?\n"
# 1322 "data/maps/RustboroCity/scripts.pory"
	.string "The one our President gave you?$"
# 1323 "data/maps/RustboroCity/scripts.pory"

# 1324 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1325 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1326 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1327 "data/maps/RustboroCity/scripts.pory"
	.string "Match Call to your PokéNav.\p"
# 1328 "data/maps/RustboroCity/scripts.pory"
	.string "Using the Match Call feature,\n"
# 1329 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1330 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your PokéNav.\p"
# 1331 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1332 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1333 "data/maps/RustboroCity/scripts.pory"

# 1334 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1335 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the PokéNav.$"
# 1336 "data/maps/RustboroCity/scripts.pory"

# 1337 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1338 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1339 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1340 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another trainer.\p"
# 1341 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two trainers\n"
# 1342 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more Pokémon,\l"
# 1343 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1344 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1345 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two trainers by yourself?$"

RustboroCity_Trigger_BlockGymEntrance::
# 1349 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1350 "data/maps/RustboroCity/scripts.pory"
	msgbox GoBeatRoark, MSGBOX_SIGN
# 1351 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1352 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 1353 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1354 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end


# 1364 "data/maps/RustboroCity/scripts.pory"
StopPlayer:
# 1365 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

GoBeatRoark::
# 1358 "data/maps/RustboroCity/scripts.pory"
	.string "You should go see if there are any\n"
	.string "other strong trainers to fight, perhaps\l"
	.string "very far east on Route 116.$"
