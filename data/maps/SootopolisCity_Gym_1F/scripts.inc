# 1 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 2 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_MapScripts::
# 3 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_Gym_1F_OnFrame
# 4 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
# 5 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_Gym_1F_OnLoad
# 6 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
# 7 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.byte 0
# 8 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 9 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnTransition:
# 10 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
# 11 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 12 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 13 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnResume:
# 14 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
# 15 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 16 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 17 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnLoad:
# 18 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 19 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special SetSootopolisGymCrackedIceMetatiles
# 20 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 21 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 22 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles::
# 23 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_StopCheckingStairs  @ All stairs ice
# 24 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_OpenFirstStairs
# 25 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
# 26 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
# 27 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
# 28 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs::
# 29 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
# 30 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
# 31 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstStairs::
# 32 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
# 33 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
# 34 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_StopCheckingStairs::
# 35 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 36 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 37 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnFrame:
# 38 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs
# 39 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs
# 40 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs
# 41 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_FallThroughIce
# 42 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.2byte 0
# 43 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 44 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs::
# 45 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 46 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 47 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 48 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 49 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 50 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 51 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 52 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs::
# 53 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 54 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 55 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 56 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 57 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 58 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 59 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 60 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs::
# 61 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 62 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 63 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 64 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 65 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 66 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 67 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 68 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_FallThroughIce::
# 69 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 70 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 20
# 71 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
# 72 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_FALL
# 74 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 60
# 75 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
# 76 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitstate
# 77 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 78 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 79 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Movement_FallThroughIce:
# 80 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	set_invisible
# 81 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	step_end
# 82 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 83 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan::
# 84 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
# 85 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 86 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SootopolisCity_Gym_1F_EventScript_JuanRematch
# 87 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_MOONBLAST, SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2
# 88 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
# 89 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
# 90 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 91 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 92 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 93 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanDefeated::
# 94 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
# 95 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmessage
# 96 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 97 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
# 98 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 99 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_BADGE08_GET
# 100 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 101 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 102 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 103 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 104 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 105 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 8
# 106 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 107 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
# 108 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 109 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 110 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 111 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
# 112 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitfanfare
# 113 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 114 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 115 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
# 116 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 117 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 118 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 119 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse::
# 120 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_MOONBLAST
# 121 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 122 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_MOONBLAST
# 123 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 124 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 125 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2::
# 126 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_MOONBLAST
# 127 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 128 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_MOONBLAST
# 129 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 130 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 131 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 132 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
# 133 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
# 134 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 135 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 136 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 137 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanRematch::
# 138 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanPreRematch, SootopolisCity_Gym_1F_Text_JuanRematchDefeat, SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons
# 139 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
# 140 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 141 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 142 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuide::
# 143 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 144 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 145 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
# 146 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 147 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 148 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 149 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 150 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
# 151 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 152 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 153 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 154 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 155 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
# 156 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 157 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 158 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 159 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 160 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 161 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_RightGymStatue::
# 162 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 163 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 164 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 165 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 166 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 167 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
# 168 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 169 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 170 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 171 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 172 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatue::
# 173 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 174 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 175 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 176 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 177 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuideAdvice:
# 178 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yo! How's it going, CHAMPION-\n"
# 179 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 180 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS's GYM LEADER JUAN is\n"
# 181 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "a master of WATER-type POKéMON.\p"
# 182 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And, to get to JUAN, an icy floor\n"
# 183 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "will hamper your progress…\p"
# 184 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Listen, I'm sorry, but that's all the\n"
# 185 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "advice that I have for you.\p"
# 186 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The rest of the way, you have to\n"
# 187 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "go for it yourself!$"
# 188 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 189 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuidePostVictory:
# 190 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yow! You've beaten even JUAN, who\n"
# 191 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "was supposedly the best in all HOENN!\p"
# 192 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Okay! Check out your TRAINER CARD.\p"
# 193 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "If you've gotten all the BADGES, you're\n"
# 194 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "set for the POKéMON LEAGUE challenge!$"
# 195 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 196 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanIntro:
# 197 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Let me ask you.\n"
# 198 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Did you know?\l"
# 199 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ah, I should not be so coy.\p"
# 200 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "It was I who taught Wallace everything\n"
# 201 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "there is to know about Pokémon.\p"
# 202 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Once, I had given up my position as\n"
# 203 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "the Gym Leader.\p"
# 204 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "In my place, I had entrusted Wallace\n"
# 205 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "with the Gym.\p"
# 206 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "However, a compelling reason arose for\n"
# 207 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "me to make a comeback.\p"
# 208 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But I could not return as the same old\n"
# 209 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Juan! No!\p"
# 210 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I had no choice but to reinvent my\n"
# 211 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "style! And now, with these dazzlingly\l"
# 212 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "elegant Fairy-types…\p"
# 213 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ah, but enough chatter.\n"
# 214 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Let us begin our match, shall we?\p"
# 215 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Please, you shall bear witness to\n"
# 216 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "my new artistry!$"
# 217 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 218 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
# 219 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
# 220 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
# 221 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the existence of that unused array of ints.
# 222 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanDefeat:
# 223 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ahahaha, excellent!\n"
# 224 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Very well, you are the winner.\p"
# 225 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "From you, I sense the brilliant shine\n"
# 226 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of skill that will overcome all.\p"
# 227 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "However, compared with me or even\n"
# 228 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Wallace, you are lacking in elegance.\p"
# 229 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Perhaps I should make you a loan\n"
# 230 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of my outfit?\p"
# 231 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …\n"
# 232 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …\p"
# 233 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Hahaha, I merely jest!\p"
# 234 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Rather than my clothes, I shall reward\n"
# 235 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "you with this, the Rain Badge!$"
# 236 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 237 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ReceivedRainBadge:
# 238 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER} received the RAIN BADGE\n"
# 239 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "from JUAN.$"
# 240 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 241 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis:
# 242 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Having the Rain Badge shall assure you\n"
# 243 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "the full obedience of all your Pokémon\l"
# 244 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to your every command.\p"
# 245 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The Rain Badge also allows the use\n"
# 246 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of the HM move Waterfall to scale\l"
# 247 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "walls of cascading water.\p"
# 248 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And, so that you never forget the\n"
# 249 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "battle we shared, take this…$"
# 250 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 251 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainWaterPulse:
# 252 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The TM I handed you\n"
# 253 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "contains Moonblast.\p"
# 254 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "In use, it will occasionally lower\n"
# 255 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "the target's Special Attack.\p"
# 256 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …$"
# 257 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 258 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_RegisteredJuan:
# 259 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Registered GYM LEADER JUAN\n"
# 260 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 261 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 262 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostBattle:
# 263 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The TRAINERS who have gathered all\n"
# 264 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "the GYM BADGES of HOENN should make\l"
# 265 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "way to the ultimate destination.\p"
# 266 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The POKéMON LEAGUE.\p"
# 267 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Travel to the easternmost reaches\n"
# 268 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of HOENN, to the island EVER GRANDE.\p"
# 269 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "There, you shall find the POKéMON\n"
# 270 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "LEAGUE.$"
# 271 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 272 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GoGetFortreeBadge:
# 273 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "There remains but one BADGE to\n"
# 274 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "obtain in HOENN.\p"
# 275 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "If you wish to challenge the POKéMON\n"
# 276 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "LEAGUE, you must obtain the last\l"
# 277 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "BADGE from the GYM in FORTREE.$"
# 278 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 279 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatue:
# 280 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM$"
# 281 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 282 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatueCertified:
# 283 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\p"
# 284 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN'S CERTIFIED TRAINERS:\n"
# 285 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 286 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 287 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPreRematch:
# 288 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: Ah, this GYM had returned to its\n"
# 289 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "usual state of serenity…\p"
# 290 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But our young typhoon has returned\n"
# 291 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to put us to the test again!\p"
# 292 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, my friend, most certainly!\p"
# 293 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall be delighted to dance with you\n"
# 294 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "as often as you wish!$"
# 295 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 296 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchDefeat:
# 297 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ahahaha, you are the winner!\n"
# 298 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You have defeated me again!$"
# 299 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 300 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostRematch:
# 301 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: If I told you to become my\n"
# 302 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "apprentice, you will refuse, I am sure.\p"
# 303 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I would like to make a gift of my coat\n"
# 304 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to you.\p"
# 305 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But again, you will refuse.\n"
# 306 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I imagine that to be so.\p"
# 307 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And that, my friend, is a certain sign\n"
# 308 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of nobility!$"
# 309 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 310 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons:
# 311 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: Ah, this GYM had returned to its\n"
# 312 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "usual state of serenity…\p"
# 313 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But our young typhoon has returned\n"
# 314 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to put us to the test again!\p"
# 315 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, my friend, most certainly!\n"
# 316 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall be delighted to dance with you…\p"
# 317 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ah, no, no, no.\n"
# 318 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You have with you but one POKéMON.\p"
# 319 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I wish that you would return with\n"
# 320 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "two, perhaps more, POKéMON, please.$"
