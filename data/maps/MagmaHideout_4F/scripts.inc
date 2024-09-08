# 1 "data/maps/MagmaHideout_4F/scripts.pory"

# 2 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON, 1
# 3 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_1, 2
# 4 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_2, 3
# 5 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCAL_ID_COURTNEY, 4
# 6 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_TABITHA, 5
# 7 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_MAXIE, 6
# 8 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON_SLEEPING, 7
# 9 "data/maps/MagmaHideout_4F/scripts.pory"

# 10 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_MapScripts::
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_4F_OnTransition
# 12 "data/maps/MagmaHideout_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MagmaHideout_4F_OnLoad
# 13 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 14 "data/maps/MagmaHideout_4F/scripts.pory"

# 15 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_OnTransition:
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_eq VAR_BEAT_MAGMA_BACK_TO_BACK, 1, SetMagmaAdminsPermLoc
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_eq VAR_FOUGHT_AND_LOST_TO_BOSS, 1, AddSleepingGroudon
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 19 "data/maps/MagmaHideout_4F/scripts.pory"

# 20 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_OnLoad:
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_eq VAR_BEAT_MAGMA_BACK_TO_BACK, 1, SetMagmaAdminsPermLoc
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 23 "data/maps/MagmaHideout_4F/scripts.pory"

# 24 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_BOSS, 1
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON_SLEEPING
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterDown
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieMasterBall, MSGBOX_DEFAULT
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieCaputredGroudon, MSGBOX_DEFAULT
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceLeft
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_MAXIE
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HACKY_DOUBLE_BATTLE
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_double TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_NotEvenYou, MagmaHideout_4F_Text_MaxieDefeat, MagmaHideout_4F_Text_MaxieDefeat, MagmaHideout_4F_EventScript_MaxieContinued
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 71 "data/maps/MagmaHideout_4F/scripts.pory"

# 72 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_MaxieContinued::
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HACKY_DOUBLE_BATTLE
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_BOSS, 2
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceUp
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 89 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceLeft
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_BEAT_MAXIE_HIDEOUT, 1
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAXIE
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 116 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 117 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCAL_ID_COURTNEY
# 118 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 122 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 123 "data/maps/MagmaHideout_4F/scripts.pory"

# 124 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 127 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 128 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 132 "data/maps/MagmaHideout_4F/scripts.pory"

# 133 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 135 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 136 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 137 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 138 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 139 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 140 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 141 "data/maps/MagmaHideout_4F/scripts.pory"

# 142 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntScared, MSGBOX_NPC
# 144 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 145 "data/maps/MagmaHideout_4F/scripts.pory"

# 146 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 147 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntScared2, MSGBOX_NPC
# 148 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 149 "data/maps/MagmaHideout_4F/scripts.pory"

# 150 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt13::
# 151 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntRightThing, MSGBOX_NPC
# 152 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 153 "data/maps/MagmaHideout_4F/scripts.pory"

# 154 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 155 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_NeverStopMaxie, MSGBOX_NPC
# 156 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 157 "data/maps/MagmaHideout_4F/scripts.pory"

# 158 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntScared:
# 159 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've had enough! I quit! I don't know\n"
# 160 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "what Maxie's doing back there, but he's\l"
# 161 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "going to bring this whole mountain down\l"
# 162 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "on top of us!$"
# 163 "data/maps/MagmaHideout_4F/scripts.pory"

# 164 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntScared2:
# 165 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hail Arceus, full of gra….$"
# 166 "data/maps/MagmaHideout_4F/scripts.pory"

# 167 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntRightThing:
# 168 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I can't believe I lost to you again…$"
# 169 "data/maps/MagmaHideout_4F/scripts.pory"

# 170 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_NeverStopMaxie:
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You'll never stop Maxie now.\n"
# 172 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Mwuahahahahahaha!$"
# 173 "data/maps/MagmaHideout_4F/scripts.pory"

# 174 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Intro:
# 175 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
# 176 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not getting by me easily!$"
# 177 "data/maps/MagmaHideout_4F/scripts.pory"

# 178 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Defeat:
# 179 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I can't believe I lost to you again…$"
# 180 "data/maps/MagmaHideout_4F/scripts.pory"

# 181 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13PostBattle:
# 182 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Courtney: {PLAYER} is weakened now,\n"
# 183 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "finish them off, Tabitha.$"
# 184 "data/maps/MagmaHideout_4F/scripts.pory"

# 185 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 186 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
# 187 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You made it this far, so I'll tell you!\p"
# 188 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's right!\n"
# 189 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Up ahead, GROUDON is sleeping!\p"
# 190 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE went to GROUDON just seconds\n"
# 191 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "ago!\p"
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's going to awaken real soon!\n"
# 193 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe! Hehehe!$"
# 194 "data/maps/MagmaHideout_4F/scripts.pory"

# 195 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I may not have been able to defeat you,\n"
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "but I bet I still accomplished the\l"
# 198 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "mission…$"
# 199 "data/maps/MagmaHideout_4F/scripts.pory"

# 200 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "…And while you wasted time with me,\n"
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE should have awakened GROUDON…$"
# 203 "data/maps/MagmaHideout_4F/scripts.pory"

# 204 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 205 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon…\p"
# 206 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nothing could awaken you from your\n"
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "sleep bathed in magma…\p"
# 208 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This Red Orb though… This will awaken\n"
# 209 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "your Primal powers, won't it?\p"
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I have brought you the Red Orb.\n"
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Let its shine awaken you!\p"
# 212 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "And finally…\n"
# 213 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You will be mine!$"
# 214 "data/maps/MagmaHideout_4F/scripts.pory"

# 215 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieMasterBall:
# 216 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Master Ball, go!$"
# 217 "data/maps/MagmaHideout_4F/scripts.pory"

# 218 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieCaputredGroudon:
# 219 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "YES! Groudon is mine! And with this Red\n"
# 220 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Orb to unleash its Primal powers, there\l"
# 221 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is no one that can stop me…$"
# 222 "data/maps/MagmaHideout_4F/scripts.pory"

# 223 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_NotEvenYou:
# 224 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Not even you, {PLAYER}. Prepare to\n"
# 225 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "become the first witness of the\l"
# 226 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "terrible power of Primal Groudon!$"
# 227 "data/maps/MagmaHideout_4F/scripts.pory"

# 228 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 229 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: GROUDON!\n"
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What's wrong?\p"
# 231 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't the BLUE ORB the key?\p"
# 232 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "GROUDON!\n"
# 233 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Where have you gone…$"
# 234 "data/maps/MagmaHideout_4F/scripts.pory"

# 235 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou:
# 236 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Oh, so it was you?\p"
# 237 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've seen you poking around uninvited\n"
# 238 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "here and there…\p"
# 239 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I get it now!\n"
# 240 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You must have pulled a cheap stunt!$"
# 241 "data/maps/MagmaHideout_4F/scripts.pory"

# 242 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "NO! No, no, no, no, NO!$"
# 244 "data/maps/MagmaHideout_4F/scripts.pory"

# 245 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 246 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What?! Groudon escaped my Master Ball?\n"
# 247 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's impossible! Perhaps its power\l"
# 248 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "cannot be contained after all…\p"
# 249 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Does this mean Groudon will start to\n"
# 251 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "rampage out of control?\p"
# 252 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 253 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This wasn't a part of my plan…\p"
# 254 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I never intended for things to go this\n"
# 255 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "way, I wanted to be in full control of\l"
# 256 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon to reshape the Earth, but now…\p"
# 257 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I have to go, I fear I may have made a\n"
# 258 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "grave mistake.$"

MagmaHideout_EventScript_MaxieTrigger1::
# 262 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 263 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 264 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachMaxie1
# 265 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 266 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_Maxie
	end


MagmaHideout_EventScript_MaxieTrigger2::
# 270 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 271 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 272 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachMaxie2
# 273 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 274 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_Maxie
	end


ApproachMaxie1::
# 279 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 280 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 281 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


ApproachMaxie2::
# 284 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 285 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 286 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 287 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_EventScript_BackToBackTrigger::
# 291 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_EventScript_BackToBackScene
	end


MagmaHideout_EventScript_BackToBackScene::
# 296 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 297 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 298 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_LookAtTabitha
# 299 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 300 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 301 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 302 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox DelayForMaxie
# 303 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 304 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 305 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 306 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 307 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCAL_ID_COURTNEY, Common_Movement_ExclamationMark
# 308 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 309 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 310 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCAL_ID_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 311 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 312 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 313 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 314 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox GetThem
# 315 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 316 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCAL_ID_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 317 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox YesSir
# 318 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 319 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCAL_ID_COURTNEY, MagmaHideout_Movement_BackToBackGruntApproachPlayer
# 320 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 321 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_LookAtGrunt
# 322 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 323 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_COURTNEY, MagmaHideout_4F_Text_Grunt13Defeat
# 324 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_DEFAULT
# 325 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 326 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCAL_ID_COURTNEY, GruntLost
# 327 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 328 "data/maps/MagmaHideout_4F/scripts.pory"
	copyobjectxytoperm LOCAL_ID_COURTNEY
# 329 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 330 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, MagmaHideout_Movement_BackToBackTabithaApproachPlayer
# 331 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 332 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_LookAtTabitha
# 333 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 334 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox DealWithYouMyself, MSGBOX_DEFAULT
# 335 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaDefeat
# 336 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox ThinkWeDidOurJobs, MSGBOX_DEFAULT
# 337 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 338 "data/maps/MagmaHideout_4F/scripts.pory"
	fadenewbgm MUS_AQUA_MAGMA_HIDEOUT
# 339 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, TabithaLost
# 340 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 341 "data/maps/MagmaHideout_4F/scripts.pory"
	copyobjectxytoperm LOCALID_TABITHA
# 342 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectmovementtype LOCALID_TABITHA, MOVEMENT_TYPE_FACE_RIGHT
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_BEAT_MAGMA_BACK_TO_BACK, 1
# 344 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
	end


MagmaHideout_Movement_BackToBackGruntApproachPlayer::
# 349 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 350 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 351 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 352 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_LookAtGrunt::
# 356 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 357 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_Movement_BackToBackTabithaApproachPlayer::
# 361 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 362 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_LookAtTabitha::
# 366 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 367 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


GruntLost::
# 371 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 372 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 373 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 374 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


TabithaLost::
# 378 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 379 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 380 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 381 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


SetMagmaAdminsPermLoc::
# 417 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCAL_ID_COURTNEY, 38, 24
# 418 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 36, 22
# 419 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectmovementtype LOCALID_TABITHA, MOVEMENT_TYPE_FACE_RIGHT
	return


AddSleepingGroudon::
# 423 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP
# 424 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON_SLEEPING
	return


DelayForMaxie::
# 384 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: Listen up, Courtney! We have\n"
	.string "to do everything we can to stall\l"
	.string "that brat!\p"
	.string "We know {PLAYER} is on their way here\n"
	.string "right now, and even though our coward\l"
	.string "comrades quit on us, we need to buy\l"
	.string "time for Maxie to capture Groudon!$"

GetThem::
# 394 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: It's {PLAYER}! Don't just\n"
	.string "stand there, get them!$"

YesSir::
# 399 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Courtney: You're not my boss anymore,\n"
	.string "Tabitha. We're equals.\p"
	.string "But I'll pummel this brat as revenge for\n"
	.string "Mt. Chimney!$"

DealWithYouMyself::
# 406 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: Looks like I get to deal the\n"
	.string "final blow myself!$"

ThinkWeDidOurJobs::
# 411 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Something tells me we did our jobs… Do\n"
	.string "you feel that aura of power in the air?$"
