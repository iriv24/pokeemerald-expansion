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
	.byte 0
# 12 "data/maps/MagmaHideout_4F/scripts.pory"

# 13 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 15 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 23 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON_SLEEPING
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterDown
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieMasterBall, MSGBOX_DEFAULT
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieCaputredGroudon, MSGBOX_DEFAULT
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceLeft
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_NotEvenYou, MSGBOX_DEFAULT
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceUp
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceLeft
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 89 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_BEAT_MAXIE_HIDEOUT, 1
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAXIE
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 105 "data/maps/MagmaHideout_4F/scripts.pory"

# 106 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 114 "data/maps/MagmaHideout_4F/scripts.pory"

# 115 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 116 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 117 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 118 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 122 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 123 "data/maps/MagmaHideout_4F/scripts.pory"

# 124 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntScared, MSGBOX_NPC
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 127 "data/maps/MagmaHideout_4F/scripts.pory"

# 128 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntScared2, MSGBOX_NPC
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 131 "data/maps/MagmaHideout_4F/scripts.pory"

# 132 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt13::
# 133 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntRightThing, MSGBOX_NPC
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 135 "data/maps/MagmaHideout_4F/scripts.pory"

# 136 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 137 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_NeverStopMaxie, MSGBOX_NPC
# 138 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 139 "data/maps/MagmaHideout_4F/scripts.pory"

# 140 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntScared:
# 141 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've had enough! I quit! I don't know\n"
# 142 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "what Maxie's doing back there, but he's\p"
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "going to bring this whole mountain down\n"
# 144 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "on top of us!$"
# 145 "data/maps/MagmaHideout_4F/scripts.pory"

# 146 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntScared2:
# 147 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hail Arceus, full of gra....$"
# 148 "data/maps/MagmaHideout_4F/scripts.pory"

# 149 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntRightThing:
# 150 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I hope I can still make it to Admin...$"
# 151 "data/maps/MagmaHideout_4F/scripts.pory"

# 152 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_NeverStopMaxie:
# 153 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You'll never stop Maxie now.\n"
# 154 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Mwuahahahahahaha!$"
# 155 "data/maps/MagmaHideout_4F/scripts.pory"

# 156 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Intro:
# 157 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
# 158 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not getting by me easily!$"
# 159 "data/maps/MagmaHideout_4F/scripts.pory"

# 160 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Defeat:
# 161 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Will I really make it to Admin like this?$"
# 162 "data/maps/MagmaHideout_4F/scripts.pory"

# 163 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13PostBattle:
# 164 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I did my best, sir.$"
# 165 "data/maps/MagmaHideout_4F/scripts.pory"

# 166 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 167 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
# 168 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You made it this far, so I'll tell you!\p"
# 169 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's right!\n"
# 170 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Up ahead, GROUDON is sleeping!\p"
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE went to GROUDON just seconds\n"
# 172 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "ago!\p"
# 173 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's going to awaken real soon!\n"
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe! Hehehe!$"
# 175 "data/maps/MagmaHideout_4F/scripts.pory"

# 176 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I may not have been able to defeat you,\n"
# 178 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "but I bet I still accomplished the\l"
# 179 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "mission...$"
# 180 "data/maps/MagmaHideout_4F/scripts.pory"

# 181 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 182 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "…And while you wasted time with me,\n"
# 183 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE should have awakened GROUDON…$"
# 184 "data/maps/MagmaHideout_4F/scripts.pory"

# 185 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 186 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon…\p"
# 187 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nothing could awaken you from your\n"
# 188 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "sleep bathed in magma…\p"
# 189 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This Red Orb though... This will awaken\n"
# 190 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "your Primal powers, won't it?\p"
# 191 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I have brought you the Red Orb.\n"
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Let its shine awaken you!\p"
# 193 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "And finally…\n"
# 194 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You will be mine!$"
# 195 "data/maps/MagmaHideout_4F/scripts.pory"

# 196 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieMasterBall:
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Master Ball, go!$"
# 198 "data/maps/MagmaHideout_4F/scripts.pory"

# 199 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieCaputredGroudon:
# 200 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "YES! Groudon is mine! And with this Red\n"
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Orb to unleash its Primal powers, there\l"
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is no one that can stop me...$"
# 203 "data/maps/MagmaHideout_4F/scripts.pory"

# 204 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_NotEvenYou:
# 205 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Not even you, {PLAYER}. Prepare to\n"
# 206 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "become the first witness of the\l"
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "terrible power of Primal Groudon!$"
# 208 "data/maps/MagmaHideout_4F/scripts.pory"

# 209 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: GROUDON!\n"
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What's wrong?\p"
# 212 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't the BLUE ORB the key?\p"
# 213 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "GROUDON!\n"
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Where have you gone…$"
# 215 "data/maps/MagmaHideout_4F/scripts.pory"

# 216 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou:
# 217 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: Oh, so it was you?\p"
# 218 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've seen you poking around uninvited\n"
# 219 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "here and there…\p"
# 220 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I get it now!\n"
# 221 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You must have pulled a cheap stunt!$"
# 222 "data/maps/MagmaHideout_4F/scripts.pory"

# 223 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 224 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "NO! No, no, no, no, NO!$"
# 225 "data/maps/MagmaHideout_4F/scripts.pory"

# 226 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 227 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What?! Groudon escaped my Master Ball?\n"
# 228 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's impossible! Perhaps its power\p"
# 229 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "cannot be contained after all...\n"
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 231 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Does this mean Groudon will start to\n"
# 232 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "rampage out of control?\p"
# 233 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 234 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "HAHAHAHA! Yes! Even if I failed to\n"
# 235 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "defeat you here, Groudon's rage cannot\p"
# 236 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "be quelled... You were too late,\n"
# 237 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{PLAYER}, Groudon is going to wreak\p"
# 238 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "havoc upon the world and there's\n"
# 239 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "nothing we can do to stop it!\l"
# 240 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "AHAHAHAHA!$"

MagmaHideout_EventScript_MaxieTrigger1::
# 244 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 245 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 246 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachMaxie1
# 247 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 248 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_Maxie
	end


MagmaHideout_EventScript_MaxieTrigger2::
# 252 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 253 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 254 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachMaxie2
# 255 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 256 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_Maxie
	end


ApproachMaxie1::
# 261 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 262 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 263 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


ApproachMaxie2::
# 266 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 267 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 268 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 269 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_EventScript_BackToBackTrigger::
# 273 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_EventScript_BackToBackScene
	end


MagmaHideout_EventScript_BackToBackScene::
# 278 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 279 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 280 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 281 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 282 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox DelayForMaxie
# 283 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 284 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 285 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_WalkInPlaceFasterRight
# 286 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 287 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 288 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 289 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox GetThem
# 290 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 291 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_WalkInPlaceFasterRight
# 292 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox YesSir
# 293 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 294 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GRUNT_3, MagmaHideout_Movement_BackToBackGruntApproachPlayer
# 295 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 296 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_LookAtGrunt
# 297 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 298 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Defeat
# 299 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_DEFAULT
# 300 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 301 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GRUNT_3, GruntLost
# 302 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 303 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, MagmaHideout_Movement_BackToBackTabithaApproachPlayer
# 304 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 305 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_LookAtTabitha
# 306 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 307 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox DealWithYouMyself, MSGBOX_DEFAULT
# 308 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaDefeat
# 309 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox ThinkWeDidOurJobs, MSGBOX_DEFAULT
# 310 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 311 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, TabithaLost
# 312 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 313 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_BEAT_MAGMA_BACK_TO_BACK, 1
# 314 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
	end


MagmaHideout_Movement_BackToBackGruntApproachPlayer::
# 319 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 320 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 321 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 322 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_LookAtGrunt::
# 326 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 327 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_Movement_BackToBackTabithaApproachPlayer::
# 331 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 332 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_LookAtTabitha::
# 336 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 337 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


GruntLost::
# 341 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 342 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 344 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


TabithaLost::
# 348 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 349 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 350 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 351 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


DelayForMaxie::
# 354 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Listen up, Courtney! We have to do\n"
	.string "everything we can to stall the brat! We\p"
	.string "know {PLAYER} is on their way here\n"
	.string "right now, and even though our coward\p"
	.string "comrades quit on us, we need to buy\n"
	.string "time for Maxie to capture Groudon!$"

GetThem::
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's {PLAYER}! Don't just stand there,\n"
	.string "get them!$"

YesSir::
# 368 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Yes, sir! I won't quit like my\n"
	.string "teammates!$"

DealWithYouMyself::
# 373 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Looks like I'll have to deal with you\n"
	.string "myself!$"

ThinkWeDidOurJobs::
# 378 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Something tells me we did our jobs... Do\n"
	.string "you feel that aura of power in the air?$"
