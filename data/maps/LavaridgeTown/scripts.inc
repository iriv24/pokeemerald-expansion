# 1 "data/maps/LavaridgeTown/scripts.pory"

# 2 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 7
# 3 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL, 8
# 4 "data/maps/LavaridgeTown/scripts.pory"

# 5 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts::
# 6 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 7 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
# 8 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 9 "data/maps/LavaridgeTown/scripts.pory"

# 10 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition:
# 11 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 12 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 13 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 14 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 15 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 16 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_CheckSetRivalPos
# 17 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_HideMapNamePopup
# 18 "data/maps/LavaridgeTown/scripts.pory"
	end
# 19 "data/maps/LavaridgeTown/scripts.pory"

# 20 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 21 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 22 "data/maps/LavaridgeTown/scripts.pory"
	return
# 23 "data/maps/LavaridgeTown/scripts.pory"

# 24 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos::
# 25 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 26 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
# 27 "data/maps/LavaridgeTown/scripts.pory"
	return
# 28 "data/maps/LavaridgeTown/scripts.pory"

# 29 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 30 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 11, 9
# 31 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 9, 8
# 32 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 33 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 34 "data/maps/LavaridgeTown/scripts.pory"
	return
# 35 "data/maps/LavaridgeTown/scripts.pory"

# 36 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 37 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 38 "data/maps/LavaridgeTown/scripts.pory"
	return
# 39 "data/maps/LavaridgeTown/scripts.pory"

# 40 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 41 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 42 "data/maps/LavaridgeTown/scripts.pory"
	return
# 43 "data/maps/LavaridgeTown/scripts.pory"

# 44 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame:
# 45 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveMegaRing
# 46 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 47 "data/maps/LavaridgeTown/scripts.pory"

# 48 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveMegaRing::
# 49 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 50 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 51 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
# 52 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
# 53 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 54 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 55 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
# 56 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
# 57 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
# 58 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
# 59 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 60 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveMegaRing
# 61 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveMegaRing
# 62 "data/maps/LavaridgeTown/scripts.pory"
	end
# 63 "data/maps/LavaridgeTown/scripts.pory"

# 64 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveMegaRing::
# 65 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 66 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_MEGA_RING
# 67 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainMegaRingChallengeDad, MSGBOX_DEFAULT
# 68 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 69 "data/maps/LavaridgeTown/scripts.pory"
	end
# 70 "data/maps/LavaridgeTown/scripts.pory"

# 71 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveMegaRing::
# 72 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 73 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_MEGA_RING
# 74 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainMegaRingChallengeDad, MSGBOX_DEFAULT
# 75 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 76 "data/maps/LavaridgeTown/scripts.pory"
	end
# 77 "data/maps/LavaridgeTown/scripts.pory"

# 78 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit::
# 79 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 80 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 81 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 82 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 83 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
# 84 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
# 85 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 86 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 87 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 88 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 89 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 90 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 91 "data/maps/LavaridgeTown/scripts.pory"
	end
# 92 "data/maps/LavaridgeTown/scripts.pory"

# 93 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic::
# 94 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 95 "data/maps/LavaridgeTown/scripts.pory"
	return
# 96 "data/maps/LavaridgeTown/scripts.pory"

# 97 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic::
# 98 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 99 "data/maps/LavaridgeTown/scripts.pory"
	return
# 100 "data/maps/LavaridgeTown/scripts.pory"

# 101 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer::
# 102 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 103 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 104 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 105 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 106 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 107 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 108 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 109 "data/maps/LavaridgeTown/scripts.pory"
	return
# 110 "data/maps/LavaridgeTown/scripts.pory"

# 111 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop::
# 112 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 113 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 114 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 115 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 116 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 117 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 118 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 119 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 120 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 121 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 122 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 123 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 124 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 125 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 126 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 127 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 128 "data/maps/LavaridgeTown/scripts.pory"
	return
# 129 "data/maps/LavaridgeTown/scripts.pory"

# 130 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1::
# 131 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 132 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 133 "data/maps/LavaridgeTown/scripts.pory"
	return
# 134 "data/maps/LavaridgeTown/scripts.pory"

# 135 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2::
# 136 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 137 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 138 "data/maps/LavaridgeTown/scripts.pory"
	return
# 139 "data/maps/LavaridgeTown/scripts.pory"

# 140 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1::
# 141 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 142 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 143 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 144 "data/maps/LavaridgeTown/scripts.pory"
	return
# 145 "data/maps/LavaridgeTown/scripts.pory"

# 146 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2::
# 147 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 148 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 149 "data/maps/LavaridgeTown/scripts.pory"
	return
# 150 "data/maps/LavaridgeTown/scripts.pory"

# 151 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 152 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 153 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 154 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 155 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 156 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 157 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 158 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 159 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 160 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 161 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 162 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 163 "data/maps/LavaridgeTown/scripts.pory"

# 164 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 165 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 166 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 167 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 168 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 169 "data/maps/LavaridgeTown/scripts.pory"

# 170 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 171 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 172 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 173 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 174 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 175 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 176 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 177 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 178 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 179 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 180 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 181 "data/maps/LavaridgeTown/scripts.pory"

# 182 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
# 183 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 184 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 185 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 186 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 187 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 188 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 189 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 190 "data/maps/LavaridgeTown/scripts.pory"

# 191 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 192 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 193 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 194 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 195 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 196 "data/maps/LavaridgeTown/scripts.pory"

# 197 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 198 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 199 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 200 "data/maps/LavaridgeTown/scripts.pory"

# 201 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 202 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 203 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 204 "data/maps/LavaridgeTown/scripts.pory"
	end
# 205 "data/maps/LavaridgeTown/scripts.pory"

# 206 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 207 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 208 "data/maps/LavaridgeTown/scripts.pory"
	end
# 209 "data/maps/LavaridgeTown/scripts.pory"

# 210 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 211 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 212 "data/maps/LavaridgeTown/scripts.pory"
	end
# 213 "data/maps/LavaridgeTown/scripts.pory"

# 214 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 215 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 216 "data/maps/LavaridgeTown/scripts.pory"
	end
# 217 "data/maps/LavaridgeTown/scripts.pory"

# 218 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 219 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 220 "data/maps/LavaridgeTown/scripts.pory"
	end
# 221 "data/maps/LavaridgeTown/scripts.pory"

# 222 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 223 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 224 "data/maps/LavaridgeTown/scripts.pory"
	end
# 225 "data/maps/LavaridgeTown/scripts.pory"

# 226 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 227 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 228 "data/maps/LavaridgeTown/scripts.pory"
	end
# 229 "data/maps/LavaridgeTown/scripts.pory"

# 230 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 231 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 232 "data/maps/LavaridgeTown/scripts.pory"
	end
# 233 "data/maps/LavaridgeTown/scripts.pory"

# 234 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Sandygast::
# 235 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 236 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 237 "data/maps/LavaridgeTown/scripts.pory"
	waitse
# 238 "data/maps/LavaridgeTown/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_NORMAL
# 239 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_Sandygast, MSGBOX_DEFAULT
# 240 "data/maps/LavaridgeTown/scripts.pory"
	waitmoncry
# 241 "data/maps/LavaridgeTown/scripts.pory"
	release
# 242 "data/maps/LavaridgeTown/scripts.pory"
	end
# 243 "data/maps/LavaridgeTown/scripts.pory"

# 244 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 245 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 246 "data/maps/LavaridgeTown/scripts.pory"
	end
# 247 "data/maps/LavaridgeTown/scripts.pory"

# 248 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 249 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 250 "data/maps/LavaridgeTown/scripts.pory"
	end
# 251 "data/maps/LavaridgeTown/scripts.pory"

# 252 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 253 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 254 "data/maps/LavaridgeTown/scripts.pory"
	end
# 255 "data/maps/LavaridgeTown/scripts.pory"

# 256 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MiniMarket_EventScript_Saleswoman::
# 257 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 258 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 259 "data/maps/LavaridgeTown/scripts.pory"
	message gText_HowMayIServeYou
# 260 "data/maps/LavaridgeTown/scripts.pory"
	waitmessage
# 261 "data/maps/LavaridgeTown/scripts.pory"
	tmshop LavaridgeTown_MiniMart
# 262 "data/maps/LavaridgeTown/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 263 "data/maps/LavaridgeTown/scripts.pory"
	release
# 264 "data/maps/LavaridgeTown/scripts.pory"
	end
# 265 "data/maps/LavaridgeTown/scripts.pory"

# 266 "data/maps/LavaridgeTown/scripts.pory"
	.align 2
# 267 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MiniMart:
# 268 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 269 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_TM_HYPER_VOICE
# 270 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 271 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 272 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 273 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_TM_ENERGY_BALL
# 274 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_TM_DARK_PULSE
# 275 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_NONE
# 276 "data/maps/LavaridgeTown/scripts.pory"
	release
# 277 "data/maps/LavaridgeTown/scripts.pory"
	end
# 278 "data/maps/LavaridgeTown/scripts.pory"

# 279 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis:
# 280 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hey {PLAYER}! Glad I caught you here.\p"
# 281 "data/maps/LavaridgeTown/scripts.pory"
	.string "I arrived from Petalburg a little while\n"
# 282 "data/maps/LavaridgeTown/scripts.pory"
	.string "ago to see if you'd beaten Flannery\l"
# 283 "data/maps/LavaridgeTown/scripts.pory"
	.string "yet, and look at that, great timing!\p"
# 284 "data/maps/LavaridgeTown/scripts.pory"
	.string "I just met your Dad at the Petalburg\n"
# 285 "data/maps/LavaridgeTown/scripts.pory"
	.string "Gym, and he told me that if I bumped\l"
# 286 "data/maps/LavaridgeTown/scripts.pory"
	.string "into you, I should give you this.$"
# 287 "data/maps/LavaridgeTown/scripts.pory"

# 288 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainMegaRingChallengeDad:
# 289 "data/maps/LavaridgeTown/scripts.pory"
	.string "When I spoke to him, he said to\n"
# 290 "data/maps/LavaridgeTown/scripts.pory"
	.string "give you that Mega Ring so it would be a\l"
# 291 "data/maps/LavaridgeTown/scripts.pory"
	.string "fair fight when you decided to\l"
# 292 "data/maps/LavaridgeTown/scripts.pory"
	.string "challenge him.\p"
# 293 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, that reminds me.\p"
# 294 "data/maps/LavaridgeTown/scripts.pory"
	.string "I saw Wally before coming here, he was\n"
# 295 "data/maps/LavaridgeTown/scripts.pory"
	.string "headed for the desert. If you want to\l"
# 296 "data/maps/LavaridgeTown/scripts.pory"
	.string "go there too, you'll have to get Goggles.\l"
# 297 "data/maps/LavaridgeTown/scripts.pory"
	.string "I got mine from the Winstrates Family on\l"
# 298 "data/maps/LavaridgeTown/scripts.pory"
	.string "Route 111 east of here. They should also give\l"
# 299 "data/maps/LavaridgeTown/scripts.pory"
	.string "you some Mega Stones to go with your ring.\p"
# 300 "data/maps/LavaridgeTown/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Okay, I think that's everything, I'll see\n"
# 301 "data/maps/LavaridgeTown/scripts.pory"
	.string "you around, {PLAYER}! Congrats on\l"
# 302 "data/maps/LavaridgeTown/scripts.pory"
	.string "beating Flannery, but don't get too\l"
# 303 "data/maps/LavaridgeTown/scripts.pory"
	.string "comfortable because Dawn and I are\l"
# 304 "data/maps/LavaridgeTown/scripts.pory"
	.string "training hard too!$"
# 305 "data/maps/LavaridgeTown/scripts.pory"

# 306 "data/maps/LavaridgeTown/scripts.pory"

# 307 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
# 308 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hey {PLAYER}! Glad I caught you here.\p"
# 309 "data/maps/LavaridgeTown/scripts.pory"
	.string "I arrived from Petalburg a little while\n"
# 310 "data/maps/LavaridgeTown/scripts.pory"
	.string "ago to see if you'd beaten Flannery\l"
# 311 "data/maps/LavaridgeTown/scripts.pory"
	.string "yet, and look at that, great timing!\p"
# 312 "data/maps/LavaridgeTown/scripts.pory"
	.string "I just met your Dad at the Petalburg\n"
# 313 "data/maps/LavaridgeTown/scripts.pory"
	.string "Gym, and he told me that if I bumped\l"
# 314 "data/maps/LavaridgeTown/scripts.pory"
	.string "into you, I should give you this.$"
# 315 "data/maps/LavaridgeTown/scripts.pory"

# 316 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainMegaRingChallengeDad:
# 317 "data/maps/LavaridgeTown/scripts.pory"
	.string "When I spoke to him, he said to\n"
# 318 "data/maps/LavaridgeTown/scripts.pory"
	.string "give you that Mega Ring so it would be\l"
# 319 "data/maps/LavaridgeTown/scripts.pory"
	.string "a fair fight when you decided to\l"
# 320 "data/maps/LavaridgeTown/scripts.pory"
	.string "challenge him.\p"
# 321 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, that reminds me.\p"
# 322 "data/maps/LavaridgeTown/scripts.pory"
	.string "I saw Wally before coming here, he was\n"
# 323 "data/maps/LavaridgeTown/scripts.pory"
	.string "headed for the desert. If you want to go\l"
# 324 "data/maps/LavaridgeTown/scripts.pory"
	.string "there too, you'll have to get Goggles.\l"
# 325 "data/maps/LavaridgeTown/scripts.pory"
	.string "I got mine from the Winstrates Family\l"
# 326 "data/maps/LavaridgeTown/scripts.pory"
	.string "on Route 111 east of here.\p"
# 327 "data/maps/LavaridgeTown/scripts.pory"
	.string "They should also give you some\n"
# 328 "data/maps/LavaridgeTown/scripts.pory"
	.string "Mega Stones to go with your new ring.\p"
# 329 "data/maps/LavaridgeTown/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Okay, I think that's everything, I'll see\n"
# 330 "data/maps/LavaridgeTown/scripts.pory"
	.string "you around, {PLAYER}! Congrats on\l"
# 331 "data/maps/LavaridgeTown/scripts.pory"
	.string "beating Flannery, but don't get too\l"
# 332 "data/maps/LavaridgeTown/scripts.pory"
	.string "comfortable because Dawn and I are\l"
# 333 "data/maps/LavaridgeTown/scripts.pory"
	.string "training hard too!$"
# 334 "data/maps/LavaridgeTown/scripts.pory"

# 335 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 336 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 337 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 338 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 339 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 340 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 341 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 342 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 343 "data/maps/LavaridgeTown/scripts.pory"

# 344 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 345 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 346 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 347 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 348 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 349 "data/maps/LavaridgeTown/scripts.pory"
	.string "A Pokémon nipped my backside!$"
# 350 "data/maps/LavaridgeTown/scripts.pory"

# 351 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 352 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 353 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 354 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 355 "data/maps/LavaridgeTown/scripts.pory"

# 356 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 357 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 358 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 359 "data/maps/LavaridgeTown/scripts.pory"
	.string "Gym Leader like Flannery.$"
# 360 "data/maps/LavaridgeTown/scripts.pory"

# 361 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 362 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put Pokémon in hot springs,\n"
# 363 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 364 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 365 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 366 "data/maps/LavaridgeTown/scripts.pory"

# 367 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 368 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 369 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 370 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 371 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 372 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 373 "data/maps/LavaridgeTown/scripts.pory"

# 374 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 375 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lavaridge Town\p"
# 376 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Pokémon Center Hot Springs\n"
# 377 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 378 "data/maps/LavaridgeTown/scripts.pory"

# 379 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 380 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lavaridge Town Pokémon Gym\n"
# 381 "data/maps/LavaridgeTown/scripts.pory"
	.string "Leader: Flannery\l"
# 382 "data/maps/LavaridgeTown/scripts.pory"
	.string "“One with a fiery passion that burns!”$"
# 383 "data/maps/LavaridgeTown/scripts.pory"

# 384 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 385 "data/maps/LavaridgeTown/scripts.pory"
	.string "Pokémon Herb Shop\n"
# 386 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Bitter taste--better cure!”$"
# 387 "data/maps/LavaridgeTown/scripts.pory"

# 388 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_Sandygast:
# 389 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sandygast: Sssssssss!$"

LavaridgeTown_EventScript_EggWoman::
# 393 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 394 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 395 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_LAVARIDGE_EGG, LavaridgeTown_EventScript_EggWoman_2
# 401 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge LavaridgeTown_EventScript_EggWoman_6
# 411 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EggWomanIntro, MSGBOX_YESNO
# 412 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_EventScript_EggWoman_15
LavaridgeTown_EventScript_EggWoman_14:
# 416 "data/maps/LavaridgeTown/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 417 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LavaridgeTown_EventScript_ComeBackWithYellowShard
LavaridgeTown_EventScript_EggWoman_5:
# 419 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 420 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
# 421 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 422 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 423 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedTheEgg
# 424 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 425 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_KLAWF
# 426 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge LavaridgeTown_EventScript_EggWoman_9
# 433 "data/maps/LavaridgeTown/scripts.pory"
	removeitem ITEM_YELLOW_SHARD
# 434 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_ComeBackWithMore, MSGBOX_DEFAULT
LavaridgeTown_EventScript_EggWoman_1:
# 437 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_2:
# 397 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_0
	goto LavaridgeTown_EventScript_EggWoman_1

LavaridgeTown_EventScript_EggWoman_6:
# 403 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EggWomanIntroHard, MSGBOX_YESNO
# 404 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_EventScript_EggWoman_12
	goto LavaridgeTown_EventScript_EggWoman_5

LavaridgeTown_EventScript_EggWoman_9:
# 428 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_1
# 429 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_LAVARIDGE_EGG
	goto LavaridgeTown_EventScript_EggWoman_1

LavaridgeTown_EventScript_EggWoman_12:
# 406 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_EggWomanManNo
	goto LavaridgeTown_EventScript_EggWoman_5

LavaridgeTown_EventScript_EggWoman_15:
# 414 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_EggWomanManNo
	goto LavaridgeTown_EventScript_EggWoman_14


LavaridgeTown_EventScript_EggWomanManNo::
# 443 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EggWomanDeclined, MSGBOX_DEFAULT
# 444 "data/maps/LavaridgeTown/scripts.pory"
	release
	end


LavaridgeTown_EventScript_ComeBackWithYellowShard::
# 449 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeBackWithYellowShard, MSGBOX_DEFAULT
# 450 "data/maps/LavaridgeTown/scripts.pory"
	release
	end


LavaridgeTown_EventScript_NoRoomForEgg::
# 455 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 456 "data/maps/LavaridgeTown/scripts.pory"
	release
	end


LavaridgeTown_EventScript_EggWoman_Text_0:
# 397 "data/maps/LavaridgeTown/scripts.pory"
	.string "Keep on growing!$"

LavaridgeTown_EventScript_EggWoman_Text_1:
# 428 "data/maps/LavaridgeTown/scripts.pory"
	.string "Take good care of it!$"

LavaridgeTown_EggWomanIntroHard::
# 460 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hello, trainer. I see you've\n"
	.string "found your way from Fallarbor.\p"
	.string "My old friend told me a lively\n"
	.string "youngin would arrive shortly.\p"
	.string "The road only gets steeper from\n"
	.string "here, but this Egg should help.\p"
	.string "So, do you think you can go\n"
	.string "even further?$"

LavaridgeTown_EggWomanIntro::
# 471 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hello, trainer. I have several large\n"
	.string "Eggs here with me.\p"
	.string "I am currently seeking Yellow Shards,\n"
	.string "would you be willing to exchange a\l"
	.string "Yellow Shard in exchange for one of\l"
	.string "these Eggs?$"

LavaridgeTown_EggWomanDeclined::
# 480 "data/maps/LavaridgeTown/scripts.pory"
	.string "I see. Please come back if you change\n"
	.string "your mind.$"

LavaridgeTown_Text_ComeBackWithYellowShard::
# 486 "data/maps/LavaridgeTown/scripts.pory"
	.string "It doesn't look like you have a\n"
	.string "Yellow Shard. Come back when you do.$"

LavaridgeTown_Text_NoRoomForThisEgg::
# 491 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
	.string "There's no room for this Egg…$"

LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg::
# 496 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
	.string "this Egg!$"

LavaridgeTown_Text_ReceivedTheEgg::
# 501 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the Egg.$"

LavaridgeTown_ComeBackWithMore::
# 505 "data/maps/LavaridgeTown/scripts.pory"
	.string "Please come back if you have more\n"
	.string "Yellow Shards you'd like to exchange.$"
