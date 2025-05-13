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
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseDontTakePokemon, MSGBOX_DEFAULT
# 95 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
# 96 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 97 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	@setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CASTFORM_NORMAL
# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	@givemonrandom SPECIES_CASTFORM_NORMAL, 25, ITEM_MYSTIC_WATER
# 102 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	@goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
# 103 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	@goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
# 104 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	@goto Common_EventScript_NoMoreRoomForPokemon
# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	@end
# 106 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 107 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty::
# 108 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 109 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 110 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 115 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 116 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC::
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 120 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 121 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 122 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 123 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SendCastformToPC::
# 125 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 126 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 128 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare::
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 131 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
# 132 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 133 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitfanfare
# 134 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM_NORMAL
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 137 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ExplainCastform::
# 138 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
# 139 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
# 140 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 141 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 142 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather::
# 144 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
# 145 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
# 146 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 147 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 148 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 149 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
# 150 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 151 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 152 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 153 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather  @ Both defeated
# 154 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
# 155 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
# 156 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route119_WeatherInstitute_2F_EventScript_KyogreWeather
# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
# 158 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 159 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 160 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 161 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_KyogreWeather::
# 162 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
# 163 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 164 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 165 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 166 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather::
# 167 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special CreateAbnormalWeatherEvent
# 168 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 169 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 170 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 171 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated::
# 172 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_0x8004, 1
# 173 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 174 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather::
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
# 177 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 178 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 180 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
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
	walk_fast_left
# 188 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 192 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 193 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 194 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay:
# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 197 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 198 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 199 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 200 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	ride_water_current_up
# 201 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_down
# 202 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 203 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 204 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
# 205 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_down
# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_left
# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 208 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 209 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
# 210 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 211 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 214 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 220 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 221 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_MattIntro:
# 223 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hehehe…\p"
# 224 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I'm a cut above the Grunts you've seen\n"
# 225 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "so far.\p"
# 226 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You know what that means right?\n"
# 227 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I'm going to pulverize you!$"
# 228 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_MattDefeat:
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hehehe…\n"
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Our plan's being spoiled by a kid?$"
# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_MattPostBattle:
# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hehehe…\p"
# 235 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It's fine that I lost here,\n"
# 236 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I'm certain Shelly will take care\l"
# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "of you.$"
# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Intro:
# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We're Team Aqua!\n"
# 241 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We appear wherever anything rare is\l"
# 242 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "found!$"
# 243 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 244 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Defeat:
# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You got me!$"
# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3PostBattle:
# 248 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You don't have any idea what we of\n"
# 249 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Team Aqua are working towards!\l"
# 250 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You stay out of our way!$"
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Intro:
# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Don't tell me you're looking for that\n"
# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "weather Pokémon, too?\p"
# 255 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That's a no-no!\n"
# 256 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We were here to get it first!$"
# 257 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Defeat:
# 259 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Oh, will you look at my Pokémon?$"
# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 261 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5PostBattle:
# 262 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Humph, so what?\n"
# 263 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What we want…\p"
# 264 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What we really want isn't here…\n"
# 265 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ihihihihi…$"
# 266 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 267 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyIntro:
# 268 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\p"
# 269 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're going to meddle in Team Aqua's\n"
# 270 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "affairs?\p"
# 271 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're either absolutely fearless,\n"
# 272 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "simply ignorant, or both!\p"
# 273 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're so cute, you're disgusting!\n"
# 274 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I'll put you down, kiddy!$"
# 275 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 276 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyDefeat:
# 277 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
# 278 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're disgustingly strong!$"
# 279 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 280 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyPostBattle:
# 281 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It's bad enough to have Team Magma\n"
# 282 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "blunder about, but now there's you!\p"
# 283 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What makes you want to sniff around\n"
# 284 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in our business, anyway?$"
# 285 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 286 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy:
# 287 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have a situation here!\p"
# 288 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "A Team Magma mob just passed\n"
# 289 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the Weather Institute.\p"
# 290 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "They appear to be headed for\n"
# 291 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Mt. Pyre!$"
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 293 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre:
# 294 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What?!\p"
# 295 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We can't waste any more time here!\n"
# 296 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have to hurry to Mt. Pyre, too!\p"
# 297 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
# 298 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Team Magma, just you wait!$"
# 299 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 300 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ThanksPleaseDontTakePokemon:
# 301 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks to you, we're safe!\n"
# 302 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Normally, I would give you a Pokémon as\l"
# 303 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "token of our appreciation, but I think\l"
# 304 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in this case, you'll be better of\l"
# 305 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Don't worry, though, Castform can now\n"
# 306 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "be found out in the wild!$"
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 308 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
@ Unused
# 309 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoRoomForPokemon:
# 310 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hm? You don't seem to have any room\n"
# 311 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "for this Pokémon.$"
# 312 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 313 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform:
# 314 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} received Castform!$"
# 315 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 316 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather:
# 317 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That Pokémon changes shape according\n"
# 318 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "to the weather conditions.\p"
# 319 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "There're plenty of them in the\n"
# 320 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Institute--go ahead and take it.$"
# 321 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 322 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous:
# 323 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I've been researching rain for many\n"
# 324 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "years, but it's ridiculous to think that\l"
# 325 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "humans can freely change the weather.$"
# 326 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 327 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_GroudonWeather:
# 328 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 329 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the Hoenn region.\p"
# 330 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, a drought has been recorded\n"
# 331 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in {STR_VAR_1}.\p"
# 332 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 333 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 334 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 335 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_KyogreWeather:
# 336 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 337 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the Hoenn region.\p"
# 338 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, heavy rainfall has been\n"
# 339 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "recorded over {STR_VAR_1}.\p"
# 340 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 341 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 342 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 343 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoAbnormalWeather:
# 344 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Abnormal weather conditions are\n"
# 345 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "no longer being reported.\p"
# 346 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The occasional rainfall is a blessing,\n"
# 347 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "really.$"
