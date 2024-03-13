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
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_CHERI_BERRY, 10
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_CHOPLE_BERRY, 10
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_MOON_STONE, 10
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_THROAT_SPRAY, 10
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 10
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_CHESTO_BERRY, 10
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_HEAL_BALL, 99
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_PP_UP, 20
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 20
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_IRON_BALL, 10
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_COLBUR_BERRY, 10
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_WIDE_LENS, 10
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_HEAT_ROCK, 10
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_LEEK, 10
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_SILK_SCARF, 10
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_WACAN_BERRY, 10
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_POMEG_BERRY, 999
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 55 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
# 64 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 66 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_STEVEN
# 68 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitNorth::
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitSouth::
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 85 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BagFull::
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "My name is STEVEN.\p"
# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I'm interested in rare stones,\n"
# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "so I travel here and there.\p"
# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh?\n"
# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "A LETTER for me?$"
# 125 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 126 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ThankYouTakeThis:
# 127 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "STEVEN: Okay, thank you.\p"
# 128 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "You went through all this trouble to\n"
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "deliver that. I need to thank you.\p"
# 130 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Let me see…\n"
# 131 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I'll give you this TM.\p"
# 132 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "It contains my favorite move,\n"
# 133 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "STEEL WING. Also, take these spare\p"
# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "items I have, hopefully they will be\n"
# 135 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "helpful!$"
# 136 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 137 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
# 138 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "STEVEN: Your POKéMON appear quite\n"
# 139 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "capable.\p"
# 140 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "If you keep training, you could even\n"
# 141 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "become the CHAMPION of the POKéMON\l"
# 142 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "LEAGUE one day. That's what I think.\p"
# 143 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I know, since we've gotten to know each\n"
# 144 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "other, let's register one another in\l"
# 145 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "our POKéNAVS.\p"
# 146 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "… … … … … …$"
# 147 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 148 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_RegisteredSteven:
# 149 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered STEVEN\n"
# 150 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "in the POKéNAV.$"
# 151 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 152 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
# 153 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"
# 154 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 155 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_OhBagIsFull:
# 156 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh, your BAG is full…\n"
# 157 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "That's too bad, then.$"
