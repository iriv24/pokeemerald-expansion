# 1 "data/maps/SkyPillar_Top/scripts.pory"

# 2 "data/maps/SkyPillar_Top/scripts.pory"
.set LOCALID_RAYQUAZA_SLEEPING, 1
# 3 "data/maps/SkyPillar_Top/scripts.pory"
.set LOCALID_DRAKE, 3
# 4 "data/maps/SkyPillar_Top/scripts.pory"

# 5 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_MapScripts::
# 6 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_Top_OnResume
# 7 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Top_OnTransition
# 8 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SkyPillar_Top_OnWarp
# 9 "data/maps/SkyPillar_Top/scripts.pory"
	.byte 0
# 10 "data/maps/SkyPillar_Top/scripts.pory"

# 11 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume:
# 12 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_EventScript_TryRemoveRayquaza
# 13 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 14 "data/maps/SkyPillar_Top/scripts.pory"

# 15 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza::
# 16 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 17 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 18 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 19 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 20 "data/maps/SkyPillar_Top/scripts.pory"

# 21 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition:
# 22 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_SetCleanLayout
# 23 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_TryShowRayquaza
# 24 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_eq VAR_FOUGHT_AND_LOST_TO_DRAKE, 1, AddSleepingRayRay
# 25 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 26 "data/maps/SkyPillar_Top/scripts.pory"

# 27 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetCleanLayout::
# 28 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 29 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
# 30 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 31 "data/maps/SkyPillar_Top/scripts.pory"

# 32 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza::
# 33 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_ShowRayquaza
# 34 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 35 "data/maps/SkyPillar_Top/scripts.pory"

# 36 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShowRayquaza::
# 37 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
# 38 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 39 "data/maps/SkyPillar_Top/scripts.pory"

# 40 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnWarp:
# 41 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
# 42 "data/maps/SkyPillar_Top/scripts.pory"
	.2byte 0
# 43 "data/maps/SkyPillar_Top/scripts.pory"

# 44 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 45 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 46 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 47 "data/maps/SkyPillar_Top/scripts.pory"

# 48 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 49 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 50 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 51 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 52 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 53 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 55 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 56 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 57 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 58 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
# 61 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
# 62 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
# 63 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 66 "data/maps/SkyPillar_Top/scripts.pory"

# 67 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 69 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 70 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 71 "data/maps/SkyPillar_Top/scripts.pory"

# 72 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 74 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 75 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 76 "data/maps/SkyPillar_Top/scripts.pory"

# 77 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 78 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 79 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 80 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 82 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 83 "data/maps/SkyPillar_Top/scripts.pory"

# 84 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 87 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 88 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 89 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 92 "data/maps/SkyPillar_Top/scripts.pory"

# 93 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Drake::
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_DRAKE, 1
# 95 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_DrakeAwakenRayquaza, MSGBOX_DEFAULT
# 96 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 97 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 99 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_FaceDown
# 100 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_DrakesPlan, MSGBOX_DEFAULT
# 101 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	trainerbattle_no_intro TRAINER_DRAKE, SkyPillar_Top_Text_DrakeDefeat
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 104 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_DRAKE, 2
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	addobject LOCALID_RAYQUAZA_SLEEPING
# 107 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_FaceUp
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_DRAKE, BackAwayFromRayRay
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 116 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 119 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 127 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 131 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 146 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 147 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_DRAKE
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_FaceDown
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_DrakeFarewell, MSGBOX_DEFAULT
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	delay 50
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	setfieldeffectargument 0, 1
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	delay 15
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_DRAKE
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 164 "data/maps/SkyPillar_Top/scripts.pory"

# 165 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 166 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 167 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 168 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 169 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 172 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 175 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 178 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 179 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 180 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 181 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 182 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 183 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 184 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 185 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 186 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 187 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 188 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 189 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 190 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 191 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 192 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 193 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 194 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 195 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 196 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 197 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 198 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 199 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 200 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 201 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 202 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 203 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 204 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 205 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 206 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 207 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 208 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 209 "data/maps/SkyPillar_Top/scripts.pory"

# 210 "data/maps/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 211 "data/maps/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 212 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 213 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 214 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 215 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 216 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 217 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 218 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 219 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 220 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 221 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 222 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 223 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 224 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 225 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 226 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 227 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 228 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 229 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 230 "data/maps/SkyPillar_Top/scripts.pory"

# 231 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 232 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 233 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 234 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 235 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 236 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 237 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 238 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 239 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 240 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 241 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 242 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 243 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 244 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 245 "data/maps/SkyPillar_Top/scripts.pory"

# 246 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 247 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 248 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 249 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 250 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 251 "data/maps/SkyPillar_Top/scripts.pory"

# 252 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 253 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 254 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 255 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 256 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 257 "data/maps/SkyPillar_Top/scripts.pory"

# 258 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_DrakeAwakenRayquaza:
# 259 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Rayquaza…\p"
# 260 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The ultimate Dragon-type, the master\n"
# 261 "data/maps/SkyPillar_Top/scripts.pory"
	.string "of the skies…\p"
# 262 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The world has been thrown into chaos by\n"
# 263 "data/maps/SkyPillar_Top/scripts.pory"
	.string "those two idiots Maxie and Archie, and\p"
# 264 "data/maps/SkyPillar_Top/scripts.pory"
	.string "you, Rayquaza, are the only one who can\n"
# 265 "data/maps/SkyPillar_Top/scripts.pory"
	.string "put a stop to Groudon and Kyogre…\p"
# 266 "data/maps/SkyPillar_Top/scripts.pory"
	.string "So if I capture you here, the chaos will\n"
# 267 "data/maps/SkyPillar_Top/scripts.pory"
	.string "never be stopped! Master Ball, go!$"
# 268 "data/maps/SkyPillar_Top/scripts.pory"

# 269 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieMasterBall:
# 270 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Master Ball, go!$"
# 271 "data/maps/SkyPillar_Top/scripts.pory"

# 272 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_DrakesPlan:
# 273 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I'm sorry, {PLAYER}. This has been what\n"
# 274 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I've been after all along. All this time,\p"
# 275 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I've been assisting both Team Aqua and\n"
# 276 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Team Magma from the shadows, hoping\p"
# 277 "data/maps/SkyPillar_Top/scripts.pory"
	.string "their stupidity would unleash this\n"
# 278 "data/maps/SkyPillar_Top/scripts.pory"
	.string "chaos onto the world. You did an\p"
# 279 "data/maps/SkyPillar_Top/scripts.pory"
	.string "excellent job disrupting them and\n"
# 280 "data/maps/SkyPillar_Top/scripts.pory"
	.string "thwarting all of their plans, {PLAYER}…\p"
# 281 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Unfortunately, that was all a part of\n"
# 282 "data/maps/SkyPillar_Top/scripts.pory"
	.string "MY plan. I'm sorry I had to use you, but\p"
# 283 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I assure you, the destruction of this\n"
# 284 "data/maps/SkyPillar_Top/scripts.pory"
	.string "world will be for the best in the long\p"
# 285 "data/maps/SkyPillar_Top/scripts.pory"
	.string "run… The weak won't be able to survive\n"
# 286 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the coming events, leaving only the\p"
# 287 "data/maps/SkyPillar_Top/scripts.pory"
	.string "strong to get stronger… You are the\n"
# 288 "data/maps/SkyPillar_Top/scripts.pory"
	.string "strongest trainer I've seen in a long\p"
# 289 "data/maps/SkyPillar_Top/scripts.pory"
	.string "time, {PLAYER}, which is why it's such a\n"
# 290 "data/maps/SkyPillar_Top/scripts.pory"
	.string "shame you won't be around to see that\p"
# 291 "data/maps/SkyPillar_Top/scripts.pory"
	.string "new world… I know you are going to try\n"
# 292 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and stop me, which is why I have to take\l"
# 293 "data/maps/SkyPillar_Top/scripts.pory"
	.string "care of you here and now!$"
# 294 "data/maps/SkyPillar_Top/scripts.pory"

# 295 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_NotEvenYou:
# 296 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Not even you, {PLAYER}. Prepare to\n"
# 297 "data/maps/SkyPillar_Top/scripts.pory"
	.string "become the first witness of the\l"
# 298 "data/maps/SkyPillar_Top/scripts.pory"
	.string "terrible power of Primal Groudon!$"
# 299 "data/maps/SkyPillar_Top/scripts.pory"

# 300 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_DrakeDefeat:
# 301 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I can't believe it… even with Mega\n"
# 302 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Rayquaza, you were able to best me. \p"
# 303 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Looks like your power was the one\n"
# 304 "data/maps/SkyPillar_Top/scripts.pory"
	.string "factor that I miscalculated…$"
# 305 "data/maps/SkyPillar_Top/scripts.pory"

# 306 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_DrakeFarewell:
# 307 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Rayquaza's gone…\p"
# 308 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It must not have seen me as a worthy\n"
# 309 "data/maps/SkyPillar_Top/scripts.pory"
	.string "trainer, and perhaps it was right…\p"
# 310 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You defeated me, and now Rayquaza has\n"
# 311 "data/maps/SkyPillar_Top/scripts.pory"
	.string "escaped…\p"
# 312 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It all fell apart here at the end. I\n"
# 313 "data/maps/SkyPillar_Top/scripts.pory"
	.string "suppose I won't be able to show my face\l"
# 314 "data/maps/SkyPillar_Top/scripts.pory"
	.string "at the Elite Four anymore…\p"
# 315 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Farewell, {PLAYER}. You were stronger\n"
# 316 "data/maps/SkyPillar_Top/scripts.pory"
	.string "than even I could anticipate…\p"
# 317 "data/maps/SkyPillar_Top/scripts.pory"
	.string "At least in the end, the strongest\n"
# 318 "data/maps/SkyPillar_Top/scripts.pory"
	.string "trainer did prevail.$"
# 319 "data/maps/SkyPillar_Top/scripts.pory"

# 320 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff:
# 321 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened RAYQUAZA flew off…$"

BackAwayFromRayRay::
# 326 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 327 "data/maps/SkyPillar_Top/scripts.pory"
	walk_down
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 329 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
	return


AddSleepingRayRay::
# 333 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA
# 334 "data/maps/SkyPillar_Top/scripts.pory"
	addobject LOCALID_RAYQUAZA_SLEEPING
	return

