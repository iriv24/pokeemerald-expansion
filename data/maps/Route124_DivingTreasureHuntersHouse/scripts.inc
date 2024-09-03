# 1 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 2 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
.set LOCALID_EGG_TUTOR, 1
# 3 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 4 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_MapScripts::
# 5 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_DivingTreasureHuntersHouse_OnTransition
# 6 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.byte 0
# 7 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 8 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_OnTransition:
# 9 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setflag FLAG_LANDMARK_HUNTERS_HOUSE
# 10 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 11 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 12 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_Man::
# 13 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_GreetingMan, MSGBOX_NPC
# 14 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 15 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 16 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter::
# 17 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	lock
# 18 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	faceplayer
# 19 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_set FLAG_MET_DIVING_TREASURE_HUNTER, Route124_DivingTreasureHuntersHouse_EventScript_SkipGreeting
# 20 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_Greeting, MSGBOX_DEFAULT
# 21 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setflag FLAG_MET_DIVING_TREASURE_HUNTER
# 22 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard
# 23 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 24 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 25 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_SkipGreeting::
# 26 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_HaveYouSeenAnyShards, MSGBOX_DEFAULT
# 27 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard
# 28 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 29 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 30 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard::
# 31 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards
# 32 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, Route124_DivingTreasureHuntersHouse_EventScript_NoShards
# 33 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_HasShard
# 34 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 35 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 36 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards::
# 37 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_TEMP_1, 0
# 38 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_RED_SHARD
# 39 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_HasRedShard
# 40 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 41 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_HasYellowShard
# 42 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 43 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_HasBlueShard
# 44 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 45 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_HasGreenShard
# 46 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 47 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 48 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasRedShard::
# 49 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 1
# 50 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 51 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 52 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasYellowShard::
# 53 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 2
# 54 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 55 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 56 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasBlueShard::
# 57 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 4
# 58 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 59 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 60 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasGreenShard::
# 61 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 8
# 62 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 63 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 64 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasShard::
# 65 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ThatsAShardIllTradeYou, MSGBOX_DEFAULT
# 66 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions
# 67 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 68 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 69 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions::
# 70 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	message Route124_DivingTreasureHuntersHouse_Text_WhatDoYouWantToTrade
# 71 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	waitmessage
# 72 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_TEMP_1
# 73 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR
# 74 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY
# 75 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY
# 76 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 4,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB
# 77 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 5,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB
# 78 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 6,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB
# 79 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 7,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB
# 80 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 8,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG
# 81 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 9,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG
# 82 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 10, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG
# 83 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 11, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG
# 84 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 12, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG
# 85 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 13, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG
# 86 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 14, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG
# 87 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 15, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG
# 88 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 89 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 90 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR::
# 91 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_R, FALSE
# 92 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 94 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 95 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 96 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 97 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 98 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY::
# 99 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_Y, FALSE
# 100 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 101 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 102 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 103 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 104 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 105 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 106 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY::
# 107 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RY, FALSE
# 108 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 109 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 110 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 111 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 112 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 113 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 114 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 115 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB::
# 116 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_B, FALSE
# 117 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 118 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 119 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 120 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 121 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 122 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 123 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB::
# 124 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RB, FALSE
# 125 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 126 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 127 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 128 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 129 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 130 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 131 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 132 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB::
# 133 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_YB, FALSE
# 134 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 135 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 136 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 137 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 138 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 139 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 140 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 141 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB::
# 142 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RYB, FALSE
# 143 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 145 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 146 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 147 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 148 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 149 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 150 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 151 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG::
# 152 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_G, FALSE
# 153 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 154 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 155 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 156 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 157 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 158 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 159 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG::
# 160 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RG, FALSE
# 161 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 162 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 163 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 164 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 165 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 166 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 167 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 168 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG::
# 169 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_YG, FALSE
# 170 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 171 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 172 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 173 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 174 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 175 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 176 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 177 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG::
# 178 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RYG, FALSE
# 179 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 180 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 181 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 182 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 183 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 184 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 185 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 186 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 187 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG::
# 188 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_BG, FALSE
# 189 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 190 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 191 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 192 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 193 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 194 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 195 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 196 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG::
# 197 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RBG, FALSE
# 198 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 199 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 200 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 201 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 202 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 203 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 204 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 205 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 206 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG::
# 207 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_YBG, FALSE
# 208 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 209 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 210 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 211 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 212 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 213 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 214 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 215 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 216 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG::
# 217 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RYBG, FALSE
# 218 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 219 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 220 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 221 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 222 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 223 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 4, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 224 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 225 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 226 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 227 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard::
# 228 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_RED_SHARD
# 229 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_FIRE_STONE
# 230 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 231 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 232 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard::
# 233 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_YELLOW_SHARD
# 234 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_THUNDER_STONE
# 235 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 236 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 237 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard::
# 238 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_BLUE_SHARD
# 239 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_WATER_STONE
# 240 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 241 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 242 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard::
# 243 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_GREEN_SHARD
# 244 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_LEAF_STONE
# 245 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 246 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 247 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard::
# 248 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 249 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	bufferitemname STR_VAR_2, VAR_0x8009
# 250 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_YoullTradeShardForStone, MSGBOX_YESNO
# 251 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 252 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitemspace VAR_0x8009
# 253 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_TradeShard
# 254 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem VAR_0x8008, 2
# 255 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route124_DivingTreasureHuntersHouse_EventScript_TradeShard
# 256 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_BagFull
# 257 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 258 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 259 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeShard::
# 260 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	removeitem VAR_0x8008
# 261 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	giveitem VAR_0x8009
# 262 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ItsADeal, MSGBOX_DEFAULT
# 263 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards
# 264 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, Route124_DivingTreasureHuntersHouse_EventScript_EndTrade
# 265 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_TradeSomethingElse, MSGBOX_YESNO
# 266 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions
# 267 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 268 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 269 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 270 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_BagFull::
# 271 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_BagFull, MSGBOX_DEFAULT
# 272 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 273 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 274 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 275 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade::
# 276 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ComeBackIfYouChangeMind, MSGBOX_DEFAULT
# 277 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 278 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 279 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 280 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_NoShards::
# 281 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_YouHaventGotAnyShards, MSGBOX_DEFAULT
# 282 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 283 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 284 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 285 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_EndTrade::
# 286 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 287 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 288 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 289 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardTradeBoard::
# 290 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard, MSGBOX_SIGN
# 291 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 292 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 293 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_GreetingMan:
# 294 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "My wife was quite the strong trainer\n"
# 295 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "back in our youth.$"
# 296 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 297 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_Greeting:
# 298 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "I'm the DIVING TREASURE HUNTER!\p"
# 299 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "I'm the awesome dude who makes\n"
# 300 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "deep-sea dives to gather treasures\l"
# 301 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "resting at the bottom.$"
# 302 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 303 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_HaveYouSeenAnyShards:
# 304 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Tell me, have you seen any SHARDS of\n"
# 305 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "tools made in ancient times?$"
# 306 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 307 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_YouHaventGotAnyShards:
# 308 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "You haven't got any treasures\n"
# 309 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "for me…\p"
# 310 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "If you see any SHARDS, like the RED\n"
# 311 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "SHARD, you've got to trade it with me!$"
# 312 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 313 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ThatsAShardIllTradeYou:
# 314 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Oh, hey! That…\n"
# 315 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "That's a SHARD! I'm looking for those!\p"
# 316 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Oh, man, you've got to trade that\n"
# 317 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "with me! I'll give you something good!$"
# 318 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 319 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_WhatDoYouWantToTrade:
# 320 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "What do you want to trade?$"
# 321 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 322 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_YoullTradeShardForStone:
# 323 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "You'll trade your {STR_VAR_1} for\n"
# 324 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "my {STR_VAR_2}, then?$"
# 325 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 326 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ItsADeal:
# 327 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "It's a done deal!\n"
# 328 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Use that wisely!$"
# 329 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 330 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_TradeSomethingElse:
# 331 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Do you want to trade something else?$"
# 332 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 333 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_BagFull:
# 334 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Whoops, your BAG's full.\n"
# 335 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Get rid of some items, friend!$"
# 336 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 337 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ComeBackIfYouChangeMind:
# 338 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "No? That's a downer.\n"
# 339 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Well, if you change your mind, come back.$"
# 340 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 341 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard:
# 342 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 343 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0f}RED SHARD{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x7b}FIRE STONE{CLEAR_TO 0xc8}\p"
# 344 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 345 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x06}YELLOW SHARD{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x73}THUNDERSTONE{CLEAR_TO 0xc8}\p"
# 346 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 347 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0c}BLUE SHARD{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x79}WATER STONE{CLEAR_TO 0xc8}\p"
# 348 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 349 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x08}GREEN SHARD{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x7b}LEAF STONE$"

Route124_DivingTreasureHuntersHouse_EventScript_FormChangingLady::
# 354 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	lock
# 355 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	faceplayer
# 356 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_FORM_CHANGERS, Route124_DivingTreasureHuntersHouse_EventScript_ReceivedFormChangers
# 357 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_TakeTheseFormChangers, MSGBOX_DEFAULT
# 358 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	giveitem ITEM_ROTOM_CATALOG
# 359 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	giveitem ITEM_REVEAL_GLASS
# 360 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	giveitem ITEM_GRACIDEA
# 361 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	giveitem ITEM_PRISON_BOTTLE
# 362 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setflag FLAG_RECEIVED_FORM_CHANGERS
# 363 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_ExplainFormChangers, MSGBOX_DEFAULT
# 364 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
	end


Route124_DivingTreasureHuntersHouse_EventScript_ReceivedFormChangers::
# 370 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_ExplainFormChangers, MSGBOX_DEFAULT
# 371 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
	end


Route124_TakeTheseFormChangers::
# 375 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Well, well. You must be quite the strong\n"
	.string "trainer having made it all the way here,\l"
	.string "especially in this heat!\p"
	.string "Here, take these, I'm sure a trainer like\n"
	.string "you can make good use of them.$"

Route124_ExplainFormChangers::
# 383 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "It's my understanding that you can\n"
	.string "change the forms of some very powerful\l"
	.string "Pokémon using those.$"
