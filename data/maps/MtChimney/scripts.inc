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
.set LOCALID_DRAKE, 31
# 8 "data/maps/MtChimney/scripts.pory"

# 9 "data/maps/MtChimney/scripts.pory"

# 10 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 11 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 12 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 13 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 14 "data/maps/MtChimney/scripts.pory"

# 15 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 16 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 17 "data/maps/MtChimney/scripts.pory"
	end
# 18 "data/maps/MtChimney/scripts.pory"

# 19 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 20 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 21 "data/maps/MtChimney/scripts.pory"
	end
# 22 "data/maps/MtChimney/scripts.pory"

# 23 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 24 "data/maps/MtChimney/scripts.pory"
	lock
# 25 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 26 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 27 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 28 "data/maps/MtChimney/scripts.pory"
	closemessage
# 29 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 30 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 31 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 32 "data/maps/MtChimney/scripts.pory"
	release
# 33 "data/maps/MtChimney/scripts.pory"
	end
# 34 "data/maps/MtChimney/scripts.pory"

# 35 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 36 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 37 "data/maps/MtChimney/scripts.pory"
	return
# 38 "data/maps/MtChimney/scripts.pory"

# 39 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 40 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 41 "data/maps/MtChimney/scripts.pory"
	return
# 42 "data/maps/MtChimney/scripts.pory"

# 43 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 44 "data/maps/MtChimney/scripts.pory"
	lockall
# 45 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 46 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 47 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 48 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 49 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 50 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 51 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 52 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 53 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 54 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 55 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 56 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 57 "data/maps/MtChimney/scripts.pory"
	closemessage
# 58 "data/maps/MtChimney/scripts.pory"
	delay 30
# 59 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 61 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 62 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 63 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 64 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 65 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 66 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_DRAKE, 10, 12
# 67 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_DRAKE
# 68 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 69 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 70 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 71 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 72 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 73 "data/maps/MtChimney/scripts.pory"
	closemessage
# 74 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 75 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 76 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_DRAKE
# 77 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 78 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 79 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 80 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 81 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 82 "data/maps/MtChimney/scripts.pory"
	releaseall
# 83 "data/maps/MtChimney/scripts.pory"
	end
# 84 "data/maps/MtChimney/scripts.pory"

# 85 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 86 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_DRAKE, MtChimney_Movement_ArchieApproachPlayerEast
# 87 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 88 "data/maps/MtChimney/scripts.pory"
	return
# 89 "data/maps/MtChimney/scripts.pory"

# 90 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 91 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_DRAKE, MtChimney_Movement_ArchieApproachPlayerNorth
# 92 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 93 "data/maps/MtChimney/scripts.pory"
	return
# 94 "data/maps/MtChimney/scripts.pory"

# 95 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 96 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_DRAKE, MtChimney_Movement_ArchieExitEast
# 97 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtChimney/scripts.pory"
	return
# 99 "data/maps/MtChimney/scripts.pory"

# 100 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 101 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_DRAKE, MtChimney_Movement_ArchieExitNorth
# 102 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 103 "data/maps/MtChimney/scripts.pory"
	return
# 104 "data/maps/MtChimney/scripts.pory"

# 105 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 106 "data/maps/MtChimney/scripts.pory"
	lock
# 107 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 108 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 109 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 110 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 111 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 112 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 113 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 114 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 115 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 116 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 117 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 118 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 119 "data/maps/MtChimney/scripts.pory"
	release
# 120 "data/maps/MtChimney/scripts.pory"
	end
# 121 "data/maps/MtChimney/scripts.pory"

# 122 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 123 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 124 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 125 "data/maps/MtChimney/scripts.pory"
	release
# 126 "data/maps/MtChimney/scripts.pory"
	end
# 127 "data/maps/MtChimney/scripts.pory"

# 128 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 129 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 130 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 131 "data/maps/MtChimney/scripts.pory"
	return
# 132 "data/maps/MtChimney/scripts.pory"

# 133 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 134 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 135 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 136 "data/maps/MtChimney/scripts.pory"
	release
# 137 "data/maps/MtChimney/scripts.pory"
	end
# 138 "data/maps/MtChimney/scripts.pory"

# 139 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 140 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 141 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 142 "data/maps/MtChimney/scripts.pory"
	release
# 143 "data/maps/MtChimney/scripts.pory"
	end
# 144 "data/maps/MtChimney/scripts.pory"

# 145 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
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
	walk_up
# 152 "data/maps/MtChimney/scripts.pory"
	walk_right
# 153 "data/maps/MtChimney/scripts.pory"
	step_end
# 154 "data/maps/MtChimney/scripts.pory"

# 155 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 156 "data/maps/MtChimney/scripts.pory"
	walk_left
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
	walk_down
# 164 "data/maps/MtChimney/scripts.pory"
	step_end
# 165 "data/maps/MtChimney/scripts.pory"

# 166 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 167 "data/maps/MtChimney/scripts.pory"
	walk_up
# 168 "data/maps/MtChimney/scripts.pory"
	walk_up
# 169 "data/maps/MtChimney/scripts.pory"
	walk_up
# 170 "data/maps/MtChimney/scripts.pory"
	walk_up
# 171 "data/maps/MtChimney/scripts.pory"
	walk_up
# 172 "data/maps/MtChimney/scripts.pory"
	walk_right
# 173 "data/maps/MtChimney/scripts.pory"
	walk_right
# 174 "data/maps/MtChimney/scripts.pory"
	step_end
# 175 "data/maps/MtChimney/scripts.pory"

# 176 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 177 "data/maps/MtChimney/scripts.pory"
	walk_left
# 178 "data/maps/MtChimney/scripts.pory"
	walk_left
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
	walk_down
# 186 "data/maps/MtChimney/scripts.pory"
	step_end
# 187 "data/maps/MtChimney/scripts.pory"

# 188 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 189 "data/maps/MtChimney/scripts.pory"
	walk_down
# 190 "data/maps/MtChimney/scripts.pory"
	walk_down
# 191 "data/maps/MtChimney/scripts.pory"
	walk_down
# 192 "data/maps/MtChimney/scripts.pory"
	walk_down
# 193 "data/maps/MtChimney/scripts.pory"
	walk_down
# 194 "data/maps/MtChimney/scripts.pory"
	walk_left
# 195 "data/maps/MtChimney/scripts.pory"
	walk_left
# 196 "data/maps/MtChimney/scripts.pory"
	walk_down
# 197 "data/maps/MtChimney/scripts.pory"
	walk_down
# 198 "data/maps/MtChimney/scripts.pory"
	walk_down
# 199 "data/maps/MtChimney/scripts.pory"
	walk_down
# 200 "data/maps/MtChimney/scripts.pory"
	walk_left
# 201 "data/maps/MtChimney/scripts.pory"
	walk_left
# 202 "data/maps/MtChimney/scripts.pory"
	walk_left
# 203 "data/maps/MtChimney/scripts.pory"
	walk_left
# 204 "data/maps/MtChimney/scripts.pory"
	walk_left
# 205 "data/maps/MtChimney/scripts.pory"
	walk_down
# 206 "data/maps/MtChimney/scripts.pory"
	step_end
# 207 "data/maps/MtChimney/scripts.pory"

# 208 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 209 "data/maps/MtChimney/scripts.pory"
	walk_down
# 210 "data/maps/MtChimney/scripts.pory"
	walk_down
# 211 "data/maps/MtChimney/scripts.pory"
	walk_down
# 212 "data/maps/MtChimney/scripts.pory"
	walk_down
# 213 "data/maps/MtChimney/scripts.pory"
	walk_left
# 214 "data/maps/MtChimney/scripts.pory"
	walk_left
# 215 "data/maps/MtChimney/scripts.pory"
	walk_left
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 217 "data/maps/MtChimney/scripts.pory"
	step_end
# 218 "data/maps/MtChimney/scripts.pory"

# 219 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 220 "data/maps/MtChimney/scripts.pory"
	walk_right
# 221 "data/maps/MtChimney/scripts.pory"
	walk_down
# 222 "data/maps/MtChimney/scripts.pory"
	walk_down
# 223 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 225 "data/maps/MtChimney/scripts.pory"
	walk_left
# 226 "data/maps/MtChimney/scripts.pory"
	walk_left
# 227 "data/maps/MtChimney/scripts.pory"
	walk_left
# 228 "data/maps/MtChimney/scripts.pory"
	walk_left
# 229 "data/maps/MtChimney/scripts.pory"
	walk_left
# 230 "data/maps/MtChimney/scripts.pory"
	walk_down
# 231 "data/maps/MtChimney/scripts.pory"
	walk_down
# 232 "data/maps/MtChimney/scripts.pory"
	walk_down
# 233 "data/maps/MtChimney/scripts.pory"
	walk_down
# 234 "data/maps/MtChimney/scripts.pory"
	step_end
# 235 "data/maps/MtChimney/scripts.pory"

# 236 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
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
	walk_fast_down
# 246 "data/maps/MtChimney/scripts.pory"
	walk_left
# 247 "data/maps/MtChimney/scripts.pory"
	walk_left
# 248 "data/maps/MtChimney/scripts.pory"
	walk_down
# 249 "data/maps/MtChimney/scripts.pory"
	walk_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_left
# 252 "data/maps/MtChimney/scripts.pory"
	walk_left
# 253 "data/maps/MtChimney/scripts.pory"
	walk_down
# 254 "data/maps/MtChimney/scripts.pory"
	walk_down
# 255 "data/maps/MtChimney/scripts.pory"
	walk_left
# 256 "data/maps/MtChimney/scripts.pory"
	walk_left
# 257 "data/maps/MtChimney/scripts.pory"
	walk_left
# 258 "data/maps/MtChimney/scripts.pory"
	walk_left
# 259 "data/maps/MtChimney/scripts.pory"
	walk_left
# 260 "data/maps/MtChimney/scripts.pory"
	walk_down
# 261 "data/maps/MtChimney/scripts.pory"
	step_end
# 262 "data/maps/MtChimney/scripts.pory"

# 263 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 264 "data/maps/MtChimney/scripts.pory"
	delay_16
# 265 "data/maps/MtChimney/scripts.pory"
	delay_16
# 266 "data/maps/MtChimney/scripts.pory"
	delay_16
# 267 "data/maps/MtChimney/scripts.pory"
	walk_down
# 268 "data/maps/MtChimney/scripts.pory"
	walk_down
# 269 "data/maps/MtChimney/scripts.pory"
	walk_down
# 270 "data/maps/MtChimney/scripts.pory"
	walk_left
# 271 "data/maps/MtChimney/scripts.pory"
	walk_left
# 272 "data/maps/MtChimney/scripts.pory"
	walk_left
# 273 "data/maps/MtChimney/scripts.pory"
	walk_down
# 274 "data/maps/MtChimney/scripts.pory"
	step_end
# 275 "data/maps/MtChimney/scripts.pory"

# 276 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 277 "data/maps/MtChimney/scripts.pory"
	delay_16
# 278 "data/maps/MtChimney/scripts.pory"
	walk_left
# 279 "data/maps/MtChimney/scripts.pory"
	walk_down
# 280 "data/maps/MtChimney/scripts.pory"
	walk_down
# 281 "data/maps/MtChimney/scripts.pory"
	walk_down
# 282 "data/maps/MtChimney/scripts.pory"
	walk_down
# 283 "data/maps/MtChimney/scripts.pory"
	walk_left
# 284 "data/maps/MtChimney/scripts.pory"
	walk_left
# 285 "data/maps/MtChimney/scripts.pory"
	walk_left
# 286 "data/maps/MtChimney/scripts.pory"
	walk_left
# 287 "data/maps/MtChimney/scripts.pory"
	walk_left
# 288 "data/maps/MtChimney/scripts.pory"
	walk_down
# 289 "data/maps/MtChimney/scripts.pory"
	walk_down
# 290 "data/maps/MtChimney/scripts.pory"
	walk_down
# 291 "data/maps/MtChimney/scripts.pory"
	walk_down
# 292 "data/maps/MtChimney/scripts.pory"
	step_end
# 293 "data/maps/MtChimney/scripts.pory"

# 294 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 295 "data/maps/MtChimney/scripts.pory"
	delay_16
# 296 "data/maps/MtChimney/scripts.pory"
	walk_left
# 297 "data/maps/MtChimney/scripts.pory"
	walk_left
# 298 "data/maps/MtChimney/scripts.pory"
	walk_down
# 299 "data/maps/MtChimney/scripts.pory"
	walk_down
# 300 "data/maps/MtChimney/scripts.pory"
	walk_down
# 301 "data/maps/MtChimney/scripts.pory"
	walk_left
# 302 "data/maps/MtChimney/scripts.pory"
	walk_left
# 303 "data/maps/MtChimney/scripts.pory"
	walk_down
# 304 "data/maps/MtChimney/scripts.pory"
	walk_down
# 305 "data/maps/MtChimney/scripts.pory"
	walk_left
# 306 "data/maps/MtChimney/scripts.pory"
	walk_left
# 307 "data/maps/MtChimney/scripts.pory"
	walk_left
# 308 "data/maps/MtChimney/scripts.pory"
	walk_left
# 309 "data/maps/MtChimney/scripts.pory"
	walk_left
# 310 "data/maps/MtChimney/scripts.pory"
	walk_down
# 311 "data/maps/MtChimney/scripts.pory"
	step_end
# 312 "data/maps/MtChimney/scripts.pory"

# 313 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 314 "data/maps/MtChimney/scripts.pory"
	delay_16
# 315 "data/maps/MtChimney/scripts.pory"
	walk_down
# 316 "data/maps/MtChimney/scripts.pory"
	walk_left
# 317 "data/maps/MtChimney/scripts.pory"
	walk_left
# 318 "data/maps/MtChimney/scripts.pory"
	walk_left
# 319 "data/maps/MtChimney/scripts.pory"
	walk_left
# 320 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 321 "data/maps/MtChimney/scripts.pory"
	step_end
# 322 "data/maps/MtChimney/scripts.pory"

# 323 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 324 "data/maps/MtChimney/scripts.pory"
	walk_down
# 325 "data/maps/MtChimney/scripts.pory"
	walk_down
# 326 "data/maps/MtChimney/scripts.pory"
	walk_down
# 327 "data/maps/MtChimney/scripts.pory"
	walk_down
# 328 "data/maps/MtChimney/scripts.pory"
	walk_left
# 329 "data/maps/MtChimney/scripts.pory"
	walk_left
# 330 "data/maps/MtChimney/scripts.pory"
	walk_left
# 331 "data/maps/MtChimney/scripts.pory"
	walk_left
# 332 "data/maps/MtChimney/scripts.pory"
	walk_left
# 333 "data/maps/MtChimney/scripts.pory"
	walk_down
# 334 "data/maps/MtChimney/scripts.pory"
	walk_down
# 335 "data/maps/MtChimney/scripts.pory"
	walk_down
# 336 "data/maps/MtChimney/scripts.pory"
	walk_down
# 337 "data/maps/MtChimney/scripts.pory"
	step_end
# 338 "data/maps/MtChimney/scripts.pory"

# 339 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 340 "data/maps/MtChimney/scripts.pory"
	walk_down
# 341 "data/maps/MtChimney/scripts.pory"
	step_end
# 342 "data/maps/MtChimney/scripts.pory"

# 343 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
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
	walk_down
# 351 "data/maps/MtChimney/scripts.pory"
	step_end
# 352 "data/maps/MtChimney/scripts.pory"

# 353 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 354 "data/maps/MtChimney/scripts.pory"
	delay_16
# 355 "data/maps/MtChimney/scripts.pory"
	delay_16
# 356 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 357 "data/maps/MtChimney/scripts.pory"
	delay_16
# 358 "data/maps/MtChimney/scripts.pory"
	walk_down
# 359 "data/maps/MtChimney/scripts.pory"
	walk_down
# 360 "data/maps/MtChimney/scripts.pory"
	walk_down
# 361 "data/maps/MtChimney/scripts.pory"
	walk_down
# 362 "data/maps/MtChimney/scripts.pory"
	walk_down
# 363 "data/maps/MtChimney/scripts.pory"
	step_end
# 364 "data/maps/MtChimney/scripts.pory"

# 365 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
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
	delay_16
# 372 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 373 "data/maps/MtChimney/scripts.pory"
	delay_16
# 374 "data/maps/MtChimney/scripts.pory"
	walk_down
# 375 "data/maps/MtChimney/scripts.pory"
	walk_down
# 376 "data/maps/MtChimney/scripts.pory"
	step_end
# 377 "data/maps/MtChimney/scripts.pory"

# 378 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 379 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 380 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 381 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 382 "data/maps/MtChimney/scripts.pory"
	face_right
# 383 "data/maps/MtChimney/scripts.pory"
	step_end
# 384 "data/maps/MtChimney/scripts.pory"

# 385 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 386 "data/maps/MtChimney/scripts.pory"
	walk_left
# 387 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 388 "data/maps/MtChimney/scripts.pory"
	delay_16
# 389 "data/maps/MtChimney/scripts.pory"
	step_end
# 390 "data/maps/MtChimney/scripts.pory"

# 391 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 392 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 393 "data/maps/MtChimney/scripts.pory"
	end
# 394 "data/maps/MtChimney/scripts.pory"

# 395 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 396 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 397 "data/maps/MtChimney/scripts.pory"
	end
# 398 "data/maps/MtChimney/scripts.pory"

# 399 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 400 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 401 "data/maps/MtChimney/scripts.pory"
	end
# 402 "data/maps/MtChimney/scripts.pory"

# 403 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 404 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 405 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 406 "data/maps/MtChimney/scripts.pory"
	end
# 407 "data/maps/MtChimney/scripts.pory"

# 408 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 409 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 410 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 411 "data/maps/MtChimney/scripts.pory"
	end
# 412 "data/maps/MtChimney/scripts.pory"

# 413 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 414 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 415 "data/maps/MtChimney/scripts.pory"
	end
# 416 "data/maps/MtChimney/scripts.pory"

# 417 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 418 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 419 "data/maps/MtChimney/scripts.pory"
	end
# 420 "data/maps/MtChimney/scripts.pory"

# 421 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 422 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 423 "data/maps/MtChimney/scripts.pory"
	end
# 424 "data/maps/MtChimney/scripts.pory"

# 425 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 426 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 427 "data/maps/MtChimney/scripts.pory"
	end
# 428 "data/maps/MtChimney/scripts.pory"

# 429 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 430 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 431 "data/maps/MtChimney/scripts.pory"
	end
# 432 "data/maps/MtChimney/scripts.pory"

# 433 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 434 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 435 "data/maps/MtChimney/scripts.pory"
	end
# 436 "data/maps/MtChimney/scripts.pory"

# 437 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 438 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 439 "data/maps/MtChimney/scripts.pory"
	end
# 440 "data/maps/MtChimney/scripts.pory"

# 441 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 442 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 443 "data/maps/MtChimney/scripts.pory"
	end
# 444 "data/maps/MtChimney/scripts.pory"

# 445 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 446 "data/maps/MtChimney/scripts.pory"
	lockall
# 447 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 448 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 449 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 450 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 451 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 452 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 453 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 454 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 455 "data/maps/MtChimney/scripts.pory"
	releaseall
# 456 "data/maps/MtChimney/scripts.pory"
	end
# 457 "data/maps/MtChimney/scripts.pory"

# 458 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 459 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 460 "data/maps/MtChimney/scripts.pory"
	releaseall
# 461 "data/maps/MtChimney/scripts.pory"
	end
# 462 "data/maps/MtChimney/scripts.pory"

# 463 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 464 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 465 "data/maps/MtChimney/scripts.pory"
	releaseall
# 466 "data/maps/MtChimney/scripts.pory"
	end
# 467 "data/maps/MtChimney/scripts.pory"

# 468 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 469 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 470 "data/maps/MtChimney/scripts.pory"
	releaseall
# 471 "data/maps/MtChimney/scripts.pory"
	end
# 472 "data/maps/MtChimney/scripts.pory"

# 473 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 474 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 475 "data/maps/MtChimney/scripts.pory"
	end
# 476 "data/maps/MtChimney/scripts.pory"

# 477 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 478 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 479 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 480 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 481 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 482 "data/maps/MtChimney/scripts.pory"
	release
# 483 "data/maps/MtChimney/scripts.pory"
	end
# 484 "data/maps/MtChimney/scripts.pory"

# 485 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 486 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 487 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 488 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 489 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 490 "data/maps/MtChimney/scripts.pory"
	release
# 491 "data/maps/MtChimney/scripts.pory"
	end
# 492 "data/maps/MtChimney/scripts.pory"

# 493 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 494 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 495 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 496 "data/maps/MtChimney/scripts.pory"
	end
# 497 "data/maps/MtChimney/scripts.pory"

# 498 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 499 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 500 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 501 "data/maps/MtChimney/scripts.pory"
	end
# 502 "data/maps/MtChimney/scripts.pory"

# 503 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 504 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 505 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 506 "data/maps/MtChimney/scripts.pory"
	end
# 507 "data/maps/MtChimney/scripts.pory"

# 508 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 509 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 510 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 511 "data/maps/MtChimney/scripts.pory"
	end
# 512 "data/maps/MtChimney/scripts.pory"

# 513 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 514 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 515 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 516 "data/maps/MtChimney/scripts.pory"
	end
# 517 "data/maps/MtChimney/scripts.pory"

# 518 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 519 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 520 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 521 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 522 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 523 "data/maps/MtChimney/scripts.pory"
	release
# 524 "data/maps/MtChimney/scripts.pory"
	end
# 525 "data/maps/MtChimney/scripts.pory"

# 526 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 527 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 528 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 529 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 530 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 531 "data/maps/MtChimney/scripts.pory"
	release
# 532 "data/maps/MtChimney/scripts.pory"
	end
# 533 "data/maps/MtChimney/scripts.pory"

# 534 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 535 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 536 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 537 "data/maps/MtChimney/scripts.pory"
	end
# 538 "data/maps/MtChimney/scripts.pory"

# 539 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 540 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 541 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 542 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 543 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 544 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 545 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 546 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 547 "data/maps/MtChimney/scripts.pory"

# 548 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 549 "data/maps/MtChimney/scripts.pory"
	.string "Maxie: Hm?\n"
# 550 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 551 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 552 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 553 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 554 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 555 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 556 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 557 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 558 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 559 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 561 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 562 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 563 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 564 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 566 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 571 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 572 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 575 "data/maps/MtChimney/scripts.pory"

# 576 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 577 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 578 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 579 "data/maps/MtChimney/scripts.pory"

# 580 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 581 "data/maps/MtChimney/scripts.pory"
	.string "Maxie: But, enough.\n"
# 582 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 583 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 584 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 585 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 586 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 587 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 588 "data/maps/MtChimney/scripts.pory"

# 589 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 590 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 591 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 592 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 593 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 594 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 595 "data/maps/MtChimney/scripts.pory"

# 596 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 597 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 598 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 599 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 600 "data/maps/MtChimney/scripts.pory"

# 601 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 602 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 603 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 604 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 605 "data/maps/MtChimney/scripts.pory"

# 606 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 607 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 608 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 609 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 610 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 611 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 612 "data/maps/MtChimney/scripts.pory"

# 613 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 614 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 615 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 616 "data/maps/MtChimney/scripts.pory"

# 617 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 618 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 619 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 620 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 621 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 622 "data/maps/MtChimney/scripts.pory"

# 623 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 624 "data/maps/MtChimney/scripts.pory"
	.string "Me and this idiot grunt will stop you\n"
# 625 "data/maps/MtChimney/scripts.pory"
	.string "right here!$"
# 626 "data/maps/MtChimney/scripts.pory"

# 627 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 628 "data/maps/MtChimney/scripts.pory"
	.string "That idiot weighed me down…$"
# 629 "data/maps/MtChimney/scripts.pory"

# 630 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 631 "data/maps/MtChimney/scripts.pory"
	.string "It's fine.\n"
# 632 "data/maps/MtChimney/scripts.pory"
	.string "You won't get past Tabitha.$"
# 633 "data/maps/MtChimney/scripts.pory"

# 634 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 635 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 636 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 637 "data/maps/MtChimney/scripts.pory"

# 638 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 639 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 640 "data/maps/MtChimney/scripts.pory"

# 641 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 642 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 643 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 644 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 645 "data/maps/MtChimney/scripts.pory"

# 646 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 647 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 648 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 649 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 650 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 651 "data/maps/MtChimney/scripts.pory"

# 652 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 653 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 654 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 655 "data/maps/MtChimney/scripts.pory"

# 656 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 657 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 658 "data/maps/MtChimney/scripts.pory"

# 659 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 660 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 661 "data/maps/MtChimney/scripts.pory"

# 662 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 663 "data/maps/MtChimney/scripts.pory"
	.string "Archie: Grr, {PLAYER}!\n"
# 664 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 665 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 666 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 667 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 668 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 669 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 670 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 671 "data/maps/MtChimney/scripts.pory"

# 672 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 673 "data/maps/MtChimney/scripts.pory"
	.string "Archie: Grrr…\p"
# 674 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 675 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 676 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 677 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 678 "data/maps/MtChimney/scripts.pory"

# 679 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou::
# 680 "data/maps/MtChimney/scripts.pory"
	.string "Drake: {PLAYER}, we meet again.\p"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "You're a sharp one. I've been keeping an\n"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "eye on the activities of Team Magma and\l"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "Team Aqua since the incident at the\l"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "museum, but you were still able to get\l"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "here before me.\p"
# 686 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 687 "data/maps/MtChimney/scripts.pory"
	.string "What's that? Maxie mentioned something\n"
# 688 "data/maps/MtChimney/scripts.pory"
	.string "about looking for an Orb of some sort?\p"
# 689 "data/maps/MtChimney/scripts.pory"
	.string "I think I have some idea of what he's\n"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "talking about…\p"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "Say, {PLAYER}, what do you think about\n"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "the way our world operates?\p"
# 693 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 694 "data/maps/MtChimney/scripts.pory"
	.string "What do I mean by that?\n"
# 695 "data/maps/MtChimney/scripts.pory"
	.string "Well…\p"
# 696 "data/maps/MtChimney/scripts.pory"
	.string "Never mind, just think on that question\n"
# 697 "data/maps/MtChimney/scripts.pory"
	.string "for the next time we meet.\p"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "In the meantime, I'll look into this\n"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "matter further. Thanks again for your\l"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "help, {PLAYER}. I'm sure I'll be seeing\l"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "you again.$"
# 702 "data/maps/MtChimney/scripts.pory"

# 703 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 704 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 705 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 706 "data/maps/MtChimney/scripts.pory"

# 707 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 708 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 709 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 710 "data/maps/MtChimney/scripts.pory"

# 711 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 712 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 713 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 714 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 715 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 716 "data/maps/MtChimney/scripts.pory"

# 717 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 718 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 719 "data/maps/MtChimney/scripts.pory"

# 720 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 721 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 722 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 723 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 724 "data/maps/MtChimney/scripts.pory"

# 725 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 726 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 727 "data/maps/MtChimney/scripts.pory"

# 728 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 729 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 730 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 731 "data/maps/MtChimney/scripts.pory"

# 732 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 733 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 734 "data/maps/MtChimney/scripts.pory"

# 735 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 736 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 737 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 738 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 739 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 740 "data/maps/MtChimney/scripts.pory"

# 741 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 742 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 743 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 744 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 745 "data/maps/MtChimney/scripts.pory"

# 746 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 747 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 748 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 749 "data/maps/MtChimney/scripts.pory"

# 750 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 751 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 752 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 753 "data/maps/MtChimney/scripts.pory"

# 754 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 755 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 756 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 757 "data/maps/MtChimney/scripts.pory"

# 758 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 759 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 760 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 761 "data/maps/MtChimney/scripts.pory"

# 762 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 763 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 764 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 765 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 766 "data/maps/MtChimney/scripts.pory"

# 767 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 768 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 769 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 770 "data/maps/MtChimney/scripts.pory"

# 771 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 772 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 773 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 774 "data/maps/MtChimney/scripts.pory"

# 775 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 776 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 777 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 779 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 780 "data/maps/MtChimney/scripts.pory"

# 781 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 782 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 783 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 784 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 785 "data/maps/MtChimney/scripts.pory"

# 786 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 787 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 788 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 789 "data/maps/MtChimney/scripts.pory"

# 790 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 791 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 792 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 793 "data/maps/MtChimney/scripts.pory"

# 794 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 795 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 796 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 797 "data/maps/MtChimney/scripts.pory"

# 798 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 799 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 800 "data/maps/MtChimney/scripts.pory"

# 801 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 802 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 803 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 804 "data/maps/MtChimney/scripts.pory"

# 805 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 806 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 807 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 808 "data/maps/MtChimney/scripts.pory"

# 809 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 810 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 811 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 812 "data/maps/MtChimney/scripts.pory"

# 813 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 814 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 815 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 816 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 817 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 819 "data/maps/MtChimney/scripts.pory"

# 820 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 821 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 822 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 824 "data/maps/MtChimney/scripts.pory"

# 825 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 826 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 827 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 828 "data/maps/MtChimney/scripts.pory"

# 829 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 830 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 831 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 832 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 833 "data/maps/MtChimney/scripts.pory"

# 834 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 835 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 836 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 837 "data/maps/MtChimney/scripts.pory"

# 838 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 839 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 840 "data/maps/MtChimney/scripts.pory"

# 841 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 842 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 843 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 844 "data/maps/MtChimney/scripts.pory"

# 845 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 846 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 847 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 848 "data/maps/MtChimney/scripts.pory"

# 849 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 850 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 851 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 852 "data/maps/MtChimney/scripts.pory"

# 853 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 854 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 855 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 856 "data/maps/MtChimney/scripts.pory"

# 857 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 858 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 859 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
