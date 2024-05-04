# 1 "data/maps/MagmaHideout_4F/scripts.pory"

# 2 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON, 1
# 3 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_1, 2
# 4 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_2, 3
# 5 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_3, 4
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
	end
# 18 "data/maps/MagmaHideout_4F/scripts.pory"

# 19 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_OnLoad:
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_eq VAR_BEAT_MAGMA_BACK_TO_BACK, 1, SetMagmaAdminsPermLoc
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 22 "data/maps/MagmaHideout_4F/scripts.pory"

# 23 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON_SLEEPING
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterDown
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieMasterBall, MSGBOX_DEFAULT
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieCaputredGroudon, MSGBOX_DEFAULT
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceLeft
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_NotEvenYou, MSGBOX_DEFAULT
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceUp
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
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
	removeobject LOCALID_GROUDON
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceLeft
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_BEAT_MAXIE_HIDEOUT, 1
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAXIE
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 115 "data/maps/MagmaHideout_4F/scripts.pory"

# 116 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 117 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 118 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 122 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 123 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 124 "data/maps/MagmaHideout_4F/scripts.pory"

# 125 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 127 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 128 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 132 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 133 "data/maps/MagmaHideout_4F/scripts.pory"

# 134 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 135 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntScared, MSGBOX_NPC
# 136 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 137 "data/maps/MagmaHideout_4F/scripts.pory"

# 138 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 139 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntScared2, MSGBOX_NPC
# 140 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 141 "data/maps/MagmaHideout_4F/scripts.pory"

# 142 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt13::
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntRightThing, MSGBOX_NPC
# 144 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 145 "data/maps/MagmaHideout_4F/scripts.pory"

# 146 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 147 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_NeverStopMaxie, MSGBOX_NPC
# 148 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 149 "data/maps/MagmaHideout_4F/scripts.pory"

# 150 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntScared:
# 151 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've had enough! I quit! I don't know\n"
# 152 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "what Maxie's doing back there, but he's\p"
# 153 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "going to bring this whole mountain down\n"
# 154 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "on top of us!$"
# 155 "data/maps/MagmaHideout_4F/scripts.pory"

# 156 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntScared2:
# 157 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hail Arceus, full of gra....$"
# 158 "data/maps/MagmaHideout_4F/scripts.pory"

# 159 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntRightThing:
# 160 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I hope I can still make it to Admin...$"
# 161 "data/maps/MagmaHideout_4F/scripts.pory"

# 162 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_NeverStopMaxie:
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You'll never stop Maxie now.\n"
# 164 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Mwuahahahahahaha!$"
# 165 "data/maps/MagmaHideout_4F/scripts.pory"

# 166 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Intro:
# 167 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
# 168 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not getting by me easily!$"
# 169 "data/maps/MagmaHideout_4F/scripts.pory"

# 170 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Defeat:
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Will I really make it to Admin like this?$"
# 172 "data/maps/MagmaHideout_4F/scripts.pory"

# 173 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13PostBattle:
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I did my best, sir.$"
# 175 "data/maps/MagmaHideout_4F/scripts.pory"

# 176 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
# 178 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You made it this far, so I'll tell you!\p"
# 179 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's right!\n"
# 180 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Up ahead, GROUDON is sleeping!\p"
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE went to GROUDON just seconds\n"
# 182 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "ago!\p"
# 183 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's going to awaken real soon!\n"
# 184 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe! Hehehe!$"
# 185 "data/maps/MagmaHideout_4F/scripts.pory"

# 186 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 187 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I may not have been able to defeat you,\n"
# 188 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "but I bet I still accomplished the\l"
# 189 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "mission...$"
# 190 "data/maps/MagmaHideout_4F/scripts.pory"

# 191 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "…And while you wasted time with me,\n"
# 193 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE should have awakened GROUDON…$"
# 194 "data/maps/MagmaHideout_4F/scripts.pory"

# 195 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon…\p"
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nothing could awaken you from your\n"
# 198 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "sleep bathed in magma…\p"
# 199 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This Red Orb though... This will awaken\n"
# 200 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "your Primal powers, won't it?\p"
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I have brought you the Red Orb.\n"
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Let its shine awaken you!\p"
# 203 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "And finally…\n"
# 204 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You will be mine!$"
# 205 "data/maps/MagmaHideout_4F/scripts.pory"

# 206 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieMasterBall:
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Master Ball, go!$"
# 208 "data/maps/MagmaHideout_4F/scripts.pory"

# 209 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieCaputredGroudon:
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "YES! Groudon is mine! And with this Red\n"
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Orb to unleash its Primal powers, there\l"
# 212 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is no one that can stop me...$"
# 213 "data/maps/MagmaHideout_4F/scripts.pory"

# 214 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_NotEvenYou:
# 215 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Not even you, {PLAYER}. Prepare to\n"
# 216 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "become the first witness of the\l"
# 217 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "terrible power of Primal Groudon!$"
# 218 "data/maps/MagmaHideout_4F/scripts.pory"

# 219 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 220 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: GROUDON!\n"
# 221 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What's wrong?\p"
# 222 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't the BLUE ORB the key?\p"
# 223 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "GROUDON!\n"
# 224 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Where have you gone…$"
# 225 "data/maps/MagmaHideout_4F/scripts.pory"

# 226 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou:
# 227 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: Oh, so it was you?\p"
# 228 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've seen you poking around uninvited\n"
# 229 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "here and there…\p"
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I get it now!\n"
# 231 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You must have pulled a cheap stunt!$"
# 232 "data/maps/MagmaHideout_4F/scripts.pory"

# 233 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 234 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "NO! No, no, no, no, NO!$"
# 235 "data/maps/MagmaHideout_4F/scripts.pory"

# 236 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 237 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What?! Groudon escaped my Master Ball?\n"
# 238 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's impossible! Perhaps its power\p"
# 239 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "cannot be contained after all...\n"
# 240 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 241 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Does this mean Groudon will start to\n"
# 242 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "rampage out of control?\p"
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 244 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "HAHAHAHA! Yes! Even if I failed to\n"
# 245 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "defeat you here, Groudon's rage cannot\p"
# 246 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "be quelled... You were too late,\n"
# 247 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{PLAYER}, Groudon is going to wreak\p"
# 248 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "havoc upon the world and there's\n"
# 249 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "nothing we can do to stop it!\l"
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "AHAHAHAHA!$"

MagmaHideout_EventScript_MaxieTrigger1::
# 254 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 255 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 256 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachMaxie1
# 257 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 258 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_Maxie
	end


MagmaHideout_EventScript_MaxieTrigger2::
# 262 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 263 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 264 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachMaxie2
# 265 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 266 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_Maxie
	end


ApproachMaxie1::
# 271 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 272 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 273 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


ApproachMaxie2::
# 276 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 277 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 278 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 279 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_EventScript_BackToBackTrigger::
# 283 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_EventScript_BackToBackScene
	end


MagmaHideout_EventScript_BackToBackScene::
# 288 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 289 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 290 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_LookAtTabitha
# 291 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 292 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 293 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 294 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox DelayForMaxie
# 295 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 296 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 297 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 298 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 299 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_ExclamationMark
# 300 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 301 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 302 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_WalkInPlaceFasterRight
# 303 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 304 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 305 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 306 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox GetThem
# 307 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 308 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_WalkInPlaceFasterRight
# 309 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox YesSir
# 310 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 311 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GRUNT_3, MagmaHideout_Movement_BackToBackGruntApproachPlayer
# 312 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 313 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_LookAtGrunt
# 314 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 315 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Defeat
# 316 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_DEFAULT
# 317 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 318 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GRUNT_3, GruntLost
# 319 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 320 "data/maps/MagmaHideout_4F/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT_3
# 321 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 322 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, MagmaHideout_Movement_BackToBackTabithaApproachPlayer
# 323 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 324 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_LookAtTabitha
# 325 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 326 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox DealWithYouMyself, MSGBOX_DEFAULT
# 327 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaDefeat
# 328 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox ThinkWeDidOurJobs, MSGBOX_DEFAULT
# 329 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 330 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, TabithaLost
# 331 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 332 "data/maps/MagmaHideout_4F/scripts.pory"
	copyobjectxytoperm LOCALID_TABITHA
# 333 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectmovementtype LOCALID_TABITHA, MOVEMENT_TYPE_FACE_RIGHT
# 334 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_BEAT_MAGMA_BACK_TO_BACK, 1
# 335 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
	end


MagmaHideout_Movement_BackToBackGruntApproachPlayer::
# 340 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 341 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 342 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_LookAtGrunt::
# 347 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 348 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_Movement_BackToBackTabithaApproachPlayer::
# 352 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 353 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_LookAtTabitha::
# 357 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 358 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


GruntLost::
# 362 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 364 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 365 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


TabithaLost::
# 369 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 370 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 371 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 372 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


SetMagmaAdminsPermLoc::
# 405 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_GRUNT_3, 38, 24
# 406 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 36, 22
# 407 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectmovementtype LOCALID_TABITHA, MOVEMENT_TYPE_FACE_RIGHT
	return


DelayForMaxie::
# 375 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Listen up, Courtney! We have to do\n"
	.string "everything we can to stall the brat! We\p"
	.string "know {PLAYER} is on their way here\n"
	.string "right now, and even though our coward\p"
	.string "comrades quit on us, we need to buy\n"
	.string "time for Maxie to capture Groudon!$"

GetThem::
# 384 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's {PLAYER}! Don't just stand there,\n"
	.string "get them!$"

YesSir::
# 389 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Yes, sir! I won't quit like my\n"
	.string "teammates!$"

DealWithYouMyself::
# 394 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Looks like I'll have to deal with you\n"
	.string "myself!$"

ThinkWeDidOurJobs::
# 399 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Something tells me we did our jobs... Do\n"
	.string "you feel that aura of power in the air?$"
