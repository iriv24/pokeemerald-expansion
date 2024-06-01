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
	msgbox SeafloorCavern_Room9_Text_YouObstacle, MSGBOX_DEFAULT
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_4F_Text_NotSurprised
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_BOSS, 2
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceLeft
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_TextKyogreAwakened, MSGBOX_DEFAULT
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerBackDown
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, ArchieWalkLeft
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_BEAT_ARCHIE_CAVERN, 1
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_Shelly::
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_ShellyAqua, MSGBOX_NPC
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_Matt::
# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_NeverStopArchie, MSGBOX_NPC
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieMasterBall:
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Master Ball, go!$"
# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieCaputredKyogre:
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Excellent, Kyogre… Now, there is only\n"
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "one more obstacle that stands in my\l"
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "way…$"
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAwakenKyogre:
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Kyogre…\p"
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Finally, the time has come for you to\n"
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "awaken from your slumber.\p"
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You should react to the power within\n"
# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "this Blue Orb… awaken, Kyogre, and join\l"
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "me, so that we may expand the sea!$"
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_YouObstacle:
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You, {PLAYER}. I respect your abilities\n"
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "as a Pokémon trainer, as\l"
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you've proven to be a thorn in my side\l"
# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "for quite some time now…\p"
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I only wish that you would have joined\n"
# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "us instead…\p"
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But now, you are nothing but an\n"
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "obstacle that stands between Team\l"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Aqua and our dream of expanding the\l"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "sea.\p" 
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I'm sorry, {PLAYER}, but you've\n"
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "left me with no choice… Prepare to\l"
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "face the wrath of Primal Kyogre!$"
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_NotSurprised:
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I really shouldn't be surprised at this\n"
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "point…$"
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_TextKyogreAwakened:
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What's this? Kyogre was powerful\n"
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "enough to escape my Master Ball?\p"
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That should have been impossible…\n"
# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I wonder what Kyogre will do now that\l"
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "it's been awakened…$"
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_NeverStopArchie:
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "HAHAHA you twerp, you don't have a\n"
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "chance against Archie.$"
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_ShellyAqua:
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Our goals are finally becoming a\n"
# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "reality. Once Archie deals with you,\l"
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "there will be no one to stop us.$"
# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hold it right there.$"
# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\n"
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Behold!\p"
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient POKéMON KYOGRE!\p"
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…$"
# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: It surprises me, how you've\n"
# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 325 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 326 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 327 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 329 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 330 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 331 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\p"
# 332 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 333 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted.\p"
# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But!\n"
# 335 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 336 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this RED ORB, I can make KYOGRE…$"
# 337 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 338 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 339 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB suddenly began shining\n"
# 340 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 341 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 343 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: What?!\p"
# 344 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't do anything.\n"
# 345 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the RED ORB…\p"
# 346 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did KYOGRE go?$"
# 347 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 348 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 349 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm? It's a message from our\n"
# 350 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "members outside…$"
# 351 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 352 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 353 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Yes, what is it?\p"
# 354 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 355 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 356 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I suppose that makes sense…\n"
# 357 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With Primal Kyogre now unleashed, we\l"
# 358 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "should expect to see heavy rains.\p"
# 359 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 360 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 361 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 362 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's concerning…\n"
# 363 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maybe this is something we should have\l"
# 364 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "considered more carefully…\p"
# 365 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\n"
# 366 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 367 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 368 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 369 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Perhaps we've made a mistake… \n"
# 370 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "unleashing Primal Kyogre onto the world\l"
# 371 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "with no control over it… I thought with\l"
# 372 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the Blue Orb and the Master ball I…$"
# 373 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 374 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 375 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: What have you wrought?\p"
# 376 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie… You've finally awoken Kyogre,\n"
# 377 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 378 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 379 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 380 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 381 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 382 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 383 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 384 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: W-what?!\n"
# 385 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 386 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wasn't it you, Team Magma, that\n"
# 387 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "awoke Primal Groudon?$"
# 388 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 389 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 390 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: We don't have the time to\n"
# 391 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 392 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\n"
# 393 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\l"
# 394 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 395 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 396 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 397 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: {PLAYER}, come on, you have\n"
# 398 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to get out of here, too!$"
# 399 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 400 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_ShellyDefeat:
# 401 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I failed again…$"
# 402 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 403 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_ShellyPostBattle:
# 404 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: You're up, Matt.$"
# 405 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 406 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_MattDefeat:
# 407 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARGH! Another loss!$"
# 408 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 409 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_MattPostBattle:
# 410 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Matt: These battles were meaningless\n"
# 411 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "anyway, Archie is going to wipe the\l"
# 412 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "floor with you, punk.$"

PlayerBackDown::
# 416 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 417 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 418 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 419 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 420 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ArchieWalkLeft::
# 424 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 425 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_EventScript_ArchieTrigger1::
# 429 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 430 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 431 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie1
# 432 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 433 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


SeafloorCavern_EventScript_ArchieTrigger2::
# 437 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 438 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 439 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie2
# 440 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 441 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


SeafloorCavern_EventScript_ArchieTrigger3::
# 445 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 446 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 447 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie3
# 448 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 449 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


ApproachArchie1::
# 454 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ApproachArchie2::
# 458 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 459 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 460 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 461 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ApproachArchie3::
# 464 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 465 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 466 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 467 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 468 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_EventScript_BackToBackTrigger::
# 472 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_BackToBackScene
	end


SeafloorCavern_EventScript_BackToBackScene::
# 477 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 478 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 479 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterRight
# 480 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 481 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox CantStopArchie
# 482 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmessage
# 483 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 484 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 485 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 486 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_ExclamationMark
# 487 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 488 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 489 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterUp
# 490 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 491 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 492 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 493 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox ShellyRevenge
# 494 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmessage
# 495 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, SeafloorCavern_Movement_ShellyApproachPlayer
# 496 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 497 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_LookAtShelly
# 498 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox GoingDown
# 499 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Text_ShellyDefeat
# 500 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Text_ShellyPostBattle
# 501 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 502 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, ShellyLost
# 503 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 504 "data/maps/SeafloorCavern_Room9/scripts.pory"
	copyobjectxytoperm LOCALID_SHELLY
# 505 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 506 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, SeafloorCavern_Movement_BackToBackMattApproachPlayer
# 507 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 508 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_LookAtMatt
# 509 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 510 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox MattRevenge, MSGBOX_DEFAULT
# 511 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_MATT_SEAFLOOR_CAVERN, SeafloorCavern_Text_MattDefeat
# 512 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_MattPostBattle, MSGBOX_DEFAULT
# 513 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 514 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, MattLost
# 515 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 516 "data/maps/SeafloorCavern_Room9/scripts.pory"
	copyobjectxytoperm LOCALID_MATT
# 517 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_BEAT_AQUA_BACK_TO_BACK, 1
# 518 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
	end


SeafloorCavern_Movement_ShellyApproachPlayer::
# 523 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 524 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 525 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 526 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_Movement_BackToBackMattApproachPlayer::
# 530 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 531 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 532 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_LookAtShelly::
# 536 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 537 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_LookAtMatt::
# 541 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 542 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ShellyLost::
# 546 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 547 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 548 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 549 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


MattLost::
# 553 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 554 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 555 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 556 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SetAquaAdminsPermLoc::
# 581 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 14, 8
# 582 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_MATT, 10, 8
	return


AddSleepingKyogre::
# 587 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP
# 588 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE_SLEEPING
	return


CantStopArchie::
# 559 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Matt: Hehehe.. Once Archie has control\n"
	.string "of Primal Kyogre, there's no one in the\l"
	.string "world that will be able to stop him…$"

ShellyRevenge::
# 565 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: This brat again… I'm getting my\n"
	.string "revenge for what happened at the\l"
	.string "Weather Institute!$"

GoingDown::
# 571 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: You're going down!$"

MattRevenge::
# 575 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Matt: And this is revenge for beating\n"
	.string "me at the Hideout in Lilycove!$"
