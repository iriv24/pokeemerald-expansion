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
	msgbox VictoryRoad_1F_Text_WallyGiftFromDad, MSGBOX_DEFAULT
# 49 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_SLAKITE
# 50 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_TYRANITARITE
# 51 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_SALAMENCITE
# 52 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_GARCHOMPITE
# 53 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_METAGROSSITE
# 54 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
# 55 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
# 56 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_WALLY_ENTRANCE
# 57 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 58 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
# 59 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 60 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 61 "data/maps/VictoryRoad_1F/scripts.pory"

# 62 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer1:
# 63 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 64 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 65 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 66 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 67 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 70 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 71 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 72 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 73 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 74 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 75 "data/maps/VictoryRoad_1F/scripts.pory"

# 76 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer2:
# 77 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 78 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 79 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 80 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 81 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 82 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 83 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 84 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 85 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 86 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 87 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 88 "data/maps/VictoryRoad_1F/scripts.pory"

# 89 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
# 90 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_EntranceWally::
# 91 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
# 92 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 93 "data/maps/VictoryRoad_1F/scripts.pory"

# 94 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears and remains at the exit after the Hall of Fame is entered
# 95 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_ExitWally::
# 96 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 97 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 98 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VictoryRoad_1F_EventScript_RematchWally
# 99 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 101 "data/maps/VictoryRoad_1F/scripts.pory"

# 102 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_RematchWally::
# 103 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 104 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 106 "data/maps/VictoryRoad_1F/scripts.pory"

# 107 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Edgar::
# 108 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
# 109 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 111 "data/maps/VictoryRoad_1F/scripts.pory"

# 112 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Albert::
# 113 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
# 114 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 116 "data/maps/VictoryRoad_1F/scripts.pory"

# 117 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Hope::
# 118 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
# 119 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 121 "data/maps/VictoryRoad_1F/scripts.pory"

# 122 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Quincy::
# 123 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
# 124 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 126 "data/maps/VictoryRoad_1F/scripts.pory"

# 127 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Katelynn::
# 128 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
# 129 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 131 "data/maps/VictoryRoad_1F/scripts.pory"

# 132 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore:
# 133 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}! You made it! I've been\n"
# 134 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "wandering around here doing more\l"
# 135 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "training, and I knew you'd show up\l"
# 136 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "eventually.\p"
# 137 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "After you beat me in Mauville and on\n"
# 138 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Route 110, I realized how weak I was,\l"
# 139 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "how little I knew about Pokémon…\p"
# 140 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Since then, I've become so much\n"
# 141 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "stronger.\p"
# 142 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've trained extremely hard in hopes of\n"
# 143 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "beating you one day, I even defeated\l"
# 144 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "all of the Gym Leaders here in Hoenn!\p"
# 145 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "However, I have one more goal before I\n"
# 146 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "can move on to the Pokémon League…\p"
# 147 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I have to beat you, {PLAYER}!\n"
# 148 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You inspired me to get stronger, so now\l"
# 149 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'll show you the results of my\l"
# 150 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "hard work!$"
# 151 "data/maps/VictoryRoad_1F/scripts.pory"

# 152 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyEntranceDefeat:
# 153 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "All my training, and it still wasn't\n"
# 154 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "enough… I won't give up, though! I'll\l"
# 155 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "keep training until I can beat you!$"
# 156 "data/maps/VictoryRoad_1F/scripts.pory"

# 157 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostEntranceBattle:
# 158 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I couldn't beat you this time,\n"
# 159 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "either…\p"
# 160 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "But one of these days,\n"
# 161 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, I'm going to catch up to you.\p"
# 162 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "And then I'll challenge the Pokémon\n"
# 163 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "League!$"
# 164 "data/maps/VictoryRoad_1F/scripts.pory"

# 165 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyGiftFromDad:
# 166 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That was a great battle, but I still\n"
# 167 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "clearly have more to learn…\p"
# 168 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Oh! I just remembered, your dad gave me\n"
# 169 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "a package with some items to give to\l"
# 170 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "you, {PLAYER}.\p"
# 171 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "He said to tell you he was sorry he\n"
# 172 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "didn't have that one Mega Stone ready\l"
# 173 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "when you defeated him, so he threw in\l"
# 174 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "some extras to make up for it.\p"
# 175 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Here you go, {PLAYER}.$"
# 176 "data/maps/VictoryRoad_1F/scripts.pory"

# 177 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyIntro:
# 178 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Hi! {PLAYER}!\p"
# 179 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've gotten stronger since that last\n"
# 180 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "time! I wanted to show you, {PLAYER}!\p"
# 181 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 182 "data/maps/VictoryRoad_1F/scripts.pory"

# 183 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyDefeat:
# 184 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 185 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 186 "data/maps/VictoryRoad_1F/scripts.pory"

# 187 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostBattle:
# 188 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I couldn't beat you this time,\n"
# 189 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "too… But one of these days, {PLAYER},\l"
# 190 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to catch up to you…\p"
# 191 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "And challenge the POKéMON LEAGUE!$"
# 192 "data/maps/VictoryRoad_1F/scripts.pory"

# 193 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarIntro:
# 194 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've made it this far a couple times,\n"
# 195 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "but the last stretch is so long…$"
# 196 "data/maps/VictoryRoad_1F/scripts.pory"

# 197 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarDefeat:
# 198 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "My dream ends here again…$"
# 199 "data/maps/VictoryRoad_1F/scripts.pory"

# 200 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarPostBattle:
# 201 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You've made it this far. Keep the\n"
# 202 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "momentum going and become the\l"
# 203 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "CHAMPION! If anyone can, it's you!$"
# 204 "data/maps/VictoryRoad_1F/scripts.pory"

# 205 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertIntro:
# 206 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I didn't come all this way to lose now.\n"
# 207 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That possibility doesn't exist!$"
# 208 "data/maps/VictoryRoad_1F/scripts.pory"

# 209 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertDefeat:
# 210 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Impossible…\n"
# 211 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost?$"
# 212 "data/maps/VictoryRoad_1F/scripts.pory"

# 213 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertPostBattle:
# 214 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost here…\p"
# 215 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That means I lack the qualifications\n"
# 216 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the CHAMPION…$"
# 217 "data/maps/VictoryRoad_1F/scripts.pory"

# 218 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeIntro:
# 219 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This seemingly infinite and harsh road\n"
# 220 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "lives up to its name of VICTORY.$"
# 221 "data/maps/VictoryRoad_1F/scripts.pory"

# 222 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeDefeat:
# 223 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Your battle style is fantastic…$"
# 224 "data/maps/VictoryRoad_1F/scripts.pory"

# 225 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopePostBattle:
# 226 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You seem to have the potential for\n"
# 227 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "becoming the CHAMPION.$"
# 228 "data/maps/VictoryRoad_1F/scripts.pory"

# 229 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyIntro:
# 230 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "What is the VICTORY ROAD?\n"
# 231 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'll tell you if you win!$"
# 232 "data/maps/VictoryRoad_1F/scripts.pory"

# 233 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyDefeat:
# 234 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay!\n"
# 235 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Well done!$"
# 236 "data/maps/VictoryRoad_1F/scripts.pory"

# 237 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyPostBattle:
# 238 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Getting through here safely--that's\n"
# 239 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "the final test for any TRAINER aiming\l"
# 240 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the POKéMON CHAMPION.\p"
# 241 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That's why it's called the VICTORY\n"
# 242 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "ROAD.$"
# 243 "data/maps/VictoryRoad_1F/scripts.pory"

# 244 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnIntro:
# 245 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I have nothing to say to anyone\n"
# 246 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "that's come this far. Come on!$"
# 247 "data/maps/VictoryRoad_1F/scripts.pory"

# 248 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnDefeat:
# 249 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This is a disgrace…$"
# 250 "data/maps/VictoryRoad_1F/scripts.pory"

# 251 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnPostBattle:
# 252 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Humph, go right on ahead.\n"
# 253 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "See if I care.$"
