# 1 "data/maps/Route124/scripts.pory"

# 2 "data/maps/Route124/scripts.pory"
Route124_MapScripts::
# 3 "data/maps/Route124/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route124_OnResume
# 4 "data/maps/Route124/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_OnTransition
# 5 "data/maps/Route124/scripts.pory"
	.byte 0
# 6 "data/maps/Route124/scripts.pory"

# 7 "data/maps/Route124/scripts.pory"
Route124_OnResume:
# 8 "data/maps/Route124/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route124_EventScript_TryRemoveTapuLele
# 9 "data/maps/Route124/scripts.pory"
	end
# 10 "data/maps/Route124/scripts.pory"

# 11 "data/maps/Route124/scripts.pory"
Route124_EventScript_TryRemoveTapuLele::
# 12 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/Route124/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/Route124/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/Route124/scripts.pory"
	return
# 16 "data/maps/Route124/scripts.pory"

# 17 "data/maps/Route124/scripts.pory"
Route124_OnTransition:
# 18 "data/maps/Route124/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 19 "data/maps/Route124/scripts.pory"
	call_if_unset FLAG_DEFEATED_TAPU_LELE, Route124_EventScript_ShowTapuLele
# 20 "data/maps/Route124/scripts.pory"
	end
# 21 "data/maps/Route124/scripts.pory"

# 22 "data/maps/Route124/scripts.pory"
Route124_EventScript_ShowTapuLele::
# 23 "data/maps/Route124/scripts.pory"
	clearflag FLAG_HIDE_TAPU_LELE
# 24 "data/maps/Route124/scripts.pory"
	return
# 25 "data/maps/Route124/scripts.pory"

# 26 "data/maps/Route124/scripts.pory"
Route124_EventScript_TapuLele::
# 27 "data/maps/Route124/scripts.pory"
	lock
# 28 "data/maps/Route124/scripts.pory"
	faceplayer
# 29 "data/maps/Route124/scripts.pory"
	waitse
# 30 "data/maps/Route124/scripts.pory"
	playmoncry SPECIES_TAPU_LELE, CRY_MODE_ENCOUNTER
# 31 "data/maps/Route124/scripts.pory"
	delay 40
# 32 "data/maps/Route124/scripts.pory"
	waitmoncry
# 33 "data/maps/Route124/scripts.pory"
	setwildbattle SPECIES_TAPU_LELE, 70
# 34 "data/maps/Route124/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 35 "data/maps/Route124/scripts.pory"
	special StartRegiBattle
# 36 "data/maps/Route124/scripts.pory"
	waitstate
# 37 "data/maps/Route124/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 38 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 39 "data/maps/Route124/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route124_EventScript_DefeatedTapuLele
# 40 "data/maps/Route124/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route124_EventScript_RanFromTapuLele
# 41 "data/maps/Route124/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route124_EventScript_RanFromTapuLele
# 42 "data/maps/Route124/scripts.pory"
	setflag FLAG_DEFEATED_TAPU_LELE
# 43 "data/maps/Route124/scripts.pory"
	release
# 44 "data/maps/Route124/scripts.pory"
	end
# 45 "data/maps/Route124/scripts.pory"

# 46 "data/maps/Route124/scripts.pory"
Route124_EventScript_DefeatedTapuLele::
# 47 "data/maps/Route124/scripts.pory"
	setflag FLAG_DEFEATED_TAPU_LELE
# 48 "data/maps/Route124/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 49 "data/maps/Route124/scripts.pory"
	end
# 50 "data/maps/Route124/scripts.pory"

# 51 "data/maps/Route124/scripts.pory"
Route124_EventScript_RanFromTapuLele::
# 52 "data/maps/Route124/scripts.pory"
	setvar VAR_0x8004, SPECIES_TAPU_LELE
# 53 "data/maps/Route124/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 54 "data/maps/Route124/scripts.pory"
	end
# 55 "data/maps/Route124/scripts.pory"

# 56 "data/maps/Route124/scripts.pory"
Route124_EventScript_HuntersHouseSign::
# 57 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_HuntersHouse, MSGBOX_SIGN
# 58 "data/maps/Route124/scripts.pory"
	end
# 59 "data/maps/Route124/scripts.pory"

# 60 "data/maps/Route124/scripts.pory"
Route124_EventScript_Spencer::
# 61 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_SPENCER, Route124_Text_SpencerIntro, Route124_Text_SpencerDefeat
# 62 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/Route124/scripts.pory"
	end
# 64 "data/maps/Route124/scripts.pory"

# 65 "data/maps/Route124/scripts.pory"
Route124_EventScript_Roland::
# 66 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_ROLAND, Route124_Text_RolandIntro, Route124_Text_RolandDefeat
# 67 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RolandPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route124/scripts.pory"
	end
# 69 "data/maps/Route124/scripts.pory"

# 70 "data/maps/Route124/scripts.pory"
Route124_EventScript_Jenny::
# 71 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_JENNY_1, Route124_Text_JennyIntro, Route124_Text_JennyDefeat, Route124_EventScript_RegisterJenny
# 72 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 73 "data/maps/Route124/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchJenny
# 74 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostBattle, MSGBOX_DEFAULT
# 75 "data/maps/Route124/scripts.pory"
	release
# 76 "data/maps/Route124/scripts.pory"
	end
# 77 "data/maps/Route124/scripts.pory"

# 78 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterJenny::
# 79 "data/maps/Route124/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 80 "data/maps/Route124/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyRegister, MSGBOX_DEFAULT
# 82 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_JENNY_1
# 83 "data/maps/Route124/scripts.pory"
	release
# 84 "data/maps/Route124/scripts.pory"
	end
# 85 "data/maps/Route124/scripts.pory"

# 86 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchJenny::
# 87 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch TRAINER_JENNY_1, Route124_Text_JennyRematchIntro, Route124_Text_JennyRematchDefeat
# 88 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostRematch, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route124/scripts.pory"
	end
# 90 "data/maps/Route124/scripts.pory"

# 91 "data/maps/Route124/scripts.pory"
Route124_EventScript_Grace::
# 92 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_GRACE, Route124_Text_GraceIntro, Route124_Text_GraceDefeat
# 93 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_GracePostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route124/scripts.pory"
	end
# 95 "data/maps/Route124/scripts.pory"

# 96 "data/maps/Route124/scripts.pory"
Route124_EventScript_Chad::
# 97 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_CHAD, Route124_Text_ChadIntro, Route124_Text_ChadDefeat
# 98 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_ChadPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route124/scripts.pory"
	end
# 100 "data/maps/Route124/scripts.pory"

# 101 "data/maps/Route124/scripts.pory"
Route124_EventScript_Lila::
# 102 "data/maps/Route124/scripts.pory"
	trainerbattle_double TRAINER_LILA_AND_ROY_1, Route124_Text_LilaIntro, Route124_Text_LilaDefeat, Route124_Text_LilaNotEnoughMons, Route124_EventScript_RegisterLila
# 103 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 104 "data/maps/Route124/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchLila
# 105 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostBattle, MSGBOX_DEFAULT
# 106 "data/maps/Route124/scripts.pory"
	release
# 107 "data/maps/Route124/scripts.pory"
	end
# 108 "data/maps/Route124/scripts.pory"

# 109 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterLila::
# 110 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 111 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
# 112 "data/maps/Route124/scripts.pory"
	release
# 113 "data/maps/Route124/scripts.pory"
	end
# 114 "data/maps/Route124/scripts.pory"

# 115 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchLila::
# 116 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_LilaRematchIntro, Route124_Text_LilaRematchDefeat, Route124_Text_LilaRematchNotEnoughMons
# 117 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostRematch, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route124/scripts.pory"
	end
# 119 "data/maps/Route124/scripts.pory"

# 120 "data/maps/Route124/scripts.pory"
Route124_EventScript_Roy::
# 121 "data/maps/Route124/scripts.pory"
	trainerbattle_double TRAINER_LILA_AND_ROY_1, Route124_Text_RoyIntro, Route124_Text_RoyDefeat, Route124_Text_RoyNotEnoughMons, Route124_EventScript_RegisterRoy
# 122 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 123 "data/maps/Route124/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchRoy
# 124 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostBattle, MSGBOX_DEFAULT
# 125 "data/maps/Route124/scripts.pory"
	release
# 126 "data/maps/Route124/scripts.pory"
	end
# 127 "data/maps/Route124/scripts.pory"

# 128 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterRoy::
# 129 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 130 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
# 131 "data/maps/Route124/scripts.pory"
	release
# 132 "data/maps/Route124/scripts.pory"
	end
# 133 "data/maps/Route124/scripts.pory"

# 134 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchRoy::
# 135 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_RoyRematchIntro, Route124_Text_RoyRematchDefeat, Route124_Text_RoyRematchNotEnoughMons
# 136 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostRematch, MSGBOX_AUTOCLOSE
# 137 "data/maps/Route124/scripts.pory"
	end
# 138 "data/maps/Route124/scripts.pory"

# 139 "data/maps/Route124/scripts.pory"
Route124_EventScript_Declan::
# 140 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_DECLAN, Route124_Text_DeclanIntro, Route124_Text_DeclanDefeat
# 141 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_DeclanPostBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/Route124/scripts.pory"
	end
# 143 "data/maps/Route124/scripts.pory"

# 144 "data/maps/Route124/scripts.pory"
Route124_EventScript_Isabella::
# 145 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_ISABELLA, Route124_Text_IsabellaIntro, Route124_Text_IsabellaDefeat
# 146 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_IsabellaPostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/Route124/scripts.pory"
	end
# 148 "data/maps/Route124/scripts.pory"

# 149 "data/maps/Route124/scripts.pory"
Route124_Text_HuntersHouse:
# 150 "data/maps/Route124/scripts.pory"
	.string "FORM CHANGERS HERE$"
