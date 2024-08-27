# 1 "data/maps/Route114/scripts.pory"

# 2 "data/maps/Route114/scripts.pory"
Route114_MapScripts::
# 3 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 4 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 5 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
# 6 "data/maps/Route114/scripts.pory"
	.byte 0
# 7 "data/maps/Route114/scripts.pory"

# 8 "data/maps/Route114/scripts.pory"
Route114_OnTransition:
# 9 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 10 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 11 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 12 "data/maps/Route114/scripts.pory"
	end
# 13 "data/maps/Route114/scripts.pory"

# 14 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 15 "data/maps/Route114/scripts.pory"
	call_if_unset FLAG_BADGE06_GET, Route114_CloseLakeEntrance
# 16 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 17 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 18 "data/maps/Route114/scripts.pory"
	end
# 19 "data/maps/Route114/scripts.pory"

# 20 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 21 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 22 "data/maps/Route114/scripts.pory"
	.2byte 0
# 23 "data/maps/Route114/scripts.pory"

# 24 "data/maps/Route114/scripts.pory"
Route114_CloseLakeEntrance::
# 25 "data/maps/Route114/scripts.pory"
	setmetatile 12, 26, METATILE_General_RockWall_RockBase, TRUE
# 26 "data/maps/Route114/scripts.pory"
	setmetatile 12, 27, METATILE_General_RockWall_SandBase, TRUE
# 27 "data/maps/Route114/scripts.pory"
	return
# 28 "data/maps/Route114/scripts.pory"

# 29 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 30 "data/maps/Route114/scripts.pory"
	lock
# 31 "data/maps/Route114/scripts.pory"
	faceplayer
# 32 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 33 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 34 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 35 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 36 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 37 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 38 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 39 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 40 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 41 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 42 "data/maps/Route114/scripts.pory"
	release
# 43 "data/maps/Route114/scripts.pory"
	end
# 44 "data/maps/Route114/scripts.pory"

# 45 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 46 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 47 "data/maps/Route114/scripts.pory"
	release
# 48 "data/maps/Route114/scripts.pory"
	end
# 49 "data/maps/Route114/scripts.pory"

# 50 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 51 "data/maps/Route114/scripts.pory"
	lock
# 52 "data/maps/Route114/scripts.pory"
	faceplayer
# 53 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 54 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 55 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 56 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 57 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 58 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 59 "data/maps/Route114/scripts.pory"
	release
# 60 "data/maps/Route114/scripts.pory"
	end
# 61 "data/maps/Route114/scripts.pory"

# 62 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 63 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 64 "data/maps/Route114/scripts.pory"
	release
# 65 "data/maps/Route114/scripts.pory"
	end
# 66 "data/maps/Route114/scripts.pory"

# 67 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 68 "data/maps/Route114/scripts.pory"
	lock
# 69 "data/maps/Route114/scripts.pory"
	faceplayer
# 70 "data/maps/Route114/scripts.pory"
	waitse
# 71 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 72 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 73 "data/maps/Route114/scripts.pory"
	waitmoncry
# 74 "data/maps/Route114/scripts.pory"
	release
# 75 "data/maps/Route114/scripts.pory"
	end
# 76 "data/maps/Route114/scripts.pory"

# 77 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 78 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 79 "data/maps/Route114/scripts.pory"
	end
# 80 "data/maps/Route114/scripts.pory"

# 81 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 82 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 83 "data/maps/Route114/scripts.pory"
	end
# 84 "data/maps/Route114/scripts.pory"

# 85 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 86 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 87 "data/maps/Route114/scripts.pory"
	end
# 88 "data/maps/Route114/scripts.pory"

# 89 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 90 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 91 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/Route114/scripts.pory"
	end
# 93 "data/maps/Route114/scripts.pory"

# 94 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 95 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 96 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/Route114/scripts.pory"
	end
# 98 "data/maps/Route114/scripts.pory"

# 99 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 100 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 101 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route114/scripts.pory"
	end
# 103 "data/maps/Route114/scripts.pory"

# 104 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 105 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 106 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route114/scripts.pory"
	end
# 108 "data/maps/Route114/scripts.pory"

# 109 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 110 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 111 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 112 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 113 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 114 "data/maps/Route114/scripts.pory"
	release
# 115 "data/maps/Route114/scripts.pory"
	end
# 116 "data/maps/Route114/scripts.pory"

# 117 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 118 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 119 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 121 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 122 "data/maps/Route114/scripts.pory"
	release
# 123 "data/maps/Route114/scripts.pory"
	end
# 124 "data/maps/Route114/scripts.pory"

# 125 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 126 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 127 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route114/scripts.pory"
	end
# 129 "data/maps/Route114/scripts.pory"

# 130 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 131 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 132 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 133 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 134 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 135 "data/maps/Route114/scripts.pory"
	release
# 136 "data/maps/Route114/scripts.pory"
	end
# 137 "data/maps/Route114/scripts.pory"

# 138 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 139 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 140 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 141 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 142 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 143 "data/maps/Route114/scripts.pory"
	release
# 144 "data/maps/Route114/scripts.pory"
	end
# 145 "data/maps/Route114/scripts.pory"

# 146 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 147 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 148 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route114/scripts.pory"
	end
# 150 "data/maps/Route114/scripts.pory"

# 151 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 152 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 153 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 154 "data/maps/Route114/scripts.pory"
	end
# 155 "data/maps/Route114/scripts.pory"

# 156 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 157 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 158 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 159 "data/maps/Route114/scripts.pory"
	end
# 160 "data/maps/Route114/scripts.pory"

# 161 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 162 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 163 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 164 "data/maps/Route114/scripts.pory"
	end
# 165 "data/maps/Route114/scripts.pory"

# 166 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 167 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 168 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 169 "data/maps/Route114/scripts.pory"
	end
# 170 "data/maps/Route114/scripts.pory"

# 171 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 172 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 173 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route114/scripts.pory"
	end
# 175 "data/maps/Route114/scripts.pory"

# 176 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 177 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 178 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 179 "data/maps/Route114/scripts.pory"
	end
# 180 "data/maps/Route114/scripts.pory"

# 181 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 182 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 183 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 184 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 185 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 186 "data/maps/Route114/scripts.pory"

# 187 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 188 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 189 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 190 "data/maps/Route114/scripts.pory"

# 191 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 192 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 193 "data/maps/Route114/scripts.pory"

# 194 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 195 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 196 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 197 "data/maps/Route114/scripts.pory"

# 198 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 199 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 200 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 201 "data/maps/Route114/scripts.pory"

# 202 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 203 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"
