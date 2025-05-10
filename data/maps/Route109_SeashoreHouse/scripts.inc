# 1 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 2 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_MapScripts::
# 3 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_SeashoreHouse_OnTransition
# 4 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route109_SeashoreHouse_OnWarp
# 5 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route109_SeashoreHouse_OnFrame
# 6 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.byte 0
# 7 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 8 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 9 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_OnWarp:
# 10 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script_2 VAR_ENTERING_HOT_HOUSE, 1, Route109_SeashoreHouse_EventScript_PlayerTurnNorth
# 11 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.2byte 0
# 12 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 13 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_PlayerTurnNorth::
# 14 "data/maps/Route109_SeashoreHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 15 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 16 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 17 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_OnFrame:
# 18 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script_2 VAR_ENTERING_HOT_HOUSE, 1, Route109_SeashoreHouse_EventScript_EnterRoom
# 19 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.2byte 0
# 20 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 21 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_EnterRoom::
# 22 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lockall
# 23 "data/maps/Route109_SeashoreHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 24 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setmetatile 6, 9, METATILE_BuildingNormalFloor, FALSE
# 26 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setmetatile 7, 9, METATILE_BuildingNormalFloor, FALSE
# 27 "data/maps/Route109_SeashoreHouse/scripts.pory"
	special DrawWholeMapView
# 28 "data/maps/Route109_SeashoreHouse/scripts.pory"
	playse SE_TRUCK_DOOR
# 29 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 0
# 30 "data/maps/Route109_SeashoreHouse/scripts.pory"
	releaseall
# 31 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 32 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 33 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_OnTransition:
# 34 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
# 35 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 36 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 37 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Dwayne::
# 38 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 39 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 40 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 41 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 42 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Johanna::
# 43 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 44 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 46 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 47 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Simon::
# 48 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_SIMON, Route109_SeashoreHouse_Text_SimonIntro, Route109_SeashoreHouse_Text_SimonDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 49 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 51 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 52 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
# 53 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_DWAYNE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 54 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_JOHANNA, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 55 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_SIMON, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 56 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_DEFEATED_HOT_HOUSE
# 57 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 58 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 59 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 60 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_TrainersNotCompleted::
# 61 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 62 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 63 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 64 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneIntro:
# 65 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If you're looking for a battle in the\n"
# 66 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Hot House, you'll find no\l"
# 67 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "hotter trainer than me, matey!$"
# 68 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 69 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneDefeated:
# 70 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That was a hot battle!\n"
# 71 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I can accept that loss, matey!$"
# 72 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 73 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwaynePostBattle:
# 74 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Not bad, matey, but you'll have to\n"
# 75 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "defeat the other two if you want that\l"
# 76 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "coveted reward!$"
# 77 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 78 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaIntro:
# 79 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Boring battles aren't worth the effort.\p"
# 80 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Fiery hot battles are what toughen up\n"
# 81 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "trainers and Pokémon!$"
# 82 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 83 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaDefeated:
# 84 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That's hot!$"
# 85 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 86 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaPostBattle:
# 87 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You might have what it takes to get\n"
# 88 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "this reward, you're a scorching hot\l"
# 89 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "battler!$"
# 90 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 91 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonIntro:
# 92 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm going to show you how great\n"
# 93 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "my Pokémon are!$"
# 94 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 95 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonDefeated:
# 96 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Looks like I still need some work…$"
# 97 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 98 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonPostBattle:
# 99 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I've been practicing here in the Hot\n"
# 100 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "House so I can be a strong Pokémon who\l"
# 101 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "can take on the Elite Four someday!$"

Route109_SeashoreHouse_EventScript_Owner::
# 105 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lock
# 106 "data/maps/Route109_SeashoreHouse/scripts.pory"
	faceplayer
# 107 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HOT_HOUSE_GIFT_MON, Route109_SeashoreHouse_EventScript_AlreadyReceivedPokemon
# 108 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_HOT_HOUSE, Route109_SeashoreHouse_EventScript_DefeatedTrainers
# 109 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction
# 110 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SeashoreHouseIntro, MSGBOX_DEFAULT
# 111 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 112 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction::
# 117 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ShowMeSomeHotMatches, MSGBOX_DEFAULT
# 118 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_EventScript_DefeatedTrainers::
# 123 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_LEAVING_HOT_HOUSE, 1
# 124 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setmetatile 6, 9, METATILE_BuildingWarpLeft, FALSE
# 125 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setmetatile 7, 9, METATILE_BuildingWarpRight, FALSE
# 126 "data/maps/Route109_SeashoreHouse/scripts.pory"
	special DrawWholeMapView
# 127 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_TakeThisPokemon, MSGBOX_DEFAULT
# 128 "data/maps/Route109_SeashoreHouse/scripts.pory"
	switch VAR_HOT_HOUSE_STATE
# 130 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 2, Route109_SeashoreHouse_EventScript_DefeatedTrainers_3
# 134 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 3, Route109_SeashoreHouse_EventScript_DefeatedTrainers_4
# 138 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 4, Route109_SeashoreHouse_EventScript_DefeatedTrainers_5
# 142 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 5, Route109_SeashoreHouse_EventScript_DefeatedTrainers_6
# 146 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 6, Route109_SeashoreHouse_EventScript_DefeatedTrainers_7
# 150 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 7, Route109_SeashoreHouse_EventScript_DefeatedTrainers_8
# 155 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYROGUE
# 156 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_TYROGUE, 25
# 157 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
Route109_SeashoreHouse_EventScript_DefeatedTrainers_1:
# 160 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route109_SeashoreHouse_EventScript_ReceiveRewardParty
# 161 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route109_SeashoreHouse_EventScript_ReceiveRewardPC
# 162 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 163 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end

Route109_SeashoreHouse_EventScript_DefeatedTrainers_3:
# 131 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYROGUE
# 132 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_TYROGUE, 25
# 133 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_4:
# 135 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOGEPI
# 136 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_TOGEPI, 25
# 137 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOGEPI
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_5:
# 139 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EEVEE
# 140 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_EEVEE, 25
# 141 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_6:
# 143 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_RIOLU
# 144 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_RIOLU, 25
# 145 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_RIOLU
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_7:
# 147 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYPE_NULL
# 148 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_TYPE_NULL, 25
# 149 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYPE_NULL
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_8:
# 151 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHARCADET
# 152 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_CHARCADET, 25
# 153 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARCADET
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1


Route109_SeashoreHouse_EventScript_ReceiveRewardParty::
# 168 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Route109_SeashoreHouse_EventScript_ReceivedRewardFanfare
# 169 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 170 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_SeashoreHouse_EventScript_ExplainReward
# 171 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 172 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 173 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_ExplainReward
	end


Route109_SeashoreHouse_EventScript_ReceiveRewardPC::
# 178 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Route109_SeashoreHouse_EventScript_ReceivedRewardFanfare
# 179 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 180 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_SeashoreHouse_EventScript_SendRewardToPC
# 181 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 182 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_SendRewardToPC
	end


Route109_SeashoreHouse_EventScript_SendRewardToPC::
# 187 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 188 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_ExplainReward
	end


Route109_SeashoreHouse_EventScript_ReceivedRewardFanfare::
# 193 "data/maps/Route109_SeashoreHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 194 "data/maps/Route109_SeashoreHouse/scripts.pory"
	message Route109_SeashoreHouse_Text_PlayerReceivedReward
# 195 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitmessage
# 196 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitfanfare
	return


Route109_SeashoreHouse_EventScript_ExplainReward::
# 201 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_PokemonDescribe, MSGBOX_DEFAULT
# 202 "data/maps/Route109_SeashoreHouse/scripts.pory"
	playse SE_TRUCK_DOOR
# 203 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_RECEIVED_HOT_HOUSE_GIFT_MON
# 204 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_EventScript_AlreadyReceivedPokemon::
# 209 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ThanksForCompeting, MSGBOX_DEFAULT
# 210 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_Text_SeashoreHouseIntro::
# 214 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm the owner of the Hot House.\n"
	.string "But you can call me Mr. Sea!\p"
	.string "What I love above all is to see hot\n"
	.string "Pokémon battles.\p"
	.string "Let me see that your heart burns hot!\p"
	.string "If you can defeat all the trainers\n"
	.string "here, I'll reward your efforts.$"

Route109_SeashoreHouse_Text_ShowMeSomeHotMatches::
# 224 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Show me some hot matches!\p"
	.string "I run this Hot House just for\n"
	.string "that reason alone!$"

Route109_SeashoreHouse_Text_TakeThisPokemon::
# 230 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You're blistering hot!\n"
	.string "Those battles blazed!\l"
	.string "I'm more than just satisfied!\p"
	.string "Like my daughter promised, as a reward\n"
	.string "for defeating those scorching hot\l"
	.string "trainers, please accept this Pokémon.$"

Route109_SeashoreHouse_Text_PlayerReceivedReward::
# 239 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"

Route109_SeashoreHouse_Text_PokemonDescribe::
# 243 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That Pokémon is a blazing hot battler,\n"
	.string "just like you!\l"
	.string "I know you'll be able to raise it well!\p"
	.string "Please come back anytime to challenge\n"
	.string "the Hot House again!$"

Route109_SeashoreHouse_Text_ThanksForCompeting::
# 251 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Thanks for competing, you're one\n"
	.string "blazing hot trainer!\p"
	.string "Be sure to come back to try out another\n"
	.string "challenge some time!$"
