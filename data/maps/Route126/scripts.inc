# 1 "data/maps/Route126/scripts.pory"

# 2 "data/maps/Route126/scripts.pory"
Route126_MapScripts::
# 3 "data/maps/Route126/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route126_OnResume
# 4 "data/maps/Route126/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route126_OnTransition
# 5 "data/maps/Route126/scripts.pory"
	.byte 0
# 6 "data/maps/Route126/scripts.pory"

# 7 "data/maps/Route126/scripts.pory"
Route126_OnResume:
# 8 "data/maps/Route126/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route126_EventScript_TryRemoveTapuKoko
# 9 "data/maps/Route126/scripts.pory"
	end
# 10 "data/maps/Route126/scripts.pory"

# 11 "data/maps/Route126/scripts.pory"
Route126_EventScript_TryRemoveTapuKoko::
# 12 "data/maps/Route126/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/Route126/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/Route126/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/Route126/scripts.pory"
	return
# 16 "data/maps/Route126/scripts.pory"

# 17 "data/maps/Route126/scripts.pory"
Route126_OnTransition:
# 18 "data/maps/Route126/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 19 "data/maps/Route126/scripts.pory"
	call_if_unset FLAG_DEFEATED_TAPU_KOKO, Route126_EventScript_ShowTapuKoko
# 20 "data/maps/Route126/scripts.pory"
	end
# 21 "data/maps/Route126/scripts.pory"

# 22 "data/maps/Route126/scripts.pory"
Route126_EventScript_ShowTapuKoko::
# 23 "data/maps/Route126/scripts.pory"
	clearflag FLAG_HIDE_TAPU_KOKO
# 24 "data/maps/Route126/scripts.pory"
	return
# 25 "data/maps/Route126/scripts.pory"

# 26 "data/maps/Route126/scripts.pory"
Route126_EventScript_TapuKoko::
# 27 "data/maps/Route126/scripts.pory"
	lock
# 28 "data/maps/Route126/scripts.pory"
	faceplayer
# 29 "data/maps/Route126/scripts.pory"
	waitse
# 30 "data/maps/Route126/scripts.pory"
	playmoncry SPECIES_TAPU_KOKO, CRY_MODE_ENCOUNTER
# 31 "data/maps/Route126/scripts.pory"
	delay 40
# 32 "data/maps/Route126/scripts.pory"
	waitmoncry
# 33 "data/maps/Route126/scripts.pory"
	setwildbattle SPECIES_TAPU_KOKO, 70
# 34 "data/maps/Route126/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 35 "data/maps/Route126/scripts.pory"
	special StartRegiBattle
# 36 "data/maps/Route126/scripts.pory"
	waitstate
# 37 "data/maps/Route126/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 38 "data/maps/Route126/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 39 "data/maps/Route126/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route126_EventScript_DefeatedTapuKoko
# 40 "data/maps/Route126/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route126_EventScript_RanFromTapuKoko
# 41 "data/maps/Route126/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route126_EventScript_RanFromTapuKoko
# 42 "data/maps/Route126/scripts.pory"
	setflag FLAG_DEFEATED_TAPU_KOKO
# 43 "data/maps/Route126/scripts.pory"
	release
# 44 "data/maps/Route126/scripts.pory"
	end
# 45 "data/maps/Route126/scripts.pory"

# 46 "data/maps/Route126/scripts.pory"
Route126_EventScript_DefeatedTapuKoko::
# 47 "data/maps/Route126/scripts.pory"
	setflag FLAG_DEFEATED_TAPU_KOKO
# 48 "data/maps/Route126/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 49 "data/maps/Route126/scripts.pory"
	end
# 50 "data/maps/Route126/scripts.pory"

# 51 "data/maps/Route126/scripts.pory"
Route126_EventScript_RanFromTapuKoko::
# 52 "data/maps/Route126/scripts.pory"
	setvar VAR_0x8004, SPECIES_TAPU_KOKO
# 53 "data/maps/Route126/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 54 "data/maps/Route126/scripts.pory"
	end
# 55 "data/maps/Route126/scripts.pory"

# 56 "data/maps/Route126/scripts.pory"
Route126_EventScript_Barry::
# 57 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_BARRY, Route126_Text_BarryIntro, Route126_Text_BarryDefeat
# 58 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_BarryPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route126/scripts.pory"
	end
# 60 "data/maps/Route126/scripts.pory"

# 61 "data/maps/Route126/scripts.pory"
Route126_EventScript_Dean::
# 62 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_DEAN, Route126_Text_DeanIntro, Route126_Text_DeanDefeat
# 63 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_DeanPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/Route126/scripts.pory"
	end
# 65 "data/maps/Route126/scripts.pory"

# 66 "data/maps/Route126/scripts.pory"
Route126_EventScript_Nikki::
# 67 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_NIKKI, Route126_Text_NikkiIntro, Route126_Text_NikkiDefeat
# 68 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_NikkiPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/Route126/scripts.pory"
	end
# 70 "data/maps/Route126/scripts.pory"

# 71 "data/maps/Route126/scripts.pory"
Route126_EventScript_Brenda::
# 72 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_BRENDA, Route126_Text_BrendaIntro, Route126_Text_BrendaDefeat
# 73 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_BrendaPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/Route126/scripts.pory"
	end
# 75 "data/maps/Route126/scripts.pory"

# 76 "data/maps/Route126/scripts.pory"
Route126_EventScript_Leonardo::
# 77 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_LEONARDO, Route126_Text_LeonardoIntro, Route126_Text_LeonardoDefeat
# 78 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_LeonardoPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route126/scripts.pory"
	end
# 80 "data/maps/Route126/scripts.pory"

# 81 "data/maps/Route126/scripts.pory"
Route126_EventScript_Isobel::
# 82 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_ISOBEL, Route126_Text_IsobelIntro, Route126_Text_IsobelDefeat
# 83 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_IsobelPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route126/scripts.pory"
	end
# 85 "data/maps/Route126/scripts.pory"

# 86 "data/maps/Route126/scripts.pory"
Route126_EventScript_Sienna::
# 87 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_SIENNA, Route126_Text_SiennaIntro, Route126_Text_SiennaDefeat
# 88 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_SiennaPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route126/scripts.pory"
	end
# 90 "data/maps/Route126/scripts.pory"

# 91 "data/maps/Route126/scripts.pory"
Route126_EventScript_Pablo::
# 92 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_PABLO_1, Route126_Text_PabloIntro, Route126_Text_PabloDefeat, Route126_EventScript_RegisterPablo
# 93 "data/maps/Route126/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 94 "data/maps/Route126/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route126_EventScript_RematchPablo
# 95 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloPostBattle, MSGBOX_DEFAULT
# 96 "data/maps/Route126/scripts.pory"
	release
# 97 "data/maps/Route126/scripts.pory"
	end
# 98 "data/maps/Route126/scripts.pory"

# 99 "data/maps/Route126/scripts.pory"
Route126_EventScript_RegisterPablo::
# 100 "data/maps/Route126/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 101 "data/maps/Route126/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloRegister, MSGBOX_DEFAULT
# 103 "data/maps/Route126/scripts.pory"
	register_matchcall TRAINER_PABLO_1
# 104 "data/maps/Route126/scripts.pory"
	release
# 105 "data/maps/Route126/scripts.pory"
	end
# 106 "data/maps/Route126/scripts.pory"

# 107 "data/maps/Route126/scripts.pory"
Route126_EventScript_RematchPablo::
# 108 "data/maps/Route126/scripts.pory"
	trainerbattle_rematch TRAINER_PABLO_1, Route126_Text_PabloRematchIntro, Route126_Text_PabloRematchDefeat
# 109 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloPostRematch, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route126/scripts.pory"
	end
