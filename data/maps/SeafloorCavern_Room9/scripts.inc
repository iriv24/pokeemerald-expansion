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
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto_if_ge SeafloorCavern_EventScript_ArchieSingle
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_double TRAINER_ARCHIE, SeafloorCavern_Room9_Text_YouObstacle, SeafloorCavern_4F_Text_NotSurprised, SeafloorCavern_4F_Text_NotSurprised, SeafloorCavern_EventScript_ArchieContinued
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_EventScript_ArchieSingle::
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_single TRAINER_ARCHIE_SFC_HC, SeafloorCavern_Room9_Text_YouObstacle, SeafloorCavern_4F_Text_NotSurprised, SeafloorCavern_4F_Text_NotSurprised, SeafloorCavern_EventScript_ArchieContinued
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_EventScript_ArchieContinued::
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HACKY_DOUBLE_BATTLE
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_BOSS, 2
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceLeft
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_TextKyogreAwakened, MSGBOX_DEFAULT
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerBackDown
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, ArchieWalkLeft
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_BEAT_ARCHIE_CAVERN, 1
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
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
SeafloorCavern_Room9_Movement_MaxieExit:
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_Shelly::
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_ShellyAqua, MSGBOX_NPC
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_Matt::
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_NeverStopArchie, MSGBOX_NPC
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieMasterBall:
# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Master Ball, go!$"
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieCaputredKyogre:
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Excellent, Kyogre… Now, there is only\n"
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "one more obstacle that stands in my\l"
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "way…$"
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAwakenKyogre:
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Kyogre…\p"
# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Finally, the time has come for you to\n"
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "awaken from your slumber.\p"
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You should react to the power within\n"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "this Blue Orb…\p"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Awaken, Kyogre, and join me, so that\n"
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "we may expand the sea!$"
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_YouObstacle:
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You, {PLAYER}. I respect your abilities\n"
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "as a Pokémon trainer, as you've\l"
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "proven to be a thorn in my side\l"
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "for quite some time now.\p"
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I only wish that you would have joined\n"
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "us instead…\p"
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But now, you are nothing but an\n"
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "obstacle that stands between Team\l"
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Aqua and our dream of expanding the\l"
# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "sea!\p" 
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I'm sorry, {PLAYER}, but I warned you\n"
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "back at our Hideout that if we had to\l"
# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "battle again, I wouldn't hold back.\p"
# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Now, prepare to face the wrath of\n"
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Primal Kyogre!$"
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_NotSurprised:
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I really shouldn't be surprised at this\n"
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "point…$"
# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_TextKyogreAwakened:
# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What's this? Kyogre was powerful\n"
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "enough to escape my Master Ball?\p"
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That should have been impossible…\n"
# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I wonder what Kyogre will do now that\l"
# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "it's been awakened…$"
# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_NeverStopArchie:
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "HAHAHA you twerp, you don't have a\n"
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "chance against Archie.$"
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_ShellyAqua:
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Our goals are finally becoming a\n"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "reality. Once Archie deals with you,\l"
# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "there will be no one to stop us.$"
# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Hold it right there.$"
# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Fufufu…\n"
# 325 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 326 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 327 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Behold!\p"
# 329 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 330 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient Pokémon KYOGRE!\p"
# 331 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 332 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…$"
# 333 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 335 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: It surprises me, how you've\n"
# 336 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 337 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 338 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 339 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 340 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 341 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 343 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 344 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 345 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 346 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Fufufu…\p"
# 347 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 348 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted.\p"
# 349 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But!\n"
# 350 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 351 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this RED ORB, I can make KYOGRE…$"
# 352 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 353 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 354 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB suddenly began shining\n"
# 355 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 356 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 357 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 358 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: What?!\p"
# 359 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't do anything.\n"
# 360 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the RED ORB…\p"
# 361 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did KYOGRE go?$"
# 362 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 363 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 364 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm? It's a message from our\n"
# 365 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "members outside…$"
# 366 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 367 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 368 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Yes, what is it?\p"
# 369 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 370 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 371 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I suppose that makes sense…\n"
# 372 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With Primal Kyogre now unleashed, we\l"
# 373 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "should expect to see heavy rains.\p"
# 374 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 375 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 376 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 377 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's concerning…\n"
# 378 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maybe this is something we should have\l"
# 379 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "considered more carefully…\p"
# 380 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\n"
# 381 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 382 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 383 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 384 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Perhaps we've made a mistake… \n"
# 385 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "unleashing Primal Kyogre onto the world\l"
# 386 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "with no control over it… I thought with\l"
# 387 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the Blue Orb and the Master ball I…$"
# 388 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 389 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 390 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: What have you wrought Archie?\n"
# 391 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You've finally awoken Kyogre,\l"
# 392 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 393 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 394 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 395 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 396 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 397 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 398 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 399 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: W-what?!\n"
# 400 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 401 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wasn't it you, Team Magma, that\n"
# 402 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "awoke Primal Groudon?$"
# 403 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 404 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 405 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: We don't have the time to\n"
# 406 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 407 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\n"
# 408 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\l"
# 409 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 410 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 411 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 412 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: {PLAYER}, come on, you have\n"
# 413 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to get out of here, too!$"
# 414 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 415 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_ShellyDefeat:
# 416 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I failed again…$"
# 417 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 418 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_ShellyPostBattle:
# 419 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: You're up, Matt.$"
# 420 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 421 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_MattDefeat:
# 422 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARGH! Another loss!$"
# 423 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 424 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_MattPostBattle:
# 425 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Matt: These battles were meaningless\n"
# 426 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "anyway, Archie is going to wipe the\l"
# 427 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "floor with you, punk.$"

PlayerBackDown::
# 431 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 432 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 433 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 434 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 435 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ArchieWalkLeft::
# 439 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 440 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_EventScript_ArchieTrigger1::
# 444 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 445 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 446 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie1
# 447 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 448 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


SeafloorCavern_EventScript_ArchieTrigger2::
# 452 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 454 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie2
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 456 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


SeafloorCavern_EventScript_ArchieTrigger3::
# 460 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 461 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 462 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie3
# 463 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 464 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


ApproachArchie1::
# 469 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 470 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ApproachArchie2::
# 473 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 474 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 475 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 476 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ApproachArchie3::
# 479 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 480 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 481 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 482 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 483 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_EventScript_BackToBackTrigger::
# 487 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_BackToBackScene
	end


SeafloorCavern_EventScript_BackToBackScene::
# 492 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 493 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 494 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterRight
# 495 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 496 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox CantStopArchie
# 497 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmessage
# 498 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 499 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 500 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 501 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_ExclamationMark
# 502 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 503 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 504 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterUp
# 505 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 506 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 507 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 508 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox ShellyRevenge
# 509 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmessage
# 510 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, SeafloorCavern_Movement_ShellyApproachPlayer
# 511 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 512 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_LookAtShelly
# 513 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox GoingDown
# 514 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Text_ShellyDefeat
# 515 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Text_ShellyPostBattle
# 516 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 517 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, ShellyLost
# 518 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 519 "data/maps/SeafloorCavern_Room9/scripts.pory"
	copyobjectxytoperm LOCALID_SHELLY
# 520 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 521 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, SeafloorCavern_Movement_BackToBackMattApproachPlayer
# 522 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 523 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_LookAtMatt
# 524 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 525 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox MattRevenge, MSGBOX_DEFAULT
# 526 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_MATT_SEAFLOOR_CAVERN, SeafloorCavern_Text_MattDefeat
# 527 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_MattPostBattle, MSGBOX_DEFAULT
# 528 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 529 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, MattLost
# 530 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 531 "data/maps/SeafloorCavern_Room9/scripts.pory"
	copyobjectxytoperm LOCALID_MATT
# 532 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_BEAT_AQUA_BACK_TO_BACK, 1
# 533 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
	end


SeafloorCavern_Movement_ShellyApproachPlayer::
# 538 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 539 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 540 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 541 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_Movement_BackToBackMattApproachPlayer::
# 545 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 546 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 547 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_LookAtShelly::
# 551 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 552 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_LookAtMatt::
# 556 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 557 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ShellyLost::
# 561 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 562 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 563 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 564 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


MattLost::
# 568 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 569 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 570 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 571 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SetAquaAdminsPermLoc::
# 597 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 14, 8
# 598 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_MATT, 10, 8
	return


AddSleepingKyogre::
# 603 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP
# 604 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE_SLEEPING
	return


CantStopArchie::
# 574 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Matt: Hehehe… Once Archie has control\n"
	.string "of Primal Kyogre, there's no one in the\l"
	.string "world that will be able to stop him…$"

ShellyRevenge::
# 580 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: This brat again… I'm getting my\n"
	.string "revenge for what happened at the\l"
	.string "Weather Institute!$"

GoingDown::
# 586 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: You're going down!$"

MattRevenge::
# 590 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Matt: Hehehe… I've been waiting to get\n"
	.string "you back, punk.\l"
	.string "There's no way you're getting past me!$"
