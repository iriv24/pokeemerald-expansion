# 1 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_GlaciasRoom_OnFrame
# 4 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_GlaciasRoom_OnLoad
# 5 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_OnWarp
# 6 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 8 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnWarp:
# 9 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth
# 10 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.2byte 0
# 11 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 12 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth::
# 13 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 14 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnFrame:
# 17 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 2, EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor
# 18 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor::
# 21 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lockall
# 22 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 23 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 3
# 24 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	releaseall
# 25 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 26 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 27 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnLoad:
# 28 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom
# 29 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 3, EverGrandeCity_GlaciasRoom_EventScript_CloseDoor
# 30 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 31 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 32 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom::
# 33 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 34 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	return
# 35 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 36 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_CloseDoor::
# 37 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 38 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	return
# 39 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 40 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Glacia::
# 41 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lock
# 42 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	faceplayer
# 43 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
# 44 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 45 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 46 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	random 2
# 47 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_GlaciasRoom_EventScript_BattleGlacia1
# 48 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GLACIA2, EverGrandeCity_GlaciasRoom_Text_Defeat
# 49 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
# 50 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 51 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 52 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_BattleGlacia1::
# 53 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GLACIA1, EverGrandeCity_GlaciasRoom_Text_Defeat
# 54 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
# 55 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 56 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 57 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech::
# 58 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 59 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	release
# 60 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 61 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 62 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Defeated::
# 63 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
# 64 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 65 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 66 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	release
# 67 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 68 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 69 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_IntroSpeech:
# 70 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Welcome, my name is Glacia\n"
# 71 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "of the Elite Four.\p"
# 72 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "I've traveled from afar to Hoenn\n"
# 73 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "so that I may hone my Ice skills.\p"
# 74 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "But in my travels, I learned to expand\n"
# 75 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "my strategies beyond just Ice-types.\p"
# 76 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "You see, though I originally thought\n"
# 77 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Fire to be the complete opposite of\l"
# 78 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Ice, I learned that several Ice-types\l"
# 79 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "have Fire-type counterparts.\p"
# 80 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "This knowledge has expanded my\n"
# 81 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "skillset, now see how strong I have\l"
# 82 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "become with the power of Fire and Ice!$"
# 83 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 84 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_Defeat:
# 85 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "You and your Pokémon…\n"
# 86 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "How hot your spirits burn!\p"
# 87 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "The all-consuming heat overwhelms.\p"
# 88 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "It's no surprise that both my fiery and\n"
# 89 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "icy skills failed to harm you.$"
# 90 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 91 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech:
# 92 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Advance to the next room.\n"
# 93 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Though Drake is no longer there waiting\l"
# 94 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "for you, I think you'll find his\l"
# 95 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "replacement to be equally formidable.$"
