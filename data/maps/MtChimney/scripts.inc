# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 3 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 4 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 5 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 6 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 7 "data/maps/MtChimney/scripts.pory"

# 8 "data/maps/MtChimney/scripts.pory"

# 9 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 10 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 11 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 12 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 13 "data/maps/MtChimney/scripts.pory"

# 14 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 15 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 16 "data/maps/MtChimney/scripts.pory"
	end
# 17 "data/maps/MtChimney/scripts.pory"

# 18 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 19 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 20 "data/maps/MtChimney/scripts.pory"
	end
# 21 "data/maps/MtChimney/scripts.pory"

# 22 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 23 "data/maps/MtChimney/scripts.pory"
	lock
# 24 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 25 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 26 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 27 "data/maps/MtChimney/scripts.pory"
	closemessage
# 28 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 29 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 30 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 31 "data/maps/MtChimney/scripts.pory"
	release
# 32 "data/maps/MtChimney/scripts.pory"
	end
# 33 "data/maps/MtChimney/scripts.pory"

# 34 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 35 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 36 "data/maps/MtChimney/scripts.pory"
	return
# 37 "data/maps/MtChimney/scripts.pory"

# 38 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 39 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 40 "data/maps/MtChimney/scripts.pory"
	return
# 41 "data/maps/MtChimney/scripts.pory"

# 42 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 43 "data/maps/MtChimney/scripts.pory"
	lockall
# 44 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 45 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 46 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 47 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 48 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 49 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 50 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 51 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 52 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 53 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 54 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 55 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 56 "data/maps/MtChimney/scripts.pory"
	closemessage
# 57 "data/maps/MtChimney/scripts.pory"
	delay 30
# 58 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 60 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 61 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 62 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 63 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 64 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 65 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 12
# 66 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 67 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 68 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 69 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 70 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 71 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 72 "data/maps/MtChimney/scripts.pory"
	closemessage
# 73 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 74 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 75 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 76 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 77 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 78 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 79 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 80 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 81 "data/maps/MtChimney/scripts.pory"
	releaseall
# 82 "data/maps/MtChimney/scripts.pory"
	end
# 83 "data/maps/MtChimney/scripts.pory"

# 84 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 85 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 86 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 87 "data/maps/MtChimney/scripts.pory"
	return
# 88 "data/maps/MtChimney/scripts.pory"

# 89 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 90 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 91 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 92 "data/maps/MtChimney/scripts.pory"
	return
# 93 "data/maps/MtChimney/scripts.pory"

# 94 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 95 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 96 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 97 "data/maps/MtChimney/scripts.pory"
	return
# 98 "data/maps/MtChimney/scripts.pory"

# 99 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 100 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 101 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 102 "data/maps/MtChimney/scripts.pory"
	return
# 103 "data/maps/MtChimney/scripts.pory"

# 104 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 105 "data/maps/MtChimney/scripts.pory"
	lock
# 106 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 107 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 108 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 109 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 110 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 111 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 112 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 113 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 114 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 115 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 116 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 117 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 118 "data/maps/MtChimney/scripts.pory"
	release
# 119 "data/maps/MtChimney/scripts.pory"
	end
# 120 "data/maps/MtChimney/scripts.pory"

# 121 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 122 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 123 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 124 "data/maps/MtChimney/scripts.pory"
	release
# 125 "data/maps/MtChimney/scripts.pory"
	end
# 126 "data/maps/MtChimney/scripts.pory"

# 127 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 128 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 129 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 130 "data/maps/MtChimney/scripts.pory"
	return
# 131 "data/maps/MtChimney/scripts.pory"

# 132 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 133 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 134 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 135 "data/maps/MtChimney/scripts.pory"
	release
# 136 "data/maps/MtChimney/scripts.pory"
	end
# 137 "data/maps/MtChimney/scripts.pory"

# 138 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 139 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 140 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 141 "data/maps/MtChimney/scripts.pory"
	release
# 142 "data/maps/MtChimney/scripts.pory"
	end
# 143 "data/maps/MtChimney/scripts.pory"

# 144 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 145 "data/maps/MtChimney/scripts.pory"
	walk_up
# 146 "data/maps/MtChimney/scripts.pory"
	walk_up
# 147 "data/maps/MtChimney/scripts.pory"
	walk_up
# 148 "data/maps/MtChimney/scripts.pory"
	walk_up
# 149 "data/maps/MtChimney/scripts.pory"
	walk_up
# 150 "data/maps/MtChimney/scripts.pory"
	walk_up
# 151 "data/maps/MtChimney/scripts.pory"
	walk_right
# 152 "data/maps/MtChimney/scripts.pory"
	step_end
# 153 "data/maps/MtChimney/scripts.pory"

# 154 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 155 "data/maps/MtChimney/scripts.pory"
	walk_left
# 156 "data/maps/MtChimney/scripts.pory"
	walk_down
# 157 "data/maps/MtChimney/scripts.pory"
	walk_down
# 158 "data/maps/MtChimney/scripts.pory"
	walk_down
# 159 "data/maps/MtChimney/scripts.pory"
	walk_down
# 160 "data/maps/MtChimney/scripts.pory"
	walk_down
# 161 "data/maps/MtChimney/scripts.pory"
	walk_down
# 162 "data/maps/MtChimney/scripts.pory"
	walk_down
# 163 "data/maps/MtChimney/scripts.pory"
	step_end
# 164 "data/maps/MtChimney/scripts.pory"

# 165 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 166 "data/maps/MtChimney/scripts.pory"
	walk_up
# 167 "data/maps/MtChimney/scripts.pory"
	walk_up
# 168 "data/maps/MtChimney/scripts.pory"
	walk_up
# 169 "data/maps/MtChimney/scripts.pory"
	walk_up
# 170 "data/maps/MtChimney/scripts.pory"
	walk_up
# 171 "data/maps/MtChimney/scripts.pory"
	walk_right
# 172 "data/maps/MtChimney/scripts.pory"
	walk_right
# 173 "data/maps/MtChimney/scripts.pory"
	step_end
# 174 "data/maps/MtChimney/scripts.pory"

# 175 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 176 "data/maps/MtChimney/scripts.pory"
	walk_left
# 177 "data/maps/MtChimney/scripts.pory"
	walk_left
# 178 "data/maps/MtChimney/scripts.pory"
	walk_down
# 179 "data/maps/MtChimney/scripts.pory"
	walk_down
# 180 "data/maps/MtChimney/scripts.pory"
	walk_down
# 181 "data/maps/MtChimney/scripts.pory"
	walk_down
# 182 "data/maps/MtChimney/scripts.pory"
	walk_down
# 183 "data/maps/MtChimney/scripts.pory"
	walk_down
# 184 "data/maps/MtChimney/scripts.pory"
	walk_down
# 185 "data/maps/MtChimney/scripts.pory"
	step_end
# 186 "data/maps/MtChimney/scripts.pory"

# 187 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 188 "data/maps/MtChimney/scripts.pory"
	walk_down
# 189 "data/maps/MtChimney/scripts.pory"
	walk_down
# 190 "data/maps/MtChimney/scripts.pory"
	walk_down
# 191 "data/maps/MtChimney/scripts.pory"
	walk_down
# 192 "data/maps/MtChimney/scripts.pory"
	walk_down
# 193 "data/maps/MtChimney/scripts.pory"
	walk_left
# 194 "data/maps/MtChimney/scripts.pory"
	walk_left
# 195 "data/maps/MtChimney/scripts.pory"
	walk_down
# 196 "data/maps/MtChimney/scripts.pory"
	walk_down
# 197 "data/maps/MtChimney/scripts.pory"
	walk_down
# 198 "data/maps/MtChimney/scripts.pory"
	walk_down
# 199 "data/maps/MtChimney/scripts.pory"
	walk_left
# 200 "data/maps/MtChimney/scripts.pory"
	walk_left
# 201 "data/maps/MtChimney/scripts.pory"
	walk_left
# 202 "data/maps/MtChimney/scripts.pory"
	walk_left
# 203 "data/maps/MtChimney/scripts.pory"
	walk_left
# 204 "data/maps/MtChimney/scripts.pory"
	walk_down
# 205 "data/maps/MtChimney/scripts.pory"
	step_end
# 206 "data/maps/MtChimney/scripts.pory"

# 207 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 208 "data/maps/MtChimney/scripts.pory"
	walk_down
# 209 "data/maps/MtChimney/scripts.pory"
	walk_down
# 210 "data/maps/MtChimney/scripts.pory"
	walk_down
# 211 "data/maps/MtChimney/scripts.pory"
	walk_down
# 212 "data/maps/MtChimney/scripts.pory"
	walk_left
# 213 "data/maps/MtChimney/scripts.pory"
	walk_left
# 214 "data/maps/MtChimney/scripts.pory"
	walk_left
# 215 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	step_end
# 217 "data/maps/MtChimney/scripts.pory"

# 218 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 219 "data/maps/MtChimney/scripts.pory"
	walk_right
# 220 "data/maps/MtChimney/scripts.pory"
	walk_down
# 221 "data/maps/MtChimney/scripts.pory"
	walk_down
# 222 "data/maps/MtChimney/scripts.pory"
	walk_down
# 223 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_left
# 225 "data/maps/MtChimney/scripts.pory"
	walk_left
# 226 "data/maps/MtChimney/scripts.pory"
	walk_left
# 227 "data/maps/MtChimney/scripts.pory"
	walk_left
# 228 "data/maps/MtChimney/scripts.pory"
	walk_left
# 229 "data/maps/MtChimney/scripts.pory"
	walk_down
# 230 "data/maps/MtChimney/scripts.pory"
	walk_down
# 231 "data/maps/MtChimney/scripts.pory"
	walk_down
# 232 "data/maps/MtChimney/scripts.pory"
	walk_down
# 233 "data/maps/MtChimney/scripts.pory"
	step_end
# 234 "data/maps/MtChimney/scripts.pory"

# 235 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 236 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 237 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 238 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 239 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 240 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 241 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 242 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 243 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 244 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 245 "data/maps/MtChimney/scripts.pory"
	walk_left
# 246 "data/maps/MtChimney/scripts.pory"
	walk_left
# 247 "data/maps/MtChimney/scripts.pory"
	walk_down
# 248 "data/maps/MtChimney/scripts.pory"
	walk_down
# 249 "data/maps/MtChimney/scripts.pory"
	walk_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_left
# 251 "data/maps/MtChimney/scripts.pory"
	walk_left
# 252 "data/maps/MtChimney/scripts.pory"
	walk_down
# 253 "data/maps/MtChimney/scripts.pory"
	walk_down
# 254 "data/maps/MtChimney/scripts.pory"
	walk_left
# 255 "data/maps/MtChimney/scripts.pory"
	walk_left
# 256 "data/maps/MtChimney/scripts.pory"
	walk_left
# 257 "data/maps/MtChimney/scripts.pory"
	walk_left
# 258 "data/maps/MtChimney/scripts.pory"
	walk_left
# 259 "data/maps/MtChimney/scripts.pory"
	walk_down
# 260 "data/maps/MtChimney/scripts.pory"
	step_end
# 261 "data/maps/MtChimney/scripts.pory"

# 262 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 263 "data/maps/MtChimney/scripts.pory"
	delay_16
# 264 "data/maps/MtChimney/scripts.pory"
	delay_16
# 265 "data/maps/MtChimney/scripts.pory"
	delay_16
# 266 "data/maps/MtChimney/scripts.pory"
	walk_down
# 267 "data/maps/MtChimney/scripts.pory"
	walk_down
# 268 "data/maps/MtChimney/scripts.pory"
	walk_down
# 269 "data/maps/MtChimney/scripts.pory"
	walk_left
# 270 "data/maps/MtChimney/scripts.pory"
	walk_left
# 271 "data/maps/MtChimney/scripts.pory"
	walk_left
# 272 "data/maps/MtChimney/scripts.pory"
	walk_down
# 273 "data/maps/MtChimney/scripts.pory"
	step_end
# 274 "data/maps/MtChimney/scripts.pory"

# 275 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 276 "data/maps/MtChimney/scripts.pory"
	delay_16
# 277 "data/maps/MtChimney/scripts.pory"
	walk_left
# 278 "data/maps/MtChimney/scripts.pory"
	walk_down
# 279 "data/maps/MtChimney/scripts.pory"
	walk_down
# 280 "data/maps/MtChimney/scripts.pory"
	walk_down
# 281 "data/maps/MtChimney/scripts.pory"
	walk_down
# 282 "data/maps/MtChimney/scripts.pory"
	walk_left
# 283 "data/maps/MtChimney/scripts.pory"
	walk_left
# 284 "data/maps/MtChimney/scripts.pory"
	walk_left
# 285 "data/maps/MtChimney/scripts.pory"
	walk_left
# 286 "data/maps/MtChimney/scripts.pory"
	walk_left
# 287 "data/maps/MtChimney/scripts.pory"
	walk_down
# 288 "data/maps/MtChimney/scripts.pory"
	walk_down
# 289 "data/maps/MtChimney/scripts.pory"
	walk_down
# 290 "data/maps/MtChimney/scripts.pory"
	walk_down
# 291 "data/maps/MtChimney/scripts.pory"
	step_end
# 292 "data/maps/MtChimney/scripts.pory"

# 293 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 294 "data/maps/MtChimney/scripts.pory"
	delay_16
# 295 "data/maps/MtChimney/scripts.pory"
	walk_left
# 296 "data/maps/MtChimney/scripts.pory"
	walk_left
# 297 "data/maps/MtChimney/scripts.pory"
	walk_down
# 298 "data/maps/MtChimney/scripts.pory"
	walk_down
# 299 "data/maps/MtChimney/scripts.pory"
	walk_down
# 300 "data/maps/MtChimney/scripts.pory"
	walk_left
# 301 "data/maps/MtChimney/scripts.pory"
	walk_left
# 302 "data/maps/MtChimney/scripts.pory"
	walk_down
# 303 "data/maps/MtChimney/scripts.pory"
	walk_down
# 304 "data/maps/MtChimney/scripts.pory"
	walk_left
# 305 "data/maps/MtChimney/scripts.pory"
	walk_left
# 306 "data/maps/MtChimney/scripts.pory"
	walk_left
# 307 "data/maps/MtChimney/scripts.pory"
	walk_left
# 308 "data/maps/MtChimney/scripts.pory"
	walk_left
# 309 "data/maps/MtChimney/scripts.pory"
	walk_down
# 310 "data/maps/MtChimney/scripts.pory"
	step_end
# 311 "data/maps/MtChimney/scripts.pory"

# 312 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 313 "data/maps/MtChimney/scripts.pory"
	delay_16
# 314 "data/maps/MtChimney/scripts.pory"
	walk_down
# 315 "data/maps/MtChimney/scripts.pory"
	walk_left
# 316 "data/maps/MtChimney/scripts.pory"
	walk_left
# 317 "data/maps/MtChimney/scripts.pory"
	walk_left
# 318 "data/maps/MtChimney/scripts.pory"
	walk_left
# 319 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 320 "data/maps/MtChimney/scripts.pory"
	step_end
# 321 "data/maps/MtChimney/scripts.pory"

# 322 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 323 "data/maps/MtChimney/scripts.pory"
	walk_down
# 324 "data/maps/MtChimney/scripts.pory"
	walk_down
# 325 "data/maps/MtChimney/scripts.pory"
	walk_down
# 326 "data/maps/MtChimney/scripts.pory"
	walk_down
# 327 "data/maps/MtChimney/scripts.pory"
	walk_left
# 328 "data/maps/MtChimney/scripts.pory"
	walk_left
# 329 "data/maps/MtChimney/scripts.pory"
	walk_left
# 330 "data/maps/MtChimney/scripts.pory"
	walk_left
# 331 "data/maps/MtChimney/scripts.pory"
	walk_left
# 332 "data/maps/MtChimney/scripts.pory"
	walk_down
# 333 "data/maps/MtChimney/scripts.pory"
	walk_down
# 334 "data/maps/MtChimney/scripts.pory"
	walk_down
# 335 "data/maps/MtChimney/scripts.pory"
	walk_down
# 336 "data/maps/MtChimney/scripts.pory"
	step_end
# 337 "data/maps/MtChimney/scripts.pory"

# 338 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 339 "data/maps/MtChimney/scripts.pory"
	walk_down
# 340 "data/maps/MtChimney/scripts.pory"
	step_end
# 341 "data/maps/MtChimney/scripts.pory"

# 342 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 343 "data/maps/MtChimney/scripts.pory"
	walk_down
# 344 "data/maps/MtChimney/scripts.pory"
	walk_down
# 345 "data/maps/MtChimney/scripts.pory"
	walk_down
# 346 "data/maps/MtChimney/scripts.pory"
	walk_down
# 347 "data/maps/MtChimney/scripts.pory"
	walk_down
# 348 "data/maps/MtChimney/scripts.pory"
	walk_down
# 349 "data/maps/MtChimney/scripts.pory"
	walk_down
# 350 "data/maps/MtChimney/scripts.pory"
	step_end
# 351 "data/maps/MtChimney/scripts.pory"

# 352 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 353 "data/maps/MtChimney/scripts.pory"
	delay_16
# 354 "data/maps/MtChimney/scripts.pory"
	delay_16
# 355 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 356 "data/maps/MtChimney/scripts.pory"
	delay_16
# 357 "data/maps/MtChimney/scripts.pory"
	walk_down
# 358 "data/maps/MtChimney/scripts.pory"
	walk_down
# 359 "data/maps/MtChimney/scripts.pory"
	walk_down
# 360 "data/maps/MtChimney/scripts.pory"
	walk_down
# 361 "data/maps/MtChimney/scripts.pory"
	walk_down
# 362 "data/maps/MtChimney/scripts.pory"
	step_end
# 363 "data/maps/MtChimney/scripts.pory"

# 364 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 365 "data/maps/MtChimney/scripts.pory"
	delay_16
# 366 "data/maps/MtChimney/scripts.pory"
	delay_16
# 367 "data/maps/MtChimney/scripts.pory"
	delay_16
# 368 "data/maps/MtChimney/scripts.pory"
	delay_16
# 369 "data/maps/MtChimney/scripts.pory"
	delay_16
# 370 "data/maps/MtChimney/scripts.pory"
	delay_16
# 371 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 372 "data/maps/MtChimney/scripts.pory"
	delay_16
# 373 "data/maps/MtChimney/scripts.pory"
	walk_down
# 374 "data/maps/MtChimney/scripts.pory"
	walk_down
# 375 "data/maps/MtChimney/scripts.pory"
	step_end
# 376 "data/maps/MtChimney/scripts.pory"

# 377 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 378 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 379 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 380 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 381 "data/maps/MtChimney/scripts.pory"
	face_right
# 382 "data/maps/MtChimney/scripts.pory"
	step_end
# 383 "data/maps/MtChimney/scripts.pory"

# 384 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 385 "data/maps/MtChimney/scripts.pory"
	walk_left
# 386 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 387 "data/maps/MtChimney/scripts.pory"
	delay_16
# 388 "data/maps/MtChimney/scripts.pory"
	step_end
# 389 "data/maps/MtChimney/scripts.pory"

# 390 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 391 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 392 "data/maps/MtChimney/scripts.pory"
	end
# 393 "data/maps/MtChimney/scripts.pory"

# 394 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 395 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 396 "data/maps/MtChimney/scripts.pory"
	end
# 397 "data/maps/MtChimney/scripts.pory"

# 398 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 399 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 400 "data/maps/MtChimney/scripts.pory"
	end
# 401 "data/maps/MtChimney/scripts.pory"

# 402 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 403 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 404 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 405 "data/maps/MtChimney/scripts.pory"
	end
# 406 "data/maps/MtChimney/scripts.pory"

# 407 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 408 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 409 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 410 "data/maps/MtChimney/scripts.pory"
	end
# 411 "data/maps/MtChimney/scripts.pory"

# 412 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 413 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 414 "data/maps/MtChimney/scripts.pory"
	end
# 415 "data/maps/MtChimney/scripts.pory"

# 416 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 417 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 418 "data/maps/MtChimney/scripts.pory"
	end
# 419 "data/maps/MtChimney/scripts.pory"

# 420 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 421 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 422 "data/maps/MtChimney/scripts.pory"
	end
# 423 "data/maps/MtChimney/scripts.pory"

# 424 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 425 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 426 "data/maps/MtChimney/scripts.pory"
	end
# 427 "data/maps/MtChimney/scripts.pory"

# 428 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 429 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 430 "data/maps/MtChimney/scripts.pory"
	end
# 431 "data/maps/MtChimney/scripts.pory"

# 432 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 433 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 434 "data/maps/MtChimney/scripts.pory"
	end
# 435 "data/maps/MtChimney/scripts.pory"

# 436 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 437 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 438 "data/maps/MtChimney/scripts.pory"
	end
# 439 "data/maps/MtChimney/scripts.pory"

# 440 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 441 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 442 "data/maps/MtChimney/scripts.pory"
	end
# 443 "data/maps/MtChimney/scripts.pory"

# 444 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 445 "data/maps/MtChimney/scripts.pory"
	lockall
# 446 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 447 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 448 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 449 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 450 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 451 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 452 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 453 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 454 "data/maps/MtChimney/scripts.pory"
	releaseall
# 455 "data/maps/MtChimney/scripts.pory"
	end
# 456 "data/maps/MtChimney/scripts.pory"

# 457 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 458 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 459 "data/maps/MtChimney/scripts.pory"
	releaseall
# 460 "data/maps/MtChimney/scripts.pory"
	end
# 461 "data/maps/MtChimney/scripts.pory"

# 462 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 463 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 464 "data/maps/MtChimney/scripts.pory"
	releaseall
# 465 "data/maps/MtChimney/scripts.pory"
	end
# 466 "data/maps/MtChimney/scripts.pory"

# 467 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 468 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 469 "data/maps/MtChimney/scripts.pory"
	releaseall
# 470 "data/maps/MtChimney/scripts.pory"
	end
# 471 "data/maps/MtChimney/scripts.pory"

# 472 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 473 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 474 "data/maps/MtChimney/scripts.pory"
	end
# 475 "data/maps/MtChimney/scripts.pory"

# 476 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 477 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 478 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 479 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 480 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 481 "data/maps/MtChimney/scripts.pory"
	release
# 482 "data/maps/MtChimney/scripts.pory"
	end
# 483 "data/maps/MtChimney/scripts.pory"

# 484 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 485 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 486 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 487 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 488 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 489 "data/maps/MtChimney/scripts.pory"
	release
# 490 "data/maps/MtChimney/scripts.pory"
	end
# 491 "data/maps/MtChimney/scripts.pory"

# 492 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 493 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 494 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 495 "data/maps/MtChimney/scripts.pory"
	end
# 496 "data/maps/MtChimney/scripts.pory"

# 497 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 498 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 499 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 500 "data/maps/MtChimney/scripts.pory"
	end
# 501 "data/maps/MtChimney/scripts.pory"

# 502 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 503 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 504 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 505 "data/maps/MtChimney/scripts.pory"
	end
# 506 "data/maps/MtChimney/scripts.pory"

# 507 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 508 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 509 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 510 "data/maps/MtChimney/scripts.pory"
	end
# 511 "data/maps/MtChimney/scripts.pory"

# 512 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 513 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 514 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 515 "data/maps/MtChimney/scripts.pory"
	end
# 516 "data/maps/MtChimney/scripts.pory"

# 517 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 518 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 519 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 520 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 521 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 522 "data/maps/MtChimney/scripts.pory"
	release
# 523 "data/maps/MtChimney/scripts.pory"
	end
# 524 "data/maps/MtChimney/scripts.pory"

# 525 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 526 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 527 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 528 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 529 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 530 "data/maps/MtChimney/scripts.pory"
	release
# 531 "data/maps/MtChimney/scripts.pory"
	end
# 532 "data/maps/MtChimney/scripts.pory"

# 533 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 534 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 535 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 536 "data/maps/MtChimney/scripts.pory"
	end
# 537 "data/maps/MtChimney/scripts.pory"

# 538 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 539 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 540 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 541 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 542 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 543 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 544 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 545 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 546 "data/maps/MtChimney/scripts.pory"

# 547 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 548 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 549 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 550 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 551 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 552 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 553 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 554 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 555 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 556 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 557 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 558 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 559 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 561 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 562 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 563 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 564 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 566 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 571 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 572 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 574 "data/maps/MtChimney/scripts.pory"

# 575 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 576 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 577 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 578 "data/maps/MtChimney/scripts.pory"

# 579 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 580 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 581 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 582 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 583 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 584 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 585 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 586 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 587 "data/maps/MtChimney/scripts.pory"

# 588 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 589 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 590 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 591 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 592 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 593 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 594 "data/maps/MtChimney/scripts.pory"

# 595 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 596 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 597 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 598 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 599 "data/maps/MtChimney/scripts.pory"

# 600 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 601 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 602 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 603 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 604 "data/maps/MtChimney/scripts.pory"

# 605 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 606 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 607 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 608 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 609 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 610 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 611 "data/maps/MtChimney/scripts.pory"

# 612 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 613 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 614 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 615 "data/maps/MtChimney/scripts.pory"

# 616 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 617 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 618 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 619 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 620 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 621 "data/maps/MtChimney/scripts.pory"

# 622 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 623 "data/maps/MtChimney/scripts.pory"
	.string "Me and this idiot grunt will stop you\n"
# 624 "data/maps/MtChimney/scripts.pory"
	.string "right here!$"
# 625 "data/maps/MtChimney/scripts.pory"

# 626 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 627 "data/maps/MtChimney/scripts.pory"
	.string "That idiot weighed me down…$"
# 628 "data/maps/MtChimney/scripts.pory"

# 629 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 630 "data/maps/MtChimney/scripts.pory"
	.string "It's fine.\n"
# 631 "data/maps/MtChimney/scripts.pory"
	.string "You won't get past Tabitha.$"
# 632 "data/maps/MtChimney/scripts.pory"

# 633 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 634 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 635 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 636 "data/maps/MtChimney/scripts.pory"

# 637 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 638 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 639 "data/maps/MtChimney/scripts.pory"

# 640 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 641 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 642 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 643 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 644 "data/maps/MtChimney/scripts.pory"

# 645 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 646 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 647 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 648 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 649 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 650 "data/maps/MtChimney/scripts.pory"

# 651 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 652 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 653 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 654 "data/maps/MtChimney/scripts.pory"

# 655 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 656 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 657 "data/maps/MtChimney/scripts.pory"

# 658 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 659 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 660 "data/maps/MtChimney/scripts.pory"

# 661 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 662 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 663 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 664 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 665 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 666 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 667 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 668 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 669 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 670 "data/maps/MtChimney/scripts.pory"

# 671 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 672 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 673 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 674 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 675 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 676 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 677 "data/maps/MtChimney/scripts.pory"

# 678 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 679 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 686 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 687 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 688 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 689 "data/maps/MtChimney/scripts.pory"

# 690 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 691 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 693 "data/maps/MtChimney/scripts.pory"

# 694 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 695 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 696 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 697 "data/maps/MtChimney/scripts.pory"

# 698 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 699 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 702 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 703 "data/maps/MtChimney/scripts.pory"

# 704 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 705 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 706 "data/maps/MtChimney/scripts.pory"

# 707 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 708 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 709 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 710 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 711 "data/maps/MtChimney/scripts.pory"

# 712 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 713 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 714 "data/maps/MtChimney/scripts.pory"

# 715 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 716 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 717 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 718 "data/maps/MtChimney/scripts.pory"

# 719 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 720 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 721 "data/maps/MtChimney/scripts.pory"

# 722 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 723 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 724 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 725 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 726 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 727 "data/maps/MtChimney/scripts.pory"

# 728 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 729 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 730 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 731 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 732 "data/maps/MtChimney/scripts.pory"

# 733 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 734 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 735 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 736 "data/maps/MtChimney/scripts.pory"

# 737 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 738 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 739 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 740 "data/maps/MtChimney/scripts.pory"

# 741 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 742 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 743 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 744 "data/maps/MtChimney/scripts.pory"

# 745 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 746 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 747 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 748 "data/maps/MtChimney/scripts.pory"

# 749 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 750 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 751 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 752 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 753 "data/maps/MtChimney/scripts.pory"

# 754 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 755 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 756 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 757 "data/maps/MtChimney/scripts.pory"

# 758 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 759 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 760 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 761 "data/maps/MtChimney/scripts.pory"

# 762 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 763 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 764 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 765 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 766 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 767 "data/maps/MtChimney/scripts.pory"

# 768 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 769 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 770 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 771 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 772 "data/maps/MtChimney/scripts.pory"

# 773 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 774 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 775 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 776 "data/maps/MtChimney/scripts.pory"

# 777 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 778 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 779 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 780 "data/maps/MtChimney/scripts.pory"

# 781 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 782 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 783 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 784 "data/maps/MtChimney/scripts.pory"

# 785 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 786 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 787 "data/maps/MtChimney/scripts.pory"

# 788 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 789 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 790 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 791 "data/maps/MtChimney/scripts.pory"

# 792 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 793 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 794 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 795 "data/maps/MtChimney/scripts.pory"

# 796 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 797 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 798 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 799 "data/maps/MtChimney/scripts.pory"

# 800 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 801 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 802 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 803 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 804 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 805 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 806 "data/maps/MtChimney/scripts.pory"

# 807 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 808 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 809 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 810 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 811 "data/maps/MtChimney/scripts.pory"

# 812 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 813 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 814 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 815 "data/maps/MtChimney/scripts.pory"

# 816 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 817 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 820 "data/maps/MtChimney/scripts.pory"

# 821 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 822 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 824 "data/maps/MtChimney/scripts.pory"

# 825 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 826 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 827 "data/maps/MtChimney/scripts.pory"

# 828 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 829 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 830 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 831 "data/maps/MtChimney/scripts.pory"

# 832 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 833 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 834 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 835 "data/maps/MtChimney/scripts.pory"

# 836 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 837 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 838 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 839 "data/maps/MtChimney/scripts.pory"

# 840 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 841 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 842 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 843 "data/maps/MtChimney/scripts.pory"

# 844 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 845 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 846 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
