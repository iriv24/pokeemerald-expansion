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
	cleartrainerflag TRAINER_JOHANNA
# 31 "data/maps/Route109_SeashoreHouse/scripts.pory"
	cleartrainerflag TRAINER_BRIAN
# 32 "data/maps/Route109_SeashoreHouse/scripts.pory"
	cleartrainerflag TRAINER_BRIAN_2
# 33 "data/maps/Route109_SeashoreHouse/scripts.pory"
	cleartrainerflag TRAINER_DWAYNE
# 34 "data/maps/Route109_SeashoreHouse/scripts.pory"
	releaseall
# 35 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 36 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 37 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_OnTransition:
# 38 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
# 39 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 40 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 41 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Dwayne::
# 42 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 43 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 45 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 46 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Johanna::
# 47 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 48 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 50 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 51 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Brian::
# 52 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_HOT_HOUSE_STATE, 16, Route109_SeashoreHouse_EventScript_BrianDouble
# 53 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_BRIAN, Route109_SeashoreHouse_Text_BrianIntro, Route109_SeashoreHouse_Text_BrianDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 54 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_BrianPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 56 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 57 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BrianDouble::
# 58 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_BRIAN_2, Route109_SeashoreHouse_Text_BrianIntro, Route109_SeashoreHouse_Text_BrianDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 59 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_BrianPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 61 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 62 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
# 63 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_DWAYNE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 64 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_JOHANNA, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 65 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call_if_eq VAR_HOT_HOUSE_STATE, 16, Route109_SeashoreHouse_EventScript_CheckBrianDoubleBattle
# 66 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call_if_lt VAR_HOT_HOUSE_STATE, 16, Route109_SeashoreHouse_EventScript_CheckBrianSingleBattle
# 67 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_DEFEATED_HOT_HOUSE
# 68 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 69 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 70 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 71 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_CheckBrianSingleBattle::
# 72 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_BRIAN, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 73 "data/maps/Route109_SeashoreHouse/scripts.pory"
	return
# 74 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 75 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_CheckBrianDoubleBattle::
# 76 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_BRIAN_2, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 77 "data/maps/Route109_SeashoreHouse/scripts.pory"
	return
# 78 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 79 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_TrainersNotCompleted::
# 80 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 81 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 82 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 83 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneIntro:
# 84 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If you're looking for a battle in the\n"
# 85 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Hot House, you'll find no\l"
# 86 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "hotter trainer than me, matey!$"
# 87 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 88 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneDefeated:
# 89 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That was a hot battle!\n"
# 90 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I can accept that loss, matey!$"
# 91 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 92 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwaynePostBattle:
# 93 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Not bad, matey, but you'll have to\n"
# 94 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "defeat the other two if you want that\l"
# 95 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "coveted reward!$"
# 96 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 97 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaIntro:
# 98 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Boring battles aren't worth the effort.\p"
# 99 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Fiery hot battles are what toughen up\n"
# 100 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "trainers and Pokémon!$"
# 101 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 102 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaDefeated:
# 103 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That's hot!$"
# 104 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 105 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaPostBattle:
# 106 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You might have what it takes to get\n"
# 107 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "this reward, you're a scorching hot\l"
# 108 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "battler!$"
# 109 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 110 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_BrianIntro:
# 111 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Hall of Fame? First of all, buddy,\n"
# 112 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You Will Never Defeat Guitarist Brian!$"
# 113 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 114 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_BrianDefeated:
# 115 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Do I have to give you my badges now?\n"
# 116 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "My NELO is gonna suffer…$"
# 117 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 118 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_BrianPostBattle:
# 119 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Did you know Greedent learns Counter?\n"
# 120 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I found that one out the hard way.$"

Route109_SeashoreHouse_EventScript_Owner::
# 124 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lock
# 125 "data/maps/Route109_SeashoreHouse/scripts.pory"
	faceplayer
# 126 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HOT_HOUSE_GIFT_MON, Route109_SeashoreHouse_EventScript_AlreadyReceivedPokemon
# 127 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_HOT_HOUSE, Route109_SeashoreHouse_EventScript_DefeatedTrainers
# 128 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction
# 129 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SeashoreHouseIntro, MSGBOX_DEFAULT
# 130 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 131 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction::
# 136 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ShowMeSomeHotMatches, MSGBOX_DEFAULT
# 137 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_EventScript_DefeatedTrainers::
# 142 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_LEAVING_HOT_HOUSE, 1
# 143 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setmetatile 6, 9, METATILE_BuildingWarpLeft, FALSE
# 144 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setmetatile 7, 9, METATILE_BuildingWarpRight, FALSE
# 145 "data/maps/Route109_SeashoreHouse/scripts.pory"
	special DrawWholeMapView
# 146 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_TakeThisPokemon, MSGBOX_DEFAULT
# 147 "data/maps/Route109_SeashoreHouse/scripts.pory"
	switch VAR_HOT_HOUSE_STATE
# 149 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 1, Route109_SeashoreHouse_EventScript_DefeatedTrainers_3
# 153 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 2, Route109_SeashoreHouse_EventScript_DefeatedTrainers_4
# 157 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 3, Route109_SeashoreHouse_EventScript_DefeatedTrainers_5
# 161 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 4, Route109_SeashoreHouse_EventScript_DefeatedTrainers_6
# 165 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 5, Route109_SeashoreHouse_EventScript_DefeatedTrainers_7
# 169 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 6, Route109_SeashoreHouse_EventScript_DefeatedTrainers_8
# 173 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 7, Route109_SeashoreHouse_EventScript_DefeatedTrainers_9
# 177 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 8, Route109_SeashoreHouse_EventScript_DefeatedTrainers_10
# 181 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 9, Route109_SeashoreHouse_EventScript_DefeatedTrainers_11
# 185 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 10, Route109_SeashoreHouse_EventScript_DefeatedTrainers_12
# 189 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 11, Route109_SeashoreHouse_EventScript_DefeatedTrainers_13
# 193 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 12, Route109_SeashoreHouse_EventScript_DefeatedTrainers_14
# 197 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 13, Route109_SeashoreHouse_EventScript_DefeatedTrainers_15
# 201 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 14, Route109_SeashoreHouse_EventScript_DefeatedTrainers_16
# 205 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 15, Route109_SeashoreHouse_EventScript_DefeatedTrainers_17
# 209 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 16, Route109_SeashoreHouse_EventScript_DefeatedTrainers_18
# 214 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYROGUE
# 215 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_TYROGUE, 25
# 216 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
Route109_SeashoreHouse_EventScript_DefeatedTrainers_1:
# 219 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route109_SeashoreHouse_EventScript_ReceiveRewardParty
# 220 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route109_SeashoreHouse_EventScript_ReceiveRewardPC
# 221 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 222 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end

Route109_SeashoreHouse_EventScript_DefeatedTrainers_3:
# 150 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYROGUE
# 151 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_TYROGUE, 25
# 152 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_4:
# 154 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PANSAGE
# 155 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_PANSAGE, 25
# 156 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PANSAGE
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_5:
# 158 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PANPOUR
# 159 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_PANPOUR, 25
# 160 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PANPOUR
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_6:
# 162 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PANSEAR
# 163 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_PANSEAR, 25
# 164 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PANSEAR
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_7:
# 166 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MISDREAVUS
# 167 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_MISDREAVUS, 25
# 168 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MISDREAVUS
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_8:
# 170 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PINSIR
# 171 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_PINSIR, 25
# 172 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PINSIR
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_9:
# 174 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HERACROSS
# 175 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_HERACROSS, 25
# 176 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HERACROSS
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_10:
# 178 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SCYTHER
# 179 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_SCYTHER, 25
# 180 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SCYTHER
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_11:
# 182 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EEVEE
# 183 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_EEVEE, 25
# 184 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_12:
# 186 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MAGBY
# 187 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_MAGBY, 25
# 188 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGBY
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_13:
# 190 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ELEKID
# 191 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_ELEKID, 25
# 192 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ELEKID
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_14:
# 194 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SMOOCHUM
# 195 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_SMOOCHUM, 25
# 196 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SMOOCHUM
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_15:
# 198 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_RIOLU
# 199 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_RIOLU, 25
# 200 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_RIOLU
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_16:
# 202 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOGEPI
# 203 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_TOGEPI, 25
# 204 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOGEPI
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_17:
# 206 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYPE_NULL
# 207 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_TYPE_NULL, 25
# 208 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYPE_NULL
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_18:
# 210 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHARCADET
# 211 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_CHARCADET, 25
# 212 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARCADET
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1


Route109_SeashoreHouse_EventScript_ReceiveRewardParty::
# 227 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Route109_SeashoreHouse_EventScript_ReceivedRewardFanfare
# 228 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 229 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_SeashoreHouse_EventScript_ExplainReward
# 230 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 231 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 232 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_ExplainReward
	end


Route109_SeashoreHouse_EventScript_ReceiveRewardPC::
# 237 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Route109_SeashoreHouse_EventScript_ReceivedRewardFanfare
# 238 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 239 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_SeashoreHouse_EventScript_SendRewardToPC
# 240 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 241 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_SendRewardToPC
	end


Route109_SeashoreHouse_EventScript_SendRewardToPC::
# 246 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 247 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_ExplainReward
	end


Route109_SeashoreHouse_EventScript_ReceivedRewardFanfare::
# 252 "data/maps/Route109_SeashoreHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 253 "data/maps/Route109_SeashoreHouse/scripts.pory"
	message Route109_SeashoreHouse_Text_PlayerReceivedReward
# 254 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitmessage
# 255 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitfanfare
	return


Route109_SeashoreHouse_EventScript_ExplainReward::
# 260 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_PokemonDescribe, MSGBOX_DEFAULT
# 261 "data/maps/Route109_SeashoreHouse/scripts.pory"
	playse SE_TRUCK_DOOR
# 262 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_RECEIVED_HOT_HOUSE_GIFT_MON
# 263 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_EventScript_AlreadyReceivedPokemon::
# 268 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ThanksForCompeting, MSGBOX_DEFAULT
# 269 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_Text_SeashoreHouseIntro::
# 273 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm the owner of the Hot House.\n"
	.string "But you can call me Mr. Sea!\p"
	.string "What I love above all is to see hot\n"
	.string "Pokémon battles.\p"
	.string "Let me see that your heart burns hot!\p"
	.string "If you can defeat all the trainers\n"
	.string "here, I'll reward your efforts.$"

Route109_SeashoreHouse_Text_ShowMeSomeHotMatches::
# 283 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Show me some hot matches!\p"
	.string "I run this Hot House just for\n"
	.string "that reason alone!$"

Route109_SeashoreHouse_Text_TakeThisPokemon::
# 289 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You're blistering hot!\n"
	.string "Those battles blazed!\l"
	.string "I'm more than just satisfied!\p"
	.string "Like my daughter promised, as a reward\n"
	.string "for defeating those scorching hot\l"
	.string "trainers, please accept this Pokémon.$"

Route109_SeashoreHouse_Text_PlayerReceivedReward::
# 298 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"

Route109_SeashoreHouse_Text_PokemonDescribe::
# 302 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That Pokémon is a blazing hot battler,\n"
	.string "just like you!\l"
	.string "I know you'll be able to raise it well!\p"
	.string "Please come back anytime to challenge\n"
	.string "the Hot House again!$"

Route109_SeashoreHouse_Text_ThanksForCompeting::
# 310 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Thanks for competing, you're one\n"
	.string "blazing hot trainer!\p"
	.string "Be sure to come back to try out another\n"
	.string "challenge some time!$"
