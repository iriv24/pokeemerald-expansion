# 1 "data/maps/Route114/scripts.pory"

# 2 "data/maps/Route114/scripts.pory"
Route114_MapScripts::
# 3 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route114_OnResume
# 4 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 5 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 6 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
# 7 "data/maps/Route114/scripts.pory"
	.byte 0
# 8 "data/maps/Route114/scripts.pory"

# 9 "data/maps/Route114/scripts.pory"
Route114_OnResume:
# 10 "data/maps/Route114/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route114_EventScript_TryRemoveArticunoGalar
# 11 "data/maps/Route114/scripts.pory"
	end
# 12 "data/maps/Route114/scripts.pory"

# 13 "data/maps/Route114/scripts.pory"
Route114_EventScript_TryRemoveArticunoGalar::
# 14 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/Route114/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 16 "data/maps/Route114/scripts.pory"
	removeobject VAR_LAST_TALKED
# 17 "data/maps/Route114/scripts.pory"
	return
# 18 "data/maps/Route114/scripts.pory"

# 19 "data/maps/Route114/scripts.pory"
Route114_OnTransition:
# 20 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 21 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 22 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 23 "data/maps/Route114/scripts.pory"
	call_if_unset FLAG_DEFEATED_ARTICUNO_GALARIAN, Route114_EventScript_ShowArticunoGalar
# 24 "data/maps/Route114/scripts.pory"
	end
# 25 "data/maps/Route114/scripts.pory"

# 26 "data/maps/Route114/scripts.pory"
Route114_EventScript_ShowArticunoGalar::
# 27 "data/maps/Route114/scripts.pory"
	clearflag FLAG_HIDE_ARTICUNO_GALARIAN
# 28 "data/maps/Route114/scripts.pory"
	return
# 29 "data/maps/Route114/scripts.pory"

# 30 "data/maps/Route114/scripts.pory"
Route114_EventScript_ArticunoGalar::
# 31 "data/maps/Route114/scripts.pory"
	lock
# 32 "data/maps/Route114/scripts.pory"
	faceplayer
# 33 "data/maps/Route114/scripts.pory"
	waitse
# 34 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_ARTICUNO_GALAR, CRY_MODE_ENCOUNTER
# 35 "data/maps/Route114/scripts.pory"
	delay 40
# 36 "data/maps/Route114/scripts.pory"
	waitmoncry
# 37 "data/maps/Route114/scripts.pory"
	setwildbattle SPECIES_ARTICUNO_GALAR, 70
# 38 "data/maps/Route114/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 39 "data/maps/Route114/scripts.pory"
	special StartRegiBattle
# 40 "data/maps/Route114/scripts.pory"
	waitstate
# 41 "data/maps/Route114/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 42 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 43 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route114_EventScript_DefeatedArticunoGalar
# 44 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route114_EventScript_RanFromArticunoGalar
# 45 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route114_EventScript_RanFromArticunoGalar
# 46 "data/maps/Route114/scripts.pory"
	setflag FLAG_DEFEATED_ARTICUNO_GALARIAN
# 47 "data/maps/Route114/scripts.pory"
	release
# 48 "data/maps/Route114/scripts.pory"
	end
# 49 "data/maps/Route114/scripts.pory"

# 50 "data/maps/Route114/scripts.pory"
Route114_EventScript_DefeatedArticunoGalar::
# 51 "data/maps/Route114/scripts.pory"
	setflag FLAG_DEFEATED_ARTICUNO_GALARIAN
# 52 "data/maps/Route114/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 53 "data/maps/Route114/scripts.pory"
	end
# 54 "data/maps/Route114/scripts.pory"

# 55 "data/maps/Route114/scripts.pory"
Route114_EventScript_RanFromArticunoGalar::
# 56 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARTICUNO_GALAR
# 57 "data/maps/Route114/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 58 "data/maps/Route114/scripts.pory"
	end
# 59 "data/maps/Route114/scripts.pory"

# 60 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 61 "data/maps/Route114/scripts.pory"
	call_if_unset FLAG_BADGE06_GET, Route114_CloseLakeEntrance
# 62 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 63 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 64 "data/maps/Route114/scripts.pory"
	end
# 65 "data/maps/Route114/scripts.pory"

# 66 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 67 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 68 "data/maps/Route114/scripts.pory"
	.2byte 0
# 69 "data/maps/Route114/scripts.pory"

# 70 "data/maps/Route114/scripts.pory"
Route114_CloseLakeEntrance::
# 71 "data/maps/Route114/scripts.pory"
	setmetatile 12, 26, METATILE_General_RockWall_RockBase, TRUE
# 72 "data/maps/Route114/scripts.pory"
	setmetatile 12, 27, METATILE_General_RockWall_SandBase, TRUE
# 73 "data/maps/Route114/scripts.pory"
	return
# 74 "data/maps/Route114/scripts.pory"

# 75 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 76 "data/maps/Route114/scripts.pory"
	lock
# 77 "data/maps/Route114/scripts.pory"
	faceplayer
# 78 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 79 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 80 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 81 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 82 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 83 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 84 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 85 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 86 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 87 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 88 "data/maps/Route114/scripts.pory"
	release
# 89 "data/maps/Route114/scripts.pory"
	end
# 90 "data/maps/Route114/scripts.pory"

# 91 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 92 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 93 "data/maps/Route114/scripts.pory"
	release
# 94 "data/maps/Route114/scripts.pory"
	end
# 95 "data/maps/Route114/scripts.pory"

# 96 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 97 "data/maps/Route114/scripts.pory"
	lock
# 98 "data/maps/Route114/scripts.pory"
	faceplayer
# 99 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 100 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 101 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 102 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 103 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 104 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 105 "data/maps/Route114/scripts.pory"
	release
# 106 "data/maps/Route114/scripts.pory"
	end
# 107 "data/maps/Route114/scripts.pory"

# 108 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 109 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 110 "data/maps/Route114/scripts.pory"
	release
# 111 "data/maps/Route114/scripts.pory"
	end
# 112 "data/maps/Route114/scripts.pory"

# 113 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 114 "data/maps/Route114/scripts.pory"
	lock
# 115 "data/maps/Route114/scripts.pory"
	faceplayer
# 116 "data/maps/Route114/scripts.pory"
	waitse
# 117 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 118 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 119 "data/maps/Route114/scripts.pory"
	waitmoncry
# 120 "data/maps/Route114/scripts.pory"
	release
# 121 "data/maps/Route114/scripts.pory"
	end
# 122 "data/maps/Route114/scripts.pory"

# 123 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 124 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 125 "data/maps/Route114/scripts.pory"
	end
# 126 "data/maps/Route114/scripts.pory"

# 127 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 128 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 129 "data/maps/Route114/scripts.pory"
	end
# 130 "data/maps/Route114/scripts.pory"

# 131 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 132 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 133 "data/maps/Route114/scripts.pory"
	end
# 134 "data/maps/Route114/scripts.pory"

# 135 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 136 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 137 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/Route114/scripts.pory"
	end
# 139 "data/maps/Route114/scripts.pory"

# 140 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 141 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 142 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 143 "data/maps/Route114/scripts.pory"
	end
# 144 "data/maps/Route114/scripts.pory"

# 145 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 146 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 147 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 148 "data/maps/Route114/scripts.pory"
	end
# 149 "data/maps/Route114/scripts.pory"

# 150 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 151 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 152 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 153 "data/maps/Route114/scripts.pory"
	end
# 154 "data/maps/Route114/scripts.pory"

# 155 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 156 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 157 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 158 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 159 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 160 "data/maps/Route114/scripts.pory"
	release
# 161 "data/maps/Route114/scripts.pory"
	end
# 162 "data/maps/Route114/scripts.pory"

# 163 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 164 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 165 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 166 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 167 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 168 "data/maps/Route114/scripts.pory"
	release
# 169 "data/maps/Route114/scripts.pory"
	end
# 170 "data/maps/Route114/scripts.pory"

# 171 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 172 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 173 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route114/scripts.pory"
	end
# 175 "data/maps/Route114/scripts.pory"

# 176 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 177 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 178 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 179 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 180 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 181 "data/maps/Route114/scripts.pory"
	release
# 182 "data/maps/Route114/scripts.pory"
	end
# 183 "data/maps/Route114/scripts.pory"

# 184 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 185 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 186 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 188 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 189 "data/maps/Route114/scripts.pory"
	release
# 190 "data/maps/Route114/scripts.pory"
	end
# 191 "data/maps/Route114/scripts.pory"

# 192 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 193 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 194 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 195 "data/maps/Route114/scripts.pory"
	end
# 196 "data/maps/Route114/scripts.pory"

# 197 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 198 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 199 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 200 "data/maps/Route114/scripts.pory"
	end
# 201 "data/maps/Route114/scripts.pory"

# 202 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 203 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 204 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route114/scripts.pory"
	end
# 206 "data/maps/Route114/scripts.pory"

# 207 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 208 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 209 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route114/scripts.pory"
	end
# 211 "data/maps/Route114/scripts.pory"

# 212 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 213 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 214 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 215 "data/maps/Route114/scripts.pory"
	end
# 216 "data/maps/Route114/scripts.pory"

# 217 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 218 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 219 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/Route114/scripts.pory"
	end
# 221 "data/maps/Route114/scripts.pory"

# 222 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 223 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 224 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/Route114/scripts.pory"
	end
# 226 "data/maps/Route114/scripts.pory"

# 227 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 228 "data/maps/Route114/scripts.pory"
	.string "All my Pokémon does is ROAR…\n"
# 229 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 230 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 231 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 232 "data/maps/Route114/scripts.pory"

# 233 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 234 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 235 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends Pokémon scurrying.$"
# 236 "data/maps/Route114/scripts.pory"

# 237 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 238 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 239 "data/maps/Route114/scripts.pory"

# 240 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 241 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 242 "data/maps/Route114/scripts.pory"
	.string "Rustboro CITY THROUGH HERE$"
# 243 "data/maps/Route114/scripts.pory"

# 244 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 245 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 246 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 247 "data/maps/Route114/scripts.pory"

# 248 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 249 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"
