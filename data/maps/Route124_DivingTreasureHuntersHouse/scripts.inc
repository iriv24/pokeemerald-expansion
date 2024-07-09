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
Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter::
# 13 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	lock
# 14 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	faceplayer
# 15 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_set FLAG_MET_DIVING_TREASURE_HUNTER, Route124_DivingTreasureHuntersHouse_EventScript_SkipGreeting
# 16 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_Greeting, MSGBOX_DEFAULT
# 17 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setflag FLAG_MET_DIVING_TREASURE_HUNTER
# 18 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard
# 19 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 20 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 21 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_SkipGreeting::
# 22 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_HaveYouSeenAnyShards, MSGBOX_DEFAULT
# 23 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard
# 24 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 25 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 26 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard::
# 27 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards
# 28 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, Route124_DivingTreasureHuntersHouse_EventScript_NoShards
# 29 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_HasShard
# 30 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 31 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 32 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards::
# 33 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_TEMP_1, 0
# 34 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_RED_SHARD
# 35 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_HasRedShard
# 36 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 37 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_HasYellowShard
# 38 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 39 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_HasBlueShard
# 40 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 41 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_HasGreenShard
# 42 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 43 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 44 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasRedShard::
# 45 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 1
# 46 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 47 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 48 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasYellowShard::
# 49 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 2
# 50 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 51 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 52 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasBlueShard::
# 53 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 4
# 54 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 55 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 56 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasGreenShard::
# 57 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 8
# 58 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 59 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 60 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasShard::
# 61 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ThatsAShardIllTradeYou, MSGBOX_DEFAULT
# 62 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions
# 63 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 64 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 65 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions::
# 66 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	message Route124_DivingTreasureHuntersHouse_Text_WhatDoYouWantToTrade
# 67 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	waitmessage
# 68 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_TEMP_1
# 69 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR
# 70 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY
# 71 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY
# 72 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 4,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB
# 73 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 5,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB
# 74 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 6,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB
# 75 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 7,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB
# 76 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 8,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG
# 77 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 9,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG
# 78 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 10, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG
# 79 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 11, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG
# 80 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 12, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG
# 81 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 13, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG
# 82 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 14, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG
# 83 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 15, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG
# 84 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 85 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 86 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR::
# 87 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_R, FALSE
# 88 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 90 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 91 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 92 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 93 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 94 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY::
# 95 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_Y, FALSE
# 96 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 97 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 98 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 99 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 100 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 101 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 102 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY::
# 103 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RY, FALSE
# 104 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 105 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 106 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 107 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 108 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 109 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 110 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 111 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB::
# 112 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_B, FALSE
# 113 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 114 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 115 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 116 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 117 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 118 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 119 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB::
# 120 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RB, FALSE
# 121 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 122 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 123 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 124 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 125 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 126 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 127 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 128 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB::
# 129 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_YB, FALSE
# 130 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 131 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 132 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 133 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 134 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 135 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 136 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 137 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB::
# 138 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RYB, FALSE
# 139 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 140 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 141 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 142 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 143 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 144 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 145 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 146 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 147 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG::
# 148 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_G, FALSE
# 149 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 150 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 151 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 152 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 153 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 154 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 155 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG::
# 156 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RG, FALSE
# 157 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 158 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 159 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 160 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 161 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 162 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 163 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 164 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG::
# 165 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_YG, FALSE
# 166 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 167 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 168 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 169 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 170 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 171 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 172 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 173 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG::
# 174 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RYG, FALSE
# 175 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 176 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 177 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 178 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 179 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 180 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 181 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 182 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 183 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG::
# 184 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_BG, FALSE
# 185 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 186 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 187 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 188 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 189 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 190 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 191 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 192 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG::
# 193 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RBG, FALSE
# 194 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 195 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 196 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 197 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 198 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 199 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 200 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 201 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 202 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG::
# 203 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_YBG, FALSE
# 204 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 205 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 206 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 207 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 208 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 209 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 210 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 211 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 212 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG::
# 213 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RYBG, FALSE
# 214 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 215 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 216 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 217 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 218 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 219 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 4, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 220 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 221 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 222 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 223 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard::
# 224 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_RED_SHARD
# 225 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_FIRE_STONE
# 226 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 227 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 228 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard::
# 229 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_YELLOW_SHARD
# 230 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_THUNDER_STONE
# 231 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 232 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 233 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard::
# 234 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_BLUE_SHARD
# 235 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_WATER_STONE
# 236 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 237 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 238 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard::
# 239 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_GREEN_SHARD
# 240 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_LEAF_STONE
# 241 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 242 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 243 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard::
# 244 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 245 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	bufferitemname STR_VAR_2, VAR_0x8009
# 246 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_YoullTradeShardForStone, MSGBOX_YESNO
# 247 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 248 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitemspace VAR_0x8009
# 249 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_TradeShard
# 250 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem VAR_0x8008, 2
# 251 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route124_DivingTreasureHuntersHouse_EventScript_TradeShard
# 252 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_BagFull
# 253 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 254 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 255 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeShard::
# 256 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	removeitem VAR_0x8008
# 257 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	giveitem VAR_0x8009
# 258 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ItsADeal, MSGBOX_DEFAULT
# 259 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards
# 260 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, Route124_DivingTreasureHuntersHouse_EventScript_EndTrade
# 261 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_TradeSomethingElse, MSGBOX_YESNO
# 262 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions
# 263 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 264 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 265 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 266 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_BagFull::
# 267 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_BagFull, MSGBOX_DEFAULT
# 268 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 269 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 270 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 271 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade::
# 272 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ComeBackIfYouChangeMind, MSGBOX_DEFAULT
# 273 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 274 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 275 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 276 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_NoShards::
# 277 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_YouHaventGotAnyShards, MSGBOX_DEFAULT
# 278 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 279 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 280 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 281 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_EndTrade::
# 282 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 283 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 284 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 285 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardTradeBoard::
# 286 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard, MSGBOX_SIGN
# 287 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 288 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 289 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_Greeting:
# 290 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "I'm the DIVING TREASURE HUNTER!\p"
# 291 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "I'm the awesome dude who makes\n"
# 292 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "deep-sea dives to gather treasures\l"
# 293 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "resting at the bottom.$"
# 294 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 295 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_HaveYouSeenAnyShards:
# 296 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Tell me, have you seen any SHARDS of\n"
# 297 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "tools made in ancient times?$"
# 298 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 299 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_YouHaventGotAnyShards:
# 300 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "You haven't got any treasures\n"
# 301 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "for me…\p"
# 302 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "If you see any SHARDS, like the RED\n"
# 303 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "SHARD, you've got to trade it with me!$"
# 304 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 305 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ThatsAShardIllTradeYou:
# 306 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Oh, hey! That…\n"
# 307 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "That's a SHARD! I'm looking for those!\p"
# 308 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Oh, man, you've got to trade that\n"
# 309 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "with me! I'll give you something good!$"
# 310 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 311 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_WhatDoYouWantToTrade:
# 312 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "What do you want to trade?$"
# 313 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 314 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_YoullTradeShardForStone:
# 315 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "You'll trade your {STR_VAR_1} for\n"
# 316 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "my {STR_VAR_2}, then?$"
# 317 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 318 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ItsADeal:
# 319 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "It's a done deal!\n"
# 320 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Use that wisely!$"
# 321 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 322 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_TradeSomethingElse:
# 323 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Do you want to trade something else?$"
# 324 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 325 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_BagFull:
# 326 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Whoops, your BAG's full.\n"
# 327 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Get rid of some items, friend!$"
# 328 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 329 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ComeBackIfYouChangeMind:
# 330 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "No? That's a downer.\n"
# 331 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Well, if you change your mind, come back.$"
# 332 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 333 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard:
# 334 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 335 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0f}RED SHARD{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x7b}FIRE STONE{CLEAR_TO 0xc8}\p"
# 336 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 337 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x06}YELLOW SHARD{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x73}THUNDERSTONE{CLEAR_TO 0xc8}\p"
# 338 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 339 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0c}BLUE SHARD{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x79}WATER STONE{CLEAR_TO 0xc8}\p"
# 340 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 341 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x08}GREEN SHARD{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x7b}LEAF STONE$"
# 342 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 343 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 344 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_EventScript::
# 345 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	lockall
# 346 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setflag FLAG_EGG_MOVE_TUTOR
# 347 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	applymovement LOCALID_EGG_TUTOR, Common_Movement_FacePlayer
# 348 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	waitmovement 0
# 349 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox General_EggTutor_Text_ImTheEggTutor, MSGBOX_DEFAULT
# 350 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto General_EggTutor_EventScript_AskTeachMove
# 351 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 352 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 353 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 354 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 355 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_EventScript_AskTeachMove::
# 356 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox General_EggTutor_Text_WantMeToTeachMove, MSGBOX_YESNO
# 357 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 358 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case NO, General_EggTutor_EventScript_ComeBackWithHeartScale
# 359 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto General_EggTutor_EventScript_ChooseMon
# 360 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 361 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 362 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 363 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_EventScript_ChooseMon::
# 364 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox General_EggTutor_Text_TutorWhichMon, MSGBOX_DEFAULT
# 365 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 366 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	waitstate
# 367 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, General_EggTutor_EventScript_ComeBackWithHeartScale
# 368 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	special IsSelectedMonEgg
# 369 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, General_EggTutor_EventScript_CantTeachEgg
# 370 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, General_EggTutor_EventScript_NoMoveToTeachMon
# 371 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto General_EggTutor_EventScript_ChooseMove
# 372 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 373 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 374 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_EventScript_ChooseMove::
# 375 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox General_EggTutor_Text_TeachWhichMove, MSGBOX_DEFAULT
# 376 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 377 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	waitstate
# 378 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, General_EggTutor_EventScript_ChooseMon
# 379 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox General_EggTutor_Text_ThereYouGo, MSGBOX_DEFAULT
# 380 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto General_EggTutor_EventScript_ComeBackWithHeartScale
# 381 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 382 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 383 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_EventScript_NoMoveToTeachMon::
# 384 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox General_EggTutor_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 385 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto General_EggTutor_EventScript_ChooseMon
# 386 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 387 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 388 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_EventScript_CantTeachEgg::
# 389 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox General_EggTutor_Text_CantTeachEgg, MSGBOX_DEFAULT
# 390 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto General_EggTutor_EventScript_ChooseMon
# 391 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 392 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 393 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_EventScript_ComeBackWithHeartScale::
# 394 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox General_EggTutor_Text_ComeBack, MSGBOX_DEFAULT
# 395 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 396 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	releaseall
# 397 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 398 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 399 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_Text_ImTheEggTutor:
# 400 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Hello, I'm an Egg Move Tutor. I can\n"
# 401 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "teach your Pokémon any Egg Moves they\l"
# 402 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "could possibly learn.$"
# 403 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 404 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_Text_WantMeToTeachMove:
# 405 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Would you like me to teach one of your\n"
# 406 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Pokémon an Egg Move?$"
# 407 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 408 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_Text_TutorWhichMon:
# 409 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Which Pokémon?$"
# 410 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 411 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_Text_TeachWhichMove:
# 412 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Which move should I teach?$"
# 413 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 414 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_Text_DontHaveMoveToTeachPokemon:
# 415 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "That Pokémon doesn't have any  Egg\n"
# 416 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Moves.$"
# 417 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 418 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_Text_ThereYouGo:
# 419 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "There you go.$"
# 420 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 421 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_Text_ComeBack:
# 422 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Come back if you want your Pokémon to\n"
# 423 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "learn more Egg Moves.$"
# 424 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 425 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
General_EggTutor_Text_CantTeachEgg:
# 426 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Just because I'm an Egg Move tutor\n"
# 427 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "doesn't mean I can teach moves to an\l"
# 428 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Egg!$"

Route124_DivingTreasureHuntersHouse_EventScript_FormChangingLady::
# 432 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	lock
# 433 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	faceplayer
# 434 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_FORM_CHANGERS, Route124_DivingTreasureHuntersHouse_EventScript_ReceivedFormChangers
# 435 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_TakeTheseFormChangers, MSGBOX_DEFAULT
# 436 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	giveitem ITEM_ROTOM_CATALOG
# 437 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	giveitem ITEM_REVEAL_GLASS
# 438 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	giveitem ITEM_GRACIDEA
# 439 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	giveitem ITEM_PRISON_BOTTLE
# 440 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setflag FLAG_RECEIVED_FORM_CHANGERS
# 441 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_ExplainFormChangers, MSGBOX_DEFAULT
# 442 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
	end


Route124_DivingTreasureHuntersHouse_EventScript_ReceivedFormChangers::
# 448 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_ExplainFormChangers, MSGBOX_DEFAULT
# 449 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
	end


Route124_TakeTheseFormChangers::
# 453 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Well, well. You must be quite the strong\n"
	.string "trainer having made it all the way here,\l"
	.string "especially in this heat!\p"
	.string "Here, take these, I'm sure a trainer like\n"
	.string "you can make good use of them.$"

Route124_ExplainFormChangers::
# 461 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "It's my understanding that you can\n"
	.string "change the forms of some very powerful\l"
	.string "Pokémon using those.$"
