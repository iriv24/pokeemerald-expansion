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
	delay 30
# 83 "data/maps/MtChimney/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 84 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 85 "data/maps/MtChimney/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 86 "data/maps/MtChimney/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 87 "data/maps/MtChimney/scripts.pory"
	waitfanfare
# 88 "data/maps/MtChimney/scripts.pory"
	closemessage
# 89 "data/maps/MtChimney/scripts.pory"
	delay 30
# 90 "data/maps/MtChimney/scripts.pory"
	releaseall
# 91 "data/maps/MtChimney/scripts.pory"
	end
# 92 "data/maps/MtChimney/scripts.pory"

# 93 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 94 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_DRAKE, MtChimney_Movement_ArchieApproachPlayerEast
# 95 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 96 "data/maps/MtChimney/scripts.pory"
	return
# 97 "data/maps/MtChimney/scripts.pory"

# 98 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 99 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_DRAKE, MtChimney_Movement_ArchieApproachPlayerNorth
# 100 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 101 "data/maps/MtChimney/scripts.pory"
	return
# 102 "data/maps/MtChimney/scripts.pory"

# 103 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 104 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_DRAKE, MtChimney_Movement_ArchieExitEast
# 105 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 106 "data/maps/MtChimney/scripts.pory"
	return
# 107 "data/maps/MtChimney/scripts.pory"

# 108 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 109 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_DRAKE, MtChimney_Movement_ArchieExitNorth
# 110 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 111 "data/maps/MtChimney/scripts.pory"
	return
# 112 "data/maps/MtChimney/scripts.pory"

# 113 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 114 "data/maps/MtChimney/scripts.pory"
	lock
# 115 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 116 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 117 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 118 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 119 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 120 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 121 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 122 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 123 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 124 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 125 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 126 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 127 "data/maps/MtChimney/scripts.pory"
	release
# 128 "data/maps/MtChimney/scripts.pory"
	end
# 129 "data/maps/MtChimney/scripts.pory"

# 130 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 131 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 132 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 133 "data/maps/MtChimney/scripts.pory"
	release
# 134 "data/maps/MtChimney/scripts.pory"
	end
# 135 "data/maps/MtChimney/scripts.pory"

# 136 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 137 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 138 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 139 "data/maps/MtChimney/scripts.pory"
	return
# 140 "data/maps/MtChimney/scripts.pory"

# 141 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 142 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 143 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 144 "data/maps/MtChimney/scripts.pory"
	release
# 145 "data/maps/MtChimney/scripts.pory"
	end
# 146 "data/maps/MtChimney/scripts.pory"

# 147 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 148 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 149 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 150 "data/maps/MtChimney/scripts.pory"
	release
# 151 "data/maps/MtChimney/scripts.pory"
	end
# 152 "data/maps/MtChimney/scripts.pory"

# 153 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 154 "data/maps/MtChimney/scripts.pory"
	walk_up
# 155 "data/maps/MtChimney/scripts.pory"
	walk_up
# 156 "data/maps/MtChimney/scripts.pory"
	walk_up
# 157 "data/maps/MtChimney/scripts.pory"
	walk_up
# 158 "data/maps/MtChimney/scripts.pory"
	walk_up
# 159 "data/maps/MtChimney/scripts.pory"
	walk_up
# 160 "data/maps/MtChimney/scripts.pory"
	walk_right
# 161 "data/maps/MtChimney/scripts.pory"
	step_end
# 162 "data/maps/MtChimney/scripts.pory"

# 163 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 164 "data/maps/MtChimney/scripts.pory"
	walk_left
# 165 "data/maps/MtChimney/scripts.pory"
	walk_down
# 166 "data/maps/MtChimney/scripts.pory"
	walk_down
# 167 "data/maps/MtChimney/scripts.pory"
	walk_down
# 168 "data/maps/MtChimney/scripts.pory"
	walk_down
# 169 "data/maps/MtChimney/scripts.pory"
	walk_down
# 170 "data/maps/MtChimney/scripts.pory"
	walk_down
# 171 "data/maps/MtChimney/scripts.pory"
	walk_down
# 172 "data/maps/MtChimney/scripts.pory"
	step_end
# 173 "data/maps/MtChimney/scripts.pory"

# 174 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 175 "data/maps/MtChimney/scripts.pory"
	walk_up
# 176 "data/maps/MtChimney/scripts.pory"
	walk_up
# 177 "data/maps/MtChimney/scripts.pory"
	walk_up
# 178 "data/maps/MtChimney/scripts.pory"
	walk_up
# 179 "data/maps/MtChimney/scripts.pory"
	walk_up
# 180 "data/maps/MtChimney/scripts.pory"
	walk_right
# 181 "data/maps/MtChimney/scripts.pory"
	walk_right
# 182 "data/maps/MtChimney/scripts.pory"
	step_end
# 183 "data/maps/MtChimney/scripts.pory"

# 184 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 185 "data/maps/MtChimney/scripts.pory"
	walk_left
# 186 "data/maps/MtChimney/scripts.pory"
	walk_left
# 187 "data/maps/MtChimney/scripts.pory"
	walk_down
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
	walk_down
# 194 "data/maps/MtChimney/scripts.pory"
	step_end
# 195 "data/maps/MtChimney/scripts.pory"

# 196 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 197 "data/maps/MtChimney/scripts.pory"
	walk_down
# 198 "data/maps/MtChimney/scripts.pory"
	walk_down
# 199 "data/maps/MtChimney/scripts.pory"
	walk_down
# 200 "data/maps/MtChimney/scripts.pory"
	walk_down
# 201 "data/maps/MtChimney/scripts.pory"
	walk_down
# 202 "data/maps/MtChimney/scripts.pory"
	walk_left
# 203 "data/maps/MtChimney/scripts.pory"
	walk_left
# 204 "data/maps/MtChimney/scripts.pory"
	walk_down
# 205 "data/maps/MtChimney/scripts.pory"
	walk_down
# 206 "data/maps/MtChimney/scripts.pory"
	walk_down
# 207 "data/maps/MtChimney/scripts.pory"
	walk_down
# 208 "data/maps/MtChimney/scripts.pory"
	walk_left
# 209 "data/maps/MtChimney/scripts.pory"
	walk_left
# 210 "data/maps/MtChimney/scripts.pory"
	walk_left
# 211 "data/maps/MtChimney/scripts.pory"
	walk_left
# 212 "data/maps/MtChimney/scripts.pory"
	walk_left
# 213 "data/maps/MtChimney/scripts.pory"
	walk_down
# 214 "data/maps/MtChimney/scripts.pory"
	step_end
# 215 "data/maps/MtChimney/scripts.pory"

# 216 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 217 "data/maps/MtChimney/scripts.pory"
	walk_down
# 218 "data/maps/MtChimney/scripts.pory"
	walk_down
# 219 "data/maps/MtChimney/scripts.pory"
	walk_down
# 220 "data/maps/MtChimney/scripts.pory"
	walk_down
# 221 "data/maps/MtChimney/scripts.pory"
	walk_left
# 222 "data/maps/MtChimney/scripts.pory"
	walk_left
# 223 "data/maps/MtChimney/scripts.pory"
	walk_left
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 225 "data/maps/MtChimney/scripts.pory"
	step_end
# 226 "data/maps/MtChimney/scripts.pory"

# 227 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 228 "data/maps/MtChimney/scripts.pory"
	walk_right
# 229 "data/maps/MtChimney/scripts.pory"
	walk_down
# 230 "data/maps/MtChimney/scripts.pory"
	walk_down
# 231 "data/maps/MtChimney/scripts.pory"
	walk_down
# 232 "data/maps/MtChimney/scripts.pory"
	walk_down
# 233 "data/maps/MtChimney/scripts.pory"
	walk_left
# 234 "data/maps/MtChimney/scripts.pory"
	walk_left
# 235 "data/maps/MtChimney/scripts.pory"
	walk_left
# 236 "data/maps/MtChimney/scripts.pory"
	walk_left
# 237 "data/maps/MtChimney/scripts.pory"
	walk_left
# 238 "data/maps/MtChimney/scripts.pory"
	walk_down
# 239 "data/maps/MtChimney/scripts.pory"
	walk_down
# 240 "data/maps/MtChimney/scripts.pory"
	walk_down
# 241 "data/maps/MtChimney/scripts.pory"
	walk_down
# 242 "data/maps/MtChimney/scripts.pory"
	step_end
# 243 "data/maps/MtChimney/scripts.pory"

# 244 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 245 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 246 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 247 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 248 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 249 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 252 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 253 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 254 "data/maps/MtChimney/scripts.pory"
	walk_left
# 255 "data/maps/MtChimney/scripts.pory"
	walk_left
# 256 "data/maps/MtChimney/scripts.pory"
	walk_down
# 257 "data/maps/MtChimney/scripts.pory"
	walk_down
# 258 "data/maps/MtChimney/scripts.pory"
	walk_down
# 259 "data/maps/MtChimney/scripts.pory"
	walk_left
# 260 "data/maps/MtChimney/scripts.pory"
	walk_left
# 261 "data/maps/MtChimney/scripts.pory"
	walk_down
# 262 "data/maps/MtChimney/scripts.pory"
	walk_down
# 263 "data/maps/MtChimney/scripts.pory"
	walk_left
# 264 "data/maps/MtChimney/scripts.pory"
	walk_left
# 265 "data/maps/MtChimney/scripts.pory"
	walk_left
# 266 "data/maps/MtChimney/scripts.pory"
	walk_left
# 267 "data/maps/MtChimney/scripts.pory"
	walk_left
# 268 "data/maps/MtChimney/scripts.pory"
	walk_down
# 269 "data/maps/MtChimney/scripts.pory"
	step_end
# 270 "data/maps/MtChimney/scripts.pory"

# 271 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 272 "data/maps/MtChimney/scripts.pory"
	delay_16
# 273 "data/maps/MtChimney/scripts.pory"
	delay_16
# 274 "data/maps/MtChimney/scripts.pory"
	delay_16
# 275 "data/maps/MtChimney/scripts.pory"
	walk_down
# 276 "data/maps/MtChimney/scripts.pory"
	walk_down
# 277 "data/maps/MtChimney/scripts.pory"
	walk_down
# 278 "data/maps/MtChimney/scripts.pory"
	walk_left
# 279 "data/maps/MtChimney/scripts.pory"
	walk_left
# 280 "data/maps/MtChimney/scripts.pory"
	walk_left
# 281 "data/maps/MtChimney/scripts.pory"
	walk_down
# 282 "data/maps/MtChimney/scripts.pory"
	step_end
# 283 "data/maps/MtChimney/scripts.pory"

# 284 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 285 "data/maps/MtChimney/scripts.pory"
	delay_16
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
	walk_left
# 292 "data/maps/MtChimney/scripts.pory"
	walk_left
# 293 "data/maps/MtChimney/scripts.pory"
	walk_left
# 294 "data/maps/MtChimney/scripts.pory"
	walk_left
# 295 "data/maps/MtChimney/scripts.pory"
	walk_left
# 296 "data/maps/MtChimney/scripts.pory"
	walk_down
# 297 "data/maps/MtChimney/scripts.pory"
	walk_down
# 298 "data/maps/MtChimney/scripts.pory"
	walk_down
# 299 "data/maps/MtChimney/scripts.pory"
	walk_down
# 300 "data/maps/MtChimney/scripts.pory"
	step_end
# 301 "data/maps/MtChimney/scripts.pory"

# 302 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 303 "data/maps/MtChimney/scripts.pory"
	delay_16
# 304 "data/maps/MtChimney/scripts.pory"
	walk_left
# 305 "data/maps/MtChimney/scripts.pory"
	walk_left
# 306 "data/maps/MtChimney/scripts.pory"
	walk_down
# 307 "data/maps/MtChimney/scripts.pory"
	walk_down
# 308 "data/maps/MtChimney/scripts.pory"
	walk_down
# 309 "data/maps/MtChimney/scripts.pory"
	walk_left
# 310 "data/maps/MtChimney/scripts.pory"
	walk_left
# 311 "data/maps/MtChimney/scripts.pory"
	walk_down
# 312 "data/maps/MtChimney/scripts.pory"
	walk_down
# 313 "data/maps/MtChimney/scripts.pory"
	walk_left
# 314 "data/maps/MtChimney/scripts.pory"
	walk_left
# 315 "data/maps/MtChimney/scripts.pory"
	walk_left
# 316 "data/maps/MtChimney/scripts.pory"
	walk_left
# 317 "data/maps/MtChimney/scripts.pory"
	walk_left
# 318 "data/maps/MtChimney/scripts.pory"
	walk_down
# 319 "data/maps/MtChimney/scripts.pory"
	step_end
# 320 "data/maps/MtChimney/scripts.pory"

# 321 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 322 "data/maps/MtChimney/scripts.pory"
	delay_16
# 323 "data/maps/MtChimney/scripts.pory"
	walk_down
# 324 "data/maps/MtChimney/scripts.pory"
	walk_left
# 325 "data/maps/MtChimney/scripts.pory"
	walk_left
# 326 "data/maps/MtChimney/scripts.pory"
	walk_left
# 327 "data/maps/MtChimney/scripts.pory"
	walk_left
# 328 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 329 "data/maps/MtChimney/scripts.pory"
	step_end
# 330 "data/maps/MtChimney/scripts.pory"

# 331 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 332 "data/maps/MtChimney/scripts.pory"
	walk_down
# 333 "data/maps/MtChimney/scripts.pory"
	walk_down
# 334 "data/maps/MtChimney/scripts.pory"
	walk_down
# 335 "data/maps/MtChimney/scripts.pory"
	walk_down
# 336 "data/maps/MtChimney/scripts.pory"
	walk_left
# 337 "data/maps/MtChimney/scripts.pory"
	walk_left
# 338 "data/maps/MtChimney/scripts.pory"
	walk_left
# 339 "data/maps/MtChimney/scripts.pory"
	walk_left
# 340 "data/maps/MtChimney/scripts.pory"
	walk_left
# 341 "data/maps/MtChimney/scripts.pory"
	walk_down
# 342 "data/maps/MtChimney/scripts.pory"
	walk_down
# 343 "data/maps/MtChimney/scripts.pory"
	walk_down
# 344 "data/maps/MtChimney/scripts.pory"
	walk_down
# 345 "data/maps/MtChimney/scripts.pory"
	step_end
# 346 "data/maps/MtChimney/scripts.pory"

# 347 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 348 "data/maps/MtChimney/scripts.pory"
	walk_down
# 349 "data/maps/MtChimney/scripts.pory"
	step_end
# 350 "data/maps/MtChimney/scripts.pory"

# 351 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 352 "data/maps/MtChimney/scripts.pory"
	walk_down
# 353 "data/maps/MtChimney/scripts.pory"
	walk_down
# 354 "data/maps/MtChimney/scripts.pory"
	walk_down
# 355 "data/maps/MtChimney/scripts.pory"
	walk_down
# 356 "data/maps/MtChimney/scripts.pory"
	walk_down
# 357 "data/maps/MtChimney/scripts.pory"
	walk_down
# 358 "data/maps/MtChimney/scripts.pory"
	walk_down
# 359 "data/maps/MtChimney/scripts.pory"
	step_end
# 360 "data/maps/MtChimney/scripts.pory"

# 361 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 362 "data/maps/MtChimney/scripts.pory"
	delay_16
# 363 "data/maps/MtChimney/scripts.pory"
	delay_16
# 364 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 365 "data/maps/MtChimney/scripts.pory"
	delay_16
# 366 "data/maps/MtChimney/scripts.pory"
	walk_down
# 367 "data/maps/MtChimney/scripts.pory"
	walk_down
# 368 "data/maps/MtChimney/scripts.pory"
	walk_down
# 369 "data/maps/MtChimney/scripts.pory"
	walk_down
# 370 "data/maps/MtChimney/scripts.pory"
	walk_down
# 371 "data/maps/MtChimney/scripts.pory"
	step_end
# 372 "data/maps/MtChimney/scripts.pory"

# 373 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 374 "data/maps/MtChimney/scripts.pory"
	delay_16
# 375 "data/maps/MtChimney/scripts.pory"
	delay_16
# 376 "data/maps/MtChimney/scripts.pory"
	delay_16
# 377 "data/maps/MtChimney/scripts.pory"
	delay_16
# 378 "data/maps/MtChimney/scripts.pory"
	delay_16
# 379 "data/maps/MtChimney/scripts.pory"
	delay_16
# 380 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 381 "data/maps/MtChimney/scripts.pory"
	delay_16
# 382 "data/maps/MtChimney/scripts.pory"
	walk_down
# 383 "data/maps/MtChimney/scripts.pory"
	walk_down
# 384 "data/maps/MtChimney/scripts.pory"
	step_end
# 385 "data/maps/MtChimney/scripts.pory"

# 386 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 387 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 388 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 389 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 390 "data/maps/MtChimney/scripts.pory"
	face_right
# 391 "data/maps/MtChimney/scripts.pory"
	step_end
# 392 "data/maps/MtChimney/scripts.pory"

# 393 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 394 "data/maps/MtChimney/scripts.pory"
	walk_left
# 395 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 396 "data/maps/MtChimney/scripts.pory"
	delay_16
# 397 "data/maps/MtChimney/scripts.pory"
	step_end
# 398 "data/maps/MtChimney/scripts.pory"

# 399 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 400 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 401 "data/maps/MtChimney/scripts.pory"
	end
# 402 "data/maps/MtChimney/scripts.pory"

# 403 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 404 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 405 "data/maps/MtChimney/scripts.pory"
	end
# 406 "data/maps/MtChimney/scripts.pory"

# 407 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 408 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 409 "data/maps/MtChimney/scripts.pory"
	end
# 410 "data/maps/MtChimney/scripts.pory"

# 411 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 412 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 413 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 414 "data/maps/MtChimney/scripts.pory"
	end
# 415 "data/maps/MtChimney/scripts.pory"

# 416 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 417 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 418 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 419 "data/maps/MtChimney/scripts.pory"
	end
# 420 "data/maps/MtChimney/scripts.pory"

# 421 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 422 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 423 "data/maps/MtChimney/scripts.pory"
	end
# 424 "data/maps/MtChimney/scripts.pory"

# 425 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 426 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 427 "data/maps/MtChimney/scripts.pory"
	end
# 428 "data/maps/MtChimney/scripts.pory"

# 429 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 430 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 431 "data/maps/MtChimney/scripts.pory"
	end
# 432 "data/maps/MtChimney/scripts.pory"

# 433 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 434 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 435 "data/maps/MtChimney/scripts.pory"
	end
# 436 "data/maps/MtChimney/scripts.pory"

# 437 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 438 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 439 "data/maps/MtChimney/scripts.pory"
	end
# 440 "data/maps/MtChimney/scripts.pory"

# 441 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 442 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 443 "data/maps/MtChimney/scripts.pory"
	end
# 444 "data/maps/MtChimney/scripts.pory"

# 445 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 446 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 447 "data/maps/MtChimney/scripts.pory"
	end
# 448 "data/maps/MtChimney/scripts.pory"

# 449 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 450 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 451 "data/maps/MtChimney/scripts.pory"
	end
# 452 "data/maps/MtChimney/scripts.pory"

# 453 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 454 "data/maps/MtChimney/scripts.pory"
	lockall
# 455 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 456 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 457 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 458 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 459 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 460 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 461 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 462 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 463 "data/maps/MtChimney/scripts.pory"
	releaseall
# 464 "data/maps/MtChimney/scripts.pory"
	end
# 465 "data/maps/MtChimney/scripts.pory"

# 466 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 467 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 468 "data/maps/MtChimney/scripts.pory"
	releaseall
# 469 "data/maps/MtChimney/scripts.pory"
	end
# 470 "data/maps/MtChimney/scripts.pory"

# 471 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 472 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 473 "data/maps/MtChimney/scripts.pory"
	releaseall
# 474 "data/maps/MtChimney/scripts.pory"
	end
# 475 "data/maps/MtChimney/scripts.pory"

# 476 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 477 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 478 "data/maps/MtChimney/scripts.pory"
	releaseall
# 479 "data/maps/MtChimney/scripts.pory"
	end
# 480 "data/maps/MtChimney/scripts.pory"

# 481 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 482 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 483 "data/maps/MtChimney/scripts.pory"
	end
# 484 "data/maps/MtChimney/scripts.pory"

# 485 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 486 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 487 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 488 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 489 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 490 "data/maps/MtChimney/scripts.pory"
	release
# 491 "data/maps/MtChimney/scripts.pory"
	end
# 492 "data/maps/MtChimney/scripts.pory"

# 493 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 494 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 495 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 496 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 497 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 498 "data/maps/MtChimney/scripts.pory"
	release
# 499 "data/maps/MtChimney/scripts.pory"
	end
# 500 "data/maps/MtChimney/scripts.pory"

# 501 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 502 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 503 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 504 "data/maps/MtChimney/scripts.pory"
	end
# 505 "data/maps/MtChimney/scripts.pory"

# 506 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 507 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 508 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 509 "data/maps/MtChimney/scripts.pory"
	end
# 510 "data/maps/MtChimney/scripts.pory"

# 511 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 512 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 513 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 514 "data/maps/MtChimney/scripts.pory"
	end
# 515 "data/maps/MtChimney/scripts.pory"

# 516 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 517 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 518 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 519 "data/maps/MtChimney/scripts.pory"
	end
# 520 "data/maps/MtChimney/scripts.pory"

# 521 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 522 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 523 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 524 "data/maps/MtChimney/scripts.pory"
	end
# 525 "data/maps/MtChimney/scripts.pory"

# 526 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 527 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 528 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 529 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 530 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 531 "data/maps/MtChimney/scripts.pory"
	release
# 532 "data/maps/MtChimney/scripts.pory"
	end
# 533 "data/maps/MtChimney/scripts.pory"

# 534 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 535 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 536 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 537 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 538 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 539 "data/maps/MtChimney/scripts.pory"
	release
# 540 "data/maps/MtChimney/scripts.pory"
	end
# 541 "data/maps/MtChimney/scripts.pory"

# 542 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 543 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 544 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 545 "data/maps/MtChimney/scripts.pory"
	end
# 546 "data/maps/MtChimney/scripts.pory"

# 547 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 548 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the Meteorite…\p"
# 549 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 550 "data/maps/MtChimney/scripts.pory"
	.string "machine, Mt. Chimney's volcanic\l"
# 551 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 552 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 553 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 554 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 555 "data/maps/MtChimney/scripts.pory"

# 556 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 557 "data/maps/MtChimney/scripts.pory"
	.string "Maxie: Hm?\n"
# 558 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 559 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 561 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard Archie bemoaning a child\n"
# 562 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in Team Aqua's\l"
# 563 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 564 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 566 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, Team Magma?\p"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 571 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 572 "data/maps/MtChimney/scripts.pory"
	.string "That is why Team Magma is dedicated\n"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 575 "data/maps/MtChimney/scripts.pory"
	.string "humankind and Pokémon!\p"
# 576 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 577 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 578 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 579 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 580 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 581 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 582 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 583 "data/maps/MtChimney/scripts.pory"

# 584 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 585 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 586 "data/maps/MtChimney/scripts.pory"
	.string "I, Maxie, was caught off guard?!$"
# 587 "data/maps/MtChimney/scripts.pory"

# 588 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 589 "data/maps/MtChimney/scripts.pory"
	.string "Maxie: But, enough.\n"
# 590 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 591 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 592 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of Team Magma.\p"
# 593 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 594 "data/maps/MtChimney/scripts.pory"
	.string "Even without the Meteorite, if we\n"
# 595 "data/maps/MtChimney/scripts.pory"
	.string "obtain that Orb… Fufufu…$"
# 596 "data/maps/MtChimney/scripts.pory"

# 597 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 598 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 599 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 600 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 601 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the Meteorite\l"
# 602 "data/maps/MtChimney/scripts.pory"
	.string "from Meteor Falls to the boss!$"
# 603 "data/maps/MtChimney/scripts.pory"

# 604 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 605 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 606 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 607 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 608 "data/maps/MtChimney/scripts.pory"

# 609 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 610 "data/maps/MtChimney/scripts.pory"
	.string "Boss, hurry!\n"
# 611 "data/maps/MtChimney/scripts.pory"
	.string "Give it the Meteorite's energy!\p"
# 612 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 613 "data/maps/MtChimney/scripts.pory"

# 614 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 615 "data/maps/MtChimney/scripts.pory"
	.string "We of Team Magma are working hard for\n"
# 616 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 617 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 618 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 619 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 620 "data/maps/MtChimney/scripts.pory"

# 621 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 622 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 623 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 624 "data/maps/MtChimney/scripts.pory"

# 625 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 626 "data/maps/MtChimney/scripts.pory"
	.string "Our boss says, “It will make everyone\n"
# 627 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 628 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 629 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 630 "data/maps/MtChimney/scripts.pory"

# 631 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 632 "data/maps/MtChimney/scripts.pory"
	.string "Me and this idiot grunt will stop you\n"
# 633 "data/maps/MtChimney/scripts.pory"
	.string "right here!$"
# 634 "data/maps/MtChimney/scripts.pory"

# 635 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 636 "data/maps/MtChimney/scripts.pory"
	.string "That idiot weighed me down…$"
# 637 "data/maps/MtChimney/scripts.pory"

# 638 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 639 "data/maps/MtChimney/scripts.pory"
	.string "It's fine.\n"
# 640 "data/maps/MtChimney/scripts.pory"
	.string "You won't get past Tabitha.$"
# 641 "data/maps/MtChimney/scripts.pory"

# 642 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 643 "data/maps/MtChimney/scripts.pory"
	.string "That annoying Team Aqua…\n"
# 644 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 645 "data/maps/MtChimney/scripts.pory"

# 646 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 647 "data/maps/MtChimney/scripts.pory"
	.string "Meteorites pack amazing power!$"
# 648 "data/maps/MtChimney/scripts.pory"

# 649 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 650 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 651 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 652 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 653 "data/maps/MtChimney/scripts.pory"

# 654 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 655 "data/maps/MtChimney/scripts.pory"
	.string "We're Team Magma!\p"
# 656 "data/maps/MtChimney/scripts.pory"
	.string "They're Team Aqua!\p"
# 657 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 658 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 659 "data/maps/MtChimney/scripts.pory"

# 660 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 661 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 662 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 663 "data/maps/MtChimney/scripts.pory"

# 664 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 665 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 666 "data/maps/MtChimney/scripts.pory"

# 667 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 668 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 669 "data/maps/MtChimney/scripts.pory"

# 670 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 671 "data/maps/MtChimney/scripts.pory"
	.string "Archie: Grr, {PLAYER}!\n"
# 672 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 673 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 674 "data/maps/MtChimney/scripts.pory"
	.string "of Team Magma are up to!\p"
# 675 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 676 "data/maps/MtChimney/scripts.pory"
	.string "Meteorite's power into the volcano!\p"
# 677 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 678 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 679 "data/maps/MtChimney/scripts.pory"

# 680 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 681 "data/maps/MtChimney/scripts.pory"
	.string "Archie: Grrr…\p"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that Maxie,\n"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 686 "data/maps/MtChimney/scripts.pory"

# 687 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou::
# 688 "data/maps/MtChimney/scripts.pory"
	.string "Drake: {PLAYER}, we meet again.\p"
# 689 "data/maps/MtChimney/scripts.pory"
	.string "You're a sharp one. I've been keeping an\n"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "eye on the activities of Team Magma and\l"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "Team Aqua since the incident at the\l"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "museum, but you were still able to get\l"
# 693 "data/maps/MtChimney/scripts.pory"
	.string "here before me.\p"
# 694 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 695 "data/maps/MtChimney/scripts.pory"
	.string "What's that? Maxie mentioned something\n"
# 696 "data/maps/MtChimney/scripts.pory"
	.string "about looking for an Orb of some sort?\p"
# 697 "data/maps/MtChimney/scripts.pory"
	.string "I think I have some idea of what he's\n"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "talking about…\p"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "Say, {PLAYER}, what do you think about\n"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "the way our world operates?\p"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 702 "data/maps/MtChimney/scripts.pory"
	.string "What do I mean by that?\n"
# 703 "data/maps/MtChimney/scripts.pory"
	.string "Well…\p"
# 704 "data/maps/MtChimney/scripts.pory"
	.string "Never mind, just think on that question\n"
# 705 "data/maps/MtChimney/scripts.pory"
	.string "for the next time we meet.\p"
# 706 "data/maps/MtChimney/scripts.pory"
	.string "In the meantime, I'll look into this\n"
# 707 "data/maps/MtChimney/scripts.pory"
	.string "matter further. Thanks again for your\l"
# 708 "data/maps/MtChimney/scripts.pory"
	.string "help, {PLAYER}. I'm sure I'll be seeing\l"
# 709 "data/maps/MtChimney/scripts.pory"
	.string "you again.$"
# 710 "data/maps/MtChimney/scripts.pory"

# 711 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 712 "data/maps/MtChimney/scripts.pory"
	.string "Darn… Team Magma outnumbers us!\n"
# 713 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 714 "data/maps/MtChimney/scripts.pory"

# 715 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 716 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 717 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for Water Pokémon!$"
# 718 "data/maps/MtChimney/scripts.pory"

# 719 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 720 "data/maps/MtChimney/scripts.pory"
	.string "We're Team Aqua!\p"
# 721 "data/maps/MtChimney/scripts.pory"
	.string "They're Team Magma!\p"
# 722 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 723 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 724 "data/maps/MtChimney/scripts.pory"

# 725 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 726 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 727 "data/maps/MtChimney/scripts.pory"

# 728 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 729 "data/maps/MtChimney/scripts.pory"
	.string "Lava Cookies are Mt. Chimney's local\n"
# 730 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 731 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 732 "data/maps/MtChimney/scripts.pory"

# 733 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 734 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 735 "data/maps/MtChimney/scripts.pory"

# 736 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 737 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 738 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 739 "data/maps/MtChimney/scripts.pory"

# 740 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 741 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 742 "data/maps/MtChimney/scripts.pory"

# 743 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 744 "data/maps/MtChimney/scripts.pory"
	.string "A Meteorite is fitted on a mysterious\n"
# 745 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 746 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 747 "data/maps/MtChimney/scripts.pory"
	.string "energy in the Meteorite.$"
# 748 "data/maps/MtChimney/scripts.pory"

# 749 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 750 "data/maps/MtChimney/scripts.pory"
	.string "A Meteorite is fitted on a mysterious\n"
# 751 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 752 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the Meteorite?$"
# 753 "data/maps/MtChimney/scripts.pory"

# 754 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 755 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the Meteorite from\n"
# 756 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 757 "data/maps/MtChimney/scripts.pory"

# 758 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 759 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the Meteorite where\n"
# 760 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 761 "data/maps/MtChimney/scripts.pory"

# 762 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 763 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 764 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 765 "data/maps/MtChimney/scripts.pory"

# 766 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 767 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} Jagged Path\n"
# 768 "data/maps/MtChimney/scripts.pory"
	.string "Lavaridge Town ahead$"
# 769 "data/maps/MtChimney/scripts.pory"

# 770 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 771 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 772 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 773 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 774 "data/maps/MtChimney/scripts.pory"

# 775 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 776 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 777 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 778 "data/maps/MtChimney/scripts.pory"

# 779 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 780 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 781 "data/maps/MtChimney/scripts.pory"
	.string "myself an expert now, can I?$"
# 782 "data/maps/MtChimney/scripts.pory"

# 783 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 784 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 785 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 786 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 787 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 788 "data/maps/MtChimney/scripts.pory"

# 789 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 790 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 791 "data/maps/MtChimney/scripts.pory"
	.string "of your Pokémon, why, you should be\l"
# 792 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 793 "data/maps/MtChimney/scripts.pory"

# 794 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 795 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 796 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 797 "data/maps/MtChimney/scripts.pory"

# 798 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 799 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 800 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your Pokémon.$"
# 801 "data/maps/MtChimney/scripts.pory"

# 802 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 803 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 804 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 805 "data/maps/MtChimney/scripts.pory"

# 806 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 807 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 808 "data/maps/MtChimney/scripts.pory"

# 809 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 810 "data/maps/MtChimney/scripts.pory"
	.string "The heat of Mt. Chimney warms\n"
# 811 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 812 "data/maps/MtChimney/scripts.pory"

# 813 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 814 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to Mt. Chimney.\n"
# 815 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my Pokémon battle!$"
# 816 "data/maps/MtChimney/scripts.pory"

# 817 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 818 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "It's like a Mt. Chimney eruption!$"
# 820 "data/maps/MtChimney/scripts.pory"

# 821 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 822 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "Mt. Chimney. It would be a shame if\l"
# 824 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 825 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 826 "data/maps/MtChimney/scripts.pory"
	.string "cookies as souvenirs.$"
# 827 "data/maps/MtChimney/scripts.pory"

# 828 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 829 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 830 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 831 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 832 "data/maps/MtChimney/scripts.pory"

# 833 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 834 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 835 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 836 "data/maps/MtChimney/scripts.pory"

# 837 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 838 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 839 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 840 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 841 "data/maps/MtChimney/scripts.pory"

# 842 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 843 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 844 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 845 "data/maps/MtChimney/scripts.pory"

# 846 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 847 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 848 "data/maps/MtChimney/scripts.pory"

# 849 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 850 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in Lavaridge\n"
# 851 "data/maps/MtChimney/scripts.pory"
	.string "Hot Spring with the locals!$"
# 852 "data/maps/MtChimney/scripts.pory"

# 853 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 854 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 855 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my PokéNav.$"
# 856 "data/maps/MtChimney/scripts.pory"

# 857 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 858 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 859 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 860 "data/maps/MtChimney/scripts.pory"

# 861 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 862 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 863 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 864 "data/maps/MtChimney/scripts.pory"

# 865 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 866 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 867 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
