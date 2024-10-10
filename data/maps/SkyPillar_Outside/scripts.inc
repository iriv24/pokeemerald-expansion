# 1 "data/maps/SkyPillar_Outside/scripts.pory"

# 2 "data/maps/SkyPillar_Outside/scripts.pory"
.set LOCALID_WALLACE, 1
# 3 "data/maps/SkyPillar_Outside/scripts.pory"

# 4 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_MapScripts::
# 5 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Outside_OnTransition
# 6 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SkyPillar_Outside_OnLoad
# 7 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SkyPillar_Outside_OnFrame
# 8 "data/maps/SkyPillar_Outside/scripts.pory"
	.byte 0
# 9 "data/maps/SkyPillar_Outside/scripts.pory"

# 10 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnTransition:
# 11 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SkyPillar_Outside_EventScript_HideMapNamePopup
# 12 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, SkyPillar_Outside_EventScript_CheckSetAbnormalWeather
# 13 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 14 "data/maps/SkyPillar_Outside/scripts.pory"

# 15 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_HideMapNamePopup::
# 16 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 17 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 18 "data/maps/SkyPillar_Outside/scripts.pory"

# 19 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_CheckSetAbnormalWeather::
# 20 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 21 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 22 "data/maps/SkyPillar_Outside/scripts.pory"

# 23 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnLoad:
# 24 "data/maps/SkyPillar_Outside/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, SkyPillar_Outside_EventScript_OpenDoor
# 25 "data/maps/SkyPillar_Outside/scripts.pory"
	goto_if_eq VAR_START_POST_RAYQUAZA_SCENE, 2, SkyPillar_Outside_EventScriptCloseDoor
# 26 "data/maps/SkyPillar_Outside/scripts.pory"
	goto_if_set FLAG_WALLACE_GOES_TO_SKY_PILLAR, SkyPillar_Outside_EventScript_OpenDoor
# 27 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 28 "data/maps/SkyPillar_Outside/scripts.pory"

# 29 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_OpenDoor::
# 30 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 4, METATILE_Pacifidlog_SkyPillar_DoorOpen_Top, FALSE
# 31 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 5, METATILE_Pacifidlog_SkyPillar_DoorOpen_Bottom, FALSE
# 32 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 33 "data/maps/SkyPillar_Outside/scripts.pory"

# 34 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScriptCloseDoor::
# 35 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 4, METATILE_Pacifidlog_SkyPillar_CloseOpen_Top, TRUE
# 36 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 5, METATILE_Pacifidlog_SkyPillar_CloseOpen_Bottom, TRUE
# 37 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 38 "data/maps/SkyPillar_Outside/scripts.pory"

# 39 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnFrame:
# 40 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, SkyPillar_Outside_EventScript_WallaceScene
# 41 "data/maps/SkyPillar_Outside/scripts.pory"
	.2byte 0
# 42 "data/maps/SkyPillar_Outside/scripts.pory"

# 43 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_WallaceScene::
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	lockall
# 45 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_WALLACE, SkyPillar_Outside_Movement_WallaceApproachPlayer
# 46 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 47 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 48 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 49 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_OpenedDoorToSkyPillar, MSGBOX_DEFAULT
# 50 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 51 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 52 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 53 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 54 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 55 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 56 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 57 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 58 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 40
# 59 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_EarthquakeNotMomentToWaste, MSGBOX_DEFAULT
# 60 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 61 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SkyPillar_Outside_Movement_PlayerClimbSkyPillar
# 62 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_WALLACE, SkyPillar_Outside_Movement_WallaceClimbSkyPillar
# 63 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 64 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 65 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 3   @ horizontal pan
# 66 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 20  @ num shakes
# 67 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 5   @ shake delay
# 68 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 69 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 70 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 71 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterLeft
# 72 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 73 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 10
# 74 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 75 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 76 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 77 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 78 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 79 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 80 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_SituationGettingWorse, MSGBOX_DEFAULT
# 81 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 82 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 83 "data/maps/SkyPillar_Outside/scripts.pory"
	setweather WEATHER_ABNORMAL
# 84 "data/maps/SkyPillar_Outside/scripts.pory"
	doweather
# 85 "data/maps/SkyPillar_Outside/scripts.pory"
	special WaitWeather
# 86 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 87 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 88 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_GotToGoBackForSootopolis, MSGBOX_DEFAULT
# 89 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 90 "data/maps/SkyPillar_Outside/scripts.pory"
	playse SE_EXIT
# 91 "data/maps/SkyPillar_Outside/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 92 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 93 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 4
# 94 "data/maps/SkyPillar_Outside/scripts.pory"
	removeobject LOCALID_WALLACE
# 95 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 96 "data/maps/SkyPillar_Outside/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 97 "data/maps/SkyPillar_Outside/scripts.pory"
	releaseall
# 98 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 99 "data/maps/SkyPillar_Outside/scripts.pory"

# 100 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_WallaceApproachPlayer:
# 101 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 102 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 103 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 104 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 105 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 106 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 107 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 108 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 109 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 110 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 111 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 112 "data/maps/SkyPillar_Outside/scripts.pory"

# 113 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_WallaceClimbSkyPillar:
# 114 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 115 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 116 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 117 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 118 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 119 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 120 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 121 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 122 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 123 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 124 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 125 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 126 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 127 "data/maps/SkyPillar_Outside/scripts.pory"

# 128 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_PlayerClimbSkyPillar:
# 129 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 130 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 131 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 132 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 133 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 134 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 135 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 136 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 137 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 138 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 139 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 140 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 141 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 142 "data/maps/SkyPillar_Outside/scripts.pory"

# 143 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_Wallace::
# 144 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 145 "data/maps/SkyPillar_Outside/scripts.pory"

# 146 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_ClosedDoor::
# 147 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_DoorIsClosed, MSGBOX_SIGN
# 148 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 149 "data/maps/SkyPillar_Outside/scripts.pory"

# 150 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_DoorIsClosed:
# 151 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The door is closed.$"
# 152 "data/maps/SkyPillar_Outside/scripts.pory"

# 153 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_OpenedDoorToSkyPillar:
# 154 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Oh, my, I'm terribly sorry!\p"
# 155 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "In my haste, I didn't notice that\n"
# 156 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I'd left you behind!\p"
# 157 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I've opened the locked door of\n"
# 158 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "the Sky Pillar.\p"
# 159 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "{PLAYER}{KUN}, let's be on our way!$"
# 160 "data/maps/SkyPillar_Outside/scripts.pory"

# 161 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_EarthquakeNotMomentToWaste:
# 162 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "It's an earthquake!\p"
# 163 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "There's not a moment to waste!\n"
# 164 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "We've got to hurry!$"
# 165 "data/maps/SkyPillar_Outside/scripts.pory"

# 166 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_SituationGettingWorse:
# 167 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Hmm…\n"
# 168 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The situation is getting worse…$"
# 169 "data/maps/SkyPillar_Outside/scripts.pory"

# 170 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_GotToGoBackForSootopolis:
# 171 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "This isn't good…\p"
# 172 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The weather distortion is spreading\n"
# 173 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "even here…\p"
# 174 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 175 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Rayquaza should be farther up\n"
# 176 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "from here.\p"
# 177 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I'm worried about Sootopolis.\n"
# 178 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I've got to go back.\p"
# 179 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Everything is in your hands now.\n"
# 180 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Don't fail us!$"
