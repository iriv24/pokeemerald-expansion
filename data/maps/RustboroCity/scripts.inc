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
RustboroCity_OnTransition:
# 15 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 16 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 17 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 18 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 19 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 20 "data/maps/RustboroCity/scripts.pory"
	end
# 21 "data/maps/RustboroCity/scripts.pory"

# 22 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 23 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 24 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 25 "data/maps/RustboroCity/scripts.pory"
	end
# 26 "data/maps/RustboroCity/scripts.pory"

# 27 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 28 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 29 "data/maps/RustboroCity/scripts.pory"
	end
# 30 "data/maps/RustboroCity/scripts.pory"

# 31 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 32 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 33 "data/maps/RustboroCity/scripts.pory"
	return
# 34 "data/maps/RustboroCity/scripts.pory"

# 35 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 36 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 37 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 38 "data/maps/RustboroCity/scripts.pory"

# 39 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 40 "data/maps/RustboroCity/scripts.pory"
	lockall
# 41 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 42 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 43 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 45 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 46 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 47 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 48 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 49 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 50 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 51 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 53 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 57 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 59 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 60 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 61 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 62 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 63 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 64 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 65 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 66 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 67 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 68 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 69 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 70 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 71 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 72 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 73 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 74 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 75 "data/maps/RustboroCity/scripts.pory"
	delay 20
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
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 87 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 88 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 90 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 91 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 92 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 93 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 94 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 95 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 96 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 97 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 98 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 99 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 100 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 101 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 102 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 103 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 105 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 106 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 107 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 108 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 109 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 110 "data/maps/RustboroCity/scripts.pory"
	end
# 111 "data/maps/RustboroCity/scripts.pory"

# 112 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 113 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 114 "data/maps/RustboroCity/scripts.pory"
	step_end
# 115 "data/maps/RustboroCity/scripts.pory"

# 116 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 117 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 118 "data/maps/RustboroCity/scripts.pory"
	step_end
# 119 "data/maps/RustboroCity/scripts.pory"

# 120 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 121 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 122 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 123 "data/maps/RustboroCity/scripts.pory"
	step_end
# 124 "data/maps/RustboroCity/scripts.pory"

# 125 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 126 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 127 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 128 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 129 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 130 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 131 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 132 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 133 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 134 "data/maps/RustboroCity/scripts.pory"
	step_end
# 135 "data/maps/RustboroCity/scripts.pory"

# 136 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 137 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 138 "data/maps/RustboroCity/scripts.pory"
	step_end
# 139 "data/maps/RustboroCity/scripts.pory"

# 140 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 141 "data/maps/RustboroCity/scripts.pory"
	lock
# 142 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 143 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 144 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 145 "data/maps/RustboroCity/scripts.pory"
	release
# 146 "data/maps/RustboroCity/scripts.pory"
	end
# 147 "data/maps/RustboroCity/scripts.pory"

# 148 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 149 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 150 "data/maps/RustboroCity/scripts.pory"
	release
# 151 "data/maps/RustboroCity/scripts.pory"
	end
# 152 "data/maps/RustboroCity/scripts.pory"

# 153 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 154 "data/maps/RustboroCity/scripts.pory"
	lock
# 155 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 156 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 157 "data/maps/RustboroCity/scripts.pory"
	release
# 158 "data/maps/RustboroCity/scripts.pory"
	end
# 159 "data/maps/RustboroCity/scripts.pory"

# 160 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 161 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 162 "data/maps/RustboroCity/scripts.pory"
	end
# 163 "data/maps/RustboroCity/scripts.pory"

# 164 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 165 "data/maps/RustboroCity/scripts.pory"
	lock
# 166 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 167 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 168 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 169 "data/maps/RustboroCity/scripts.pory"
	release
# 170 "data/maps/RustboroCity/scripts.pory"
	end
# 171 "data/maps/RustboroCity/scripts.pory"

# 172 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 173 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 174 "data/maps/RustboroCity/scripts.pory"
	release
# 175 "data/maps/RustboroCity/scripts.pory"
	end
# 176 "data/maps/RustboroCity/scripts.pory"

# 177 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 178 "data/maps/RustboroCity/scripts.pory"
	lock
# 179 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 180 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 181 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 182 "data/maps/RustboroCity/scripts.pory"
	release
# 183 "data/maps/RustboroCity/scripts.pory"
	end
# 184 "data/maps/RustboroCity/scripts.pory"

# 185 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 186 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 187 "data/maps/RustboroCity/scripts.pory"
	release
# 188 "data/maps/RustboroCity/scripts.pory"
	end
# 189 "data/maps/RustboroCity/scripts.pory"

# 190 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 191 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 192 "data/maps/RustboroCity/scripts.pory"
	end
# 193 "data/maps/RustboroCity/scripts.pory"

# 194 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 195 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 196 "data/maps/RustboroCity/scripts.pory"
	end
# 197 "data/maps/RustboroCity/scripts.pory"

# 198 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 199 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 200 "data/maps/RustboroCity/scripts.pory"
	end
# 201 "data/maps/RustboroCity/scripts.pory"

# 202 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 203 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 204 "data/maps/RustboroCity/scripts.pory"
	end
# 205 "data/maps/RustboroCity/scripts.pory"

# 206 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 207 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 208 "data/maps/RustboroCity/scripts.pory"
	end
# 209 "data/maps/RustboroCity/scripts.pory"

# 210 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 211 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 212 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 213 "data/maps/RustboroCity/scripts.pory"
	end
# 214 "data/maps/RustboroCity/scripts.pory"

# 215 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 216 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 217 "data/maps/RustboroCity/scripts.pory"
	end
# 218 "data/maps/RustboroCity/scripts.pory"

# 219 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 220 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 221 "data/maps/RustboroCity/scripts.pory"
	end
# 222 "data/maps/RustboroCity/scripts.pory"

# 223 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 224 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 225 "data/maps/RustboroCity/scripts.pory"
	end
# 226 "data/maps/RustboroCity/scripts.pory"

# 227 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 228 "data/maps/RustboroCity/scripts.pory"
	lock
# 229 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 230 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 231 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 232 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 233 "data/maps/RustboroCity/scripts.pory"
	release
# 234 "data/maps/RustboroCity/scripts.pory"
	end
# 235 "data/maps/RustboroCity/scripts.pory"

# 236 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 237 "data/maps/RustboroCity/scripts.pory"
	lock
# 238 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 239 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 240 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 241 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 242 "data/maps/RustboroCity/scripts.pory"
	release
# 243 "data/maps/RustboroCity/scripts.pory"
	end
# 244 "data/maps/RustboroCity/scripts.pory"

# 245 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 246 "data/maps/RustboroCity/scripts.pory"
	lock
# 247 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 248 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 249 "data/maps/RustboroCity/scripts.pory"
	release
# 250 "data/maps/RustboroCity/scripts.pory"
	end
# 251 "data/maps/RustboroCity/scripts.pory"

# 252 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 253 "data/maps/RustboroCity/scripts.pory"
	lockall
# 254 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 255 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 256 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 257 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 258 "data/maps/RustboroCity/scripts.pory"
	end
# 259 "data/maps/RustboroCity/scripts.pory"

# 260 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 261 "data/maps/RustboroCity/scripts.pory"
	lockall
# 262 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 263 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 264 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 265 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 266 "data/maps/RustboroCity/scripts.pory"
	end
# 267 "data/maps/RustboroCity/scripts.pory"

# 268 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 269 "data/maps/RustboroCity/scripts.pory"
	lockall
# 270 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 271 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 272 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 273 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 274 "data/maps/RustboroCity/scripts.pory"
	end
# 275 "data/maps/RustboroCity/scripts.pory"

# 276 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 277 "data/maps/RustboroCity/scripts.pory"
	lockall
# 278 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 279 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 280 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 281 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 282 "data/maps/RustboroCity/scripts.pory"
	end
# 283 "data/maps/RustboroCity/scripts.pory"

# 284 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 285 "data/maps/RustboroCity/scripts.pory"
	lockall
# 286 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 287 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 288 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 289 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 290 "data/maps/RustboroCity/scripts.pory"
	end
# 291 "data/maps/RustboroCity/scripts.pory"

# 292 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 293 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 294 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 295 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 296 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 297 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 298 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 299 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 300 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 301 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 302 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 303 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 304 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 305 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 306 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 307 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 308 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 309 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 310 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 311 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 312 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 313 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 314 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 315 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 316 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 317 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 318 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 319 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 320 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 321 "data/maps/RustboroCity/scripts.pory"
	end
# 322 "data/maps/RustboroCity/scripts.pory"

# 323 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 324 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 325 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 326 "data/maps/RustboroCity/scripts.pory"
	return
# 327 "data/maps/RustboroCity/scripts.pory"

# 328 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 329 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 330 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 331 "data/maps/RustboroCity/scripts.pory"
	return
# 332 "data/maps/RustboroCity/scripts.pory"

# 333 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 334 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 335 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 336 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 337 "data/maps/RustboroCity/scripts.pory"
	return
# 338 "data/maps/RustboroCity/scripts.pory"

# 339 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 340 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 341 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 342 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 343 "data/maps/RustboroCity/scripts.pory"
	return
# 344 "data/maps/RustboroCity/scripts.pory"

# 345 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 346 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 347 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 348 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 349 "data/maps/RustboroCity/scripts.pory"
	return
# 350 "data/maps/RustboroCity/scripts.pory"

# 351 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 352 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 353 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 354 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 355 "data/maps/RustboroCity/scripts.pory"
	return
# 356 "data/maps/RustboroCity/scripts.pory"

# 357 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 358 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 359 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 360 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 361 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 362 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 363 "data/maps/RustboroCity/scripts.pory"
	return
# 364 "data/maps/RustboroCity/scripts.pory"

# 365 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 366 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 367 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 368 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 369 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 370 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 371 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 372 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 374 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 375 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
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
	step_end
# 385 "data/maps/RustboroCity/scripts.pory"

# 386 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 387 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 388 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 389 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 390 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 403 "data/maps/RustboroCity/scripts.pory"
	step_end
# 404 "data/maps/RustboroCity/scripts.pory"

# 405 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 406 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 407 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 408 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 409 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 410 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 411 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 413 "data/maps/RustboroCity/scripts.pory"
	step_end
# 414 "data/maps/RustboroCity/scripts.pory"

# 415 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 420 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 421 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 422 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 423 "data/maps/RustboroCity/scripts.pory"
	step_end
# 424 "data/maps/RustboroCity/scripts.pory"

# 425 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 426 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
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
RustboroCity_Movement_EmployeeApproachLeft:
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 437 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 438 "data/maps/RustboroCity/scripts.pory"
	step_end
# 439 "data/maps/RustboroCity/scripts.pory"

# 440 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 441 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 444 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 445 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 446 "data/maps/RustboroCity/scripts.pory"
	step_end
# 447 "data/maps/RustboroCity/scripts.pory"

# 448 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 449 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 450 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 451 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 452 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 453 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 454 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 455 "data/maps/RustboroCity/scripts.pory"
	step_end
# 456 "data/maps/RustboroCity/scripts.pory"

# 457 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 458 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 459 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 460 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 461 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 462 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 463 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 464 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 465 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 466 "data/maps/RustboroCity/scripts.pory"
	step_end
# 467 "data/maps/RustboroCity/scripts.pory"

# 468 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 469 "data/maps/RustboroCity/scripts.pory"
	lock
# 470 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 471 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 472 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 473 "data/maps/RustboroCity/scripts.pory"
	release
# 474 "data/maps/RustboroCity/scripts.pory"
	end
# 475 "data/maps/RustboroCity/scripts.pory"

# 476 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 477 "data/maps/RustboroCity/scripts.pory"
	waitse
# 478 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 479 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 480 "data/maps/RustboroCity/scripts.pory"
	end
# 481 "data/maps/RustboroCity/scripts.pory"

# 482 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 483 "data/maps/RustboroCity/scripts.pory"
	lockall
# 484 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 485 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 486 "data/maps/RustboroCity/scripts.pory"
	end
# 487 "data/maps/RustboroCity/scripts.pory"

# 488 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 489 "data/maps/RustboroCity/scripts.pory"
	lockall
# 490 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 491 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 492 "data/maps/RustboroCity/scripts.pory"
	end
# 493 "data/maps/RustboroCity/scripts.pory"

# 494 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 495 "data/maps/RustboroCity/scripts.pory"
	lockall
# 496 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 497 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 498 "data/maps/RustboroCity/scripts.pory"
	end
# 499 "data/maps/RustboroCity/scripts.pory"

# 500 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 501 "data/maps/RustboroCity/scripts.pory"
	lockall
# 502 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 503 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 504 "data/maps/RustboroCity/scripts.pory"
	end
# 505 "data/maps/RustboroCity/scripts.pory"

# 506 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 507 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 508 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 509 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 510 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 511 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 512 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 513 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 514 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 515 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 516 "data/maps/RustboroCity/scripts.pory"
	end
# 517 "data/maps/RustboroCity/scripts.pory"

# 518 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 519 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 520 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 521 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 522 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 523 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 524 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 525 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 526 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 527 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 528 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 529 "data/maps/RustboroCity/scripts.pory"
	return
# 530 "data/maps/RustboroCity/scripts.pory"

# 531 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 532 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 533 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 534 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 535 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 536 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 538 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 540 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/RustboroCity/scripts.pory"
	return
# 542 "data/maps/RustboroCity/scripts.pory"

# 543 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 544 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 545 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 547 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 548 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 550 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 552 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 553 "data/maps/RustboroCity/scripts.pory"
	return
# 554 "data/maps/RustboroCity/scripts.pory"

# 555 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 556 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 557 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 558 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 559 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 560 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 561 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 562 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 563 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 564 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 565 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 566 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 567 "data/maps/RustboroCity/scripts.pory"
	return
# 568 "data/maps/RustboroCity/scripts.pory"

# 569 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 570 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 571 "data/maps/RustboroCity/scripts.pory"
	step_end
# 572 "data/maps/RustboroCity/scripts.pory"

# 573 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 574 "data/maps/RustboroCity/scripts.pory"
	lockall
# 575 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 576 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 577 "data/maps/RustboroCity/scripts.pory"
	end
# 578 "data/maps/RustboroCity/scripts.pory"

# 579 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 580 "data/maps/RustboroCity/scripts.pory"
	lockall
# 581 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 582 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 583 "data/maps/RustboroCity/scripts.pory"
	end
# 584 "data/maps/RustboroCity/scripts.pory"

# 585 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 586 "data/maps/RustboroCity/scripts.pory"
	lockall
# 587 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 588 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 589 "data/maps/RustboroCity/scripts.pory"
	end
# 590 "data/maps/RustboroCity/scripts.pory"

# 591 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 592 "data/maps/RustboroCity/scripts.pory"
	lockall
# 593 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 594 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 595 "data/maps/RustboroCity/scripts.pory"
	end
# 596 "data/maps/RustboroCity/scripts.pory"

# 597 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 598 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 599 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 600 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 601 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 602 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 603 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 604 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 605 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 606 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 607 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 608 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 609 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 610 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 611 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 612 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 613 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 614 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 615 "data/maps/RustboroCity/scripts.pory"
	end
# 616 "data/maps/RustboroCity/scripts.pory"

# 617 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 618 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 619 "data/maps/RustboroCity/scripts.pory"
	return
# 620 "data/maps/RustboroCity/scripts.pory"

# 621 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 622 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 623 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 624 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 625 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 626 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 627 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 628 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 630 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/RustboroCity/scripts.pory"
	return
# 632 "data/maps/RustboroCity/scripts.pory"

# 633 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 634 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 635 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 636 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 637 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 638 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 640 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 642 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 643 "data/maps/RustboroCity/scripts.pory"
	return
# 644 "data/maps/RustboroCity/scripts.pory"

# 645 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 646 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 647 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 648 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 649 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 650 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 652 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 653 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 654 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/RustboroCity/scripts.pory"
	return
# 656 "data/maps/RustboroCity/scripts.pory"

# 657 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 658 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 659 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 660 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 661 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 662 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 663 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 664 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 665 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 666 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 668 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 669 "data/maps/RustboroCity/scripts.pory"
	return
# 670 "data/maps/RustboroCity/scripts.pory"

# 671 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 672 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 673 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 674 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 675 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 676 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 677 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 678 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 679 "data/maps/RustboroCity/scripts.pory"
	return
# 680 "data/maps/RustboroCity/scripts.pory"

# 681 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 682 "data/maps/RustboroCity/scripts.pory"
	lockall
# 683 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 684 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 685 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 686 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 687 "data/maps/RustboroCity/scripts.pory"

# 688 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 689 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 690 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 691 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 692 "data/maps/RustboroCity/scripts.pory"
	return
# 693 "data/maps/RustboroCity/scripts.pory"

# 694 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 695 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 696 "data/maps/RustboroCity/scripts.pory"
	return
# 697 "data/maps/RustboroCity/scripts.pory"

# 698 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 699 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 700 "data/maps/RustboroCity/scripts.pory"
	return
# 701 "data/maps/RustboroCity/scripts.pory"

# 702 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
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
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
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
RustboroCity_EventScript_RivalTrigger1::
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
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
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
RustboroCity_EventScript_RivalTrigger2::
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
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
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
RustboroCity_EventScript_RivalTrigger3::
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
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
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
RustboroCity_EventScript_RivalTrigger4::
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
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
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
RustboroCity_EventScript_RivalTrigger5::
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
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
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
RustboroCity_EventScript_RivalTrigger6::
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
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
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
RustboroCity_EventScript_RivalTrigger7::
# 815 "data/maps/RustboroCity/scripts.pory"
	lockall
# 816 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 817 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 818 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 819 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 820 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 821 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 822 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 823 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 824 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 825 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 826 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 827 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 828 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 829 "data/maps/RustboroCity/scripts.pory"

# 830 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 831 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 832 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 833 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 834 "data/maps/RustboroCity/scripts.pory"
	end
# 835 "data/maps/RustboroCity/scripts.pory"

# 836 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 837 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 838 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 839 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 840 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 841 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 842 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 843 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 844 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 845 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 846 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 847 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 848 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 849 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 850 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 851 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 852 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 853 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 854 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleMay2
# 855 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 856 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 857 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 858 "data/maps/RustboroCity/scripts.pory"
	end
# 859 "data/maps/RustboroCity/scripts.pory"

# 860 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 861 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 862 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 863 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 864 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleMay2
# 865 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 866 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 867 "data/maps/RustboroCity/scripts.pory"
	end
# 868 "data/maps/RustboroCity/scripts.pory"

# 869 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 870 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 871 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 872 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 873 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 874 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 875 "data/maps/RustboroCity/scripts.pory"
	end
# 876 "data/maps/RustboroCity/scripts.pory"

# 877 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay2::
# 878 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TooBad, MSGBOX_DEFAULT
# 879 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 880 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 881 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 882 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 883 "data/maps/RustboroCity/scripts.pory"
	end
# 884 "data/maps/RustboroCity/scripts.pory"

# 885 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 886 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 887 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 888 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 889 "data/maps/RustboroCity/scripts.pory"
	end
# 890 "data/maps/RustboroCity/scripts.pory"

# 891 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 892 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 893 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 894 "data/maps/RustboroCity/scripts.pory"
	return
# 895 "data/maps/RustboroCity/scripts.pory"

# 896 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 897 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 898 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 899 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
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
	goto RustboroCity_EventScript_MayBrineyHint
# 906 "data/maps/RustboroCity/scripts.pory"
	end
# 907 "data/maps/RustboroCity/scripts.pory"

# 908 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 909 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 910 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 911 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 912 "data/maps/RustboroCity/scripts.pory"
	end
# 913 "data/maps/RustboroCity/scripts.pory"

# 914 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 915 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 916 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 917 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 918 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 919 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 920 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 921 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 922 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 923 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 924 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 925 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 926 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 927 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 928 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 929 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 930 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 931 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleBrendan2
# 932 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 933 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 934 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 935 "data/maps/RustboroCity/scripts.pory"
	end
# 936 "data/maps/RustboroCity/scripts.pory"

# 937 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 938 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 939 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 940 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleBrendan2
# 941 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 942 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 943 "data/maps/RustboroCity/scripts.pory"
	end
# 944 "data/maps/RustboroCity/scripts.pory"

# 945 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 946 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 947 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 948 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 949 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 950 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 951 "data/maps/RustboroCity/scripts.pory"
	end
# 952 "data/maps/RustboroCity/scripts.pory"

# 953 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan2::
# 954 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TooBad, MSGBOX_DEFAULT
# 955 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 956 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 957 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 958 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 959 "data/maps/RustboroCity/scripts.pory"
	end
# 960 "data/maps/RustboroCity/scripts.pory"

# 961 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 962 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 963 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 964 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 965 "data/maps/RustboroCity/scripts.pory"
	end
# 966 "data/maps/RustboroCity/scripts.pory"

# 967 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 968 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 969 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 970 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 971 "data/maps/RustboroCity/scripts.pory"
	end
# 972 "data/maps/RustboroCity/scripts.pory"

# 973 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 974 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 975 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 976 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 977 "data/maps/RustboroCity/scripts.pory"
	end
# 978 "data/maps/RustboroCity/scripts.pory"

# 979 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 980 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 981 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 982 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 983 "data/maps/RustboroCity/scripts.pory"
	end
# 984 "data/maps/RustboroCity/scripts.pory"

# 985 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 986 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 987 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 988 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 989 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 990 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 991 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 992 "data/maps/RustboroCity/scripts.pory"
	step_end
# 993 "data/maps/RustboroCity/scripts.pory"

# 994 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 995 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 996 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 997 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 998 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 999 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1000 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1001 "data/maps/RustboroCity/scripts.pory"

# 1002 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 1003 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1004 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1005 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1006 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1007 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1008 "data/maps/RustboroCity/scripts.pory"

# 1009 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1010 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1011 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1012 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1013 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1014 "data/maps/RustboroCity/scripts.pory"

# 1015 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1016 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1017 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1018 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1019 "data/maps/RustboroCity/scripts.pory"

# 1020 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1021 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1022 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1023 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1024 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1025 "data/maps/RustboroCity/scripts.pory"

# 1026 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1027 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1028 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1029 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1030 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1031 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1032 "data/maps/RustboroCity/scripts.pory"

# 1033 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1034 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1035 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1036 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1037 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1038 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1039 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1040 "data/maps/RustboroCity/scripts.pory"

# 1041 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1042 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1043 "data/maps/RustboroCity/scripts.pory"
	end
# 1044 "data/maps/RustboroCity/scripts.pory"

# 1045 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1046 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 1047 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1049 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1050 "data/maps/RustboroCity/scripts.pory"

# 1051 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1053 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1055 "data/maps/RustboroCity/scripts.pory"

# 1056 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1057 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1058 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1061 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1062 "data/maps/RustboroCity/scripts.pory"

# 1063 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1067 "data/maps/RustboroCity/scripts.pory"

# 1068 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1069 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1070 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1071 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1072 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1073 "data/maps/RustboroCity/scripts.pory"

# 1074 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1075 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1077 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1078 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 1080 "data/maps/RustboroCity/scripts.pory"

# 1081 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1082 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1083 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1084 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1085 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1086 "data/maps/RustboroCity/scripts.pory"

# 1087 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1088 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1089 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1090 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1091 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1092 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1093 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 1094 "data/maps/RustboroCity/scripts.pory"

# 1095 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1096 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 1097 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1098 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 1099 "data/maps/RustboroCity/scripts.pory"

# 1100 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1101 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1102 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1103 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1104 "data/maps/RustboroCity/scripts.pory"

# 1105 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1106 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 1107 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1108 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1109 "data/maps/RustboroCity/scripts.pory"

# 1110 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1111 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 1112 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1113 "data/maps/RustboroCity/scripts.pory"

# 1114 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1115 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1116 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1117 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1118 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1119 "data/maps/RustboroCity/scripts.pory"

# 1120 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1123 "data/maps/RustboroCity/scripts.pory"

# 1124 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1127 "data/maps/RustboroCity/scripts.pory"

# 1128 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1129 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1132 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1133 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1135 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1136 "data/maps/RustboroCity/scripts.pory"

# 1137 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1138 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1139 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1140 "data/maps/RustboroCity/scripts.pory"

# 1141 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 1144 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1145 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1147 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1148 "data/maps/RustboroCity/scripts.pory"
	.string "another GREAT BALL!$"
# 1149 "data/maps/RustboroCity/scripts.pory"

# 1150 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1151 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1152 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1153 "data/maps/RustboroCity/scripts.pory"

# 1154 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1155 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1156 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1157 "data/maps/RustboroCity/scripts.pory"

# 1158 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1162 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1163 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1164 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1165 "data/maps/RustboroCity/scripts.pory"

# 1166 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1168 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1169 "data/maps/RustboroCity/scripts.pory"

# 1170 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1172 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1174 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1175 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1178 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1179 "data/maps/RustboroCity/scripts.pory"

# 1180 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1181 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1182 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1185 "data/maps/RustboroCity/scripts.pory"

# 1186 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1189 "data/maps/RustboroCity/scripts.pory"

# 1190 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1193 "data/maps/RustboroCity/scripts.pory"

# 1194 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TooBad:
# 1195 "data/maps/RustboroCity/scripts.pory"
	.string "Too bad!$"
# 1196 "data/maps/RustboroCity/scripts.pory"

# 1197 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1198 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1199 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1200 "data/maps/RustboroCity/scripts.pory"

# 1201 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1202 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1207 "data/maps/RustboroCity/scripts.pory"

# 1208 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1209 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1210 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1211 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1214 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1215 "data/maps/RustboroCity/scripts.pory"

# 1216 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1217 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1218 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1219 "data/maps/RustboroCity/scripts.pory"

# 1220 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1221 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1222 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1223 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1226 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1227 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1230 "data/maps/RustboroCity/scripts.pory"

# 1231 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1232 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1233 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1234 "data/maps/RustboroCity/scripts.pory"

# 1235 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1237 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1238 "data/maps/RustboroCity/scripts.pory"

# 1239 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1240 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1241 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1242 "data/maps/RustboroCity/scripts.pory"

# 1243 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1244 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1245 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1246 "data/maps/RustboroCity/scripts.pory"

# 1247 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1250 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1251 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1253 "data/maps/RustboroCity/scripts.pory"

# 1254 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1255 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1256 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1259 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1260 "data/maps/RustboroCity/scripts.pory"

# 1261 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1262 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1263 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1265 "data/maps/RustboroCity/scripts.pory"

# 1266 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1267 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 1269 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1270 "data/maps/RustboroCity/scripts.pory"

# 1271 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1274 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1275 "data/maps/RustboroCity/scripts.pory"

# 1276 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1277 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1280 "data/maps/RustboroCity/scripts.pory"

# 1281 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1285 "data/maps/RustboroCity/scripts.pory"

# 1286 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1287 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1288 "data/maps/RustboroCity/scripts.pory"

# 1289 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1290 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1291 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1292 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1293 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1294 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1295 "data/maps/RustboroCity/scripts.pory"

# 1296 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1297 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1298 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1299 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1300 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1301 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1303 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1304 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1305 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1306 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1307 "data/maps/RustboroCity/scripts.pory"

# 1308 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1309 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1310 "data/maps/RustboroCity/scripts.pory"

# 1311 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1312 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1313 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1314 "data/maps/RustboroCity/scripts.pory"

# 1315 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1316 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1317 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1318 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1319 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1320 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1321 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1322 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1323 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

RustboroCity_Trigger_BlockGymEntrance::
# 1327 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1328 "data/maps/RustboroCity/scripts.pory"
	msgbox GoBeatRoark
# 1329 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 1330 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1331 "data/maps/RustboroCity/scripts.pory"
	releaseall
	return


# 1340 "data/maps/RustboroCity/scripts.pory"
StopPlayer:
# 1341 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

GoBeatRoark::
# 1334 "data/maps/RustboroCity/scripts.pory"
	.string "You should go see if there are any\n"
	.string "other strong trainers to fight, perhaps\p"
	.string "very far east on Route 116!$"
