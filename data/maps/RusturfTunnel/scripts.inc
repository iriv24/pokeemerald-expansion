# 1 "data/maps/RusturfTunnel/scripts.pory"

# 2 "data/maps/RusturfTunnel/scripts.pory"
.equ LOCALID_WANDAS_BF, 1
# 3 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_BRINEY, 5
# 4 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_GRUNT, 6
# 5 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_PEEKO, 7
# 6 "data/maps/RusturfTunnel/scripts.pory"
.equ LOCALID_WANDA, 10
# 7 "data/maps/RusturfTunnel/scripts.pory"

# 8 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 9 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RusturfTunnel_OnLoad
# 10 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 11 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 12 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 13 "data/maps/RusturfTunnel/scripts.pory"

# 14 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnLoad:
# 15 "data/maps/RusturfTunnel/scripts.pory"
	call_if_set FLAG_BADGE07_GET, RusturfTunnel_EventScript_ClearCaveIn
# 16 "data/maps/RusturfTunnel/scripts.pory"
	end
# 17 "data/maps/RusturfTunnel/scripts.pory"

# 18 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearCaveIn::
# 19 "data/maps/RusturfTunnel/scripts.pory"
	setmetatile 20, 16, METATILE_Cave_NormalFloor, FALSE
# 20 "data/maps/RusturfTunnel/scripts.pory"
	setmetatile 20, 17, METATILE_Cave_NormalFloor, FALSE
# 21 "data/maps/RusturfTunnel/scripts.pory"
	setmetatile 21, 15, METATILE_Cave_NormalFloor, FALSE
# 22 "data/maps/RusturfTunnel/scripts.pory"
	setmetatile 21, 16, METATILE_Cave_NormalFloor, FALSE
# 23 "data/maps/RusturfTunnel/scripts.pory"
	setmetatile 21, 17, METATILE_Cave_NormalFloor, FALSE
# 24 "data/maps/RusturfTunnel/scripts.pory"
	return
# 25 "data/maps/RusturfTunnel/scripts.pory"

# 26 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnFrame:
# 27 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 28 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 29 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 30 "data/maps/RusturfTunnel/scripts.pory"

# 31 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition:
# 32 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 33 "data/maps/RusturfTunnel/scripts.pory"
	end
# 34 "data/maps/RusturfTunnel/scripts.pory"

# 35 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 36 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_PEEKO, 13, 4
# 37 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 13, 5
# 38 "data/maps/RusturfTunnel/scripts.pory"
	return
# 39 "data/maps/RusturfTunnel/scripts.pory"

# 40 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 41 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 42 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 43 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 44 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 45 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 46 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 47 "data/maps/RusturfTunnel/scripts.pory"
	release
# 48 "data/maps/RusturfTunnel/scripts.pory"
	end
# 49 "data/maps/RusturfTunnel/scripts.pory"

# 50 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 51 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 52 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 53 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 54 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 55 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 56 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 57 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 58 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 59 "data/maps/RusturfTunnel/scripts.pory"
	release
# 60 "data/maps/RusturfTunnel/scripts.pory"
	end
# 61 "data/maps/RusturfTunnel/scripts.pory"

# 62 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 63 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 64 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 65 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 66 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 67 "data/maps/RusturfTunnel/scripts.pory"
	release
# 68 "data/maps/RusturfTunnel/scripts.pory"
	end
# 69 "data/maps/RusturfTunnel/scripts.pory"

# 70 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 71 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 72 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 73 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 74 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 75 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 76 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 77 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 78 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 79 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 80 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 81 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 82 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 83 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 84 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 85 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 86 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 87 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 88 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 89 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 90 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 91 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 92 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 93 "data/maps/RusturfTunnel/scripts.pory"
	end
# 94 "data/maps/RusturfTunnel/scripts.pory"

# 95 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 96 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 97 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 98 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 99 "data/maps/RusturfTunnel/scripts.pory"
	return
# 100 "data/maps/RusturfTunnel/scripts.pory"

# 101 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 102 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 103 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 104 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 105 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
# 106 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 107 "data/maps/RusturfTunnel/scripts.pory"
	return
# 108 "data/maps/RusturfTunnel/scripts.pory"

# 109 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 110 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 111 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 112 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 113 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
# 114 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 115 "data/maps/RusturfTunnel/scripts.pory"
	return
# 116 "data/maps/RusturfTunnel/scripts.pory"

# 117 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 118 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 119 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 120 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 121 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 122 "data/maps/RusturfTunnel/scripts.pory"
	return
# 123 "data/maps/RusturfTunnel/scripts.pory"

# 124 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 125 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 126 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 127 "data/maps/RusturfTunnel/scripts.pory"
	return
# 128 "data/maps/RusturfTunnel/scripts.pory"

# 129 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 130 "data/maps/RusturfTunnel/scripts.pory"
	return
# 131 "data/maps/RusturfTunnel/scripts.pory"

# 132 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 133 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 134 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 135 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 136 "data/maps/RusturfTunnel/scripts.pory"
	return
# 137 "data/maps/RusturfTunnel/scripts.pory"

# 138 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 139 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit1
# 140 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 141 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 142 "data/maps/RusturfTunnel/scripts.pory"
	return
# 143 "data/maps/RusturfTunnel/scripts.pory"

# 144 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 145 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 146 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit
# 147 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 148 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 149 "data/maps/RusturfTunnel/scripts.pory"
	return
# 150 "data/maps/RusturfTunnel/scripts.pory"

# 151 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 152 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 153 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_ExclamationMark
# 154 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 155 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_Delay48
# 156 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 157 "data/maps/RusturfTunnel/scripts.pory"
	return
# 158 "data/maps/RusturfTunnel/scripts.pory"

# 159 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 160 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 161 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 162 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 163 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 164 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 165 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 166 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 167 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 168 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 169 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 170 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 171 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 172 "data/maps/RusturfTunnel/scripts.pory"

# 173 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 174 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 175 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 176 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 179 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 180 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 181 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 182 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 183 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 184 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 185 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 186 "data/maps/RusturfTunnel/scripts.pory"

# 187 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 188 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 189 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 190 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 191 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 192 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 193 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 194 "data/maps/RusturfTunnel/scripts.pory"

# 195 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 196 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 197 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 198 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 199 "data/maps/RusturfTunnel/scripts.pory"

# 200 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 201 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 202 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 203 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 204 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 205 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 206 "data/maps/RusturfTunnel/scripts.pory"

# 207 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 208 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 209 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_down
# 210 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 211 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 212 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 213 "data/maps/RusturfTunnel/scripts.pory"

# 214 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 215 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 216 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 217 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 218 "data/maps/RusturfTunnel/scripts.pory"

# 219 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 220 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 221 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 222 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 223 "data/maps/RusturfTunnel/scripts.pory"

# 224 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 225 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 226 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 227 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 228 "data/maps/RusturfTunnel/scripts.pory"

# 229 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 230 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 231 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 232 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 233 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 234 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 235 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 236 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 237 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 238 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 239 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 240 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 241 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 242 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 243 "data/maps/RusturfTunnel/scripts.pory"

# 244 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 245 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 246 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 247 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 248 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 249 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 250 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 251 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 252 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 253 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 254 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 255 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 256 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 257 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 258 "data/maps/RusturfTunnel/scripts.pory"

# 259 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 260 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 261 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 262 "data/maps/RusturfTunnel/scripts.pory"

# 263 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 264 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 265 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 266 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 267 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 268 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 269 "data/maps/RusturfTunnel/scripts.pory"

# 270 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 271 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 272 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 273 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 274 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 275 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 276 "data/maps/RusturfTunnel/scripts.pory"

# 277 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 278 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 279 "data/maps/RusturfTunnel/scripts.pory"
	end
# 280 "data/maps/RusturfTunnel/scripts.pory"

# 281 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 282 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 283 "data/maps/RusturfTunnel/scripts.pory"
	end
# 284 "data/maps/RusturfTunnel/scripts.pory"

# 285 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 286 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 287 "data/maps/RusturfTunnel/scripts.pory"
	end
# 288 "data/maps/RusturfTunnel/scripts.pory"

# 289 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp::
# 290 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 291 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 292 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 293 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 294 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 295 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 296 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 297 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT
# 298 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_PEEKO
# 299 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 300 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 301 "data/maps/RusturfTunnel/scripts.pory"
	end
# 302 "data/maps/RusturfTunnel/scripts.pory"

# 303 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 304 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 305 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 306 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 307 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 308 "data/maps/RusturfTunnel/scripts.pory"

# 309 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 310 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 311 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 312 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 313 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 314 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 315 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 316 "data/maps/RusturfTunnel/scripts.pory"
	release
# 317 "data/maps/RusturfTunnel/scripts.pory"
	end
# 318 "data/maps/RusturfTunnel/scripts.pory"

# 319 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt::
# 320 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 321 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 322 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 323 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 324 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 325 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 326 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 327 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 328 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 329 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntEscape
# 330 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 331 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_GRUNT
# 332 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 333 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_BRINEY
# 334 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 335 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 336 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 337 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 338 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 339 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 340 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_FacePlayer
# 341 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 342 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 343 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 344 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 345 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 346 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 347 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 348 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 349 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 350 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyExit
# 351 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_PeekoExit
# 352 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 353 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_BRINEY
# 354 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_PEEKO
# 355 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 356 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 357 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 358 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 359 "data/maps/RusturfTunnel/scripts.pory"
	release
# 360 "data/maps/RusturfTunnel/scripts.pory"
	end
# 361 "data/maps/RusturfTunnel/scripts.pory"

# 362 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 363 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 364 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 365 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 366 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 367 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 368 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 369 "data/maps/RusturfTunnel/scripts.pory"

# 370 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 371 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 372 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 373 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 374 "data/maps/RusturfTunnel/scripts.pory"

# 375 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 376 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 377 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 378 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 379 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 380 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 381 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 382 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 383 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 384 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 385 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 386 "data/maps/RusturfTunnel/scripts.pory"

# 387 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 388 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 389 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 390 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 391 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 392 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 393 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 394 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 395 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 396 "data/maps/RusturfTunnel/scripts.pory"

# 397 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 398 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 399 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 400 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 401 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 402 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 403 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 404 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 405 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 406 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 407 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 408 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 409 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 410 "data/maps/RusturfTunnel/scripts.pory"

# 411 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 412 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 413 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 414 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 415 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 416 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 417 "data/maps/RusturfTunnel/scripts.pory"

# 418 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 419 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 420 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 421 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 422 "data/maps/RusturfTunnel/scripts.pory"

# 423 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 424 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 425 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 426 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 427 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 428 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 429 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 430 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 431 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 432 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 433 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 434 "data/maps/RusturfTunnel/scripts.pory"

# 435 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 436 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 437 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 438 "data/maps/RusturfTunnel/scripts.pory"
	end
# 439 "data/maps/RusturfTunnel/scripts.pory"

# 440 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Hiker::
# 441 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_CaveIn, MSGBOX_NPC
# 442 "data/maps/RusturfTunnel/scripts.pory"
	end
# 443 "data/maps/RusturfTunnel/scripts.pory"

# 444 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Graveler::
# 445 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 446 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 447 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 448 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_GRAVELER, CRY_MODE_NORMAL
# 449 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RustboroCity_Gym_Text_Graveler, MSGBOX_DEFAULT
# 450 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 451 "data/maps/RusturfTunnel/scripts.pory"
	release
# 452 "data/maps/RusturfTunnel/scripts.pory"
	end
# 453 "data/maps/RusturfTunnel/scripts.pory"

# 454 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome:
# 455 "data/maps/RusturfTunnel/scripts.pory"
	.string "What, are you coming?\n"
# 456 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come and get some, then!$"
# 457 "data/maps/RusturfTunnel/scripts.pory"

# 458 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko:
# 459 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko: Pii pihyoh!$"
# 460 "data/maps/RusturfTunnel/scripts.pory"

# 461 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntIntro:
# 462 "data/maps/RusturfTunnel/scripts.pory"
	.string "Grah, keelhaul it all!\p"
# 463 "data/maps/RusturfTunnel/scripts.pory"
	.string "That hostage Pokémon turned out to\n"
# 464 "data/maps/RusturfTunnel/scripts.pory"
	.string "be worthless!\p"
# 465 "data/maps/RusturfTunnel/scripts.pory"
	.string "And to think I made a getaway…\n"
# 466 "data/maps/RusturfTunnel/scripts.pory"
	.string "In this tunnel to nowhere!\p"
# 467 "data/maps/RusturfTunnel/scripts.pory"
	.string "Hey! You!\n"
# 468 "data/maps/RusturfTunnel/scripts.pory"
	.string "So you want to battle me?$"
# 469 "data/maps/RusturfTunnel/scripts.pory"

# 470 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 471 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
# 472 "data/maps/RusturfTunnel/scripts.pory"
	.string "a dead end!$"
# 473 "data/maps/RusturfTunnel/scripts.pory"

# 474 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 475 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
# 476 "data/maps/RusturfTunnel/scripts.pory"
	.string "The boss told me this would be a\n"
# 477 "data/maps/RusturfTunnel/scripts.pory"
	.string "slick-and-easy job to pull.\p"
# 478 "data/maps/RusturfTunnel/scripts.pory"
	.string "All I had to do was steal some package\n"
# 479 "data/maps/RusturfTunnel/scripts.pory"
	.string "from Devon.\p"
# 480 "data/maps/RusturfTunnel/scripts.pory"
	.string "Tch!\n"
# 481 "data/maps/RusturfTunnel/scripts.pory"
	.string "You want it back that badly, take it!$"
# 482 "data/maps/RusturfTunnel/scripts.pory"

# 483 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 484 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko!\n"
# 485 "data/maps/RusturfTunnel/scripts.pory"
	.string "Am I glad to see you're safe!$"
# 486 "data/maps/RusturfTunnel/scripts.pory"

# 487 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 488 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko owes her life to you!\p"
# 489 "data/maps/RusturfTunnel/scripts.pory"
	.string "They call me Mr. Briney.\n"
# 490 "data/maps/RusturfTunnel/scripts.pory"
	.string "And, you are?\p"
# 491 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\n"
# 492 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\p"
# 493 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
# 494 "data/maps/RusturfTunnel/scripts.pory"
	.string "I sincerely thank you!\p"
# 495 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now, if there's anything that troubles\n"
# 496 "data/maps/RusturfTunnel/scripts.pory"
	.string "you, don't hesitate to tell me!\p"
# 497 "data/maps/RusturfTunnel/scripts.pory"
	.string "You can usually find me in my cottage\n"
# 498 "data/maps/RusturfTunnel/scripts.pory"
	.string "by the sea near Petalburg Woods.\p"
# 499 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come, Peeko, we should make our way\n"
# 500 "data/maps/RusturfTunnel/scripts.pory"
	.string "home.\p"
# 501 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko: Pihyoh!$"
# 502 "data/maps/RusturfTunnel/scripts.pory"

# 503 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 504 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
# 505 "data/maps/RusturfTunnel/scripts.pory"
	.string "Why can't they keep digging?\n"
# 506 "data/maps/RusturfTunnel/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 507 "data/maps/RusturfTunnel/scripts.pory"
	.string "My beloved awaits me in Verdanturf\n"
# 508 "data/maps/RusturfTunnel/scripts.pory"
	.string "TOWN just beyond here…\p"
# 509 "data/maps/RusturfTunnel/scripts.pory"
	.string "If Rustboro and Verdanturf were\n"
# 510 "data/maps/RusturfTunnel/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 511 "data/maps/RusturfTunnel/scripts.pory"
	.string "her every day…\p"
# 512 "data/maps/RusturfTunnel/scripts.pory"
	.string "But this…\n"
# 513 "data/maps/RusturfTunnel/scripts.pory"
	.string "What am I to do?$"
# 514 "data/maps/RusturfTunnel/scripts.pory"

# 515 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 516 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from Rustboro to Verdanturf,\n"
# 517 "data/maps/RusturfTunnel/scripts.pory"
	.string "you need to go to Dewford, then pass\l"
# 518 "data/maps/RusturfTunnel/scripts.pory"
	.string "through Slateport and Mauville…$"
# 519 "data/maps/RusturfTunnel/scripts.pory"

# 520 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 521 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
# 522 "data/maps/RusturfTunnel/scripts.pory"
	.string "blocking the way.\p"
# 523 "data/maps/RusturfTunnel/scripts.pory"
	.string "To show you how much I appreciate it,\n"
# 524 "data/maps/RusturfTunnel/scripts.pory"
	.string "I'd like you to have this HM.$"
# 525 "data/maps/RusturfTunnel/scripts.pory"

# 526 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 527 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains Strength.\p"
# 528 "data/maps/RusturfTunnel/scripts.pory"
	.string "If a muscular Pokémon were to learn\n"
# 529 "data/maps/RusturfTunnel/scripts.pory"
	.string "that, it would be able to move even\l"
# 530 "data/maps/RusturfTunnel/scripts.pory"
	.string "large boulders.$"
# 531 "data/maps/RusturfTunnel/scripts.pory"

# 532 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 533 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wanda!\n"
# 534 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now I can see you anytime!\p"
# 535 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wanda: That's…wonderful.\p"
# 536 "data/maps/RusturfTunnel/scripts.pory"
	.string "Please, take some rest at my home.$"
# 537 "data/maps/RusturfTunnel/scripts.pory"

# 538 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 539 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
# 540 "data/maps/RusturfTunnel/scripts.pory"
	.string "My boyfriend is there.\p"
# 541 "data/maps/RusturfTunnel/scripts.pory"
	.string "He… He's not just digging the tunnel\n"
# 542 "data/maps/RusturfTunnel/scripts.pory"
	.string "to come see me.\p"
# 543 "data/maps/RusturfTunnel/scripts.pory"
	.string "He works his hands raw and rough\n"
# 544 "data/maps/RusturfTunnel/scripts.pory"
	.string "for the benefit of everyone.$"
# 545 "data/maps/RusturfTunnel/scripts.pory"

# 546 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 547 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
# 548 "data/maps/RusturfTunnel/scripts.pory"
	.string "mountains? A mountain man, right?\p"
# 549 "data/maps/RusturfTunnel/scripts.pory"
	.string "So why don't they call a Pokémon in\n"
# 550 "data/maps/RusturfTunnel/scripts.pory"
	.string "the mountains a mountain Pokémon?$"
# 551 "data/maps/RusturfTunnel/scripts.pory"

# 552 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 553 "data/maps/RusturfTunnel/scripts.pory"
	.string "My Pokémon…\n"
# 554 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ran out of power…$"
# 555 "data/maps/RusturfTunnel/scripts.pory"

# 556 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 557 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
# 558 "data/maps/RusturfTunnel/scripts.pory"
	.string "protect Pokémon, right?\l"
# 559 "data/maps/RusturfTunnel/scripts.pory"
	.string "There's a feel-good story!$"
# 560 "data/maps/RusturfTunnel/scripts.pory"

# 561 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_CaveIn:
# 562 "data/maps/RusturfTunnel/scripts.pory"
	.string "Whoa there! There was a cave-in here a\n"
# 563 "data/maps/RusturfTunnel/scripts.pory"
	.string "few days ago.\p"
# 564 "data/maps/RusturfTunnel/scripts.pory"
	.string "Graveler and I are working on getting\n"
# 565 "data/maps/RusturfTunnel/scripts.pory"
	.string "this cleared up, be careful where you\l"
# 566 "data/maps/RusturfTunnel/scripts.pory"
	.string "step in the meantime.$"
# 567 "data/maps/RusturfTunnel/scripts.pory"

# 568 "data/maps/RusturfTunnel/scripts.pory"
RustboroCity_Gym_Text_Graveler:
# 569 "data/maps/RusturfTunnel/scripts.pory"
	.string "Graveler: eeeEEEEEEOOw!$"
