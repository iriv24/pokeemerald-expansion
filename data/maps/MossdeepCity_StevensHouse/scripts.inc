# 1 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 2 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
.set LOCALID_MELTAN_BALL, 2
# 4 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 5 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_MapScripts::
# 6 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_StevensHouse_OnLoad
# 7 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_StevensHouse_OnTransition
# 8 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_StevensHouse_OnFrame
# 9 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.byte 0
# 10 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 11 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnLoad:
# 12 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, MossdeepCity_StevensHouse_EventScript_HideStevensNote
# 13 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 15 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_HideStevensNote::
# 16 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setmetatile 6, 4, METATILE_GenericBuilding_TableEdge, TRUE
# 17 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 18 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 19 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnTransition:
# 20 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call_if_eq VAR_STEVENS_HOUSE_STATE, 2, MossdeepCity_StevensHouse_EventScript_SetStevenPos
# 21 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 22 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 23 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SetStevenPos::
# 24 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 6, 5
# 25 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectmovementtype LOCALID_STEVEN, MOVEMENT_TYPE_FACE_UP
# 26 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 27 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 28 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnFrame:
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script_2 VAR_STEVENS_HOUSE_STATE, 1, MossdeepCity_StevensHouse_EventScript_StevenGivesDive
# 30 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.2byte 0
# 31 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 32 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_StevenGivesDive::
# 33 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 34 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 35 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 36 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playse SE_PIN
# 37 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 39 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_Delay48
# 40 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 41 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_StevensHouse_Movement_StevenApproachPlayer
# 42 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 43 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_YouveEarnedHMDive, MSGBOX_DEFAULT
# 44 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	giveitem ITEM_HM_DIVE
# 45 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 46 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_OMIT_DIVE_FROM_STEVEN_LETTER
# 47 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_ExplainDive, MSGBOX_DEFAULT
# 48 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	closemessage
# 49 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	delay 20
# 50 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_StevensHouse_Movement_StevenReturn
# 51 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 52 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 53 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 54 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 55 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 56 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 57 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Movement_StevenApproachPlayer:
# 58 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 59 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 60 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 61 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 62 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 63 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 64 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_in_place_faster_down
# 65 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_end
# 66 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 67 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Movement_StevenReturn:
# 68 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_up
# 69 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 70 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 71 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 72 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_in_place_faster_up
# 73 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_end
# 74 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 75 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_MeltanPokeball::
# 76 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 77 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_TakeBallContainingMeltan, MSGBOX_YESNO
# 78 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_LeaveMeltan
# 79 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_GiveMeltan
# 80 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 81 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 82 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_LeaveMeltan::
# 83 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
# 84 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 85 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 86 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 87 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_GiveMeltan::
# 88 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MELTAN
# 89 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	givemonrandom SPECIES_MELTAN, 5
# 90 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_StevensHouse_EventScript_SendMeltanParty
# 91 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_StevensHouse_EventScript_SendMeltanPC
# 92 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 93 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 94 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 95 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendMeltanParty::
# 96 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedMeltanFanfare
# 97 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 98 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_ReceivedMeltan
# 99 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 100 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 101 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedMeltan
# 102 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 103 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 104 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendMeltanPC::
# 105 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedMeltanFanfare
# 106 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 107 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_MeltanTransferredToPC
# 108 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 109 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_MeltanTransferredToPC
# 110 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 111 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 112 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_MeltanTransferredToPC::
# 113 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 114 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedMeltan
# 115 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 116 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 117 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedMeltanFanfare::
# 118 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MELTAN
# 119 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	removeobject LOCALID_MELTAN_BALL
# 120 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 121 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	message MossdeepCity_StevensHouse_Text_ObtainedMeltan
# 122 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmessage
# 123 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitfanfare
# 124 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MELTAN
# 125 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 126 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 127 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedMeltan::
# 128 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL
# 129 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELDUM
# 130 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 131 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 132 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 133 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_RockDisplay::
# 134 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_CollectionOfRareRocks, MSGBOX_SIGN
# 135 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 136 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 137 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Steven::
# 138 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, MossdeepCity_StevensHouse_EventScript_StevenBeatMagma
# 139 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_MagmaHideout, MSGBOX_NPC
# 140 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 141 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 142 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_StevenBeatMagma::
# 143 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis, MSGBOX_NPC
# 144 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 145 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 146 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Letter::
# 147 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 148 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LetterFromSteven, MSGBOX_DEFAULT
# 149 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 150 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 151 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 152 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
@ Unused, leftover from RS
# 153 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_DiveItemBall::
# 154 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	finditem ITEM_HM_DIVE
# 155 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 156 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 157 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 158 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_YouveEarnedHMDive:
# 159 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Steven: {PLAYER}{KUN}…\p"
# 160 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "As you can see, there's not much here,\n"
# 161 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "but this is my home.\p"
# 162 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Thank you for all that you've done.\p"
# 163 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "This is my token of appreciation.\n"
# 164 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's the Hidden Machine Dive.\p"
# 165 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "No need to be shy--you've earned\n"
# 166 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "this HM.$"
# 167 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 168 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ExplainDive:
# 169 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Steven: While you're using Surf, you\n"
# 170 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "should notice dark patches of water.\p"
# 171 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Use Dive if you come to deep water\n"
# 172 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "like it. You'll drop to the seafloor.\p"
# 173 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "When you want to come back up, use\n"
# 174 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Dive again.\p"
# 175 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "In some places, it won't be possible\n"
# 176 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "for you to surface, though.$"
# 177 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 178 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_MagmaHideout:
# 179 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "That Magma Emblem should do something\n"
# 180 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "if you go to Jagged Pass with it, though\p"
# 181 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I'm not sure what. I would recommend\n"
# 182 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "heading there before helping Drake\l"
# 183 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "with Team Aqua.$"
# 184 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 185 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis:
# 186 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Apparently, there's an\n"
# 187 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "underwater cavern between\l"
# 188 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Mossdeep and Sootopolis.\p"
# 189 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "You know, the one that Capt. Stern\n"
# 190 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "found in his submarine.$"
# 191 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 192 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_TakeBallContainingMeltan:
# 193 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} checked the Poké Ball.\p"
# 194 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It contained the Pokémon\n"
# 195 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Meltan.\p"
# 196 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Take the Poké Ball?$"
# 197 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 198 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ObtainedMeltan:
# 199 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} obtained a Meltan.$"
# 200 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 201 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
@ Unused
# 202 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_NoSpaceForAnotherMon:
# 203 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "There is no space for another Pokémon.$"
# 204 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 205 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas:
# 206 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} left the Poké Ball where\n"
# 207 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "it was.$"
# 208 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 209 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LetterFromSteven:
# 210 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a letter.\p"
# 211 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "… … … … … …\p"
# 212 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "To {PLAYER}{KUN}…\p"
# 213 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I've decided to do a little soul-\n"
# 214 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "searching and train on the road.\p"
# 215 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I don't plan to return home for some\n"
# 216 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "time.\p"
# 217 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I have a favor to ask of you.\p"
# 218 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I want you to take the Poké Ball on\n"
# 219 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "the desk.\p"
# 220 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Inside it is a Meltan, a very strong\n"
# 221 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Pokémon.\p"
# 222 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I'm counting on you.\p"
# 223 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "May our paths cross someday.\p"
# 224 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Steven Stone$"
# 225 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 226 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_CollectionOfRareRocks:
# 227 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 228 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "stones assembled by Steven.$"
