# 1 "data/maps/VictoryRoad_1F/scripts.pory"

# 2 "data/maps/VictoryRoad_1F/scripts.pory"
.set LOCALID_WALLY_ENTRANCE, 4
# 3 "data/maps/VictoryRoad_1F/scripts.pory"

# 4 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_MapScripts::
# 5 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
# 6 "data/maps/VictoryRoad_1F/scripts.pory"
	.byte 0
# 7 "data/maps/VictoryRoad_1F/scripts.pory"

# 8 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition:
# 9 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 1, VictoryRoad_1F_EventScript_SetEntranceWallyPos1
# 10 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 2, VictoryRoad_1F_EventScript_SetEntranceWallyPos2
# 11 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 12 "data/maps/VictoryRoad_1F/scripts.pory"

# 13 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos1::
# 14 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_WALLY_ENTRANCE, 2, 24
# 15 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_WALLY_ENTRANCE, MOVEMENT_TYPE_FACE_DOWN
# 16 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 17 "data/maps/VictoryRoad_1F/scripts.pory"

# 18 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos2::
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_WALLY_ENTRANCE, 3, 24
# 20 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_WALLY_ENTRANCE, MOVEMENT_TYPE_FACE_DOWN
# 21 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 22 "data/maps/VictoryRoad_1F/scripts.pory"

# 23 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger1::
# 24 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 25 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 26 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 27 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_WALLY_ENTRANCE
# 28 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer1
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 30 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 32 "data/maps/VictoryRoad_1F/scripts.pory"

# 33 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger2::
# 34 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 35 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 36 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 37 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_WALLY_ENTRANCE
# 38 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer2
# 39 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 41 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 42 "data/maps/VictoryRoad_1F/scripts.pory"

# 43 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyEntranceBattle::
# 44 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 45 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
# 47 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat
# 48 "data/maps/VictoryRoad_1F/scripts.pory"

# 49 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
# 50 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_ge VictoryRoad_1F_EventScript_WallyPostEntranceBattleHard
# 51 "data/maps/VictoryRoad_1F/scripts.pory"
	
# 52 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyGiftFromDad, MSGBOX_DEFAULT
# 53 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_SLAKITE
# 54 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_TYRANITARITE
# 55 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_SALAMENCITE
# 56 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_GARCHOMPITE
# 57 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_METAGROSSITE
# 58 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyTicketsFromDad, MSGBOX_DEFAULT
# 59 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_EON_TICKET
# 60 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_AURORA_TICKET
# 61 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
# 62 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_ENABLE_SHIP_SOUTHERN_ISLAND
# 63 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
# 64 "data/maps/VictoryRoad_1F/scripts.pory"
	closemessage
# 65 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
# 66 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_WALLY_ENTRANCE
# 67 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
# 70 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 30
# 71 "data/maps/VictoryRoad_1F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 72 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 73 "data/maps/VictoryRoad_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 74 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 75 "data/maps/VictoryRoad_1F/scripts.pory"
	waitfanfare
# 76 "data/maps/VictoryRoad_1F/scripts.pory"
	closemessage
# 77 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 30
# 78 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 79 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 80 "data/maps/VictoryRoad_1F/scripts.pory"

# 81 "data/maps/VictoryRoad_1F/scripts.pory"

# 82 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyPostEntranceBattleHard:
# 83 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
# 84 "data/maps/VictoryRoad_1F/scripts.pory"
	closemessage
# 85 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
# 86 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_WALLY_ENTRANCE
# 87 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 88 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL
# 89 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
# 90 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 30
# 91 "data/maps/VictoryRoad_1F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 92 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 93 "data/maps/VictoryRoad_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 94 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 95 "data/maps/VictoryRoad_1F/scripts.pory"
	waitfanfare
# 96 "data/maps/VictoryRoad_1F/scripts.pory"
	closemessage
# 97 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 30
# 98 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 99 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 100 "data/maps/VictoryRoad_1F/scripts.pory"

# 101 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer1:
# 102 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 103 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 104 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 105 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 106 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 107 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 108 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 109 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 110 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 111 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 112 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 113 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 114 "data/maps/VictoryRoad_1F/scripts.pory"

# 115 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer2:
# 116 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 117 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 118 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 119 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 120 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 121 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 122 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 123 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 124 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 125 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 126 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 127 "data/maps/VictoryRoad_1F/scripts.pory"

# 128 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
# 129 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_EntranceWally::
# 130 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
# 131 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 132 "data/maps/VictoryRoad_1F/scripts.pory"

# 133 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears and remains at the exit after the Hall of Fame is entered
# 134 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_ExitWally::
# 135 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 136 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 137 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VictoryRoad_1F_EventScript_RematchWally
# 138 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 139 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 140 "data/maps/VictoryRoad_1F/scripts.pory"

# 141 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_RematchWally::
# 142 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 143 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 144 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 145 "data/maps/VictoryRoad_1F/scripts.pory"

# 146 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Edgar::
# 147 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
# 148 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 150 "data/maps/VictoryRoad_1F/scripts.pory"

# 151 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Albert::
# 152 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
# 153 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 154 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 155 "data/maps/VictoryRoad_1F/scripts.pory"

# 156 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Hope::
# 157 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
# 158 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 159 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 160 "data/maps/VictoryRoad_1F/scripts.pory"

# 161 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Quincy::
# 162 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
# 163 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 164 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 165 "data/maps/VictoryRoad_1F/scripts.pory"

# 166 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Katelynn::
# 167 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
# 168 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 169 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 170 "data/maps/VictoryRoad_1F/scripts.pory"

# 171 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore:
# 172 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}! You made it! I've been\n"
# 173 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "wandering around here doing more\l"
# 174 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "training, and I knew you'd show up\l"
# 175 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "eventually.\p"
# 176 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "After you beat me in Mauville and on\n"
# 177 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Route 110, I realized how weak I was,\l"
# 178 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "how little I knew about Pokémon…\p"
# 179 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Since then, I've become so much\n"
# 180 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "stronger.\p"
# 181 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've trained extremely hard in hopes of\n"
# 182 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "beating you one day, I even defeated\l"
# 183 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "all of the Gym Leaders here in Hoenn!\p"
# 184 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "However, I have one more goal before I\n"
# 185 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "can move on to the Pokémon League…\p"
# 186 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I have to beat you, {PLAYER}!\n"
# 187 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You inspired me to get stronger, so now\l"
# 188 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'll show you the results of my\l"
# 189 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "hard work!$"
# 190 "data/maps/VictoryRoad_1F/scripts.pory"

# 191 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyEntranceDefeat:
# 192 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "All my training, and it still wasn't\n"
# 193 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "enough… I won't give up, though! I'll\l"
# 194 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "keep training until I can beat you!$"
# 195 "data/maps/VictoryRoad_1F/scripts.pory"

# 196 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostEntranceBattle:
# 197 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I couldn't beat you this time,\n"
# 198 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "either…\p"
# 199 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "But one of these days,\n"
# 200 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, I'm going to catch up to you.\p"
# 201 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "And then I'll challenge the Pokémon\n"
# 202 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "League!$"
# 203 "data/maps/VictoryRoad_1F/scripts.pory"

# 204 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyGiftFromDad:
# 205 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That was a great battle, but I still\n"
# 206 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "clearly have more to learn…\p"
# 207 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Oh! I just remembered, your dad gave me\n"
# 208 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "a package with some items to give to\l"
# 209 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "you, {PLAYER}.\p"
# 210 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "He said to tell you he was sorry he\n"
# 211 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "didn't have that one Mega Stone ready\l"
# 212 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "when you defeated him, so he threw in\l"
# 213 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "some extras to make up for it.\p"
# 214 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Here you go, {PLAYER}.$"
# 215 "data/maps/VictoryRoad_1F/scripts.pory"

# 216 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyTicketsFromDad:
# 217 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Oh I almost forgot, he gave me these to\n"
# 218 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "give to you too.\p"
# 219 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm not sure where these tickets will\n"
# 220 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "take you, but your dad said you can go\l"
# 221 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to the ferry in Lilycove City and use\l"
# 222 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "the tickets there.$"
# 223 "data/maps/VictoryRoad_1F/scripts.pory"

# 224 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyIntro:
# 225 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Hi! {PLAYER}!\p"
# 226 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've gotten stronger since that last\n"
# 227 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "time! I wanted to show you, {PLAYER}!\p"
# 228 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 229 "data/maps/VictoryRoad_1F/scripts.pory"

# 230 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyDefeat:
# 231 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 232 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 233 "data/maps/VictoryRoad_1F/scripts.pory"

# 234 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostBattle:
# 235 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I couldn't beat you this time,\n"
# 236 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "too… But one of these days, {PLAYER},\l"
# 237 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to catch up to you…\p"
# 238 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "And challenge the Pokémon LEAGUE!$"
# 239 "data/maps/VictoryRoad_1F/scripts.pory"

# 240 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarIntro:
# 241 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've made it this far a couple times,\n"
# 242 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "but the last stretch is so long…$"
# 243 "data/maps/VictoryRoad_1F/scripts.pory"

# 244 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarDefeat:
# 245 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "My dream ends here again…$"
# 246 "data/maps/VictoryRoad_1F/scripts.pory"

# 247 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarPostBattle:
# 248 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You've made it this far. Keep the\n"
# 249 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "momentum going and become the\l"
# 250 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "CHAMPION! If anyone can, it's you!$"
# 251 "data/maps/VictoryRoad_1F/scripts.pory"

# 252 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertIntro:
# 253 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I didn't come all this way to lose now.\n"
# 254 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That possibility doesn't exist!$"
# 255 "data/maps/VictoryRoad_1F/scripts.pory"

# 256 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertDefeat:
# 257 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Impossible…\n"
# 258 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost?$"
# 259 "data/maps/VictoryRoad_1F/scripts.pory"

# 260 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertPostBattle:
# 261 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost here…\p"
# 262 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That means I lack the qualifications\n"
# 263 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the CHAMPION…$"
# 264 "data/maps/VictoryRoad_1F/scripts.pory"

# 265 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeIntro:
# 266 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This seemingly infinite and harsh road\n"
# 267 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "lives up to its name of VICTORY.$"
# 268 "data/maps/VictoryRoad_1F/scripts.pory"

# 269 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeDefeat:
# 270 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Your battle style is fantastic…$"
# 271 "data/maps/VictoryRoad_1F/scripts.pory"

# 272 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopePostBattle:
# 273 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You seem to have the potential for\n"
# 274 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "becoming the CHAMPION.$"
# 275 "data/maps/VictoryRoad_1F/scripts.pory"

# 276 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyIntro:
# 277 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "What is the VICTORY ROAD?\n"
# 278 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'll tell you if you win!$"
# 279 "data/maps/VictoryRoad_1F/scripts.pory"

# 280 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyDefeat:
# 281 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay!\n"
# 282 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Well done!$"
# 283 "data/maps/VictoryRoad_1F/scripts.pory"

# 284 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyPostBattle:
# 285 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Getting through here safely--that's\n"
# 286 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "the final test for any TRAINER aiming\l"
# 287 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the Pokémon CHAMPION.\p"
# 288 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That's why it's called the VICTORY\n"
# 289 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "ROAD.$"
# 290 "data/maps/VictoryRoad_1F/scripts.pory"

# 291 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnIntro:
# 292 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I have nothing to say to anyone\n"
# 293 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "that's come this far. Come on!$"
# 294 "data/maps/VictoryRoad_1F/scripts.pory"

# 295 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnDefeat:
# 296 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This is a disgrace…$"
# 297 "data/maps/VictoryRoad_1F/scripts.pory"

# 298 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnPostBattle:
# 299 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Humph, go right on ahead.\n"
# 300 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "See if I care.$"

VictoryRoad_1F_EventScript_PowerfulMonSummoner::
# 305 "data/maps/VictoryRoad_1F/scripts.pory"
	lock
# 306 "data/maps/VictoryRoad_1F/scripts.pory"
	faceplayer
# 307 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, VictoryRoad_1F_EventScript_PowerfulMonSummoner_2
# 313 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_SummonerIntro, MSGBOX_YESNO
VictoryRoad_1F_EventScript_PowerfulMonSummoner_1:
# 316 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 318 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq VictoryRoad_1F_EventScript_PowerfulMonSummoner_6
VictoryRoad_1F_EventScript_PowerfulMonSummoner_5:
# 323 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
	goto_if_ge VictoryRoad_1F_EventScript_PowerfulMonSummoner_9
# 329 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_ChooseLegend
VictoryRoad_1F_EventScript_PowerfulMonSummoner_8:
# 331 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	end

VictoryRoad_1F_EventScript_PowerfulMonSummoner_2:
# 309 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_SummonerIntroQuick, MSGBOX_YESNO
	goto VictoryRoad_1F_EventScript_PowerfulMonSummoner_1

VictoryRoad_1F_EventScript_PowerfulMonSummoner_6:
# 320 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_SummonWomanManNo
	goto VictoryRoad_1F_EventScript_PowerfulMonSummoner_5

VictoryRoad_1F_EventScript_PowerfulMonSummoner_9:
# 325 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_RandomLegend
	goto VictoryRoad_1F_EventScript_PowerfulMonSummoner_8


VictoryRoad_1F_EventScript_ChooseLegend::
# 337 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WhichPokemon, MSGBOX_DEFAULT
# 339 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_0, SPECIES_ARTICUNO
# 340 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_1, SPECIES_ZAPDOS
# 341 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_2, SPECIES_MOLTRES
# 342 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_3, SPECIES_RAIKOU
# 343 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_4, SPECIES_ENTEI
# 344 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_5, SPECIES_SUICUNE
# 345 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_6, SPECIES_CRESSELIA
# 346 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_7, SPECIES_COBALION
# 347 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_8, SPECIES_TERRAKION
# 348 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_9, SPECIES_VIRIZION
# 349 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_10, SPECIES_TORNADUS
# 350 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_11, SPECIES_THUNDURUS
# 351 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_12, SPECIES_LANDORUS
# 352 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_13, SPECIES_KELDEO
# 353 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_14, SPECIES_CALYREX
# 354 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_15, SPECIES_ENAMORUS
# 355 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseLegend_Text_16, MULTI_B_PRESSED
# 359 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, SPECIES_GREAT_TUSK, DYN_MULTICHOICE_CB_NONE
# 361 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq VictoryRoad_1F_EventScript_ChooseLegend_2
VictoryRoad_1F_EventScript_ChooseLegend_1:
# 366 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_ConfirmAndUseSummon
# 368 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	end

VictoryRoad_1F_EventScript_ChooseLegend_2:
# 363 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_PowerfulMonSummoner
	goto VictoryRoad_1F_EventScript_ChooseLegend_1


VictoryRoad_1F_EventScript_RandomLegend::
# 374 "data/maps/VictoryRoad_1F/scripts.pory"
	randomelement SPECIES_LATIOS, SPECIES_LATIAS, SPECIES_ZAPDOS_GALAR, SPECIES_HEATRAN, SPECIES_KELDEO, SPECIES_MELOETTA, SPECIES_MARSHADOW, SPECIES_GENESECT, SPECIES_CHI_YU, SPECIES_VOLCANION, SPECIES_URSHIFU_RAPID_STRIKE, SPECIES_URSHIFU_SINGLE_STRIKE, SPECIES_ENAMORUS, SPECIES_CHIEN_PAO, SPECIES_OGERPON, SPECIES_ZERAORA, SPECIES_LANDORUS, SPECIES_REGICE, SPECIES_TAPU_FINI, SPECIES_DARKRAI, SPECIES_VICTINI, SPECIES_HOOPA, SPECIES_ZARUDE, SPECIES_TERRAKION, SPECIES_TAPU_KOKO
# 376 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 377 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 378 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_VeryWell, MSGBOX_DEFAULT
# 379 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 30
# 381 "data/maps/VictoryRoad_1F/scripts.pory"
	setwildbattle VAR_0x8005, 85
# 382 "data/maps/VictoryRoad_1F/scripts.pory"
	waitse
# 383 "data/maps/VictoryRoad_1F/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_ENCOUNTER
# 384 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 40
# 385 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmoncry
# 386 "data/maps/VictoryRoad_1F/scripts.pory"
	dowildbattle
# 387 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	end


VictoryRoad_1F_EventScript_ConfirmAndUseSummon::
# 392 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 393 "data/maps/VictoryRoad_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8005
# 394 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_ConfirmSummon, MSGBOX_YESNO
# 396 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq VictoryRoad_1F_EventScript_ConfirmAndUseSummon_2
VictoryRoad_1F_EventScript_ConfirmAndUseSummon_1:
# 401 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 402 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_VeryWell, MSGBOX_DEFAULT
# 403 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 30
# 405 "data/maps/VictoryRoad_1F/scripts.pory"
	setwildbattle VAR_0x8005, 50
# 406 "data/maps/VictoryRoad_1F/scripts.pory"
	waitse
# 407 "data/maps/VictoryRoad_1F/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_ENCOUNTER
# 408 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 40
# 409 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmoncry
# 410 "data/maps/VictoryRoad_1F/scripts.pory"
	dowildbattle
# 411 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	end

VictoryRoad_1F_EventScript_ConfirmAndUseSummon_2:
# 398 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_SummonWomanManNo
	goto VictoryRoad_1F_EventScript_ConfirmAndUseSummon_1


VictoryRoad_1F_EventScript_SummonWomanManNo::
# 417 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_SummonWomanDeclined, MSGBOX_DEFAULT
# 418 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	end


VictoryRoad_1F_EventScript_ChooseLegend_Text_0:
# 339 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Articuno$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_1:
# 340 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Zapdos$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_2:
# 341 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Moltres$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_3:
# 342 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Raikou$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_4:
# 343 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Entei$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_5:
# 344 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Suicune$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_6:
# 345 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Cresselia$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_7:
# 346 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Cobalion$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_8:
# 347 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Terrakion$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_9:
# 348 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Virizion$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_10:
# 349 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Tornadus$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_11:
# 350 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Thundurus$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_12:
# 351 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Landorus$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_13:
# 352 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Keldeo$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_14:
# 353 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Calyrex$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_15:
# 354 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Enamorus$"

VictoryRoad_1F_EventScript_ChooseLegend_Text_16:
# 355 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Back$"

VictoryRoad_1F_Text_SummonerIntro::
# 423 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Hello, young trainer.\p"
	.string "I've come to this remote location\n"
	.string "because I have learned a powerful\l"
	.string "technique that allows me to summon one\l"
	.string "Pokémon from a remote location.\p"
	.string "Would you like me to summon a Pokémon\n"
	.string "here so you can battle it?$"

VictoryRoad_1F_Text_SummonerIntroQuick::
# 433 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Would you like me to summon a Pokémon\n"
	.string "here so you can battle it?$"

VictoryRoad_1F_Text_WhichPokemon::
# 438 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Which Pokémon would you like me to\n"
	.string "summon so you can battle?$"

VictoryRoad_1F_Text_ConfirmSummon::
# 443 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "So you want me to summon a\n"
	.string "{STR_VAR_1} for you to battle?$"

VictoryRoad_1F_Text_VeryWell::
# 448 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Very well, prepare yourself for battle.$"

VictoryRoad_1F_SummonWomanDeclined::
# 452 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I see. Let me know if you change\n"
	.string "your mind.$"
