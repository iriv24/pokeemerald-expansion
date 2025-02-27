# 1 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakesRoom_OnFrame
# 4 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_DrakesRoom_OnLoad
# 5 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
# 6 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 8 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
@ Unused, Drake uses Sidneys identical OnWarp for some reason
# 9 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnWarp:
# 10 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth
# 11 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.2byte 0
# 12 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 13 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth::
# 14 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 15 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 17 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnFrame:
# 18 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 3, EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor
# 19 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.2byte 0
# 20 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 21 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor::
# 22 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lockall
# 23 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 24 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 4
# 25 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	releaseall
# 26 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 27 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 28 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnLoad:
# 29 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_CYNTHIA, EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom
# 30 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 4, EverGrandeCity_DrakesRoom_EventScript_CloseDoor
# 31 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 32 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 33 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom::
# 34 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 35 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	return
# 36 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 37 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_CloseDoor::
# 38 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 39 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	return
# 40 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 41 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Cynthia::
# 42 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lock
# 43 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	faceplayer
# 44 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_CYNTHIA, EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech
# 45 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_CHAMPION, FALSE
# 46 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 47 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CYNTHIA, EverGrandeCity_DrakesRoom_Text_Defeat
# 48 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
# 49 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 50 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 51 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech::
# 52 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 53 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
# 54 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 55 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 56 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Defeated::
# 57 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_DEFEATED_DRAKE
# 58 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 59 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_CYNTHIA
# 60 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 61 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 62 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
# 63 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 64 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 65 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_IntroSpeech:
# 66 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Well, well, well. You must be {PLAYER}.\n"
# 67 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I've heard a lot about you from Dawn,\l"
# 68 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Steven, and Wallace.\p"
# 69 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Dawn called me some time ago when that\n"
# 70 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "crisis broke out here in Hoenn, but you\l"
# 71 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "had already taken care of everything\l"
# 72 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "by the time I arrived.\p"
# 73 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "However, since I was here and since\n"
# 74 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Drake fled after his plan failed, they\l"
# 75 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "asked me to stand in as the fourth\l"
# 76 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Elite Four member, temporarily.\p"
# 77 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "It's really quite unfortunate for you,\n"
# 78 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "you've already faced Drake separately,\l"
# 79 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "and now you're facing possibly the\l"
# 80 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "strongest Elite Four of any region…\p"
# 81 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "You know what they say, no good deed\n"
# 82 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "goes unpunished!\p"
# 83 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Don't worry though, I won't let my\n"
# 84 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "feelings of pity stop me from going all\l"
# 85 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "out against you.\p"
# 86 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Get ready, by the time I'm through with\n"
# 87 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "you, I promise you'll wish it was Drake\l"
# 88 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "here instead.$"
# 89 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 90 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_Defeat:
# 91 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I'm impressed, and that's saying\n"
# 92 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "something. It seems all the things I've\l"
# 93 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "heard about you were true after all.$"
# 94 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 95 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_PostBattleSpeech:
# 96 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "It seems all the trials you've faced\n"
# 97 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "have made you a strong trainer indeed.\p"
# 98 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "But what's more impressive to me is the\n"
# 99 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "bond you share with your Pokémon.\p"
# 100 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I may seem tough and harsh on my\n"
# 101 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "exterior, but inside I know that true\l"
# 102 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "strength comes from the bond forged\l"
# 103 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "with your Pokémon.\p"
# 104 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "It seems you know this as well, and for\n"
# 105 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "that more than anything, you have my\l"
# 106 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "respect.\p"
# 107 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Now go forth, the Champion is waiting!\n"
# 108 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Or should I say, “Champions”?$"
