# 1 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE, 1
# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_ARCHIE, 2
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_MAXIE, 3
# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_1, 4
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_2, 5
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE_SLEEPING, 7
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_SHELLY, 8
# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_MATT, 9
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_MapScripts::
# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafloorCavern_Room9_OnTransition
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SeafloorCavern_Room9_OnLoad
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.byte 0
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_OnTransition:
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_BEAT_AQUA_BACK_TO_BACK, 1, SetAquaAdminsPermLoc
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_FOUGHT_AND_LOST_TO_BOSS, 1, AddSleepingKyogre
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_OnLoad:
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_BEAT_AQUA_BACK_TO_BACK, 1, SetAquaAdminsPermLoc
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_EventScript_Archie::
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_BOSS, 1
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAwakenKyogre, MSGBOX_DEFAULT
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 17, 42, 0
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE_SLEEPING
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterDown
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieMasterBall, MSGBOX_DEFAULT
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieCaputredKyogre, MSGBOX_DEFAULT
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceLeft
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ARCHIE
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HACKY_DOUBLE_BATTLE
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_double TRAINER_ARCHIE, SeafloorCavern_Room9_Text_YouObstacle, SeafloorCavern_4F_Text_NotSurprised, SeafloorCavern_4F_Text_NotSurprised, SeafloorCavern_EventScript_ArchieContinued
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_EventScript_ArchieContinued::
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HACKY_DOUBLE_BATTLE
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_BOSS, 2
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceLeft
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_TextKyogreAwakened, MSGBOX_DEFAULT
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerBackDown
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, ArchieWalkLeft
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_BEAT_ARCHIE_CAVERN, 1
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_Shelly::
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_ShellyAqua, MSGBOX_NPC
# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_Matt::
# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_NeverStopArchie, MSGBOX_NPC
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieMasterBall:
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Master Ball, go!$"
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieCaputredKyogre:
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Excellent, Kyogre… Now, there is only\n"
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "one more obstacle that stands in my\l"
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "way…$"
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAwakenKyogre:
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Kyogre…\p"
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Finally, the time has come for you to\n"
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "awaken from your slumber.\p"
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You should react to the power within\n"
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "this Blue Orb…\p"
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Awaken, Kyogre, and join me, so that\n"
# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "we may expand the sea!$"
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_YouObstacle:
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You, {PLAYER}. I respect your abilities\n"
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "as a Pokémon trainer, as you've\l"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "proven to be a thorn in my side\l"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "for quite some time now.\p"
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I only wish that you would have joined\n"
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "us instead…\p"
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But now, you are nothing but an\n"
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "obstacle that stands between Team\l"
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Aqua and our dream of expanding the\l"
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "sea!\p" 
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I'm sorry, {PLAYER}, but I warned you\n"
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "back at our Hideout that if we had to\l"
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "battle again, I wouldn't hold back.\p"
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Now, prepare to face the wrath of\n"
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Primal Kyogre!$"
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_NotSurprised:
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I really shouldn't be surprised at this\n"
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "point…$"
# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_TextKyogreAwakened:
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What's this? Kyogre was powerful\n"
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "enough to escape my Master Ball?\p"
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That should have been impossible…\n"
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I wonder what Kyogre will do now that\l"
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "it's been awakened…$"
# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_NeverStopArchie:
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "HAHAHA you twerp, you don't have a\n"
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "chance against Archie.$"
# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_ShellyAqua:
# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Our goals are finally becoming a\n"
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "reality. Once Archie deals with you,\l"
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "there will be no one to stop us.$"
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Hold it right there.$"
# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Fufufu…\n"
# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Behold!\p"
# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient Pokémon KYOGRE!\p"
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 325 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…$"
# 326 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 327 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: It surprises me, how you've\n"
# 329 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 330 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 331 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 332 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 333 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 335 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 336 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 337 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 338 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 339 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Fufufu…\p"
# 340 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 341 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted.\p"
# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But!\n"
# 343 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 344 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this RED ORB, I can make KYOGRE…$"
# 345 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 346 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 347 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB suddenly began shining\n"
# 348 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 349 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 350 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 351 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: What?!\p"
# 352 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't do anything.\n"
# 353 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the RED ORB…\p"
# 354 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did KYOGRE go?$"
# 355 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 356 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 357 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm? It's a message from our\n"
# 358 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "members outside…$"
# 359 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 360 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 361 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Yes, what is it?\p"
# 362 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 363 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 364 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I suppose that makes sense…\n"
# 365 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With Primal Kyogre now unleashed, we\l"
# 366 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "should expect to see heavy rains.\p"
# 367 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 368 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 369 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 370 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's concerning…\n"
# 371 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maybe this is something we should have\l"
# 372 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "considered more carefully…\p"
# 373 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\n"
# 374 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 375 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 376 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 377 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Perhaps we've made a mistake… \n"
# 378 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "unleashing Primal Kyogre onto the world\l"
# 379 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "with no control over it… I thought with\l"
# 380 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the Blue Orb and the Master ball I…$"
# 381 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 382 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 383 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: What have you wrought Archie?\n"
# 384 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You've finally awoken Kyogre,\l"
# 385 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 386 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 387 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 388 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 389 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 390 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 391 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 392 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: W-what?!\n"
# 393 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 394 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wasn't it you, Team Magma, that\n"
# 395 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "awoke Primal Groudon?$"
# 396 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 397 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 398 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: We don't have the time to\n"
# 399 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 400 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\n"
# 401 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\l"
# 402 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 403 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 404 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 405 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: {PLAYER}, come on, you have\n"
# 406 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to get out of here, too!$"
# 407 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 408 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_ShellyDefeat:
# 409 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I failed again…$"
# 410 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 411 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_ShellyPostBattle:
# 412 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: You're up, Matt.$"
# 413 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 414 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_MattDefeat:
# 415 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARGH! Another loss!$"
# 416 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 417 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_MattPostBattle:
# 418 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Matt: These battles were meaningless\n"
# 419 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "anyway, Archie is going to wipe the\l"
# 420 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "floor with you, punk.$"

PlayerBackDown::
# 424 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 425 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 426 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 427 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 428 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ArchieWalkLeft::
# 432 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 433 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_EventScript_ArchieTrigger1::
# 437 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 438 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 439 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie1
# 440 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 441 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


SeafloorCavern_EventScript_ArchieTrigger2::
# 445 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 446 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 447 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie2
# 448 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 449 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


SeafloorCavern_EventScript_ArchieTrigger3::
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 454 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie3
# 456 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 457 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


ApproachArchie1::
# 462 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 463 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ApproachArchie2::
# 466 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 467 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 468 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 469 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ApproachArchie3::
# 472 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 473 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 474 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 475 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 476 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_EventScript_BackToBackTrigger::
# 480 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_BackToBackScene
	end


SeafloorCavern_EventScript_BackToBackScene::
# 485 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 486 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 487 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterRight
# 488 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 489 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox CantStopArchie
# 490 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmessage
# 491 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 492 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 493 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 494 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_ExclamationMark
# 495 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 496 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 497 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterUp
# 498 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 499 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 500 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 501 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox ShellyRevenge
# 502 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmessage
# 503 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, SeafloorCavern_Movement_ShellyApproachPlayer
# 504 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 505 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_LookAtShelly
# 506 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox GoingDown
# 507 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Text_ShellyDefeat
# 508 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Text_ShellyPostBattle
# 509 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 510 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, ShellyLost
# 511 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 512 "data/maps/SeafloorCavern_Room9/scripts.pory"
	copyobjectxytoperm LOCALID_SHELLY
# 513 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 514 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, SeafloorCavern_Movement_BackToBackMattApproachPlayer
# 515 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 516 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_LookAtMatt
# 517 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 518 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox MattRevenge, MSGBOX_DEFAULT
# 519 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_MATT_SEAFLOOR_CAVERN, SeafloorCavern_Text_MattDefeat
# 520 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_MattPostBattle, MSGBOX_DEFAULT
# 521 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 522 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, MattLost
# 523 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 524 "data/maps/SeafloorCavern_Room9/scripts.pory"
	copyobjectxytoperm LOCALID_MATT
# 525 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_BEAT_AQUA_BACK_TO_BACK, 1
# 526 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
	end


SeafloorCavern_Movement_ShellyApproachPlayer::
# 531 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 532 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 533 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 534 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_Movement_BackToBackMattApproachPlayer::
# 538 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 539 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 540 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_LookAtShelly::
# 544 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 545 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_LookAtMatt::
# 549 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 550 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ShellyLost::
# 554 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 555 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 556 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 557 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


MattLost::
# 561 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 562 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 563 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 564 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SetAquaAdminsPermLoc::
# 590 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 14, 8
# 591 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_MATT, 10, 8
	return


AddSleepingKyogre::
# 596 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP
# 597 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE_SLEEPING
	return


CantStopArchie::
# 567 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Matt: Hehehe… Once Archie has control\n"
	.string "of Primal Kyogre, there's no one in the\l"
	.string "world that will be able to stop him…$"

ShellyRevenge::
# 573 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: This brat again… I'm getting my\n"
	.string "revenge for what happened at the\l"
	.string "Weather Institute!$"

GoingDown::
# 579 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: You're going down!$"

MattRevenge::
# 583 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Matt: Hehehe… I've been waiting to get\n"
	.string "you back, punk.\l"
	.string "There's no way you're getting past me!$"
