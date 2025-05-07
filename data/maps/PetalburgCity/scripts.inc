# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 2
# 3 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BOY, 3
# 4 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 5 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_GYM_BOY, 8
# 6 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_SCOTT, 9
# 7 "data/maps/PetalburgCity/scripts.pory"

# 8 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 9 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 10 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 11 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 12 "data/maps/PetalburgCity/scripts.pory"

# 13 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 14 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 15 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 16 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 17 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 18 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 9, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 19 "data/maps/PetalburgCity/scripts.pory"
	end
# 20 "data/maps/PetalburgCity/scripts.pory"

# 21 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 22 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 23 "data/maps/PetalburgCity/scripts.pory"
	return
# 24 "data/maps/PetalburgCity/scripts.pory"

# 25 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 26 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 27 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 28 "data/maps/PetalburgCity/scripts.pory"
	return
# 29 "data/maps/PetalburgCity/scripts.pory"

# 30 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 31 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 32 "data/maps/PetalburgCity/scripts.pory"
	return
# 33 "data/maps/PetalburgCity/scripts.pory"

# 34 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 35 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 36 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 37 "data/maps/PetalburgCity/scripts.pory"

# 38 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 39 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 40 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 41 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 42 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 43 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 45 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 46 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 47 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 48 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 49 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 50 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 51 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 52 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 53 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 54 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 55 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 56 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 57 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 58 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 59 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 60 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 61 "data/maps/PetalburgCity/scripts.pory"
	end
# 62 "data/maps/PetalburgCity/scripts.pory"

# 63 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 64 "data/maps/PetalburgCity/scripts.pory"
	lock
# 65 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 66 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 67 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 68 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 69 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 70 "data/maps/PetalburgCity/scripts.pory"
	release
# 71 "data/maps/PetalburgCity/scripts.pory"
	end
# 72 "data/maps/PetalburgCity/scripts.pory"

# 73 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 74 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 75 "data/maps/PetalburgCity/scripts.pory"
	end
# 76 "data/maps/PetalburgCity/scripts.pory"

# 77 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 78 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 79 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 80 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 81 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 82 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 83 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 84 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 85 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 86 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 87 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 88 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 89 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 90 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 92 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 93 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 94 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 95 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 96 "data/maps/PetalburgCity/scripts.pory"

# 97 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 98 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 99 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 100 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 101 "data/maps/PetalburgCity/scripts.pory"

# 102 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 103 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 104 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 105 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 106 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 107 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 108 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 109 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 120 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 121 "data/maps/PetalburgCity/scripts.pory"

# 122 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 124 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 125 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 126 "data/maps/PetalburgCity/scripts.pory"

# 127 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 128 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 160 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 161 "data/maps/PetalburgCity/scripts.pory"

# 162 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 163 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 196 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 197 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 200 "data/maps/PetalburgCity/scripts.pory"

# 201 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 202 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 203 "data/maps/PetalburgCity/scripts.pory"
	end
# 204 "data/maps/PetalburgCity/scripts.pory"

# 205 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 206 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 207 "data/maps/PetalburgCity/scripts.pory"
	end
# 208 "data/maps/PetalburgCity/scripts.pory"

# 209 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 210 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 211 "data/maps/PetalburgCity/scripts.pory"
	end
# 212 "data/maps/PetalburgCity/scripts.pory"

# 213 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 214 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 215 "data/maps/PetalburgCity/scripts.pory"
	end
# 216 "data/maps/PetalburgCity/scripts.pory"

# 217 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 218 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 219 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 220 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 221 "data/maps/PetalburgCity/scripts.pory"
	end
# 222 "data/maps/PetalburgCity/scripts.pory"

# 223 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 224 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 225 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 226 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 227 "data/maps/PetalburgCity/scripts.pory"
	end
# 228 "data/maps/PetalburgCity/scripts.pory"

# 229 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 230 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 231 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 232 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 233 "data/maps/PetalburgCity/scripts.pory"
	end
# 234 "data/maps/PetalburgCity/scripts.pory"

# 235 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 236 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 237 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 238 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 239 "data/maps/PetalburgCity/scripts.pory"
	end
# 240 "data/maps/PetalburgCity/scripts.pory"

# 241 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 242 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 243 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 244 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 245 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 246 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 247 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 248 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 249 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 250 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 251 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 252 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 253 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 254 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 255 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 256 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 257 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 258 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 259 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 260 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 261 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 262 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 263 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 264 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 265 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 266 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 267 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 268 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 269 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 270 "data/maps/PetalburgCity/scripts.pory"
	end
# 271 "data/maps/PetalburgCity/scripts.pory"

# 272 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 273 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 274 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 275 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 276 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 277 "data/maps/PetalburgCity/scripts.pory"
	return
# 278 "data/maps/PetalburgCity/scripts.pory"

# 279 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 280 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 281 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 282 "data/maps/PetalburgCity/scripts.pory"
	return
# 283 "data/maps/PetalburgCity/scripts.pory"

# 284 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 285 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 286 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 287 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 288 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 289 "data/maps/PetalburgCity/scripts.pory"
	return
# 290 "data/maps/PetalburgCity/scripts.pory"

# 291 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 292 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 293 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 294 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 295 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 296 "data/maps/PetalburgCity/scripts.pory"
	return
# 297 "data/maps/PetalburgCity/scripts.pory"

# 298 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 299 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 300 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 301 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 302 "data/maps/PetalburgCity/scripts.pory"
	return
# 303 "data/maps/PetalburgCity/scripts.pory"

# 304 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 305 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 306 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 307 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 308 "data/maps/PetalburgCity/scripts.pory"
	return
# 309 "data/maps/PetalburgCity/scripts.pory"

# 310 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 311 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 312 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 313 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 314 "data/maps/PetalburgCity/scripts.pory"
	return
# 315 "data/maps/PetalburgCity/scripts.pory"

# 316 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 317 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 318 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 319 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 320 "data/maps/PetalburgCity/scripts.pory"
	return
# 321 "data/maps/PetalburgCity/scripts.pory"

# 322 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 323 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 324 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 325 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 326 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 327 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 328 "data/maps/PetalburgCity/scripts.pory"

# 329 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 330 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 331 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 332 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 333 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 334 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 335 "data/maps/PetalburgCity/scripts.pory"

# 336 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 337 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 338 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 339 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 340 "data/maps/PetalburgCity/scripts.pory"

# 341 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 342 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 343 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 344 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 345 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 346 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 347 "data/maps/PetalburgCity/scripts.pory"

# 348 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 349 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 350 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 351 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 352 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 353 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 354 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 355 "data/maps/PetalburgCity/scripts.pory"

# 356 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 357 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 359 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 367 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 368 "data/maps/PetalburgCity/scripts.pory"

# 369 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 383 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 384 "data/maps/PetalburgCity/scripts.pory"

# 385 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 396 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 397 "data/maps/PetalburgCity/scripts.pory"

# 398 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 410 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 411 "data/maps/PetalburgCity/scripts.pory"

# 412 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 425 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 426 "data/maps/PetalburgCity/scripts.pory"

# 427 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 437 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 438 "data/maps/PetalburgCity/scripts.pory"

# 439 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 440 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 441 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 452 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 453 "data/maps/PetalburgCity/scripts.pory"

# 454 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 464 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 465 "data/maps/PetalburgCity/scripts.pory"

# 466 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 477 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 478 "data/maps/PetalburgCity/scripts.pory"

# 479 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 480 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 481 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 482 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 483 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 484 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 485 "data/maps/PetalburgCity/scripts.pory"
	end
# 486 "data/maps/PetalburgCity/scripts.pory"

# 487 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 488 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 489 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 490 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 491 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 492 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 493 "data/maps/PetalburgCity/scripts.pory"
	end
# 494 "data/maps/PetalburgCity/scripts.pory"

# 495 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 496 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 497 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 498 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 499 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 500 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 501 "data/maps/PetalburgCity/scripts.pory"
	end
# 502 "data/maps/PetalburgCity/scripts.pory"

# 503 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 504 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 505 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 506 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 507 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 508 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 509 "data/maps/PetalburgCity/scripts.pory"
	end
# 510 "data/maps/PetalburgCity/scripts.pory"

# 511 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 512 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 513 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 514 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 515 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 516 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 517 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 518 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 520 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 521 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 522 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 523 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 524 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 525 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 526 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 527 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 528 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 529 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 530 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 531 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 532 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 534 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 535 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 536 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 537 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_HEX_ORB
# 538 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ExplainExpShare, MSGBOX_DEFAULT
# 539 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 540 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 541 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 542 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 543 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 544 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 545 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 546 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 547 "data/maps/PetalburgCity/scripts.pory"
	end
# 548 "data/maps/PetalburgCity/scripts.pory"

# 549 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 550 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 551 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 552 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 553 "data/maps/PetalburgCity/scripts.pory"
	return
# 554 "data/maps/PetalburgCity/scripts.pory"

# 555 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 556 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 557 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 558 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 559 "data/maps/PetalburgCity/scripts.pory"
	return
# 560 "data/maps/PetalburgCity/scripts.pory"

# 561 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 562 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 563 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 564 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 565 "data/maps/PetalburgCity/scripts.pory"
	return
# 566 "data/maps/PetalburgCity/scripts.pory"

# 567 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 568 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 569 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 570 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 571 "data/maps/PetalburgCity/scripts.pory"
	return
# 572 "data/maps/PetalburgCity/scripts.pory"

# 573 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 574 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 575 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 576 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 577 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 578 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 579 "data/maps/PetalburgCity/scripts.pory"

# 580 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 581 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 582 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 583 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 584 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 585 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 586 "data/maps/PetalburgCity/scripts.pory"

# 587 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 588 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 589 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 590 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 591 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 592 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 593 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 594 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 595 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 597 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 598 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 599 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 600 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 601 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 602 "data/maps/PetalburgCity/scripts.pory"

# 603 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 604 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 605 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 606 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 607 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 608 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 609 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 610 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 611 "data/maps/PetalburgCity/scripts.pory"

# 612 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 623 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 625 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 626 "data/maps/PetalburgCity/scripts.pory"

# 627 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 628 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 630 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 631 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 633 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 634 "data/maps/PetalburgCity/scripts.pory"

# 635 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 636 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 641 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 645 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 646 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 648 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 649 "data/maps/PetalburgCity/scripts.pory"

# 650 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 651 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 653 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 654 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 656 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 657 "data/maps/PetalburgCity/scripts.pory"

# 658 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 664 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 669 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 670 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 671 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 672 "data/maps/PetalburgCity/scripts.pory"

# 673 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 674 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 676 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 677 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 679 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 680 "data/maps/PetalburgCity/scripts.pory"

# 681 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 682 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 683 "data/maps/PetalburgCity/scripts.pory"
	end
# 684 "data/maps/PetalburgCity/scripts.pory"

# 685 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_OldRodFisherman::
# 686 "data/maps/PetalburgCity/scripts.pory"
	lock
# 687 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 688 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, PetalburgCity_EventScript_HowsFishing
# 689 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GettingItchToFish, MSGBOX_YESNO
# 690 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_EventScript_GiveOldRod
# 691 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_EventScript_NotGettingItchToFish
# 692 "data/maps/PetalburgCity/scripts.pory"
	end
# 693 "data/maps/PetalburgCity/scripts.pory"

# 694 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GiveOldRod::
# 695 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 696 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_OLD_ROD
# 697 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 698 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 699 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 700 "data/maps/PetalburgCity/scripts.pory"
	release
# 701 "data/maps/PetalburgCity/scripts.pory"
	end
# 702 "data/maps/PetalburgCity/scripts.pory"

# 703 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_NotGettingItchToFish::
# 704 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 705 "data/maps/PetalburgCity/scripts.pory"
	release
# 706 "data/maps/PetalburgCity/scripts.pory"
	end
# 707 "data/maps/PetalburgCity/scripts.pory"

# 708 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_HowsFishing::
# 709 "data/maps/PetalburgCity/scripts.pory"
	message PetalburgCity_Text_HowsYourFishing
# 710 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 711 "data/maps/PetalburgCity/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 712 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, PetalburgCity_EventScript_FishingExcellent
# 713 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, PetalburgCity_EventScript_FishingNotSoGood
# 714 "data/maps/PetalburgCity/scripts.pory"
	end
# 715 "data/maps/PetalburgCity/scripts.pory"

# 716 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_FishingExcellent::
# 717 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 718 "data/maps/PetalburgCity/scripts.pory"
	release
# 719 "data/maps/PetalburgCity/scripts.pory"
	end
# 720 "data/maps/PetalburgCity/scripts.pory"

# 721 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_FishingNotSoGood::
# 722 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FishingAdvice, MSGBOX_DEFAULT
# 723 "data/maps/PetalburgCity/scripts.pory"
	release
# 724 "data/maps/PetalburgCity/scripts.pory"
	end
# 725 "data/maps/PetalburgCity/scripts.pory"

# 726 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 727 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our Wally gone?\p"
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for Verdanturf Town\n"
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 730 "data/maps/PetalburgCity/scripts.pory"

# 731 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 733 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie trainer?\p"
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Pokémon trainers\n"
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of Gym\n"
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 738 "data/maps/PetalburgCity/scripts.pory"

# 739 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is Petalburg City's Gym.$"
# 741 "data/maps/PetalburgCity/scripts.pory"

# 742 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the Gym's sign. Look for it\n"
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a Gym.$"
# 745 "data/maps/PetalburgCity/scripts.pory"

# 746 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 747 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 748 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 749 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 750 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 752 "data/maps/PetalburgCity/scripts.pory"

# 753 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 754 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six Pokémon.\n"
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 756 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a storage\n"
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "box over a PC connection.$"
# 758 "data/maps/PetalburgCity/scripts.pory"

# 759 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City Pokémon Gym\n"
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: Norman\l"
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 763 "data/maps/PetalburgCity/scripts.pory"

# 764 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 765 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City\n"
# 766 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 767 "data/maps/PetalburgCity/scripts.pory"

# 768 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally's House$"
# 770 "data/maps/PetalburgCity/scripts.pory"

# 771 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 772 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 773 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 774 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a Pokémon trainer?$"
# 775 "data/maps/PetalburgCity/scripts.pory"

# 776 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 777 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 778 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 779 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty,\l"
# 780 "data/maps/PetalburgCity/scripts.pory"
	.string "so maybe you're a rookie trainer?$"
# 781 "data/maps/PetalburgCity/scripts.pory"

# 782 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 783 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm not sure what to make of you yet,\n"
# 784 "data/maps/PetalburgCity/scripts.pory"
	.string "but I've got a strange feeling that\l"
# 785 "data/maps/PetalburgCity/scripts.pory"
	.string "you might become exactly the type of\l"
# 786 "data/maps/PetalburgCity/scripts.pory"
	.string "trainer I'm looking for one day…\p"
# 787 "data/maps/PetalburgCity/scripts.pory"
	.string "I was planning on giving these to the\n"
# 788 "data/maps/PetalburgCity/scripts.pory"
	.string "next strong trainer I bumped into,\l"
# 789 "data/maps/PetalburgCity/scripts.pory"
	.string "but something tells me you could put\l"
# 790 "data/maps/PetalburgCity/scripts.pory"
	.string "them to even better use.\p"
# 791 "data/maps/PetalburgCity/scripts.pory"
	.string "Here, hopefully these will help you\n"
# 792 "data/maps/PetalburgCity/scripts.pory"
	.string "get to the next level.$"
# 793 "data/maps/PetalburgCity/scripts.pory"

# 794 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ExplainExpShare:
# 795 "data/maps/PetalburgCity/scripts.pory"
	.string "That Exp. Share will let your\n"
# 796 "data/maps/PetalburgCity/scripts.pory"
	.string "Pokémon that didn't participate\l"
# 797 "data/maps/PetalburgCity/scripts.pory"
	.string "in battle gain experience.\p"
# 798 "data/maps/PetalburgCity/scripts.pory"
	.string "You can use the Hex Orb to give your\n"
# 799 "data/maps/PetalburgCity/scripts.pory"
	.string "Pokémon a status condition before a\l"
# 800 "data/maps/PetalburgCity/scripts.pory"
	.string "battle begins.\p"
# 801 "data/maps/PetalburgCity/scripts.pory"
	.string "Why would you want to do that? Well, I'm\n"
# 802 "data/maps/PetalburgCity/scripts.pory"
	.string "sure you'll figure it out.\p"
# 803 "data/maps/PetalburgCity/scripts.pory"
	.string "I've taken enough of your time,\n"
# 804 "data/maps/PetalburgCity/scripts.pory"
	.string "good luck out there.$"
# 805 "data/maps/PetalburgCity/scripts.pory"

# 806 "data/maps/PetalburgCity/scripts.pory"

# 807 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GettingItchToFish:
# 808 "data/maps/PetalburgCity/scripts.pory"
	.string "This is a renowned fishing spot.\n"
# 809 "data/maps/PetalburgCity/scripts.pory"
	.string "Are you getting the itch to fish?$"
# 810 "data/maps/PetalburgCity/scripts.pory"

# 811 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GiveYouOneOfMyRods:
# 812 "data/maps/PetalburgCity/scripts.pory"
	.string "I hear you, and I like what\n"
# 813 "data/maps/PetalburgCity/scripts.pory"
	.string "you're saying!\p"
# 814 "data/maps/PetalburgCity/scripts.pory"
	.string "I'll give you one of my fishing rods.$"
# 815 "data/maps/PetalburgCity/scripts.pory"

# 816 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThrowInFishingAdvice:
# 817 "data/maps/PetalburgCity/scripts.pory"
	.string "And, as an added bonus, I'll even throw\n"
# 818 "data/maps/PetalburgCity/scripts.pory"
	.string "in a little fishing advice!\p"
# 819 "data/maps/PetalburgCity/scripts.pory"
	.string "First, you want to face the water,\n"
# 820 "data/maps/PetalburgCity/scripts.pory"
	.string "then use the rod.\p"
# 821 "data/maps/PetalburgCity/scripts.pory"
	.string "Focus your mind…\n"
# 822 "data/maps/PetalburgCity/scripts.pory"
	.string "If you get a bite, pull on the rod.\p"
# 823 "data/maps/PetalburgCity/scripts.pory"
	.string "Sometimes you can snag something\n"
# 824 "data/maps/PetalburgCity/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 825 "data/maps/PetalburgCity/scripts.pory"
	.string "you need to time the pulls on your rod\l"
# 826 "data/maps/PetalburgCity/scripts.pory"
	.string "to haul them in.$"
# 827 "data/maps/PetalburgCity/scripts.pory"

# 828 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThatsTooBadThen:
# 829 "data/maps/PetalburgCity/scripts.pory"
	.string "Oh, is that so?\n"
# 830 "data/maps/PetalburgCity/scripts.pory"
	.string "That's too bad, then.$"
# 831 "data/maps/PetalburgCity/scripts.pory"

# 832 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_HowsYourFishing:
# 833 "data/maps/PetalburgCity/scripts.pory"
	.string "Yo!\n"
# 834 "data/maps/PetalburgCity/scripts.pory"
	.string "How's your fishing?$"
# 835 "data/maps/PetalburgCity/scripts.pory"

# 836 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GreatHaulInSomeBigOnes:
# 837 "data/maps/PetalburgCity/scripts.pory"
	.string "Is that right! That's great!\n"
# 838 "data/maps/PetalburgCity/scripts.pory"
	.string "Haul in some big ones!$"
# 839 "data/maps/PetalburgCity/scripts.pory"

# 840 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FishingAdvice:
# 841 "data/maps/PetalburgCity/scripts.pory"
	.string "Oh, hey, don't get down on yourself!\n"
# 842 "data/maps/PetalburgCity/scripts.pory"
	.string "I'll give you a little fishing advice.\p"
# 843 "data/maps/PetalburgCity/scripts.pory"
	.string "First, you want to face the water,\n"
# 844 "data/maps/PetalburgCity/scripts.pory"
	.string "then use the rod.\p"
# 845 "data/maps/PetalburgCity/scripts.pory"
	.string "Focus your mind…\n"
# 846 "data/maps/PetalburgCity/scripts.pory"
	.string "If you get a bite, pull the rod.\p"
# 847 "data/maps/PetalburgCity/scripts.pory"
	.string "Sometimes you can snag something\n"
# 848 "data/maps/PetalburgCity/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 849 "data/maps/PetalburgCity/scripts.pory"
	.string "you need to time the pulls on your rod\l"
# 850 "data/maps/PetalburgCity/scripts.pory"
	.string "to haul them in.$"
