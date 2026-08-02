# 1 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 2 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_MapScripts::
# 3 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route121_SafariZoneEntrance_OnFrame
# 4 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.byte 0
# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 6 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_OnFrame:
# 7 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	map_script_2 VAR_SAFARI_ZONE_STATE, 1, Route121_SafariZoneEntrance_EventScript_ExitSafariZone
# 8 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.2byte 0
# 9 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 10 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_ExitSafariZone::
# 11 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lockall
# 12 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route121_SafariZoneEntrance_Movement_ExitSafariZone
# 13 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 14 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 15 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	releaseall
# 16 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 17 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 18 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_ExitSafariZone:
# 19 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_up
# 20 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 21 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 22 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 23 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 24 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 25 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 26 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 27 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 28 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 29 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_WelcomeAttendant::
# 30 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WelcomeToSafariZone, MSGBOX_NPC
# 31 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 32 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 33 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_InfoAttendant::
# 34 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lock
# 35 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	faceplayer
# 36 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WelcomeFirstTime, MSGBOX_YESNO
# 37 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route121_SafariZoneEntrance_EventScript_FirstTimeInfo
# 38 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ComeInAndEnjoy, MSGBOX_DEFAULT
# 39 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
# 40 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 41 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 42 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_FirstTimeInfo::
# 43 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_FirstTimeInfo, MSGBOX_DEFAULT
# 44 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
# 45 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 46 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 47 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger::
# 48 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lockall
# 49 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 50 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	showmoneybox 0, 0
# 52 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
# 53 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone
# 54 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
# 55 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 56 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 57 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 58 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone::
# 59 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE
# 60 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route121_SafariZoneEntrance_EventScript_NoPokeblockCase
# 61 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	call Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon
# 62 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	checkmoney 500
# 63 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route121_SafariZoneEntrance_EventScript_NotEnoughMoney
# 64 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	playse SE_SHOP
# 65 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ThatWillBe500Please, MSGBOX_DEFAULT
# 66 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	removemoney 500
# 67 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	updatemoneybox
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls, MSGBOX_DEFAULT
# 69 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 70 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	message Route121_SafariZoneEntrance_Text_Received30SafariBalls
# 71 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitfanfare
# 72 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 73 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 74 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	hidemoneybox
# 75 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route121_SafariZoneEntrance_Movement_EnterSafariZone
# 76 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special EnterSafariMode
# 78 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 2
# 79 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	clearflag FLAG_GOOD_LUCK_SAFARI_ZONE
# 80 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	warp MAP_SAFARI_ZONE_SOUTH, 32, 33
# 81 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 82 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 83 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 84 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon::
# 85 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	getpartysize
# 86 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_ne VAR_RESULT, PARTY_SIZE, Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon
# 87 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
# 88 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon
# 89 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull, MSGBOX_DEFAULT
# 90 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 91 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 92 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 93 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon::
# 94 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	return
# 95 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 96 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_NoPokeblockCase::
# 97 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase, MSGBOX_DEFAULT
# 98 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 99 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 100 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 101 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_NotEnoughMoney::
# 102 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 103 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 104 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 105 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 106 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter::
# 107 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 108 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	hidemoneybox
# 109 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route121_SafariZoneEntrance_Movement_BackAwayFromCounter
# 110 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	releaseall
# 112 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 113 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 114 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_BackAwayFromCounter:
# 115 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 116 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 117 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 118 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_EnterSafariZone:
# 119 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 120 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 121 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 122 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 123 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 124 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 125 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_down
# 126 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	delay_16
# 127 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 128 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 129 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TrainerTipSign::
# 130 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_TrainerTip, MSGBOX_SIGN
# 131 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end

Route121_SafariZoneEntrance_EventScript_Maniac::
# 136 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lock
# 137 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	faceplayer
# 138 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route121_SafariZoneEntrance_EventScript_ManiacAskAgain
# 139 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_EventScript_ManiacWannaChangeForm, MSGBOX_YESNO
# 140 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route121_SafariZoneEntrance_EventScript_ManiacAccept
# 141 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route121_SafariZoneEntrance_EventScript_ManiacDecline
# 142 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
	end


Route121_SafariZoneEntrance_EventScript_ManiacAskAgain::
# 147 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Maniac_AskAgain, MSGBOX_YESNO
# 148 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeForm
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeForm::
# 153 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route121_SafariZoneEntrance_EventScript_ManiacAccept
# 154 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route121_SafariZoneEntrance_EventScript_ManiacDecline
# 155 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
	end


Route121_SafariZoneEntrance_EventScript_ManiacAccept::
# 160 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChoosePartyMon
# 161 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 162 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 163 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Route121_SafariZoneEntrance_EventScript_ManiacDecline
# 164 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 165 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 166 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_GASTRODON, Route121_SafariZoneEntrance_EventScript_ManiacAccept_2
# 167 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_GASTRODON_EAST, Route121_SafariZoneEntrance_EventScript_ManiacAccept_2
# 168 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_GASTRODON_WEST, Route121_SafariZoneEntrance_EventScript_ManiacAccept_2
# 170 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_SAWSBUCK, Route121_SafariZoneEntrance_EventScript_ManiacAccept_3
# 171 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_SAWSBUCK_SPRING, Route121_SafariZoneEntrance_EventScript_ManiacAccept_3
# 172 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_SAWSBUCK_SUMMER, Route121_SafariZoneEntrance_EventScript_ManiacAccept_3
# 173 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_SAWSBUCK_AUTUMN, Route121_SafariZoneEntrance_EventScript_ManiacAccept_3
# 174 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_SAWSBUCK_WINTER, Route121_SafariZoneEntrance_EventScript_ManiacAccept_3
# 176 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_KELDEO, Route121_SafariZoneEntrance_EventScript_ManiacAccept_4
# 177 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_KELDEO_ORDINARY, Route121_SafariZoneEntrance_EventScript_ManiacAccept_4
# 178 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_KELDEO_RESOLUTE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_4
# 180 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 181 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_ICY_SNOW, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 182 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_POLAR, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 183 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_TUNDRA, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 184 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_CONTINENTAL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 185 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_GARDEN, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 186 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_ELEGANT, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 187 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_MEADOW, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 188 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_MODERN, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 189 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_MARINE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 190 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_ARCHIPELAGO, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 191 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_HIGH_PLAINS, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 192 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_SANDSTORM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 193 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_RIVER, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 194 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_MONSOON, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 195 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_SAVANNA, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 196 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_SUN, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 197 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_OCEAN, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 198 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_JUNGLE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 199 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_FANCY, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 200 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_VIVILLON_POKEBALL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_5
# 202 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FLORGES, Route121_SafariZoneEntrance_EventScript_ManiacAccept_6
# 203 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FLORGES_RED, Route121_SafariZoneEntrance_EventScript_ManiacAccept_6
# 204 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FLORGES_YELLOW, Route121_SafariZoneEntrance_EventScript_ManiacAccept_6
# 205 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FLORGES_ORANGE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_6
# 206 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FLORGES_BLUE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_6
# 207 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FLORGES_WHITE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_6
# 209 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FURFROU, Route121_SafariZoneEntrance_EventScript_ManiacAccept_7
# 210 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FURFROU_NATURAL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_7
# 211 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FURFROU_HEART_TRIM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_7
# 212 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FURFROU_STAR_TRIM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_7
# 213 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FURFROU_DIAMOND_TRIM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_7
# 214 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FURFROU_DEBUTANTE_TRIM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_7
# 215 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FURFROU_MATRON_TRIM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_7
# 216 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FURFROU_DANDY_TRIM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_7
# 217 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FURFROU_LA_REINE_TRIM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_7
# 218 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FURFROU_KABUKI_TRIM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_7
# 219 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_FURFROU_PHARAOH_TRIM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_7
# 221 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_GOURGEIST, Route121_SafariZoneEntrance_EventScript_ManiacAccept_8
# 222 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_GOURGEIST_AVERAGE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_8
# 223 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_GOURGEIST_SMALL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_8
# 224 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_GOURGEIST_LARGE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_8
# 225 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_GOURGEIST_SUPER, Route121_SafariZoneEntrance_EventScript_ManiacAccept_8
# 227 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 228 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_METEOR, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 229 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_RED, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 230 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_ORANGE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 231 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_YELLOW, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 232 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_GREEN, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 233 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_BLUE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 234 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_INDIGO, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 235 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_VIOLET, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 236 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_METEOR_RED, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 237 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_METEOR_ORANGE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 238 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_METEOR_YELLOW, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 239 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_METEOR_GREEN, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 240 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_METEOR_BLUE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 241 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_METEOR_INDIGO, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 242 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_METEOR_VIOLET, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 243 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_CORE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 244 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_CORE_RED, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 245 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_CORE_ORANGE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 246 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_CORE_YELLOW, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 247 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_CORE_GREEN, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 248 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_CORE_BLUE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 249 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_CORE_INDIGO, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 250 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MINIOR_CORE_VIOLET, Route121_SafariZoneEntrance_EventScript_ManiacAccept_9
# 252 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MAGEARNA, Route121_SafariZoneEntrance_EventScript_ManiacAccept_10
# 253 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MAGEARNA_ORIGINAL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_10
# 255 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_TOXTRICITY, Route121_SafariZoneEntrance_EventScript_ManiacAccept_11
# 256 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_TOXTRICITY_AMPED, Route121_SafariZoneEntrance_EventScript_ManiacAccept_11
# 257 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_TOXTRICITY_LOW_KEY, Route121_SafariZoneEntrance_EventScript_ManiacAccept_11
# 259 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_POLTEAGEIST, Route121_SafariZoneEntrance_EventScript_ManiacAccept_12
# 260 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_POLTEAGEIST_PHONY, Route121_SafariZoneEntrance_EventScript_ManiacAccept_12
# 261 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_POLTEAGEIST_ANTIQUE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_12
# 263 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 264 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_STRAWBERRY, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 265 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_VANILLA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 266 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 267 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_RUBY_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 268 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_MATCHA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 269 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_MINT_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 270 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_LEMON_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 271 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_SALTED_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 272 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_RUBY_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 273 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_CARAMEL_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 274 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_RAINBOW_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 275 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_BERRY, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 276 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_BERRY_VANILLA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 277 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_BERRY_RUBY_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 278 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_BERRY_MATCHA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 279 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_BERRY_MINT_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 280 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_BERRY_LEMON_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 281 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_BERRY_SALTED_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 282 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_BERRY_RUBY_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 283 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_BERRY_CARAMEL_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 284 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_BERRY_RAINBOW_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 285 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_LOVE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 286 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_LOVE_VANILLA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 287 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_LOVE_RUBY_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 288 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_LOVE_MATCHA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 289 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_LOVE_MINT_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 290 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_LOVE_LEMON_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 291 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_LOVE_SALTED_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 292 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_LOVE_RUBY_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 293 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_LOVE_CARAMEL_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 294 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_LOVE_RAINBOW_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 295 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_STAR, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 296 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_STAR_VANILLA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 297 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_STAR_RUBY_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 298 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_STAR_MATCHA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 299 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_STAR_MINT_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 300 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_STAR_LEMON_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 301 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_STAR_SALTED_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 302 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_STAR_RUBY_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 303 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_STAR_CARAMEL_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 304 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_STAR_RAINBOW_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 305 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_CLOVER, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 306 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_CLOVER_VANILLA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 307 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_CLOVER_RUBY_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 308 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_CLOVER_MATCHA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 309 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_CLOVER_MINT_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 310 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_CLOVER_LEMON_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 311 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_CLOVER_SALTED_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 312 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_CLOVER_RUBY_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 313 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_CLOVER_CARAMEL_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 314 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_CLOVER_RAINBOW_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 315 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_FLOWER, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 316 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_FLOWER_VANILLA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 317 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_FLOWER_RUBY_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 318 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_FLOWER_MATCHA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 319 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_FLOWER_MINT_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 320 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_FLOWER_LEMON_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 321 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_FLOWER_SALTED_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 322 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_FLOWER_RUBY_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 323 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_FLOWER_CARAMEL_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 324 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_FLOWER_RAINBOW_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 325 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_RIBBON, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 326 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_RIBBON_VANILLA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 327 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_RIBBON_RUBY_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 328 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_RIBBON_MATCHA_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 329 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_RIBBON_MINT_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 330 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_RIBBON_LEMON_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 331 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_RIBBON_SALTED_CREAM, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 332 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_RIBBON_RUBY_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 333 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_RIBBON_CARAMEL_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 334 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ALCREMIE_RIBBON_RAINBOW_SWIRL, Route121_SafariZoneEntrance_EventScript_ManiacAccept_13
# 336 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ZARUDE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_14
# 337 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_ZARUDE_DADA, Route121_SafariZoneEntrance_EventScript_ManiacAccept_14
# 339 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MAUSHOLD, Route121_SafariZoneEntrance_EventScript_ManiacAccept_15
# 340 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MAUSHOLD_THREE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_15
# 341 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_MAUSHOLD_FOUR, Route121_SafariZoneEntrance_EventScript_ManiacAccept_15
# 343 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_SQUAWKABILLY, Route121_SafariZoneEntrance_EventScript_ManiacAccept_16
# 344 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_SQUAWKABILLY_GREEN, Route121_SafariZoneEntrance_EventScript_ManiacAccept_16
# 345 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_SQUAWKABILLY_BLUE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_16
# 346 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_SQUAWKABILLY_YELLOW, Route121_SafariZoneEntrance_EventScript_ManiacAccept_16
# 347 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_SQUAWKABILLY_WHITE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_16
# 349 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_TATSUGIRI, Route121_SafariZoneEntrance_EventScript_ManiacAccept_17
# 350 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_TATSUGIRI_CURLY, Route121_SafariZoneEntrance_EventScript_ManiacAccept_17
# 351 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_TATSUGIRI_DROOPY, Route121_SafariZoneEntrance_EventScript_ManiacAccept_17
# 352 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_TATSUGIRI_STRETCHY, Route121_SafariZoneEntrance_EventScript_ManiacAccept_17
# 354 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_DUDUNSPARCE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_18
# 355 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_DUDUNSPARCE_TWO_SEGMENT, Route121_SafariZoneEntrance_EventScript_ManiacAccept_18
# 356 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_DUDUNSPARCE_THREE_SEGMENT, Route121_SafariZoneEntrance_EventScript_ManiacAccept_18
# 358 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_SINISTCHA, Route121_SafariZoneEntrance_EventScript_ManiacAccept_19
# 359 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_SINISTCHA_UNREMARKABLE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_19
# 360 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case SPECIES_SINISTCHA_MASTERPIECE, Route121_SafariZoneEntrance_EventScript_ManiacAccept_19
# 363 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ThisIsntAMon, MSGBOX_DEFAULT
# 364 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacAccept_2:
# 169 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseGastrodonForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_3:
# 175 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_4:
# 179 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseKeldeoForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_5:
# 201 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseVivillonForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_6:
# 208 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_7:
# 220 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_8:
# 226 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_9:
# 251 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_10:
# 254 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMagearnaForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_11:
# 258 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseToxtricityForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_12:
# 262 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChoosePolteageistForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_13:
# 335 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_14:
# 338 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseZarudeForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_15:
# 342 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMausholdForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_16:
# 348 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_17:
# 353 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_18:
# 357 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseDudunsparceForm
	return

Route121_SafariZoneEntrance_EventScript_ManiacAccept_19:
# 361 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSinistchaForm
	return


Route121_SafariZoneEntrance_EventScript_ManiacDecline::
# 370 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setflag FLAG_TEMP_1
# 371 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Maniac_ComeBackWithOne, MSGBOX_DEFAULT
# 372 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseGastrodonForm::
# 378 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 379 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 380 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_GASTRODON_FORM
# 381 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 382 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 383 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 384 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseGastrodonForm_3
# 386 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseGastrodonForm_4
# 388 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseGastrodonForm_5
Route121_SafariZoneEntrance_EventScript_ManiacChooseGastrodonForm_1:
# 391 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 392 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseGastrodonForm_3:
# 385 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeGastrodonEast
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseGastrodonForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseGastrodonForm_4:
# 387 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeGastrodonWest
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseGastrodonForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseGastrodonForm_5:
# 389 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseGastrodonForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeGastrodonEast::
# 397 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_GASTRODON_EAST
# 398 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 399 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 400 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeGastrodonWest::
# 405 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_GASTRODON_WEST
# 406 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 407 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 408 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm::
# 413 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 414 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 415 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_SAWSBUCK_FORM
# 416 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 417 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 418 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 419 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_3
# 421 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_4
# 423 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 2, Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_5
# 425 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 3, Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_6
# 427 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_7
Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_1:
# 430 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 431 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_3:
# 420 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeSawsbuckSpring
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_4:
# 422 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeSawsbuckSummer
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_5:
# 424 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeSawsbuckAutumn
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_6:
# 426 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeSawsbuckWinter
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_7:
# 428 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSawsbuckForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeSawsbuckSpring::
# 436 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_SAWSBUCK_SPRING
# 437 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 438 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 439 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeSawsbuckSummer::
# 444 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_SAWSBUCK_SUMMER
# 445 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 446 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 447 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeSawsbuckAutumn::
# 452 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_SAWSBUCK_AUTUMN
# 453 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 454 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 455 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeSawsbuckWinter::
# 460 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_SAWSBUCK_WINTER
# 461 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 462 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 463 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseKeldeoForm::
# 468 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 469 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 470 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_KELDEO_FORM
# 471 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 472 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 473 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 474 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseKeldeoForm_3
# 476 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseKeldeoForm_4
# 478 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseKeldeoForm_5
Route121_SafariZoneEntrance_EventScript_ManiacChooseKeldeoForm_1:
# 481 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 482 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseKeldeoForm_3:
# 475 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeKeldeoOrdinary
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseKeldeoForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseKeldeoForm_4:
# 477 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeKeldeoResolute
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseKeldeoForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseKeldeoForm_5:
# 479 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseKeldeoForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeKeldeoOrdinary::
# 487 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_KELDEO_ORDINARY
# 488 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 489 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 490 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeKeldeoResolute::
# 495 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_KELDEO_RESOLUTE
# 496 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 497 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 498 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseVivillonForm::
# 503 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 504 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 505 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_VIVILLON_FORM
# 506 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 507 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 508 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 509 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseVivillonForm_3
# 511 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseVivillonForm_4
# 513 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseVivillonForm_5
Route121_SafariZoneEntrance_EventScript_ManiacChooseVivillonForm_1:
# 516 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 517 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseVivillonForm_3:
# 510 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeVivillonFancy
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseVivillonForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseVivillonForm_4:
# 512 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeVivillonPokeball
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseVivillonForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseVivillonForm_5:
# 514 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseVivillonForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeVivillonFancy::
# 522 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_VIVILLON_FANCY
# 523 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 524 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 525 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeVivillonPokeball::
# 530 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_VIVILLON_POKEBALL
# 531 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 532 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 533 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm::
# 538 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 539 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 540 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_FLORGES_FORM
# 541 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 542 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 543 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 544 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_3
# 546 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_4
# 548 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 2, Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_5
# 550 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 3, Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_6
# 552 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 4, Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_7
# 554 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_8
Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_1:
# 557 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 558 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_3:
# 545 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFlorgesRed
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_4:
# 547 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFlorgesYellow
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_5:
# 549 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFlorgesOrange
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_6:
# 551 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFlorgesBlue
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_7:
# 553 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFlorgesWhite
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_8:
# 555 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFlorgesForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeFlorgesRed::
# 563 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FLORGES_RED
# 564 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 565 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 566 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeFlorgesYellow::
# 571 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FLORGES_YELLOW
# 572 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 573 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 574 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeFlorgesOrange::
# 579 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FLORGES_ORANGE
# 580 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 581 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 582 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeFlorgesBlue::
# 587 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FLORGES_BLUE
# 588 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 589 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 590 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeFlorgesWhite::
# 595 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FLORGES_WHITE
# 596 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 597 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 598 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm::
# 603 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 604 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 605 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_FURFROU_FORM
# 606 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 607 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 608 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 609 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_3
# 611 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_4
# 613 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 2, Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_5
# 615 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 3, Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_6
# 617 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 4, Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_7
# 619 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 5, Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_8
# 621 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 6, Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_9
# 623 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 7, Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_10
# 625 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 8, Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_11
# 627 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 9, Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_12
# 629 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_13
Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_1:
# 632 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 633 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_3:
# 610 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouNatural
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_4:
# 612 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouHeart
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_5:
# 614 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouStar
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_6:
# 616 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouDiamond
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_7:
# 618 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouDebutante
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_8:
# 620 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouMatron
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_9:
# 622 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouDandy
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_10:
# 624 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouLaReine
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_11:
# 626 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouKabuki
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_12:
# 628 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouPharaoh
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_13:
# 630 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseFurfrouForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouNatural::
# 638 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FURFROU_NATURAL
# 639 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 640 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 641 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouHeart::
# 646 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FURFROU_HEART_TRIM
# 647 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 648 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 649 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouStar::
# 654 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FURFROU_STAR_TRIM
# 655 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 656 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 657 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouDiamond::
# 662 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FURFROU_DIAMOND_TRIM
# 663 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 664 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 665 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouDebutante::
# 670 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FURFROU_DEBUTANTE_TRIM
# 671 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 672 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 673 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouMatron::
# 678 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FURFROU_MATRON_TRIM
# 679 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 680 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 681 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouDandy::
# 686 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FURFROU_DANDY_TRIM
# 687 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 688 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 689 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouLaReine::
# 694 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FURFROU_LA_REINE_TRIM
# 695 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 696 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 697 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouKabuki::
# 702 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FURFROU_KABUKI_TRIM
# 703 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 704 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 705 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeFurfrouPharaoh::
# 710 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_FURFROU_PHARAOH_TRIM
# 711 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 712 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 713 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm::
# 718 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 719 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 720 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_GOURGEIST_FORM
# 721 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 722 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 723 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 724 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_3
# 726 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_4
# 728 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 2, Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_5
# 730 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 3, Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_6
# 732 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_7
Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_1:
# 735 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 736 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_3:
# 725 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeGourgeistAverage
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_4:
# 727 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeGourgeistSmall
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_5:
# 729 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeGourgeistLarge
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_6:
# 731 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeGourgeistSuper
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_7:
# 733 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseGourgeistForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeGourgeistAverage::
# 741 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_GOURGEIST_AVERAGE
# 742 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 743 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 744 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeGourgeistSmall::
# 749 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_GOURGEIST_SMALL
# 750 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 751 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 752 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeGourgeistLarge::
# 757 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_GOURGEIST_LARGE
# 758 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 759 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 760 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeGourgeistSuper::
# 765 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_GOURGEIST_SUPER
# 766 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 767 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 768 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm::
# 773 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 774 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 775 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_MINIOR_FORM
# 776 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 777 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 778 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 779 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_3
# 781 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_4
# 783 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 2, Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_5
# 785 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 3, Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_6
# 787 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 4, Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_7
# 789 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 5, Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_8
# 791 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 6, Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_9
# 793 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_10
Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_1:
# 796 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 797 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_3:
# 780 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeMiniorOrange
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_4:
# 782 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeMiniorRed
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_5:
# 784 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeMiniorYellow
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_6:
# 786 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeMiniorGreen
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_7:
# 788 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeMiniorBlue
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_8:
# 790 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeMiniorIndigo
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_9:
# 792 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeMiniorViolet
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_10:
# 794 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMiniorForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeMiniorOrange::
# 802 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_MINIOR_ORANGE
# 803 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 804 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 805 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeMiniorRed::
# 810 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_MINIOR_RED
# 811 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 812 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 813 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeMiniorYellow::
# 818 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_MINIOR_YELLOW
# 819 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 820 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 821 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeMiniorGreen::
# 826 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_MINIOR_GREEN
# 827 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 828 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 829 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeMiniorBlue::
# 834 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_MINIOR_BLUE
# 835 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 836 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 837 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeMiniorIndigo::
# 842 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_MINIOR_INDIGO
# 843 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 844 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 845 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeMiniorViolet::
# 850 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_MINIOR_VIOLET
# 851 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 852 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 853 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseMagearnaForm::
# 858 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 859 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 860 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_MAGEARNA_FORM
# 861 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 862 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 863 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 864 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseMagearnaForm_3
# 866 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseMagearnaForm_4
# 868 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseMagearnaForm_5
Route121_SafariZoneEntrance_EventScript_ManiacChooseMagearnaForm_1:
# 871 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 872 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseMagearnaForm_3:
# 865 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeMagearna
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMagearnaForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseMagearnaForm_4:
# 867 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeMagearnaOriginal
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMagearnaForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseMagearnaForm_5:
# 869 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMagearnaForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeMagearna::
# 877 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_MAGEARNA
# 878 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 879 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 880 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeMagearnaOriginal::
# 885 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_MAGEARNA_ORIGINAL
# 886 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 887 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 888 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseToxtricityForm::
# 893 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 894 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 895 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_TOXTRICITY_FORM
# 896 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 897 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 898 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 899 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseToxtricityForm_3
# 901 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseToxtricityForm_4
# 903 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseToxtricityForm_5
Route121_SafariZoneEntrance_EventScript_ManiacChooseToxtricityForm_1:
# 906 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 907 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseToxtricityForm_3:
# 900 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeToxtricityAmped
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseToxtricityForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseToxtricityForm_4:
# 902 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeToxtricityLowKey
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseToxtricityForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseToxtricityForm_5:
# 904 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseToxtricityForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeToxtricityAmped::
# 912 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_TOXTRICITY_AMPED
# 913 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 914 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 915 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeToxtricityLowKey::
# 920 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_TOXTRICITY_LOW_KEY
# 921 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 922 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 923 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChoosePolteageistForm::
# 928 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 929 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 930 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_POLTEAGEIST_FORM
# 931 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 932 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 933 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 934 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChoosePolteageistForm_3
# 936 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChoosePolteageistForm_4
# 938 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChoosePolteageistForm_5
Route121_SafariZoneEntrance_EventScript_ManiacChoosePolteageistForm_1:
# 941 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 942 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChoosePolteageistForm_3:
# 935 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangePolteageistPhony
	goto Route121_SafariZoneEntrance_EventScript_ManiacChoosePolteageistForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChoosePolteageistForm_4:
# 937 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangePolteageistAntique
	goto Route121_SafariZoneEntrance_EventScript_ManiacChoosePolteageistForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChoosePolteageistForm_5:
# 939 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChoosePolteageistForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangePolteageistPhony::
# 947 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_POLTEAGEIST_PHONY
# 948 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 949 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 950 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangePolteageistAntique::
# 955 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_POLTEAGEIST_ANTIQUE
# 956 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 957 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 958 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm::
# 963 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 964 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 965 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_ALCREMIE_FORM
# 966 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 967 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 968 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 969 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm_3
# 971 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm_4
# 973 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 2, Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm_5
# 975 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm_6
Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm_1:
# 978 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 979 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm_3:
# 970 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeAlcremieBerry
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm_4:
# 972 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeAlcremieVanilla
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm_5:
# 974 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeAlcremieStrawberry
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm_6:
# 976 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseAlcremieForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeAlcremieBerry::
# 984 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_ALCREMIE_BERRY
# 985 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 986 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 987 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeAlcremieVanilla::
# 992 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_ALCREMIE_VANILLA_CREAM
# 993 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 994 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 995 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeAlcremieStrawberry::
# 1000 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM
# 1001 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1002 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1003 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseZarudeForm::
# 1008 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 1009 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 1010 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_ZARUDE_FORM
# 1011 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 1012 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 1013 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 1014 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseZarudeForm_3
# 1016 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseZarudeForm_4
# 1018 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseZarudeForm_5
Route121_SafariZoneEntrance_EventScript_ManiacChooseZarudeForm_1:
# 1021 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1022 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseZarudeForm_3:
# 1015 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeZarude
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseZarudeForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseZarudeForm_4:
# 1017 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeZarudeDada
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseZarudeForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseZarudeForm_5:
# 1019 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseZarudeForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeZarude::
# 1027 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_ZARUDE
# 1028 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1029 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1030 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeZarudeDada::
# 1035 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_ZARUDE_DADA
# 1036 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1037 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1038 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseMausholdForm::
# 1043 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 1044 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 1045 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_MAUSHOLD_FORM
# 1046 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 1047 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 1048 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 1049 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseMausholdForm_3
# 1051 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseMausholdForm_4
# 1053 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseMausholdForm_5
Route121_SafariZoneEntrance_EventScript_ManiacChooseMausholdForm_1:
# 1056 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1057 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseMausholdForm_3:
# 1050 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeMausholdThree
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMausholdForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseMausholdForm_4:
# 1052 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeMausholdFour
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMausholdForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseMausholdForm_5:
# 1054 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseMausholdForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeMausholdThree::
# 1062 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_MAUSHOLD_THREE
# 1063 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1064 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1065 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeMausholdFour::
# 1070 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_MAUSHOLD_FOUR
# 1071 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1072 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1073 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm::
# 1078 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 1079 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 1080 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_SQUAWKABILLY_FORM
# 1081 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 1082 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 1083 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 1084 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_3
# 1086 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_4
# 1088 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 2, Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_5
# 1090 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 3, Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_6
# 1092 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_7
Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_1:
# 1095 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1096 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_3:
# 1085 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeSquawkabillyGreen
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_4:
# 1087 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeSquawkabillyBlue
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_5:
# 1089 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeSquawkabillyYellow
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_6:
# 1091 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeSquawkabillyWhite
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_7:
# 1093 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSquawkabillyForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeSquawkabillyGreen::
# 1101 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_SQUAWKABILLY_GREEN
# 1102 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1103 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1104 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeSquawkabillyBlue::
# 1109 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_SQUAWKABILLY_BLUE
# 1110 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1111 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1112 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeSquawkabillyYellow::
# 1117 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_SQUAWKABILLY_YELLOW
# 1118 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1119 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1120 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeSquawkabillyWhite::
# 1125 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_SQUAWKABILLY_WHITE
# 1126 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1127 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1128 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm::
# 1133 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 1134 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 1135 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_TATSUGIRI_FORM
# 1136 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 1137 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 1138 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 1139 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm_3
# 1141 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm_4
# 1143 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 2, Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm_5
# 1145 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm_6
Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm_1:
# 1148 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1149 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm_3:
# 1140 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeTatsugiriCurly
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm_4:
# 1142 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeTatsugiriDroopy
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm_5:
# 1144 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeTatsugiriStretchy
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm_6:
# 1146 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseTatsugiriForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeTatsugiriCurly::
# 1154 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_TATSUGIRI_CURLY
# 1155 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1156 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1157 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeTatsugiriDroopy::
# 1162 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_TATSUGIRI_DROOPY
# 1163 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1164 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1165 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeTatsugiriStretchy::
# 1170 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_TATSUGIRI_STRETCHY
# 1171 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1172 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1173 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseDudunsparceForm::
# 1178 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 1179 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 1180 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_DUDUNSPARCE_FORM
# 1181 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 1182 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 1183 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 1184 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseDudunsparceForm_3
# 1186 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseDudunsparceForm_4
# 1188 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseDudunsparceForm_5
Route121_SafariZoneEntrance_EventScript_ManiacChooseDudunsparceForm_1:
# 1191 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1192 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseDudunsparceForm_3:
# 1185 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeDudunsparceTwo
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseDudunsparceForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseDudunsparceForm_4:
# 1187 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeDudunsparceThree
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseDudunsparceForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseDudunsparceForm_5:
# 1189 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseDudunsparceForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeDudunsparceTwo::
# 1197 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_DUDUNSPARCE_TWO_SEGMENT
# 1198 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1199 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1200 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeDudunsparceThree::
# 1205 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_DUDUNSPARCE_THREE_SEGMENT
# 1206 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1207 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1208 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChooseSinistchaForm::
# 1213 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhichForm
# 1214 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmessage
# 1215 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_MANIAC_SINISTCHA_FORM
# 1216 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ShowScrollableMultichoice
# 1217 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 1218 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	switch VAR_RESULT
# 1219 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 0, Route121_SafariZoneEntrance_EventScript_ManiacChooseSinistchaForm_3
# 1221 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case 1, Route121_SafariZoneEntrance_EventScript_ManiacChooseSinistchaForm_4
# 1223 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	case MULTI_B_PRESSED, Route121_SafariZoneEntrance_EventScript_ManiacChooseSinistchaForm_5
Route121_SafariZoneEntrance_EventScript_ManiacChooseSinistchaForm_1:
# 1226 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1227 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end

Route121_SafariZoneEntrance_EventScript_ManiacChooseSinistchaForm_3:
# 1220 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeSinistchaUnremarkable
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSinistchaForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseSinistchaForm_4:
# 1222 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacChangeSinistchaMasterpiece
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSinistchaForm_1

Route121_SafariZoneEntrance_EventScript_ManiacChooseSinistchaForm_5:
# 1224 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_ManiacDecline
	goto Route121_SafariZoneEntrance_EventScript_ManiacChooseSinistchaForm_1


Route121_SafariZoneEntrance_EventScript_ManiacChangeSinistchaUnremarkable::
# 1232 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_SINISTCHA_UNREMARKABLE
# 1233 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1234 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1235 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacChangeSinistchaMasterpiece::
# 1240 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_0x8009, SPECIES_SINISTCHA_MASTERPIECE
# 1241 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special ChangePartyMonForm
# 1242 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange
# 1243 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_Maniac_FinishFormChange::
# 1248 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1249 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	delay 16
# 1250 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1251 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WhatASpecimen, MSGBOX_DEFAULT
# 1252 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
	end


Route121_SafariZoneEntrance_EventScript_ManiacWannaChangeForm::
# 1256 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.string "This place is incredible, they have all\n"
	.string "kinds of species cohabiting. This is\l"
	.string "the 53rd day in a row I come to visit\l"
	.string "and I still discover new things!\p"
	.string "Recently, I've been really interested\n"
	.string "in Pokémon that can have different\l"
	.string "forms in the wild.\p"
	.string "Do you have such a specimen you'd let\n"
	.string "me analyze?$"

Maniac_AskAgain::
# 1268 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.string "So, which one should I analyze?$"

Maniac_ComeBackWithOne::
# 1272 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.string "You could have just said you didn't\n"
	.string "want to share…$"

Route121_SafariZoneEntrance_Text_WhatASpecimen::
# 1277 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.string "I'm done! Thank you so much for giving me\n"
	.string "this opportunity. I'm so lucky to have\l"
	.string "met you. Please come back anytime with\l"
	.string "other ones. Aren't Pokémon amazing?!$"

Route121_SafariZoneEntrance_Text_WhichForm::
# 1284 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.string "Fascinating! Would you like me to change\n"
	.string "its form?$"

Route121_SafariZoneEntrance_Text_ThisIsntAMon::
# 1289 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.string "What are you, some kind of amateur?\n"
	.string "This Pokémon can't change forms.$"
