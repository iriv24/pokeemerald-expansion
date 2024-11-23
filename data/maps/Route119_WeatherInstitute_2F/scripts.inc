# 1 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_1, 1
# 3 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_2, 2
# 4 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_SHELLY, 3
# 5 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_SCIENTIST, 5
# 6 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_3, 7
# 7 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_4, 8
# 8 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 9 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_MapScripts::
# 10 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
# 11 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.byte 0
# 12 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 13 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition:
# 14 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere
# 15 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone
# 16 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear
# 17 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 18 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 19 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere::
# 20 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 1, 6
# 21 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 22 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 23 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 24 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone::
# 25 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 4, 6
# 26 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 27 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 28 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 29 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear::
# 30 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 2, 2
# 31 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_UP
# 32 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 33 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 34 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt5::
# 35 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
# 36 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 38 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 39 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_AdminMatt::
# 40 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_MATT_WEATHER_INST, Route119_WeatherInstitute_2F_Text_MattIntro, Route119_WeatherInstitute_2F_Text_MattDefeat
# 41 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_MattPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 43 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt3::
# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
# 46 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly::
# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	callnative RemoveFollowingPokemon
# 51 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyIntro, Route119_WeatherInstitute_2F_Text_ShellyDefeat, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated
# 52 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 54 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 55 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated::
# 56 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 57 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 58 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 59 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addobject LOCALID_GRUNT_3
# 60 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route119_WeatherInstitute_2F_Movement_GruntApproachShelly
# 61 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay
# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy, MSGBOX_DEFAULT
# 64 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 65 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 66 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 67 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_Delay48
# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre, MSGBOX_DEFAULT
# 71 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 72 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 74 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadedefaultbgm
# 75 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
# 77 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
# 78 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 79 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 80 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_SHELLY
# 81 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 82 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 83 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition
# 84 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 86 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer
# 87 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SCIENTIST
# 89 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 90 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 91 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 92 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 93 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform::
# 94 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
# 95 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CASTFORM_NORMAL
# 96 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemonrandom SPECIES_CASTFORM_NORMAL, 25, ITEM_MYSTIC_WATER
# 97 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 102 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty::
# 103 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 104 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 106 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 107 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 108 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 109 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 110 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC::
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 115 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 116 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SendCastformToPC::
# 120 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 121 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 122 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 123 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare::
# 125 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 126 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 128 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitfanfare
# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM_NORMAL
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 131 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 132 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ExplainCastform::
# 133 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
# 134 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 137 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 138 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather::
# 139 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
# 140 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
# 141 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 142 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 144 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
# 145 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 146 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 147 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 148 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather  @ Both defeated
# 149 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
# 150 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
# 151 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route119_WeatherInstitute_2F_EventScript_KyogreWeather
# 152 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
# 153 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 154 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 155 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 156 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_KyogreWeather::
# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
# 158 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 159 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 160 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 161 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather::
# 162 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special CreateAbnormalWeatherEvent
# 163 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 164 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 165 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 166 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated::
# 167 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_0x8004, 1
# 168 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 169 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 170 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather::
# 171 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
# 172 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 173 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 174 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 177 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 178 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 180 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 181 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 182 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 183 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 185 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 186 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 187 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 188 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay:
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 192 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 193 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 194 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	ride_water_current_up
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_down
# 197 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 198 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 199 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
# 200 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_down
# 201 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_left
# 202 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 203 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 204 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
# 205 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 208 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 209 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 210 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
# 211 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
# 214 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_MattIntro:
# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hehehe…\p"
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I'm a cut above the Grunts you've seen\n"
# 220 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "so far.\p"
# 221 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You know what that means right?\n"
# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I'm going to pulverize you!$"
# 223 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 224 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_MattDefeat:
# 225 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hehehe…\n"
# 226 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Our plan's being spoiled by a kid?$"
# 227 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 228 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_MattPostBattle:
# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hehehe…\p"
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It's fine that I lost here,\n"
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I'm certain Shelly will take care\l"
# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "of you.$"
# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Intro:
# 235 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We're Team Aqua!\n"
# 236 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We appear wherever anything rare is\l"
# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "found!$"
# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Defeat:
# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You got me!$"
# 241 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 242 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3PostBattle:
# 243 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You don't have any idea what we of\n"
# 244 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Team Aqua are working towards!\l"
# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You stay out of our way!$"
# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Intro:
# 248 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Don't tell me you're looking for that\n"
# 249 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "weather Pokémon, too?\p"
# 250 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That's a no-no!\n"
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We were here to get it first!$"
# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Defeat:
# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Oh, will you look at my Pokémon?$"
# 255 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 256 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5PostBattle:
# 257 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Humph, so what?\n"
# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What we want…\p"
# 259 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What we really want isn't here…\n"
# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ihihihihi…$"
# 261 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 262 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyIntro:
# 263 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\p"
# 264 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're going to meddle in Team Aqua's\n"
# 265 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "affairs?\p"
# 266 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're either absolutely fearless,\n"
# 267 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "simply ignorant, or both!\p"
# 268 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're so cute, you're disgusting!\n"
# 269 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I'll put you down, kiddy!$"
# 270 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 271 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyDefeat:
# 272 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
# 273 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're disgustingly strong!$"
# 274 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 275 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyPostBattle:
# 276 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It's bad enough to have Team Magma\n"
# 277 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "blunder about, but now there's you!\p"
# 278 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What makes you want to sniff around\n"
# 279 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in our business, anyway?$"
# 280 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 281 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy:
# 282 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have a situation here!\p"
# 283 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "A Team Magma mob just passed\n"
# 284 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the Weather Institute.\p"
# 285 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "They appear to be headed for\n"
# 286 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Mt. Pyre!$"
# 287 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 288 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre:
# 289 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What?!\p"
# 290 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We can't waste any more time here!\n"
# 291 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have to hurry to Mt. Pyre, too!\p"
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
# 293 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Team Magma, just you wait!$"
# 294 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 295 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon:
# 296 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks!\n"
# 297 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks to you, we're safe!\p"
# 298 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It might be an odd way of thanking you,\n"
# 299 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "but take this Pokémon.\p"
# 300 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Honestly, it's pretty bad, but no way\n"
# 301 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the creator was putting this idiot out\l"
# 302 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in the wild, you know?$"
# 303 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 304 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
@ Unused
# 305 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoRoomForPokemon:
# 306 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hm? You don't seem to have any room\n"
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "for this Pokémon.$"
# 308 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 309 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform:
# 310 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} received Castform!$"
# 311 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 312 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather:
# 313 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That Pokémon changes shape according\n"
# 314 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "to the weather conditions.\p"
# 315 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "There're plenty of them in the\n"
# 316 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Institute--go ahead and take it.$"
# 317 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 318 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous:
# 319 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I've been researching rain for many\n"
# 320 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "years, but it's ridiculous to think that\l"
# 321 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "humans can freely change the weather.$"
# 322 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 323 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_GroudonWeather:
# 324 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 325 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the Hoenn region.\p"
# 326 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, a drought has been recorded\n"
# 327 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in {STR_VAR_1}.\p"
# 328 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 329 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 330 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 331 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_KyogreWeather:
# 332 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 333 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the Hoenn region.\p"
# 334 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, heavy rainfall has been\n"
# 335 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "recorded over {STR_VAR_1}.\p"
# 336 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 337 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 338 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 339 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoAbnormalWeather:
# 340 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Abnormal weather conditions are\n"
# 341 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "no longer being reported.\p"
# 342 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The occasional rainfall is a blessing,\n"
# 343 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "really.$"
