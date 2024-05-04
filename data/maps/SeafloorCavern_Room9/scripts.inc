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
	end
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_OnLoad:
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_BEAT_AQUA_BACK_TO_BACK, 1, SetAquaAdminsPermLoc
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_EventScript_Archie::
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAwakenKyogre, MSGBOX_DEFAULT
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 17, 42, 0
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE_SLEEPING
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterDown
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieMasterBall, MSGBOX_DEFAULT
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieCaputredKyogre, MSGBOX_DEFAULT
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceLeft
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_YouObstacle, MSGBOX_DEFAULT
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_4F_Text_NotSurprised
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
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
	removeobject LOCALID_KYOGRE
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceLeft
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_TextKyogreAwakened, MSGBOX_DEFAULT
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerBackDown
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, ArchieWalkLeft
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_BEAT_ARCHIE_CAVERN, 1
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_Shelly::
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_ShellyAqua, MSGBOX_NPC
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_Matt::
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_NeverStopArchie, MSGBOX_NPC
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieMasterBall:
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Master Ball, go!$"
# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieCaputredKyogre:
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Excellent, Kyogre... Now, there is only\n"
# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "one more obstacle that stands in my\l"
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "way...$"
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAwakenKyogre:
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Kyogre…\p"
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Finally, the time has come for you to\n"
# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "awaken from your slumber.\p"
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You should react to the power within\n"
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "this Blue Orb... awaken, Kyogre, and join\l"
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "me, so that we may expand the sea!$"
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_YouObstacle:
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You, {PLAYER}. I respect your abilities\n"
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "as a Pokémon trainer, as\p"
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you've proven to be a thorn in my side\n"
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "for quite some time now... I only wish\p"
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "that you would have joined us instead...\n"
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But now, you are nothing but an\p"
# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "obstacle that stands between Team\n"
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Aqua and our dream of expanding the\p"
# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "sea. I'm sorry, {PLAYER}, but you've\n"
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "left me with no choice... Prepare to\l"
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "face the wrath of Primal Kyogre!$"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_NotSurprised:
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I really shouldn't be surprised at this\n"
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "point...$"
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_TextKyogreAwakened:
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What's this? Kyogre was powerful\n"
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "enough to escape my Master Ball? That\p"
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "should have been impossible... I wonder\n"
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "what Kyogre will do now that it's been \l"
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "awakened...$"
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_NeverStopArchie:
# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "HAHAHA you twerp, you don't have a\n"
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "chance against Archie.$"
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_ShellyAqua:
# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Our goals are finally becoming a\n"
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "reality. Once Archie deals with you,\l"
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "there will be no one to stop us.$"
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hold it right there.$"
# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\n"
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Behold!\p"
# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient POKéMON KYOGRE!\p"
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…$"
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: It surprises me, how you've\n"
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 325 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 326 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\p"
# 327 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted.\p"
# 329 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But!\n"
# 330 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 331 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this RED ORB, I can make KYOGRE…$"
# 332 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 333 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB suddenly began shining\n"
# 335 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 336 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 337 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 338 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: What?!\p"
# 339 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't do anything.\n"
# 340 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the RED ORB…\p"
# 341 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did KYOGRE go?$"
# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 343 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 344 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm? It's a message from our\n"
# 345 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "members outside…$"
# 346 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 347 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 348 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Yes, what is it?\p"
# 349 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 350 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 351 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I suppose that makes sense…\n"
# 352 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With Primal Kyogre now unleashed, we\p"
# 353 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "should expect to see heavy rains.\n"
# 354 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 355 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 356 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 357 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's concerning…\n"
# 358 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maybe this is something we should have\p"
# 359 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "considered more carefully…\n"
# 360 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\l"
# 361 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 362 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 363 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 364 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Perhaps we've made a mistake... \n"
# 365 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "unleashing Primal Kyogre onto the world\p"
# 366 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "with no control over it... I thought with\n"
# 367 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the Blue Orb and the Master ball I...$"
# 368 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 369 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 370 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: What have you wrought?\p"
# 371 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie… You've finally awoken Kyogre,\n"
# 372 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 373 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 374 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 375 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 376 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 377 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 378 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 379 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: W-what?!\n"
# 380 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 381 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wasn't it you, Team Magma, that\n"
# 382 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "awoke Primal Groudon?$"
# 383 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 384 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 385 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: We don't have the time to\n"
# 386 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 387 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\p"
# 388 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\n"
# 389 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 390 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 391 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 392 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: {PLAYER}, come on, you have\n"
# 393 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to get out of here, too!$"
# 394 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 395 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_ShellyDefeat:
# 396 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I failed again...$"
# 397 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 398 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_ShellyPostBattle:
# 399 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You're up, Matt.$"
# 400 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 401 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_MattDefeat:
# 402 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARGH! Another loss!$"
# 403 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 404 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_MattPostBattle:
# 405 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "These battles were meaningless anyway,\n"
# 406 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie is going to wipe the floor with\l"
# 407 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you, punk.$"

PlayerBackDown::
# 411 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 412 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 413 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 414 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 415 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ArchieWalkLeft::
# 419 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 420 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_EventScript_ArchieTrigger1::
# 424 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 425 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 426 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie1
# 427 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 428 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


SeafloorCavern_EventScript_ArchieTrigger2::
# 432 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 433 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 434 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie2
# 435 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 436 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


SeafloorCavern_EventScript_ArchieTrigger3::
# 440 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 441 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 442 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie3
# 443 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 444 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


ApproachArchie1::
# 449 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 450 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ApproachArchie2::
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 454 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 456 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ApproachArchie3::
# 459 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 460 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 461 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 462 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 463 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_EventScript_BackToBackTrigger::
# 467 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_BackToBackScene
	end


SeafloorCavern_EventScript_BackToBackScene::
# 472 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 473 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 474 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterLeft
# 475 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 476 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox CantStopArchie
# 477 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmessage
# 478 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 479 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 480 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 481 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_ExclamationMark
# 482 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 483 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 484 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterUp
# 485 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 486 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 487 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 488 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox ShellyRevenge
# 489 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmessage
# 490 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, SeafloorCavern_Movement_ShellyApproachPlayer
# 491 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 492 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_LookAtShelly
# 493 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox GoingDown
# 494 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Text_ShellyDefeat
# 495 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Text_ShellyPostBattle
# 496 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 497 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, ShellyLost
# 498 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 499 "data/maps/SeafloorCavern_Room9/scripts.pory"
	copyobjectxytoperm LOCALID_SHELLY
# 500 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 501 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, SeafloorCavern_Movement_BackToBackMattApproachPlayer
# 502 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 503 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_LookAtMatt
# 504 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 505 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox MattRevenge, MSGBOX_DEFAULT
# 506 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_MATT_SEAFLOOR_CAVERN, SeafloorCavern_Text_MattDefeat
# 507 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_MattPostBattle, MSGBOX_DEFAULT
# 508 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 509 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, MattLost
# 510 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 511 "data/maps/SeafloorCavern_Room9/scripts.pory"
	copyobjectxytoperm LOCALID_MATT
# 512 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_BEAT_AQUA_BACK_TO_BACK, 1
# 513 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
	end


SeafloorCavern_Movement_ShellyApproachPlayer::
# 518 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 519 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 520 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 521 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_Movement_BackToBackMattApproachPlayer::
# 525 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 526 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 527 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_LookAtShelly::
# 531 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 532 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_LookAtMatt::
# 536 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 537 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ShellyLost::
# 541 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 542 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 543 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 544 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


MattLost::
# 548 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 549 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 550 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 551 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SetAquaAdminsPermLoc::
# 576 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 14, 8
# 577 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_MATT, 10, 8
	return


CantStopArchie::
# 554 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hehehe.. Once Archie has control of\n"
	.string "Primal Kyogre, there's no one in the\l"
	.string "world that will be able to stop him...$"

ShellyRevenge::
# 560 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "This brat again... I'm getting my\n"
	.string "revenge for what happened at the\l"
	.string "Weather Institute!$"

GoingDown::
# 566 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You're going down!$"

MattRevenge::
# 570 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "And this is revenge for beating me\n"
	.string "at the Hideout in Lilycove!$"
