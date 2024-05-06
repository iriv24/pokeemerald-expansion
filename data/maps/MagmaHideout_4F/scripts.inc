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
	msgbox MagmaHideout_4F_Text_NotEvenYou, MSGBOX_DEFAULT
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_BOSS, 2
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceUp
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 89 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceLeft
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_BEAT_MAXIE_HIDEOUT, 1
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAXIE
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 116 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 117 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 118 "data/maps/MagmaHideout_4F/scripts.pory"

# 119 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 122 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 123 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 124 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 127 "data/maps/MagmaHideout_4F/scripts.pory"

# 128 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 132 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 133 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 135 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 136 "data/maps/MagmaHideout_4F/scripts.pory"

# 137 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 138 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntScared, MSGBOX_NPC
# 139 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 140 "data/maps/MagmaHideout_4F/scripts.pory"

# 141 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 142 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntScared2, MSGBOX_NPC
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 144 "data/maps/MagmaHideout_4F/scripts.pory"

# 145 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt13::
# 146 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntRightThing, MSGBOX_NPC
# 147 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 148 "data/maps/MagmaHideout_4F/scripts.pory"

# 149 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 150 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_NeverStopMaxie, MSGBOX_NPC
# 151 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 152 "data/maps/MagmaHideout_4F/scripts.pory"

# 153 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntScared:
# 154 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've had enough! I quit! I don't know\n"
# 155 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "what Maxie's doing back there, but he's\p"
# 156 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "going to bring this whole mountain down\n"
# 157 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "on top of us!$"
# 158 "data/maps/MagmaHideout_4F/scripts.pory"

# 159 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntScared2:
# 160 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hail Arceus, full of gra....$"
# 161 "data/maps/MagmaHideout_4F/scripts.pory"

# 162 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntRightThing:
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I hope I can still make it to Admin...$"
# 164 "data/maps/MagmaHideout_4F/scripts.pory"

# 165 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_NeverStopMaxie:
# 166 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You'll never stop Maxie now.\n"
# 167 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Mwuahahahahahaha!$"
# 168 "data/maps/MagmaHideout_4F/scripts.pory"

# 169 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Intro:
# 170 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not getting by me easily!$"
# 172 "data/maps/MagmaHideout_4F/scripts.pory"

# 173 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Defeat:
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Will I really make it to Admin like this?$"
# 175 "data/maps/MagmaHideout_4F/scripts.pory"

# 176 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13PostBattle:
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I did my best, sir.$"
# 178 "data/maps/MagmaHideout_4F/scripts.pory"

# 179 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 180 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You made it this far, so I'll tell you!\p"
# 182 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's right!\n"
# 183 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Up ahead, GROUDON is sleeping!\p"
# 184 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE went to GROUDON just seconds\n"
# 185 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "ago!\p"
# 186 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's going to awaken real soon!\n"
# 187 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe! Hehehe!$"
# 188 "data/maps/MagmaHideout_4F/scripts.pory"

# 189 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 190 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I may not have been able to defeat you,\n"
# 191 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "but I bet I still accomplished the\l"
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "mission...$"
# 193 "data/maps/MagmaHideout_4F/scripts.pory"

# 194 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 195 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "…And while you wasted time with me,\n"
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE should have awakened GROUDON…$"
# 197 "data/maps/MagmaHideout_4F/scripts.pory"

# 198 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 199 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon…\p"
# 200 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nothing could awaken you from your\n"
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "sleep bathed in magma…\p"
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This Red Orb though... This will awaken\n"
# 203 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "your Primal powers, won't it?\p"
# 204 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I have brought you the Red Orb.\n"
# 205 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Let its shine awaken you!\p"
# 206 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "And finally…\n"
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You will be mine!$"
# 208 "data/maps/MagmaHideout_4F/scripts.pory"

# 209 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieMasterBall:
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Master Ball, go!$"
# 211 "data/maps/MagmaHideout_4F/scripts.pory"

# 212 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieCaputredGroudon:
# 213 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "YES! Groudon is mine! And with this Red\n"
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Orb to unleash its Primal powers, there\l"
# 215 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is no one that can stop me...$"
# 216 "data/maps/MagmaHideout_4F/scripts.pory"

# 217 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_NotEvenYou:
# 218 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Not even you, {PLAYER}. Prepare to\n"
# 219 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "become the first witness of the\l"
# 220 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "terrible power of Primal Groudon!$"
# 221 "data/maps/MagmaHideout_4F/scripts.pory"

# 222 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 223 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: GROUDON!\n"
# 224 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What's wrong?\p"
# 225 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't the BLUE ORB the key?\p"
# 226 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "GROUDON!\n"
# 227 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Where have you gone…$"
# 228 "data/maps/MagmaHideout_4F/scripts.pory"

# 229 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou:
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: Oh, so it was you?\p"
# 231 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've seen you poking around uninvited\n"
# 232 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "here and there…\p"
# 233 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I get it now!\n"
# 234 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You must have pulled a cheap stunt!$"
# 235 "data/maps/MagmaHideout_4F/scripts.pory"

# 236 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 237 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "NO! No, no, no, no, NO!$"
# 238 "data/maps/MagmaHideout_4F/scripts.pory"

# 239 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 240 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What?! Groudon escaped my Master Ball?\n"
# 241 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's impossible! Perhaps its power\p"
# 242 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "cannot be contained after all...\n"
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 244 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Does this mean Groudon will start to\n"
# 245 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "rampage out of control?\p"
# 246 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 247 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "HAHAHAHA! Yes! Even if I failed to\n"
# 248 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "defeat you here, Groudon's rage cannot\p"
# 249 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "be quelled... You were too late,\n"
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{PLAYER}, Groudon is going to wreak\p"
# 251 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "havoc upon the world and there's\n"
# 252 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "nothing we can do to stop it!\l"
# 253 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "AHAHAHAHA!$"

MagmaHideout_EventScript_MaxieTrigger1::
# 257 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 258 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 259 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachMaxie1
# 260 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 261 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_Maxie
	end


MagmaHideout_EventScript_MaxieTrigger2::
# 265 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 266 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 267 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachMaxie2
# 268 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 269 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_Maxie
	end


ApproachMaxie1::
# 274 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 275 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 276 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


ApproachMaxie2::
# 279 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 280 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 281 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 282 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_EventScript_BackToBackTrigger::
# 286 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_EventScript_BackToBackScene
	end


MagmaHideout_EventScript_BackToBackScene::
# 291 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 292 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 293 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_LookAtTabitha
# 294 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 295 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 296 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 297 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox DelayForMaxie
# 298 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 299 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 300 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 301 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 302 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_ExclamationMark
# 303 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 304 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 305 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_WalkInPlaceFasterRight
# 306 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 307 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 308 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 309 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox GetThem
# 310 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 311 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_WalkInPlaceFasterRight
# 312 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox YesSir
# 313 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 314 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GRUNT_3, MagmaHideout_Movement_BackToBackGruntApproachPlayer
# 315 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 316 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_LookAtGrunt
# 317 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 318 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Defeat
# 319 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_DEFAULT
# 320 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 321 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GRUNT_3, GruntLost
# 322 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 323 "data/maps/MagmaHideout_4F/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT_3
# 324 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 325 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, MagmaHideout_Movement_BackToBackTabithaApproachPlayer
# 326 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 327 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_LookAtTabitha
# 328 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 329 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox DealWithYouMyself, MSGBOX_DEFAULT
# 330 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaDefeat
# 331 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox ThinkWeDidOurJobs, MSGBOX_DEFAULT
# 332 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 333 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, TabithaLost
# 334 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 335 "data/maps/MagmaHideout_4F/scripts.pory"
	copyobjectxytoperm LOCALID_TABITHA
# 336 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectmovementtype LOCALID_TABITHA, MOVEMENT_TYPE_FACE_RIGHT
# 337 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_BEAT_MAGMA_BACK_TO_BACK, 1
# 338 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
	end


MagmaHideout_Movement_BackToBackGruntApproachPlayer::
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 344 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 345 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 346 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_LookAtGrunt::
# 350 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 351 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_Movement_BackToBackTabithaApproachPlayer::
# 355 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 356 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_LookAtTabitha::
# 360 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 361 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


GruntLost::
# 365 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 366 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 367 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 368 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


TabithaLost::
# 372 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 373 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 374 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 375 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


SetMagmaAdminsPermLoc::
# 408 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_GRUNT_3, 38, 24
# 409 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 36, 22
# 410 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectmovementtype LOCALID_TABITHA, MOVEMENT_TYPE_FACE_RIGHT
	return


AddSleepingGroudon::
# 414 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP
# 415 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON_SLEEPING
	return


DelayForMaxie::
# 378 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Listen up, Courtney! We have to do\n"
	.string "everything we can to stall the brat! We\p"
	.string "know {PLAYER} is on their way here\n"
	.string "right now, and even though our coward\p"
	.string "comrades quit on us, we need to buy\n"
	.string "time for Maxie to capture Groudon!$"

GetThem::
# 387 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's {PLAYER}! Don't just stand there,\n"
	.string "get them!$"

YesSir::
# 392 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Yes, sir! I won't quit like my\n"
	.string "teammates!$"

DealWithYouMyself::
# 397 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Looks like I'll have to deal with you\n"
	.string "myself!$"

ThinkWeDidOurJobs::
# 402 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Something tells me we did our jobs... Do\n"
	.string "you feel that aura of power in the air?$"
