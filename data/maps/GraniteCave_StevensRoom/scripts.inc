# 1 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 2 "data/maps/GraniteCave_StevensRoom/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_MapScripts::
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.byte 0
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven::
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	faceplayer
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_TM_STEEL_WING
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_HEAL_BALL, 99
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_HARD_MODE
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_ge GraniteCave_StevensRoom_EventScript_StevenGiveItems_2
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_PP_UP, 40
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_SITRUS_BERRY, 10
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_BERRY_JUICE, 10
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_MOON_STONE, 10
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_THROAT_SPRAY, 10
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_IRON_BALL, 10
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_WIDE_LENS, 10
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_HEAT_ROCK, 10
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_DAMP_ROCK, 10
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_SMOOTH_ROCK, 10
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_ICY_ROCK, 10
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_LEEK, 10
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ReceivedSeveralItems, MSGBOX_DEFAULT
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_STEVEN
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenGiveItems_1:
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ReceivedSeveralItems, MSGBOX_DEFAULT
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 55 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegisterHard, MSGBOX_DEFAULT
# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 64 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 66 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
# 68 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_STEVEN
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenGiveItems_2:
# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_PP_UP, 12
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_SITRUS_BERRY, 1
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_BERRY_JUICE, 10
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_THROAT_SPRAY, 1
# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_WIDE_LENS, 1
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_IRON_BALL, 1
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_LEEK, 1
# 85 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto GraniteCave_StevensRoom_EventScript_StevenGiveItems_1
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitNorth::
# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitSouth::
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BagFull::
# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 125 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 126 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 127 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 128 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 130 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 131 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 132 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 133 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 135 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
# 136 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "My name is Steven.\p"
# 137 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I'm interested in rare stones,\n"
# 138 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "so I travel here and there.\p"
# 139 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh?\n"
# 140 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "A Letter for me?$"
# 141 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 142 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ThankYouTakeThis:
# 143 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Steven: Okay, thank you.\n"
# 144 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "You went through all this trouble to\l"
# 145 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "deliver that. I need to thank you.\p"
# 146 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Let me see…\n"
# 147 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I'll give you this TM.\p"
# 148 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "It contains my favorite move,\n"
# 149 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Steel Wing. Also, take these spare\l"
# 150 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Items I have, hopefully they will be\l"
# 151 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "helpful!$"
# 152 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 153 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
# 154 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Steven: Your Pokémon appear quite\n"
# 155 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "capable, so hopefully you can put those\l"
# 156 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Items to good use.\p"
# 157 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I had some spare Sitrus Berries, Heal\n"
# 158 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Balls, Berry Juices, Moon Stones, Throat\l"
# 159 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Sprays, PP Ups, Iron Balls, Wide Lenses,\l"
# 160 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Heat Rocks, Damp Rocks, Smooth Rocks,\l"
# 161 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Icy Rocks, and Leeks to give to you.\p"
# 162 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I know, since we've gotten to know each\n"
# 163 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "other, let's register one another in\l"
# 164 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "our PokéNavs.\p"
# 165 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "… … … … … …$"
# 166 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 167 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegisterHard:
# 168 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Steven: Your Pokémon appear quite\n"
# 169 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "capable, so hopefully you can put those\l"
# 170 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Items to good use.\p"
# 171 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I had some spare Sitrus Berries, Heal\n"
# 172 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Balls, Berry Juices, a Throat Spray,\l"
# 173 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "PP Ups, a Wide Lens, an Iron Ball\l"
# 174 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "and a Leek to give to you.\p"
# 175 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I know, since we've gotten to know each\n"
# 176 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "other, let's register one another in\l"
# 177 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "our PokéNavs.\p"
# 178 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "… … … … … …$"
# 179 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 180 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_RegisteredSteven:
# 181 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered Steven\n"
# 182 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "in the PokéNav.$"
# 183 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 184 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
# 185 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.\n"
# 186 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "You should visit Devon Corp again.$"
# 187 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 188 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_OhBagIsFull:
# 189 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh, your BAG is full…\n"
# 190 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "That's too bad, then.$"
