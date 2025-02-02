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
	delay 20
# 77 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 78 "data/maps/RustboroCity/scripts.pory"

# 79 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 80 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 81 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 82 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 83 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 84 "data/maps/RustboroCity/scripts.pory"

# 85 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 86 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 87 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 88 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 89 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 91 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 92 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 93 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 94 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 95 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 96 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 97 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 98 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 99 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 100 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 101 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 102 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 103 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 104 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 106 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 107 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 108 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 109 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 110 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 111 "data/maps/RustboroCity/scripts.pory"
	end
# 112 "data/maps/RustboroCity/scripts.pory"

# 113 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 114 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 115 "data/maps/RustboroCity/scripts.pory"
	step_end
# 116 "data/maps/RustboroCity/scripts.pory"

# 117 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 118 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 119 "data/maps/RustboroCity/scripts.pory"
	step_end
# 120 "data/maps/RustboroCity/scripts.pory"

# 121 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 122 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 123 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 124 "data/maps/RustboroCity/scripts.pory"
	step_end
# 125 "data/maps/RustboroCity/scripts.pory"

# 126 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 127 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 128 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 129 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 130 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 131 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 132 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 133 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 134 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 135 "data/maps/RustboroCity/scripts.pory"
	step_end
# 136 "data/maps/RustboroCity/scripts.pory"

# 137 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 138 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 139 "data/maps/RustboroCity/scripts.pory"
	step_end
# 140 "data/maps/RustboroCity/scripts.pory"

# 141 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 142 "data/maps/RustboroCity/scripts.pory"
	lock
# 143 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 144 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 145 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 146 "data/maps/RustboroCity/scripts.pory"
	release
# 147 "data/maps/RustboroCity/scripts.pory"
	end
# 148 "data/maps/RustboroCity/scripts.pory"

# 149 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 150 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 151 "data/maps/RustboroCity/scripts.pory"
	release
# 152 "data/maps/RustboroCity/scripts.pory"
	end
# 153 "data/maps/RustboroCity/scripts.pory"

# 154 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 155 "data/maps/RustboroCity/scripts.pory"
	lock
# 156 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 157 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 158 "data/maps/RustboroCity/scripts.pory"
	release
# 159 "data/maps/RustboroCity/scripts.pory"
	end
# 160 "data/maps/RustboroCity/scripts.pory"

# 161 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 162 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 163 "data/maps/RustboroCity/scripts.pory"
	end
# 164 "data/maps/RustboroCity/scripts.pory"

# 165 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 166 "data/maps/RustboroCity/scripts.pory"
	lock
# 167 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 168 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 169 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 170 "data/maps/RustboroCity/scripts.pory"
	release
# 171 "data/maps/RustboroCity/scripts.pory"
	end
# 172 "data/maps/RustboroCity/scripts.pory"

# 173 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 174 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 175 "data/maps/RustboroCity/scripts.pory"
	release
# 176 "data/maps/RustboroCity/scripts.pory"
	end
# 177 "data/maps/RustboroCity/scripts.pory"

# 178 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 179 "data/maps/RustboroCity/scripts.pory"
	lock
# 180 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 181 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 182 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 183 "data/maps/RustboroCity/scripts.pory"
	release
# 184 "data/maps/RustboroCity/scripts.pory"
	end
# 185 "data/maps/RustboroCity/scripts.pory"

# 186 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 187 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 188 "data/maps/RustboroCity/scripts.pory"
	release
# 189 "data/maps/RustboroCity/scripts.pory"
	end
# 190 "data/maps/RustboroCity/scripts.pory"

# 191 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 192 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 193 "data/maps/RustboroCity/scripts.pory"
	end
# 194 "data/maps/RustboroCity/scripts.pory"

# 195 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 196 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 197 "data/maps/RustboroCity/scripts.pory"
	end
# 198 "data/maps/RustboroCity/scripts.pory"

# 199 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 200 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 201 "data/maps/RustboroCity/scripts.pory"
	end
# 202 "data/maps/RustboroCity/scripts.pory"

# 203 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 204 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 205 "data/maps/RustboroCity/scripts.pory"
	end
# 206 "data/maps/RustboroCity/scripts.pory"

# 207 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 208 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 209 "data/maps/RustboroCity/scripts.pory"
	end
# 210 "data/maps/RustboroCity/scripts.pory"

# 211 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 212 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 213 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 214 "data/maps/RustboroCity/scripts.pory"
	end
# 215 "data/maps/RustboroCity/scripts.pory"

# 216 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 217 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 218 "data/maps/RustboroCity/scripts.pory"
	end
# 219 "data/maps/RustboroCity/scripts.pory"

# 220 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 221 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 222 "data/maps/RustboroCity/scripts.pory"
	end
# 223 "data/maps/RustboroCity/scripts.pory"

# 224 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 225 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 226 "data/maps/RustboroCity/scripts.pory"
	end
# 227 "data/maps/RustboroCity/scripts.pory"

# 228 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 229 "data/maps/RustboroCity/scripts.pory"
	lock
# 230 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 231 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 232 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 233 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 234 "data/maps/RustboroCity/scripts.pory"
	release
# 235 "data/maps/RustboroCity/scripts.pory"
	end
# 236 "data/maps/RustboroCity/scripts.pory"

# 237 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 238 "data/maps/RustboroCity/scripts.pory"
	lock
# 239 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 240 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 241 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 242 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 243 "data/maps/RustboroCity/scripts.pory"
	release
# 244 "data/maps/RustboroCity/scripts.pory"
	end
# 245 "data/maps/RustboroCity/scripts.pory"

# 246 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 247 "data/maps/RustboroCity/scripts.pory"
	lock
# 248 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 249 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 250 "data/maps/RustboroCity/scripts.pory"
	release
# 251 "data/maps/RustboroCity/scripts.pory"
	end
# 252 "data/maps/RustboroCity/scripts.pory"

# 253 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 254 "data/maps/RustboroCity/scripts.pory"
	lockall
# 255 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 256 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 257 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 258 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 259 "data/maps/RustboroCity/scripts.pory"
	end
# 260 "data/maps/RustboroCity/scripts.pory"

# 261 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 262 "data/maps/RustboroCity/scripts.pory"
	lockall
# 263 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 264 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 265 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 266 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 267 "data/maps/RustboroCity/scripts.pory"
	end
# 268 "data/maps/RustboroCity/scripts.pory"

# 269 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 270 "data/maps/RustboroCity/scripts.pory"
	lockall
# 271 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 272 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 273 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 274 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 275 "data/maps/RustboroCity/scripts.pory"
	end
# 276 "data/maps/RustboroCity/scripts.pory"

# 277 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 278 "data/maps/RustboroCity/scripts.pory"
	lockall
# 279 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 280 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 281 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 282 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 283 "data/maps/RustboroCity/scripts.pory"
	end
# 284 "data/maps/RustboroCity/scripts.pory"

# 285 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 286 "data/maps/RustboroCity/scripts.pory"
	lockall
# 287 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 288 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 289 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 290 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 291 "data/maps/RustboroCity/scripts.pory"
	end
# 292 "data/maps/RustboroCity/scripts.pory"

# 293 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 294 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 295 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 296 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 297 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 298 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 299 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 300 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 301 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 302 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 303 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 304 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 305 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 306 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 307 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 308 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 309 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 310 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 311 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 312 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 313 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 314 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 315 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 316 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 317 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 318 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 319 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 320 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 321 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 322 "data/maps/RustboroCity/scripts.pory"
	end
# 323 "data/maps/RustboroCity/scripts.pory"

# 324 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 325 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 326 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 327 "data/maps/RustboroCity/scripts.pory"
	return
# 328 "data/maps/RustboroCity/scripts.pory"

# 329 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 330 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 331 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 332 "data/maps/RustboroCity/scripts.pory"
	return
# 333 "data/maps/RustboroCity/scripts.pory"

# 334 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 335 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 336 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 337 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 338 "data/maps/RustboroCity/scripts.pory"
	return
# 339 "data/maps/RustboroCity/scripts.pory"

# 340 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 341 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 342 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 343 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 344 "data/maps/RustboroCity/scripts.pory"
	return
# 345 "data/maps/RustboroCity/scripts.pory"

# 346 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 347 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 348 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 349 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 350 "data/maps/RustboroCity/scripts.pory"
	return
# 351 "data/maps/RustboroCity/scripts.pory"

# 352 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 353 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 354 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 355 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 356 "data/maps/RustboroCity/scripts.pory"
	return
# 357 "data/maps/RustboroCity/scripts.pory"

# 358 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 359 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 360 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 361 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 362 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 363 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 364 "data/maps/RustboroCity/scripts.pory"
	return
# 365 "data/maps/RustboroCity/scripts.pory"

# 366 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 367 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 368 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 369 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 370 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 371 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 372 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
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
	walk_fast_up
# 385 "data/maps/RustboroCity/scripts.pory"
	step_end
# 386 "data/maps/RustboroCity/scripts.pory"

# 387 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 388 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 389 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 390 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
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
	walk_fast_up
# 404 "data/maps/RustboroCity/scripts.pory"
	step_end
# 405 "data/maps/RustboroCity/scripts.pory"

# 406 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
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
	walk_right
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 414 "data/maps/RustboroCity/scripts.pory"
	step_end
# 415 "data/maps/RustboroCity/scripts.pory"

# 416 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
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
	walk_up
# 424 "data/maps/RustboroCity/scripts.pory"
	step_end
# 425 "data/maps/RustboroCity/scripts.pory"

# 426 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 427 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 428 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 429 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 430 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 431 "data/maps/RustboroCity/scripts.pory"
	step_end
# 432 "data/maps/RustboroCity/scripts.pory"

# 433 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 434 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
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
RustboroCity_Movement_EmployeeApproachRight:
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 444 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 445 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 446 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 447 "data/maps/RustboroCity/scripts.pory"
	step_end
# 448 "data/maps/RustboroCity/scripts.pory"

# 449 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 450 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 451 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 452 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 453 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 454 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 455 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 456 "data/maps/RustboroCity/scripts.pory"
	step_end
# 457 "data/maps/RustboroCity/scripts.pory"

# 458 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 459 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 460 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 461 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 462 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 463 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 464 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 465 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 466 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 467 "data/maps/RustboroCity/scripts.pory"
	step_end
# 468 "data/maps/RustboroCity/scripts.pory"

# 469 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 470 "data/maps/RustboroCity/scripts.pory"
	lock
# 471 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 472 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 473 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 474 "data/maps/RustboroCity/scripts.pory"
	release
# 475 "data/maps/RustboroCity/scripts.pory"
	end
# 476 "data/maps/RustboroCity/scripts.pory"

# 477 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 478 "data/maps/RustboroCity/scripts.pory"
	waitse
# 479 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 480 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 481 "data/maps/RustboroCity/scripts.pory"
	end
# 482 "data/maps/RustboroCity/scripts.pory"

# 483 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 484 "data/maps/RustboroCity/scripts.pory"
	lockall
# 485 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 486 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 487 "data/maps/RustboroCity/scripts.pory"
	end
# 488 "data/maps/RustboroCity/scripts.pory"

# 489 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 490 "data/maps/RustboroCity/scripts.pory"
	lockall
# 491 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 492 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 493 "data/maps/RustboroCity/scripts.pory"
	end
# 494 "data/maps/RustboroCity/scripts.pory"

# 495 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 496 "data/maps/RustboroCity/scripts.pory"
	lockall
# 497 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 498 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 499 "data/maps/RustboroCity/scripts.pory"
	end
# 500 "data/maps/RustboroCity/scripts.pory"

# 501 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 502 "data/maps/RustboroCity/scripts.pory"
	lockall
# 503 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 504 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 505 "data/maps/RustboroCity/scripts.pory"
	end
# 506 "data/maps/RustboroCity/scripts.pory"

# 507 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 508 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 509 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 510 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 511 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 512 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 513 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 514 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 515 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 516 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 517 "data/maps/RustboroCity/scripts.pory"
	end
# 518 "data/maps/RustboroCity/scripts.pory"

# 519 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 520 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 521 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 522 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 523 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 524 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 525 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 526 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 527 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 528 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 529 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/RustboroCity/scripts.pory"
	return
# 531 "data/maps/RustboroCity/scripts.pory"

# 532 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 533 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 534 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 536 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 537 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 538 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 539 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 541 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/RustboroCity/scripts.pory"
	return
# 543 "data/maps/RustboroCity/scripts.pory"

# 544 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 545 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 546 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 548 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 549 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 551 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 552 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 553 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/RustboroCity/scripts.pory"
	return
# 555 "data/maps/RustboroCity/scripts.pory"

# 556 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 557 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 558 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 559 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 560 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 561 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 562 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 563 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 564 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 565 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 566 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 567 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 568 "data/maps/RustboroCity/scripts.pory"
	return
# 569 "data/maps/RustboroCity/scripts.pory"

# 570 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 571 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 572 "data/maps/RustboroCity/scripts.pory"
	step_end
# 573 "data/maps/RustboroCity/scripts.pory"

# 574 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 575 "data/maps/RustboroCity/scripts.pory"
	lockall
# 576 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 577 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 578 "data/maps/RustboroCity/scripts.pory"
	end
# 579 "data/maps/RustboroCity/scripts.pory"

# 580 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 581 "data/maps/RustboroCity/scripts.pory"
	lockall
# 582 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 583 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 584 "data/maps/RustboroCity/scripts.pory"
	end
# 585 "data/maps/RustboroCity/scripts.pory"

# 586 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 587 "data/maps/RustboroCity/scripts.pory"
	lockall
# 588 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 589 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 590 "data/maps/RustboroCity/scripts.pory"
	end
# 591 "data/maps/RustboroCity/scripts.pory"

# 592 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 593 "data/maps/RustboroCity/scripts.pory"
	lockall
# 594 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 595 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 596 "data/maps/RustboroCity/scripts.pory"
	end
# 597 "data/maps/RustboroCity/scripts.pory"

# 598 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 599 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 600 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 601 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 602 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 603 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 604 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 605 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 606 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 607 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 608 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 609 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 610 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 611 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 612 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 613 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 614 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 615 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 616 "data/maps/RustboroCity/scripts.pory"
	end
# 617 "data/maps/RustboroCity/scripts.pory"

# 618 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 619 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 620 "data/maps/RustboroCity/scripts.pory"
	return
# 621 "data/maps/RustboroCity/scripts.pory"

# 622 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 623 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 624 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 625 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 626 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 627 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 628 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 629 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 630 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 631 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/RustboroCity/scripts.pory"
	return
# 633 "data/maps/RustboroCity/scripts.pory"

# 634 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 635 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 636 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 637 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 638 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 639 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 640 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 641 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 642 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 643 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/RustboroCity/scripts.pory"
	return
# 645 "data/maps/RustboroCity/scripts.pory"

# 646 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 647 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 648 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 650 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 651 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 653 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 654 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 655 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 656 "data/maps/RustboroCity/scripts.pory"
	return
# 657 "data/maps/RustboroCity/scripts.pory"

# 658 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 659 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 660 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 661 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 662 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 663 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 664 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 665 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 666 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 667 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 668 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 669 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 670 "data/maps/RustboroCity/scripts.pory"
	return
# 671 "data/maps/RustboroCity/scripts.pory"

# 672 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 673 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 674 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 675 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 676 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 677 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 678 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 679 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 680 "data/maps/RustboroCity/scripts.pory"
	return
# 681 "data/maps/RustboroCity/scripts.pory"

# 682 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 683 "data/maps/RustboroCity/scripts.pory"
	lockall
# 684 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 685 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 686 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 687 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 688 "data/maps/RustboroCity/scripts.pory"

# 689 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 690 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 691 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 692 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 693 "data/maps/RustboroCity/scripts.pory"
	return
# 694 "data/maps/RustboroCity/scripts.pory"

# 695 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 696 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 697 "data/maps/RustboroCity/scripts.pory"
	return
# 698 "data/maps/RustboroCity/scripts.pory"

# 699 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 700 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 701 "data/maps/RustboroCity/scripts.pory"
	return
# 702 "data/maps/RustboroCity/scripts.pory"

# 703 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 704 "data/maps/RustboroCity/scripts.pory"
	lockall
# 705 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 706 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 707 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 708 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 709 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 710 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 711 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 712 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 713 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 714 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 715 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 716 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 717 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 718 "data/maps/RustboroCity/scripts.pory"

# 719 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 720 "data/maps/RustboroCity/scripts.pory"
	lockall
# 721 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 722 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 723 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 724 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 725 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 726 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 727 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 728 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 729 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 730 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 732 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 733 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 734 "data/maps/RustboroCity/scripts.pory"

# 735 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 736 "data/maps/RustboroCity/scripts.pory"
	lockall
# 737 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 738 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 739 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 740 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 741 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 742 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 743 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 744 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 745 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 746 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 748 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 749 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 750 "data/maps/RustboroCity/scripts.pory"

# 751 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 752 "data/maps/RustboroCity/scripts.pory"
	lockall
# 753 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 754 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 755 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 756 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 757 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 758 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 759 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 760 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 761 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 762 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 763 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 764 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 765 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 766 "data/maps/RustboroCity/scripts.pory"

# 767 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 768 "data/maps/RustboroCity/scripts.pory"
	lockall
# 769 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 770 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 771 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 772 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 773 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 774 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 775 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 776 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 777 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 778 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 780 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 781 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 782 "data/maps/RustboroCity/scripts.pory"

# 783 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 784 "data/maps/RustboroCity/scripts.pory"
	lockall
# 785 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 786 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 787 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 788 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 789 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 790 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 791 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 792 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 793 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 794 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 796 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 797 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 798 "data/maps/RustboroCity/scripts.pory"

# 799 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 800 "data/maps/RustboroCity/scripts.pory"
	lockall
# 801 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 802 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 803 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 804 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 805 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 806 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 807 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 808 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 809 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 810 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 812 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 813 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 814 "data/maps/RustboroCity/scripts.pory"

# 815 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 816 "data/maps/RustboroCity/scripts.pory"
	lockall
# 817 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 818 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 819 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 820 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 821 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 822 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 823 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 824 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 825 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 826 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 827 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 828 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 829 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 830 "data/maps/RustboroCity/scripts.pory"

# 831 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 832 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 833 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 834 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 835 "data/maps/RustboroCity/scripts.pory"
	end
# 836 "data/maps/RustboroCity/scripts.pory"

# 837 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 838 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 839 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 840 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 841 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 842 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 843 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 844 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 845 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 846 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 847 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 848 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 849 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 850 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 851 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 852 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 853 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleMay2
# 854 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 855 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 856 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 857 "data/maps/RustboroCity/scripts.pory"
	end
# 858 "data/maps/RustboroCity/scripts.pory"

# 859 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 860 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 861 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 862 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 863 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleMay2
# 864 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 865 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 866 "data/maps/RustboroCity/scripts.pory"
	end
# 867 "data/maps/RustboroCity/scripts.pory"

# 868 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 869 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 870 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 871 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 872 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 873 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 874 "data/maps/RustboroCity/scripts.pory"
	end
# 875 "data/maps/RustboroCity/scripts.pory"

# 876 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay2::
# 877 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TooBad, MSGBOX_DEFAULT
# 878 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 879 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 880 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 881 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 882 "data/maps/RustboroCity/scripts.pory"
	end
# 883 "data/maps/RustboroCity/scripts.pory"

# 884 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 885 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 886 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 887 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 888 "data/maps/RustboroCity/scripts.pory"
	end
# 889 "data/maps/RustboroCity/scripts.pory"

# 890 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHintWithLevelCapMessage::
# 891 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 892 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 893 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 894 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 895 "data/maps/RustboroCity/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 896 "data/maps/RustboroCity/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 897 "data/maps/RustboroCity/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 898 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 899 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 900 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 901 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 902 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 903 "data/maps/RustboroCity/scripts.pory"
	end
# 904 "data/maps/RustboroCity/scripts.pory"

# 905 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 906 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 907 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 908 "data/maps/RustboroCity/scripts.pory"
	return
# 909 "data/maps/RustboroCity/scripts.pory"

# 910 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 911 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 912 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 913 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 914 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 915 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 916 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHintWithLevelCapMessage
# 917 "data/maps/RustboroCity/scripts.pory"
	end
# 918 "data/maps/RustboroCity/scripts.pory"

# 919 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 920 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 921 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 922 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 923 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 924 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 925 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHintWithLevelCapMessage
# 926 "data/maps/RustboroCity/scripts.pory"
	end
# 927 "data/maps/RustboroCity/scripts.pory"

# 928 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 929 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 930 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 931 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 932 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 933 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 934 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHintWithLevelCapMessage
# 935 "data/maps/RustboroCity/scripts.pory"
	end
# 936 "data/maps/RustboroCity/scripts.pory"

# 937 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 938 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 939 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 940 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 941 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 942 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 943 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 944 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 945 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 946 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 947 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 948 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 949 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 950 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 951 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 952 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleBrendan2
# 953 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 954 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 955 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 956 "data/maps/RustboroCity/scripts.pory"
	end
# 957 "data/maps/RustboroCity/scripts.pory"

# 958 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 959 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 960 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 961 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleBrendan2
# 962 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 963 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 964 "data/maps/RustboroCity/scripts.pory"
	end
# 965 "data/maps/RustboroCity/scripts.pory"

# 966 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 967 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 968 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 969 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 970 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 971 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 972 "data/maps/RustboroCity/scripts.pory"
	end
# 973 "data/maps/RustboroCity/scripts.pory"

# 974 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan2::
# 975 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TooBad, MSGBOX_DEFAULT
# 976 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 977 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 978 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 979 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 980 "data/maps/RustboroCity/scripts.pory"
	end
# 981 "data/maps/RustboroCity/scripts.pory"

# 982 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 983 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 984 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 985 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 986 "data/maps/RustboroCity/scripts.pory"
	end
# 987 "data/maps/RustboroCity/scripts.pory"

# 988 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHintWithLevelCapMessage::
# 989 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 990 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 991 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 992 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 993 "data/maps/RustboroCity/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 994 "data/maps/RustboroCity/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 995 "data/maps/RustboroCity/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 996 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 997 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 998 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 999 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 1000 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1001 "data/maps/RustboroCity/scripts.pory"
	end
# 1002 "data/maps/RustboroCity/scripts.pory"

# 1003 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 1004 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 1005 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1006 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1007 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1008 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 1009 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHintWithLevelCapMessage
# 1010 "data/maps/RustboroCity/scripts.pory"
	end
# 1011 "data/maps/RustboroCity/scripts.pory"

# 1012 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 1013 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 1014 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1015 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1016 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1017 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 1018 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHintWithLevelCapMessage
# 1019 "data/maps/RustboroCity/scripts.pory"
	end
# 1020 "data/maps/RustboroCity/scripts.pory"

# 1021 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 1022 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 1023 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1024 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1025 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1026 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 1027 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHintWithLevelCapMessage
# 1028 "data/maps/RustboroCity/scripts.pory"
	end
# 1029 "data/maps/RustboroCity/scripts.pory"

# 1030 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 1031 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1032 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1033 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1034 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1035 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1036 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1037 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1038 "data/maps/RustboroCity/scripts.pory"

# 1039 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 1040 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1041 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1042 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1043 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1044 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1045 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1046 "data/maps/RustboroCity/scripts.pory"

# 1047 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 1048 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1049 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1050 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1051 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1052 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1053 "data/maps/RustboroCity/scripts.pory"

# 1054 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1055 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1056 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1057 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1058 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1059 "data/maps/RustboroCity/scripts.pory"

# 1060 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1061 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1062 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1063 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1064 "data/maps/RustboroCity/scripts.pory"

# 1065 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1066 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1067 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1068 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1069 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1070 "data/maps/RustboroCity/scripts.pory"

# 1071 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1072 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1073 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1074 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1075 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1076 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1077 "data/maps/RustboroCity/scripts.pory"

# 1078 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1079 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1080 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1081 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1082 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1083 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1084 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1085 "data/maps/RustboroCity/scripts.pory"

# 1086 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1087 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1088 "data/maps/RustboroCity/scripts.pory"
	end
# 1089 "data/maps/RustboroCity/scripts.pory"

# 1090 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1091 "data/maps/RustboroCity/scripts.pory"
	.string "The Devon Corporation…\n"
# 1092 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to Devon.\p"
# 1093 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1094 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1095 "data/maps/RustboroCity/scripts.pory"

# 1096 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1097 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1098 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1099 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1100 "data/maps/RustboroCity/scripts.pory"

# 1101 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1102 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the Pokémon Gym\n"
# 1103 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1104 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny Gym Badge\n"
# 1105 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess trainers begin to\l"
# 1106 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1107 "data/maps/RustboroCity/scripts.pory"

# 1108 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1109 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's Rustboro's Gym Badge!\p"
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the Pokémon Gym BadgeS,\n"
# 1111 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro's is the coolest, I'd say.$"
# 1112 "data/maps/RustboroCity/scripts.pory"

# 1113 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1114 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1115 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1116 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1117 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School?$"
# 1118 "data/maps/RustboroCity/scripts.pory"

# 1119 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the Gym Leader, but…\p"
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "my Fire-type Pokémon…\p"
# 1123 "data/maps/RustboroCity/scripts.pory"
	.string "Fire-type Pokémon don't match up\n"
# 1124 "data/maps/RustboroCity/scripts.pory"
	.string "well against Rock-type Pokémon…$"
# 1125 "data/maps/RustboroCity/scripts.pory"

# 1126 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1127 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
# 1128 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1129 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1131 "data/maps/RustboroCity/scripts.pory"

# 1132 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1133 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1135 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1136 "data/maps/RustboroCity/scripts.pory"
	.string "Slateport for his pet, Peeko.\p"
# 1137 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1138 "data/maps/RustboroCity/scripts.pory"
	.string "that Peeko.$"
# 1139 "data/maps/RustboroCity/scripts.pory"

# 1140 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1141 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have Pokémon with you, too.\p"
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "places with Pokémon, too.$"
# 1144 "data/maps/RustboroCity/scripts.pory"

# 1145 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School!\p"
# 1147 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1148 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare Pokémon easily?$"
# 1149 "data/maps/RustboroCity/scripts.pory"

# 1150 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1151 "data/maps/RustboroCity/scripts.pory"
	.string "If a Pokémon gains experience in\n"
# 1152 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1153 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1154 "data/maps/RustboroCity/scripts.pory"

# 1155 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1156 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon changes shape?\n"
# 1157 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1158 "data/maps/RustboroCity/scripts.pory"

# 1159 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon you get in a trade from\n"
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1162 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain Gym\n"
# 1163 "data/maps/RustboroCity/scripts.pory"
	.string "Badges, it may not obey you…$"
# 1164 "data/maps/RustboroCity/scripts.pory"

# 1165 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1166 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1168 "data/maps/RustboroCity/scripts.pory"

# 1169 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1170 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my Goods!$"
# 1172 "data/maps/RustboroCity/scripts.pory"

# 1173 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1174 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1175 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic trainer who\n"
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in Petalburg Woods!\p"
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by Team Aqua!\n"
# 1178 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the Devon Goods back!\p"
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1180 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1181 "data/maps/RustboroCity/scripts.pory"

# 1182 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1185 "data/maps/RustboroCity/scripts.pory"

# 1186 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string "The Devon Goods?\p"
# 1189 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1190 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great trainer!\p"
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1193 "data/maps/RustboroCity/scripts.pory"
	.string "another Great Ball!$"
# 1194 "data/maps/RustboroCity/scripts.pory"

# 1195 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1197 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this Great Ball.$"
# 1198 "data/maps/RustboroCity/scripts.pory"

# 1199 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1200 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1201 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1202 "data/maps/RustboroCity/scripts.pory"

# 1203 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, hi, {PLAYER}{KUN}!\p"
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "You had a Match Call feature put\n"
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "on your PokéNav!\p"
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1208 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1209 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1210 "data/maps/RustboroCity/scripts.pory"

# 1211 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "Registered May\n"
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "in the PokéNav.$"
# 1214 "data/maps/RustboroCity/scripts.pory"

# 1215 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1216 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, by the way, I passed\n"
# 1217 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney in Petalburg Woods.\p"
# 1218 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1219 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1220 "data/maps/RustboroCity/scripts.pory"
	.string "How's your Pokédex coming along,\n"
# 1221 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1222 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1223 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1224 "data/maps/RustboroCity/scripts.pory"

# 1225 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1226 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, what's the matter?\p"
# 1227 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon very much?\p"
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a trainer!$"
# 1230 "data/maps/RustboroCity/scripts.pory"

# 1231 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1232 "data/maps/RustboroCity/scripts.pory"
	.string "May: So, what do you think?\n"
# 1233 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1234 "data/maps/RustboroCity/scripts.pory"

# 1235 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "May: You just became a trainer,\n"
# 1237 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1238 "data/maps/RustboroCity/scripts.pory"

# 1239 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TooBad:
# 1240 "data/maps/RustboroCity/scripts.pory"
	.string "Too bad!$"
# 1241 "data/maps/RustboroCity/scripts.pory"

# 1242 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1244 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1245 "data/maps/RustboroCity/scripts.pory"

# 1246 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1247 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, by the way, Mr. Briney, who\n"
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1250 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but Mr. Briney\l"
# 1251 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1252 "data/maps/RustboroCity/scripts.pory"

# 1253 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1254 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: Oh, hey, {PLAYER}!\p"
# 1255 "data/maps/RustboroCity/scripts.pory"
	.string "You had a Match Call feature put\n"
# 1256 "data/maps/RustboroCity/scripts.pory"
	.string "on your PokéNav! Cool!\p"
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1259 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1260 "data/maps/RustboroCity/scripts.pory"

# 1261 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1262 "data/maps/RustboroCity/scripts.pory"
	.string "Registered Brendan\n"
# 1263 "data/maps/RustboroCity/scripts.pory"
	.string "in the PokéNav.$"
# 1264 "data/maps/RustboroCity/scripts.pory"

# 1265 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1266 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: By the way, {PLAYER}, I walked\n"
# 1267 "data/maps/RustboroCity/scripts.pory"
	.string "by Mr. Briney in Petalburg Woods.\p"
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1269 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your Pokédex?\n"
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1274 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1275 "data/maps/RustboroCity/scripts.pory"

# 1276 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1277 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: What's the matter? Don't have\n"
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your Pokémon?$"
# 1279 "data/maps/RustboroCity/scripts.pory"

# 1280 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1281 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: What's up?\n"
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1283 "data/maps/RustboroCity/scripts.pory"

# 1284 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: I know you just became\n"
# 1286 "data/maps/RustboroCity/scripts.pory"
	.string "a trainer, but I won't go easy!$"
# 1287 "data/maps/RustboroCity/scripts.pory"

# 1288 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1289 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1290 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1291 "data/maps/RustboroCity/scripts.pory"

# 1292 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1293 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: By the way, you know\n"
# 1294 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney? The guy I just passed?\p"
# 1295 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1296 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1297 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney was once a great sailor.$"
# 1298 "data/maps/RustboroCity/scripts.pory"

# 1299 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1300 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1301 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1303 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1304 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1305 "data/maps/RustboroCity/scripts.pory"

# 1306 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1307 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corporation\p"
# 1308 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1309 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1310 "data/maps/RustboroCity/scripts.pory"

# 1311 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1312 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City Pokémon Gym\n"
# 1313 "data/maps/RustboroCity/scripts.pory"
	.string "Leader: Roxanne\p"
# 1314 "data/maps/RustboroCity/scripts.pory"
	.string "“The Rock-loving honors student!”$"
# 1315 "data/maps/RustboroCity/scripts.pory"

# 1316 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1317 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corp. Branch Office\p"
# 1318 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to Devon employees\n"
# 1319 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1320 "data/maps/RustboroCity/scripts.pory"

# 1321 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1322 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City\p"
# 1323 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1324 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1325 "data/maps/RustboroCity/scripts.pory"

# 1326 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1327 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School\p"
# 1328 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1329 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon!”$"
# 1330 "data/maps/RustboroCity/scripts.pory"

# 1331 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1332 "data/maps/RustboroCity/scripts.pory"
	.string "Cutter's House$"
# 1333 "data/maps/RustboroCity/scripts.pory"

# 1334 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1335 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1336 "data/maps/RustboroCity/scripts.pory"
	.string "for the PokéNav…\p"
# 1337 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1338 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that PokéNav?\n"
# 1339 "data/maps/RustboroCity/scripts.pory"
	.string "The one our President gave you?$"
# 1340 "data/maps/RustboroCity/scripts.pory"

# 1341 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1342 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1343 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1344 "data/maps/RustboroCity/scripts.pory"
	.string "Match Call to your PokéNav.\p"
# 1345 "data/maps/RustboroCity/scripts.pory"
	.string "Using the Match Call feature,\n"
# 1346 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1347 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your PokéNav.\p"
# 1348 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our President Stone should\n"
# 1349 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your PokéNav.\p"
# 1350 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1351 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our President a call.$"
# 1352 "data/maps/RustboroCity/scripts.pory"

# 1353 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1354 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the PokéNav.$"
# 1355 "data/maps/RustboroCity/scripts.pory"

# 1356 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1357 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1358 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1359 "data/maps/RustboroCity/scripts.pory"

# 1360 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1361 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1362 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1363 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another trainer.\p"
# 1364 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two trainers\n"
# 1365 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more Pokémon,\l"
# 1366 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1367 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1368 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two trainers by yourself?$"

RustboroCity_Trigger_BlockGymEntrance::
# 1372 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1373 "data/maps/RustboroCity/scripts.pory"
	msgbox GoBeatRoark, MSGBOX_SIGN
# 1374 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1375 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 1376 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1377 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end


# 1387 "data/maps/RustboroCity/scripts.pory"
StopPlayer:
# 1388 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

GoBeatRoark::
# 1381 "data/maps/RustboroCity/scripts.pory"
	.string "You should go see if there are any\n"
	.string "other strong trainers to fight, perhaps\l"
	.string "very far east on Route 116.$"
