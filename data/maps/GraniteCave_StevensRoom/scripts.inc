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
	giveitem ITEM_TM_STEEL_WING
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 20
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_HEAL_BALL, 99
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 10
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_MOON_STONE, 10
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_THROAT_SPRAY, 10
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_PP_UP, 20
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_IRON_BALL, 10
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_WIDE_LENS, 10
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_HEAT_ROCK, 10
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_DAMP_ROCK, 10
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_SMOOTH_ROCK, 10
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_ICY_ROCK, 10
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_LEEK, 10
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_STEVEN
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitNorth::
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
# 55 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitSouth::
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 64 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 66 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BagFull::
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
# 68 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 85 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "My name is Steven.\p"
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I'm interested in rare stones,\n"
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "so I travel here and there.\p"
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh?\n"
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "A Letter for me?$"
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ThankYouTakeThis:
# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Steven: Okay, thank you.\n"
# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "You went through all this trouble to\l"
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "deliver that. I need to thank you.\p"
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Let me see…\n"
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I'll give you this TM.\p"
# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "It contains my favorite move,\n"
# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Steel Wing. Also, take these spare\l"
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Items I have, hopefully they will be\l"
# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "helpful!$"
# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Steven: Your Pokémon appear quite\n"
# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "capable.\p"
# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "If you keep training, you could even\n"
# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "become the Champion of the Pokémon\l"
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "League one day. That's what I think.\p"
# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I know, since we've gotten to know each\n"
# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "other, let's register one another in\l"
# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "our PokéNavs.\p"
# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "… … … … … …$"
# 125 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 126 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_RegisteredSteven:
# 127 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered Steven\n"
# 128 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "in the PokéNav.$"
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 130 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
# 131 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"
# 132 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 133 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_OhBagIsFull:
# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh, your BAG is full…\n"
# 135 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "That's too bad, then.$"
